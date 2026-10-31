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

// Function: sub_004F2D50
// Address: 0x4f2d50 - 0x4f2dc8
void sub_004F2D50_0x4f2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2D50_0x4f2d50");
#endif

    switch (ctx->pc) {
        case 0x4f2d68u: goto label_4f2d68;
        default: break;
    }

    ctx->pc = 0x4f2d50u;

    // 0x4f2d50: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F2D50u;
    {
        const bool branch_taken_0x4f2d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D50u;
        // 0x4f2d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d50) {
            ctx->pc = 0x4F2DBCu;
            goto label_4f2dbc;
        }
    }
    ctx->pc = 0x4F2D58u;
    // 0x4f2d58: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f2d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f2d5c: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F2D5Cu;
    {
        const bool branch_taken_0x4f2d5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D5Cu;
        // 0x4f2d60: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d5c) {
            ctx->pc = 0x4F2DBCu;
            goto label_4f2dbc;
        }
    }
    ctx->pc = 0x4F2D64u;
    // 0x4f2d64: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f2d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f2d68:
    // 0x4f2d68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f2d6c: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f2d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f2d70: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2d74: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F2D74u;
    {
        const bool branch_taken_0x4f2d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2D74u;
        // 0x4f2d78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d74) {
            ctx->pc = 0x4F2DACu;
            goto label_4f2dac;
        }
    }
    ctx->pc = 0x4F2D7Cu;
    // 0x4f2d7c: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f2d80: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f2d84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f2d88: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f2d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f2d90: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f2d90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f2d94: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f2d98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f2d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f2da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f2da4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DA4u;
        // 0x4f2da8: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2DACu;
label_4f2dac:
    // 0x4f2dac: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f2dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2db0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f2db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f2db4: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F2DB4u;
    {
        const bool branch_taken_0x4f2db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f2db4) {
            ctx->pc = 0x4F2DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2DB4u;
            // 0x4f2db8: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2d68;
        }
    }
    ctx->pc = 0x4F2DBCu;
label_4f2dbc:
    // 0x4f2dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2DC4u;
    // 0x4f2dc4: 0x0  nop
    ctx->pc = 0x4f2dc4u;
    // NOP
    ctx->pc = 0x4f2dc8u;
}
