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

// Function: sub_002DFCD0
// Address: 0x2dfcd0 - 0x2dfe58
void sub_002DFCD0_0x2dfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFCD0_0x2dfcd0");
#endif

    switch (ctx->pc) {
        case 0x2dfd04u: goto label_2dfd04;
        case 0x2dfd10u: goto label_2dfd10;
        case 0x2dfd2cu: goto label_2dfd2c;
        case 0x2dfd3cu: goto label_2dfd3c;
        case 0x2dfd4cu: goto label_2dfd4c;
        case 0x2dfd88u: goto label_2dfd88;
        case 0x2dfd94u: goto label_2dfd94;
        case 0x2dfdc0u: goto label_2dfdc0;
        case 0x2dfde4u: goto label_2dfde4;
        case 0x2dfdf0u: goto label_2dfdf0;
        default: break;
    }

    ctx->pc = 0x2dfcd0u;

    // 0x2dfcd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dfcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dfcd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dfcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dfcd8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2dfcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2dfcdc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dfcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2dfce0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dfce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfce4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dfce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2dfce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dfce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dfcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfcf0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2dfcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dfcf4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dfcf8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dfcfc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2DFCFCu;
    SET_GPR_U32(ctx, 31, 0x2DFD04u);
    ctx->pc = 0x2DFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCFCu;
    // 0x2dfd00: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DFCFCu, 0x2DFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD04u;
label_2dfd04:
    // 0x2dfd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd08: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2DFD08u;
    SET_GPR_U32(ctx, 31, 0x2DFD10u);
    ctx->pc = 0x2DFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD08u;
    // 0x2dfd0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2DFD08u, 0x2DFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD10u;
label_2dfd10:
    // 0x2dfd10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dfd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd14: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DFD14u;
    {
        const bool branch_taken_0x2dfd14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD14u;
        // 0x2dfd18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd14) {
            ctx->pc = 0x2DFDC0u;
            goto label_2dfdc0;
        }
    }
    ctx->pc = 0x2DFD1Cu;
    // 0x2dfd1c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2dfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dfd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd24: 0xc08750a  jal         func_21D428
    ctx->pc = 0x2DFD24u;
    SET_GPR_U32(ctx, 31, 0x2DFD2Cu);
    ctx->pc = 0x2DFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD24u;
    // 0x2dfd28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DFD24u, 0x2DFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD2Cu;
label_2dfd2c:
    // 0x2dfd2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dfd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd34: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x2DFD34u;
    SET_GPR_U32(ctx, 31, 0x2DFD3Cu);
    ctx->pc = 0x2DFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD34u;
    // 0x2dfd38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2DFD34u, 0x2DFD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD3Cu;
label_2dfd3c:
    // 0x2dfd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dfd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd44: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x2DFD44u;
    SET_GPR_U32(ctx, 31, 0x2DFD4Cu);
    ctx->pc = 0x2DFD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD44u;
    // 0x2dfd48: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x2DFD44u, 0x2DFD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD4Cu;
label_2dfd4c:
    // 0x2dfd4c: 0x8e4301a8  lw          $v1, 0x1A8($s2)
    ctx->pc = 0x2dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x2dfd50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfd54: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2dfd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfd58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DFD58u;
    {
        const bool branch_taken_0x2dfd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD58u;
        // 0x2dfd5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd58) {
            ctx->pc = 0x2DFDC0u;
            goto label_2dfdc0;
        }
    }
    ctx->pc = 0x2DFD60u;
    // 0x2dfd60: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x2dfd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2dfd64: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DFD64u;
    {
        const bool branch_taken_0x2dfd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dfd64) {
            ctx->pc = 0x2DFD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFD64u;
            // 0x2dfd68: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFDC4u;
            goto label_2dfdc4;
        }
    }
    ctx->pc = 0x2DFD6Cu;
    // 0x2dfd6c: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2dfd70: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2dfd74: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2dfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2dfd78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dfd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2dfd7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2dfd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dfd80: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2DFD80u;
    SET_GPR_U32(ctx, 31, 0x2DFD88u);
    ctx->pc = 0x2DFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD80u;
    // 0x2dfd84: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DFD80u, 0x2DFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD88u;
