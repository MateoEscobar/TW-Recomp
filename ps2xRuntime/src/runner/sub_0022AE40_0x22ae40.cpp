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

// Function: sub_0022AE40
// Address: 0x22ae40 - 0x22ae4c
void sub_0022AE40_0x22ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE40_0x22ae40");
#endif

    ctx->pc = 0x22ae40u;

    // 0x22ae40: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x22ae44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AE44u;
    {
        const bool branch_taken_0x22ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE44u;
        // 0x22ae48: 0x24460164  addiu       $a2, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae44) {
            ctx->pc = 0x22AE58u;
            return;
        }
    }
    ctx->pc = 0x22AE4Cu;
}
