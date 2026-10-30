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

// Function: sub_0010B448
// Address: 0x10b448 - 0x10b538
void sub_0010B448_0x10b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B448_0x10b448");
#endif

    switch (ctx->pc) {
        case 0x10b480u: goto label_10b480;
        case 0x10b4b8u: goto label_10b4b8;
        case 0x10b4ccu: goto label_10b4cc;
        case 0x10b4dcu: goto label_10b4dc;
        case 0x10b4ecu: goto label_10b4ec;
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b50cu: goto label_10b50c;
        case 0x10b520u: goto label_10b520;
        default: break;
    }

    ctx->pc = 0x10b448u;

    // 0x10b448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b44c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x10b44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x10b450: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x10b450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x10b454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b464: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x10b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b468: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10b468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b46c: 0x0  nop
    ctx->pc = 0x10b46cu;
    // NOP
    // 0x10b470: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x10B470u;
    {
        const bool branch_taken_0x10b470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b470) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B478u;
    // 0x10b478: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10B478u;
    SET_GPR_U32(ctx, 31, 0x10B480u);
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B478u, 0x10B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B480u;
label_10b480:
    // 0x10b480: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b484: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b488: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10B488u;
    {
        const bool branch_taken_0x10b488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B488u;
        // 0x10b48c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b488) {
            ctx->pc = 0x10B4C4u;
            goto label_10b4c4;
        }
    }
    ctx->pc = 0x10B490u;
label_10b490:
    // 0x10b490: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x10b490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10b494: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10b494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10b498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b49c: 0x0  nop
    ctx->pc = 0x10b49cu;
    // NOP
    // 0x10b4a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10b4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b4a4: 0x0  nop
    ctx->pc = 0x10b4a4u;
    // NOP
    // 0x10b4a8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x10B4A8u;
    {
        const bool branch_taken_0x10b4a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b4a8) {
            ctx->pc = 0x10B4D4u;
            goto label_10b4d4;
        }
    }
    ctx->pc = 0x10B4B0u;
    // 0x10b4b0: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10B4B0u;
    SET_GPR_U32(ctx, 31, 0x10B4B8u);
    ctx->pc = 0x10B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4B0u;
    // 0x10b4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B4B0u, 0x10B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4B8u;
label_10b4b8:
    // 0x10b4b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b4bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b4c0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10b4c4:
    // 0x10b4c4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10B4C4u;
    SET_GPR_U32(ctx, 31, 0x10B4CCu);
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10B4C4u, 0x10B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4CCu;
label_10b4cc:
    // 0x10b4cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10B4CCu;
    {
        const bool branch_taken_0x10b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4CCu;
        // 0x10b4d0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4cc) {
            ctx->pc = 0x10B524u;
            goto label_10b524;
        }
    }
    ctx->pc = 0x10B4D4u;
label_10b4d4:
    // 0x10b4d4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10B4D4u;
    SET_GPR_U32(ctx, 31, 0x10B4DCu);
    ctx->pc = 0x10B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4D4u;
    // 0x10b4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B4D4u, 0x10B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4DCu;
label_10b4dc:
    // 0x10b4dc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10b4e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b4e4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10B4E4u;
    SET_GPR_U32(ctx, 31, 0x10B4ECu);
    ctx->pc = 0x10B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4E4u;
    // 0x10b4e8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10B4E4u, 0x10B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B524u;
            goto label_10b524;
        }
    }
    ctx->pc = 0x10B4F4u;
    // 0x10b4f4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10B4F4u;
    SET_GPR_U32(ctx, 31, 0x10B4FCu);
    ctx->pc = 0x10B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4F4u;
    // 0x10b4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10B4F4u, 0x10B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b500: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10b500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10b504: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10B504u;
    SET_GPR_U32(ctx, 31, 0x10B50Cu);
    ctx->pc = 0x10B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B504u;
    // 0x10b508: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10B504u, 0x10B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B50Cu;
label_10b50c:
    // 0x10b50c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B50Cu;
    {
        const bool branch_taken_0x10b50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B50Cu;
        // 0x10b510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b50c) {
            ctx->pc = 0x10B524u;
            goto label_10b524;
        }
    }
    ctx->pc = 0x10B514u;
    // 0x10b514: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x10b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10b518: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10B518u;
    SET_GPR_U32(ctx, 31, 0x10B520u);
    ctx->pc = 0x10B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B518u;
    // 0x10b51c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10B518u, 0x10B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b524:
    // 0x10b524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B52Cu;
        // 0x10b530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B534u;
    // 0x10b534: 0x0  nop
    ctx->pc = 0x10b534u;
    // NOP
    ctx->pc = 0x10b538u;
}
