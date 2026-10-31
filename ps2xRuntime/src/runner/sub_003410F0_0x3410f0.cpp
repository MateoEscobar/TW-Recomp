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

// Function: sub_003410F0
// Address: 0x3410f0 - 0x341158
void sub_003410F0_0x3410f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410F0_0x3410f0");
#endif

    switch (ctx->pc) {
        case 0x341120u: goto label_341120;
        default: break;
    }

    ctx->pc = 0x3410f0u;

    // 0x3410f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3410f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410f4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x3410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x3410f8: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x3410f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3410fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3410fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x341100: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x341100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x341104: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x341104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x341108: 0x3463e6a0  ori         $v1, $v1, 0xE6A0
    ctx->pc = 0x341108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59040);
    // 0x34110c: 0xacc50054  sw          $a1, 0x54($a2)
    ctx->pc = 0x34110cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 5));
    // 0x341110: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x341110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x341114: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x341114u;
    {
        const bool branch_taken_0x341114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341114u;
        // 0x341118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341114) {
            ctx->pc = 0x341140u;
            goto label_341140;
        }
    }
    ctx->pc = 0x34111Cu;
    // 0x34111c: 0x0  nop
    ctx->pc = 0x34111cu;
    // NOP
label_341120:
    // 0x341120: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x341120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x341124: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x341124u;
    {
        const bool branch_taken_0x341124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341124u;
        // 0x341128: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341124) {
            ctx->pc = 0x341150u;
            goto label_341150;
        }
    }
    ctx->pc = 0x34112Cu;
    // 0x34112c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x34112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x341130: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x341130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x341134: 0x3442e6a0  ori         $v0, $v0, 0xE6A0
    ctx->pc = 0x341134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59040);
    // 0x341138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34113c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_341140:
    // 0x341140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341144: 0x1446fff6  bne         $v0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x341144u;
    {
        const bool branch_taken_0x341144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x341148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341144u;
        // 0x341148: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341144) {
            ctx->pc = 0x341120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341120;
        }
    }
    ctx->pc = 0x34114Cu;
    // 0x34114c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x34114cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_341150:
    // 0x341150: 0x3e00008  jr          $ra
    ctx->pc = 0x341150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341158u;
}
