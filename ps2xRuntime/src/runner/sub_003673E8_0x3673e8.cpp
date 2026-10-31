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

// Function: sub_003673E8
// Address: 0x3673e8 - 0x367448
void sub_003673E8_0x3673e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003673E8_0x3673e8");
#endif

    switch (ctx->pc) {
        case 0x367400u: goto label_367400;
        case 0x36740cu: goto label_36740c;
        case 0x367424u: goto label_367424;
        case 0x367430u: goto label_367430;
        default: break;
    }

    ctx->pc = 0x3673e8u;

    // 0x3673e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3673e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3673ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3673ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3673f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3673f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3673f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3673f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3673f8: 0xc047862  jal         func_11E188
    ctx->pc = 0x3673F8u;
    SET_GPR_U32(ctx, 31, 0x367400u);
    ctx->pc = 0x3673FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3673F8u;
    // 0x3673fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E188u, 0x3673F8u, 0x367400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367400u;
label_367400:
    // 0x367400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367404: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x367404u;
    SET_GPR_U32(ctx, 31, 0x36740Cu);
    ctx->pc = 0x367408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367404u;
    // 0x367408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x367404u, 0x36740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36740Cu;
label_36740c:
    // 0x36740c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36740Cu;
    {
        const bool branch_taken_0x36740c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x367410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36740Cu;
        // 0x367410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36740c) {
            ctx->pc = 0x367428u;
            goto label_367428;
        }
    }
    ctx->pc = 0x367414u;
    // 0x367414: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x367414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x367418: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x367418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36741c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36741Cu;
    SET_GPR_U32(ctx, 31, 0x367424u);
    ctx->pc = 0x367420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36741Cu;
    // 0x367420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36741Cu, 0x367424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367424u;
label_367424:
    // 0x367424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_367428:
    // 0x367428: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x367428u;
    SET_GPR_U32(ctx, 31, 0x367430u);
    ctx->pc = 0x36742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367428u;
    // 0x36742c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x367428u, 0x367430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367430u;
label_367430:
    // 0x367430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x367430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36743c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36743cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367440: 0x3e00008  jr          $ra
    ctx->pc = 0x367440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367440u;
        // 0x367444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367448u;
}
