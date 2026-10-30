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

// Function: sub_002600F0
// Address: 0x2600f0 - 0x260178
void sub_002600F0_0x2600f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002600F0_0x2600f0");
#endif

    switch (ctx->pc) {
        case 0x260104u: goto label_260104;
        case 0x260118u: goto label_260118;
        case 0x260128u: goto label_260128;
        case 0x260130u: goto label_260130;
        case 0x260144u: goto label_260144;
        case 0x260154u: goto label_260154;
        default: break;
    }

    ctx->pc = 0x2600f0u;

    // 0x2600f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2600f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2600f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2600f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2600f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2600fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2600FCu;
    SET_GPR_U32(ctx, 31, 0x260104u);
    ctx->pc = 0x260100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2600FCu;
    // 0x260100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2600FCu, 0x260104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260104u;
label_260104:
    // 0x260104: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x260108: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x260108u;
    {
        const bool branch_taken_0x260108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260108) {
            ctx->pc = 0x260128u;
            goto label_260128;
        }
    }
    ctx->pc = 0x260110u;
    // 0x260110: 0xc087502  jal         func_21D408
    ctx->pc = 0x260110u;
    SET_GPR_U32(ctx, 31, 0x260118u);
    ctx->pc = 0x260114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260110u;
    // 0x260114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x260110u, 0x260118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260118u;
label_260118:
    // 0x260118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x260118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26011c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26011cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260120: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x260120u;
    SET_GPR_U32(ctx, 31, 0x260128u);
    ctx->pc = 0x260124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260120u;
    // 0x260124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x260120u, 0x260128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260128u;
label_260128:
    // 0x260128: 0xc08a02c  jal         func_2280B0
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x26012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260128u;
    // 0x26012c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x260128u, 0x260130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x260130u;
    {
        const bool branch_taken_0x260130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260130) {
            ctx->pc = 0x260134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260130u;
            // 0x260134: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26016Cu;
            goto label_26016c;
        }
    }
    ctx->pc = 0x260138u;
    // 0x260138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26013c: 0xc089988  jal         func_226620
    ctx->pc = 0x26013Cu;
    SET_GPR_U32(ctx, 31, 0x260144u);
    ctx->pc = 0x260140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26013Cu;
    // 0x260140: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26013Cu, 0x260144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260144u;
label_260144:
    // 0x260144: 0x3c051800  lui         $a1, 0x1800
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6144 << 16));
    // 0x260148: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x260148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x26014c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x26014Cu;
    SET_GPR_U32(ctx, 31, 0x260154u);
    ctx->pc = 0x260150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26014Cu;
    // 0x260150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26014Cu, 0x260154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260154u;
label_260154:
    // 0x260154: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x260154u;
    {
        const bool branch_taken_0x260154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260154) {
            ctx->pc = 0x260158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260154u;
            // 0x260158: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26016Cu;
            goto label_26016c;
        }
    }
    ctx->pc = 0x26015Cu;
    // 0x26015c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x260160: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x260160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x260164: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x260164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x260168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26016c:
    // 0x26016c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260170: 0x3e00008  jr          $ra
    ctx->pc = 0x260170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260170u;
        // 0x260174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260178u;
}
