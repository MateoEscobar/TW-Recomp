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

// Function: sub_00151CD8
// Address: 0x151cd8 - 0x151d28
void sub_00151CD8_0x151cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151CD8_0x151cd8");
#endif

    switch (ctx->pc) {
        case 0x151cf8u: goto label_151cf8;
        default: break;
    }

    ctx->pc = 0x151cd8u;

    // 0x151cd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151cdc: 0x8c63c20c  lw          $v1, -0x3DF4($v1)
    ctx->pc = 0x151cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x151ce0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x151ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151ce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x151CE4u;
    {
        const bool branch_taken_0x151ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CE4u;
        // 0x151ce8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ce4) {
            ctx->pc = 0x151D20u;
            goto label_151d20;
        }
    }
    ctx->pc = 0x151CECu;
    // 0x151cec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x151cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151cf0: 0x24463ac8  addiu       $a2, $v0, 0x3AC8
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x151cf4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x151cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_151cf8:
    // 0x151cf8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151CFCu;
    {
        const bool branch_taken_0x151cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cfc) {
            ctx->pc = 0x151D0Cu;
            goto label_151d0c;
        }
    }
    ctx->pc = 0x151D04u;
    // 0x151d04: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D04u;
    {
        const bool branch_taken_0x151d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x151d04) {
            ctx->pc = 0x151D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151D04u;
            // 0x151d08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151D14u;
            goto label_151d14;
        }
    }
    ctx->pc = 0x151D0Cu;
label_151d0c:
    // 0x151d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x151D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D0Cu;
        // 0x151d10: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D14u;
label_151d14:
    // 0x151d14: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x151d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151d18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x151D18u;
    {
        const bool branch_taken_0x151d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D18u;
        // 0x151d1c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d18) {
            ctx->pc = 0x151CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151D20u;
label_151d20:
    // 0x151d20: 0x3e00008  jr          $ra
    ctx->pc = 0x151D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D20u;
        // 0x151d24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D28u;
}
