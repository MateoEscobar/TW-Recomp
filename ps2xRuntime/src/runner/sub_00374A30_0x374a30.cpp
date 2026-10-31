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

// Function: sub_00374A30
// Address: 0x374a30 - 0x374a80
void sub_00374A30_0x374a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374A30_0x374a30");
#endif

    switch (ctx->pc) {
        case 0x374a4cu: goto label_374a4c;
        case 0x374a54u: goto label_374a54;
        case 0x374a5cu: goto label_374a5c;
        case 0x374a68u: goto label_374a68;
        default: break;
    }

    ctx->pc = 0x374a30u;

    // 0x374a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x374a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x374a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374A44u;
    SET_GPR_U32(ctx, 31, 0x374A4Cu);
    ctx->pc = 0x374A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A44u;
    // 0x374a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374A44u, 0x374A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A4Cu;
label_374a4c:
    // 0x374a4c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374A4Cu;
    SET_GPR_U32(ctx, 31, 0x374A54u);
    ctx->pc = 0x374A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A4Cu;
    // 0x374a50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374A4Cu, 0x374A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A54u;
label_374a54:
    // 0x374a54: 0xc0c5716  jal         func_315C58
    ctx->pc = 0x374A54u;
    SET_GPR_U32(ctx, 31, 0x374A5Cu);
    ctx->pc = 0x374A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A54u;
    // 0x374a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315C58u, 0x374A54u, 0x374A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A5Cu;
label_374a5c:
    // 0x374a5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x374a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a60: 0xc102542  jal         func_409508
    ctx->pc = 0x374A60u;
    SET_GPR_U32(ctx, 31, 0x374A68u);
    ctx->pc = 0x374A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A60u;
    // 0x374a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x374A60u, 0x374A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A68u;
label_374a68:
    // 0x374a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x374a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374a74: 0x3e00008  jr          $ra
    ctx->pc = 0x374A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A74u;
        // 0x374a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374A7Cu;
    // 0x374a7c: 0x0  nop
    ctx->pc = 0x374a7cu;
    // NOP
    ctx->pc = 0x374a80u;
}
