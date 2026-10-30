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

// Function: sub_004BBEA0
// Address: 0x4bbea0 - 0x4bc158
void sub_004BBEA0_0x4bbea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BBEA0_0x4bbea0");
#endif

    ctx->pc = 0x4bbea0u;

    // 0x4bbea0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4bbea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bbea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bbea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbea8: 0x43fc2  srl         $a3, $a0, 31
    ctx->pc = 0x4bbea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x4bbeac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4bbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4bbeb0: 0x3c0242b1  lui         $v0, 0x42B1
    ctx->pc = 0x4bbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17073 << 16));
    // 0x4bbeb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bbeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bbeb8: 0x34427217  ori         $v0, $v0, 0x7217
    ctx->pc = 0x4bbeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29207);
    // 0x4bbebc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bbebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bbec0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4bbec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bbec4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4BBEC4u;
    {
        const bool branch_taken_0x4bbec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBEC4u;
        // 0x4bbec8: 0x3c037f80  lui         $v1, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbec4) {
            ctx->pc = 0x4BBF48u;
            goto label_4bbf48;
        }
    }
    ctx->pc = 0x4BBECCu;
    // 0x4bbecc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4bbeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bbed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BBED0u;
    {
        const bool branch_taken_0x4bbed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbed0) {
            ctx->pc = 0x4BBEE0u;
            goto label_4bbee0;
        }
    }
    ctx->pc = 0x4BBED8u;
    // 0x4bbed8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBED8u;
        // 0x4bbedc: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBEE0u;
label_4bbee0:
    // 0x4bbee0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BBEE0u;
    {
        const bool branch_taken_0x4bbee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bbee0) {
            ctx->pc = 0x4BBEFCu;
            goto label_4bbefc;
        }
    }
    ctx->pc = 0x4BBEE8u;
    // 0x4bbee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bbee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bbeec: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4BBEECu;
    {
        const bool branch_taken_0x4bbeec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbeec) {
            ctx->pc = 0x4BBEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BBEECu;
            // 0x4bbef0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BBEF4u;
            goto label_4bbef4;
        }
    }
    ctx->pc = 0x4BBEF4u;
label_4bbef4:
    // 0x4bbef4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBEFCu;
label_4bbefc:
    // 0x4bbefc: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x4bbefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x4bbf00: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x4bbf00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x4bbf04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bbf04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bbf08: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x4bbf08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bbf0c: 0x0  nop
    ctx->pc = 0x4bbf0cu;
    // NOP
    // 0x4bbf10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4BBF10u;
    {
        const bool branch_taken_0x4bbf10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF10u;
        // 0x4bbf14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf10) {
            ctx->pc = 0x4BBF20u;
            goto label_4bbf20;
        }
    }
    ctx->pc = 0x4BBF18u;
    // 0x4bbf18: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF18u;
        // 0x4bbf1c: 0xc4401450  lwc1        $f0, 0x1450($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBF20u;
label_4bbf20:
    // 0x4bbf20: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x4bbf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x4bbf24: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x4bbf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x4bbf28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bbf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bbf2c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4bbf2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bbf30: 0x0  nop
    ctx->pc = 0x4bbf30u;
    // NOP
    // 0x4bbf34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x4BBF34u;
    {
        const bool branch_taken_0x4bbf34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF34u;
        // 0x4bbf38: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf34) {
            ctx->pc = 0x4BBF4Cu;
            goto label_4bbf4c;
        }
    }
    ctx->pc = 0x4BBF3Cu;
    // 0x4bbf3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bbf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bbf40: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBF48u;
label_4bbf48:
    // 0x4bbf48: 0x3c023eb1  lui         $v0, 0x3EB1
    ctx->pc = 0x4bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
label_4bbf4c:
    // 0x4bbf4c: 0x34427218  ori         $v0, $v0, 0x7218
    ctx->pc = 0x4bbf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29208);
    // 0x4bbf50: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4bbf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bbf54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4BBF54u;
    {
        const bool branch_taken_0x4bbf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF54u;
        // 0x4bbf58: 0x3c023f85  lui         $v0, 0x3F85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf54) {
            ctx->pc = 0x4BBFFCu;
            goto label_4bbffc;
        }
    }
    ctx->pc = 0x4BBF5Cu;
    // 0x4bbf5c: 0x34421591  ori         $v0, $v0, 0x1591
    ctx->pc = 0x4bbf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5521);
    // 0x4bbf60: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4bbf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bbf64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BBF64u;
    {
        const bool branch_taken_0x4bbf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF64u;
        // 0x4bbf68: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf64) {
            ctx->pc = 0x4BBFA4u;
            goto label_4bbfa4;
        }
    }
    ctx->pc = 0x4BBF6Cu;
    // 0x4bbf6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bbf70: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4bbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4bbf74: 0x24421428  addiu       $v0, $v0, 0x1428
    ctx->pc = 0x4bbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5160));
    // 0x4bbf78: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4bbf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4bbf7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4bbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4bbf80: 0x24841430  addiu       $a0, $a0, 0x1430
    ctx->pc = 0x4bbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5168));
    // 0x4bbf84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bbf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bbf88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bbf8c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4bbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4bbf90: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4bbf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4bbf94: 0x460061c1  sub.s       $f7, $f12, $f0
    ctx->pc = 0x4bbf94u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4bbf98: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x4bbf98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4bbf9c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4BBF9Cu;
    {
        const bool branch_taken_0x4bbf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBF9Cu;
        // 0x4bbfa0: 0xc4a60000  lwc1        $f6, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf9c) {
            ctx->pc = 0x4BBFF4u;
            goto label_4bbff4;
        }
    }
    ctx->pc = 0x4BBFA4u;
