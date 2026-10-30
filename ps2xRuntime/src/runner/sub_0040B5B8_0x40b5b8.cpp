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

// Function: sub_0040B5B8
// Address: 0x40b5b8 - 0x40b608
void sub_0040B5B8_0x40b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B5B8_0x40b5b8");
#endif

    switch (ctx->pc) {
        case 0x40b5d4u: goto label_40b5d4;
        case 0x40b5e0u: goto label_40b5e0;
        case 0x40b5f0u: goto label_40b5f0;
        default: break;
    }

    ctx->pc = 0x40b5b8u;

    // 0x40b5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b5bc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b5c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b5c4: 0x24a582f0  addiu       $a1, $a1, -0x7D10
    ctx->pc = 0x40b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    // 0x40b5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b5cc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B5CCu;
    SET_GPR_U32(ctx, 31, 0x40B5D4u);
    ctx->pc = 0x40B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B5CCu;
    // 0x40b5d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B5CCu, 0x40B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5D4u;
label_40b5d4:
    // 0x40b5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b5d8: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B5D8u;
    SET_GPR_U32(ctx, 31, 0x40B5E0u);
    ctx->pc = 0x40B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B5D8u;
    // 0x40b5dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B5D8u, 0x40B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5E0u;
label_40b5e0:
    // 0x40b5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40b5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b5e8: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B5E8u;
    SET_GPR_U32(ctx, 31, 0x40B5F0u);
    ctx->pc = 0x40B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B5E8u;
    // 0x40b5ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B5E8u, 0x40B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5F0u;
label_40b5f0:
    // 0x40b5f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x40B5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5FCu;
        // 0x40b600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B604u;
    // 0x40b604: 0x0  nop
    ctx->pc = 0x40b604u;
    // NOP
    ctx->pc = 0x40b608u;
}
