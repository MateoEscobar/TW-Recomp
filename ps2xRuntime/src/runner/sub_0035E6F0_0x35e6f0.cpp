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

// Function: sub_0035E6F0
// Address: 0x35e6f0 - 0x35e750
void sub_0035E6F0_0x35e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E6F0_0x35e6f0");
#endif

    switch (ctx->pc) {
        case 0x35e710u: goto label_35e710;
        case 0x35e718u: goto label_35e718;
        case 0x35e72cu: goto label_35e72c;
        case 0x35e738u: goto label_35e738;
        default: break;
    }

    ctx->pc = 0x35e6f0u;

    // 0x35e6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e6f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e708: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E708u;
    SET_GPR_U32(ctx, 31, 0x35E710u);
    ctx->pc = 0x35E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E708u;
    // 0x35e70c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E708u, 0x35E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E710u;
label_35e710:
    // 0x35e710: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E710u;
    SET_GPR_U32(ctx, 31, 0x35E718u);
    ctx->pc = 0x35E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E710u;
    // 0x35e714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E710u, 0x35E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E718u;
label_35e718:
    // 0x35e718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e724: 0xc102488  jal         func_409220
    ctx->pc = 0x35E724u;
    SET_GPR_U32(ctx, 31, 0x35E72Cu);
    ctx->pc = 0x35E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E724u;
    // 0x35e728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E724u, 0x35E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E72Cu;
label_35e72c:
    // 0x35e72c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e730: 0xc06d704  jal         func_1B5C10
    ctx->pc = 0x35E730u;
    SET_GPR_U32(ctx, 31, 0x35E738u);
    ctx->pc = 0x35E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E730u;
    // 0x35e734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C10u, 0x35E730u, 0x35E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E738u;
label_35e738:
    // 0x35e738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e73c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e748: 0x3e00008  jr          $ra
    ctx->pc = 0x35E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E748u;
        // 0x35e74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E750u;
}
