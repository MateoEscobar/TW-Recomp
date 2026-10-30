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

// Function: sub_004A9C38
// Address: 0x4a9c38 - 0x4a9f28
void sub_004A9C38_0x4a9c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9C38_0x4a9c38");
#endif

    switch (ctx->pc) {
        case 0x4a9c98u: goto label_4a9c98;
        case 0x4a9ca8u: goto label_4a9ca8;
        case 0x4a9cf4u: goto label_4a9cf4;
        case 0x4a9d08u: goto label_4a9d08;
        case 0x4a9d18u: goto label_4a9d18;
        case 0x4a9db0u: goto label_4a9db0;
        case 0x4a9dc0u: goto label_4a9dc0;
        case 0x4a9e70u: goto label_4a9e70;
        case 0x4a9e80u: goto label_4a9e80;
        default: break;
    }

    ctx->pc = 0x4a9c38u;

    // 0x4a9c38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4a9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9c3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4a9c3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c40: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x4a9c40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a9c44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a9c48: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x4a9c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a9c4c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9C4Cu;
    {
        const bool branch_taken_0x4a9c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C4Cu;
        // 0x4a9c50: 0x8c8c0010  lw          $t4, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c4c) {
            ctx->pc = 0x4A9C84u;
            goto label_4a9c84;
        }
    }
    ctx->pc = 0x4A9C54u;
    // 0x4a9c54: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4a9c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4a9c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9C58u;
    {
        const bool branch_taken_0x4a9c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C58u;
        // 0x4a9c5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c58) {
            ctx->pc = 0x4A9C70u;
            goto label_4a9c70;
        }
    }
    ctx->pc = 0x4A9C60u;
    // 0x4a9c60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A9C60u;
    {
        const bool branch_taken_0x4a9c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C60u;
        // 0x4a9c64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c60) {
            ctx->pc = 0x4A9C84u;
            goto label_4a9c84;
        }
    }
    ctx->pc = 0x4A9C68u;
    // 0x4a9c68: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4A9C68u;
    {
        const bool branch_taken_0x4a9c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C68u;
        // 0x4a9c6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c68) {
            ctx->pc = 0x4A9D54u;
            goto label_4a9d54;
        }
    }
    ctx->pc = 0x4A9C70u;
label_4a9c70:
    // 0x4a9c70: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4a9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4a9c74: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A9C74u;
    {
        const bool branch_taken_0x4a9c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C74u;
        // 0x4a9c78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c74) {
            ctx->pc = 0x4A9CFCu;
            goto label_4a9cfc;
        }
    }
    ctx->pc = 0x4A9C7Cu;
    // 0x4a9c7c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4A9C7Cu;
    {
        const bool branch_taken_0x4a9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C7Cu;
        // 0x4a9c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c7c) {
            ctx->pc = 0x4A9D54u;
            goto label_4a9d54;
        }
    }
    ctx->pc = 0x4A9C84u;
label_4a9c84:
    // 0x4a9c84: 0x8c890018  lw          $t1, 0x18($a0)
    ctx->pc = 0x4a9c84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a9c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a9c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c8c: 0x1940002f  blez        $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x4A9C8Cu;
    {
        const bool branch_taken_0x4a9c8c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x4A9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C8Cu;
        // 0x4a9c90: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c8c) {
            ctx->pc = 0x4A9D4Cu;
            goto label_4a9d4c;
        }
    }
    ctx->pc = 0x4A9C94u;
    // 0x4a9c94: 0x0  nop
    ctx->pc = 0x4a9c94u;
    // NOP
label_4a9c98:
    // 0x4a9c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a9c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c9c: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A9C9Cu;
    {
        const bool branch_taken_0x4a9c9c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x4A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C9Cu;
        // 0x4a9ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c9c) {
            ctx->pc = 0x4A9CDCu;
            goto label_4a9cdc;
        }
    }
    ctx->pc = 0x4A9CA4u;
    // 0x4a9ca4: 0x0  nop
    ctx->pc = 0x4a9ca4u;
    // NOP
