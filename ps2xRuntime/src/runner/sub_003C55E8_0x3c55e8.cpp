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

// Function: sub_003C55E8
// Address: 0x3c55e8 - 0x3c56a0
void sub_003C55E8_0x3c55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C55E8_0x3c55e8");
#endif

    switch (ctx->pc) {
        case 0x3c5624u: goto label_3c5624;
        case 0x3c5648u: goto label_3c5648;
        case 0x3c5660u: goto label_3c5660;
        case 0x3c566cu: goto label_3c566c;
        default: break;
    }

    ctx->pc = 0x3c55e8u;

    // 0x3c55e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c55ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c55f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c55f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c55f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c55f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c55f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c55fc: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x3C55FCu;
    {
        const bool branch_taken_0x3c55fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55FCu;
        // 0x3c5600: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c55fc) {
            ctx->pc = 0x3C5680u;
            goto label_3c5680;
        }
    }
    ctx->pc = 0x3C5604u;
    // 0x3c5604: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3c5604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3c5608: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c5608u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c560c: 0x26302f28  addiu       $s0, $s1, 0x2F28
    ctx->pc = 0x3c560cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12072));
    // 0x3c5610: 0x250855c8  addiu       $t0, $t0, 0x55C8
    ctx->pc = 0x3c5610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21960));
    // 0x3c5614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c5614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5618: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x3c5618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x3c561c: 0xc10cea2  jal         func_433A88
    ctx->pc = 0x3C561Cu;
    SET_GPR_U32(ctx, 31, 0x3C5624u);
    ctx->pc = 0x3C5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C561Cu;
    // 0x3c5620: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A88u, 0x3C561Cu, 0x3C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5624u;
label_3c5624:
    // 0x3c5624: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5624u;
    {
        const bool branch_taken_0x3c5624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5624u;
        // 0x3c5628: 0x501023  subu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5624) {
            ctx->pc = 0x3C5650u;
            goto label_3c5650;
        }
    }
    ctx->pc = 0x3C562Cu;
    // 0x3c562c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3c562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3c5630: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3c5630u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3c5634: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C5634u;
    {
        const bool branch_taken_0x3c5634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5634) {
            ctx->pc = 0x3C5638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5634u;
            // 0x3c5638: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C563Cu;
            goto label_3c563c;
        }
    }
    ctx->pc = 0x3C563Cu;
label_3c563c:
    // 0x3c563c: 0x1012  mflo        $v0
    ctx->pc = 0x3c563cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3c5640: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C5640u;
    {
        const bool branch_taken_0x3c5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5640u;
        // 0x3c5644: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5640) {
            ctx->pc = 0x3C5688u;
            goto label_3c5688;
        }
    }
    ctx->pc = 0x3C5648u;
label_3c5648:
    // 0x3c5648: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C5648u;
    {
        const bool branch_taken_0x3c5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5648u;
        // 0x3c564c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5648) {
            ctx->pc = 0x3C5684u;
            goto label_3c5684;
        }
    }
    ctx->pc = 0x3C5650u;
label_3c5650:
    // 0x3c5650: 0x8e222f28  lw          $v0, 0x2F28($s1)
    ctx->pc = 0x3c5650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12072)));
    // 0x3c5654: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5654u;
    {
        const bool branch_taken_0x3c5654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5654u;
        // 0x3c5658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5654) {
            ctx->pc = 0x3C5680u;
            goto label_3c5680;
        }
    }
    ctx->pc = 0x3C565Cu;
    // 0x3c565c: 0x0  nop
    ctx->pc = 0x3c565cu;
    // NOP
label_3c5660:
    // 0x3c5660: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c5664: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x3C5664u;
    SET_GPR_U32(ctx, 31, 0x3C566Cu);
    ctx->pc = 0x3C5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5664u;
    // 0x3c5668: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3C5664u, 0x3C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C566Cu;
label_3c566c:
    // 0x3c566c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3C566Cu;
    {
        const bool branch_taken_0x3c566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C566Cu;
        // 0x3c5670: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c566c) {
            ctx->pc = 0x3C5648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5648;
        }
    }
    ctx->pc = 0x3C5674u;
    // 0x3c5674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c5678: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C5678u;
    {
        const bool branch_taken_0x3c5678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5678u;
        // 0x3c567c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5678) {
            ctx->pc = 0x3C5660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5660;
        }
    }
    ctx->pc = 0x3C5680u;
label_3c5680:
    // 0x3c5680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c5684:
    // 0x3c5684: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c5684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5688:
    // 0x3c5688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c568c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5694: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5694u;
        // 0x3c5698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C569Cu;
    // 0x3c569c: 0x0  nop
    ctx->pc = 0x3c569cu;
    // NOP
    ctx->pc = 0x3c56a0u;
}
