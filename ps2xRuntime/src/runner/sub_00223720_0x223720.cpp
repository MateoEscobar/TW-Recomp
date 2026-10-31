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

// Function: sub_00223720
// Address: 0x223720 - 0x223790
void sub_00223720_0x223720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223720_0x223720");
#endif

    switch (ctx->pc) {
        case 0x223738u: goto label_223738;
        case 0x223748u: goto label_223748;
        default: break;
    }

    ctx->pc = 0x223720u;

    // 0x223720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223724: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22372c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223730: 0xc088ade  jal         func_222B78
    ctx->pc = 0x223730u;
    SET_GPR_U32(ctx, 31, 0x223738u);
    ctx->pc = 0x223734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223730u;
    // 0x223734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x223730u, 0x223738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223738u;
label_223738:
    // 0x223738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x223738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22373c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223740: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x223740u;
    SET_GPR_U32(ctx, 31, 0x223748u);
    ctx->pc = 0x223744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223740u;
    // 0x223744: 0x86300030  lh          $s0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x223740u, 0x223748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223748u;
label_223748:
    // 0x223748: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223748u;
    {
        const bool branch_taken_0x223748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223748u;
        // 0x22374c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223748) {
            ctx->pc = 0x22377Cu;
            goto label_22377c;
        }
    }
    ctx->pc = 0x223750u;
    // 0x223750: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x223750u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223754: 0x0  nop
    ctx->pc = 0x223754u;
    // NOP
    // 0x223758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22375c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x22375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223764: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x223764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22376c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22376cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x223770: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223774: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x223774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x223778: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22377c:
    // 0x22377c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22377cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223780: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223788: 0x3e00008  jr          $ra
    ctx->pc = 0x223788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223788u;
        // 0x22378c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223790u;
}
