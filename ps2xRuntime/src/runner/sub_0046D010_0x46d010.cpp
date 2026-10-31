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

// Function: sub_0046D010
// Address: 0x46d010 - 0x46d068
void sub_0046D010_0x46d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D010_0x46d010");
#endif

    switch (ctx->pc) {
        case 0x46d04cu: goto label_46d04c;
        default: break;
    }

    ctx->pc = 0x46d010u;

    // 0x46d010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46d014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46d014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46d018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46d01c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x46d01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d024: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D024u;
    {
        const bool branch_taken_0x46d024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D024u;
        // 0x46d028: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d024) {
            ctx->pc = 0x46D038u;
            goto label_46d038;
        }
    }
    ctx->pc = 0x46D02Cu;
    // 0x46d02c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x46d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x46d030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46d034: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x46d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_46d038:
    // 0x46d038: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x46d038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x46d03c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D03Cu;
    {
        const bool branch_taken_0x46d03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d03c) {
            ctx->pc = 0x46D040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D03Cu;
            // 0x46d040: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D050u;
            goto label_46d050;
        }
    }
    ctx->pc = 0x46D044u;
    // 0x46d044: 0xc122364  jal         func_488D90
    ctx->pc = 0x46D044u;
    SET_GPR_U32(ctx, 31, 0x46D04Cu);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x46D044u, 0x46D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D04Cu;
label_46d04c:
    // 0x46d04c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x46d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_46d050:
    // 0x46d050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46d050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d054: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46d054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d060: 0x3e00008  jr          $ra
    ctx->pc = 0x46D060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D060u;
        // 0x46d064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D068u;
}
