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

// Function: sub_00108800
// Address: 0x108800 - 0x1088c0
void sub_00108800_0x108800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108800_0x108800");
#endif

    switch (ctx->pc) {
        case 0x108820u: goto label_108820;
        case 0x1088acu: goto label_1088ac;
        default: break;
    }

    ctx->pc = 0x108800u;

    // 0x108800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108804: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10880c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10880cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108810: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x108814: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108818: 0xc041338  jal         func_104CE0
    ctx->pc = 0x108818u;
    SET_GPR_U32(ctx, 31, 0x108820u);
    ctx->pc = 0x10881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108818u;
    // 0x10881c: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108818u, 0x108820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108820u;
label_108820:
    // 0x108820: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x108820u;
    {
        const bool branch_taken_0x108820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108820) {
            ctx->pc = 0x108824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108820u;
            // 0x108824: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108830u;
            goto label_108830;
        }
    }
    ctx->pc = 0x108828u;
    // 0x108828: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x108828u;
    {
        const bool branch_taken_0x108828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108828u;
        // 0x10882c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108828) {
            ctx->pc = 0x1088B0u;
            goto label_1088b0;
        }
    }
    ctx->pc = 0x108830u;
label_108830:
    // 0x108830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108838: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x108838u;
    {
        const bool branch_taken_0x108838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108838u;
        // 0x10883c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108838) {
            ctx->pc = 0x10887Cu;
            goto label_10887c;
        }
    }
    ctx->pc = 0x108840u;
    // 0x108840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108840u;
    {
        const bool branch_taken_0x108840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108840u;
        // 0x108844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108840) {
            ctx->pc = 0x108858u;
            goto label_108858;
        }
    }
    ctx->pc = 0x108848u;
    // 0x108848: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x108848u;
    {
        const bool branch_taken_0x108848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108848) {
            ctx->pc = 0x10884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108848u;
            // 0x10884c: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108868u;
            goto label_108868;
        }
    }
    ctx->pc = 0x108850u;
    // 0x108850: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x108850u;
    {
        const bool branch_taken_0x108850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108850u;
        // 0x108854: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108850) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108858u;
    {
        const bool branch_taken_0x108858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x108858) {
            ctx->pc = 0x10885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108858u;
            // 0x10885c: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10888Cu;
            goto label_10888c;
        }
    }
    ctx->pc = 0x108860u;
    // 0x108860: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x108860u;
    {
        const bool branch_taken_0x108860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108860u;
        // 0x108864: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108860) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x108868u;
label_108868:
    // 0x108868: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x108868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10886c: 0x0  nop
    ctx->pc = 0x10886cu;
    // NOP
    // 0x108870: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x108870u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x108874: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x108874u;
    {
        const bool branch_taken_0x108874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108874u;
        // 0x108878: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108874) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x10887Cu;
label_10887c:
    // 0x10887c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108880: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108884u;
    {
        const bool branch_taken_0x108884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108884u;
        // 0x108888: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108884) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x10888Cu;
label_10888c:
    // 0x10888c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x10888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108898: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x108898u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10889c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x10889cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1088a0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1088a4:
    // 0x1088a4: 0xc041456  jal         func_105158
    ctx->pc = 0x1088A4u;
    SET_GPR_U32(ctx, 31, 0x1088ACu);
    ctx->pc = 0x1088A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088A4u;
    // 0x1088a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105158u, 0x1088A4u, 0x1088ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1088ACu;
label_1088ac:
    // 0x1088ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1088b0:
    // 0x1088b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1088b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1088b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1088B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B8u;
        // 0x1088bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088C0u;
}
