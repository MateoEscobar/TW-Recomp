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

// Function: sub_0023F9D0
// Address: 0x23f9d0 - 0x23fb00
void sub_0023F9D0_0x23f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F9D0_0x23f9d0");
#endif

    switch (ctx->pc) {
        case 0x23f9d0u: goto label_23f9d0;
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23f9d8u: goto label_23f9d8;
        case 0x23f9dcu: goto label_23f9dc;
        case 0x23f9e0u: goto label_23f9e0;
        case 0x23f9e4u: goto label_23f9e4;
        case 0x23f9e8u: goto label_23f9e8;
        case 0x23f9ecu: goto label_23f9ec;
        case 0x23f9f0u: goto label_23f9f0;
        case 0x23f9f4u: goto label_23f9f4;
        case 0x23f9f8u: goto label_23f9f8;
        case 0x23f9fcu: goto label_23f9fc;
        case 0x23fa00u: goto label_23fa00;
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa0cu: goto label_23fa0c;
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa14u: goto label_23fa14;
        case 0x23fa18u: goto label_23fa18;
        case 0x23fa1cu: goto label_23fa1c;
        case 0x23fa20u: goto label_23fa20;
        case 0x23fa24u: goto label_23fa24;
        case 0x23fa28u: goto label_23fa28;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa3cu: goto label_23fa3c;
        case 0x23fa40u: goto label_23fa40;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa48u: goto label_23fa48;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fa54u: goto label_23fa54;
        case 0x23fa58u: goto label_23fa58;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa60u: goto label_23fa60;
        case 0x23fa64u: goto label_23fa64;
        case 0x23fa68u: goto label_23fa68;
        case 0x23fa6cu: goto label_23fa6c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa74u: goto label_23fa74;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa7cu: goto label_23fa7c;
        case 0x23fa80u: goto label_23fa80;
        case 0x23fa84u: goto label_23fa84;
        case 0x23fa88u: goto label_23fa88;
        case 0x23fa8cu: goto label_23fa8c;
        case 0x23fa90u: goto label_23fa90;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fa98u: goto label_23fa98;
        case 0x23fa9cu: goto label_23fa9c;
        case 0x23faa0u: goto label_23faa0;
        case 0x23faa4u: goto label_23faa4;
        case 0x23faa8u: goto label_23faa8;
        case 0x23faacu: goto label_23faac;
        case 0x23fab0u: goto label_23fab0;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fab8u: goto label_23fab8;
        case 0x23fabcu: goto label_23fabc;
        case 0x23fac0u: goto label_23fac0;
        case 0x23fac4u: goto label_23fac4;
        case 0x23fac8u: goto label_23fac8;
        case 0x23faccu: goto label_23facc;
        case 0x23fad0u: goto label_23fad0;
        case 0x23fad4u: goto label_23fad4;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae4u: goto label_23fae4;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faecu: goto label_23faec;
        case 0x23faf0u: goto label_23faf0;
        case 0x23faf4u: goto label_23faf4;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fafcu: goto label_23fafc;
        default: break;
    }

    ctx->pc = 0x23f9d0u;

label_23f9d0:
    // 0x23f9d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23f9d4:
    // 0x23f9d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_23f9d8:
    // 0x23f9d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f9dc:
    // 0x23f9dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23f9e0:
    // 0x23f9e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_23f9e4:
    // 0x23f9e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23f9e8:
    // 0x23f9e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23f9ec:
    // 0x23f9ec: 0xc087502  jal         func_21D408
label_23f9f0:
    if (ctx->pc == 0x23F9F0u) {
        ctx->pc = 0x23F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9ECu;
        // 0x23f9f0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9F4u;
        goto label_23f9f4;
    }
    ctx->pc = 0x23F9ECu;
    SET_GPR_U32(ctx, 31, 0x23F9F4u);
    ctx->pc = 0x23F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9ECu;
    // 0x23f9f0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23F9ECu, 0x23F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9F4u;
label_23f9f4:
    // 0x23f9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f9f8:
    // 0x23f9f8: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x23f9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
