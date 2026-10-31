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

// Function: sub_00414A28
// Address: 0x414a28 - 0x414ae0
void sub_00414A28_0x414a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414A28_0x414a28");
#endif

    switch (ctx->pc) {
        case 0x414a28u: goto label_414a28;
        case 0x414a2cu: goto label_414a2c;
        case 0x414a30u: goto label_414a30;
        case 0x414a34u: goto label_414a34;
        case 0x414a38u: goto label_414a38;
        case 0x414a3cu: goto label_414a3c;
        case 0x414a40u: goto label_414a40;
        case 0x414a44u: goto label_414a44;
        case 0x414a48u: goto label_414a48;
        case 0x414a4cu: goto label_414a4c;
        case 0x414a50u: goto label_414a50;
        case 0x414a54u: goto label_414a54;
        case 0x414a58u: goto label_414a58;
        case 0x414a5cu: goto label_414a5c;
        case 0x414a60u: goto label_414a60;
        case 0x414a64u: goto label_414a64;
        case 0x414a68u: goto label_414a68;
        case 0x414a6cu: goto label_414a6c;
        case 0x414a70u: goto label_414a70;
        case 0x414a74u: goto label_414a74;
        case 0x414a78u: goto label_414a78;
        case 0x414a7cu: goto label_414a7c;
        case 0x414a80u: goto label_414a80;
        case 0x414a84u: goto label_414a84;
        case 0x414a88u: goto label_414a88;
        case 0x414a8cu: goto label_414a8c;
        case 0x414a90u: goto label_414a90;
        case 0x414a94u: goto label_414a94;
        case 0x414a98u: goto label_414a98;
        case 0x414a9cu: goto label_414a9c;
        case 0x414aa0u: goto label_414aa0;
        case 0x414aa4u: goto label_414aa4;
        case 0x414aa8u: goto label_414aa8;
        case 0x414aacu: goto label_414aac;
        case 0x414ab0u: goto label_414ab0;
        case 0x414ab4u: goto label_414ab4;
        case 0x414ab8u: goto label_414ab8;
        case 0x414abcu: goto label_414abc;
        case 0x414ac0u: goto label_414ac0;
        case 0x414ac4u: goto label_414ac4;
        case 0x414ac8u: goto label_414ac8;
        case 0x414accu: goto label_414acc;
        case 0x414ad0u: goto label_414ad0;
        case 0x414ad4u: goto label_414ad4;
        case 0x414ad8u: goto label_414ad8;
        case 0x414adcu: goto label_414adc;
        default: break;
    }

    ctx->pc = 0x414a28u;

label_414a28:
    // 0x414a28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_414a2c:
    // 0x414a2c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x414a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_414a30:
    // 0x414a30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x414a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_414a34:
    // 0x414a34: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x414a34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_414a38:
    // 0x414a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x414a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_414a3c:
    // 0x414a3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x414a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_414a40:
    // 0x414a40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x414a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_414a44:
    // 0x414a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_414a48:
    // 0x414a48: 0xc0e4060  jal         func_390180
label_414a4c:
    if (ctx->pc == 0x414A4Cu) {
        ctx->pc = 0x414A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A48u;
        // 0x414a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A50u;
        goto label_414a50;
    }
    ctx->pc = 0x414A48u;
    SET_GPR_U32(ctx, 31, 0x414A50u);
    ctx->pc = 0x414A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414A48u;
    // 0x414a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x414A48u, 0x414A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414A50u;
label_414a50:
    // 0x414a50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x414a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414a54:
    // 0x414a54: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_414a58:
    if (ctx->pc == 0x414A58u) {
        ctx->pc = 0x414A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A54u;
        // 0x414a58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A5Cu;
        goto label_414a5c;
    }
    ctx->pc = 0x414A54u;
    {
        const bool branch_taken_0x414a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x414A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A54u;
        // 0x414a58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a54) {
            ctx->pc = 0x414AC8u;
            goto label_414ac8;
        }
    }
    ctx->pc = 0x414A5Cu;
label_414a5c:
    // 0x414a5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x414a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_414a60:
    // 0x414a60: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414a64:
    // 0x414a64: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414a68:
    // 0x414a68: 0x40f809  jalr        $v0
