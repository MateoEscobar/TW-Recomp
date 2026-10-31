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

// Function: sub_003586F0
// Address: 0x3586f0 - 0x358750
void sub_003586F0_0x3586f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003586F0_0x3586f0");
#endif

    switch (ctx->pc) {
        case 0x358710u: goto label_358710;
        case 0x358718u: goto label_358718;
        case 0x35872cu: goto label_35872c;
        case 0x358738u: goto label_358738;
        default: break;
    }

    ctx->pc = 0x3586f0u;

    // 0x3586f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3586f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3586f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3586f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3586f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3586f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3586fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3586fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358708: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358708u;
    SET_GPR_U32(ctx, 31, 0x358710u);
    ctx->pc = 0x35870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358708u;
    // 0x35870c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358708u, 0x358710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358710u;
label_358710:
    // 0x358710: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358710u;
    SET_GPR_U32(ctx, 31, 0x358718u);
    ctx->pc = 0x358714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358710u;
    // 0x358714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358710u, 0x358718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358718u;
label_358718:
    // 0x358718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35871c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358724: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358724u;
    SET_GPR_U32(ctx, 31, 0x35872Cu);
    ctx->pc = 0x358728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358724u;
    // 0x358728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358724u, 0x35872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35872Cu;
label_35872c:
    // 0x35872c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35872cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358730: 0xc08dd1a  jal         func_237468
    ctx->pc = 0x358730u;
    SET_GPR_U32(ctx, 31, 0x358738u);
    ctx->pc = 0x358734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358730u;
    // 0x358734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237468u, 0x358730u, 0x358738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358738u;
label_358738:
    // 0x358738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35873c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35873cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358748: 0x3e00008  jr          $ra
    ctx->pc = 0x358748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358748u;
        // 0x35874c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358750u;
}
