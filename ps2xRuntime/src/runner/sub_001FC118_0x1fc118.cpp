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

// Function: sub_001FC118
// Address: 0x1fc118 - 0x1fc160
void sub_001FC118_0x1fc118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC118_0x1fc118");
#endif

    switch (ctx->pc) {
        case 0x1fc150u: goto label_1fc150;
        default: break;
    }

    ctx->pc = 0x1fc118u;

    // 0x1fc118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc11c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fc11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc120: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fc124: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC124u;
    {
        const bool branch_taken_0x1fc124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC124u;
        // 0x1fc128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc124) {
            ctx->pc = 0x1FC134u;
            goto label_1fc134;
        }
    }
    ctx->pc = 0x1FC12Cu;
    // 0x1fc12c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC12Cu;
    {
        const bool branch_taken_0x1fc12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC12Cu;
        // 0x1fc130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc12c) {
            ctx->pc = 0x1FC154u;
            goto label_1fc154;
        }
    }
    ctx->pc = 0x1FC134u;
label_1fc134:
    // 0x1fc134: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fc138: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fc138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc13c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1fc140: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1fc140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
    // 0x1fc144: 0xacc20074  sw          $v0, 0x74($a2)
    ctx->pc = 0x1fc144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 2));
    // 0x1fc148: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1FC148u;
    SET_GPR_U32(ctx, 31, 0x1FC150u);
    ctx->pc = 0x1FC14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC148u;
    // 0x1fc14c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1FC148u, 0x1FC150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC150u;
label_1fc150:
    // 0x1fc150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc154:
    // 0x1fc154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc158: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC158u;
        // 0x1fc15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC160u;
}
