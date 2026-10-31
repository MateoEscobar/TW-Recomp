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

// Function: sub_0021EE50
// Address: 0x21ee50 - 0x21ee88
void sub_0021EE50_0x21ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EE50_0x21ee50");
#endif

    switch (ctx->pc) {
        case 0x21ee6cu: goto label_21ee6c;
        case 0x21ee78u: goto label_21ee78;
        default: break;
    }

    ctx->pc = 0x21ee50u;

    // 0x21ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ee54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ee58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ee60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x21ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x21ee64: 0xc050fda  jal         func_143F68
    ctx->pc = 0x21EE64u;
    SET_GPR_U32(ctx, 31, 0x21EE6Cu);
    ctx->pc = 0x21EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE64u;
    // 0x21ee68: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x21EE64u, 0x21EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE6Cu;
label_21ee6c:
    // 0x21ee6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee70: 0xc087ba2  jal         func_21EE88
    ctx->pc = 0x21EE70u;
    SET_GPR_U32(ctx, 31, 0x21EE78u);
    ctx->pc = 0x21EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE70u;
    // 0x21ee74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE88u, 0x21EE70u, 0x21EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE78u;
label_21ee78:
    // 0x21ee78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ee78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ee7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE80u;
        // 0x21ee84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EE88u;
}
