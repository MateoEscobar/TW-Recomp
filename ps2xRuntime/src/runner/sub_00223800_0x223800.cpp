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

// Function: sub_00223800
// Address: 0x223800 - 0x2238c0
void sub_00223800_0x223800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223800_0x223800");
#endif

    switch (ctx->pc) {
        case 0x223828u: goto label_223828;
        case 0x223838u: goto label_223838;
        case 0x223848u: goto label_223848;
        case 0x2238a4u: goto label_2238a4;
        default: break;
    }

    ctx->pc = 0x223800u;

    // 0x223800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x223800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x223804: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x223804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x223808: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x223808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22380c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22380cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223814: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x223814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x223818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22381c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223820: 0xc088ade  jal         func_222B78
    ctx->pc = 0x223820u;
    SET_GPR_U32(ctx, 31, 0x223828u);
    ctx->pc = 0x223824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223820u;
    // 0x223824: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x223820u, 0x223828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223828u;
label_223828:
    // 0x223828: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x223828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x22382c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22382cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223830: 0xc08a21c  jal         func_228870
    ctx->pc = 0x223830u;
    SET_GPR_U32(ctx, 31, 0x223838u);
    ctx->pc = 0x223834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223830u;
    // 0x223834: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228870u, 0x223830u, 0x223838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223838u;
label_223838:
    // 0x223838: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x223838u;
    {
        const bool branch_taken_0x223838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223838u;
        // 0x22383c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223838) {
            ctx->pc = 0x223858u;
            goto label_223858;
        }
    }
    ctx->pc = 0x223840u;
    // 0x223840: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x223840u;
    SET_GPR_U32(ctx, 31, 0x223848u);
    ctx->pc = 0x223844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223840u;
    // 0x223844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x223840u, 0x223848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223848u;
label_223848:
    // 0x223848: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x223848u;
    {
        const bool branch_taken_0x223848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223848) {
            ctx->pc = 0x22384Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223848u;
            // 0x22384c: 0xc661001c  lwc1        $f1, 0x1C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22385Cu;
            goto label_22385c;
        }
    }
    ctx->pc = 0x223850u;
    // 0x223850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223850u;
    {
        const bool branch_taken_0x223850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223850u;
        // 0x223854: 0xc6610020  lwc1        $f1, 0x20($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223850) {
            ctx->pc = 0x22385Cu;
            goto label_22385c;
        }
    }
    ctx->pc = 0x223858u;
label_223858:
    // 0x223858: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x223858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22385c:
    // 0x22385c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22385Cu;
    {
        const bool branch_taken_0x22385c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x223860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22385Cu;
        // 0x223860: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22385c) {
            ctx->pc = 0x223878u;
            goto label_223878;
        }
    }
    ctx->pc = 0x223864u;
    // 0x223864: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x223864u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223868: 0x0  nop
    ctx->pc = 0x223868u;
    // NOP
    // 0x22386c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22386cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223870: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223870u;
    {
        const bool branch_taken_0x223870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223870u;
        // 0x223874: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223870) {
            ctx->pc = 0x223894u;
            goto label_223894;
        }
    }
    ctx->pc = 0x223878u;
label_223878:
    // 0x223878: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x223878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x22387c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223884: 0x0  nop
    ctx->pc = 0x223884u;
    // NOP
    // 0x223888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22388c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22388cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x223890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223894:
    // 0x223894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22389c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x22389Cu;
    SET_GPR_U32(ctx, 31, 0x2238A4u);
    ctx->pc = 0x2238A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22389Cu;
    // 0x2238a0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x22389Cu, 0x2238A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238A4u;
label_2238a4:
    // 0x2238a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2238a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2238a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2238a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2238ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2238acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2238b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2238b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2238b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2238b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2238B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238B8u;
        // 0x2238bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2238B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2238C0u;
}
