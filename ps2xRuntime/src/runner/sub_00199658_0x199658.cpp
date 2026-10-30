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

// Function: sub_00199658
// Address: 0x199658 - 0x1996b0
void sub_00199658_0x199658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199658_0x199658");
#endif

    switch (ctx->pc) {
        case 0x199670u: goto label_199670;
        case 0x199688u: goto label_199688;
        default: break;
    }

    ctx->pc = 0x199658u;

    // 0x199658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19965c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199668: 0xc066e5a  jal         func_19B968
    ctx->pc = 0x199668u;
    SET_GPR_U32(ctx, 31, 0x199670u);
    ctx->pc = 0x19966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199668u;
    // 0x19966c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B968u, 0x199668u, 0x199670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199670u;
label_199670:
    // 0x199670: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x199670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199678: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x199678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19967c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19967cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199680: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x199680u;
    SET_GPR_U32(ctx, 31, 0x199688u);
    ctx->pc = 0x199684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199680u;
    // 0x199684: 0xe60100e4  swc1        $f1, 0xE4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x199680u, 0x199688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199688u;
label_199688:
    // 0x199688: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19968c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19968cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199690: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x199690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199694: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x199694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x199698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19969c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19969cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1996a0: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1996a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1996a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1996a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1996a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1996A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996A8u;
        // 0x1996ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1996A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1996B0u;
}
