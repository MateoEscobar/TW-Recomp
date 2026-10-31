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

// Function: sub_003A5280
// Address: 0x3a5280 - 0x3a52c8
void sub_003A5280_0x3a5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5280_0x3a5280");
#endif

    switch (ctx->pc) {
        case 0x3a52a0u: goto label_3a52a0;
        default: break;
    }

    ctx->pc = 0x3a5280u;

    // 0x3a5280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5284: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3a5284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3a5288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a5288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a528c: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x3a528cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3a5290: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a5290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a5294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5298: 0xc04808c  jal         func_120230
    ctx->pc = 0x3A5298u;
    SET_GPR_U32(ctx, 31, 0x3A52A0u);
    ctx->pc = 0x3A529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5298u;
    // 0x3a529c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3A5298u, 0x3A52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52A0u;
label_3a52a0:
    // 0x3a52a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3a52a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a52a4: 0x0  nop
    ctx->pc = 0x3a52a4u;
    // NOP
    // 0x3a52a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3A52A8u;
    {
        const bool branch_taken_0x3a52a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52A8u;
        // 0x3a52ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52a8) {
            ctx->pc = 0x3A52B4u;
            goto label_3a52b4;
        }
    }
    ctx->pc = 0x3A52B0u;
    // 0x3a52b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a52b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a52b4:
    // 0x3a52b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a52b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a52b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3a52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a52bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A52BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52BCu;
        // 0x3a52c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A52C4u;
    // 0x3a52c4: 0x0  nop
    ctx->pc = 0x3a52c4u;
    // NOP
    ctx->pc = 0x3a52c8u;
}
