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

// Function: sub_001A4008
// Address: 0x1a4008 - 0x1a4050
void sub_001A4008_0x1a4008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4008_0x1a4008");
#endif

    switch (ctx->pc) {
        case 0x1a402cu: goto label_1a402c;
        default: break;
    }

    ctx->pc = 0x1a4008u;

    // 0x1a4008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a400c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4018: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a401c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A401Cu;
    {
        const bool branch_taken_0x1a401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a401c) {
            ctx->pc = 0x1A4020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A401Cu;
            // 0x1a4020: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4040u;
            goto label_1a4040;
        }
    }
    ctx->pc = 0x1A4024u;
    // 0x1a4024: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A4024u;
    SET_GPR_U32(ctx, 31, 0x1A402Cu);
    ctx->pc = 0x1A4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4024u;
    // 0x1a4028: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A4024u, 0x1A402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A402Cu;
label_1a402c:
    // 0x1a402c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4030: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a4030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a4034: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1a4038: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a4038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a403c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a403cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4040:
    // 0x1a4040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4044: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4044u;
        // 0x1a4048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A404Cu;
    // 0x1a404c: 0x0  nop
    ctx->pc = 0x1a404cu;
    // NOP
    ctx->pc = 0x1a4050u;
}