label_4a9ca8:
    // 0x4a9ca8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4a9ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9cb0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4a9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4a9cb4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x4a9cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x4a9cb8: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x4a9cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x4a9cbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9CBCu;
    {
        const bool branch_taken_0x4a9cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CBCu;
        // 0x4a9cc0: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cbc) {
            ctx->pc = 0x4A9CCCu;
            goto label_4a9ccc;
        }
    }
    ctx->pc = 0x4A9CC4u;
    // 0x4a9cc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A9CC4u;
    {
        const bool branch_taken_0x4a9cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CC4u;
        // 0x4a9cc8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cc4) {
            ctx->pc = 0x4A9CF4u;
            goto label_4a9cf4;
        }
    }
    ctx->pc = 0x4A9CCCu;
label_4a9ccc:
    // 0x4a9ccc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a9cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a9cd0: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x4a9cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4a9cd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A9CD4u;
    {
        const bool branch_taken_0x4a9cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CD4u;
        // 0x4a9cd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cd4) {
            ctx->pc = 0x4A9CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9ca8;
        }
    }
    ctx->pc = 0x4A9CDCu;
label_4a9cdc:
    // 0x4a9cdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a9cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a9ce0: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x4a9ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x4a9ce4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A9CE4u;
    {
        const bool branch_taken_0x4a9ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CE4u;
        // 0x4a9ce8: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ce4) {
            ctx->pc = 0x4A9C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9c98;
        }
    }
    ctx->pc = 0x4A9CECu;
    // 0x4a9cec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A9CECu;
    {
        const bool branch_taken_0x4a9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CECu;
        // 0x4a9cf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cec) {
            ctx->pc = 0x4A9D50u;
            goto label_4a9d50;
        }
    }
    ctx->pc = 0x4A9CF4u;
label_4a9cf4:
    // 0x4a9cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CF4u;
        // 0x4a9cf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9CFCu;
label_4a9cfc:
    // 0x4a9cfc: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x4a9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9d00: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A9D00u;
    {
        const bool branch_taken_0x4a9d00 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x4A9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D00u;
        // 0x4a9d04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d00) {
            ctx->pc = 0x4A9D4Cu;
            goto label_4a9d4c;
        }
    }
    ctx->pc = 0x4A9D08u;
label_4a9d08:
    // 0x4a9d08: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4a9d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d0c: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A9D0Cu;
    {
        const bool branch_taken_0x4a9d0c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x4A9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D0Cu;
        // 0x4a9d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d0c) {
            ctx->pc = 0x4A9D3Cu;
            goto label_4a9d3c;
        }
    }
    ctx->pc = 0x4A9D14u;
    // 0x4a9d14: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x4a9d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4a9d18:
    // 0x4a9d18: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x4a9d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x4a9d1c: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9D1Cu;
    {
        const bool branch_taken_0x4a9d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D1Cu;
        // 0x4a9d20: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d1c) {
            ctx->pc = 0x4A9D2Cu;
            goto label_4a9d2c;
        }
    }
    ctx->pc = 0x4A9D24u;
    // 0x4a9d24: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A9D24u;
    {
        const bool branch_taken_0x4a9d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D24u;
        // 0x4a9d28: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d24) {
            ctx->pc = 0x4A9CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9cf4;
        }
    }
    ctx->pc = 0x4A9D2Cu;
label_4a9d2c:
    // 0x4a9d2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a9d30: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x4a9d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4a9d34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A9D34u;
    {
        const bool branch_taken_0x4a9d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D34u;
        // 0x4a9d38: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d34) {
            ctx->pc = 0x4A9D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9d18;
        }
    }
    ctx->pc = 0x4A9D3Cu;
label_4a9d3c:
    // 0x4a9d3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a9d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a9d40: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x4a9d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x4a9d44: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4A9D44u;
    {
        const bool branch_taken_0x4a9d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D44u;
        // 0x4a9d48: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d44) {
            ctx->pc = 0x4A9D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9d08;
        }
    }
    ctx->pc = 0x4A9D4Cu;