label_2dfd88:
    // 0x2dfd88: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2dfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dfd8c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DFD8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD94u);
    ctx->pc = 0x2DFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD8Cu;
    // 0x2dfd90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DFD8Cu, 0x2DFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD94u;
label_2dfd94:
    // 0x2dfd94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DFD94u;
    {
        const bool branch_taken_0x2dfd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD94u;
        // 0x2dfd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd94) {
            ctx->pc = 0x2DFDC0u;
            goto label_2dfdc0;
        }
    }
    ctx->pc = 0x2DFD9Cu;
    // 0x2dfd9c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2dfd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2dfda0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2dfda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2dfda4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dfda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dfda8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2dfda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dfdac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dfdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dfdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dfdb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dfdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dfdb8: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2DFDB8u;
    SET_GPR_U32(ctx, 31, 0x2DFDC0u);
    ctx->pc = 0x2DFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDB8u;
    // 0x2dfdbc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2DFDB8u, 0x2DFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDC0u;
label_2dfdc0:
    // 0x2dfdc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2dfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dfdc4:
    // 0x2dfdc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2dfdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfdc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dfdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dfdcc: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DFDCCu;
    {
        const bool branch_taken_0x2dfdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDCCu;
        // 0x2dfdd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfdcc) {
            ctx->pc = 0x2DFE38u;
            goto label_2dfe38;
        }
    }
    ctx->pc = 0x2DFDD4u;
    // 0x2dfdd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2dfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2dfdd8: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2dfddc: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x2DFDDCu;
    SET_GPR_U32(ctx, 31, 0x2DFDE4u);
    ctx->pc = 0x2DFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDDCu;
    // 0x2dfde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2DFDDCu, 0x2DFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDE4u;
label_2dfde4:
    // 0x2dfde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfde8: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x2DFDE8u;
    SET_GPR_U32(ctx, 31, 0x2DFDF0u);
    ctx->pc = 0x2DFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDE8u;
    // 0x2dfdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2DFDE8u, 0x2DFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDF0u;
label_2dfdf0:
    // 0x2dfdf0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2dfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2dfdf4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2dfdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2dfdf8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2dfdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dfdfc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dfe00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dfe04: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFE04u;
    {
        const bool branch_taken_0x2dfe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE04u;
        // 0x2dfe08: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe04) {
            ctx->pc = 0x2DFE24u;
            goto label_2dfe24;
        }
    }
    ctx->pc = 0x2DFE0Cu;
    // 0x2dfe0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFE0Cu;
    {
        const bool branch_taken_0x2dfe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE0Cu;
        // 0x2dfe10: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe0c) {
            ctx->pc = 0x2DFE24u;
            goto label_2dfe24;
        }
    }
    ctx->pc = 0x2DFE14u;
    // 0x2dfe14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFE14u;
    {
        const bool branch_taken_0x2dfe14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE14u;
        // 0x2dfe18: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe14) {
            ctx->pc = 0x2DFE24u;
            goto label_2dfe24;
        }
    }
    ctx->pc = 0x2DFE1Cu;
    // 0x2dfe1c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFE1Cu;
    {
        const bool branch_taken_0x2dfe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE1Cu;
        // 0x2dfe20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe1c) {
            ctx->pc = 0x2DFE38u;
            goto label_2dfe38;
        }
    }
    ctx->pc = 0x2DFE24u;
label_2dfe24:
    // 0x2dfe24: 0x9662002c  lhu         $v0, 0x2C($s3)
    ctx->pc = 0x2dfe24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2dfe28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dfe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dfe2c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2dfe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2dfe30: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x2dfe30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dfe34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dfe34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dfe38:
    // 0x2dfe38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dfe38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfe3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dfe3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfe40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dfe40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfe44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dfe44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfe48: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2dfe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dfe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE4Cu;
        // 0x2dfe50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFE54u;
    // 0x2dfe54: 0x0  nop
    ctx->pc = 0x2dfe54u;
    // NOP
    ctx->pc = 0x2dfe58u;
}
