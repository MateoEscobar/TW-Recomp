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

// Function: sub_002D0B00
// Address: 0x2d0b00 - 0x2d0e98
void sub_002D0B00_0x2d0b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0B00_0x2d0b00");
#endif

    switch (ctx->pc) {
        case 0x2d0b48u: goto label_2d0b48;
        case 0x2d0b58u: goto label_2d0b58;
        case 0x2d0b6cu: goto label_2d0b6c;
        case 0x2d0b7cu: goto label_2d0b7c;
        case 0x2d0ba0u: goto label_2d0ba0;
        case 0x2d0bd0u: goto label_2d0bd0;
        case 0x2d0bd8u: goto label_2d0bd8;
        case 0x2d0be0u: goto label_2d0be0;
        case 0x2d0c18u: goto label_2d0c18;
        case 0x2d0c20u: goto label_2d0c20;
        case 0x2d0c28u: goto label_2d0c28;
        case 0x2d0c30u: goto label_2d0c30;
        case 0x2d0c40u: goto label_2d0c40;
        case 0x2d0c90u: goto label_2d0c90;
        case 0x2d0cb0u: goto label_2d0cb0;
        case 0x2d0cbcu: goto label_2d0cbc;
        case 0x2d0cc8u: goto label_2d0cc8;
        case 0x2d0cf0u: goto label_2d0cf0;
        case 0x2d0d0cu: goto label_2d0d0c;
        case 0x2d0d24u: goto label_2d0d24;
        case 0x2d0d44u: goto label_2d0d44;
        case 0x2d0d94u: goto label_2d0d94;
        case 0x2d0d9cu: goto label_2d0d9c;
        case 0x2d0dc0u: goto label_2d0dc0;
        case 0x2d0df4u: goto label_2d0df4;
        case 0x2d0e04u: goto label_2d0e04;
        case 0x2d0e14u: goto label_2d0e14;
        case 0x2d0e28u: goto label_2d0e28;
        case 0x2d0e54u: goto label_2d0e54;
        default: break;
    }

    ctx->pc = 0x2d0b00u;

    // 0x2d0b00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d0b04: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d0b08: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d0b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d0b0c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d0b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d0b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d0b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d0b18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b1c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d0b20: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2d0b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0b28: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2d0b28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d0b2c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2d0b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d0b30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d0b34: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2d0b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0b38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d0b3c: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x2d0b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0b40: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D0B40u;
    SET_GPR_U32(ctx, 31, 0x2D0B48u);
    ctx->pc = 0x2D0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B40u;
    // 0x2d0b44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D0B40u, 0x2D0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B48u;
label_2d0b48:
    // 0x2d0b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d0b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b50: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2D0B50u;
    SET_GPR_U32(ctx, 31, 0x2D0B58u);
    ctx->pc = 0x2D0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B50u;
    // 0x2d0b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D0B50u, 0x2D0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B58u;
label_2d0b58:
    // 0x2d0b58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b5c: 0x122000bf  beqz        $s1, . + 4 + (0xBF << 2)
    ctx->pc = 0x2D0B5Cu;
    {
        const bool branch_taken_0x2d0b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B5Cu;
        // 0x2d0b60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b5c) {
            ctx->pc = 0x2D0E5Cu;
            goto label_2d0e5c;
        }
    }
    ctx->pc = 0x2D0B64u;
    // 0x2d0b64: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D0B64u;
    SET_GPR_U32(ctx, 31, 0x2D0B6Cu);
    ctx->pc = 0x2D0B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B64u;
    // 0x2d0b68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D0B64u, 0x2D0B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B6Cu;
