#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_004B9030_0x4b9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_004B9030_0x4b9030");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::log(rdram, ctx, runtime); 
}
