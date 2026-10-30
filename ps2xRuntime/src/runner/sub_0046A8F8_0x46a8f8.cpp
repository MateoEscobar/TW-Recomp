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

// Function: sub_0046A8F8
// Address: 0x46a8f8 - 0x46a940
void sub_0046A8F8_0x46a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A8F8_0x46a8f8");
#endif

    switch (ctx->pc) {
        case 0x46a920u: goto label_46a920;
        default: break;
    }

    ctx->pc = 0x46a8f8u;

    // 0x46a8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46a8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46a900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46a904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a908: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x46a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x46a90c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x46a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x46a910: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A910u;
    {
        const bool branch_taken_0x46a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a910) {
            ctx->pc = 0x46A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A910u;
            // 0x46a914: 0x92030003  lbu         $v1, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A924u;
            goto label_46a924;
        }
    }
    ctx->pc = 0x46A918u;
    // 0x46a918: 0xc11a402  jal         func_469008
    ctx->pc = 0x46A918u;
    SET_GPR_U32(ctx, 31, 0x46A920u);
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x46A918u, 0x46A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A920u;
label_46a920:
    // 0x46a920: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x46a920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_46a924:
    // 0x46a924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a92c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x46a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x46a930: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x46a930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x46a934: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46a934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a938: 0x3e00008  jr          $ra
    ctx->pc = 0x46A938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A938u;
        // 0x46a93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A940u;
}
