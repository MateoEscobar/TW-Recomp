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

// Function: sub_002FA4C8
// Address: 0x2fa4c8 - 0x2fa510
void sub_002FA4C8_0x2fa4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA4C8_0x2fa4c8");
#endif

    switch (ctx->pc) {
        case 0x2fa4e8u: goto label_2fa4e8;
        case 0x2fa4fcu: goto label_2fa4fc;
        default: break;
    }

    ctx->pc = 0x2fa4c8u;

    // 0x2fa4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa4d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa4d8: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2fa4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fa4dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fa4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa4e0: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA4E0u;
    SET_GPR_U32(ctx, 31, 0x2FA4E8u);
    ctx->pc = 0x2FA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4E0u;
    // 0x2fa4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA4E0u, 0x2FA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4E8u;
label_2fa4e8:
    // 0x2fa4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa4ec: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA4ECu;
    {
        const bool branch_taken_0x2fa4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa4ec) {
            ctx->pc = 0x2FA4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4ECu;
            // 0x2fa4f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA500u;
            goto label_2fa500;
        }
    }
    ctx->pc = 0x2FA4F4u;
    // 0x2fa4f4: 0xc08a588  jal         func_229620
    ctx->pc = 0x2FA4F4u;
    SET_GPR_U32(ctx, 31, 0x2FA4FCu);
    ctx->pc = 0x2FA4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4F4u;
    // 0x2fa4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x2FA4F4u, 0x2FA4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4FCu;
label_2fa4fc:
    // 0x2fa4fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa500:
    // 0x2fa500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa508: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA508u;
        // 0x2fa50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA510u;
}
