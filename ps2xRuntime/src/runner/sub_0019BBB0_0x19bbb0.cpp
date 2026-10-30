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

// Function: sub_0019BBB0
// Address: 0x19bbb0 - 0x19bbf8
void sub_0019BBB0_0x19bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BBB0_0x19bbb0");
#endif

    switch (ctx->pc) {
        case 0x19bbecu: goto label_19bbec;
        default: break;
    }

    ctx->pc = 0x19bbb0u;

    // 0x19bbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bbb8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x19bbbc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19bbc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19bbc4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BBC4u;
    {
        const bool branch_taken_0x19bbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bbc4) {
            ctx->pc = 0x19BBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BBC4u;
            // 0x19bbc8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BBE4u;
            goto label_19bbe4;
        }
    }
    ctx->pc = 0x19BBCCu;
    // 0x19bbcc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19BBCCu;
    {
        const bool branch_taken_0x19bbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bbcc) {
            ctx->pc = 0x19BBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BBCCu;
            // 0x19bbd0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BBD4u;
            goto label_19bbd4;
        }
    }
    ctx->pc = 0x19BBD4u;
label_19bbd4:
    // 0x19bbd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19bbd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19bbdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19BBDCu;
    {
        const bool branch_taken_0x19bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBDCu;
        // 0x19bbe0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbdc) {
            ctx->pc = 0x19BBECu;
            goto label_19bbec;
        }
    }
    ctx->pc = 0x19BBE4u;
label_19bbe4:
    // 0x19bbe4: 0xc138e92  jal         func_4E3A48
    ctx->pc = 0x19BBE4u;
    SET_GPR_U32(ctx, 31, 0x19BBECu);
    ctx->pc = 0x19BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBE4u;
    // 0x19bbe8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3A48u, 0x19BBE4u, 0x19BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBECu;
label_19bbec:
    // 0x19bbec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBF0u;
        // 0x19bbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBF8u;
}
