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

// Function: sub_0015A328
// Address: 0x15a328 - 0x15a370
void sub_0015A328_0x15a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A328_0x15a328");
#endif

    switch (ctx->pc) {
        case 0x15a338u: goto label_15a338;
        case 0x15a350u: goto label_15a350;
        default: break;
    }

    ctx->pc = 0x15a328u;

    // 0x15a328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a330: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A330u;
    SET_GPR_U32(ctx, 31, 0x15A338u);
    ctx->pc = 0x15A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A330u;
    // 0x15a334: 0x240400b5  addiu       $a0, $zero, 0xB5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A330u, 0x15A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A338u;
label_15a338:
    // 0x15a338: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15a33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a340: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15a344: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x15a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x15a348: 0xc071bf2  jal         func_1C6FC8
    ctx->pc = 0x15A348u;
    SET_GPR_U32(ctx, 31, 0x15A350u);
    ctx->pc = 0x15A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A348u;
    // 0x15a34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15A348u, 0x15A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A350u;
label_15a350:
    // 0x15a350: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a354: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a358: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x15a35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a360: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15a364: 0x3e00008  jr          $ra
    ctx->pc = 0x15A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A364u;
        // 0x15a368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A36Cu;
    // 0x15a36c: 0x0  nop
    ctx->pc = 0x15a36cu;
    // NOP
    ctx->pc = 0x15a370u;
}
