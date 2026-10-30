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

// Function: sub_0040B318
// Address: 0x40b318 - 0x40b3a0
void sub_0040B318_0x40b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B318_0x40b318");
#endif

    switch (ctx->pc) {
        case 0x40b33cu: goto label_40b33c;
        case 0x40b348u: goto label_40b348;
        case 0x40b354u: goto label_40b354;
        case 0x40b360u: goto label_40b360;
        case 0x40b36cu: goto label_40b36c;
        case 0x40b378u: goto label_40b378;
        case 0x40b388u: goto label_40b388;
        default: break;
    }

    ctx->pc = 0x40b318u;

    // 0x40b318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b31c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x40b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40b320: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b328: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40b328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x40b32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40b32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b334: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x40B334u;
    SET_GPR_U32(ctx, 31, 0x40B33Cu);
    ctx->pc = 0x40B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B334u;
    // 0x40b338: 0x26108328  addiu       $s0, $s0, -0x7CD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x40B334u, 0x40B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B33Cu;
label_40b33c:
    // 0x40b33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b340: 0xc103090  jal         func_40C240
    ctx->pc = 0x40B340u;
    SET_GPR_U32(ctx, 31, 0x40B348u);
    ctx->pc = 0x40B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B340u;
    // 0x40b344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C240u, 0x40B340u, 0x40B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B348u;
label_40b348:
    // 0x40b348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b34c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B34Cu;
    SET_GPR_U32(ctx, 31, 0x40B354u);
    ctx->pc = 0x40B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B34Cu;
    // 0x40b350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B34Cu, 0x40B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B354u;
label_40b354:
    // 0x40b354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b358: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40B358u;
    SET_GPR_U32(ctx, 31, 0x40B360u);
    ctx->pc = 0x40B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B358u;
    // 0x40b35c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40B358u, 0x40B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B360u;
label_40b360:
    // 0x40b360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b364: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B364u;
    SET_GPR_U32(ctx, 31, 0x40B36Cu);
    ctx->pc = 0x40B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B364u;
    // 0x40b368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B364u, 0x40B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B36Cu;
label_40b36c:
    // 0x40b36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b370: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B370u;
    SET_GPR_U32(ctx, 31, 0x40B378u);
    ctx->pc = 0x40B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B370u;
    // 0x40b374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B370u, 0x40B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B378u;
label_40b378:
    // 0x40b378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b37c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40b380: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B380u;
    SET_GPR_U32(ctx, 31, 0x40B388u);
    ctx->pc = 0x40B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B380u;
    // 0x40b384: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B380u, 0x40B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B388u;
label_40b388:
    // 0x40b388: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b398: 0x3e00008  jr          $ra
    ctx->pc = 0x40B398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B398u;
        // 0x40b39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B3A0u;
}