label_4a9d4c:
    // 0x4a9d4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a9d50:
    // 0x4a9d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9d54:
    // 0x4a9d54: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D54u;
        // 0x4a9d58: 0x6b100b  movn        $v0, $v1, $t3 (Delay Slot)
        if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9D5Cu;
    // 0x4a9d5c: 0x0  nop
    ctx->pc = 0x4a9d5cu;
    // NOP
    // 0x4a9d60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4a9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a9d64: 0x0  nop
    ctx->pc = 0x4a9d64u;
    // NOP
    // 0x4a9d68: 0x0  nop
    ctx->pc = 0x4a9d68u;
    // NOP
    // 0x4a9d6c: 0x0  nop
    ctx->pc = 0x4a9d6cu;
    // NOP
    // 0x4a9d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a9d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a9d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9d78: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x4a9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x4a9d7c: 0xe25804  sllv        $t3, $v0, $a3
    ctx->pc = 0x4a9d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9d80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a9d84: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x4a9d84u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d88: 0x8cd00018  lw          $s0, 0x18($a2)
    ctx->pc = 0x4a9d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4a9d8c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x4a9d8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d90: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x4a9d90u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4a9d94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d98: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4a9d98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a9d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9da0: 0x19600019  blez        $t3, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A9DA0u;
    {
        const bool branch_taken_0x4a9da0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4A9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9DA0u;
        // 0x4a9da4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9da0) {
            ctx->pc = 0x4A9E08u;
            goto label_4a9e08;
        }
    }
    ctx->pc = 0x4A9DA8u;
    // 0x4a9da8: 0x8cd10010  lw          $s1, 0x10($a2)
    ctx->pc = 0x4a9da8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a9dac: 0x0  nop
    ctx->pc = 0x4a9dacu;
    // NOP
label_4a9db0:
    // 0x4a9db0: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x4a9db0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9db4: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A9DB4u;
    {
        const bool branch_taken_0x4a9db4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4A9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9DB4u;
        // 0x4a9db8: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9db4) {
            ctx->pc = 0x4A9DF8u;
            goto label_4a9df8;
        }
    }
    ctx->pc = 0x4A9DBCu;
    // 0x4a9dbc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x4a9dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4a9dc0:
    // 0x4a9dc0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4a9dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a9dc4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a9dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4a9dc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a9dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4a9dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9dd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4a9dd4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x4a9dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x4a9dd8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4a9dd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9ddc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x4a9ddcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x4a9de0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x4a9de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x4a9de4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x4a9de4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4a9de8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x4a9de8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x4a9dec: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x4a9decu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x4a9df0: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A9DF0u;
    {
        const bool branch_taken_0x4a9df0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9DF0u;
        // 0x4a9df4: 0x304c021  addu        $t8, $t8, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9df0) {
            ctx->pc = 0x4A9DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9dc0;
        }
    }
    ctx->pc = 0x4A9DF8u;
label_4a9df8:
    // 0x4a9df8: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x4a9df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9dfc: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x4a9dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4a9e00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A9E00u;
    {
        const bool branch_taken_0x4a9e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E00u;
        // 0x4a9e04: 0x1916021  addu        $t4, $t4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e00) {
            ctx->pc = 0x4A9DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9db0;
        }
    }
    ctx->pc = 0x4A9E08u;
label_4a9e08:
    // 0x4a9e08: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4a9e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4a9e0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a9e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9e10: 0xea1007  srav        $v0, $t2, $a3
    ctx->pc = 0x4a9e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9e14: 0xee1807  srav        $v1, $t6, $a3
    ctx->pc = 0x4a9e14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9e18: 0xef2007  srav        $a0, $t7, $a3
    ctx->pc = 0x4a9e18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9e1c: 0xf82807  srav        $a1, $t8, $a3
    ctx->pc = 0x4a9e1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9e20: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x4a9e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9e24: 0xa3220003  sb          $v0, 0x3($t9)
    ctx->pc = 0x4a9e24u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a9e28: 0xa3230000  sb          $v1, 0x0($t9)
    ctx->pc = 0x4a9e28u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a9e2c: 0xa3240001  sb          $a0, 0x1($t9)
    ctx->pc = 0x4a9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x4a9e30: 0xa3250002  sb          $a1, 0x2($t9)
    ctx->pc = 0x4a9e30u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a9e34: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E34u;
        // 0x4a9e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9E3Cu;
    // 0x4a9e3c: 0x0  nop
    ctx->pc = 0x4a9e3cu;
    // NOP
    // 0x4a9e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9e44: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x4a9e44u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e48: 0xe25804  sllv        $t3, $v0, $a3
    ctx->pc = 0x4a9e48u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9e4c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x4a9e4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e50: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x4a9e50u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e54: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4a9e54u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e58: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4a9e58u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a9e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9e60: 0x19600016  blez        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x4A9E60u;
    {
        const bool branch_taken_0x4a9e60 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4A9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E60u;
        // 0x4a9e64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e60) {
            ctx->pc = 0x4A9EBCu;
            goto label_4a9ebc;
        }
    }
    ctx->pc = 0x4A9E68u;
    // 0x4a9e68: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x4a9e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a9e6c: 0x0  nop
    ctx->pc = 0x4a9e6cu;
    // NOP
