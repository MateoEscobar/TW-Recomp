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

// Function: sub_0010DEF8
// Address: 0x10def8 - 0x10df28
void sub_0010DEF8_0x10def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DEF8_0x10def8");
#endif

    switch (ctx->pc) {
        case 0x10df08u: goto label_10df08;
        default: break;
    }

    ctx->pc = 0x10def8u;

    // 0x10def8: 0x24840081  addiu       $a0, $a0, 0x81
    ctx->pc = 0x10def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 129));
    // 0x10defc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10df04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10df08:
    // 0x10df08: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x10df08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10df0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10df10: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x10df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x10df14: 0x0  nop
    ctx->pc = 0x10df14u;
    // NOP
    // 0x10df18: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10DF18u;
    {
        const bool branch_taken_0x10df18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF18u;
        // 0x10df1c: 0xc2280b  movn        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df18) {
            ctx->pc = 0x10DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10df08;
        }
    }
    ctx->pc = 0x10DF20u;
    // 0x10df20: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF20u;
        // 0x10df24: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DF28u;
}
