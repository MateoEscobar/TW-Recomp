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

// Function: sub_00291DB8
// Address: 0x291db8 - 0x291e78
void sub_00291DB8_0x291db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DB8_0x291db8");
#endif

    switch (ctx->pc) {
        case 0x291db8u: goto label_291db8;
        case 0x291dbcu: goto label_291dbc;
        case 0x291dc0u: goto label_291dc0;
        case 0x291dc4u: goto label_291dc4;
        case 0x291dc8u: goto label_291dc8;
        case 0x291dccu: goto label_291dcc;
        case 0x291dd0u: goto label_291dd0;
        case 0x291dd4u: goto label_291dd4;
        case 0x291dd8u: goto label_291dd8;
        case 0x291ddcu: goto label_291ddc;
        case 0x291de0u: goto label_291de0;
        case 0x291de4u: goto label_291de4;
        case 0x291de8u: goto label_291de8;
        case 0x291decu: goto label_291dec;
        case 0x291df0u: goto label_291df0;
        case 0x291df4u: goto label_291df4;
        case 0x291df8u: goto label_291df8;
        case 0x291dfcu: goto label_291dfc;
        case 0x291e00u: goto label_291e00;
        case 0x291e04u: goto label_291e04;
        case 0x291e08u: goto label_291e08;
        case 0x291e0cu: goto label_291e0c;
        case 0x291e10u: goto label_291e10;
        case 0x291e14u: goto label_291e14;
        case 0x291e18u: goto label_291e18;
        case 0x291e1cu: goto label_291e1c;
        case 0x291e20u: goto label_291e20;
        case 0x291e24u: goto label_291e24;
        case 0x291e28u: goto label_291e28;
        case 0x291e2cu: goto label_291e2c;
        case 0x291e30u: goto label_291e30;
        case 0x291e34u: goto label_291e34;
        case 0x291e38u: goto label_291e38;
        case 0x291e3cu: goto label_291e3c;
        case 0x291e40u: goto label_291e40;
        case 0x291e44u: goto label_291e44;
        case 0x291e48u: goto label_291e48;
        case 0x291e4cu: goto label_291e4c;
        case 0x291e50u: goto label_291e50;
        case 0x291e54u: goto label_291e54;
        case 0x291e58u: goto label_291e58;
        case 0x291e5cu: goto label_291e5c;
        case 0x291e60u: goto label_291e60;
        case 0x291e64u: goto label_291e64;
        case 0x291e68u: goto label_291e68;
        case 0x291e6cu: goto label_291e6c;
        case 0x291e70u: goto label_291e70;
        case 0x291e74u: goto label_291e74;
        default: break;
    }

    ctx->pc = 0x291db8u;

label_291db8:
    // 0x291db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_291dbc:
    // 0x291dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x291dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_291dc0:
    // 0x291dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_291dc4:
    // 0x291dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291dc8:
    // 0x291dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291dcc:
    // 0x291dcc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x291dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_291dd0:
    // 0x291dd0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_291dd4:
    // 0x291dd4: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
label_291dd8:
    if (ctx->pc == 0x291DD8u) {
        ctx->pc = 0x291DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DD4u;
        // 0x291dd8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291DDCu;
        goto label_291ddc;
    }
    ctx->pc = 0x291DD4u;
    {
        const bool branch_taken_0x291dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x291DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DD4u;
        // 0x291dd8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dd4) {
            ctx->pc = 0x291E08u;
            goto label_291e08;
        }
    }
    ctx->pc = 0x291DDCu;
label_291ddc:
    // 0x291ddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_291de0:
    if (ctx->pc == 0x291DE0u) {
        ctx->pc = 0x291DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DDCu;
        // 0x291de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291DE4u;
        goto label_291de4;
    }
    ctx->pc = 0x291DDCu;
    {
        const bool branch_taken_0x291ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DDCu;
        // 0x291de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ddc) {
            ctx->pc = 0x291DF4u;
            goto label_291df4;
        }
    }
    ctx->pc = 0x291DE4u;
label_291de4:
    // 0x291de4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_291de8:
    if (ctx->pc == 0x291DE8u) {
        ctx->pc = 0x291DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DE4u;
        // 0x291de8: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291DECu;
        goto label_291dec;
    }
    ctx->pc = 0x291DE4u;
    {
        const bool branch_taken_0x291de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DE4u;
        // 0x291de8: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291de4) {
            ctx->pc = 0x291E54u;
            goto label_291e54;
        }
    }
    ctx->pc = 0x291DECu;
label_291dec:
    // 0x291dec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_291df0:
    if (ctx->pc == 0x291DF0u) {
        ctx->pc = 0x291DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DECu;
        // 0x291df0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291DF4u;
        goto label_291df4;
    }
    ctx->pc = 0x291DECu;
    {
        const bool branch_taken_0x291dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DECu;
        // 0x291df0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dec) {
            ctx->pc = 0x291E60u;
            goto label_291e60;
        }
    }
    ctx->pc = 0x291DF4u;
