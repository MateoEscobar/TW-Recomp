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

// Function: sub_0037D1C0
// Address: 0x37d1c0 - 0x37d210
void sub_0037D1C0_0x37d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D1C0_0x37d1c0");
#endif

    switch (ctx->pc) {
        case 0x37d1dcu: goto label_37d1dc;
        case 0x37d1e4u: goto label_37d1e4;
        case 0x37d1ecu: goto label_37d1ec;
        case 0x37d1f8u: goto label_37d1f8;
        default: break;
    }

    ctx->pc = 0x37d1c0u;

    // 0x37d1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37d1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d1d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D1D4u;
    SET_GPR_U32(ctx, 31, 0x37D1DCu);
    ctx->pc = 0x37D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1D4u;
    // 0x37d1d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D1D4u, 0x37D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1DCu;
label_37d1dc:
    // 0x37d1dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D1DCu;
    SET_GPR_U32(ctx, 31, 0x37D1E4u);
    ctx->pc = 0x37D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1DCu;
    // 0x37d1e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D1DCu, 0x37D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1E4u;
label_37d1e4:
    // 0x37d1e4: 0xc108e2a  jal         func_4238A8
    ctx->pc = 0x37D1E4u;
    SET_GPR_U32(ctx, 31, 0x37D1ECu);
    ctx->pc = 0x37D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1E4u;
    // 0x37d1e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4238A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4238A8u, 0x37D1E4u, 0x37D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1ECu;
label_37d1ec:
    // 0x37d1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1f0: 0xc102562  jal         func_409588
    ctx->pc = 0x37D1F0u;
    SET_GPR_U32(ctx, 31, 0x37D1F8u);
    ctx->pc = 0x37D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1F0u;
    // 0x37d1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37D1F0u, 0x37D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1F8u;
label_37d1f8:
    // 0x37d1f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37d1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d204: 0x3e00008  jr          $ra
    ctx->pc = 0x37D204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D204u;
        // 0x37d208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D20Cu;
    // 0x37d20c: 0x0  nop
    ctx->pc = 0x37d20cu;
    // NOP
    ctx->pc = 0x37d210u;
}
