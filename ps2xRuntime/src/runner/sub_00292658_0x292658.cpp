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

// Function: sub_00292658
// Address: 0x292658 - 0x2926a8
void sub_00292658_0x292658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292658_0x292658");
#endif

    switch (ctx->pc) {
        case 0x29266cu: goto label_29266c;
        case 0x292674u: goto label_292674;
        case 0x292684u: goto label_292684;
        case 0x29269cu: goto label_29269c;
        default: break;
    }

    ctx->pc = 0x292658u;

    // 0x292658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29265c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292664: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292664u;
    SET_GPR_U32(ctx, 31, 0x29266Cu);
    ctx->pc = 0x292668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292664u;
    // 0x292668: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292664u, 0x29266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29266Cu;
label_29266c:
    // 0x29266c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x29266Cu;
    SET_GPR_U32(ctx, 31, 0x292674u);
    ctx->pc = 0x292670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29266Cu;
    // 0x292670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x29266Cu, 0x292674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292674u;
label_292674:
    // 0x292674: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x292674u;
    {
        const bool branch_taken_0x292674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292674u;
        // 0x292678: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292674) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x29267Cu;
    // 0x29267c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29267Cu;
    SET_GPR_U32(ctx, 31, 0x292684u);
    ctx->pc = 0x292680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29267Cu;
    // 0x292680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29267Cu, 0x292684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292684u;
label_292684:
    // 0x292684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292688: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29268c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29268Cu;
    {
        const bool branch_taken_0x29268c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x292690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29268Cu;
        // 0x292690: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29268c) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x292694u;
    // 0x292694: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x292694u;
    SET_GPR_U32(ctx, 31, 0x29269Cu);
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x292694u, 0x29269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29269Cu;
label_29269c:
    // 0x29269c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29269cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2926a0:
    // 0x2926a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2926A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2926A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A0u;
        // 0x2926a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2926A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2926A8u;
}
