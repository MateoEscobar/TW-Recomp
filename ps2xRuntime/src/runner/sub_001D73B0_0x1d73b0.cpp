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

// Function: sub_001D73B0
// Address: 0x1d73b0 - 0x1d7420
void sub_001D73B0_0x1d73b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D73B0_0x1d73b0");
#endif

    switch (ctx->pc) {
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d7408u: goto label_1d7408;
        default: break;
    }

    ctx->pc = 0x1d73b0u;

    // 0x1d73b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d73b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d73b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d73b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d73b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d73bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d73bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1d73c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d73c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d73c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d73cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d73ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d73d0: 0xc075988  jal         func_1D6620
    ctx->pc = 0x1D73D0u;
    SET_GPR_U32(ctx, 31, 0x1D73D8u);
    ctx->pc = 0x1D73D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73D0u;
    // 0x1d73d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6620u, 0x1D73D0u, 0x1D73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73D8u;
label_1d73d8:
    // 0x1d73d8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x1d73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1d73dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d73dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d73e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73e4: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x1D73E4u;
    SET_GPR_U32(ctx, 31, 0x1D73ECu);
    ctx->pc = 0x1D73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73E4u;
    // 0x1d73e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1D73E4u, 0x1D73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73ECu;
label_1d73ec:
    // 0x1d73ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d73f0: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1d73f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d73f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73fc: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x1d73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    // 0x1d7400: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x1D7400u;
    SET_GPR_U32(ctx, 31, 0x1D7408u);
    ctx->pc = 0x1D7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7400u;
    // 0x1d7404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1D7400u, 0x1D7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7408u;
label_1d7408:
    // 0x1d7408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d7408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d740c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d740cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7414: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1d7414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7418: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7418u;
        // 0x1d741c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7420u;
}
