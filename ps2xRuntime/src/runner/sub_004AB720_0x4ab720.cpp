#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_004AB720_0x4ab720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_004AB720_0x4ab720");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceDmaGetChan(rdram, ctx, runtime); 
}
