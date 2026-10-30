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

// Function: sub_00358FD0
// Address: 0x358fd0 - 0x359020
void sub_00358FD0_0x358fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358FD0_0x358fd0");
#endif

    switch (ctx->pc) {
        case 0x358fecu: goto label_358fec;
        case 0x358ff4u: goto label_358ff4;
        case 0x358ffcu: goto label_358ffc;
        case 0x359008u: goto label_359008;
        default: break;
    }

    ctx->pc = 0x358fd0u;

    // 0x358fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x358fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x358fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358fe4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358FE4u;
    SET_GPR_U32(ctx, 31, 0x358FECu);
    ctx->pc = 0x358FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FE4u;
    // 0x358fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358FE4u, 0x358FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FECu;
label_358fec:
    // 0x358fec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358FECu;
    SET_GPR_U32(ctx, 31, 0x358FF4u);
    ctx->pc = 0x358FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FECu;
    // 0x358ff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358FECu, 0x358FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FF4u;
label_358ff4:
    // 0x358ff4: 0xc08e030  jal         func_2380C0
    ctx->pc = 0x358FF4u;
    SET_GPR_U32(ctx, 31, 0x358FFCu);
    ctx->pc = 0x358FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FF4u;
    // 0x358ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2380C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2380C0u, 0x358FF4u, 0x358FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FFCu;
label_358ffc:
    // 0x358ffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359000: 0xc102542  jal         func_409508
    ctx->pc = 0x359000u;
    SET_GPR_U32(ctx, 31, 0x359008u);
    ctx->pc = 0x359004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359000u;
    // 0x359004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x359000u, 0x359008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359008u;
label_359008:
    // 0x359008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x359008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35900c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359014: 0x3e00008  jr          $ra
    ctx->pc = 0x359014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359014u;
        // 0x359018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35901Cu;
    // 0x35901c: 0x0  nop
    ctx->pc = 0x35901cu;
    // NOP
    ctx->pc = 0x359020u;
}
