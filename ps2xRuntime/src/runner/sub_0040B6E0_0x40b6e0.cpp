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

// Function: sub_0040B6E0
// Address: 0x40b6e0 - 0x40b740
void sub_0040B6E0_0x40b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B6E0_0x40b6e0");
#endif

    switch (ctx->pc) {
        case 0x40b6fcu: goto label_40b6fc;
        case 0x40b708u: goto label_40b708;
        case 0x40b714u: goto label_40b714;
        case 0x40b720u: goto label_40b720;
        case 0x40b72cu: goto label_40b72c;
        default: break;
    }

    ctx->pc = 0x40b6e0u;

    // 0x40b6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b6e4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b6e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b6ec: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x40b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x40b6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b6f4: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B6F4u;
    SET_GPR_U32(ctx, 31, 0x40B6FCu);
    ctx->pc = 0x40B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6F4u;
    // 0x40b6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B6F4u, 0x40B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6FCu;
label_40b6fc:
    // 0x40b6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b700: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40B700u;
    SET_GPR_U32(ctx, 31, 0x40B708u);
    ctx->pc = 0x40B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B700u;
    // 0x40b704: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40B700u, 0x40B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B708u;
label_40b708:
    // 0x40b708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b70c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B70Cu;
    SET_GPR_U32(ctx, 31, 0x40B714u);
    ctx->pc = 0x40B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B70Cu;
    // 0x40b710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B70Cu, 0x40B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B714u;
label_40b714:
    // 0x40b714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b718: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B718u;
    SET_GPR_U32(ctx, 31, 0x40B720u);
    ctx->pc = 0x40B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B718u;
    // 0x40b71c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B718u, 0x40B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B720u;
label_40b720:
    // 0x40b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b724: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40B724u;
    SET_GPR_U32(ctx, 31, 0x40B72Cu);
    ctx->pc = 0x40B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B724u;
    // 0x40b728: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40B724u, 0x40B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B72Cu;
label_40b72c:
    // 0x40b72c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b738: 0x3e00008  jr          $ra
    ctx->pc = 0x40B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B738u;
        // 0x40b73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B740u;
}
