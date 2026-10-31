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

// Function: sub_00154168
// Address: 0x154168 - 0x1541e0
void sub_00154168_0x154168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154168_0x154168");
#endif

    switch (ctx->pc) {
        case 0x154180u: goto label_154180;
        default: break;
    }

    ctx->pc = 0x154168u;

    // 0x154168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15416c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15416cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154174: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x154178: 0xc05502c  jal         func_1540B0
    ctx->pc = 0x154178u;
    SET_GPR_U32(ctx, 31, 0x154180u);
    ctx->pc = 0x15417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154178u;
    // 0x15417c: 0xac400054  sw          $zero, 0x54($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540B0u, 0x154178u, 0x154180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154180u;
label_154180:
    // 0x154180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154184: 0x3e00008  jr          $ra
    ctx->pc = 0x154184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154184u;
        // 0x154188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15418Cu;
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
    // 0x154190: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154194: 0x0  nop
    ctx->pc = 0x154194u;
    // NOP
    // 0x154198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x154198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15419c: 0x0  nop
    ctx->pc = 0x15419cu;
    // NOP
    // 0x1541a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1541a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1541a4: 0x0  nop
    ctx->pc = 0x1541a4u;
    // NOP
    // 0x1541a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1541ac: 0x0  nop
    ctx->pc = 0x1541acu;
    // NOP
    // 0x1541b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1541b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1541b4: 0x0  nop
    ctx->pc = 0x1541b4u;
    // NOP
    // 0x1541b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1541bc: 0x0  nop
    ctx->pc = 0x1541bcu;
    // NOP
    // 0x1541c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1541c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1541c4: 0x0  nop
    ctx->pc = 0x1541c4u;
    // NOP
    // 0x1541c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1541cc: 0x0  nop
    ctx->pc = 0x1541ccu;
    // NOP
    // 0x1541d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1541d4: 0x0  nop
    ctx->pc = 0x1541d4u;
    // NOP
    // 0x1541d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1541dc: 0x0  nop
    ctx->pc = 0x1541dcu;
    // NOP
    ctx->pc = 0x1541e0u;
}
