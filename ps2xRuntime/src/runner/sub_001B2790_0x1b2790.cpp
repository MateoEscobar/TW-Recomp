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

// Function: sub_001B2790
// Address: 0x1b2790 - 0x1b2818
void sub_001B2790_0x1b2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2790_0x1b2790");
#endif

    switch (ctx->pc) {
        case 0x1b27c8u: goto label_1b27c8;
        case 0x1b27e0u: goto label_1b27e0;
        case 0x1b2800u: goto label_1b2800;
        default: break;
    }

    ctx->pc = 0x1b2790u;

    // 0x1b2790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2794: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b2794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b2798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b279c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b27a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b27a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b27a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b27a8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1b27ac: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b27acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1b27b0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b27b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b27b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b27b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b27b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B27B8u;
    {
        const bool branch_taken_0x1b27b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27B8u;
        // 0x1b27bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27b8) {
            ctx->pc = 0x1B27E8u;
            goto label_1b27e8;
        }
    }
    ctx->pc = 0x1B27C0u;
    // 0x1b27c0: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x1B27C0u;
    SET_GPR_U32(ctx, 31, 0x1B27C8u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1B27C0u, 0x1B27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27C8u;
label_1b27c8:
    // 0x1b27c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b27cc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B27CCu;
    {
        const bool branch_taken_0x1b27cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27CCu;
        // 0x1b27d0: 0x24042940  addiu       $a0, $zero, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27cc) {
            ctx->pc = 0x1B27ECu;
            goto label_1b27ec;
        }
    }
    ctx->pc = 0x1B27D4u;
    // 0x1b27d4: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x1b27d8: 0xc071140  jal         func_1C4500
    ctx->pc = 0x1B27D8u;
    SET_GPR_U32(ctx, 31, 0x1B27E0u);
    ctx->pc = 0x1B27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27D8u;
    // 0x1b27dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4500u, 0x1B27D8u, 0x1B27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27E0u;
label_1b27e0:
    // 0x1b27e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B27E0u;
    {
        const bool branch_taken_0x1b27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E0u;
        // 0x1b27e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27e0) {
            ctx->pc = 0x1B2804u;
            goto label_1b2804;
        }
    }
    ctx->pc = 0x1B27E8u;
label_1b27e8:
    // 0x1b27e8: 0x24042940  addiu       $a0, $zero, 0x2940
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
label_1b27ec:
    // 0x1b27ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b27ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27f0: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1b27f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b27f4: 0x248415d0  addiu       $a0, $a0, 0x15D0
    ctx->pc = 0x1b27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5584));
    // 0x1b27f8: 0xc071140  jal         func_1C4500
    ctx->pc = 0x1B27F8u;
    SET_GPR_U32(ctx, 31, 0x1B2800u);
    ctx->pc = 0x1B27FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27F8u;
    // 0x1b27fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4500u, 0x1B27F8u, 0x1B2800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2800u;
label_1b2800:
    // 0x1b2800: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2804:
    // 0x1b2804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b280c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B280Cu;
        // 0x1b2810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2814u;
    // 0x1b2814: 0x0  nop
    ctx->pc = 0x1b2814u;
    // NOP
    ctx->pc = 0x1b2818u;
}
