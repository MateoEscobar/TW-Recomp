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

// Function: sub_004655E0
// Address: 0x4655e0 - 0x465630
void sub_004655E0_0x4655e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004655E0_0x4655e0");
#endif

    switch (ctx->pc) {
        case 0x4655f8u: goto label_4655f8;
        default: break;
    }

    ctx->pc = 0x4655e0u;

    // 0x4655e0: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4655e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4655e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4655e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4655e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4655e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4655ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4655f0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4655f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4655f4: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x4655f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4655f8:
    // 0x4655f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4655fc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4655fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465600: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x465600u;
    {
        const bool branch_taken_0x465600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x465600) {
            ctx->pc = 0x465604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465600u;
            // 0x465604: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465624u;
            goto label_465624;
        }
    }
    ctx->pc = 0x465608u;
    // 0x465608: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x465608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x46560c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x46560cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465610: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x465610u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465614: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x465614u;
    {
        const bool branch_taken_0x465614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x465614) {
            ctx->pc = 0x465618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465614u;
            // 0x465618: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4655F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4655f8;
        }
    }
    ctx->pc = 0x46561Cu;
    // 0x46561c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46561cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465620: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x465620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_465624:
    // 0x465624: 0x3e00008  jr          $ra
    ctx->pc = 0x465624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465624u;
        // 0x465628: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46562Cu;
    // 0x46562c: 0x0  nop
    ctx->pc = 0x46562cu;
    // NOP
    ctx->pc = 0x465630u;
}
