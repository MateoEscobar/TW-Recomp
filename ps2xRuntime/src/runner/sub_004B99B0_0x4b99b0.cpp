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

// Function: sub_004B99B0
// Address: 0x4b99b0 - 0x4b9af8
void sub_004B99B0_0x4b99b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B99B0_0x4b99b0");
#endif

    switch (ctx->pc) {
        case 0x4b99d4u: goto label_4b99d4;
        case 0x4b99ecu: goto label_4b99ec;
        case 0x4b9a24u: goto label_4b9a24;
        case 0x4b9a50u: goto label_4b9a50;
        case 0x4b9a7cu: goto label_4b9a7c;
        case 0x4b9aa0u: goto label_4b9aa0;
        case 0x4b9ab0u: goto label_4b9ab0;
        case 0x4b9accu: goto label_4b9acc;
        case 0x4b9adcu: goto label_4b9adc;
        default: break;
    }

    ctx->pc = 0x4b99b0u;

    // 0x4b99b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b99b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b99b4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x4b99b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b99b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4b99b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4b99bc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b99bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b99c0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b99c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b99c4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x4b99c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b99c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b99cc: 0xc12f0ea  jal         func_4BC3A8
    ctx->pc = 0x4B99CCu;
    SET_GPR_U32(ctx, 31, 0x4B99D4u);
    ctx->pc = 0x4B99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B99CCu;
    // 0x4b99d0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BC3A8u, 0x4B99CCu, 0x4B99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B99D4u;
label_4b99d4:
    // 0x4b99d4: 0x8e301974  lw          $s0, 0x1974($s1)
    ctx->pc = 0x4b99d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b99d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b99dc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B99DCu;
    {
        const bool branch_taken_0x4b99dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B99DCu;
        // 0x4b99e0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b99dc) {
            ctx->pc = 0x4B9A08u;
            goto label_4b9a08;
        }
    }
    ctx->pc = 0x4B99E4u;
    // 0x4b99e4: 0xc12f982  jal         func_4BE608
    ctx->pc = 0x4B99E4u;
    SET_GPR_U32(ctx, 31, 0x4B99ECu);
    ctx->pc = 0x4B99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B99E4u;
    // 0x4b99e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE608u, 0x4B99E4u, 0x4B99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B99ECu;
label_4b99ec:
    // 0x4b99ec: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4B99ECu;
    {
        const bool branch_taken_0x4b99ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B99ECu;
        // 0x4b99f0: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b99ec) {
            ctx->pc = 0x4B9ADCu;
            goto label_4b9adc;
        }
    }
    ctx->pc = 0x4B99F4u;
    // 0x4b99f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b99f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b99f8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4b99f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b99fc: 0x0  nop
    ctx->pc = 0x4b99fcu;
    // NOP
    // 0x4b9a00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4B9A00u;
    {
        const bool branch_taken_0x4b9a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A00u;
        // 0x4b9a04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a00) {
            ctx->pc = 0x4B9A10u;
            goto label_4b9a10;
        }
    }
    ctx->pc = 0x4B9A08u;
label_4b9a08:
    // 0x4b9a08: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4B9A08u;
    {
        const bool branch_taken_0x4b9a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A08u;
        // 0x4b9a0c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a08) {
            ctx->pc = 0x4B9ADCu;
            goto label_4b9adc;
        }
    }
    ctx->pc = 0x4B9A10u;
label_4b9a10:
    // 0x4b9a10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b9a14: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x4b9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x4b9a18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4b9a18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4b9a1c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4B9A1Cu;
    SET_GPR_U32(ctx, 31, 0x4B9A24u);
    ctx->pc = 0x4B9A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9A1Cu;
    // 0x4b9a20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4B9A1Cu, 0x4B9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9A24u;
label_4b9a24:
    // 0x4b9a24: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4b9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4b9a28: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9A28u;
    {
        const bool branch_taken_0x4b9a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A28u;
        // 0x4b9a2c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a28) {
            ctx->pc = 0x4B9A40u;
            goto label_4b9a40;
        }
    }
    ctx->pc = 0x4B9A30u;
    // 0x4b9a30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b9a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b9a34: 0xdc220fd0  ld          $v0, 0xFD0($at)
    ctx->pc = 0x4b9a34u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590FD0u));
    // 0x4b9a38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9A38u;
    {
        const bool branch_taken_0x4b9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A38u;
        // 0x4b9a3c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a38) {
            ctx->pc = 0x4B9A54u;
            goto label_4b9a54;
        }
    }
    ctx->pc = 0x4B9A40u;
