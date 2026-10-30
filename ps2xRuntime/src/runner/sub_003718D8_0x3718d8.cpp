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

// Function: sub_003718D8
// Address: 0x3718d8 - 0x371938
void sub_003718D8_0x3718d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003718D8_0x3718d8");
#endif

    switch (ctx->pc) {
        case 0x3718f8u: goto label_3718f8;
        case 0x371900u: goto label_371900;
        case 0x371914u: goto label_371914;
        case 0x371920u: goto label_371920;
        default: break;
    }

    ctx->pc = 0x3718d8u;

    // 0x3718d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3718d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3718dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3718dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3718e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3718e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3718e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3718e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3718e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3718ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3718ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3718f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3718F0u;
    SET_GPR_U32(ctx, 31, 0x3718F8u);
    ctx->pc = 0x3718F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718F0u;
    // 0x3718f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3718F0u, 0x3718F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3718F8u;
label_3718f8:
    // 0x3718f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3718F8u;
    SET_GPR_U32(ctx, 31, 0x371900u);
    ctx->pc = 0x3718FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718F8u;
    // 0x3718fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3718F8u, 0x371900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371900u;
label_371900:
    // 0x371900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x371900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x371904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37190c: 0xc102488  jal         func_409220
    ctx->pc = 0x37190Cu;
    SET_GPR_U32(ctx, 31, 0x371914u);
    ctx->pc = 0x371910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37190Cu;
    // 0x371910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37190Cu, 0x371914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371914u;
label_371914:
    // 0x371914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371918: 0xc044e04  jal         func_113810
    ctx->pc = 0x371918u;
    SET_GPR_U32(ctx, 31, 0x371920u);
    ctx->pc = 0x37191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371918u;
    // 0x37191c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113810u, 0x371918u, 0x371920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371920u;
label_371920:
    // 0x371920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x371920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37192c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371930: 0x3e00008  jr          $ra
    ctx->pc = 0x371930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371930u;
        // 0x371934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371938u;
}
