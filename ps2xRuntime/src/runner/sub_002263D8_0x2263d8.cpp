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

// Function: sub_002263D8
// Address: 0x2263d8 - 0x226448
void sub_002263D8_0x2263d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002263D8_0x2263d8");
#endif

    switch (ctx->pc) {
        case 0x2263f4u: goto label_2263f4;
        case 0x226408u: goto label_226408;
        case 0x226420u: goto label_226420;
        default: break;
    }

    ctx->pc = 0x2263d8u;

    // 0x2263d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2263d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2263dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2263dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2263e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2263e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2263e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2263e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2263e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2263ec: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x2263ECu;
    SET_GPR_U32(ctx, 31, 0x2263F4u);
    ctx->pc = 0x2263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263ECu;
    // 0x2263f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2263ECu, 0x2263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263F4u;
label_2263f4:
    // 0x2263f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2263F4u;
    {
        const bool branch_taken_0x2263f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2263F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263F4u;
        // 0x2263f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263f4) {
            ctx->pc = 0x226428u;
            goto label_226428;
        }
    }
    ctx->pc = 0x2263FCu;
    // 0x2263fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2263fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226400: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x226400u;
    SET_GPR_U32(ctx, 31, 0x226408u);
    ctx->pc = 0x226404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226400u;
    // 0x226404: 0x24050cf0  addiu       $a1, $zero, 0xCF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x226400u, 0x226408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226408u;
label_226408:
    // 0x226408: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226408u;
    {
        const bool branch_taken_0x226408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226408u;
        // 0x22640c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226408) {
            ctx->pc = 0x226428u;
            goto label_226428;
        }
    }
    ctx->pc = 0x226410u;
    // 0x226410: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
    // 0x226414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226418: 0xc089998  jal         func_226660
    ctx->pc = 0x226418u;
    SET_GPR_U32(ctx, 31, 0x226420u);
    ctx->pc = 0x22641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226418u;
    // 0x22641c: 0x34a5e600  ori         $a1, $a1, 0xE600 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58880);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x226418u, 0x226420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226420u;
label_226420:
    // 0x226420: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x226420u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x226424: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226428:
    // 0x226428: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x226428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22642c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22642cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226434: 0x3e00008  jr          $ra
    ctx->pc = 0x226434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226434u;
        // 0x226438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22643Cu;
    // 0x22643c: 0x0  nop
    ctx->pc = 0x22643cu;
    // NOP
    // 0x226440: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x226440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226444: 0x0  nop
    ctx->pc = 0x226444u;
    // NOP
    ctx->pc = 0x226448u;
}
