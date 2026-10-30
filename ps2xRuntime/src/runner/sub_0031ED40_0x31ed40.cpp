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

// Function: sub_0031ED40
// Address: 0x31ed40 - 0x31ef28
void sub_0031ED40_0x31ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031ED40_0x31ed40");
#endif

    switch (ctx->pc) {
        case 0x31ed40u: goto label_31ed40;
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed48u: goto label_31ed48;
        case 0x31ed4cu: goto label_31ed4c;
        case 0x31ed50u: goto label_31ed50;
        case 0x31ed54u: goto label_31ed54;
        case 0x31ed58u: goto label_31ed58;
        case 0x31ed5cu: goto label_31ed5c;
        case 0x31ed60u: goto label_31ed60;
        case 0x31ed64u: goto label_31ed64;
        case 0x31ed68u: goto label_31ed68;
        case 0x31ed6cu: goto label_31ed6c;
        case 0x31ed70u: goto label_31ed70;
        case 0x31ed74u: goto label_31ed74;
        case 0x31ed78u: goto label_31ed78;
        case 0x31ed7cu: goto label_31ed7c;
        case 0x31ed80u: goto label_31ed80;
        case 0x31ed84u: goto label_31ed84;
        case 0x31ed88u: goto label_31ed88;
        case 0x31ed8cu: goto label_31ed8c;
        case 0x31ed90u: goto label_31ed90;
        case 0x31ed94u: goto label_31ed94;
        case 0x31ed98u: goto label_31ed98;
        case 0x31ed9cu: goto label_31ed9c;
        case 0x31eda0u: goto label_31eda0;
        case 0x31eda4u: goto label_31eda4;
        case 0x31eda8u: goto label_31eda8;
        case 0x31edacu: goto label_31edac;
        case 0x31edb0u: goto label_31edb0;
        case 0x31edb4u: goto label_31edb4;
        case 0x31edb8u: goto label_31edb8;
        case 0x31edbcu: goto label_31edbc;
        case 0x31edc0u: goto label_31edc0;
        case 0x31edc4u: goto label_31edc4;
        case 0x31edc8u: goto label_31edc8;
        case 0x31edccu: goto label_31edcc;
        case 0x31edd0u: goto label_31edd0;
        case 0x31edd4u: goto label_31edd4;
        case 0x31edd8u: goto label_31edd8;
        case 0x31eddcu: goto label_31eddc;
        case 0x31ede0u: goto label_31ede0;
        case 0x31ede4u: goto label_31ede4;
        case 0x31ede8u: goto label_31ede8;
        case 0x31edecu: goto label_31edec;
        case 0x31edf0u: goto label_31edf0;
        case 0x31edf4u: goto label_31edf4;
        case 0x31edf8u: goto label_31edf8;
        case 0x31edfcu: goto label_31edfc;
        case 0x31ee00u: goto label_31ee00;
        case 0x31ee04u: goto label_31ee04;
        case 0x31ee08u: goto label_31ee08;
        case 0x31ee0cu: goto label_31ee0c;
        case 0x31ee10u: goto label_31ee10;
        case 0x31ee14u: goto label_31ee14;
        case 0x31ee18u: goto label_31ee18;
        case 0x31ee1cu: goto label_31ee1c;
        case 0x31ee20u: goto label_31ee20;
        case 0x31ee24u: goto label_31ee24;
        case 0x31ee28u: goto label_31ee28;
        case 0x31ee2cu: goto label_31ee2c;
        case 0x31ee30u: goto label_31ee30;
        case 0x31ee34u: goto label_31ee34;
        case 0x31ee38u: goto label_31ee38;
        case 0x31ee3cu: goto label_31ee3c;
        case 0x31ee40u: goto label_31ee40;
        case 0x31ee44u: goto label_31ee44;
        case 0x31ee48u: goto label_31ee48;
        case 0x31ee4cu: goto label_31ee4c;
        case 0x31ee50u: goto label_31ee50;
        case 0x31ee54u: goto label_31ee54;
        case 0x31ee58u: goto label_31ee58;
        case 0x31ee5cu: goto label_31ee5c;
        case 0x31ee60u: goto label_31ee60;
        case 0x31ee64u: goto label_31ee64;
        case 0x31ee68u: goto label_31ee68;
        case 0x31ee6cu: goto label_31ee6c;
        case 0x31ee70u: goto label_31ee70;
        case 0x31ee74u: goto label_31ee74;
        case 0x31ee78u: goto label_31ee78;
        case 0x31ee7cu: goto label_31ee7c;
        case 0x31ee80u: goto label_31ee80;
        case 0x31ee84u: goto label_31ee84;
        case 0x31ee88u: goto label_31ee88;
        case 0x31ee8cu: goto label_31ee8c;
        case 0x31ee90u: goto label_31ee90;
        case 0x31ee94u: goto label_31ee94;
        case 0x31ee98u: goto label_31ee98;
        case 0x31ee9cu: goto label_31ee9c;
        case 0x31eea0u: goto label_31eea0;
        case 0x31eea4u: goto label_31eea4;
        case 0x31eea8u: goto label_31eea8;
        case 0x31eeacu: goto label_31eeac;
        case 0x31eeb0u: goto label_31eeb0;
        case 0x31eeb4u: goto label_31eeb4;
        case 0x31eeb8u: goto label_31eeb8;
        case 0x31eebcu: goto label_31eebc;
        case 0x31eec0u: goto label_31eec0;
        case 0x31eec4u: goto label_31eec4;
        case 0x31eec8u: goto label_31eec8;
        case 0x31eeccu: goto label_31eecc;
        case 0x31eed0u: goto label_31eed0;
        case 0x31eed4u: goto label_31eed4;
        case 0x31eed8u: goto label_31eed8;
        case 0x31eedcu: goto label_31eedc;
        case 0x31eee0u: goto label_31eee0;
        case 0x31eee4u: goto label_31eee4;
        case 0x31eee8u: goto label_31eee8;
        case 0x31eeecu: goto label_31eeec;
        case 0x31eef0u: goto label_31eef0;
        case 0x31eef4u: goto label_31eef4;
        case 0x31eef8u: goto label_31eef8;
        case 0x31eefcu: goto label_31eefc;
        case 0x31ef00u: goto label_31ef00;
        case 0x31ef04u: goto label_31ef04;
        case 0x31ef08u: goto label_31ef08;
        case 0x31ef0cu: goto label_31ef0c;
        case 0x31ef10u: goto label_31ef10;
        case 0x31ef14u: goto label_31ef14;
        case 0x31ef18u: goto label_31ef18;
        case 0x31ef1cu: goto label_31ef1c;
        case 0x31ef20u: goto label_31ef20;
        case 0x31ef24u: goto label_31ef24;
        default: break;
    }

    ctx->pc = 0x31ed40u;