label_414a6c:
    if (ctx->pc == 0x414A6Cu) {
        ctx->pc = 0x414A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A68u;
        // 0x414a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A70u;
        goto label_414a70;
    }
    ctx->pc = 0x414A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414A70u);
        ctx->pc = 0x414A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A68u;
        // 0x414a6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414A68u, 0x414A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414A70u;
label_414a70:
    // 0x414a70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x414a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414a74:
    // 0x414a74: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_414a78:
    if (ctx->pc == 0x414A78u) {
        ctx->pc = 0x414A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A74u;
        // 0x414a78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A7Cu;
        goto label_414a7c;
    }
    ctx->pc = 0x414A74u;
    {
        const bool branch_taken_0x414a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x414A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A74u;
        // 0x414a78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a74) {
            ctx->pc = 0x414AC8u;
            goto label_414ac8;
        }
    }
    ctx->pc = 0x414A7Cu;
label_414a7c:
    // 0x414a7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x414a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_414a80:
    // 0x414a80: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414a84:
    // 0x414a84: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414a88:
    // 0x414a88: 0x40f809  jalr        $v0
label_414a8c:
    if (ctx->pc == 0x414A8Cu) {
        ctx->pc = 0x414A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A88u;
        // 0x414a8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A90u;
        goto label_414a90;
    }
    ctx->pc = 0x414A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414A90u);
        ctx->pc = 0x414A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A88u;
        // 0x414a8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414A88u, 0x414A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414A90u;
label_414a90:
    // 0x414a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414a94:
    // 0x414a94: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
label_414a98:
    if (ctx->pc == 0x414A98u) {
        ctx->pc = 0x414A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A94u;
        // 0x414a98: 0xe6140174  swc1        $f20, 0x174($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A9Cu;
        goto label_414a9c;
    }
    ctx->pc = 0x414A94u;
    {
        const bool branch_taken_0x414a94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x414a94) {
            ctx->pc = 0x414A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414A94u;
            // 0x414a98: 0xe6140174  swc1        $f20, 0x174($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414AC4u;
            goto label_414ac4;
        }
    }
    ctx->pc = 0x414A9Cu;
label_414a9c:
    // 0x414a9c: 0xc1050b4  jal         func_4142D0
label_414aa0:
    if (ctx->pc == 0x414AA0u) {
        ctx->pc = 0x414AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A9Cu;
        // 0x414aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AA4u;
        goto label_414aa4;
    }
    ctx->pc = 0x414A9Cu;
    SET_GPR_U32(ctx, 31, 0x414AA4u);
    ctx->pc = 0x414AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414A9Cu;
    // 0x414aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4142D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4142D0u, 0x414A9Cu, 0x414AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414AA4u;
label_414aa4:
    // 0x414aa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x414aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_414aa8:
    // 0x414aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414aac:
    // 0x414aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414ab0:
    // 0x414ab0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x414ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_414ab4:
    // 0x414ab4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x414ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_414ab8:
    // 0x414ab8: 0x40f809  jalr        $v0
label_414abc:
    if (ctx->pc == 0x414ABCu) {
        ctx->pc = 0x414ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AB8u;
        // 0x414abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AC0u;
        goto label_414ac0;
    }
    ctx->pc = 0x414AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414AC0u);
        ctx->pc = 0x414ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AB8u;
        // 0x414abc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414AB8u, 0x414AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414AC0u;
label_414ac0:
    // 0x414ac0: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x414ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
label_414ac4:
    // 0x414ac4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x414ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414ac8:
    // 0x414ac8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x414ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414acc:
    // 0x414acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x414accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414ad0:
    // 0x414ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414ad4:
    // 0x414ad4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x414ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_414ad8:
    // 0x414ad8: 0x3e00008  jr          $ra
label_414adc:
    if (ctx->pc == 0x414ADCu) {
        ctx->pc = 0x414ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AD8u;
        // 0x414adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AE0u;
        goto label_fallthrough_0x414ad8;
    }
    ctx->pc = 0x414AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AD8u;
        // 0x414adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414ad8:
    ctx->pc = 0x414AE0u;
}
