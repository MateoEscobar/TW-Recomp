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

// Function: sub_003FCBE0
// Address: 0x3fcbe0 - 0x3fccd8
void sub_003FCBE0_0x3fcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCBE0_0x3fcbe0");
#endif

    switch (ctx->pc) {
        case 0x3fcbe0u: goto label_3fcbe0;
        case 0x3fcbe4u: goto label_3fcbe4;
        case 0x3fcbe8u: goto label_3fcbe8;
        case 0x3fcbecu: goto label_3fcbec;
        case 0x3fcbf0u: goto label_3fcbf0;
        case 0x3fcbf4u: goto label_3fcbf4;
        case 0x3fcbf8u: goto label_3fcbf8;
        case 0x3fcbfcu: goto label_3fcbfc;
        case 0x3fcc00u: goto label_3fcc00;
        case 0x3fcc04u: goto label_3fcc04;
        case 0x3fcc08u: goto label_3fcc08;
        case 0x3fcc0cu: goto label_3fcc0c;
        case 0x3fcc10u: goto label_3fcc10;
        case 0x3fcc14u: goto label_3fcc14;
        case 0x3fcc18u: goto label_3fcc18;
        case 0x3fcc1cu: goto label_3fcc1c;
        case 0x3fcc20u: goto label_3fcc20;
        case 0x3fcc24u: goto label_3fcc24;
        case 0x3fcc28u: goto label_3fcc28;
        case 0x3fcc2cu: goto label_3fcc2c;
        case 0x3fcc30u: goto label_3fcc30;
        case 0x3fcc34u: goto label_3fcc34;
        case 0x3fcc38u: goto label_3fcc38;
        case 0x3fcc3cu: goto label_3fcc3c;
        case 0x3fcc40u: goto label_3fcc40;
        case 0x3fcc44u: goto label_3fcc44;
        case 0x3fcc48u: goto label_3fcc48;
        case 0x3fcc4cu: goto label_3fcc4c;
        case 0x3fcc50u: goto label_3fcc50;
        case 0x3fcc54u: goto label_3fcc54;
        case 0x3fcc58u: goto label_3fcc58;
        case 0x3fcc5cu: goto label_3fcc5c;
        case 0x3fcc60u: goto label_3fcc60;
        case 0x3fcc64u: goto label_3fcc64;
        case 0x3fcc68u: goto label_3fcc68;
        case 0x3fcc6cu: goto label_3fcc6c;
        case 0x3fcc70u: goto label_3fcc70;
        case 0x3fcc74u: goto label_3fcc74;
        case 0x3fcc78u: goto label_3fcc78;
        case 0x3fcc7cu: goto label_3fcc7c;
        case 0x3fcc80u: goto label_3fcc80;
        case 0x3fcc84u: goto label_3fcc84;
        case 0x3fcc88u: goto label_3fcc88;
        case 0x3fcc8cu: goto label_3fcc8c;
        case 0x3fcc90u: goto label_3fcc90;
        case 0x3fcc94u: goto label_3fcc94;
        case 0x3fcc98u: goto label_3fcc98;
        case 0x3fcc9cu: goto label_3fcc9c;
        case 0x3fcca0u: goto label_3fcca0;
        case 0x3fcca4u: goto label_3fcca4;
        case 0x3fcca8u: goto label_3fcca8;
        case 0x3fccacu: goto label_3fccac;
        case 0x3fccb0u: goto label_3fccb0;
        case 0x3fccb4u: goto label_3fccb4;
        case 0x3fccb8u: goto label_3fccb8;
        case 0x3fccbcu: goto label_3fccbc;
        case 0x3fccc0u: goto label_3fccc0;
        case 0x3fccc4u: goto label_3fccc4;
        case 0x3fccc8u: goto label_3fccc8;
        case 0x3fccccu: goto label_3fcccc;
        case 0x3fccd0u: goto label_3fccd0;
        case 0x3fccd4u: goto label_3fccd4;
        default: break;
    }

    ctx->pc = 0x3fcbe0u;

