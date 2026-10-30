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

// Function: sub_0046C638
// Address: 0x46c638 - 0x46c6b0
void sub_0046C638_0x46c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C638_0x46c638");
#endif

    switch (ctx->pc) {
        case 0x46c670u: goto label_46c670;
        case 0x46c680u: goto label_46c680;
        default: break;
    }

    ctx->pc = 0x46c638u;

    // 0x46c638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c63c: 0x8f8288d0  lw          $v0, -0x7730($gp)
    ctx->pc = 0x46c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x46c640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46c644: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x46c644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x46c648: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x46c648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x46c64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46c650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c654: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x46c654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    // 0x46c658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46c658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c65c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x46c660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46c664: 0x24a5c958  addiu       $a1, $a1, -0x36A8
    ctx->pc = 0x46c664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953304));
    // 0x46c668: 0xc11f7ce  jal         func_47DF38
    ctx->pc = 0x46C668u;
    SET_GPR_U32(ctx, 31, 0x46C670u);
    ctx->pc = 0x46C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C668u;
    // 0x46c66c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DF38u, 0x46C668u, 0x46C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C670u;
label_46c670:
    // 0x46c670: 0x8f8388d0  lw          $v1, -0x7730($gp)
    ctx->pc = 0x46c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x46c674: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x46c678: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x46C678u;
    SET_GPR_U32(ctx, 31, 0x46C680u);
    ctx->pc = 0x46C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C678u;
    // 0x46c67c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46C678u, 0x46C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C680u;
label_46c680:
    // 0x46c680: 0x8f8488d4  lw          $a0, -0x772C($gp)
    ctx->pc = 0x46c680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936788)));
    // 0x46c684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46c684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c688: 0x8f8388d0  lw          $v1, -0x7730($gp)
    ctx->pc = 0x46c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x46c68c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x46c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x46c690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46c690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c694: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x46c698: 0xaf8488d4  sw          $a0, -0x772C($gp)
    ctx->pc = 0x46c698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936788), GPR_U32(ctx, 4));
    // 0x46c69c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46c69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c6a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x46c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x46c6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x46C6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C6A8u;
        // 0x46c6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C6B0u;
}