label_4b9a40:
    // 0x4b9a40: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9a48: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9A48u;
    SET_GPR_U32(ctx, 31, 0x4B9A50u);
    ctx->pc = 0x4B9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9A48u;
    // 0x4b9a4c: 0xdc450ed8  ld          $a1, 0xED8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9A48u, 0x4B9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9A50u;
label_4b9a50:
    // 0x4b9a50: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b9a54:
    // 0x4b9a54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b9a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b9a58: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4b9a58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b9a5c: 0x0  nop
    ctx->pc = 0x4b9a5cu;
    // NOP
    // 0x4b9a60: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x4B9A60u;
    {
        const bool branch_taken_0x4b9a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A60u;
        // 0x4b9a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a60) {
            ctx->pc = 0x4B9A84u;
            goto label_4b9a84;
        }
    }
    ctx->pc = 0x4B9A68u;
    // 0x4b9a68: 0x8e231974  lw          $v1, 0x1974($s1)
    ctx->pc = 0x4b9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b9a6c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B9A6Cu;
    {
        const bool branch_taken_0x4b9a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A6Cu;
        // 0x4b9a70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a6c) {
            ctx->pc = 0x4B9A98u;
            goto label_4b9a98;
        }
    }
    ctx->pc = 0x4B9A74u;
    // 0x4b9a74: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9A74u;
    SET_GPR_U32(ctx, 31, 0x4B9A7Cu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9A74u, 0x4B9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9A7Cu;
label_4b9a7c:
    // 0x4b9a7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B9A7Cu;
    {
        const bool branch_taken_0x4b9a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A7Cu;
        // 0x4b9a80: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a7c) {
            ctx->pc = 0x4B9AB4u;
            goto label_4b9ab4;
        }
    }
    ctx->pc = 0x4B9A84u;
label_4b9a84:
    // 0x4b9a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9a88: 0x8e221974  lw          $v0, 0x1974($s1)
    ctx->pc = 0x4b9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
    // 0x4b9a8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9a90: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9A90u;
    {
        const bool branch_taken_0x4b9a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4B9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9A90u;
        // 0x4b9a94: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a90) {
            ctx->pc = 0x4B9AA8u;
            goto label_4b9aa8;
        }
    }
    ctx->pc = 0x4B9A98u;
label_4b9a98:
    // 0x4b9a98: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9A98u;
    SET_GPR_U32(ctx, 31, 0x4B9AA0u);
    ctx->pc = 0x4B9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9A98u;
    // 0x4b9a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9A98u, 0x4B9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9AA0u;
label_4b9aa0:
    // 0x4b9aa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9AA0u;
    {
        const bool branch_taken_0x4b9aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9AA0u;
        // 0x4b9aa4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9aa0) {
            ctx->pc = 0x4B9ABCu;
            goto label_4b9abc;
        }
    }
    ctx->pc = 0x4B9AA8u;
label_4b9aa8:
    // 0x4b9aa8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9AA8u;
    SET_GPR_U32(ctx, 31, 0x4B9AB0u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9AA8u, 0x4B9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9AB0u;
label_4b9ab0:
    // 0x4b9ab0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x4b9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_4b9ab4:
    // 0x4b9ab4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9ab8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9abc:
    // 0x4b9abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9ABCu;
    {
        const bool branch_taken_0x4b9abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9abc) {
            ctx->pc = 0x4B9AD4u;
            goto label_4b9ad4;
        }
    }
    ctx->pc = 0x4B9AC4u;
    // 0x4b9ac4: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9AC4u;
    SET_GPR_U32(ctx, 31, 0x4B9ACCu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9AC4u, 0x4B9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9ACCu;
label_4b9acc:
    // 0x4b9acc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9ad0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b9ad4:
    // 0x4b9ad4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x4B9AD4u;
    SET_GPR_U32(ctx, 31, 0x4B9ADCu);
    ctx->pc = 0x4B9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9AD4u;
    // 0x4b9ad8: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x4B9AD4u, 0x4B9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9ADCu;
label_4b9adc:
    // 0x4b9adc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b9adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9ae0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b9ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9ae4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b9ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9ae8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x4b9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4b9aec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x4b9aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b9af0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9AF0u;
        // 0x4b9af4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B9AF8u;
}
