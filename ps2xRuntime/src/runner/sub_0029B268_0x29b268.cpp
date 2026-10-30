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

// Function: sub_0029B268
// Address: 0x29b268 - 0x29b2b8
void sub_0029B268_0x29b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B268_0x29b268");
#endif

    switch (ctx->pc) {
        case 0x29b284u: goto label_29b284;
        case 0x29b2a0u: goto label_29b2a0;
        default: break;
    }

    ctx->pc = 0x29b268u;

    // 0x29b268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b26c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29b270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b27c: 0xc0a6c8e  jal         func_29B238
    ctx->pc = 0x29B27Cu;
    SET_GPR_U32(ctx, 31, 0x29B284u);
    ctx->pc = 0x29B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B27Cu;
    // 0x29b280: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B238u, 0x29B27Cu, 0x29B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B284u;
label_29b284:
    // 0x29b284: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x29b284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29b288: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B288u;
    {
        const bool branch_taken_0x29b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b288) {
            ctx->pc = 0x29B28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B288u;
            // 0x29b28c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B298u;
            goto label_29b298;
        }
    }
    ctx->pc = 0x29B290u;
    // 0x29b290: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B290u;
    {
        const bool branch_taken_0x29b290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B290u;
        // 0x29b294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b290) {
            ctx->pc = 0x29B2A0u;
            goto label_29b2a0;
        }
    }
    ctx->pc = 0x29B298u;
label_29b298:
    // 0x29b298: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B298u;
    SET_GPR_U32(ctx, 31, 0x29B2A0u);
    ctx->pc = 0x29B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B298u;
    // 0x29b29c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B298u, 0x29B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2A0u;
label_29b2a0:
    // 0x29b2a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29b2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29B2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2ACu;
        // 0x29b2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B2B4u;
    // 0x29b2b4: 0x0  nop
    ctx->pc = 0x29b2b4u;
    // NOP
    ctx->pc = 0x29b2b8u;
}
