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

// Function: sub_004A5188
// Address: 0x4a5188 - 0x4a51b8
void sub_004A5188_0x4a5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5188_0x4a5188");
#endif

    switch (ctx->pc) {
        case 0x4a51a0u: goto label_4a51a0;
        default: break;
    }

    ctx->pc = 0x4a5188u;

    // 0x4a5188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a518c: 0xaf858a88  sw          $a1, -0x7578($gp)
    ctx->pc = 0x4a518cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U32(ctx, 5));
    // 0x4a5190: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a5194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5198: 0xc12947c  jal         func_4A51F0
    ctx->pc = 0x4A5198u;
    SET_GPR_U32(ctx, 31, 0x4A51A0u);
    ctx->pc = 0x4A519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5198u;
    // 0x4a519c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A51F0u, 0x4A5198u, 0x4A51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A51A0u;
label_4a51a0:
    // 0x4a51a0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a51a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a51a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a51a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a51a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a51a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a51ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a51acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a51b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A51B0u;
        // 0x4a51b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A51B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A51B8u;
}
