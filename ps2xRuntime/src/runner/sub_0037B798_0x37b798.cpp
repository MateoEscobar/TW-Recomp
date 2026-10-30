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

// Function: sub_0037B798
// Address: 0x37b798 - 0x37b7d8
void sub_0037B798_0x37b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B798_0x37b798");
#endif

    switch (ctx->pc) {
        case 0x37b7acu: goto label_37b7ac;
        case 0x37b7b4u: goto label_37b7b4;
        case 0x37b7c0u: goto label_37b7c0;
        default: break;
    }

    ctx->pc = 0x37b798u;

    // 0x37b798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b79c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b7a4: 0xc106afa  jal         func_41ABE8
    ctx->pc = 0x37B7A4u;
    SET_GPR_U32(ctx, 31, 0x37B7ACu);
    ctx->pc = 0x37B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7A4u;
    // 0x37b7a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ABE8u, 0x37B7A4u, 0x37B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7ACu;
label_37b7ac:
    // 0x37b7ac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B7ACu;
    SET_GPR_U32(ctx, 31, 0x37B7B4u);
    ctx->pc = 0x37B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7ACu;
    // 0x37b7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B7ACu, 0x37B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7B4u;
label_37b7b4:
    // 0x37b7b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7b8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B7B8u;
    SET_GPR_U32(ctx, 31, 0x37B7C0u);
    ctx->pc = 0x37B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7B8u;
    // 0x37b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B7B8u, 0x37B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7C0u;
label_37b7c0:
    // 0x37b7c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7CCu;
        // 0x37b7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B7D4u;
    // 0x37b7d4: 0x0  nop
    ctx->pc = 0x37b7d4u;
    // NOP
    ctx->pc = 0x37b7d8u;
}
