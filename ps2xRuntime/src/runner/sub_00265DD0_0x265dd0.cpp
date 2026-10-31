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

// Function: sub_00265DD0
// Address: 0x265dd0 - 0x265f70
void sub_00265DD0_0x265dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265DD0_0x265dd0");
#endif

    switch (ctx->pc) {
        case 0x265df0u: goto label_265df0;
        case 0x265f2cu: goto label_265f2c;
        case 0x265f58u: goto label_265f58;
        default: break;
    }

    ctx->pc = 0x265dd0u;

    // 0x265dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265dd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x265dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x265ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x265ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265de0: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x265DE0u;
    {
        const bool branch_taken_0x265de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x265DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DE0u;
        // 0x265de4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265de0) {
            ctx->pc = 0x265F58u;
            goto label_265f58;
        }
    }
    ctx->pc = 0x265DE8u;
    // 0x265de8: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x265DE8u;
    SET_GPR_U32(ctx, 31, 0x265DF0u);
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x265DE8u, 0x265DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DF0u;
label_265df0:
    // 0x265df0: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x265DF0u;
    {
        const bool branch_taken_0x265df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DF0u;
        // 0x265df4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265df0) {
            ctx->pc = 0x265F5Cu;
            goto label_265f5c;
        }
    }
    ctx->pc = 0x265DF8u;
    // 0x265df8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x265df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x265dfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x265dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265e00: 0x262405d0  addiu       $a0, $s1, 0x5D0
    ctx->pc = 0x265e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x265e04: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x265e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x265e08: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x265e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x265e0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x265E0Cu;
    {
        const bool branch_taken_0x265e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E0Cu;
        // 0x265e10: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e0c) {
            ctx->pc = 0x265E64u;
            goto label_265e64;
        }
    }
    ctx->pc = 0x265E14u;
    // 0x265e14: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x265e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x265e18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x265E18u;
    {
        const bool branch_taken_0x265e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E18u;
        // 0x265e1c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e18) {
            ctx->pc = 0x265EF4u;
            goto label_265ef4;
        }
    }
    ctx->pc = 0x265E20u;
    // 0x265e20: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x265E20u;
    {
        const bool branch_taken_0x265e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E20u;
        // 0x265e24: 0x2862000f  slti        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e20) {
            ctx->pc = 0x265F0Cu;
            goto label_265f0c;
        }
    }
    ctx->pc = 0x265E28u;
    // 0x265e28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265E28u;
    {
        const bool branch_taken_0x265e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E28u;
        // 0x265e2c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e28) {
            ctx->pc = 0x265E50u;
            goto label_265e50;
        }
    }
    ctx->pc = 0x265E30u;
    // 0x265e30: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x265E30u;
    {
        const bool branch_taken_0x265e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E30u;
        // 0x265e34: 0x2862000d  slti        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e30) {
            ctx->pc = 0x265EF4u;
            goto label_265ef4;
        }
    }
    ctx->pc = 0x265E38u;
    // 0x265e38: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x265E38u;
    {
        const bool branch_taken_0x265e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E38u;
        // 0x265e3c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e38) {
            ctx->pc = 0x265F00u;
            goto label_265f00;
        }
    }
    ctx->pc = 0x265E40u;
    // 0x265e40: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x265E40u;
    {
        const bool branch_taken_0x265e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265e40) {
            ctx->pc = 0x265E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265E40u;
            // 0x265e44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F04u;
            goto label_265f04;
        }
    }
    ctx->pc = 0x265E48u;
    // 0x265e48: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x265E48u;
    {
        const bool branch_taken_0x265e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e48) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265E50u;
label_265e50:
    // 0x265e50: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x265e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x265e54: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x265E54u;
    {
        const bool branch_taken_0x265e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E54u;
        // 0x265e58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e54) {
            ctx->pc = 0x265EF4u;
            goto label_265ef4;
        }
    }
    ctx->pc = 0x265E5Cu;
    // 0x265e5c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x265E5Cu;
    {
        const bool branch_taken_0x265e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E5Cu;
        // 0x265e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e5c) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265E64u;
label_265e64:
    // 0x265e64: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x265e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x265e68: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x265E68u;
    {
        const bool branch_taken_0x265e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E68u;
        // 0x265e6c: 0x28620036  slti        $v0, $v1, 0x36 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)54) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e68) {
            ctx->pc = 0x265F18u;
            goto label_265f18;
        }
    }
    ctx->pc = 0x265E70u;
    // 0x265e70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x265E70u;
    {
        const bool branch_taken_0x265e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E70u;
        // 0x265e74: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e70) {
            ctx->pc = 0x265EB4u;
            goto label_265eb4;
        }
    }
    ctx->pc = 0x265E78u;
    // 0x265e78: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265E78u;
    {
        const bool branch_taken_0x265e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E78u;
        // 0x265e7c: 0x28620029  slti        $v0, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e78) {
            ctx->pc = 0x265EF4u;
            goto label_265ef4;
        }
    }
    ctx->pc = 0x265E80u;
    // 0x265e80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265E80u;
    {
        const bool branch_taken_0x265e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E80u;
        // 0x265e84: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e80) {
            ctx->pc = 0x265E98u;
            goto label_265e98;
        }
    }
    ctx->pc = 0x265E88u;
    // 0x265e88: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x265E88u;
    {
        const bool branch_taken_0x265e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265e88) {
            ctx->pc = 0x265E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265E88u;
            // 0x265e8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265EF8u;
            goto label_265ef8;
        }
    }
    ctx->pc = 0x265E90u;
    // 0x265e90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x265E90u;
    {
        const bool branch_taken_0x265e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e90) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265E98u;