label_3fcbe0:
    // 0x3fcbe0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fcbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fcbe4:
    // 0x3fcbe4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fcbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3fcbe8:
    // 0x3fcbe8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fcbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3fcbec:
    // 0x3fcbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fcbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fcbf0:
    // 0x3fcbf0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fcbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3fcbf4:
    // 0x3fcbf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fcbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fcbf8:
    // 0x3fcbf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fcbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fcbfc:
    // 0x3fcbfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fcbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fcc00:
    // 0x3fcc00: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3fcc00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3fcc04:
    // 0x3fcc04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fcc08:
    // 0x3fcc08: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fcc08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fcc0c:
    // 0x3fcc0c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fcc10:
    // 0x3fcc10: 0x40f809  jalr        $v0
label_3fcc14:
    if (ctx->pc == 0x3FCC14u) {
        ctx->pc = 0x3FCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC10u;
        // 0x3fcc14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC18u;
        goto label_3fcc18;
    }
    ctx->pc = 0x3FCC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FCC18u);
        ctx->pc = 0x3FCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC10u;
        // 0x3fcc14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCC10u, 0x3FCC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCC18u;
label_3fcc18:
    // 0x3fcc18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fcc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fcc1c:
    // 0x3fcc1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fcc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fcc20:
    // 0x3fcc20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3fcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fcc24:
    // 0x3fcc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fcc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fcc28:
    // 0x3fcc28: 0xc0e858c  jal         func_3A1630
label_3fcc2c:
    if (ctx->pc == 0x3FCC2Cu) {
        ctx->pc = 0x3FCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC28u;
        // 0x3fcc2c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC30u;
        goto label_3fcc30;
    }
    ctx->pc = 0x3FCC28u;
    SET_GPR_U32(ctx, 31, 0x3FCC30u);
    ctx->pc = 0x3FCC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC28u;
    // 0x3fcc2c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FCC28u, 0x3FCC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC30u;
label_3fcc30:
    // 0x3fcc30: 0xc0ea14c  jal         func_3A8530
label_3fcc34:
    if (ctx->pc == 0x3FCC34u) {
        ctx->pc = 0x3FCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC30u;
        // 0x3fcc34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC38u;
        goto label_3fcc38;
    }
    ctx->pc = 0x3FCC30u;
    SET_GPR_U32(ctx, 31, 0x3FCC38u);
    ctx->pc = 0x3FCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC30u;
    // 0x3fcc34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FCC30u, 0x3FCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC38u;
label_3fcc38:
    // 0x3fcc38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fcc3c:
    // 0x3fcc3c: 0xc0ea12a  jal         func_3A84A8
label_3fcc40:
    if (ctx->pc == 0x3FCC40u) {
        ctx->pc = 0x3FCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC3Cu;
        // 0x3fcc40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC44u;
        goto label_3fcc44;
    }
    ctx->pc = 0x3FCC3Cu;
    SET_GPR_U32(ctx, 31, 0x3FCC44u);
    ctx->pc = 0x3FCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC3Cu;
    // 0x3fcc40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FCC3Cu, 0x3FCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC44u;
label_3fcc44:
    // 0x3fcc44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fcc44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fcc48:
    // 0x3fcc48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fcc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fcc4c:
    // 0x3fcc4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fcc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fcc50:
    // 0x3fcc50: 0xc0ea12a  jal         func_3A84A8
label_3fcc54:
    if (ctx->pc == 0x3FCC54u) {
        ctx->pc = 0x3FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC50u;
        // 0x3fcc54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC58u;
        goto label_3fcc58;
    }
    ctx->pc = 0x3FCC50u;
    SET_GPR_U32(ctx, 31, 0x3FCC58u);
    ctx->pc = 0x3FCC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC50u;
    // 0x3fcc54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FCC50u, 0x3FCC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC58u;
label_3fcc58:
    // 0x3fcc58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fcc58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fcc5c:
    // 0x3fcc5c: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x3fcc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3fcc60:
    // 0x3fcc60: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3fcc60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3fcc64:
    // 0x3fcc64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3fcc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3fcc68:
    // 0x3fcc68: 0xc136ad6  jal         func_4DAB58
