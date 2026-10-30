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

// Function: sub_002E48E8
// Address: 0x2e48e8 - 0x2e4980
void sub_002E48E8_0x2e48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E48E8_0x2e48e8");
#endif

    switch (ctx->pc) {
        case 0x2e491cu: goto label_2e491c;
        case 0x2e4924u: goto label_2e4924;
        case 0x2e492cu: goto label_2e492c;
        case 0x2e4950u: goto label_2e4950;
        case 0x2e495cu: goto label_2e495c;
        default: break;
    }

    ctx->pc = 0x2e48e8u;

    // 0x2e48e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e48e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e48ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e48f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e48f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e48f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e48f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e48fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e48fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4900: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e4900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e4904: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e4904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4908: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e490c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e4910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4914: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E4914u;
    SET_GPR_U32(ctx, 31, 0x2E491Cu);
    ctx->pc = 0x2E4918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4914u;
    // 0x2e4918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E4914u, 0x2E491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E491Cu;
label_2e491c:
    // 0x2e491c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E491Cu;
    SET_GPR_U32(ctx, 31, 0x2E4924u);
    ctx->pc = 0x2E4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E491Cu;
    // 0x2e4920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E491Cu, 0x2E4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4924u;
label_2e4924:
    // 0x2e4924: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E4924u;
    SET_GPR_U32(ctx, 31, 0x2E492Cu);
    ctx->pc = 0x2E4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4924u;
    // 0x2e4928: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E4924u, 0x2E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E492Cu;
label_2e492c:
    // 0x2e492c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e492cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4930: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4930u;
    {
        const bool branch_taken_0x2e4930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4930u;
        // 0x2e4934: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4930) {
            ctx->pc = 0x2E4950u;
            goto label_2e4950;
        }
    }
    ctx->pc = 0x2E4938u;
    // 0x2e4938: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e4938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e493c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e493cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4940: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2e4940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4948: 0xc0b9260  jal         func_2E4980
    ctx->pc = 0x2E4948u;
    SET_GPR_U32(ctx, 31, 0x2E4950u);
    ctx->pc = 0x2E494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4948u;
    // 0x2e494c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4980u, 0x2E4948u, 0x2E4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4950u;
label_2e4950:
    // 0x2e4950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4954: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E4954u;
    SET_GPR_U32(ctx, 31, 0x2E495Cu);
    ctx->pc = 0x2E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4954u;
    // 0x2e4958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E4954u, 0x2E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E495Cu;
label_2e495c:
    // 0x2e495c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e495cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4960: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e4960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4964: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e4964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e496c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e496cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4974: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4974u;
        // 0x2e4978: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E497Cu;
    // 0x2e497c: 0x0  nop
    ctx->pc = 0x2e497cu;
    // NOP
    ctx->pc = 0x2e4980u;
}