label_31ed40:
    // 0x31ed40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31ed44:
    // 0x31ed44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31ed48:
    // 0x31ed48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31ed4c:
    // 0x31ed4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31ed4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ed50:
    // 0x31ed50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31ed54:
    // 0x31ed54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31ed58:
    // 0x31ed58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31ed5c:
    // 0x31ed5c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31ed60:
    // 0x31ed60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31ed64:
    // 0x31ed64: 0xc05959e  jal         func_165678
label_31ed68:
    if (ctx->pc == 0x31ED68u) {
        ctx->pc = 0x31ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED64u;
        // 0x31ed68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED6Cu;
        goto label_31ed6c;
    }
    ctx->pc = 0x31ED64u;
    SET_GPR_U32(ctx, 31, 0x31ED6Cu);
    ctx->pc = 0x31ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED64u;
    // 0x31ed68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31ED64u, 0x31ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED6Cu;
label_31ed6c:
    // 0x31ed6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31ed6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ed70:
    // 0x31ed70: 0x12400064  beqz        $s2, . + 4 + (0x64 << 2)
label_31ed74:
    if (ctx->pc == 0x31ED74u) {
        ctx->pc = 0x31ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED70u;
        // 0x31ed74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED78u;
        goto label_31ed78;
    }
    ctx->pc = 0x31ED70u;
    {
        const bool branch_taken_0x31ed70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED70u;
        // 0x31ed74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed70) {
            ctx->pc = 0x31EF04u;
            goto label_31ef04;
        }
    }
    ctx->pc = 0x31ED78u;
label_31ed78:
    // 0x31ed78: 0xc087502  jal         func_21D408