label_4bbfa4:
    // 0x4bbfa4: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x4bbfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x4bbfa8: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x4bbfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x4bbfac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bbfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bbfb0: 0x24421410  addiu       $v0, $v0, 0x1410
    ctx->pc = 0x4bbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5136));
    // 0x4bbfb4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4bbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4bbfb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bbfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bbfbc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bbfbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bbfc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4bbfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4bbfc4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bbfc8: 0xc4411428  lwc1        $f1, 0x1428($v0)
    ctx->pc = 0x4bbfc8u;
    { uint32_t bits = FAST_READ32(0x591428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bbfcc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4bbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4bbfd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4bbfd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4bbfd4: 0xc4631430  lwc1        $f3, 0x1430($v1)
    ctx->pc = 0x4bbfd4u;
    { uint32_t bits = FAST_READ32(0x591430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4bbfd8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bbfd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4bbfdc: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x4bbfdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4bbfe0: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x4bbfe0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bbfe4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x4bbfe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4bbfe8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x4bbfe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x4bbfec: 0x46032982  mul.s       $f6, $f5, $f3
    ctx->pc = 0x4bbfecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x4bbff0: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x4bbff0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_4bbff4:
    // 0x4bbff4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4BBFF4u;
    {
        const bool branch_taken_0x4bbff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBFF4u;
        // 0x4bbff8: 0x46063b01  sub.s       $f12, $f7, $f6 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbff4) {
            ctx->pc = 0x4BC040u;
            goto label_4bc040;
        }
    }
    ctx->pc = 0x4BBFFCu;
label_4bbffc:
    // 0x4bbffc: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x4bbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x4bc000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc004: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4bc004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bc008: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4BC008u;
    {
        const bool branch_taken_0x4bc008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc008) {
            ctx->pc = 0x4BC00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC008u;
            // 0x4bc00c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC040u;
            goto label_4bc040;
        }
    }
    ctx->pc = 0x4BC010u;
    // 0x4bc010: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4bc010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4bc014: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4bc014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4bc018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc024: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4bc024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4bc028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4bc028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bc02c: 0x0  nop
    ctx->pc = 0x4bc02cu;
    // NOP
    // 0x4bc030: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC030u;
    {
        const bool branch_taken_0x4bc030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bc030) {
            ctx->pc = 0x4BC034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC030u;
            // 0x4bc034: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC044u;
            goto label_4bc044;
        }
    }
    ctx->pc = 0x4BC038u;
    // 0x4bc038: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC038u;
        // 0x4bc03c: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC040u;
label_4bc040:
    // 0x4bc040: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x4bc040u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_4bc044:
    // 0x4bc044: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x4bc044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x4bc048: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x4bc048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x4bc04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc050: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x4bc050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x4bc054: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x4bc054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x4bc058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc05c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x4bc05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x4bc060: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x4bc060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x4bc064: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc068: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bc068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bc06c: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x4bc06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x4bc070: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4bc070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4bc074: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bc074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bc078: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x4bc078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x4bc07c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bc07cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bc080: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bc080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bc084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bc084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bc088: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bc088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bc08c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4bc08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4bc090: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bc090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bc094: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bc094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bc098: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bc098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bc09c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4bc09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4bc0a0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4bc0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4bc0a4: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x4BC0A4u;
    {
        const bool branch_taken_0x4bc0a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC0A4u;
        // 0x4bc0a8: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc0a4) {
            ctx->pc = 0x4BC0DCu;
            goto label_4bc0dc;
        }
    }
    ctx->pc = 0x4BC0ACu;
    // 0x4bc0ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4bc0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4bc0b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc0b4: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x4bc0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x4bc0b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc0bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc0c0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x4bc0c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4bc0c4: 0x0  nop
    ctx->pc = 0x4bc0c4u;
    // NOP
    // 0x4bc0c8: 0x0  nop
    ctx->pc = 0x4bc0c8u;
    // NOP
    // 0x4bc0cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4bc0ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4bc0d0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x4bc0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x4bc0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC0D4u;
        // 0x4bc0d8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC0DCu;
label_4bc0dc:
    // 0x4bc0dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4bc0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4bc0e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc0e4: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x4bc0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x4bc0e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc0ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc0f0: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x4bc0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
    // 0x4bc0f4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4bc0f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4bc0f8: 0x0  nop
    ctx->pc = 0x4bc0f8u;
    // NOP
    // 0x4bc0fc: 0x0  nop
    ctx->pc = 0x4bc0fcu;
    // NOP
    // 0x4bc100: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4bc100u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4bc104: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x4bc104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x4bc108: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x4bc108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x4bc10c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4bc10cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4bc110: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4bc110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4bc114: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC114u;
    {
        const bool branch_taken_0x4bc114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC114u;
        // 0x4bc118: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc114) {
            ctx->pc = 0x4BC130u;
            goto label_4bc130;
        }
    }
    ctx->pc = 0x4BC11Cu;
    // 0x4bc11c: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x4bc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x4bc120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bc120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bc124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bc124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc128: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC130u;
label_4bc130:
    // 0x4bc130: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x4bc130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x4bc134: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x4bc134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x4bc138: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4bc138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bc13c: 0x3c010d80  lui         $at, 0xD80
    ctx->pc = 0x4bc13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3456 << 16));
    // 0x4bc140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4bc144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4bc148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4bc14c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC154u;
    // 0x4bc154: 0x0  nop
    ctx->pc = 0x4bc154u;
    // NOP
    ctx->pc = 0x4bc158u;
}
