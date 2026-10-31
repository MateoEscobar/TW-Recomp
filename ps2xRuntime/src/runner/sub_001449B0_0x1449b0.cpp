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

// Function: sub_001449B0
// Address: 0x1449b0 - 0x1449e8
void sub_001449B0_0x1449b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001449B0_0x1449b0");
#endif

    ctx->pc = 0x1449b0u;

    // 0x1449b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1449b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1449b4: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1449B4u;
    {
        const bool branch_taken_0x1449b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1449b4) {
            ctx->pc = 0x1449E0u;
            goto label_1449e0;
        }
    }
    ctx->pc = 0x1449BCu;
    // 0x1449bc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1449BCu;
    {
        const bool branch_taken_0x1449bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449BCu;
        // 0x1449c0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449bc) {
            ctx->pc = 0x1449E0u;
            goto label_1449e0;
        }
    }
    ctx->pc = 0x1449C4u;
    // 0x1449c4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1449c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1449c8: 0x24427ba8  addiu       $v0, $v0, 0x7BA8
    ctx->pc = 0x1449c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31656));
    // 0x1449cc: 0x24637b90  addiu       $v1, $v1, 0x7B90
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31632));
    // 0x1449d0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1449d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x1449d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x1449d8: 0xac82d800  sw          $v0, -0x2800($a0)
    ctx->pc = 0x1449d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DD800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD800u, _value); } while (0);
    // 0x1449dc: 0xaca3d808  sw          $v1, -0x27F8($a1)
    ctx->pc = 0x1449dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5DD808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD808u, _value); } while (0);
label_1449e0:
    // 0x1449e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1449E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1449E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1449E8u;
}
