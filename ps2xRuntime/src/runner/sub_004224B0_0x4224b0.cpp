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

// Function: sub_004224B0
// Address: 0x4224b0 - 0x4224c4
void sub_004224B0_0x4224b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004224B0_0x4224b0");
#endif

    switch (ctx->pc) {
        case 0x4224bcu: goto label_4224bc;
        default: break;
    }

    ctx->pc = 0x4224b0u;

    // 0x4224b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4224b4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x4224b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4224b8: 0x24425830  addiu       $v0, $v0, 0x5830
    ctx->pc = 0x4224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22576));
label_4224bc:
    // 0x4224bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4224c0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x4224c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x4224c4u;
}
