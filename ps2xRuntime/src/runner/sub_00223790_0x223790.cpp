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

// Function: sub_00223790
// Address: 0x223790 - 0x223800
void sub_00223790_0x223790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223790_0x223790");
#endif

    switch (ctx->pc) {
        case 0x2237a8u: goto label_2237a8;
        case 0x2237b8u: goto label_2237b8;
        default: break;
    }

    ctx->pc = 0x223790u;

    // 0x223790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223794: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22379c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2237a0: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2237A0u;
    SET_GPR_U32(ctx, 31, 0x2237A8u);
    ctx->pc = 0x2237A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237A0u;
    // 0x2237a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2237A0u, 0x2237A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237A8u;
label_2237a8:
    // 0x2237a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2237a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2237acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237b0: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x2237B0u;
    SET_GPR_U32(ctx, 31, 0x2237B8u);
    ctx->pc = 0x2237B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237B0u;
    // 0x2237b4: 0x86300034  lh          $s0, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x2237B0u, 0x2237B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237B8u;
label_2237b8:
    // 0x2237b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2237B8u;
    {
        const bool branch_taken_0x2237b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237B8u;
        // 0x2237bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237b8) {
            ctx->pc = 0x2237ECu;
            goto label_2237ec;
        }
    }
    ctx->pc = 0x2237C0u;
    // 0x2237c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2237c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2237c4: 0x0  nop
    ctx->pc = 0x2237c4u;
    // NOP
    // 0x2237c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2237c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2237cc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2237ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2237d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2237d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2237d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2237d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2237d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2237d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2237dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2237dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2237e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2237e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2237e4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2237e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2237e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2237e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2237ec:
    // 0x2237ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2237ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2237f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2237f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2237f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2237f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2237f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2237F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2237FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237F8u;
        // 0x2237fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2237F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223800u;
}