label_31ed7c:
    if (ctx->pc == 0x31ED7Cu) {
        ctx->pc = 0x31ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED78u;
        // 0x31ed7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED80u;
        goto label_31ed80;
    }
    ctx->pc = 0x31ED78u;
    SET_GPR_U32(ctx, 31, 0x31ED80u);
    ctx->pc = 0x31ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED78u;
    // 0x31ed7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31ED78u, 0x31ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED80u;
label_31ed80:
    // 0x31ed80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ed80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ed84:
    // 0x31ed84: 0xc0a3630  jal         func_28D8C0
label_31ed88:
    if (ctx->pc == 0x31ED88u) {
        ctx->pc = 0x31ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED84u;
        // 0x31ed88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED8Cu;
        goto label_31ed8c;
    }
    ctx->pc = 0x31ED84u;
    SET_GPR_U32(ctx, 31, 0x31ED8Cu);
    ctx->pc = 0x31ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED84u;
    // 0x31ed88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31ED84u, 0x31ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED8Cu;
label_31ed8c:
    // 0x31ed8c: 0xc0a3628  jal         func_28D8A0
label_31ed90:
    if (ctx->pc == 0x31ED90u) {
        ctx->pc = 0x31ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED8Cu;
        // 0x31ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED94u;
        goto label_31ed94;
    }
    ctx->pc = 0x31ED8Cu;
    SET_GPR_U32(ctx, 31, 0x31ED94u);
    ctx->pc = 0x31ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED8Cu;
    // 0x31ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31ED8Cu, 0x31ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED94u;
label_31ed94:
    // 0x31ed94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31ed98:
    // 0x31ed98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31ed98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31ed9c:
    // 0x31ed9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31eda0:
    // 0x31eda0: 0x40f809  jalr        $v0
label_31eda4:
    if (ctx->pc == 0x31EDA4u) {
        ctx->pc = 0x31EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDA0u;
        // 0x31eda4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDA8u;
        goto label_31eda8;
    }
    ctx->pc = 0x31EDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EDA8u);
        ctx->pc = 0x31EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDA0u;
        // 0x31eda4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EDA0u, 0x31EDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EDA8u;
label_31eda8:
    // 0x31eda8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31eda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31edac:
    // 0x31edac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31edacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31edb0:
    // 0x31edb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31edb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_31edb4:
    // 0x31edb4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31edb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_31edb8:
    // 0x31edb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31edb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31edbc:
    // 0x31edbc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x31edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31edc0:
    // 0x31edc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31edc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_31edc4:
    // 0x31edc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31edc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31edc8:
    // 0x31edc8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31edcc:
    // 0x31edcc: 0xc0b68b0  jal         func_2DA2C0
label_31edd0:
    if (ctx->pc == 0x31EDD0u) {
        ctx->pc = 0x31EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDCCu;
        // 0x31edd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDD4u;
        goto label_31edd4;
    }
    ctx->pc = 0x31EDCCu;
    SET_GPR_U32(ctx, 31, 0x31EDD4u);
    ctx->pc = 0x31EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDCCu;
    // 0x31edd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x31EDCCu, 0x31EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDD4u;
label_31edd4:
    // 0x31edd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31edd8:
    // 0x31edd8: 0xc08750a  jal         func_21D428
label_31eddc:
    if (ctx->pc == 0x31EDDCu) {
        ctx->pc = 0x31EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDD8u;
        // 0x31eddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDE0u;
        goto label_31ede0;
    }
    ctx->pc = 0x31EDD8u;
    SET_GPR_U32(ctx, 31, 0x31EDE0u);
    ctx->pc = 0x31EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDD8u;
    // 0x31eddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31EDD8u, 0x31EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDE0u;
label_31ede0:
    // 0x31ede0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31ede4:
    // 0x31ede4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31ede4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ede8:
    // 0x31ede8: 0xc059856  jal         func_166158
label_31edec:
    if (ctx->pc == 0x31EDECu) {
        ctx->pc = 0x31EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDE8u;
        // 0x31edec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDF0u;
        goto label_31edf0;
    }
    ctx->pc = 0x31EDE8u;
    SET_GPR_U32(ctx, 31, 0x31EDF0u);
    ctx->pc = 0x31EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDE8u;
    // 0x31edec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31EDE8u, 0x31EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDF0u;