label_2d0b6c:
    // 0x2d0b6c: 0x105000be  beq         $v0, $s0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2D0B6Cu;
    {
        const bool branch_taken_0x2d0b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B6Cu;
        // 0x2d0b70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b6c) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0B74u;
    // 0x2d0b74: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D0B74u;
    SET_GPR_U32(ctx, 31, 0x2D0B7Cu);
    ctx->pc = 0x2D0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B74u;
    // 0x2d0b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D0B74u, 0x2D0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B7Cu;
label_2d0b7c:
    // 0x2d0b7c: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x2d0b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x2d0b80: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2D0B80u;
    {
        const bool branch_taken_0x2d0b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B80u;
        // 0x2d0b84: 0x26a40284  addiu       $a0, $s5, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b80) {
            ctx->pc = 0x2D0E5Cu;
            goto label_2d0e5c;
        }
    }
    ctx->pc = 0x2D0B88u;
    // 0x2d0b88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d0b8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b94: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d0b98: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D0B98u;
    SET_GPR_U32(ctx, 31, 0x2D0BA0u);
    ctx->pc = 0x2D0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B98u;
    // 0x2d0b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D0B98u, 0x2D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BA0u;
label_2d0ba0:
    // 0x2d0ba0: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x2d0ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d0ba4: 0x5450002e  bnel        $v0, $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D0BA4u;
    {
        const bool branch_taken_0x2d0ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d0ba4) {
            ctx->pc = 0x2D0BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BA4u;
            // 0x2d0ba8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C60u;
            goto label_2d0c60;
        }
    }
    ctx->pc = 0x2D0BACu;
    // 0x2d0bac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0bb0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2d0bb4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d0bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d0bb8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D0BB8u;
    {
        const bool branch_taken_0x2d0bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bb8) {
            ctx->pc = 0x2D0BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BB8u;
            // 0x2d0bbc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C60u;
            goto label_2d0c60;
        }
    }
    ctx->pc = 0x2D0BC0u;
    // 0x2d0bc0: 0x249301a4  addiu       $s3, $a0, 0x1A4
    ctx->pc = 0x2d0bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    // 0x2d0bc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d0bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bcc: 0x0  nop
    ctx->pc = 0x2d0bccu;
    // NOP
label_2d0bd0:
    // 0x2d0bd0: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2D0BD0u;
    SET_GPR_U32(ctx, 31, 0x2D0BD8u);
    ctx->pc = 0x2D0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BD0u;
    // 0x2d0bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2D0BD0u, 0x2D0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BD8u;
label_2d0bd8:
    // 0x2d0bd8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D0BD8u;
    SET_GPR_U32(ctx, 31, 0x2D0BE0u);
    ctx->pc = 0x2D0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BD8u;
    // 0x2d0bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D0BD8u, 0x2D0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BE0u;
label_2d0be0:
    // 0x2d0be0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0BE0u;
    {
        const bool branch_taken_0x2d0be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BE0u;
        // 0x2d0be4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0be0) {
            ctx->pc = 0x2D0BF8u;
            goto label_2d0bf8;
        }
    }
    ctx->pc = 0x2D0BE8u;
    // 0x2d0be8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2d0be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2d0bec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d0becu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d0bf0: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2D0BF0u;
    {
        const bool branch_taken_0x2d0bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BF0u;
        // 0x2d0bf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bf0) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0BF8u;
label_2d0bf8:
    // 0x2d0bf8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2d0bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d0bfc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D0BFCu;
    {
        const bool branch_taken_0x2d0bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bfc) {
            ctx->pc = 0x2D0C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BFCu;
            // 0x2d0c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0bd0;
        }
    }
    ctx->pc = 0x2D0C04u;
    // 0x2d0c04: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D0C04u;
    {
        const bool branch_taken_0x2d0c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c04) {
            ctx->pc = 0x2D0C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C04u;
            // 0x2d0c08: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C60u;
            goto label_2d0c60;
        }
    }
    ctx->pc = 0x2D0C0Cu;
    // 0x2d0c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c10: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D0C10u;
    SET_GPR_U32(ctx, 31, 0x2D0C18u);
    ctx->pc = 0x2D0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C10u;
    // 0x2d0c14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D0C10u, 0x2D0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C18u;
