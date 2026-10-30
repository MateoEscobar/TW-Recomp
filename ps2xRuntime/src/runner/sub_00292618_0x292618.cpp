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

// Function: sub_00292618
// Address: 0x292618 - 0x292658
void sub_00292618_0x292618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292618_0x292618");
#endif

    switch (ctx->pc) {
        case 0x29262cu: goto label_29262c;
        case 0x292634u: goto label_292634;
        case 0x292644u: goto label_292644;
        case 0x29264cu: goto label_29264c;
        default: break;
    }

    ctx->pc = 0x292618u;

    // 0x292618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29261c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292624: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292624u;
    SET_GPR_U32(ctx, 31, 0x29262Cu);
    ctx->pc = 0x292628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292624u;
    // 0x292628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292624u, 0x29262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29262Cu;
label_29262c:
    // 0x29262c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x29262Cu;
    SET_GPR_U32(ctx, 31, 0x292634u);
    ctx->pc = 0x292630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29262Cu;
    // 0x292630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x29262Cu, 0x292634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292634u;
label_292634:
    // 0x292634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292634u;
    {
        const bool branch_taken_0x292634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292634u;
        // 0x292638: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292634) {
            ctx->pc = 0x292650u;
            goto label_292650;
        }
    }
    ctx->pc = 0x29263Cu;
    // 0x29263c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29263Cu;
    SET_GPR_U32(ctx, 31, 0x292644u);
    ctx->pc = 0x292640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29263Cu;
    // 0x292640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29263Cu, 0x292644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292644u;
label_292644:
    // 0x292644: 0xc0a3644  jal         func_28D910
    ctx->pc = 0x292644u;
    SET_GPR_U32(ctx, 31, 0x29264Cu);
    ctx->pc = 0x292648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292644u;
    // 0x292648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x292644u, 0x29264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29264Cu;
label_29264c:
    // 0x29264c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292650:
    // 0x292650: 0x3e00008  jr          $ra
    ctx->pc = 0x292650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292650u;
        // 0x292654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292658u;
}
