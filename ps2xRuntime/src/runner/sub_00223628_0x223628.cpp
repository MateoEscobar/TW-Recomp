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

// Function: sub_00223628
// Address: 0x223628 - 0x2236c8
void sub_00223628_0x223628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223628_0x223628");
#endif

    switch (ctx->pc) {
        case 0x223644u: goto label_223644;
        case 0x223658u: goto label_223658;
        default: break;
    }

    ctx->pc = 0x223628u;

    // 0x223628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22362c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x223630: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x223630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x223634: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x223634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x223638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22363c: 0xc088ade  jal         func_222B78
    ctx->pc = 0x22363Cu;
    SET_GPR_U32(ctx, 31, 0x223644u);
    ctx->pc = 0x223640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22363Cu;
    // 0x223640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x22363Cu, 0x223644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223644u;
label_223644:
    // 0x223644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x223644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22364c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x223650: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x223650u;
    SET_GPR_U32(ctx, 31, 0x223658u);
    ctx->pc = 0x223654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223650u;
    // 0x223654: 0x8c510ac8  lw          $s1, 0xAC8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x223650u, 0x223658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223658u;
label_223658:
    // 0x223658: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x223658u;
    {
        const bool branch_taken_0x223658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223658) {
            ctx->pc = 0x22365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223658u;
            // 0x22365c: 0xc6410008  lwc1        $f1, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x223664u;
            goto label_223664;
        }
    }
    ctx->pc = 0x223660u;
    // 0x223660: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x223660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_223664:
    // 0x223664: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x223664u;
    {
        const bool branch_taken_0x223664 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x223668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223664u;
        // 0x223668: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223664) {
            ctx->pc = 0x223680u;
            goto label_223680;
        }
    }
    ctx->pc = 0x22366Cu;
    // 0x22366c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x22366cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223670: 0x0  nop
    ctx->pc = 0x223670u;
    // NOP
    // 0x223674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223678u;
    {
        const bool branch_taken_0x223678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223678u;
        // 0x22367c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223678) {
            ctx->pc = 0x22369Cu;
            goto label_22369c;
        }
    }
    ctx->pc = 0x223680u;
label_223680:
    // 0x223680: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x223680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x223684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x223684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22368c: 0x0  nop
    ctx->pc = 0x22368cu;
    // NOP
    // 0x223690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223694: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x223694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x223698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22369c:
    // 0x22369c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22369cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2236a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2236a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2236a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2236a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2236a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2236a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2236acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2236b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2236b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2236b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2236b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2236b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2236b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2236bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2236bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2236c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2236C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2236C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236C0u;
        // 0x2236c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2236C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2236C8u;
}
