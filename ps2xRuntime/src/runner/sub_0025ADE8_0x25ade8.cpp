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

// Function: sub_0025ADE8
// Address: 0x25ade8 - 0x25aeb8
void sub_0025ADE8_0x25ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ADE8_0x25ade8");
#endif

    switch (ctx->pc) {
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        default: break;
    }

    ctx->pc = 0x25ade8u;

label_25ade8:
    // 0x25ade8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25adec:
    // 0x25adec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_25adf0:
    // 0x25adf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25adf4:
    // 0x25adf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25adf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25adf8:
    // 0x25adf8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_25adfc:
    // 0x25adfc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25adfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25ae00:
    // 0x25ae00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x25ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_25ae04:
    // 0x25ae04: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25ae04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25ae08:
    // 0x25ae08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_25ae0c:
    // 0x25ae0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ae10:
    // 0x25ae10: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x25ae10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25ae14:
    // 0x25ae14: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_25ae18:
    // 0x25ae18: 0x8e1200d8  lw          $s2, 0xD8($s0)
    ctx->pc = 0x25ae18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25ae1c:
    // 0x25ae1c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_25ae20:
    if (ctx->pc == 0x25AE20u) {
        ctx->pc = 0x25AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE1Cu;
        // 0x25ae20: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE24u;
        goto label_25ae24;
    }
    ctx->pc = 0x25AE1Cu;
    {
        const bool branch_taken_0x25ae1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE1Cu;
        // 0x25ae20: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae1c) {
            ctx->pc = 0x25AE90u;
            goto label_25ae90;
        }
    }
    ctx->pc = 0x25AE24u;
label_25ae24:
    // 0x25ae24: 0xc089990  jal         func_226640
label_25ae28:
    if (ctx->pc == 0x25AE28u) {
        ctx->pc = 0x25AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE24u;
        // 0x25ae28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE2Cu;
        goto label_25ae2c;
    }
    ctx->pc = 0x25AE24u;
    SET_GPR_U32(ctx, 31, 0x25AE2Cu);
    ctx->pc = 0x25AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE24u;
    // 0x25ae28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25AE24u, 0x25AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE2Cu;
label_25ae2c:
    // 0x25ae2c: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25ae30:
    // 0x25ae30: 0xc041532  jal         func_1054C8
label_25ae34:
    if (ctx->pc == 0x25AE34u) {
        ctx->pc = 0x25AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE30u;
        // 0x25ae34: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE38u;
        goto label_25ae38;
    }
    ctx->pc = 0x25AE30u;
    SET_GPR_U32(ctx, 31, 0x25AE38u);
    ctx->pc = 0x25AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE30u;
    // 0x25ae34: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25AE30u, 0x25AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE38u;
label_25ae38:
    // 0x25ae38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ae38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae3c:
    // 0x25ae3c: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_25ae40:
    if (ctx->pc == 0x25AE40u) {
        ctx->pc = 0x25AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE3Cu;
        // 0x25ae40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE44u;
        goto label_25ae44;
    }
    ctx->pc = 0x25AE3Cu;
    {
        const bool branch_taken_0x25ae3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae3c) {
            ctx->pc = 0x25AE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AE3Cu;
            // 0x25ae40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AE88u;
            goto label_25ae88;
        }
    }
    ctx->pc = 0x25AE44u;
label_25ae44:
    // 0x25ae44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ae48:
    // 0x25ae48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25ae48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25ae4c:
    // 0x25ae4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25ae4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25ae50:
    // 0x25ae50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25ae54:
    // 0x25ae54: 0x40f809  jalr        $v0
label_25ae58:
    if (ctx->pc == 0x25AE58u) {
        ctx->pc = 0x25AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE54u;
        // 0x25ae58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE5Cu;
        goto label_25ae5c;
    }
    ctx->pc = 0x25AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AE5Cu);
        ctx->pc = 0x25AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE54u;
        // 0x25ae58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE54u, 0x25AE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AE5Cu;
label_25ae5c:
    // 0x25ae5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ae5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25ae60:
    // 0x25ae60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25ae60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ae64:
    // 0x25ae64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25ae64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ae68:
    // 0x25ae68: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25ae68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae6c:
    // 0x25ae6c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x25ae6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ae70:
    // 0x25ae70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ae74:
    // 0x25ae74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ae74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ae78:
    // 0x25ae78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25ae78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_25ae7c:
    // 0x25ae7c: 0xc041890  jal         func_106240
label_25ae80:
    if (ctx->pc == 0x25AE80u) {
        ctx->pc = 0x25AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE7Cu;
        // 0x25ae80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE84u;
        goto label_25ae84;
    }
    ctx->pc = 0x25AE7Cu;
    SET_GPR_U32(ctx, 31, 0x25AE84u);
    ctx->pc = 0x25AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE7Cu;
    // 0x25ae80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x25AE7Cu, 0x25AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE84u;
label_25ae84:
    // 0x25ae84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ae88:
    // 0x25ae88: 0xc05d4f6  jal         func_1753D8
label_25ae8c:
    if (ctx->pc == 0x25AE8Cu) {
        ctx->pc = 0x25AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE88u;
        // 0x25ae8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE90u;
        goto label_25ae90;
    }
    ctx->pc = 0x25AE88u;
    SET_GPR_U32(ctx, 31, 0x25AE90u);
    ctx->pc = 0x25AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE88u;
    // 0x25ae8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25AE88u, 0x25AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE90u;
label_25ae90:
    // 0x25ae90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25ae90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25ae94:
    // 0x25ae94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25ae94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25ae98:
    // 0x25ae98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25ae98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25ae9c:
    // 0x25ae9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ae9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25aea0:
    // 0x25aea0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25aea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25aea4:
    // 0x25aea4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25aea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25aea8:
    // 0x25aea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25aeac:
    // 0x25aeac: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x25aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25aeb0:
    // 0x25aeb0: 0x3e00008  jr          $ra
label_25aeb4:
    if (ctx->pc == 0x25AEB4u) {
        ctx->pc = 0x25AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB0u;
        // 0x25aeb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEB8u;
        goto label_fallthrough_0x25aeb0;
    }
    ctx->pc = 0x25AEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB0u;
        // 0x25aeb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25aeb0:
    ctx->pc = 0x25AEB8u;
}
