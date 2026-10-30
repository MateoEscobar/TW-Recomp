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

// Function: sub_0018ABD0
// Address: 0x18abd0 - 0x18ad40
void sub_0018ABD0_0x18abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ABD0_0x18abd0");
#endif

    switch (ctx->pc) {
        case 0x18ac18u: goto label_18ac18;
        case 0x18ac2cu: goto label_18ac2c;
        case 0x18ac44u: goto label_18ac44;
        case 0x18ac90u: goto label_18ac90;
        case 0x18aca8u: goto label_18aca8;
        case 0x18acc8u: goto label_18acc8;
        case 0x18acdcu: goto label_18acdc;
        case 0x18ad18u: goto label_18ad18;
        default: break;
    }

    ctx->pc = 0x18abd0u;

    // 0x18abd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18abd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18abd8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18abdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18abe0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18abe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abe4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18abe8: 0x26b001b8  addiu       $s0, $s5, 0x1B8
    ctx->pc = 0x18abe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 440));
    // 0x18abec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18abf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18abf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18abf8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x18abfc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18ac00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18ac00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ac08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18ac08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac0c: 0xaea20bb8  sw          $v0, 0xBB8($s5)
    ctx->pc = 0x18ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3000), GPR_U32(ctx, 2));
    // 0x18ac10: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x18ac10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x18ac14: 0x0  nop
    ctx->pc = 0x18ac14u;
    // NOP
label_18ac18:
    // 0x18ac18: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18AC1Cu;
    {
        const bool branch_taken_0x18ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC1Cu;
        // 0x18ac20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac1c) {
            ctx->pc = 0x18AC4Cu;
            goto label_18ac4c;
        }
    }
    ctx->pc = 0x18AC24u;
    // 0x18ac24: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x18AC24u;
    SET_GPR_U32(ctx, 31, 0x18AC2Cu);
    ctx->pc = 0x18AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC24u;
    // 0x18ac28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x18AC24u, 0x18AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC2Cu;
label_18ac2c:
    // 0x18ac2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AC2Cu;
    {
        const bool branch_taken_0x18ac2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC2Cu;
        // 0x18ac30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac2c) {
            ctx->pc = 0x18AC54u;
            goto label_18ac54;
        }
    }
    ctx->pc = 0x18AC34u;
    // 0x18ac34: 0x52600039  beql        $s3, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x18AC34u;
    {
        const bool branch_taken_0x18ac34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac34) {
            ctx->pc = 0x18AC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC34u;
            // 0x18ac38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD1Cu;
            goto label_18ad1c;
        }
    }
    ctx->pc = 0x18AC3Cu;
    // 0x18ac3c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x18AC3Cu;
    SET_GPR_U32(ctx, 31, 0x18AC44u);
    ctx->pc = 0x18AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC3Cu;
    // 0x18ac40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x18AC3Cu, 0x18AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC44u;
label_18ac44:
    // 0x18ac44: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18AC44u;
    {
        const bool branch_taken_0x18ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC44u;
        // 0x18ac48: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac44) {
            ctx->pc = 0x18AD1Cu;
            goto label_18ad1c;
        }
    }
    ctx->pc = 0x18AC4Cu;
label_18ac4c:
    // 0x18ac4c: 0x233900a  movz        $s2, $s1, $s3
    ctx->pc = 0x18ac4cu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
    // 0x18ac50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ac50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18ac54:
    // 0x18ac54: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x18ac54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18ac58: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18AC58u;
    {
        const bool branch_taken_0x18ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC58u;
        // 0x18ac5c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac58) {
            ctx->pc = 0x18AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ac18;
        }
    }
    ctx->pc = 0x18AC60u;
    // 0x18ac60: 0x1660002e  bnez        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x18AC60u;
    {
        const bool branch_taken_0x18ac60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC60u;
        // 0x18ac64: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac60) {
            ctx->pc = 0x18AD1Cu;
            goto label_18ad1c;
        }
    }
    ctx->pc = 0x18AC68u;
    // 0x18ac68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x18ac6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18ac70: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AC70u;
    {
        const bool branch_taken_0x18ac70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC70u;
        // 0x18ac74: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac70) {
            ctx->pc = 0x18AC98u;
            goto label_18ac98;
        }
    }
    ctx->pc = 0x18AC78u;
    // 0x18ac78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18ac78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac7c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x18ac7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18ac80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ac80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac84: 0x248401b8  addiu       $a0, $a0, 0x1B8
    ctx->pc = 0x18ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x18ac88: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x18AC88u;
    SET_GPR_U32(ctx, 31, 0x18AC90u);
    ctx->pc = 0x18AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC88u;
    // 0x18ac8c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x18AC88u, 0x18AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC90u;