label_23f9fc:
    // 0x23f9fc: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_23fa00:
    if (ctx->pc == 0x23FA00u) {
        ctx->pc = 0x23FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9FCu;
        // 0x23fa00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA04u;
        goto label_23fa04;
    }
    ctx->pc = 0x23F9FCu;
    {
        const bool branch_taken_0x23f9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f9fc) {
            ctx->pc = 0x23FA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F9FCu;
            // 0x23fa00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAE0u;
            goto label_23fae0;
        }
    }
    ctx->pc = 0x23FA04u;
label_23fa04:
    // 0x23fa04: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_23fa08:
    // 0x23fa08: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
label_23fa0c:
    if (ctx->pc == 0x23FA0Cu) {
        ctx->pc = 0x23FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA08u;
        // 0x23fa0c: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA10u;
        goto label_23fa10;
    }
    ctx->pc = 0x23FA08u;
    {
        const bool branch_taken_0x23fa08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA08u;
        // 0x23fa0c: 0x2902a  slt         $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa08) {
            ctx->pc = 0x23FADCu;
            goto label_23fadc;
        }
    }
    ctx->pc = 0x23FA10u;
label_23fa10:
    // 0x23fa10: 0xc0a36c2  jal         func_28DB08
label_23fa14:
    if (ctx->pc == 0x23FA14u) {
        ctx->pc = 0x23FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA10u;
        // 0x23fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA18u;
        goto label_23fa18;
    }
    ctx->pc = 0x23FA10u;
    SET_GPR_U32(ctx, 31, 0x23FA18u);
    ctx->pc = 0x23FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA10u;
    // 0x23fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x23FA10u, 0x23FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA18u;
label_23fa18:
    // 0x23fa18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23fa1c:
    // 0x23fa1c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_23fa20:
    // 0x23fa20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_23fa24:
    // 0x23fa24: 0xa0f809  jalr        $a1
label_23fa28:
    if (ctx->pc == 0x23FA28u) {
        ctx->pc = 0x23FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA24u;
        // 0x23fa28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA2Cu;
        goto label_23fa2c;
    }
    ctx->pc = 0x23FA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23FA2Cu);
        ctx->pc = 0x23FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA24u;
        // 0x23fa28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA24u, 0x23FA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FA2Cu;
label_23fa2c:
    // 0x23fa2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23fa2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23fa30:
    // 0x23fa30: 0x5672002b  bnel        $s3, $s2, . + 4 + (0x2B << 2)
label_23fa34:
    if (ctx->pc == 0x23FA34u) {
        ctx->pc = 0x23FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA30u;
        // 0x23fa34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA38u;
        goto label_23fa38;
    }
    ctx->pc = 0x23FA30u;
    {
        const bool branch_taken_0x23fa30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x23fa30) {
            ctx->pc = 0x23FA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FA30u;
            // 0x23fa34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAE0u;
            goto label_23fae0;
        }
    }
    ctx->pc = 0x23FA38u;
label_23fa38:
    // 0x23fa38: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_23fa3c:
    // 0x23fa3c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x23fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_23fa40:
    // 0x23fa40: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x23fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_23fa44:
    // 0x23fa44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23fa48:
    // 0x23fa48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_23fa4c:
    // 0x23fa4c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_23fa50:
    // 0x23fa50: 0xc136afa  jal         func_4DABE8
label_23fa54:
    if (ctx->pc == 0x23FA54u) {
        ctx->pc = 0x23FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA50u;
        // 0x23fa54: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA58u;
        goto label_23fa58;
    }
    ctx->pc = 0x23FA50u;
    SET_GPR_U32(ctx, 31, 0x23FA58u);
    ctx->pc = 0x23FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA50u;
    // 0x23fa54: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x23FA50u, 0x23FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA58u;
label_23fa58:
    // 0x23fa58: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23fa58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23fa5c:
    // 0x23fa5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23fa60:
    // 0x23fa60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23fa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_23fa64:
    // 0x23fa64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23fa68:
    // 0x23fa68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x23fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23fa6c:
    // 0x23fa6c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x23fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fa70:
    // 0x23fa70: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x23fa70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_23fa74:
    // 0x23fa74: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x23fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23fa78:
    // 0x23fa78: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x23fa78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_23fa7c:
    // 0x23fa7c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x23fa7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_23fa80:
    // 0x23fa80: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x23fa80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_23fa84:
    // 0x23fa84: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x23fa84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_23fa88:
    // 0x23fa88: 0x0  nop
    ctx->pc = 0x23fa88u;
    // NOP
