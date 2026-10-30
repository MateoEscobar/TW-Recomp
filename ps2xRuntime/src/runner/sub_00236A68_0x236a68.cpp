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

// Function: sub_00236A68
// Address: 0x236a68 - 0x236ad0
void sub_00236A68_0x236a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A68_0x236a68");
#endif

    switch (ctx->pc) {
        case 0x236a80u: goto label_236a80;
        case 0x236a88u: goto label_236a88;
        case 0x236a9cu: goto label_236a9c;
        default: break;
    }

    ctx->pc = 0x236a68u;

    // 0x236a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236a6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236a70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236a78: 0xc0e4060  jal         func_390180
    ctx->pc = 0x236A78u;
    SET_GPR_U32(ctx, 31, 0x236A80u);
    ctx->pc = 0x236A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A78u;
    // 0x236a7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x236A78u, 0x236A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A80u;
label_236a80:
    // 0x236a80: 0xc08a61a  jal         func_229868
    ctx->pc = 0x236A80u;
    SET_GPR_U32(ctx, 31, 0x236A88u);
    ctx->pc = 0x236A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A80u;
    // 0x236a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x236A80u, 0x236A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A88u;
label_236a88:
    // 0x236a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a8c: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x236A8Cu;
    {
        const bool branch_taken_0x236a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a8c) {
            ctx->pc = 0x236A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A8Cu;
            // 0x236a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236AC4u;
            goto label_236ac4;
        }
    }
    ctx->pc = 0x236A94u;
    // 0x236a94: 0xc088c98  jal         func_223260
    ctx->pc = 0x236A94u;
    SET_GPR_U32(ctx, 31, 0x236A9Cu);
    ctx->pc = 0x236A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A94u;
    // 0x236a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x236A94u, 0x236A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A9Cu;
label_236a9c:
    // 0x236a9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x236aa0: 0xae020650  sw          $v0, 0x650($s0)
    ctx->pc = 0x236aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
    // 0x236aa4: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x236aa8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x236aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x236aac: 0xae000654  sw          $zero, 0x654($s0)
    ctx->pc = 0x236aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 0));
    // 0x236ab0: 0x8c830290  lw          $v1, 0x290($a0)
    ctx->pc = 0x236ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510290u));
    // 0x236ab4: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x236ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x236ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236abc: 0xae020648  sw          $v0, 0x648($s0)
    ctx->pc = 0x236abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1608), GPR_U32(ctx, 2));
    // 0x236ac0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236ac4:
    // 0x236ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x236AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AC8u;
        // 0x236acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236AD0u;
}
