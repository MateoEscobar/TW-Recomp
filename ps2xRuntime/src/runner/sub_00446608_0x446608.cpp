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

// Function: sub_00446608
// Address: 0x446608 - 0x446680
void sub_00446608_0x446608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446608_0x446608");
#endif

    switch (ctx->pc) {
        case 0x446608u: goto label_446608;
        case 0x44660cu: goto label_44660c;
        case 0x446610u: goto label_446610;
        case 0x446614u: goto label_446614;
        case 0x446618u: goto label_446618;
        case 0x44661cu: goto label_44661c;
        case 0x446620u: goto label_446620;
        case 0x446624u: goto label_446624;
        case 0x446628u: goto label_446628;
        case 0x44662cu: goto label_44662c;
        case 0x446630u: goto label_446630;
        case 0x446634u: goto label_446634;
        case 0x446638u: goto label_446638;
        case 0x44663cu: goto label_44663c;
        case 0x446640u: goto label_446640;
        case 0x446644u: goto label_446644;
        case 0x446648u: goto label_446648;
        case 0x44664cu: goto label_44664c;
        case 0x446650u: goto label_446650;
        case 0x446654u: goto label_446654;
        case 0x446658u: goto label_446658;
        case 0x44665cu: goto label_44665c;
        case 0x446660u: goto label_446660;
        case 0x446664u: goto label_446664;
        case 0x446668u: goto label_446668;
        case 0x44666cu: goto label_44666c;
        case 0x446670u: goto label_446670;
        case 0x446674u: goto label_446674;
        case 0x446678u: goto label_446678;
        case 0x44667cu: goto label_44667c;
        default: break;
    }

    ctx->pc = 0x446608u;

label_446608:
    // 0x446608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x446608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44660c:
    // 0x44660c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44660cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446610:
    // 0x446610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x446610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_446614:
    // 0x446614: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_446618:
    if (ctx->pc == 0x446618u) {
        ctx->pc = 0x446618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446614u;
        // 0x446618: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44661Cu;
        goto label_44661c;
    }
    ctx->pc = 0x446614u;
    {
        const bool branch_taken_0x446614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446614u;
        // 0x446618: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446614) {
            ctx->pc = 0x44666Cu;
            goto label_44666c;
        }
    }
    ctx->pc = 0x44661Cu;
label_44661c:
    // 0x44661c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x44661cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_446620:
    // 0x446620: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_446624:
    if (ctx->pc == 0x446624u) {
        ctx->pc = 0x446624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446620u;
        // 0x446624: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446628u;
        goto label_446628;
    }
    ctx->pc = 0x446620u;
    {
        const bool branch_taken_0x446620 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x446624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446620u;
        // 0x446624: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446620) {
            ctx->pc = 0x44666Cu;
            goto label_44666c;
        }
    }
    ctx->pc = 0x446628u;
label_446628:
    // 0x446628: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x446628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44662c:
    // 0x44662c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x44662cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_446630:
    // 0x446630: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x446630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_446634:
    // 0x446634: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x446634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_446638:
    // 0x446638: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_44663c:
    if (ctx->pc == 0x44663Cu) {
        ctx->pc = 0x44663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446638u;
        // 0x44663c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446640u;
        goto label_446640;
    }
    ctx->pc = 0x446638u;
    {
        const bool branch_taken_0x446638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446638u;
        // 0x44663c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446638) {
            ctx->pc = 0x446670u;
            goto label_446670;
        }
    }
    ctx->pc = 0x446640u;
label_446640:
    // 0x446640: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x446640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_446644:
    // 0x446644: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x446644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_446648:
    // 0x446648: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x446648u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44664c:
    // 0x44664c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_446650:
    // 0x446650: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x446650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_446654:
    // 0x446654: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x446654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_446658:
    // 0x446658: 0xe0f809  jalr        $a3
label_44665c:
    if (ctx->pc == 0x44665Cu) {
        ctx->pc = 0x44665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446658u;
        // 0x44665c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446660u;
        goto label_446660;
    }
    ctx->pc = 0x446658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x446660u);
        ctx->pc = 0x44665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446658u;
        // 0x44665c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446658u, 0x446660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446660u;
label_446660:
    // 0x446660: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x446660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446664:
    // 0x446664: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x446664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_446668:
    // 0x446668: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x446668u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44666c:
    // 0x44666c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44666cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446670:
    // 0x446670: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x446670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_446674:
    // 0x446674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x446674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_446678:
    // 0x446678: 0x3e00008  jr          $ra
label_44667c:
    if (ctx->pc == 0x44667Cu) {
        ctx->pc = 0x44667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446678u;
        // 0x44667c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446680u;
        goto label_fallthrough_0x446678;
    }
    ctx->pc = 0x446678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446678u;
        // 0x44667c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x446678:
    ctx->pc = 0x446680u;
}
