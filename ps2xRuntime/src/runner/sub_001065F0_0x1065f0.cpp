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

// Function: sub_001065F0
// Address: 0x1065f0 - 0x1066c0
void sub_001065F0_0x1065f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001065F0_0x1065f0");
#endif

    switch (ctx->pc) {
        case 0x106608u: goto label_106608;
        case 0x10661cu: goto label_10661c;
        case 0x1066a8u: goto label_1066a8;
        default: break;
    }

    ctx->pc = 0x1065f0u;

    // 0x1065f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1065f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1065f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1065f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1065f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1065fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1065fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106600: 0xc0420dc  jal         func_108370
    ctx->pc = 0x106600u;
    SET_GPR_U32(ctx, 31, 0x106608u);
    ctx->pc = 0x106604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106600u;
    // 0x106604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x106600u, 0x106608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106608u;
label_106608:
    // 0x106608: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x106608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10660c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x106610: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x106610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x106614: 0xc041338  jal         func_104CE0
    ctx->pc = 0x106614u;
    SET_GPR_U32(ctx, 31, 0x10661Cu);
    ctx->pc = 0x106618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106614u;
    // 0x106618: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x106614u, 0x10661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10661Cu;
label_10661c:
    // 0x10661c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10661Cu;
    {
        const bool branch_taken_0x10661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10661c) {
            ctx->pc = 0x106620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10661Cu;
            // 0x106620: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10662Cu;
            goto label_10662c;
        }
    }
    ctx->pc = 0x106624u;
    // 0x106624: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x106624u;
    {
        const bool branch_taken_0x106624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106624u;
        // 0x106628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106624) {
            ctx->pc = 0x1066ACu;
            goto label_1066ac;
        }
    }
    ctx->pc = 0x10662Cu;
label_10662c:
    // 0x10662c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106630: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x106630u;
    {
        const bool branch_taken_0x106630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106630u;
        // 0x106634: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106630) {
            ctx->pc = 0x106674u;
            goto label_106674;
        }
    }
    ctx->pc = 0x106638u;
    // 0x106638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106638u;
    {
        const bool branch_taken_0x106638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106638u;
        // 0x10663c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106638) {
            ctx->pc = 0x106650u;
            goto label_106650;
        }
    }
    ctx->pc = 0x106640u;
    // 0x106640: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x106640u;
    {
        const bool branch_taken_0x106640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x106640) {
            ctx->pc = 0x106644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106640u;
            // 0x106644: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106660u;
            goto label_106660;
        }
    }
    ctx->pc = 0x106648u;
    // 0x106648: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x106648u;
    {
        const bool branch_taken_0x106648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106648u;
        // 0x10664c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106648) {
            ctx->pc = 0x10669Cu;
            goto label_10669c;
        }
    }
    ctx->pc = 0x106650u;
label_106650:
    // 0x106650: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106650u;
    {
        const bool branch_taken_0x106650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x106650) {
            ctx->pc = 0x106654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106650u;
            // 0x106654: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106684u;
            goto label_106684;
        }
    }
    ctx->pc = 0x106658u;
    // 0x106658: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x106658u;
    {
        const bool branch_taken_0x106658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106658u;
        // 0x10665c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106658) {
            ctx->pc = 0x10669Cu;
            goto label_10669c;
        }
    }
    ctx->pc = 0x106660u;
label_106660:
    // 0x106660: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x106660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106664: 0x0  nop
    ctx->pc = 0x106664u;
    // NOP
    // 0x106668: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x106668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10666c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10666Cu;
    {
        const bool branch_taken_0x10666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10666Cu;
        // 0x106670: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10666c) {
            ctx->pc = 0x10669Cu;
            goto label_10669c;
        }
    }
    ctx->pc = 0x106674u;
label_106674:
    // 0x106674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106678: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x106678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10667c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10667Cu;
    {
        const bool branch_taken_0x10667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10667Cu;
        // 0x106680: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10667c) {
            ctx->pc = 0x10669Cu;
            goto label_10669c;
        }
    }
    ctx->pc = 0x106684u;
label_106684:
    // 0x106684: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x106684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10668c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10668cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x106690: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x106690u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x106694: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x106694u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x106698: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x106698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10669c:
    // 0x10669c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10669cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1066a0: 0xc041456  jal         func_105158
    ctx->pc = 0x1066A0u;
    SET_GPR_U32(ctx, 31, 0x1066A8u);
    ctx->pc = 0x1066A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066A0u;
    // 0x1066a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105158u, 0x1066A0u, 0x1066A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066A8u;
label_1066a8:
    // 0x1066a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1066ac:
    // 0x1066ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1066acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1066b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1066b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1066b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1066B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066B8u;
        // 0x1066bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066C0u;
}
