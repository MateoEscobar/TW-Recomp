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

// Function: sub_00164610
// Address: 0x164610 - 0x164630
void sub_00164610_0x164610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164610_0x164610");
#endif

    ctx->pc = 0x164610u;

    // 0x164610: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x164614: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x164614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164618: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16461c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x164620: 0x3e00008  jr          $ra
    ctx->pc = 0x164620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164620u;
        // 0x164624: 0x90820073  lbu         $v0, 0x73($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164628u;
    // 0x164628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x164628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16462c: 0x0  nop
    ctx->pc = 0x16462cu;
    // NOP
    ctx->pc = 0x164630u;
}
