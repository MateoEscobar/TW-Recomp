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

// Function: sub_00123588
// Address: 0x123588 - 0x123610
void sub_00123588_0x123588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123588_0x123588");
#endif

    switch (ctx->pc) {
        case 0x1235b0u: goto label_1235b0;
        case 0x1235e0u: goto label_1235e0;
        default: break;
    }

    ctx->pc = 0x123588u;

    // 0x123588: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x123588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12358c: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12358Cu;
    {
        const bool branch_taken_0x12358c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12358c) {
            ctx->pc = 0x123608u;
            goto label_123608;
        }
    }
    ctx->pc = 0x123594u;
    // 0x123594: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x123594u;
    {
        const bool branch_taken_0x123594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123594u;
        // 0x123598: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123594) {
            ctx->pc = 0x123608u;
            goto label_123608;
        }
    }
    ctx->pc = 0x12359Cu;
    // 0x12359c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1235a0: 0x24429198  addiu       $v0, $v0, -0x6E68
    ctx->pc = 0x1235a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939032));
    // 0x1235a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1235a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1235a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1235a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1235ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1235acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1235b0:
    // 0x1235b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1235b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1235b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1235b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1235b8: 0x0  nop
    ctx->pc = 0x1235b8u;
    // NOP
    // 0x1235bc: 0x0  nop
    ctx->pc = 0x1235bcu;
    // NOP
    // 0x1235c0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1235C0u;
    {
        const bool branch_taken_0x1235c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1235C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C0u;
        // 0x1235c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c0) {
            ctx->pc = 0x1235B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1235b0;
        }
    }
    ctx->pc = 0x1235C8u;
    // 0x1235c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1235c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1235cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1235ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1235d0: 0x244291a8  addiu       $v0, $v0, -0x6E58
    ctx->pc = 0x1235d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939048));
    // 0x1235d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1235d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1235d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1235d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1235dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1235e0:
    // 0x1235e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1235e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1235e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1235e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1235e8: 0x0  nop
    ctx->pc = 0x1235e8u;
    // NOP
    // 0x1235ec: 0x0  nop
    ctx->pc = 0x1235ecu;
    // NOP
    // 0x1235f0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1235F0u;
    {
        const bool branch_taken_0x1235f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F0u;
        // 0x1235f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f0) {
            ctx->pc = 0x1235E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1235e0;
        }
    }
    ctx->pc = 0x1235F8u;
    // 0x1235f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1235fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1235fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x123600: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x123604: 0xac6491b8  sw          $a0, -0x6E48($v1)
    ctx->pc = 0x123604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D91B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D91B8u, _value); } while (0);
label_123608:
    // 0x123608: 0x3e00008  jr          $ra
    ctx->pc = 0x123608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123610u;
}
