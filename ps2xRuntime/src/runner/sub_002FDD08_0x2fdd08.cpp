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

// Function: sub_002FDD08
// Address: 0x2fdd08 - 0x2fdde8
void sub_002FDD08_0x2fdd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDD08_0x2fdd08");
#endif

    switch (ctx->pc) {
        case 0x2fdd70u: goto label_2fdd70;
        case 0x2fdd7cu: goto label_2fdd7c;
        case 0x2fdd94u: goto label_2fdd94;
        case 0x2fdda8u: goto label_2fdda8;
        default: break;
    }

    ctx->pc = 0x2fdd08u;

    // 0x2fdd08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fdd0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdd10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fdd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fdd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdd18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdd1c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2fdd1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fdd20: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2fdd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fdd24: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2fdd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fdd28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDD28u;
    {
        const bool branch_taken_0x2fdd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD28u;
        // 0x2fdd2c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd28) {
            ctx->pc = 0x2FDD48u;
            goto label_2fdd48;
        }
    }
    ctx->pc = 0x2FDD30u;
    // 0x2fdd30: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fdd34: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2fdd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2fdd38: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2fdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2fdd3c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2fdd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fdd40: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDD40u;
    {
        const bool branch_taken_0x2fdd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd40) {
            ctx->pc = 0x2FDD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDD40u;
            // 0x2fdd44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDD50u;
            goto label_2fdd50;
        }
    }
    ctx->pc = 0x2FDD48u;
label_2fdd48:
    // 0x2fdd48: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2FDD48u;
    {
        const bool branch_taken_0x2fdd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD48u;
        // 0x2fdd4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd48) {
            ctx->pc = 0x2FDDCCu;
            goto label_2fddcc;
        }
    }
    ctx->pc = 0x2FDD50u;
label_2fdd50:
    // 0x2fdd50: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2fdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2fdd54: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2fdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2fdd58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdd5c: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2fdd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2fdd60: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fdd64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fdd68: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2FDD68u;
    SET_GPR_U32(ctx, 31, 0x2FDD70u);
    ctx->pc = 0x2FDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD68u;
    // 0x2fdd6c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2FDD68u, 0x2FDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD70u;
label_2fdd70:
    // 0x2fdd70: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2fdd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdd74: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2FDD74u;
    SET_GPR_U32(ctx, 31, 0x2FDD7Cu);
    ctx->pc = 0x2FDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD74u;
    // 0x2fdd78: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2FDD74u, 0x2FDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD7Cu;
label_2fdd7c:
    // 0x2fdd7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdd80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fdd80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2fdd84: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x2fdd84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x2fdd88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2fdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdd8c: 0xc08a112  jal         func_228448
    ctx->pc = 0x2FDD8Cu;
    SET_GPR_U32(ctx, 31, 0x2FDD94u);
    ctx->pc = 0x2FDD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD8Cu;
    // 0x2fdd90: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228448u, 0x2FDD8Cu, 0x2FDD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD94u;
label_2fdd94:
    // 0x2fdd94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FDD94u;
    {
        const bool branch_taken_0x2fdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD94u;
        // 0x2fdd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd94) {
            ctx->pc = 0x2FDDCCu;
            goto label_2fddcc;
        }
    }
    ctx->pc = 0x2FDD9Cu;
    // 0x2fdd9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2fdd9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2fdda0: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2FDDA0u;
    SET_GPR_U32(ctx, 31, 0x2FDDA8u);
    ctx->pc = 0x2FDDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDA0u;
    // 0x2fdda4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2FDDA0u, 0x2FDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDA8u;
label_2fdda8:
    // 0x2fdda8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2fdda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2fddac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2fddacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2fddb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fddb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fddb4: 0x0  nop
    ctx->pc = 0x2fddb4u;
    // NOP
    // 0x2fddb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fddb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fddbc: 0x0  nop
    ctx->pc = 0x2fddbcu;
    // NOP
    // 0x2fddc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDDC0u;
    {
        const bool branch_taken_0x2fddc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDC0u;
        // 0x2fddc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddc0) {
            ctx->pc = 0x2FDDCCu;
            goto label_2fddcc;
        }
    }
    ctx->pc = 0x2FDDC8u;
    // 0x2fddc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fddc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fddcc:
    // 0x2fddcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fddccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fddd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fddd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fddd4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2fddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fddd8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2fddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fdddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDDCu;
        // 0x2fdde0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDE4u;
    // 0x2fdde4: 0x0  nop
    ctx->pc = 0x2fdde4u;
    // NOP
    ctx->pc = 0x2fdde8u;
}