label_23fa8c:
    // 0x23fa8c: 0x0  nop
    ctx->pc = 0x23fa8cu;
    // NOP
label_23fa90:
    // 0x23fa90: 0x46000004  c1          0x4
    ctx->pc = 0x23fa90u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_23fa94:
    // 0x23fa94: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x23fa94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fa98:
    // 0x23fa98: 0x0  nop
    ctx->pc = 0x23fa98u;
    // NOP
label_23fa9c:
    // 0x23fa9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_23faa0:
    if (ctx->pc == 0x23FAA0u) {
        ctx->pc = 0x23FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA9Cu;
        // 0x23faa0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAA4u;
        goto label_23faa4;
    }
    ctx->pc = 0x23FA9Cu;
    {
        const bool branch_taken_0x23fa9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA9Cu;
        // 0x23faa0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa9c) {
            ctx->pc = 0x23FAB0u;
            goto label_23fab0;
        }
    }
    ctx->pc = 0x23FAA4u;
label_23faa4:
    // 0x23faa4: 0x0  nop
    ctx->pc = 0x23faa4u;
    // NOP
label_23faa8:
    // 0x23faa8: 0x0  nop
    ctx->pc = 0x23faa8u;
    // NOP
label_23faac:
    // 0x23faac: 0x46020504  c1          0x20504
    ctx->pc = 0x23faacu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_23fab0:
    // 0x23fab0: 0xc08ab8c  jal         func_22AE30
label_23fab4:
    if (ctx->pc == 0x23FAB4u) {
        ctx->pc = 0x23FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAB0u;
        // 0x23fab4: 0xc62c01ac  lwc1        $f12, 0x1AC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAB8u;
        goto label_23fab8;
    }
    ctx->pc = 0x23FAB0u;
    SET_GPR_U32(ctx, 31, 0x23FAB8u);
    ctx->pc = 0x23FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAB0u;
    // 0x23fab4: 0xc62c01ac  lwc1        $f12, 0x1AC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE30u, 0x23FAB0u, 0x23FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAB8u;
label_23fab8:
    // 0x23fab8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x23fab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_23fabc:
    // 0x23fabc: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x23fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fac0:
    // 0x23fac0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23fac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fac4:
    // 0x23fac4: 0x0  nop
    ctx->pc = 0x23fac4u;
    // NOP
label_23fac8:
    // 0x23fac8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_23facc:
    if (ctx->pc == 0x23FACCu) {
        ctx->pc = 0x23FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAC8u;
        // 0x23facc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAD0u;
        goto label_23fad0;
    }
    ctx->pc = 0x23FAC8u;
    {
        const bool branch_taken_0x23fac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAC8u;
        // 0x23facc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fac8) {
            ctx->pc = 0x23FAD4u;
            goto label_23fad4;
        }
    }
    ctx->pc = 0x23FAD0u;
label_23fad0:
    // 0x23fad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fad4:
    // 0x23fad4: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_23fad8:
    if (ctx->pc == 0x23FAD8u) {
        ctx->pc = 0x23FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAD4u;
        // 0x23fad8: 0xa202011d  sb          $v0, 0x11D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FADCu;
        goto label_23fadc;
    }
    ctx->pc = 0x23FAD4u;
    {
        const bool branch_taken_0x23fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x23fad4) {
            ctx->pc = 0x23FAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAD4u;
            // 0x23fad8: 0xa202011d  sb          $v0, 0x11D($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FADCu;
            goto label_23fadc;
        }
    }
    ctx->pc = 0x23FADCu;
label_23fadc:
    // 0x23fadc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23fae0:
    // 0x23fae0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23fae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23fae4:
    // 0x23fae4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x23fae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23fae8:
    // 0x23fae8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23faec:
    // 0x23faec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23faecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23faf0:
    // 0x23faf0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x23faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23faf4:
    // 0x23faf4: 0x3e00008  jr          $ra
label_23faf8:
    if (ctx->pc == 0x23FAF8u) {
        ctx->pc = 0x23FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAF4u;
        // 0x23faf8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAFCu;
        goto label_23fafc;
    }
    ctx->pc = 0x23FAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAF4u;
        // 0x23faf8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FAFCu;
label_23fafc:
    // 0x23fafc: 0x0  nop
    ctx->pc = 0x23fafcu;
    // NOP
    ctx->pc = 0x23fb00u;
}
