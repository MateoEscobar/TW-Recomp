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

// Function: sub_001C48C0
// Address: 0x1c48c0 - 0x1c4960
void sub_001C48C0_0x1c48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48C0_0x1c48c0");
#endif

    switch (ctx->pc) {
        case 0x1c48f4u: goto label_1c48f4;
        case 0x1c4908u: goto label_1c4908;
        case 0x1c4924u: goto label_1c4924;
        case 0x1c4934u: goto label_1c4934;
        case 0x1c4940u: goto label_1c4940;
        default: break;
    }

    ctx->pc = 0x1c48c0u;

    // 0x1c48c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c48c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c48c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c48cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c48ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c48d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c48d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c48d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c48d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c48dc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c48e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c48e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C48E4u;
    {
        const bool branch_taken_0x1c48e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48E4u;
        // 0x1c48e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48e4) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C48ECu;
    // 0x1c48ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C48ECu;
    SET_GPR_U32(ctx, 31, 0x1C48F4u);
    ctx->pc = 0x1C48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48ECu;
    // 0x1c48f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C48ECu, 0x1C48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48F4u;
label_1c48f4:
    // 0x1c48f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C48F4u;
    {
        const bool branch_taken_0x1c48f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48F4u;
        // 0x1c48f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48f4) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C48FCu;
    // 0x1c48fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c48fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4900: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4900u;
    SET_GPR_U32(ctx, 31, 0x1C4908u);
    ctx->pc = 0x1C4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4900u;
    // 0x1c4904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4900u, 0x1C4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4908u;
label_1c4908:
    // 0x1c4908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c490c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4910: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4910u;
    {
        const bool branch_taken_0x1c4910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4910u;
        // 0x1c4914: 0x48180  sll         $s0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4910) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C4918u;
    // 0x1c4918: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c491c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C491Cu;
    SET_GPR_U32(ctx, 31, 0x1C4924u);
    ctx->pc = 0x1C4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C491Cu;
    // 0x1c4920: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C491Cu, 0x1C4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4924u;
label_1c4924:
    // 0x1c4924: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4924u;
    {
        const bool branch_taken_0x1c4924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4924u;
        // 0x1c4928: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4924) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C492Cu;
    // 0x1c492c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C492Cu;
    SET_GPR_U32(ctx, 31, 0x1C4934u);
    ctx->pc = 0x1C4930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C492Cu;
    // 0x1c4930: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C492Cu, 0x1C4934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4934u;
label_1c4934:
    // 0x1c4934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4938: 0xc07a6b0  jal         func_1E9AC0
    ctx->pc = 0x1C4938u;
    SET_GPR_U32(ctx, 31, 0x1C4940u);
    ctx->pc = 0x1C493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4938u;
    // 0x1c493c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x1C4938u, 0x1C4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4940u;
label_1c4940:
    // 0x1c4940: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c4944: 0xac520934  sw          $s2, 0x934($v0)
    ctx->pc = 0x1c4944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2356), GPR_U32(ctx, 18));
label_1c4948:
    // 0x1c4948: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c4948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c494c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c494cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4958: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4958u;
        // 0x1c495c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4960u;
}
