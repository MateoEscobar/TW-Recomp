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

// Function: sub_00273A68
// Address: 0x273a68 - 0x273c60
void sub_00273A68_0x273a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273A68_0x273a68");
#endif

    switch (ctx->pc) {
        case 0x273af4u: goto label_273af4;
        case 0x273b14u: goto label_273b14;
        case 0x273b20u: goto label_273b20;
        case 0x273b28u: goto label_273b28;
        case 0x273b30u: goto label_273b30;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b9cu: goto label_273b9c;
        case 0x273bc4u: goto label_273bc4;
        case 0x273becu: goto label_273bec;
        case 0x273c28u: goto label_273c28;
        default: break;
    }

    ctx->pc = 0x273a68u;

    // 0x273a68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x273a6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a70: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x273a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x273a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x273a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x273a7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x273a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x273a80: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x273a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x273a84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x273a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x273a88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x273a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x273a8c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x273a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x273a90: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x273a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x273a94: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x273a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x273a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273a9c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x273a9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x273aa0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x273aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x273aa4: 0x90c303ac  lbu         $v1, 0x3AC($a2)
    ctx->pc = 0x273aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 940)));
    // 0x273aa8: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x273AA8u;
    {
        const bool branch_taken_0x273aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AA8u;
        // 0x273aac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273aa8) {
            ctx->pc = 0x273C2Cu;
            goto label_273c2c;
        }
    }
    ctx->pc = 0x273AB0u;
    // 0x273ab0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x273ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x273ab4: 0x80c401b0  lb          $a0, 0x1B0($a2)
    ctx->pc = 0x273ab4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 432)));
    // 0x273ab8: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x273ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x273abc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x273abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x273ac0: 0x9043041a  lbu         $v1, 0x41A($v0)
    ctx->pc = 0x273ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    // 0x273ac4: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x273ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x273ac8: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x273AC8u;
    {
        const bool branch_taken_0x273ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AC8u;
        // 0x273acc: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ac8) {
            ctx->pc = 0x273C30u;
            goto label_273c30;
        }
    }
    ctx->pc = 0x273AD0u;
    // 0x273ad0: 0x84c30092  lh          $v1, 0x92($a2)
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x273ad4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x273ad8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x273ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x273adc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x273adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ae0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x273ae4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ae8: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x273ae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273aec: 0xc087502  jal         func_21D408
    ctx->pc = 0x273AECu;
    SET_GPR_U32(ctx, 31, 0x273AF4u);
    ctx->pc = 0x273AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AECu;
    // 0x273af0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x273AECu, 0x273AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AF4u;
label_273af4:
    // 0x273af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x273af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273af8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x273af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x273afc: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x273afcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    // 0x273b00: 0xc4540140  lwc1        $f20, 0x140($v0)
    ctx->pc = 0x273b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273b04: 0x24160031  addiu       $s6, $zero, 0x31
    ctx->pc = 0x273b04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x273b08: 0x24940048  addiu       $s4, $a0, 0x48
    ctx->pc = 0x273b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x273b0c: 0xc05959e  jal         func_165678
    ctx->pc = 0x273B0Cu;
    SET_GPR_U32(ctx, 31, 0x273B14u);
    ctx->pc = 0x273B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B0Cu;
    // 0x273b10: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x273B0Cu, 0x273B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B14u;
label_273b14:
    // 0x273b14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0xc137826  jal         func_4DE098
    ctx->pc = 0x273B20u;
    SET_GPR_U32(ctx, 31, 0x273B28u);
    ctx->pc = 0x273B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B20u;
    // 0x273b24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x273B20u, 0x273B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B28u;
label_273b28:
    // 0x273b28: 0xc0e409a  jal         func_390268
    ctx->pc = 0x273B28u;
    SET_GPR_U32(ctx, 31, 0x273B30u);
    ctx->pc = 0x273B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B28u;
    // 0x273b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x273B28u, 0x273B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B30u;
