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

// Function: sub_0042A820
// Address: 0x42a820 - 0x42a930
void sub_0042A820_0x42a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A820_0x42a820");
#endif

    switch (ctx->pc) {
        case 0x42a850u: goto label_42a850;
        case 0x42a868u: goto label_42a868;
        case 0x42a888u: goto label_42a888;
        case 0x42a8a0u: goto label_42a8a0;
        case 0x42a8c8u: goto label_42a8c8;
        case 0x42a8d0u: goto label_42a8d0;
        case 0x42a8dcu: goto label_42a8dc;
        default: break;
    }

    ctx->pc = 0x42a820u;

    // 0x42a820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x42a824: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x42a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x42a828: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x42a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x42a82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42a830: 0x2450d810  addiu       $s0, $v0, -0x27F0
    ctx->pc = 0x42a830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x42a834: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x42a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x42a838: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42a838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a83c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x42a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x42a840: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42a840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42A844u;
    {
        const bool branch_taken_0x42a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A844u;
        // 0x42a848: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a844) {
            ctx->pc = 0x42A854u;
            goto label_42a854;
        }
    }
    ctx->pc = 0x42A84Cu;
    // 0x42a84c: 0x0  nop
    ctx->pc = 0x42a84cu;
    // NOP
label_42a850:
    // 0x42a850: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42a850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42a854:
    // 0x42a854: 0x2a510008  slti        $s1, $s2, 0x8
    ctx->pc = 0x42a854u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x42a858: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42A858u;
    {
        const bool branch_taken_0x42a858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A858u;
        // 0x42a85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a858) {
            ctx->pc = 0x42A874u;
            goto label_42a874;
        }
    }
    ctx->pc = 0x42A860u;
    // 0x42a860: 0xc051282  jal         func_144A08
    ctx->pc = 0x42A860u;
    SET_GPR_U32(ctx, 31, 0x42A868u);
    ctx->pc = 0x42A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A860u;
    // 0x42a864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x42A860u, 0x42A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A868u;
label_42a868:
    // 0x42a868: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42A868u;
    {
        const bool branch_taken_0x42a868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a868) {
            ctx->pc = 0x42A86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A868u;
            // 0x42a86c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a850;
        }
    }
    ctx->pc = 0x42A870u;
    // 0x42a870: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x42a870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a874:
    // 0x42a874: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x42A874u;
    {
        const bool branch_taken_0x42a874 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A874u;
        // 0x42a878: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a874) {
            ctx->pc = 0x42A8ECu;
            goto label_42a8ec;
        }
    }
    ctx->pc = 0x42A87Cu;
    // 0x42a87c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x42a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x42a880: 0xc072c04  jal         func_1CB010
    ctx->pc = 0x42A880u;
    SET_GPR_U32(ctx, 31, 0x42A888u);
    ctx->pc = 0x42A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A880u;
    // 0x42a884: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x42A880u, 0x42A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A888u;
label_42a888:
    // 0x42a888: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42a88c: 0x8c43ecc0  lw          $v1, -0x1340($v0)
    ctx->pc = 0x42a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6FECC0u));
    // 0x42a890: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42A890u;
    {
        const bool branch_taken_0x42a890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a890) {
            ctx->pc = 0x42A8A0u;
            goto label_42a8a0;
        }
    }
    ctx->pc = 0x42A898u;
    // 0x42a898: 0xc05159c  jal         func_145670
    ctx->pc = 0x42A898u;
    SET_GPR_U32(ctx, 31, 0x42A8A0u);
    ctx->pc = 0x145670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145670u, 0x42A898u, 0x42A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A8A0u;
label_42a8a0:
    // 0x42a8a0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x42A8A0u;
    {
        const bool branch_taken_0x42a8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A8A0u;
        // 0x42a8a4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a8a0) {
            ctx->pc = 0x42A8ECu;
            goto label_42a8ec;
        }
    }
    ctx->pc = 0x42A8A8u;
    // 0x42a8a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x42a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x42a8ac: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x42a8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x42a8b0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x42a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x42a8b4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x42a8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x42a8b8: 0x24520280  addiu       $s2, $v0, 0x280
    ctx->pc = 0x42a8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x42a8bc: 0x3631f7ff  ori         $s1, $s1, 0xF7FF
    ctx->pc = 0x42a8bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)63487);
    // 0x42a8c0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x42a8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42a8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42a8c8:
    // 0x42a8c8: 0xc051282  jal         func_144A08
    ctx->pc = 0x42A8C8u;
    SET_GPR_U32(ctx, 31, 0x42A8D0u);
    ctx->pc = 0x42A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A8C8u;
    // 0x42a8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x42A8C8u, 0x42A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A8D0u;
label_42a8d0:
    // 0x42a8d0: 0x512824  and         $a1, $v0, $s1
    ctx->pc = 0x42a8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x42a8d4: 0xc0513e6  jal         func_144F98
    ctx->pc = 0x42A8D4u;
    SET_GPR_U32(ctx, 31, 0x42A8DCu);
    ctx->pc = 0x42A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A8D4u;
    // 0x42a8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F98u, 0x42A8D4u, 0x42A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A8DCu;
label_42a8dc:
    // 0x42a8dc: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x42a8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x42a8e0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x42a8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x42a8e4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x42A8E4u;
    {
        const bool branch_taken_0x42a8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a8e4) {
            ctx->pc = 0x42A8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A8E4u;
            // 0x42a8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a8c8;
        }
    }
    ctx->pc = 0x42A8ECu;
label_42a8ec:
    // 0x42a8ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42a8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a8f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x42a8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42a8f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42a8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42a8f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42a8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42a8fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x42a8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42a900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a904: 0x3e00008  jr          $ra
    ctx->pc = 0x42A904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A904u;
        // 0x42a908: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A90Cu;
    // 0x42a90c: 0x0  nop
    ctx->pc = 0x42a90cu;
    // NOP
    // 0x42a910: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x42a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x42a914: 0x0  nop
    ctx->pc = 0x42a914u;
    // NOP
    // 0x42a918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x42a918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x42a91c: 0x0  nop
    ctx->pc = 0x42a91cu;
    // NOP
    // 0x42a920: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x42a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x42a924: 0x0  nop
    ctx->pc = 0x42a924u;
    // NOP
    // 0x42a928: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x42a928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42a92c: 0x0  nop
    ctx->pc = 0x42a92cu;
    // NOP
    ctx->pc = 0x42a930u;
}
