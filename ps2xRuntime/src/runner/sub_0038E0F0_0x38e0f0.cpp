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

// Function: sub_0038E0F0
// Address: 0x38e0f0 - 0x38e168
void sub_0038E0F0_0x38e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E0F0_0x38e0f0");
#endif

    switch (ctx->pc) {
        case 0x38e114u: goto label_38e114;
        case 0x38e130u: goto label_38e130;
        case 0x38e140u: goto label_38e140;
        case 0x38e154u: goto label_38e154;
        default: break;
    }

    ctx->pc = 0x38e0f0u;

    // 0x38e0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38e0f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38e0f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38e0fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38e0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e100: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38e104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38e104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e10c: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38E10Cu;
    SET_GPR_U32(ctx, 31, 0x38E114u);
    ctx->pc = 0x38E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E10Cu;
    // 0x38e110: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38E10Cu, 0x38E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E114u;
label_38e114:
    // 0x38e114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e118: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x38E118u;
    {
        const bool branch_taken_0x38e118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e118) {
            ctx->pc = 0x38E11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E118u;
            // 0x38e11c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E158u;
            goto label_38e158;
        }
    }
    ctx->pc = 0x38E120u;
    // 0x38e120: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E120u;
    {
        const bool branch_taken_0x38e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E120u;
        // 0x38e124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e120) {
            ctx->pc = 0x38E138u;
            goto label_38e138;
        }
    }
    ctx->pc = 0x38E128u;
    // 0x38e128: 0xc0e354a  jal         func_38D528
    ctx->pc = 0x38E128u;
    SET_GPR_U32(ctx, 31, 0x38E130u);
    ctx->pc = 0x38E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E128u;
    // 0x38e12c: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D528u, 0x38E128u, 0x38E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E130u;
label_38e130:
    // 0x38e130: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38E130u;
    {
        const bool branch_taken_0x38e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E130u;
        // 0x38e134: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e130) {
            ctx->pc = 0x38E158u;
            goto label_38e158;
        }
    }
    ctx->pc = 0x38E138u;
label_38e138:
    // 0x38e138: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38E138u;
    SET_GPR_U32(ctx, 31, 0x38E140u);
    ctx->pc = 0x38E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E138u;
    // 0x38e13c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38E138u, 0x38E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E140u;
label_38e140:
    // 0x38e140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E140u;
    {
        const bool branch_taken_0x38e140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E140u;
        // 0x38e144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e140) {
            ctx->pc = 0x38E154u;
            goto label_38e154;
        }
    }
    ctx->pc = 0x38E148u;
    // 0x38e148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e14c: 0xc0e354e  jal         func_38D538
    ctx->pc = 0x38E14Cu;
    SET_GPR_U32(ctx, 31, 0x38E154u);
    ctx->pc = 0x38E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E14Cu;
    // 0x38e150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D538u, 0x38E14Cu, 0x38E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E154u;
label_38e154:
    // 0x38e154: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38e154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e158:
    // 0x38e158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38e158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e160: 0x3e00008  jr          $ra
    ctx->pc = 0x38E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E160u;
        // 0x38e164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E168u;
}
