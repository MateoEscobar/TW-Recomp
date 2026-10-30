#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_004AA3D0_0x4aa3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_004AA3D0_0x4aa3d0");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceGsSetDefDispEnv(rdram, ctx, runtime); 
}
