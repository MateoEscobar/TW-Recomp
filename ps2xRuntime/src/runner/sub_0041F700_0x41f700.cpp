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

// Function: sub_0041F700
// Address: 0x41f700 - 0x41f730
void sub_0041F700_0x41f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F700_0x41f700");
#endif

    switch (ctx->pc) {
        case 0x41f714u: goto label_41f714;
        default: break;
    }

    ctx->pc = 0x41f700u;

    // 0x41f700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41f704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41f708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f70c: 0xc0527cc  jal         func_149F30
    ctx->pc = 0x41F70Cu;
    SET_GPR_U32(ctx, 31, 0x41F714u);
    ctx->pc = 0x41F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F70Cu;
    // 0x41f710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F30u, 0x41F70Cu, 0x41F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F714u;
label_41f714:
    // 0x41f714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f71c: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x41f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x41f720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41f720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f724: 0x3e00008  jr          $ra
    ctx->pc = 0x41F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F724u;
        // 0x41f728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F72Cu;
    // 0x41f72c: 0x0  nop
    ctx->pc = 0x41f72cu;
    // NOP
    ctx->pc = 0x41f730u;
}
