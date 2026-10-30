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

// Function: sub_00484448
// Address: 0x484448 - 0x4844b0
void sub_00484448_0x484448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484448_0x484448");
#endif

    switch (ctx->pc) {
        case 0x484480u: goto label_484480;
        default: break;
    }

    ctx->pc = 0x484448u;

    // 0x484448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x484448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48444c: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x48444cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
    // 0x484450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x484454: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x484454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x484458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x484458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48445c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x48445cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x484460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x484464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484468: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x484468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x48446c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x484470: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x484470u;
    {
        const bool branch_taken_0x484470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x484470) {
            ctx->pc = 0x48448Cu;
            goto label_48448c;
        }
    }
    ctx->pc = 0x484478u;
    // 0x484478: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x484478u;
    SET_GPR_U32(ctx, 31, 0x484480u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x484478u, 0x484480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484480u;
label_484480:
    // 0x484480: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x484480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
    // 0x484484: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x484484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x484488: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x484488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_48448c:
    // 0x48448c: 0x8f838964  lw          $v1, -0x769C($gp)
    ctx->pc = 0x48448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936932)));
    // 0x484490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x484490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484494: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x484494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x484498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x484498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48449c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48449cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4844a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4844a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4844a4: 0xaf838964  sw          $v1, -0x769C($gp)
    ctx->pc = 0x4844a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), GPR_U32(ctx, 3));
    // 0x4844a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4844A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4844ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4844A8u;
        // 0x4844ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4844A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4844B0u;
}
