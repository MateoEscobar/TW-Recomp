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

// Function: sub_0027B548
// Address: 0x27b548 - 0x27b5c0
void sub_0027B548_0x27b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B548_0x27b548");
#endif

    switch (ctx->pc) {
        case 0x27b560u: goto label_27b560;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b578u: goto label_27b578;
        case 0x27b588u: goto label_27b588;
        case 0x27b594u: goto label_27b594;
        case 0x27b5acu: goto label_27b5ac;
        default: break;
    }

    ctx->pc = 0x27b548u;

    // 0x27b548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b550: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27b550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27b554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b558: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27B558u;
    SET_GPR_U32(ctx, 31, 0x27B560u);
    ctx->pc = 0x27B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B558u;
    // 0x27b55c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27B558u, 0x27B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B560u;
label_27b560:
    // 0x27b560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b564: 0xc09ecaa  jal         func_27B2A8
    ctx->pc = 0x27B564u;
    SET_GPR_U32(ctx, 31, 0x27B56Cu);
    ctx->pc = 0x27B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B564u;
    // 0x27b568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B2A8u, 0x27B564u, 0x27B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B56Cu;
label_27b56c:
    // 0x27b56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b570: 0xc08a61a  jal         func_229868
    ctx->pc = 0x27B570u;
    SET_GPR_U32(ctx, 31, 0x27B578u);
    ctx->pc = 0x27B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B570u;
    // 0x27b574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27B570u, 0x27B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B578u;
label_27b578:
    // 0x27b578: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B578u;
    {
        const bool branch_taken_0x27b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b578) {
            ctx->pc = 0x27B59Cu;
            goto label_27b59c;
        }
    }
    ctx->pc = 0x27B580u;
    // 0x27b580: 0xc08a61a  jal         func_229868
    ctx->pc = 0x27B580u;
    SET_GPR_U32(ctx, 31, 0x27B588u);
    ctx->pc = 0x27B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B580u;
    // 0x27b584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27B580u, 0x27B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B588u;
label_27b588:
    // 0x27b588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b58c: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x27B58Cu;
    SET_GPR_U32(ctx, 31, 0x27B594u);
    ctx->pc = 0x27B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B58Cu;
    // 0x27b590: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x27B58Cu, 0x27B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B594u;
label_27b594:
    // 0x27b594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27B594u;
    {
        const bool branch_taken_0x27b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B594u;
        // 0x27b598: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b594) {
            ctx->pc = 0x27B5B0u;
            goto label_27b5b0;
        }
    }
    ctx->pc = 0x27B59Cu;
label_27b59c:
    // 0x27b59c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B59Cu;
    {
        const bool branch_taken_0x27b59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B59Cu;
        // 0x27b5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b59c) {
            ctx->pc = 0x27B5ACu;
            goto label_27b5ac;
        }
    }
    ctx->pc = 0x27B5A4u;
    // 0x27b5a4: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x27B5A4u;
    SET_GPR_U32(ctx, 31, 0x27B5ACu);
    ctx->pc = 0x27B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5A4u;
    // 0x27b5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x27B5A4u, 0x27B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5ACu;
label_27b5ac:
    // 0x27b5ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27b5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27b5b0:
    // 0x27b5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5B8u;
        // 0x27b5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B5C0u;
}
