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

// Function: sub_00447E30
// Address: 0x447e30 - 0x447e70
void sub_00447E30_0x447e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447E30_0x447e30");
#endif

    switch (ctx->pc) {
        case 0x447e54u: goto label_447e54;
        case 0x447e60u: goto label_447e60;
        default: break;
    }

    ctx->pc = 0x447e30u;

    // 0x447e30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x447e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x447e34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x447e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447e38: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x447e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x447e3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x447e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x447e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447e44: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x447e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x447e48: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x447e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x447e4c: 0xc10fe0a  jal         func_43F828
    ctx->pc = 0x447E4Cu;
    SET_GPR_U32(ctx, 31, 0x447E54u);
    ctx->pc = 0x447E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447E4Cu;
    // 0x447e50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F828u, 0x447E4Cu, 0x447E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447E54u;
label_447e54:
    // 0x447e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x447e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447e58: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x447E58u;
    SET_GPR_U32(ctx, 31, 0x447E60u);
    ctx->pc = 0x447E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447E58u;
    // 0x447e5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x447E58u, 0x447E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447E60u;
label_447e60:
    // 0x447e60: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x447e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x447e64: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x447e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x447e68: 0x3e00008  jr          $ra
    ctx->pc = 0x447E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E68u;
        // 0x447e6c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447E70u;
}
