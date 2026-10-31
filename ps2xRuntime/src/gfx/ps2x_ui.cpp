#include "gfx/ps2x_ui.h"

#include "gfx/video_state.h"
#if defined(_WIN32)
#include "gfx/d3d11/ui_d3d11.h"   // imgui_impl_dx11 backend (compiled only on Windows)
#endif

#include "gfx/twgl_api.h"   // [B] warriors* API bridge
#include "gfx/gl/GlApi.h"   // [netplay] the project's own GL entry points (ps2xgl::gl*)
#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "runtime/ui_sdl.h"   // [C] ImGui platform backend on SDL2 (replaces rlImGui)

#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace ps2x::gfx
{
    // Feed raylib's mouse/keyboard state into ImGui. imgui_impl_dx11 only renders; input
    // is ours because raylib owns the window proc (we cannot hook a Win32 WndProc).
    static void feedImGuiInput()
    {
        ImGuiIO &io = ImGui::GetIO();

        // imgui_impl_dx11 does not set the display size (that is imgui_impl_win32's job,
        // and we do not use it). Without this ImGui keeps its default (-1,-1) and clips
        // every window to nothing. raylib owns the window, so read it from there; the
        // D3D11 back buffer matches the client size 1:1.
        io.DisplaySize = ImVec2((float)warriorsGetScreenWidth(), (float)warriorsGetScreenHeight());
        io.DisplayFramebufferScale = ImVec2(1.0f, 1.0f);

        const warriorsVector2 mp = warriorsGetMousePosition();
        io.AddMousePosEvent(mp.x, mp.y);
        io.AddMouseButtonEvent(0, warriorsIsMouseButtonDown(Warriors_MOUSE_BUTTON_LEFT));
        io.AddMouseButtonEvent(1, warriorsIsMouseButtonDown(Warriors_MOUSE_BUTTON_RIGHT));
        io.AddMouseButtonEvent(2, warriorsIsMouseButtonDown(Warriors_MOUSE_BUTTON_MIDDLE));
        const warriorsVector2 wheel = warriorsGetMouseWheelMoveV();
        io.AddMouseWheelEvent(wheel.x, wheel.y);

        int c = 0;
        while ((c = warriorsGetCharPressed()) > 0)
            io.AddInputCharacter(static_cast<unsigned>(c));

        auto key = [&](int rl, ImGuiKey im) { io.AddKeyEvent(im, warriorsIsKeyDown(rl) != 0); };
        key(Warriors_KEY_ESCAPE, ImGuiKey_Escape);
        key(Warriors_KEY_ENTER, ImGuiKey_Enter);
        key(Warriors_KEY_TAB, ImGuiKey_Tab);
        key(Warriors_KEY_BACKSPACE, ImGuiKey_Backspace);
        key(Warriors_KEY_DELETE, ImGuiKey_Delete);
        key(Warriors_KEY_RIGHT, ImGuiKey_RightArrow);
        key(Warriors_KEY_LEFT, ImGuiKey_LeftArrow);
        key(Warriors_KEY_UP, ImGuiKey_UpArrow);
        key(Warriors_KEY_DOWN, ImGuiKey_DownArrow);
        key(Warriors_KEY_HOME, ImGuiKey_Home);
        key(Warriors_KEY_END, ImGuiKey_End);
        key(Warriors_KEY_PAGE_UP, ImGuiKey_PageUp);
        key(Warriors_KEY_PAGE_DOWN, ImGuiKey_PageDown);
        key(Warriors_KEY_LEFT_SHIFT, ImGuiKey_LeftShift);
        key(Warriors_KEY_RIGHT_SHIFT, ImGuiKey_RightShift);
        key(Warriors_KEY_LEFT_CONTROL, ImGuiKey_LeftCtrl);
        key(Warriors_KEY_RIGHT_CONTROL, ImGuiKey_RightCtrl);
        key(Warriors_KEY_LEFT_ALT, ImGuiKey_LeftAlt);
        key(Warriors_KEY_RIGHT_ALT, ImGuiKey_RightAlt);
        // ImGuiKey_A..Z and ImGuiKey_0..9 are contiguous in ImGui; raylib's Warriors_KEY_A..Z and
        // Warriors_KEY_ZERO..NINE are too.
        for (int k = 0; k < 26; ++k)
            io.AddKeyEvent(static_cast<ImGuiKey>(ImGuiKey_A + k), warriorsIsKeyDown(Warriors_KEY_A + k) != 0);
        for (int k = 0; k < 10; ++k)
            io.AddKeyEvent(static_cast<ImGuiKey>(ImGuiKey_0 + k), warriorsIsKeyDown(Warriors_KEY_ZERO + k) != 0);
    }

    // [C] The overlay is ImGui over OUR backends: imgui_impl_sdl2 for the platform/input and
    // imgui_impl_opengl3 (or imgui_impl_dx11) to draw. rlImGui is gone, so the overlay no longer draws
    // through rlgl either. PS2X_UIGL is kept only as an escape hatch back to the raylib-fed input
    // (1 = force the SDL2 platform backend, 0 = force the raylib feeder).
    // [C] true once the SDL2 platform backend owns the input. When it fails (no SDL window, no SDL2
    // build) the overlay keeps the raylib-fed inputs, which is what it did before.
    static bool UiSdlInputActive()
    {
        static const bool s = [](){
            const char *v = std::getenv("PS2X_UISDL");
            if (v && v[0] == '0') return false;
            return UiSdlInit(warriorsGetWindowHandle(), UiSdlCurrentGlContext());
        }();
        return s;
    }

    void UiSetup()
    {
#if defined(_WIN32)
        if (NativeVideo())
        {
            UiD3D11Init(*VideoDevice());
            return;
        }
#endif
        {
            // The GL overlay needs its own ImGui context (imgui_impl_opengl3 does not create one, and
            // ImGui::NewFrame on a null context is what crashed the runner).
            ImGui::CreateContext();
            ImGuiIO &io = ImGui::GetIO();
            io.DisplaySize = ImVec2((float)warriorsGetScreenWidth(), (float)warriorsGetScreenHeight());
            io.DisplayFramebufferScale = ImVec2(1.0f, 1.0f);
            const bool ok = ImGui_ImplOpenGL3_Init("#version 330");
            std::fprintf(stderr, "[uigl] imgui_impl_opengl3 init=%d (context created)\n", (int)ok);
            UiSdlInputActive();
        }
    }

    void UiBegin()
    {
#if defined(_WIN32)
        if (NativeVideo())
        {
            UiD3D11NewFrame();
            feedImGuiInput();
            ImGui::NewFrame();
            return;
        }
#endif
        {
            if (UiSdlInputActive()) UiSdlNewFrame(); else feedImGuiInput();
            ImGui_ImplOpenGL3_NewFrame();
            {   // [uisize] PS2X_UILOG=1: the overlay's idea of the screen vs raylib's, whenever either changes (window-mode switches)
                static const bool s_log = [](){ const char *v = std::getenv("PS2X_UILOG"); return v && v[0] && v[0] != '0'; }();
                if (s_log)
                {
                    const ImGuiIO &io = ImGui::GetIO();
                    static float prev[6] = {-1, -1, -1, -1, -1, -1};
                    const float cur[6] = { io.DisplaySize.x, io.DisplaySize.y, io.DisplayFramebufferScale.x, io.DisplayFramebufferScale.y, (float)warriorsGetScreenWidth(), (float)warriorsGetScreenHeight() };
                    bool ch = false; for (int i = 0; i < 6; ++i) ch |= cur[i] != prev[i];
                    if (ch) { std::memcpy(prev, cur, sizeof prev); std::fprintf(stderr, "[uisize] imgui display %.0fx%.0f fbscale %.2fx%.2f | raylib screen %dx%d render %dx%d fullscreen %d\n", cur[0], cur[1], cur[2], cur[3], warriorsGetScreenWidth(), warriorsGetScreenHeight(), warriorsGetRenderWidth(), warriorsGetRenderHeight(), (int)warriorsIsWindowFullscreen()); }
                }
            }
            ImGui::NewFrame();
        }
    }

    void UiEnd()
    {
#if defined(_WIN32)
        if (NativeVideo())
        {
            UiD3D11Render();   // ImGui::Render() + ImGui_ImplDX11_RenderDrawData()
            return;
        }
#endif
        {
            // rlgl is still alive: flush the batch so our raw-GL overlay draws on top of it, then
            // hand the state back through rlgl's own API (rlgl caches blend/program/texture and
            // only re-applies what it thinks changed -- the same trap as the present).
            warriorsrlDrawRenderBatchActive();
            ImGui::Render();
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
            warriorsrlEnableColorBlend();
            warriorsrlSetBlendMode(WarriorsRL_BLEND_ALPHA);
            warriorsrlActiveTextureSlot(0);
            warriorsrlDisableTexture();
            warriorsrlDisableShader();
            warriorsrlDrawRenderBatchActive();
        }
    }

    void UiShutdown()
    {
#if defined(_WIN32)
        if (NativeVideo())
        {
            UiD3D11Shutdown();
            return;
        }
#endif
        {
            UiSdlShutdown();
            ImGui_ImplOpenGL3_Shutdown();
        }
    }

    void UiDrawTestWindow()
    {
        UiBegin();
        ImGui::Begin("D3D11 UI test");
        ImGui::Text("ImGui over D3D11 OK: %.1f fps", ImGui::GetIO().Framerate);
        ImGui::End();
#if defined(_WIN32)
        if (NativeVideo())
            UiD3D11Render();   // ImGui::Render() + ImGui_ImplDX11_RenderDrawData()
        else
#endif
        {
            warriorsrlDrawRenderBatchActive();
            ImGui::Render();
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        }
        ImDrawData *dd = ImGui::GetDrawData();
        static int n = 0;
        if (n++ < 3)
        {
            const ImGuiIO &io = ImGui::GetIO();
            std::fprintf(stderr, "[uitest] display=%.0fx%.0f fbScale=%.2fx%.2f valid=%d cmdlists=%d vtx=%d\n",
                         io.DisplaySize.x, io.DisplaySize.y, io.DisplayFramebufferScale.x, io.DisplayFramebufferScale.y,
                         (int)(dd && dd->Valid), dd ? dd->CmdListsCount : -1, dd ? dd->TotalVtxCount : -1);
        }
    }
}

