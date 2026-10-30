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

// Function: sub_001645D0
// Address: 0x1645d0 - 0x164610
void sub_001645D0_0x1645d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001645D0_0x1645d0");
#endif

    switch (ctx->pc) {
        case 0x1645e8u: goto label_1645e8;
        default: break;
    }

    ctx->pc = 0x1645d0u;

    // 0x1645d0: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1645d4: 0x24840073  addiu       $a0, $a0, 0x73
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 115));
    // 0x1645d8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1645d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1645dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1645dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645e0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1645e4: 0x0  nop
    ctx->pc = 0x1645e4u;
    // NOP
label_1645e8:
    // 0x1645e8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1645e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1645ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1645f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1645f4: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x1645f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1645f8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1645f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1645fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1645FCu;
    {
        const bool branch_taken_0x1645fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645FCu;
        // 0x164600: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645fc) {
            ctx->pc = 0x1645E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645e8;
        }
    }
    ctx->pc = 0x164604u;
    // 0x164604: 0x3e00008  jr          $ra
    ctx->pc = 0x164604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16460Cu;
    // 0x16460c: 0x0  nop
    ctx->pc = 0x16460cu;
    // NOP
    ctx->pc = 0x164610u;
}
