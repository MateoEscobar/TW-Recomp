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

// Function: sub_003595D0
// Address: 0x3595d0 - 0x359630
void sub_003595D0_0x3595d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003595D0_0x3595d0");
#endif

    switch (ctx->pc) {
        case 0x3595f0u: goto label_3595f0;
        case 0x3595f8u: goto label_3595f8;
        case 0x35960cu: goto label_35960c;
        case 0x359618u: goto label_359618;
        default: break;
    }

    ctx->pc = 0x3595d0u;

    // 0x3595d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3595d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3595d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3595d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3595d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3595d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3595dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3595dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3595e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3595e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3595e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3595e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3595E8u;
    SET_GPR_U32(ctx, 31, 0x3595F0u);
    ctx->pc = 0x3595ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595E8u;
    // 0x3595ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3595E8u, 0x3595F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595F0u;
label_3595f0:
    // 0x3595f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3595F0u;
    SET_GPR_U32(ctx, 31, 0x3595F8u);
    ctx->pc = 0x3595F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3595F0u;
    // 0x3595f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3595F0u, 0x3595F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3595F8u;
label_3595f8:
    // 0x3595f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3595f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3595fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359604: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359604u;
    SET_GPR_U32(ctx, 31, 0x35960Cu);
    ctx->pc = 0x359608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359604u;
    // 0x359608: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359604u, 0x35960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35960Cu;
label_35960c:
    // 0x35960c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35960cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359610: 0xc08dab4  jal         func_236AD0
    ctx->pc = 0x359610u;
    SET_GPR_U32(ctx, 31, 0x359618u);
    ctx->pc = 0x359614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359610u;
    // 0x359614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD0u, 0x359610u, 0x359618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359618u;
label_359618:
    // 0x359618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35961c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35961cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359628: 0x3e00008  jr          $ra
    ctx->pc = 0x359628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359628u;
        // 0x35962c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359630u;
}
