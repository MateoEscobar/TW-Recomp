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

// Function: sub_0036DE50
// Address: 0x36de50 - 0x36de88
void sub_0036DE50_0x36de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DE50_0x36de50");
#endif

    switch (ctx->pc) {
        case 0x36de64u: goto label_36de64;
        case 0x36de6cu: goto label_36de6c;
        case 0x36de74u: goto label_36de74;
        default: break;
    }

    ctx->pc = 0x36de50u;

    // 0x36de50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36de54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36de54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36de58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36de5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DE5Cu;
    SET_GPR_U32(ctx, 31, 0x36DE64u);
    ctx->pc = 0x36DE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE5Cu;
    // 0x36de60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DE5Cu, 0x36DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE64u;
label_36de64:
    // 0x36de64: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DE64u;
    SET_GPR_U32(ctx, 31, 0x36DE6Cu);
    ctx->pc = 0x36DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE64u;
    // 0x36de68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DE64u, 0x36DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE6Cu;
label_36de6c:
    // 0x36de6c: 0xc0e35a4  jal         func_38D690
    ctx->pc = 0x36DE6Cu;
    SET_GPR_U32(ctx, 31, 0x36DE74u);
    ctx->pc = 0x36DE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE6Cu;
    // 0x36de70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D690u, 0x36DE6Cu, 0x36DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE74u;
label_36de74:
    // 0x36de74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36de74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36de78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de7c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE7Cu;
        // 0x36de80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE84u;
    // 0x36de84: 0x0  nop
    ctx->pc = 0x36de84u;
    // NOP
    ctx->pc = 0x36de88u;
}