label_265e98:
    // 0x265e98: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x265e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x265e9c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x265E9Cu;
    {
        const bool branch_taken_0x265e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E9Cu;
        // 0x265ea0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e9c) {
            ctx->pc = 0x265EF4u;
            goto label_265ef4;
        }
    }
    ctx->pc = 0x265EA4u;
    // 0x265ea4: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x265EA4u;
    {
        const bool branch_taken_0x265ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265ea4) {
            ctx->pc = 0x265EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265EA4u;
            // 0x265ea8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265EACu;
    // 0x265eac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x265EACu;
    {
        const bool branch_taken_0x265eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265eac) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265EB4u;
label_265eb4:
    // 0x265eb4: 0x240200db  addiu       $v0, $zero, 0xDB
    ctx->pc = 0x265eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x265eb8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x265EB8u;
    {
        const bool branch_taken_0x265eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EB8u;
        // 0x265ebc: 0x286200dc  slti        $v0, $v1, 0xDC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)220) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265eb8) {
            ctx->pc = 0x265F20u;
            goto label_265f20;
        }
    }
    ctx->pc = 0x265EC0u;
    // 0x265ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265EC0u;
    {
        const bool branch_taken_0x265ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EC0u;
        // 0x265ec4: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ec0) {
            ctx->pc = 0x265ED8u;
            goto label_265ed8;
        }
    }
    ctx->pc = 0x265EC8u;
    // 0x265ec8: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x265EC8u;
    {
        const bool branch_taken_0x265ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265ec8) {
            ctx->pc = 0x265ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265EC8u;
            // 0x265ecc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265ED0u;
    // 0x265ed0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x265ED0u;
    {
        const bool branch_taken_0x265ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ed0) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265ED8u;
label_265ed8:
    // 0x265ed8: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x265ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x265edc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x265EDCu;
    {
        const bool branch_taken_0x265edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x265EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EDCu;
        // 0x265ee0: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265edc) {
            ctx->pc = 0x265F20u;
            goto label_265f20;
        }
    }
    ctx->pc = 0x265EE4u;
    // 0x265ee4: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x265EE4u;
    {
        const bool branch_taken_0x265ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265ee4) {
            ctx->pc = 0x265EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265EE4u;
            // 0x265ee8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265EECu;
    // 0x265eec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265EECu;
    {
        const bool branch_taken_0x265eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265eec) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265EF4u;
label_265ef4:
    // 0x265ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x265ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265ef8:
    // 0x265ef8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x265EF8u;
    {
        const bool branch_taken_0x265ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EF8u;
        // 0x265efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ef8) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265F00u;
label_265f00:
    // 0x265f00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x265f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265f04:
    // 0x265f04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265F04u;
    {
        const bool branch_taken_0x265f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F04u;
        // 0x265f08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f04) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265F0Cu;
label_265f0c:
    // 0x265f0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x265f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265F10u;
    {
        const bool branch_taken_0x265f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F10u;
        // 0x265f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f10) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265F18u;
label_265f18:
    // 0x265f18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x265F18u;
    {
        const bool branch_taken_0x265f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F18u;
        // 0x265f1c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f18) {
            ctx->pc = 0x265F24u;
            goto label_265f24;
        }
    }
    ctx->pc = 0x265F20u;
label_265f20:
    // 0x265f20: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_265f24:
    // 0x265f24: 0xc1060cc  jal         func_418330
    ctx->pc = 0x265F24u;
    SET_GPR_U32(ctx, 31, 0x265F2Cu);
    ctx->pc = 0x418330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418330u, 0x265F24u, 0x265F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F2Cu;
label_265f2c:
    // 0x265f2c: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x265f2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x265f30: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x265f30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x265f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265F34u;
    {
        const bool branch_taken_0x265f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F34u;
        // 0x265f38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f34) {
            ctx->pc = 0x265F58u;
            goto label_265f58;
        }
    }
    ctx->pc = 0x265F3Cu;
    // 0x265f3c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x265f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x265f40: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x265f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x265f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f48: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x265f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x265f4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x265f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265f50: 0xc10610a  jal         func_418428
    ctx->pc = 0x265F50u;
    SET_GPR_U32(ctx, 31, 0x265F58u);
    ctx->pc = 0x265F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265F50u;
    // 0x265f54: 0x24840178  addiu       $a0, $a0, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418428u, 0x265F50u, 0x265F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F58u;
label_265f58:
    // 0x265f58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x265f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_265f5c:
    // 0x265f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265f64: 0x3e00008  jr          $ra
    ctx->pc = 0x265F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F64u;
        // 0x265f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F6Cu;
    // 0x265f6c: 0x0  nop
    ctx->pc = 0x265f6cu;
    // NOP
    ctx->pc = 0x265f70u;
}
