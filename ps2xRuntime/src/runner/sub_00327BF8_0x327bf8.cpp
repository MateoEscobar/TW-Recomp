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

// Function: sub_00327BF8
// Address: 0x327bf8 - 0x327ce0
void sub_00327BF8_0x327bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327BF8_0x327bf8");
#endif

    switch (ctx->pc) {
        case 0x327c58u: goto label_327c58;
        case 0x327c90u: goto label_327c90;
        default: break;
    }

    ctx->pc = 0x327bf8u;

    // 0x327bf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327BF8u;
    {
        const bool branch_taken_0x327bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BF8u;
        // 0x327bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bf8) {
            ctx->pc = 0x327C08u;
            goto label_327c08;
        }
    }
    ctx->pc = 0x327C00u;
    // 0x327c00: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C00u;
    {
        const bool branch_taken_0x327c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x327c00) {
            ctx->pc = 0x327C10u;
            goto label_327c10;
        }
    }
    ctx->pc = 0x327C08u;
label_327c08:
    // 0x327c08: 0x3e00008  jr          $ra
    ctx->pc = 0x327C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C08u;
        // 0x327c0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C10u;
label_327c10:
    // 0x327c10: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x327C10u;
    {
        const bool branch_taken_0x327c10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C10u;
        // 0x327c14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c10) {
            ctx->pc = 0x327C1Cu;
            goto label_327c1c;
        }
    }
    ctx->pc = 0x327C18u;
    // 0x327c18: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x327c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_327c1c:
    // 0x327c1c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x327c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x327c20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327c28: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327C28u;
    {
        const bool branch_taken_0x327c28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x327C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C28u;
        // 0x327c2c: 0xa1880  sll         $v1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c28) {
            ctx->pc = 0x327C3Cu;
            goto label_327c3c;
        }
    }
    ctx->pc = 0x327C30u;
    // 0x327c30: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x327c34: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x327c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x327c38: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x327c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_327c3c:
    // 0x327c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c44: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x327c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x327c48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x327C48u;
    {
        const bool branch_taken_0x327c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C48u;
        // 0x327c4c: 0x25480001  addiu       $t0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c48) {
            ctx->pc = 0x327C98u;
            goto label_327c98;
        }
    }
    ctx->pc = 0x327C50u;
    // 0x327c50: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x327c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x327c54: 0x0  nop
    ctx->pc = 0x327c54u;
    // NOP
label_327c58:
    // 0x327c58: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x327c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x327c5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c60: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327C60u;
    {
        const bool branch_taken_0x327c60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x327C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C60u;
        // 0x327c64: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c60) {
            ctx->pc = 0x327C78u;
            goto label_327c78;
        }
    }
    ctx->pc = 0x327C68u;
    // 0x327c68: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x327c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x327c6c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x327c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x327c70: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x327c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_327c78:
    // 0x327c78: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x327c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x327c7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x327C7Cu;
    {
        const bool branch_taken_0x327c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C7Cu;
        // 0x327c80: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c7c) {
            ctx->pc = 0x327C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c58;
        }
    }
    ctx->pc = 0x327C84u;
    // 0x327c84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327C84u;
    {
        const bool branch_taken_0x327c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C84u;
        // 0x327c88: 0x25480001  addiu       $t0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c84) {
            ctx->pc = 0x327C98u;
            goto label_327c98;
        }
    }
    ctx->pc = 0x327C8Cu;
    // 0x327c8c: 0x0  nop
    ctx->pc = 0x327c8cu;
    // NOP
label_327c90:
    // 0x327c90: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x327c90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c94: 0x25480001  addiu       $t0, $t2, 0x1
    ctx->pc = 0x327c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_327c98:
    // 0x327c98: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x327c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x327c9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327ca0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327ca4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327CA4u;
    {
        const bool branch_taken_0x327ca4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x327CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CA4u;
        // 0x327ca8: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ca4) {
            ctx->pc = 0x327CB4u;
            goto label_327cb4;
        }
    }
    ctx->pc = 0x327CACu;
    // 0x327cac: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x327cacu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x327cb0: 0x25480002  addiu       $t0, $t2, 0x2
    ctx->pc = 0x327cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_327cb4:
    // 0x327cb4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x327cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x327cb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327cbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327cc0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x327cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x327cc4: 0x5060fff2  beql        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x327CC4u;
    {
        const bool branch_taken_0x327cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327cc4) {
            ctx->pc = 0x327CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CC4u;
            // 0x327cc8: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c90;
        }
    }
    ctx->pc = 0x327CCCu;
    // 0x327ccc: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x327CCCu;
    {
        const bool branch_taken_0x327ccc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x327ccc) {
            ctx->pc = 0x327CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CCCu;
            // 0x327cd0: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327CD4u;
            goto label_327cd4;
        }
    }
    ctx->pc = 0x327CD4u;
label_327cd4:
    // 0x327cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x327CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CD4u;
        // 0x327cd8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327CDCu;
    // 0x327cdc: 0x0  nop
    ctx->pc = 0x327cdcu;
    // NOP
    ctx->pc = 0x327ce0u;
}
