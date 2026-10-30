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

// Function: sub_0010F018
// Address: 0x10f018 - 0x10f030
void sub_0010F018_0x10f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F018_0x10f018");
#endif

    ctx->pc = 0x10f018u;

    // 0x10f018: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f01c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f020: 0x8c468670  lw          $a2, -0x7990($v0)
    ctx->pc = 0x10f020u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x598670u));
    // 0x10f024: 0x90a4000f  lbu         $a0, 0xF($a1)
    ctx->pc = 0x10f024u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f02c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x10f030u;
}