label_18ac90:
    // 0x18ac90: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18AC90u;
    {
        const bool branch_taken_0x18ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC90u;
        // 0x18ac94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac90) {
            ctx->pc = 0x18AD1Cu;
            goto label_18ad1c;
        }
    }
    ctx->pc = 0x18AC98u;
label_18ac98:
    // 0x18ac98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18ac98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca0: 0x26b001b8  addiu       $s0, $s5, 0x1B8
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 440));
    // 0x18aca4: 0x0  nop
    ctx->pc = 0x18aca4u;
    // NOP
label_18aca8:
    // 0x18aca8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18acac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18ACACu;
    {
        const bool branch_taken_0x18acac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18acac) {
            ctx->pc = 0x18ACB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ACACu;
            // 0x18acb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ACE4u;
            goto label_18ace4;
        }
    }
    ctx->pc = 0x18ACB4u;
    // 0x18acb4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18acb8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18ACB8u;
    {
        const bool branch_taken_0x18acb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18acb8) {
            ctx->pc = 0x18ACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ACB8u;
            // 0x18acbc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ACE4u;
            goto label_18ace4;
        }
    }
    ctx->pc = 0x18ACC0u;
    // 0x18acc0: 0xc042f64  jal         func_10BD90
    ctx->pc = 0x18ACC0u;
    SET_GPR_U32(ctx, 31, 0x18ACC8u);
    ctx->pc = 0x18ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACC0u;
    // 0x18acc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD90u, 0x18ACC0u, 0x18ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACC8u;
label_18acc8:
    // 0x18acc8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18accc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACE0u;
            goto label_18ace0;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0xc042f64  jal         func_10BD90
    ctx->pc = 0x18ACD4u;
    SET_GPR_U32(ctx, 31, 0x18ACDCu);
    ctx->pc = 0x18ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACD4u;
    // 0x18acd8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD90u, 0x18ACD4u, 0x18ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACDCu;
label_18acdc:
    // 0x18acdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18acdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ace0:
    // 0x18ace0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18ace4:
    // 0x18ace4: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x18ace4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18ace8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18ACE8u;
    {
        const bool branch_taken_0x18ace8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACE8u;
        // 0x18acec: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ace8) {
            ctx->pc = 0x18ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aca8;
        }
    }
    ctx->pc = 0x18ACF0u;
    // 0x18acf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x18acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x18acf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18acf8: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ACF8u;
    {
        const bool branch_taken_0x18acf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF8u;
        // 0x18acfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf8) {
            ctx->pc = 0x18AD18u;
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18AD00u;
    // 0x18ad00: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18ad04: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x18ad04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18ad08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ad08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad0c: 0x248401b8  addiu       $a0, $a0, 0x1B8
    ctx->pc = 0x18ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x18ad10: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x18AD10u;
    SET_GPR_U32(ctx, 31, 0x18AD18u);
    ctx->pc = 0x18AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD10u;
    // 0x18ad14: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x18AD10u, 0x18AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD18u;
label_18ad18:
    // 0x18ad18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18ad18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18ad1c:
    // 0x18ad1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18ad1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ad20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18ad20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ad24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ad24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ad28: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18ad28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ad2c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18ad2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ad30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad34: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD34u;
        // 0x18ad38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD3Cu;
    // 0x18ad3c: 0x0  nop
    ctx->pc = 0x18ad3cu;
    // NOP
    ctx->pc = 0x18ad40u;
}
