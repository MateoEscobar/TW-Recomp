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

// Function: sub_001FE7C0
// Address: 0x1fe7c0 - 0x1fe818
void sub_001FE7C0_0x1fe7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE7C0_0x1fe7c0");
#endif

    switch (ctx->pc) {
        case 0x1fe7e8u: goto label_1fe7e8;
        default: break;
    }

    ctx->pc = 0x1fe7c0u;

    // 0x1fe7c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fe7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fe7c4: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE7C4u;
    {
        const bool branch_taken_0x1fe7c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe7c4) {
            ctx->pc = 0x1FE810u;
            goto label_1fe810;
        }
    }
    ctx->pc = 0x1FE7CCu;
    // 0x1fe7cc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE7CCu;
    {
        const bool branch_taken_0x1fe7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7CCu;
        // 0x1fe7d0: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7cc) {
            ctx->pc = 0x1FE810u;
            goto label_1fe810;
        }
    }
    ctx->pc = 0x1FE7D4u;
    // 0x1fe7d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fe7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fe7d8: 0x2442ee90  addiu       $v0, $v0, -0x1170
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x1fe7dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1fe7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fe7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fe7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fe7e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe7e8:
    // 0x1fe7e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fe7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fe7ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fe7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fe7f0: 0x0  nop
    ctx->pc = 0x1fe7f0u;
    // NOP
    // 0x1fe7f4: 0x0  nop
    ctx->pc = 0x1fe7f4u;
    // NOP
    // 0x1fe7f8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE7F8u;
    {
        const bool branch_taken_0x1fe7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F8u;
        // 0x1fe7fc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f8) {
            ctx->pc = 0x1FE7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe7e8;
        }
    }
    ctx->pc = 0x1FE800u;
    // 0x1fe800: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fe804: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1fe808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fe808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fe80c: 0xac62eeb8  sw          $v0, -0x1148($v1)
    ctx->pc = 0x1fe80cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63EEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EEB8u, _value); } while (0);
label_1fe810:
    // 0x1fe810: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE818u;
}
