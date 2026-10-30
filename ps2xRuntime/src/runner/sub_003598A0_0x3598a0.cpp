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

// Function: sub_003598A0
// Address: 0x3598a0 - 0x359900
void sub_003598A0_0x3598a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003598A0_0x3598a0");
#endif

    switch (ctx->pc) {
        case 0x3598c0u: goto label_3598c0;
        case 0x3598c8u: goto label_3598c8;
        case 0x3598dcu: goto label_3598dc;
        case 0x3598e8u: goto label_3598e8;
        default: break;
    }

    ctx->pc = 0x3598a0u;

    // 0x3598a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3598a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3598a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3598a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3598a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3598a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3598ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3598acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3598b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3598b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3598b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3598b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3598B8u;
    SET_GPR_U32(ctx, 31, 0x3598C0u);
    ctx->pc = 0x3598BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598B8u;
    // 0x3598bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3598B8u, 0x3598C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598C0u;
label_3598c0:
    // 0x3598c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3598C0u;
    SET_GPR_U32(ctx, 31, 0x3598C8u);
    ctx->pc = 0x3598C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598C0u;
    // 0x3598c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3598C0u, 0x3598C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598C8u;
label_3598c8:
    // 0x3598c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3598c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3598ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3598d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598d4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3598D4u;
    SET_GPR_U32(ctx, 31, 0x3598DCu);
    ctx->pc = 0x3598D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598D4u;
    // 0x3598d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3598D4u, 0x3598DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598DCu;
label_3598dc:
    // 0x3598dc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3598dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3598e0: 0xc08d6f2  jal         func_235BC8
    ctx->pc = 0x3598E0u;
    SET_GPR_U32(ctx, 31, 0x3598E8u);
    ctx->pc = 0x3598E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598E0u;
    // 0x3598e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BC8u, 0x3598E0u, 0x3598E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598E8u;
label_3598e8:
    // 0x3598e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3598e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3598ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3598ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3598f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3598f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3598f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3598f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3598F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3598FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598F8u;
        // 0x3598fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3598F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359900u;
}
