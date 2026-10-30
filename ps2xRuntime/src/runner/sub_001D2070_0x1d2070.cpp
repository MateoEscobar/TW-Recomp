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

// Function: sub_001D2070
// Address: 0x1d2070 - 0x1d20c8
void sub_001D2070_0x1d2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2070_0x1d2070");
#endif

    switch (ctx->pc) {
        case 0x1d2084u: goto label_1d2084;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20b4u: goto label_1d20b4;
        default: break;
    }

    ctx->pc = 0x1d2070u;

    // 0x1d2070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d207c: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1D207Cu;
    SET_GPR_U32(ctx, 31, 0x1D2084u);
    ctx->pc = 0x1D2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D207Cu;
    // 0x1d2080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1D207Cu, 0x1D2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2084u;
label_1d2084:
    // 0x1d2084: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d2084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d2088: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d208c: 0x2463b570  addiu       $v1, $v1, -0x4A90
    ctx->pc = 0x1d208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948208));
    // 0x1d2090: 0x2442b598  addiu       $v0, $v0, -0x4A68
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948248));
    // 0x1d2094: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1d2094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1d2098: 0x260407e0  addiu       $a0, $s0, 0x7E0
    ctx->pc = 0x1d2098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x1d209c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d209cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d20a0: 0xc07599c  jal         func_1D6670
    ctx->pc = 0x1D20A0u;
    SET_GPR_U32(ctx, 31, 0x1D20A8u);
    ctx->pc = 0x1D20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A0u;
    // 0x1d20a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D20A0u, 0x1D20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20A8u;
label_1d20a8:
    // 0x1d20a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d20a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20ac: 0xc0748e6  jal         func_1D2398
    ctx->pc = 0x1D20ACu;
    SET_GPR_U32(ctx, 31, 0x1D20B4u);
    ctx->pc = 0x1D20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20ACu;
    // 0x1d20b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2398u, 0x1D20ACu, 0x1D20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20B4u;
label_1d20b4:
    // 0x1d20b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d20b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d20bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d20bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d20c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20C0u;
        // 0x1d20c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D20C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D20C8u;
}
