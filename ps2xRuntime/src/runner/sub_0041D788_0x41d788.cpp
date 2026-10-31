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

// Function: sub_0041D788
// Address: 0x41d788 - 0x41d7e0
void sub_0041D788_0x41d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D788_0x41d788");
#endif

    switch (ctx->pc) {
        case 0x41d7c0u: goto label_41d7c0;
        case 0x41d7d4u: goto label_41d7d4;
        default: break;
    }

    ctx->pc = 0x41d788u;

    // 0x41d788: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d78c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d790: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x41d790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d794: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x41d794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x41d798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d79c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x41d79cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41d7a0: 0xac45015c  sw          $a1, 0x15C($v0)
    ctx->pc = 0x41d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 5));
    // 0x41d7a4: 0xac460160  sw          $a2, 0x160($v0)
    ctx->pc = 0x41d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 6));
    // 0x41d7a8: 0xac470164  sw          $a3, 0x164($v0)
    ctx->pc = 0x41d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 7));
    // 0x41d7ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41D7ACu;
    {
        const bool branch_taken_0x41d7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7ACu;
        // 0x41d7b0: 0xac440158  sw          $a0, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d7ac) {
            ctx->pc = 0x41D7C8u;
            goto label_41d7c8;
        }
    }
    ctx->pc = 0x41D7B4u;
    // 0x41d7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d7b8: 0xc13a1c0  jal         func_4E8700
    ctx->pc = 0x41D7B8u;
    SET_GPR_U32(ctx, 31, 0x41D7C0u);
    ctx->pc = 0x41D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D7B8u;
    // 0x41d7bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8700u, 0x41D7B8u, 0x41D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D7C0u;
label_41d7c0:
    // 0x41d7c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x41D7C0u;
    {
        const bool branch_taken_0x41d7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7C0u;
        // 0x41d7c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d7c0) {
            ctx->pc = 0x41D7D8u;
            goto label_41d7d8;
        }
    }
    ctx->pc = 0x41D7C8u;
label_41d7c8:
    // 0x41d7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d7cc: 0xc13a1c0  jal         func_4E8700
    ctx->pc = 0x41D7CCu;
    SET_GPR_U32(ctx, 31, 0x41D7D4u);
    ctx->pc = 0x41D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D7CCu;
    // 0x41d7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8700u, 0x41D7CCu, 0x41D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D7D4u;
label_41d7d4:
    // 0x41d7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d7d8:
    // 0x41d7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7D8u;
        // 0x41d7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D7E0u;
}