label_31edf0:
    // 0x31edf0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x31edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31edf4:
    // 0x31edf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31edf8:
    // 0x31edf8: 0xc0a576c  jal         func_295DB0
label_31edfc:
    if (ctx->pc == 0x31EDFCu) {
        ctx->pc = 0x31EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDF8u;
        // 0x31edfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE00u;
        goto label_31ee00;
    }
    ctx->pc = 0x31EDF8u;
    SET_GPR_U32(ctx, 31, 0x31EE00u);
    ctx->pc = 0x31EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDF8u;
    // 0x31edfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31EDF8u, 0x31EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE00u;
label_31ee00:
    // 0x31ee00: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31ee00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_31ee04:
    // 0x31ee04: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x31ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_31ee08:
    // 0x31ee08: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x31ee08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_31ee0c:
    // 0x31ee0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ee10:
    // 0x31ee10: 0xc0a5776  jal         func_295DD8
label_31ee14:
    if (ctx->pc == 0x31EE14u) {
        ctx->pc = 0x31EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE10u;
        // 0x31ee14: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE18u;
        goto label_31ee18;
    }
    ctx->pc = 0x31EE10u;
    SET_GPR_U32(ctx, 31, 0x31EE18u);
    ctx->pc = 0x31EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE10u;
    // 0x31ee14: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x31EE10u, 0x31EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE18u;
label_31ee18:
    // 0x31ee18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ee18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31ee1c:
    // 0x31ee1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ee1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31ee20:
    // 0x31ee20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ee24:
    // 0x31ee24: 0xc0a5922  jal         func_296488
label_31ee28:
    if (ctx->pc == 0x31EE28u) {
        ctx->pc = 0x31EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE24u;
        // 0x31ee28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE2Cu;
        goto label_31ee2c;
    }
    ctx->pc = 0x31EE24u;
    SET_GPR_U32(ctx, 31, 0x31EE2Cu);
    ctx->pc = 0x31EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE24u;
    // 0x31ee28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x31EE24u, 0x31EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE2Cu;
label_31ee2c:
    // 0x31ee2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31ee30:
    // 0x31ee30: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31ee30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31ee34:
    // 0x31ee34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ee38:
    // 0x31ee38: 0xc137826  jal         func_4DE098
label_31ee3c:
    if (ctx->pc == 0x31EE3Cu) {
        ctx->pc = 0x31EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE38u;
        // 0x31ee3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE40u;
        goto label_31ee40;
    }
    ctx->pc = 0x31EE38u;
    SET_GPR_U32(ctx, 31, 0x31EE40u);
    ctx->pc = 0x31EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE38u;
    // 0x31ee3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31EE38u, 0x31EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE40u;
label_31ee40:
    // 0x31ee40: 0xc0e409a  jal         func_390268
label_31ee44:
    if (ctx->pc == 0x31EE44u) {
        ctx->pc = 0x31EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE40u;
        // 0x31ee44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE48u;
        goto label_31ee48;
    }
    ctx->pc = 0x31EE40u;
    SET_GPR_U32(ctx, 31, 0x31EE48u);
    ctx->pc = 0x31EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE40u;
    // 0x31ee44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31EE40u, 0x31EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE48u;
label_31ee48:
    // 0x31ee48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ee48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ee4c:
    // 0x31ee4c: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_31ee50:
    if (ctx->pc == 0x31EE50u) {
        ctx->pc = 0x31EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE4Cu;
        // 0x31ee50: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE54u;
        goto label_31ee54;
    }
    ctx->pc = 0x31EE4Cu;
    {
        const bool branch_taken_0x31ee4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ee4c) {
            ctx->pc = 0x31EE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EE4Cu;
            // 0x31ee50: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EEF8u;
            goto label_31eef8;
        }
    }
    ctx->pc = 0x31EE54u;
label_31ee54:
    // 0x31ee54: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31ee58:
    // 0x31ee58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31ee58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31ee5c:
    // 0x31ee5c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31ee60:
    if (ctx->pc == 0x31EE60u) {
        ctx->pc = 0x31EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE5Cu;
        // 0x31ee60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE64u;
        goto label_31ee64;
    }
    ctx->pc = 0x31EE5Cu;
    {
        const bool branch_taken_0x31ee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE5Cu;
        // 0x31ee60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee5c) {
            ctx->pc = 0x31EEF4u;
            goto label_31eef4;
        }
    }
    ctx->pc = 0x31EE64u;
