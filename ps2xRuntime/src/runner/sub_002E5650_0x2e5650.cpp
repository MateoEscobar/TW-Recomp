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

// Function: sub_002E5650
// Address: 0x2e5650 - 0x2e56f0
void sub_002E5650_0x2e5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5650_0x2e5650");
#endif

    switch (ctx->pc) {
        case 0x2e5684u: goto label_2e5684;
        case 0x2e568cu: goto label_2e568c;
        case 0x2e569cu: goto label_2e569c;
        case 0x2e56a4u: goto label_2e56a4;
        case 0x2e56c4u: goto label_2e56c4;
        case 0x2e56d0u: goto label_2e56d0;
        default: break;
    }

    ctx->pc = 0x2e5650u;

    // 0x2e5650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e5654: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5658: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e565c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5664: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5668: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e5668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e566c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e566cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5670: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e5670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e5674: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e5674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e5678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e567c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E567Cu;
    SET_GPR_U32(ctx, 31, 0x2E5684u);
    ctx->pc = 0x2E5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E567Cu;
    // 0x2e5680: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E567Cu, 0x2E5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5684u;
label_2e5684:
    // 0x2e5684: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E5684u;
    SET_GPR_U32(ctx, 31, 0x2E568Cu);
    ctx->pc = 0x2E5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5684u;
    // 0x2e5688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E5684u, 0x2E568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E568Cu;
label_2e568c:
    // 0x2e568c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E568Cu;
    {
        const bool branch_taken_0x2e568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E568Cu;
        // 0x2e5690: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e568c) {
            ctx->pc = 0x2E56D4u;
            goto label_2e56d4;
        }
    }
    ctx->pc = 0x2E5694u;
    // 0x2e5694: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E5694u;
    SET_GPR_U32(ctx, 31, 0x2E569Cu);
    ctx->pc = 0x2E5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5694u;
    // 0x2e5698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E5694u, 0x2E569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E569Cu;
label_2e569c:
    // 0x2e569c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E569Cu;
    SET_GPR_U32(ctx, 31, 0x2E56A4u);
    ctx->pc = 0x2E56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E569Cu;
    // 0x2e56a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E569Cu, 0x2E56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56A4u;
label_2e56a4:
    // 0x2e56a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e56a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56a8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E56A8u;
    {
        const bool branch_taken_0x2e56a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56A8u;
        // 0x2e56ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56a8) {
            ctx->pc = 0x2E56C4u;
            goto label_2e56c4;
        }
    }
    ctx->pc = 0x2E56B0u;
    // 0x2e56b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e56b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56b4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e56b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e56b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56bc: 0xc0b95bc  jal         func_2E56F0
    ctx->pc = 0x2E56BCu;
    SET_GPR_U32(ctx, 31, 0x2E56C4u);
    ctx->pc = 0x2E56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56BCu;
    // 0x2e56c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E56F0u, 0x2E56BCu, 0x2E56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56C4u;
label_2e56c4:
    // 0x2e56c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56c8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E56C8u;
    SET_GPR_U32(ctx, 31, 0x2E56D0u);
    ctx->pc = 0x2E56CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56C8u;
    // 0x2e56cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E56C8u, 0x2E56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56D0u;
label_2e56d0:
    // 0x2e56d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e56d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e56d4:
    // 0x2e56d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e56d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e56d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e56d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e56dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e56dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e56e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e56e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e56e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e56e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e56e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E56E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56E8u;
        // 0x2e56ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E56E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E56F0u;
}
