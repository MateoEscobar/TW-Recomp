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

// Function: sub_002A7538
// Address: 0x2a7538 - 0x2a7594
void sub_002A7538_0x2a7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7538_0x2a7538");
#endif

    switch (ctx->pc) {
        case 0x2a7548u: goto label_2a7548;
        default: break;
    }

    ctx->pc = 0x2a7538u;

    // 0x2a7538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a753c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7540: 0xc08a200  jal         func_228800
    ctx->pc = 0x2A7540u;
    SET_GPR_U32(ctx, 31, 0x2A7548u);
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2A7540u, 0x2A7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7548u;
label_2a7548:
    // 0x2a7548: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2a7548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2a754c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a7550: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2a7550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2a7554: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7554u;
    {
        const bool branch_taken_0x2a7554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7554u;
        // 0x2a7558: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7554) {
            ctx->pc = 0x2A75A4u;
            return;
        }
    }
    ctx->pc = 0x2A755Cu;
    // 0x2a755c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a7560: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x2a7560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x2a7564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a7564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a756c: 0x800008  jr          $a0
    ctx->pc = 0x2A756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A7574u: goto label_2a7574;
            case 0x2A757Cu: goto label_2a757c;
            case 0x2A7584u: goto label_2a7584;
            case 0x2A758Cu: goto label_2a758c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A756Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A7574u;
label_2a7574:
    // 0x2a7574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A7574u;
    {
        const bool branch_taken_0x2a7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7574u;
        // 0x2a7578: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7574) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A757Cu;
label_2a757c:
    // 0x2a757c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A757Cu;
    {
        const bool branch_taken_0x2a757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A757Cu;
        // 0x2a7580: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a757c) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A7584u;
label_2a7584:
    // 0x2a7584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7584u;
    {
        const bool branch_taken_0x2a7584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7584u;
        // 0x2a7588: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7584) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A758Cu;
label_2a758c:
    // 0x2a758c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A758Cu;
    {
        const bool branch_taken_0x2a758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A758Cu;
        // 0x2a7590: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a758c) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A7594u;
}