label_31ee64:
    // 0x31ee64: 0x52320024  beql        $s1, $s2, . + 4 + (0x24 << 2)
label_31ee68:
    if (ctx->pc == 0x31EE68u) {
        ctx->pc = 0x31EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE64u;
        // 0x31ee68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE6Cu;
        goto label_31ee6c;
    }
    ctx->pc = 0x31EE64u;
    {
        const bool branch_taken_0x31ee64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x31ee64) {
            ctx->pc = 0x31EE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EE64u;
            // 0x31ee68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EEF8u;
            goto label_31eef8;
        }
    }
    ctx->pc = 0x31EE6Cu;
label_31ee6c:
    // 0x31ee6c: 0xc088edc  jal         func_223B70
label_31ee70:
    if (ctx->pc == 0x31EE70u) {
        ctx->pc = 0x31EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE6Cu;
        // 0x31ee70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE74u;
        goto label_31ee74;
    }
    ctx->pc = 0x31EE6Cu;
    SET_GPR_U32(ctx, 31, 0x31EE74u);
    ctx->pc = 0x31EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE6Cu;
    // 0x31ee70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31EE6Cu, 0x31EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE74u;
label_31ee74:
    // 0x31ee74: 0x50500020  beql        $v0, $s0, . + 4 + (0x20 << 2)
label_31ee78:
    if (ctx->pc == 0x31EE78u) {
        ctx->pc = 0x31EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE74u;
        // 0x31ee78: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE7Cu;
        goto label_31ee7c;
    }
    ctx->pc = 0x31EE74u;
    {
        const bool branch_taken_0x31ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31ee74) {
            ctx->pc = 0x31EE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EE74u;
            // 0x31ee78: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EEF8u;
            goto label_31eef8;
        }
    }
    ctx->pc = 0x31EE7Cu;
label_31ee7c:
    // 0x31ee7c: 0xc089f98  jal         func_227E60
label_31ee80:
    if (ctx->pc == 0x31EE80u) {
        ctx->pc = 0x31EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE7Cu;
        // 0x31ee80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE84u;
        goto label_31ee84;
    }
    ctx->pc = 0x31EE7Cu;
    SET_GPR_U32(ctx, 31, 0x31EE84u);
    ctx->pc = 0x31EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE7Cu;
    // 0x31ee80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31EE7Cu, 0x31EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE84u;
label_31ee84:
    // 0x31ee84: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_31ee88:
    if (ctx->pc == 0x31EE88u) {
        ctx->pc = 0x31EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE84u;
        // 0x31ee88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE8Cu;
        goto label_31ee8c;
    }
    ctx->pc = 0x31EE84u;
    {
        const bool branch_taken_0x31ee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE84u;
        // 0x31ee88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee84) {
            ctx->pc = 0x31EEF4u;
            goto label_31eef4;
        }
    }
    ctx->pc = 0x31EE8Cu;
label_31ee8c:
    // 0x31ee8c: 0xc0a57ca  jal         func_295F28
label_31ee90:
    if (ctx->pc == 0x31EE90u) {
        ctx->pc = 0x31EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE8Cu;
        // 0x31ee90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE94u;
        goto label_31ee94;
    }
    ctx->pc = 0x31EE8Cu;
    SET_GPR_U32(ctx, 31, 0x31EE94u);
    ctx->pc = 0x31EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE8Cu;
    // 0x31ee90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x31EE8Cu, 0x31EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE94u;
label_31ee94:
    // 0x31ee94: 0xc087502  jal         func_21D408
label_31ee98:
    if (ctx->pc == 0x31EE98u) {
        ctx->pc = 0x31EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE94u;
        // 0x31ee98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE9Cu;
        goto label_31ee9c;
    }
    ctx->pc = 0x31EE94u;
    SET_GPR_U32(ctx, 31, 0x31EE9Cu);
    ctx->pc = 0x31EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE94u;
    // 0x31ee98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31EE94u, 0x31EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE9Cu;
label_31ee9c:
    // 0x31ee9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eea0:
    // 0x31eea0: 0xc0a3630  jal         func_28D8C0
