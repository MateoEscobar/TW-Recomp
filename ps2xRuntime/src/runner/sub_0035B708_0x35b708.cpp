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

// Function: sub_0035B708
// Address: 0x35b708 - 0x35b758
void sub_0035B708_0x35b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B708_0x35b708");
#endif

    switch (ctx->pc) {
        case 0x35b724u: goto label_35b724;
        case 0x35b72cu: goto label_35b72c;
        case 0x35b734u: goto label_35b734;
        case 0x35b740u: goto label_35b740;
        default: break;
    }

    ctx->pc = 0x35b708u;

    // 0x35b708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b71c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B71Cu;
    SET_GPR_U32(ctx, 31, 0x35B724u);
    ctx->pc = 0x35B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B71Cu;
    // 0x35b720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B71Cu, 0x35B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B724u;
label_35b724:
    // 0x35b724: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B724u;
    SET_GPR_U32(ctx, 31, 0x35B72Cu);
    ctx->pc = 0x35B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B724u;
    // 0x35b728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B724u, 0x35B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B72Cu;
label_35b72c:
    // 0x35b72c: 0xc08d5d6  jal         func_235758
    ctx->pc = 0x35B72Cu;
    SET_GPR_U32(ctx, 31, 0x35B734u);
    ctx->pc = 0x35B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B72Cu;
    // 0x35b730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235758u, 0x35B72Cu, 0x35B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B734u;
label_35b734:
    // 0x35b734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b738: 0xc102562  jal         func_409588
    ctx->pc = 0x35B738u;
    SET_GPR_U32(ctx, 31, 0x35B740u);
    ctx->pc = 0x35B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B738u;
    // 0x35b73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B738u, 0x35B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B740u;
label_35b740:
    // 0x35b740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B74Cu;
        // 0x35b750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B754u;
    // 0x35b754: 0x0  nop
    ctx->pc = 0x35b754u;
    // NOP
    ctx->pc = 0x35b758u;
}
