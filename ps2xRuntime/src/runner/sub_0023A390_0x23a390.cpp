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

// Function: sub_0023A390
// Address: 0x23a390 - 0x23a3b8
void sub_0023A390_0x23a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A390_0x23a390");
#endif

    switch (ctx->pc) {
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3acu: goto label_23a3ac;
        default: break;
    }

    ctx->pc = 0x23a390u;

    // 0x23a390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a394: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a39c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A39Cu;
    SET_GPR_U32(ctx, 31, 0x23A3A4u);
    ctx->pc = 0x23A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A39Cu;
    // 0x23a3a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A39Cu, 0x23A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3A4u;
label_23a3a4:
    // 0x23a3a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A3A4u;
    SET_GPR_U32(ctx, 31, 0x23A3ACu);
    ctx->pc = 0x23A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3A4u;
    // 0x23a3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A3A4u, 0x23A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3ACu;
label_23a3ac:
    // 0x23a3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B0u;
        // 0x23a3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A3B8u;
}