label_2d0c18:
    // 0x2d0c18: 0x245301a4  addiu       $s3, $v0, 0x1A4
    ctx->pc = 0x2d0c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x2d0c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c20:
    // 0x2d0c20: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2D0C20u;
    SET_GPR_U32(ctx, 31, 0x2D0C28u);
    ctx->pc = 0x2D0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C20u;
    // 0x2d0c24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2D0C20u, 0x2D0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C28u;
label_2d0c28:
    // 0x2d0c28: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D0C28u;
    SET_GPR_U32(ctx, 31, 0x2D0C30u);
    ctx->pc = 0x2D0C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C28u;
    // 0x2d0c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D0C28u, 0x2D0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C30u;
label_2d0c30:
    // 0x2d0c30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0C30u;
    {
        const bool branch_taken_0x2d0c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c30) {
            ctx->pc = 0x2D0C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C30u;
            // 0x2d0c34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C50u;
            goto label_2d0c50;
        }
    }
    ctx->pc = 0x2D0C38u;
    // 0x2d0c38: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D0C38u;
    SET_GPR_U32(ctx, 31, 0x2D0C40u);
    ctx->pc = 0x2D0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C38u;
    // 0x2d0c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D0C38u, 0x2D0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C40u;
label_2d0c40:
    // 0x2d0c40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d0c44: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2d0c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2d0c48: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2D0C48u;
    {
        const bool branch_taken_0x2d0c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C48u;
        // 0x2d0c4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c48) {
            ctx->pc = 0x2D0E5Cu;
            goto label_2d0e5c;
        }
    }
    ctx->pc = 0x2D0C50u;
label_2d0c50:
    // 0x2d0c50: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2d0c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d0c54: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D0C54u;
    {
        const bool branch_taken_0x2d0c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c54) {
            ctx->pc = 0x2D0C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C54u;
            // 0x2d0c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0c20;
        }
    }
    ctx->pc = 0x2D0C5Cu;
    // 0x2d0c5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d0c60:
    // 0x2d0c60: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d0c60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d0c64: 0x1c40007f  bgtz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2D0C64u;
    {
        const bool branch_taken_0x2d0c64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C64u;
        // 0x2d0c68: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c64) {
            ctx->pc = 0x2D0E64u;
            goto label_2d0e64;
        }
    }
    ctx->pc = 0x2D0C6Cu;
    // 0x2d0c6c: 0x26b00090  addiu       $s0, $s5, 0x90
    ctx->pc = 0x2d0c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2d0c70: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d0c74: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2d0c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d0c78: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d0c7c: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x2d0c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2d0c80: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d0c84: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d0c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2d0c88: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2D0C88u;
    SET_GPR_U32(ctx, 31, 0x2D0C90u);
    ctx->pc = 0x2D0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C88u;
    // 0x2d0c8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D0C88u, 0x2D0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C90u;
label_2d0c90:
    // 0x2d0c90: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2d0c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d0c94: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d0c94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0c98: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2d0c98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2d0c9c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d0ca0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d0ca4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2d0ca8: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2D0CA8u;
    SET_GPR_U32(ctx, 31, 0x2D0CB0u);
    ctx->pc = 0x2D0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CA8u;
    // 0x2d0cac: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2D0CA8u, 0x2D0CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CB0u;
label_2d0cb0:
    // 0x2d0cb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d0cb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0cb4: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2D0CB4u;
    SET_GPR_U32(ctx, 31, 0x2D0CBCu);
    ctx->pc = 0x2D0CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CB4u;
    // 0x2d0cb8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D0CB4u, 0x2D0CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CBCu;
label_2d0cbc:
    // 0x2d0cbc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d0cbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0cc0: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2D0CC0u;
    SET_GPR_U32(ctx, 31, 0x2D0CC8u);
    ctx->pc = 0x2D0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CC0u;
    // 0x2d0cc4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D0CC0u, 0x2D0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CC8u;
