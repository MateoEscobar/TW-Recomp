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

// Function: sub_0035D0C8
// Address: 0x35d0c8 - 0x35d120
void sub_0035D0C8_0x35d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D0C8_0x35d0c8");
#endif

    switch (ctx->pc) {
        case 0x35d0e4u: goto label_35d0e4;
        case 0x35d0ecu: goto label_35d0ec;
        case 0x35d0f4u: goto label_35d0f4;
        case 0x35d0fcu: goto label_35d0fc;
        case 0x35d108u: goto label_35d108;
        default: break;
    }

    ctx->pc = 0x35d0c8u;

    // 0x35d0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35d0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d0dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D0DCu;
    SET_GPR_U32(ctx, 31, 0x35D0E4u);
    ctx->pc = 0x35D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0DCu;
    // 0x35d0e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D0DCu, 0x35D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0E4u;
label_35d0e4:
    // 0x35d0e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D0E4u;
    SET_GPR_U32(ctx, 31, 0x35D0ECu);
    ctx->pc = 0x35D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0E4u;
    // 0x35d0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D0E4u, 0x35D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0ECu;
label_35d0ec:
    // 0x35d0ec: 0xc08e614  jal         func_239850
    ctx->pc = 0x35D0ECu;
    SET_GPR_U32(ctx, 31, 0x35D0F4u);
    ctx->pc = 0x35D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0ECu;
    // 0x35d0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239850u, 0x35D0ECu, 0x35D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0F4u;
label_35d0f4:
    // 0x35d0f4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35D0F4u;
    SET_GPR_U32(ctx, 31, 0x35D0FCu);
    ctx->pc = 0x35D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0F4u;
    // 0x35d0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35D0F4u, 0x35D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0FCu;
label_35d0fc:
    // 0x35d0fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d100: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35D100u;
    SET_GPR_U32(ctx, 31, 0x35D108u);
    ctx->pc = 0x35D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D100u;
    // 0x35d104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35D100u, 0x35D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D108u;
label_35d108:
    // 0x35d108: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35d108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d114: 0x3e00008  jr          $ra
    ctx->pc = 0x35D114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D114u;
        // 0x35d118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D11Cu;
    // 0x35d11c: 0x0  nop
    ctx->pc = 0x35d11cu;
    // NOP
    ctx->pc = 0x35d120u;
}