label_273b30:
    // 0x273b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b34: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x273B34u;
    {
        const bool branch_taken_0x273b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b34) {
            ctx->pc = 0x273B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B34u;
            // 0x273b38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B3Cu;
    // 0x273b3c: 0x52130024  beql        $s0, $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x273B3Cu;
    {
        const bool branch_taken_0x273b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x273b3c) {
            ctx->pc = 0x273B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B3Cu;
            // 0x273b40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B44u;
    // 0x273b44: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x273b48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x273b48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x273b4c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x273B4Cu;
    {
        const bool branch_taken_0x273b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b4c) {
            ctx->pc = 0x273B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B4Cu;
            // 0x273b50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B54u;
    // 0x273b54: 0xc08a096  jal         func_228258
    ctx->pc = 0x273B54u;
    SET_GPR_U32(ctx, 31, 0x273B5Cu);
    ctx->pc = 0x273B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B54u;
    // 0x273b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x273B54u, 0x273B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B5Cu;
label_273b5c:
    // 0x273b5c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x273B5Cu;
    {
        const bool branch_taken_0x273b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b5c) {
            ctx->pc = 0x273B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B5Cu;
            // 0x273b60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B64u;
    // 0x273b64: 0xc08a08a  jal         func_228228
    ctx->pc = 0x273B64u;
    SET_GPR_U32(ctx, 31, 0x273B6Cu);
    ctx->pc = 0x273B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B64u;
    // 0x273b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x273B64u, 0x273B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B6Cu;
label_273b6c:
    // 0x273b6c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x273B6Cu;
    {
        const bool branch_taken_0x273b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b6c) {
            ctx->pc = 0x273B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B6Cu;
            // 0x273b70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B74u;
    // 0x273b74: 0xc087502  jal         func_21D408
    ctx->pc = 0x273B74u;
    SET_GPR_U32(ctx, 31, 0x273B7Cu);
    ctx->pc = 0x273B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B74u;
    // 0x273b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x273B74u, 0x273B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B7Cu;
label_273b7c:
    // 0x273b7c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x273b7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x273b80: 0x5c600013  bgtzl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x273B80u;
    {
        const bool branch_taken_0x273b80 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x273b80) {
            ctx->pc = 0x273B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B80u;
            // 0x273b84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273B88u;
    // 0x273b88: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x273b8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b90: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x273b94: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x273B94u;
    SET_GPR_U32(ctx, 31, 0x273B9Cu);
    ctx->pc = 0x273B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B94u;
    // 0x273b98: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x273B94u, 0x273B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B9Cu;
label_273b9c:
    // 0x273b9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x273b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ba0: 0x0  nop
    ctx->pc = 0x273ba0u;
    // NOP
    // 0x273ba4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x273BA4u;
    {
        const bool branch_taken_0x273ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ba4) {
            ctx->pc = 0x273BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273BA4u;
            // 0x273ba8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273BACu;
    // 0x273bac: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273BACu;
    {
        const bool branch_taken_0x273bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x273BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BACu;
        // 0x273bb0: 0x26e4b8a0  addiu       $a0, $s7, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bac) {
            ctx->pc = 0x273BBCu;
            goto label_273bbc;
        }
    }
    ctx->pc = 0x273BB4u;
    // 0x273bb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x273BB4u;
    {
        const bool branch_taken_0x273bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BB4u;
        // 0x273bb8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bb4) {
            ctx->pc = 0x273BCCu;
            goto label_273bcc;
        }
    }
    ctx->pc = 0x273BBCu;
label_273bbc:
    // 0x273bbc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x273BBCu;
    SET_GPR_U32(ctx, 31, 0x273BC4u);
    ctx->pc = 0x273BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BBCu;
    // 0x273bc0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x273BBCu, 0x273BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BC4u;
label_273bc4:
    // 0x273bc4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x273bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x273bc8: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x273bc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_273bcc:
    // 0x273bcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x273bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_273bd0:
    // 0x273bd0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x273bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x273bd4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x273BD4u;
    {
        const bool branch_taken_0x273bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD4u;
        // 0x273bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bd4) {
            ctx->pc = 0x273B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273b20;
        }
    }
    ctx->pc = 0x273BDCu;
    // 0x273bdc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x273BDCu;
    {
        const bool branch_taken_0x273bdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BDCu;
        // 0x273be0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bdc) {
            ctx->pc = 0x273C2Cu;
            goto label_273c2c;
        }
    }
    ctx->pc = 0x273BE4u;
    // 0x273be4: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x273BE4u;
    SET_GPR_U32(ctx, 31, 0x273BECu);
    ctx->pc = 0x273BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BE4u;
    // 0x273be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x273BE4u, 0x273BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BECu;
label_273bec:
    // 0x273bec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x273BECu;
    {
        const bool branch_taken_0x273bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BECu;
        // 0x273bf0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bec) {
            ctx->pc = 0x273C2Cu;
            goto label_273c2c;
        }
    }
    ctx->pc = 0x273BF4u;
    // 0x273bf4: 0x9222019a  lbu         $v0, 0x19A($s1)
    ctx->pc = 0x273bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 410)));
    // 0x273bf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x273BF8u;
    {
        const bool branch_taken_0x273bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BF8u;
        // 0x273bfc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bf8) {
            ctx->pc = 0x273C2Cu;
            goto label_273c2c;
        }
    }
    ctx->pc = 0x273C00u;
    // 0x273c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x273c04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x273c08: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x273c08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x273c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x273c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273c20: 0xc088178  jal         func_2205E0
    ctx->pc = 0x273C20u;
    SET_GPR_U32(ctx, 31, 0x273C28u);
    ctx->pc = 0x273C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C20u;
    // 0x273c24: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x273C20u, 0x273C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C28u;
label_273c28:
    // 0x273c28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x273c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_273c2c:
    // 0x273c2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x273c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_273c30:
    // 0x273c30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x273c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273c34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x273c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273c38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x273c38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x273c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273c40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x273c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273c44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x273c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273c48: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x273c48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273c50: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x273c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273c54: 0x3e00008  jr          $ra
    ctx->pc = 0x273C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C54u;
        // 0x273c58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273C5Cu;
    // 0x273c5c: 0x0  nop
    ctx->pc = 0x273c5cu;
    // NOP
    ctx->pc = 0x273c60u;
}