label_2d0cc8:
    // 0x2d0cc8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d0cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2d0ccc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d0cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2d0cd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d0cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d0cd4: 0x0  nop
    ctx->pc = 0x2d0cd4u;
    // NOP
    // 0x2d0cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d0cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0cdc: 0x0  nop
    ctx->pc = 0x2d0cdcu;
    // NOP
    // 0x2d0ce0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2D0CE0u;
    {
        const bool branch_taken_0x2d0ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0ce0) {
            ctx->pc = 0x2D0CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0CE0u;
            // 0x2d0ce4: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0D2Cu;
            goto label_2d0d2c;
        }
    }
    ctx->pc = 0x2D0CE8u;
    // 0x2d0ce8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D0CE8u;
    SET_GPR_U32(ctx, 31, 0x2D0CF0u);
    ctx->pc = 0x2D0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CE8u;
    // 0x2d0cec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0CE8u, 0x2D0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CF0u;
label_2d0cf0:
    // 0x2d0cf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0cf4: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D0CF4u;
    {
        const bool branch_taken_0x2d0cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CF4u;
        // 0x2d0cf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cf4) {
            ctx->pc = 0x2D0E64u;
            goto label_2d0e64;
        }
    }
    ctx->pc = 0x2D0CFCu;
    // 0x2d0cfc: 0x86700002  lh          $s0, 0x2($s3)
    ctx->pc = 0x2d0cfcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2d0d00: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d0d00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2d0d04: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D0D04u;
    SET_GPR_U32(ctx, 31, 0x2D0D0Cu);
    ctx->pc = 0x2D0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D04u;
    // 0x2d0d08: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D0D04u, 0x2D0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D0Cu;
label_2d0d0c:
    // 0x2d0d0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d18: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d0d18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0d1c: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2D0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D24u);
    ctx->pc = 0x2D0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D1Cu;
    // 0x2d0d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D0D1Cu, 0x2D0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D24u;
label_2d0d24:
    // 0x2d0d24: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2D0D24u;
    {
        const bool branch_taken_0x2d0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D24u;
        // 0x2d0d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d24) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0D2Cu;
label_2d0d2c:
    // 0x2d0d2c: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2d0d2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2d0d30: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d0d34: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d0d38: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2d0d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2d0d3c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D44u);
    ctx->pc = 0x2D0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D3Cu;
    // 0x2d0d40: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D0D3Cu, 0x2D0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D44u;
label_2d0d44:
    // 0x2d0d44: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0d48: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2d0d48u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0d4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d0d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2d0d50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d0d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d0d54: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2d0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d0d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d0d5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d0d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d0d60: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x2d0d60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d0d64: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2d0d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2d0d68: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2d0d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0d6c: 0x0  nop
    ctx->pc = 0x2d0d6cu;
    // NOP
    // 0x2d0d70: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0D70u;
    {
        const bool branch_taken_0x2d0d70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D70u;
        // 0x2d0d74: 0x4601a540  add.s       $f21, $f20, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d70) {
            ctx->pc = 0x2D0D8Cu;
            goto label_2d0d8c;
        }
    }
    ctx->pc = 0x2D0D78u;
    // 0x2d0d78: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2d0d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2d0d7c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2d0d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0d80: 0x0  nop
    ctx->pc = 0x2d0d80u;
    // NOP
    // 0x2d0d84: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0D84u;
    {
        const bool branch_taken_0x2d0d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D84u;
        // 0x2d0d88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d84) {
            ctx->pc = 0x2D0DC8u;
            goto label_2d0dc8;
        }
    }
    ctx->pc = 0x2D0D8Cu;
label_2d0d8c:
    // 0x2d0d8c: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2D0D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D94u);
    ctx->pc = 0x2D0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D8Cu;
    // 0x2d0d90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2D0D8Cu, 0x2D0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D94u;
label_2d0d94:
    // 0x2d0d94: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D0D94u;
    SET_GPR_U32(ctx, 31, 0x2D0D9Cu);
    ctx->pc = 0x2D0D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D94u;
    // 0x2d0d98: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0D94u, 0x2D0D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D9Cu;
