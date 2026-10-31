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

// Function: sub_001D7350
// Address: 0x1d7350 - 0x1d73b0
void sub_001D7350_0x1d7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7350_0x1d7350");
#endif

    switch (ctx->pc) {
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7398u: goto label_1d7398;
        default: break;
    }

    ctx->pc = 0x1d7350u;

    // 0x1d7350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7358: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1d7358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d735c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7360: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d7360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d7364: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d7364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7368: 0xc07597a  jal         func_1D65E8
    ctx->pc = 0x1D7368u;
    SET_GPR_U32(ctx, 31, 0x1D7370u);
    ctx->pc = 0x1D736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7368u;
    // 0x1d736c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65E8u, 0x1D7368u, 0x1D7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7370u;
label_1d7370:
    // 0x1d7370: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x1d7370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1d7374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d737c: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x1D737Cu;
    SET_GPR_U32(ctx, 31, 0x1D7384u);
    ctx->pc = 0x1D7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D737Cu;
    // 0x1d7380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1D737Cu, 0x1D7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7384u;
label_1d7384:
    // 0x1d7384: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1d7384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1d7388: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d738c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d738cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7390: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x1D7390u;
    SET_GPR_U32(ctx, 31, 0x1D7398u);
    ctx->pc = 0x1D7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7390u;
    // 0x1d7394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1D7390u, 0x1D7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7398u;
label_1d7398:
    // 0x1d7398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d739c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d739cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d73a0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1d73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d73a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D73A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73A4u;
        // 0x1d73a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D73ACu;
    // 0x1d73ac: 0x0  nop
    ctx->pc = 0x1d73acu;
    // NOP
    ctx->pc = 0x1d73b0u;
}