label_4a9e70:
    // 0x4a9e70: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x4a9e70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9e74: 0x1960000d  blez        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9E74u;
    {
        const bool branch_taken_0x4a9e74 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4A9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E74u;
        // 0x4a9e78: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e74) {
            ctx->pc = 0x4A9EACu;
            goto label_4a9eac;
        }
    }
    ctx->pc = 0x4A9E7Cu;
    // 0x4a9e7c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x4a9e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4a9e80:
    // 0x4a9e80: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4a9e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a9e84: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4a9e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4a9e88: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x4a9e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x4a9e8c: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x4a9e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x4a9e90: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x4a9e90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4a9e94: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x4a9e94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x4a9e98: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x4a9e98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4a9e9c: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x4a9e9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x4a9ea0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4a9ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4a9ea4: 0x1520fff6  bnez        $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A9EA4u;
    {
        const bool branch_taken_0x4a9ea4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9EA4u;
        // 0x4a9ea8: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ea4) {
            ctx->pc = 0x4A9E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9e80;
        }
    }
    ctx->pc = 0x4A9EACu;
label_4a9eac:
    // 0x4a9eac: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x4a9eacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9eb0: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x4a9eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4a9eb4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4A9EB4u;
    {
        const bool branch_taken_0x4a9eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9EB4u;
        // 0x4a9eb8: 0x1866021  addu        $t4, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9eb4) {
            ctx->pc = 0x4A9E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9e70;
        }
    }
    ctx->pc = 0x4A9EBCu;
label_4a9ebc:
    // 0x4a9ebc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4a9ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4a9ec0: 0xea1007  srav        $v0, $t2, $a3
    ctx->pc = 0x4a9ec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9ec4: 0xee1807  srav        $v1, $t6, $a3
    ctx->pc = 0x4a9ec4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9ec8: 0xef2007  srav        $a0, $t7, $a3
    ctx->pc = 0x4a9ec8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9ecc: 0xf82807  srav        $a1, $t8, $a3
    ctx->pc = 0x4a9eccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
    // 0x4a9ed0: 0xa3220003  sb          $v0, 0x3($t9)
    ctx->pc = 0x4a9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a9ed4: 0xa3230000  sb          $v1, 0x0($t9)
    ctx->pc = 0x4a9ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a9ed8: 0xa3240001  sb          $a0, 0x1($t9)
    ctx->pc = 0x4a9ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x4a9edc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9EDCu;
        // 0x4a9ee0: 0xa3250002  sb          $a1, 0x2($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9EE4u;
    // 0x4a9ee4: 0x0  nop
    ctx->pc = 0x4a9ee4u;
    // NOP
    // 0x4a9ee8: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x4a9ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9eec: 0x0  nop
    ctx->pc = 0x4a9eecu;
    // NOP
    // 0x4a9ef0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ef4: 0x0  nop
    ctx->pc = 0x4a9ef4u;
    // NOP
    // 0x4a9ef8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9efc: 0x0  nop
    ctx->pc = 0x4a9efcu;
    // NOP
    // 0x4a9f00: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4a9f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9f04: 0x0  nop
    ctx->pc = 0x4a9f04u;
    // NOP
    // 0x4a9f08: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x4a9f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4a9f0c: 0x0  nop
    ctx->pc = 0x4a9f0cu;
    // NOP
    // 0x4a9f10: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x4a9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4a9f14: 0x0  nop
    ctx->pc = 0x4a9f14u;
    // NOP
    // 0x4a9f18: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x4a9f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4a9f1c: 0x0  nop
    ctx->pc = 0x4a9f1cu;
    // NOP
    // 0x4a9f20: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x4a9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4a9f24: 0x0  nop
    ctx->pc = 0x4a9f24u;
    // NOP
    ctx->pc = 0x4a9f28u;
}
