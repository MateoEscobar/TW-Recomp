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

// Function: sub_003257A0
// Address: 0x3257a0 - 0x325800
void sub_003257A0_0x3257a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003257A0_0x3257a0");
#endif

    switch (ctx->pc) {
        case 0x3257b8u: goto label_3257b8;
        case 0x3257d0u: goto label_3257d0;
        case 0x3257dcu: goto label_3257dc;
        case 0x3257ecu: goto label_3257ec;
        default: break;
    }

    ctx->pc = 0x3257a0u;

    // 0x3257a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3257a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3257a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3257a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3257a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3257ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3257acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3257b0: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x3257B0u;
    SET_GPR_U32(ctx, 31, 0x3257B8u);
    ctx->pc = 0x3257B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257B0u;
    // 0x3257b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x3257B0u, 0x3257B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257B8u;
label_3257b8:
    // 0x3257b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3257b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3257bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3257c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3257c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257c8: 0xc0c91b0  jal         func_3246C0
    ctx->pc = 0x3257C8u;
    SET_GPR_U32(ctx, 31, 0x3257D0u);
    ctx->pc = 0x3257CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257C8u;
    // 0x3257cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246C0u, 0x3257C8u, 0x3257D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257D0u;
label_3257d0:
    // 0x3257d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3257d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257d4: 0xc0ca40c  jal         func_329030
    ctx->pc = 0x3257D4u;
    SET_GPR_U32(ctx, 31, 0x3257DCu);
    ctx->pc = 0x3257D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257D4u;
    // 0x3257d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329030u, 0x3257D4u, 0x3257DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257DCu;
label_3257dc:
    // 0x3257dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3257dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3257e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257e4: 0xc0c9598  jal         func_325660
    ctx->pc = 0x3257E4u;
    SET_GPR_U32(ctx, 31, 0x3257ECu);
    ctx->pc = 0x3257E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257E4u;
    // 0x3257e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325660u, 0x3257E4u, 0x3257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257ECu;
label_3257ec:
    // 0x3257ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3257ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3257f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3257f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3257f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3257f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3257f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3257F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3257FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257F8u;
        // 0x3257fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3257F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325800u;
}
