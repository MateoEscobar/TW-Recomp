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

// Function: sub_00222FF8
// Address: 0x222ff8 - 0x223068
void sub_00222FF8_0x222ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222FF8_0x222ff8");
#endif

    switch (ctx->pc) {
        case 0x223020u: goto label_223020;
        case 0x22302cu: goto label_22302c;
        default: break;
    }

    ctx->pc = 0x222ff8u;

    // 0x222ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222ffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223008: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x223008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22300c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x223010: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x223010u;
    {
        const bool branch_taken_0x223010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223010) {
            ctx->pc = 0x223014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223010u;
            // 0x223014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223054u;
            goto label_223054;
        }
    }
    ctx->pc = 0x223018u;
    // 0x223018: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x223018u;
    SET_GPR_U32(ctx, 31, 0x223020u);
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x223018u, 0x223020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223020u;
label_223020:
    // 0x223020: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x223020u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x223024: 0xc088ade  jal         func_222B78
    ctx->pc = 0x223024u;
    SET_GPR_U32(ctx, 31, 0x22302Cu);
    ctx->pc = 0x223028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223024u;
    // 0x223028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x223024u, 0x22302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22302Cu;
label_22302c:
    // 0x22302c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223030: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x223034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x223034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223038: 0x0  nop
    ctx->pc = 0x223038u;
    // NOP
    // 0x22303c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22303cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223040: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x223040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223044: 0x0  nop
    ctx->pc = 0x223044u;
    // NOP
    // 0x223048: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x223048u;
    {
        const bool branch_taken_0x223048 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223048u;
        // 0x22304c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223048) {
            ctx->pc = 0x223054u;
            goto label_223054;
        }
    }
    ctx->pc = 0x223050u;
    // 0x223050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223054:
    // 0x223054: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22305c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x22305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223060: 0x3e00008  jr          $ra
    ctx->pc = 0x223060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223060u;
        // 0x223064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223068u;
}