label_3fcc6c:
    if (ctx->pc == 0x3FCC6Cu) {
        ctx->pc = 0x3FCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC68u;
        // 0x3fcc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC70u;
        goto label_3fcc70;
    }
    ctx->pc = 0x3FCC68u;
    SET_GPR_U32(ctx, 31, 0x3FCC70u);
    ctx->pc = 0x3FCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC68u;
    // 0x3fcc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3FCC68u, 0x3FCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC70u;
label_3fcc70:
    // 0x3fcc70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fcc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fcc74:
    // 0x3fcc74: 0xc136ad4  jal         func_4DAB50
label_3fcc78:
    if (ctx->pc == 0x3FCC78u) {
        ctx->pc = 0x3FCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC74u;
        // 0x3fcc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC7Cu;
        goto label_3fcc7c;
    }
    ctx->pc = 0x3FCC74u;
    SET_GPR_U32(ctx, 31, 0x3FCC7Cu);
    ctx->pc = 0x3FCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCC74u;
    // 0x3fcc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3FCC74u, 0x3FCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCC7Cu;
label_3fcc7c:
    // 0x3fcc7c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3fcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3fcc80:
    // 0x3fcc80: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x3fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_3fcc84:
    // 0x3fcc84: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3fcc84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3fcc88:
    // 0x3fcc88: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3fcc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3fcc8c:
    // 0x3fcc8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3fcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3fcc90:
    // 0x3fcc90: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_3fcc94:
    if (ctx->pc == 0x3FCC94u) {
        ctx->pc = 0x3FCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC90u;
        // 0x3fcc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCC98u;
        goto label_3fcc98;
    }
    ctx->pc = 0x3FCC90u;
    {
        const bool branch_taken_0x3fcc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC90u;
        // 0x3fcc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc90) {
            ctx->pc = 0x3FCCB4u;
            goto label_3fccb4;
        }
    }
    ctx->pc = 0x3FCC98u;
label_3fcc98:
    // 0x3fcc98: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x3fcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_3fcc9c:
    // 0x3fcc9c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3fcc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fcca0:
    // 0x3fcca0: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x3fcca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_3fcca4:
    // 0x3fcca4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3fcca8:
    if (ctx->pc == 0x3FCCA8u) {
        ctx->pc = 0x3FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCA4u;
        // 0x3fcca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCCACu;
        goto label_3fccac;
    }
    ctx->pc = 0x3FCCA4u;
    {
        const bool branch_taken_0x3fcca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCA4u;
        // 0x3fcca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcca4) {
            ctx->pc = 0x3FCCB4u;
            goto label_3fccb4;
        }
    }
    ctx->pc = 0x3FCCACu;
label_3fccac:
    // 0x3fccac: 0x10000002  b           . + 4 + (0x2 << 2)
label_3fccb0:
    if (ctx->pc == 0x3FCCB0u) {
        ctx->pc = 0x3FCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCACu;
        // 0x3fccb0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCCB4u;
        goto label_3fccb4;
    }
    ctx->pc = 0x3FCCACu;
    {
        const bool branch_taken_0x3fccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCACu;
        // 0x3fccb0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fccac) {
            ctx->pc = 0x3FCCB8u;
            goto label_3fccb8;
        }
    }
    ctx->pc = 0x3FCCB4u;
label_3fccb4:
    // 0x3fccb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3fccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3fccb8:
    // 0x3fccb8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3fccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3fccbc:
    // 0x3fccbc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fccbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fccc0:
    // 0x3fccc0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fccc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fccc4:
    // 0x3fccc4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fccc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fccc8:
    // 0x3fccc8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fccc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fcccc:
    // 0x3fcccc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fccccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3fccd0:
    // 0x3fccd0: 0x3e00008  jr          $ra
label_3fccd4:
    if (ctx->pc == 0x3FCCD4u) {
        ctx->pc = 0x3FCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCD0u;
        // 0x3fccd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCCD8u;
        goto label_fallthrough_0x3fccd0;
    }
    ctx->pc = 0x3FCCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCD0u;
        // 0x3fccd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fccd0:
    ctx->pc = 0x3FCCD8u;
}