// [netplay] Upload RGBA8 and return the id to sample it with.
//
// This ImGui (1.93 docking) takes an ImTextureRef built from the backend's own handle -- there is
// no ImGui::CreateTexture*, so the texture is created here with the same raw-GL recipe the
// front-end already uses for its background (fe_background.cpp): glGenTextures + glTexImage2D.
// ImGui's GL3 renderer binds whatever handle it is given, so no renderer-side registration is
// needed as long as the context is current, which it is between UiBegin() and UiEnd().
//
// The native-D3D11 path has no texture-upload entry point in ui_d3d11.h, and adding Windows-only
// code that cannot be compiled or tested from here is how a build gets broken on the one platform
// nobody can check -- so that branch returns null and the popup draws without the art. PS2X_D3D11
// is off by default; the default Windows path is OpenGL, which is the branch below and does show
// it. Whoever implements the D3D11 side only has to fill that branch in.
unsigned long long ps2x::gfx::UiLoadTextureRgba(const void *rgba, int w, int h)
{
    if (!rgba || w <= 0 || h <= 0)
        return 0;
    if (NativeVideo())
        return 0;
    ps2xgl::GLuint tex = 0;
    ps2xgl::glGenTextures(1, &tex);
    if (!tex)
        return 0;
    const unsigned char *px = static_cast<const unsigned char *>(rgba);
    ps2xgl::glBindTexture(ps2xgl::GL_TEXTURE_2D, tex);
    ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, ps2xgl::GL_TEXTURE_MIN_FILTER, ps2xgl::GL_LINEAR);
    ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, ps2xgl::GL_TEXTURE_MAG_FILTER, ps2xgl::GL_LINEAR);
    ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, ps2xgl::GL_TEXTURE_WRAP_S, ps2xgl::GL_CLAMP_TO_EDGE);
    ps2xgl::glTexParameteri(ps2xgl::GL_TEXTURE_2D, ps2xgl::GL_TEXTURE_WRAP_T, ps2xgl::GL_CLAMP_TO_EDGE);
    ps2xgl::glTexImage2D(ps2xgl::GL_TEXTURE_2D, 0, ps2xgl::GL_RGBA, w, h, 0, ps2xgl::GL_RGBA,
                         ps2xgl::GL_UNSIGNED_BYTE, px);
    ps2xgl::glBindTexture(ps2xgl::GL_TEXTURE_2D, 0);
    return (unsigned long long)tex;
}
