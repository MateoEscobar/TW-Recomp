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

// Function: sub_004225F0
// Address: 0x4225f0 - 0x422630
void sub_004225F0_0x4225f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004225F0_0x4225f0");
#endif

    switch (ctx->pc) {
        case 0x422610u: goto label_422610;
        case 0x42261cu: goto label_42261c;
        default: break;
    }

    ctx->pc = 0x4225f0u;

    // 0x4225f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4225f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4225f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4225f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4225f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4225f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4225fc: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x4225fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x422600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x422600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x422604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x422604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422608: 0xc0e409a  jal         func_390268
    ctx->pc = 0x422608u;
    SET_GPR_U32(ctx, 31, 0x422610u);
    ctx->pc = 0x42260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422608u;
    // 0x42260c: 0x2610e490  addiu       $s0, $s0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x422608u, 0x422610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422610u;
label_422610:
    // 0x422610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422614: 0xc108af6  jal         func_422BD8
    ctx->pc = 0x422614u;
    SET_GPR_U32(ctx, 31, 0x42261Cu);
    ctx->pc = 0x422618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422614u;
    // 0x422618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422BD8u, 0x422614u, 0x42261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42261Cu;
label_42261c:
    // 0x42261c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42261cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x422620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422624: 0x3e00008  jr          $ra
    ctx->pc = 0x422624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422624u;
        // 0x422628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42262Cu;
    // 0x42262c: 0x0  nop
    ctx->pc = 0x42262cu;
    // NOP
    ctx->pc = 0x422630u;
}
