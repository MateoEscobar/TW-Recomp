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

// Function: sub_001D6910
// Address: 0x1d6910 - 0x1d6960
void sub_001D6910_0x1d6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6910_0x1d6910");
#endif

    switch (ctx->pc) {
        case 0x1d6930u: goto label_1d6930;
        case 0x1d6940u: goto label_1d6940;
        case 0x1d694cu: goto label_1d694c;
        default: break;
    }

    ctx->pc = 0x1d6910u;

    // 0x1d6910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6914: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d691c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6920: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d6920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6928: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D6928u;
    SET_GPR_U32(ctx, 31, 0x1D6930u);
    ctx->pc = 0x1D692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6928u;
    // 0x1d692c: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D6928u, 0x1D6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6930u;
label_1d6930:
    // 0x1d6930: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1d6934: 0x260403f0  addiu       $a0, $s0, 0x3F0
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x1d6938: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D6938u;
    SET_GPR_U32(ctx, 31, 0x1D6940u);
    ctx->pc = 0x1D693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6938u;
    // 0x1d693c: 0x24a560a0  addiu       $a1, $a1, 0x60A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D6938u, 0x1D6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6940u;
label_1d6940:
    // 0x1d6940: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1d6944: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D6944u;
    SET_GPR_U32(ctx, 31, 0x1D694Cu);
    ctx->pc = 0x1D6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6944u;
    // 0x1d6948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D6944u, 0x1D694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D694Cu;
label_1d694c:
    // 0x1d694c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d694cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6958: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6958u;
        // 0x1d695c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6960u;
}