label_31eea4:
    if (ctx->pc == 0x31EEA4u) {
        ctx->pc = 0x31EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEA0u;
        // 0x31eea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEA8u;
        goto label_31eea8;
    }
    ctx->pc = 0x31EEA0u;
    SET_GPR_U32(ctx, 31, 0x31EEA8u);
    ctx->pc = 0x31EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEA0u;
    // 0x31eea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31EEA0u, 0x31EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEA8u;
label_31eea8:
    // 0x31eea8: 0xc0a3628  jal         func_28D8A0
label_31eeac:
    if (ctx->pc == 0x31EEACu) {
        ctx->pc = 0x31EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEA8u;
        // 0x31eeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEB0u;
        goto label_31eeb0;
    }
    ctx->pc = 0x31EEA8u;
    SET_GPR_U32(ctx, 31, 0x31EEB0u);
    ctx->pc = 0x31EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEA8u;
    // 0x31eeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31EEA8u, 0x31EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEB0u;
label_31eeb0:
    // 0x31eeb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31eeb4:
    // 0x31eeb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31eeb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31eeb8:
    // 0x31eeb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31eebc:
    // 0x31eebc: 0x40f809  jalr        $v0
label_31eec0:
    if (ctx->pc == 0x31EEC0u) {
        ctx->pc = 0x31EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEBCu;
        // 0x31eec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEC4u;
        goto label_31eec4;
    }
    ctx->pc = 0x31EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EEC4u);
        ctx->pc = 0x31EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEBCu;
        // 0x31eec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EEBCu, 0x31EEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EEC4u;
label_31eec4:
    // 0x31eec4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31eec8:
    // 0x31eec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31eec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eecc:
    // 0x31eecc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31eeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31eed0:
    // 0x31eed0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31eed4:
    // 0x31eed4: 0x40f809  jalr        $v0
label_31eed8:
    if (ctx->pc == 0x31EED8u) {
        ctx->pc = 0x31EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EED4u;
        // 0x31eed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEDCu;
        goto label_31eedc;
    }
    ctx->pc = 0x31EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EEDCu);
        ctx->pc = 0x31EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EED4u;
        // 0x31eed8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EED4u, 0x31EEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EEDCu;
label_31eedc:
    // 0x31eedc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x31eedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_31eee0:
    // 0x31eee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31eee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31eee4:
    // 0x31eee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31eee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31eee8:
    // 0x31eee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31eee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eeec:
    // 0x31eeec: 0xc0b78b2  jal         func_2DE2C8
label_31eef0:
    if (ctx->pc == 0x31EEF0u) {
        ctx->pc = 0x31EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEECu;
        // 0x31eef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EEF4u;
        goto label_31eef4;
    }
    ctx->pc = 0x31EEECu;
    SET_GPR_U32(ctx, 31, 0x31EEF4u);
    ctx->pc = 0x31EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEECu;
    // 0x31eef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x31EEECu, 0x31EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEF4u;
label_31eef4:
    // 0x31eef4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31eef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31eef8:
    // 0x31eef8: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x31eef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31eefc:
    // 0x31eefc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_31ef00:
    if (ctx->pc == 0x31EF00u) {
        ctx->pc = 0x31EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEFCu;
        // 0x31ef00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF04u;
        goto label_31ef04;
    }
    ctx->pc = 0x31EEFCu;
    {
        const bool branch_taken_0x31eefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEFCu;
        // 0x31ef00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eefc) {
            ctx->pc = 0x31EE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ee38;
        }
    }
    ctx->pc = 0x31EF04u;
label_31ef04:
    // 0x31ef04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31ef04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31ef08:
    // 0x31ef08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31ef0c:
    // 0x31ef0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31ef0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31ef10:
    // 0x31ef10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ef10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31ef14:
    // 0x31ef14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31ef14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31ef18:
    // 0x31ef18: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31ef18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31ef1c:
    // 0x31ef1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31ef20:
    // 0x31ef20: 0x3e00008  jr          $ra
label_31ef24:
    if (ctx->pc == 0x31EF24u) {
        ctx->pc = 0x31EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF20u;
        // 0x31ef24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EF28u;
        goto label_fallthrough_0x31ef20;
    }
    ctx->pc = 0x31EF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF20u;
        // 0x31ef24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31ef20:
    ctx->pc = 0x31EF28u;
}