label_2d0d9c:
    // 0x2d0d9c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D0D9Cu;
    {
        const bool branch_taken_0x2d0d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D9Cu;
        // 0x2d0da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d9c) {
            ctx->pc = 0x2D0E64u;
            goto label_2d0e64;
        }
    }
    ctx->pc = 0x2D0DA4u;
    // 0x2d0da4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0da8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d0da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d0dacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d0db0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2d0db0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2d0db4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0db8: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2D0DB8u;
    SET_GPR_U32(ctx, 31, 0x2D0DC0u);
    ctx->pc = 0x2D0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DB8u;
    // 0x2d0dbc: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2D0DB8u, 0x2D0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DC0u;
label_2d0dc0:
    // 0x2d0dc0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D0DC0u;
    {
        const bool branch_taken_0x2d0dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC0u;
        // 0x2d0dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dc0) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0DC8u;
label_2d0dc8:
    // 0x2d0dc8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2d0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2d0dcc: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2d0dd0: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d0dd4: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2d0dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d0dd8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D0DD8u;
    {
        const bool branch_taken_0x2d0dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DD8u;
        // 0x2d0ddc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dd8) {
            ctx->pc = 0x2D0E64u;
            goto label_2d0e64;
        }
    }
    ctx->pc = 0x2D0DE0u;
    // 0x2d0de0: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2d0de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x2d0de4: 0x2451b880  addiu       $s1, $v0, -0x4780
    ctx->pc = 0x2d0de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x2d0de8: 0x24061964  addiu       $a2, $zero, 0x1964
    ctx->pc = 0x2d0de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x2d0dec: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2D0DECu;
    SET_GPR_U32(ctx, 31, 0x2D0DF4u);
    ctx->pc = 0x2D0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DECu;
    // 0x2d0df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D0DECu, 0x2D0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF4u;
label_2d0df4:
    // 0x2d0df4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d0df8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d0df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dfc: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2D0DFCu;
    SET_GPR_U32(ctx, 31, 0x2D0E04u);
    ctx->pc = 0x2D0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DFCu;
    // 0x2d0e00: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D0DFCu, 0x2D0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E04u;
label_2d0e04:
    // 0x2d0e04: 0x14560018  bne         $v0, $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0E04u;
    {
        const bool branch_taken_0x2d0e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2D0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E04u;
        // 0x2d0e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e04) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0E0Cu;
    // 0x2d0e0c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E14u);
    ctx->pc = 0x2D0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E0Cu;
    // 0x2d0e10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0E0Cu, 0x2D0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E14u;
label_2d0e14:
    // 0x2d0e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e18: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D0E18u;
    {
        const bool branch_taken_0x2d0e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E18u;
        // 0x2d0e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e18) {
            ctx->pc = 0x2D0E64u;
            goto label_2d0e64;
        }
    }
    ctx->pc = 0x2D0E20u;
    // 0x2d0e20: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D0E20u;
    SET_GPR_U32(ctx, 31, 0x2D0E28u);
    ctx->pc = 0x2D0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E20u;
    // 0x2d0e24: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D0E20u, 0x2D0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E28u;
label_2d0e28:
    // 0x2d0e28: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2d0e2c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0e30: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d0e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d0e34: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0e38: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x2d0e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e40: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x2d0e40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x2d0e44: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2d0e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d0e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e4c: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x2D0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E54u);
    ctx->pc = 0x2D0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E4Cu;
    // 0x2d0e50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2D0E4Cu, 0x2D0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E54u;
label_2d0e54:
    // 0x2d0e54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E54u;
    {
        const bool branch_taken_0x2d0e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E54u;
        // 0x2d0e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e54) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0E5Cu;
label_2d0e5c:
    // 0x2d0e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0E5Cu;
    {
        const bool branch_taken_0x2d0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E5Cu;
        // 0x2d0e60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e5c) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0E64u;
label_2d0e64:
    // 0x2d0e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0e68:
    // 0x2d0e68: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d0e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d0e6c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d0e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d0e70: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d0e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0e74: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d0e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0e78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d0e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0e7c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d0e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0e80: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d0e80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0e88: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2d0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d0e8c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2d0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E90u;
        // 0x2d0e94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E98u;
}
