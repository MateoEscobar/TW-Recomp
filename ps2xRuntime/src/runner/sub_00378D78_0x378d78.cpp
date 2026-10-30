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

// Function: sub_00378D78
// Address: 0x378d78 - 0x378db0
void sub_00378D78_0x378d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378D78_0x378d78");
#endif

    switch (ctx->pc) {
        case 0x378d8cu: goto label_378d8c;
        case 0x378d94u: goto label_378d94;
        case 0x378d9cu: goto label_378d9c;
        default: break;
    }

    ctx->pc = 0x378d78u;

    // 0x378d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x378d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x378d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378d84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378D84u;
    SET_GPR_U32(ctx, 31, 0x378D8Cu);
    ctx->pc = 0x378D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D84u;
    // 0x378d88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378D84u, 0x378D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D8Cu;
label_378d8c:
    // 0x378d8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378D8Cu;
    SET_GPR_U32(ctx, 31, 0x378D94u);
    ctx->pc = 0x378D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D8Cu;
    // 0x378d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378D8Cu, 0x378D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D94u;
label_378d94:
    // 0x378d94: 0xc0e70f4  jal         func_39C3D0
    ctx->pc = 0x378D94u;
    SET_GPR_U32(ctx, 31, 0x378D9Cu);
    ctx->pc = 0x378D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D94u;
    // 0x378d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x378D94u, 0x378D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D9Cu;
label_378d9c:
    // 0x378d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378da4: 0x3e00008  jr          $ra
    ctx->pc = 0x378DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DA4u;
        // 0x378da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378DACu;
    // 0x378dac: 0x0  nop
    ctx->pc = 0x378dacu;
    // NOP
    ctx->pc = 0x378db0u;
}
