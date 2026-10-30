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

// Function: sub_004AEB98
// Address: 0x4aeb98 - 0x4aebc8
void sub_004AEB98_0x4aeb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEB98_0x4aeb98");
#endif

    switch (ctx->pc) {
        case 0x4aebacu: goto label_4aebac;
        case 0x4aebb8u: goto label_4aebb8;
        default: break;
    }

    ctx->pc = 0x4aeb98u;

    // 0x4aeb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aeb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aeb9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aeb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aeba0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aeba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aeba4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x4AEBA4u;
    SET_GPR_U32(ctx, 31, 0x4AEBACu);
    ctx->pc = 0x4AEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEBA4u;
    // 0x4aeba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x4AEBA4u, 0x4AEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEBACu;
label_4aebac:
    // 0x4aebac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aebb0: 0xc12b4fe  jal         func_4AD3F8
    ctx->pc = 0x4AEBB0u;
    SET_GPR_U32(ctx, 31, 0x4AEBB8u);
    ctx->pc = 0x4AEBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEBB0u;
    // 0x4aebb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD3F8u, 0x4AEBB0u, 0x4AEBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEBB8u;
label_4aebb8:
    // 0x4aebb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aebbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aebbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBC0u;
        // 0x4aebc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEBC8u;
}
