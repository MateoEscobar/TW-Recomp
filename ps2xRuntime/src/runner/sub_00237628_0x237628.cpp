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

// Function: sub_00237628
// Address: 0x237628 - 0x2376a0
void sub_00237628_0x237628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237628_0x237628");
#endif

    switch (ctx->pc) {
        case 0x237648u: goto label_237648;
        case 0x237650u: goto label_237650;
        case 0x23766cu: goto label_23766c;
        case 0x23767cu: goto label_23767c;
        case 0x237688u: goto label_237688;
        default: break;
    }

    ctx->pc = 0x237628u;

    // 0x237628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23762c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x237630: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237638: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x237638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23763c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237640: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237640u;
    SET_GPR_U32(ctx, 31, 0x237648u);
    ctx->pc = 0x237644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237640u;
    // 0x237644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237640u, 0x237648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237648u;
label_237648:
    // 0x237648: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237648u;
    SET_GPR_U32(ctx, 31, 0x237650u);
    ctx->pc = 0x23764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237648u;
    // 0x23764c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237648u, 0x237650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237650u;
label_237650:
    // 0x237650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237654: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x237654u;
    {
        const bool branch_taken_0x237654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237654) {
            ctx->pc = 0x237688u;
            goto label_237688;
        }
    }
    ctx->pc = 0x23765Cu;
    // 0x23765c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23765Cu;
    {
        const bool branch_taken_0x23765c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23765c) {
            ctx->pc = 0x237674u;
            goto label_237674;
        }
    }
    ctx->pc = 0x237664u;
    // 0x237664: 0xc08be9e  jal         func_22FA78
    ctx->pc = 0x237664u;
    SET_GPR_U32(ctx, 31, 0x23766Cu);
    ctx->pc = 0x237668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237664u;
    // 0x237668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA78u, 0x237664u, 0x23766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23766Cu;
label_23766c:
    // 0x23766c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23766Cu;
    {
        const bool branch_taken_0x23766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23766Cu;
        // 0x237670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23766c) {
            ctx->pc = 0x237680u;
            goto label_237680;
        }
    }
    ctx->pc = 0x237674u;
label_237674:
    // 0x237674: 0xc08bf00  jal         func_22FC00
    ctx->pc = 0x237674u;
    SET_GPR_U32(ctx, 31, 0x23767Cu);
    ctx->pc = 0x237678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237674u;
    // 0x237678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC00u, 0x237674u, 0x23767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23767Cu;
label_23767c:
    // 0x23767c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237680:
    // 0x237680: 0xc089974  jal         func_2265D0
    ctx->pc = 0x237680u;
    SET_GPR_U32(ctx, 31, 0x237688u);
    ctx->pc = 0x237684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237680u;
    // 0x237684: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x237680u, 0x237688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237688u;
label_237688:
    // 0x237688: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x237688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23768c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237694: 0x3e00008  jr          $ra
    ctx->pc = 0x237694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237694u;
        // 0x237698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23769Cu;
    // 0x23769c: 0x0  nop
    ctx->pc = 0x23769cu;
    // NOP
    ctx->pc = 0x2376a0u;
}