label_291df4:
    // 0x291df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_291df8:
    // 0x291df8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_291dfc:
    if (ctx->pc == 0x291DFCu) {
        ctx->pc = 0x291DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DF8u;
        // 0x291dfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E00u;
        goto label_291e00;
    }
    ctx->pc = 0x291DF8u;
    {
        const bool branch_taken_0x291df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DF8u;
        // 0x291dfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291df8) {
            ctx->pc = 0x291E54u;
            goto label_291e54;
        }
    }
    ctx->pc = 0x291E00u;
label_291e00:
    // 0x291e00: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_291e04:
    if (ctx->pc == 0x291E04u) {
        ctx->pc = 0x291E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E00u;
        // 0x291e04: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E08u;
        goto label_291e08;
    }
    ctx->pc = 0x291E00u;
    {
        const bool branch_taken_0x291e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E00u;
        // 0x291e04: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e00) {
            ctx->pc = 0x291E5Cu;
            goto label_291e5c;
        }
    }
    ctx->pc = 0x291E08u;
label_291e08:
    // 0x291e08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x291e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_291e0c:
    // 0x291e0c: 0xc08a200  jal         func_228800
label_291e10:
    if (ctx->pc == 0x291E10u) {
        ctx->pc = 0x291E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E0Cu;
        // 0x291e10: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E14u;
        goto label_291e14;
    }
    ctx->pc = 0x291E0Cu;
    SET_GPR_U32(ctx, 31, 0x291E14u);
    ctx->pc = 0x291E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E0Cu;
    // 0x291e10: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x291E0Cu, 0x291E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E14u;
label_291e14:
    // 0x291e14: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x291e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_291e18:
    // 0x291e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x291e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291e1c:
    // 0x291e1c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x291e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_291e20:
    // 0x291e20: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x291e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_291e24:
    // 0x291e24: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x291e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_291e28:
    // 0x291e28: 0x6802b  sltu        $s0, $zero, $a2
    ctx->pc = 0x291e28u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_291e2c:
    // 0x291e2c: 0x1605000a  bne         $s0, $a1, . + 4 + (0xA << 2)
label_291e30:
    if (ctx->pc == 0x291E30u) {
        ctx->pc = 0x291E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E2Cu;
        // 0x291e30: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E34u;
        goto label_291e34;
    }
    ctx->pc = 0x291E2Cu;
    {
        const bool branch_taken_0x291e2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x291E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E2Cu;
        // 0x291e30: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e2c) {
            ctx->pc = 0x291E58u;
            goto label_291e58;
        }
    }
    ctx->pc = 0x291E34u;
label_291e34:
    // 0x291e34: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x291e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_291e38:
    // 0x291e38: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x291e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_291e3c:
    // 0x291e3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x291e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_291e40:
    // 0x291e40: 0x40f809  jalr        $v0
label_291e44:
    if (ctx->pc == 0x291E44u) {
        ctx->pc = 0x291E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E40u;
        // 0x291e44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E48u;
        goto label_291e48;
    }
    ctx->pc = 0x291E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291E48u);
        ctx->pc = 0x291E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E40u;
        // 0x291e44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E40u, 0x291E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291E48u;
label_291e48:
    // 0x291e48: 0x38420023  xori        $v0, $v0, 0x23
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)35);
label_291e4c:
    // 0x291e4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_291e50:
    if (ctx->pc == 0x291E50u) {
        ctx->pc = 0x291E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E4Cu;
        // 0x291e50: 0x202880a  movz        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E54u;
        goto label_291e54;
    }
    ctx->pc = 0x291E4Cu;
    {
        const bool branch_taken_0x291e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E4Cu;
        // 0x291e50: 0x202880a  movz        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e4c) {
            ctx->pc = 0x291E58u;
            goto label_291e58;
        }
    }
    ctx->pc = 0x291E54u;
label_291e54:
    // 0x291e54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x291e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291e58:
    // 0x291e58: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x291e58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_291e5c:
    // 0x291e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_291e60:
    // 0x291e60: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x291e60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_291e64:
    // 0x291e64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x291e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291e68:
    // 0x291e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_291e6c:
    // 0x291e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291e70:
    // 0x291e70: 0x3e00008  jr          $ra
label_291e74:
    if (ctx->pc == 0x291E74u) {
        ctx->pc = 0x291E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E70u;
        // 0x291e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E78u;
        goto label_fallthrough_0x291e70;
    }
    ctx->pc = 0x291E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E70u;
        // 0x291e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291e70:
    ctx->pc = 0x291E78u;
}
