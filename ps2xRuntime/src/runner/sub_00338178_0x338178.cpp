#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00338178
// Address: 0x338178 - 0x338240
void sub_00338178_0x338178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338178_0x338178");
#endif

    ctx->pc = 0x338178u;

    // 0x338178: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x338178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33817c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x33817cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x338180: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x338180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338184: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x338184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x338188: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x338188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33818c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x33818cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x338190: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x338190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338194: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x338194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x338198: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x338198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33819c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x33819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x3381a0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3381a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381a4: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x3381a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x3381a8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3381a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381ac: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x3381acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3381b0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3381b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381b4: 0xe4a10024  swc1        $f1, 0x24($a1)
    ctx->pc = 0x3381b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x3381b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3381b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381bc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x3381bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x3381c0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381c4: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x3381c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x3381c8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3381c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381cc: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x3381ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x3381d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3381d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381d4: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x3381d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x3381d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3381d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381dc: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x3381dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x3381e0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3381e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381e4: 0xe4a10044  swc1        $f1, 0x44($a1)
    ctx->pc = 0x3381e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x3381e8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381ec: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x3381ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x3381f0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3381f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3381f4: 0xe4a10050  swc1        $f1, 0x50($a1)
    ctx->pc = 0x3381f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x3381f8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3381f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3381fc: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x3381fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x338200: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x338200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338204: 0xe4a10058  swc1        $f1, 0x58($a1)
    ctx->pc = 0x338204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x338208: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x338208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33820c: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x33820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x338210: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x338210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338214: 0xe4a10064  swc1        $f1, 0x64($a1)
    ctx->pc = 0x338214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x338218: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x338218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33821c: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x33821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x338220: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x338220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338224: 0xe4a10070  swc1        $f1, 0x70($a1)
    ctx->pc = 0x338224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x338228: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x338228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33822c: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x33822cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x338230: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x338230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338234: 0x3e00008  jr          $ra
    ctx->pc = 0x338234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338234u;
        // 0x338238: 0xe4a10078  swc1        $f1, 0x78($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33823Cu;
    // 0x33823c: 0x0  nop
    ctx->pc = 0x33823cu;
    // NOP
    ctx->pc = 0x338240u;
}
