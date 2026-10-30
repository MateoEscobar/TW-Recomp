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

// Function: sub_002FA878
// Address: 0x2fa878 - 0x2fa918
void sub_002FA878_0x2fa878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA878_0x2fa878");
#endif

    switch (ctx->pc) {
        case 0x2fa8a8u: goto label_2fa8a8;
        case 0x2fa8b0u: goto label_2fa8b0;
        case 0x2fa8c4u: goto label_2fa8c4;
        case 0x2fa8ccu: goto label_2fa8cc;
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8fcu: goto label_2fa8fc;
        default: break;
    }

    ctx->pc = 0x2fa878u;

    // 0x2fa878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fa87c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fa87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fa880: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2fa880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2fa884: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2fa884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa888: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fa888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fa88c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2fa88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa890: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2fa890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2fa894: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fa894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa898: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2fa898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2fa89c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fa8a0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FA8A0u;
    SET_GPR_U32(ctx, 31, 0x2FA8A8u);
    ctx->pc = 0x2FA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8A0u;
    // 0x2fa8a4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FA8A0u, 0x2FA8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8A8u;
label_2fa8a8:
    // 0x2fa8a8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FA8A8u;
    SET_GPR_U32(ctx, 31, 0x2FA8B0u);
    ctx->pc = 0x2FA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8A8u;
    // 0x2fa8ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FA8A8u, 0x2FA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8B0u;
label_2fa8b0:
    // 0x2fa8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fa8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8b4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FA8B4u;
    {
        const bool branch_taken_0x2fa8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8B4u;
        // 0x2fa8b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8b4) {
            ctx->pc = 0x2FA900u;
            goto label_2fa900;
        }
    }
    ctx->pc = 0x2FA8BCu;
    // 0x2fa8bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FA8BCu;
    SET_GPR_U32(ctx, 31, 0x2FA8C4u);
    ctx->pc = 0x2FA8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8BCu;
    // 0x2fa8c0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FA8BCu, 0x2FA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8C4u;
label_2fa8c4:
    // 0x2fa8c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FA8C4u;
    SET_GPR_U32(ctx, 31, 0x2FA8CCu);
    ctx->pc = 0x2FA8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8C4u;
    // 0x2fa8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FA8C4u, 0x2FA8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8CCu;
label_2fa8cc:
    // 0x2fa8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8d0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA8D0u;
    {
        const bool branch_taken_0x2fa8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8d0) {
            ctx->pc = 0x2FA8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA8D0u;
            // 0x2fa8d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA900u;
            goto label_2fa900;
        }
    }
    ctx->pc = 0x2FA8D8u;
    // 0x2fa8d8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FA8D8u;
    SET_GPR_U32(ctx, 31, 0x2FA8E0u);
    ctx->pc = 0x2FA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8D8u;
    // 0x2fa8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FA8D8u, 0x2FA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fa8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fa8e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fa8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fa8e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8f4: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2FA8F4u;
    SET_GPR_U32(ctx, 31, 0x2FA8FCu);
    ctx->pc = 0x2FA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8F4u;
    // 0x2fa8f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2FA8F4u, 0x2FA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8FCu;
label_2fa8fc:
    // 0x2fa8fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2fa8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fa900:
    // 0x2fa900: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2fa900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa904: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fa904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa908: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2fa908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa910: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA910u;
        // 0x2fa914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA918u;
}
