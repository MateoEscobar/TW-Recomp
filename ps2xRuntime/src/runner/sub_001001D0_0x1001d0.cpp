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

// Function: sub_001001D0
// Address: 0x1001d0 - 0x100200
void sub_001001D0_0x1001d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001D0_0x1001d0");
#endif

    switch (ctx->pc) {
        case 0x1001d8u: goto label_1001d8;
        default: break;
    }

    ctx->pc = 0x1001d0u;

    // 0x1001d0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1001d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1001d4: 0xc  syscall     0
    ctx->pc = 0x1001d4u;
    ctx->pc = 0x1001D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1001d8:
    // 0x1001d8: 0x0  nop
    ctx->pc = 0x1001d8u;
    // NOP
    // 0x1001dc: 0x0  nop
    ctx->pc = 0x1001dcu;
    // NOP
    // 0x1001e0: 0x0  nop
    ctx->pc = 0x1001e0u;
    // NOP
    // 0x1001e4: 0x0  nop
    ctx->pc = 0x1001e4u;
    // NOP
    // 0x1001e8: 0x0  nop
    ctx->pc = 0x1001e8u;
    // NOP
    // 0x1001ec: 0x0  nop
    ctx->pc = 0x1001ecu;
    // NOP
    // 0x1001f0: 0x0  nop
    ctx->pc = 0x1001f0u;
    // NOP
    // 0x1001f4: 0x0  nop
    ctx->pc = 0x1001f4u;
    // NOP
    // 0x1001f8: 0x0  nop
    ctx->pc = 0x1001f8u;
    // NOP
    // 0x1001fc: 0x0  nop
    ctx->pc = 0x1001fcu;
    // NOP
    ctx->pc = 0x100200u;
}
