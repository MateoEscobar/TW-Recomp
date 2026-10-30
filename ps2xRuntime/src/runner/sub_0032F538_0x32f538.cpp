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

// Function: sub_0032F538
// Address: 0x32f538 - 0x32f5a0
void sub_0032F538_0x32f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F538_0x32f538");
#endif

    switch (ctx->pc) {
        case 0x32f558u: goto label_32f558;
        case 0x32f560u: goto label_32f560;
        case 0x32f570u: goto label_32f570;
        case 0x32f580u: goto label_32f580;
        default: break;
    }

    ctx->pc = 0x32f538u;

    // 0x32f538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f53c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f54c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32F54Cu;
    {
        const bool branch_taken_0x32f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F54Cu;
        // 0x32f550: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f54c) {
            ctx->pc = 0x32F570u;
            goto label_32f570;
        }
    }
    ctx->pc = 0x32F554u;
    // 0x32f554: 0x0  nop
    ctx->pc = 0x32f554u;
    // NOP
label_32f558:
    // 0x32f558: 0xc0cbc7a  jal         func_32F1E8
    ctx->pc = 0x32F558u;
    SET_GPR_U32(ctx, 31, 0x32F560u);
    ctx->pc = 0x32F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F558u;
    // 0x32f55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F1E8u, 0x32F558u, 0x32F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F560u;
label_32f560:
    // 0x32f560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32f560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f568: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32F568u;
    SET_GPR_U32(ctx, 31, 0x32F570u);
    ctx->pc = 0x32F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F568u;
    // 0x32f56c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32F568u, 0x32F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F570u;
label_32f570:
    // 0x32f570: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32F570u;
    {
        const bool branch_taken_0x32f570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f570) {
            ctx->pc = 0x32F574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F570u;
            // 0x32f574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F58Cu;
            goto label_32f58c;
        }
    }
    ctx->pc = 0x32F578u;
    // 0x32f578: 0xc0cb988  jal         func_32E620
    ctx->pc = 0x32F578u;
    SET_GPR_U32(ctx, 31, 0x32F580u);
    ctx->pc = 0x32F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F578u;
    // 0x32f57c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E620u, 0x32F578u, 0x32F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F580u;
label_32f580:
    // 0x32f580: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32F580u;
    {
        const bool branch_taken_0x32f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f580) {
            ctx->pc = 0x32F558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f558;
        }
    }
    ctx->pc = 0x32F588u;
    // 0x32f588: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32f58c:
    // 0x32f58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f594: 0x3e00008  jr          $ra
    ctx->pc = 0x32F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F594u;
        // 0x32f598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F59Cu;
    // 0x32f59c: 0x0  nop
    ctx->pc = 0x32f59cu;
    // NOP
    ctx->pc = 0x32f5a0u;
}
