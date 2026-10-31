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

// Function: sub_00147660
// Address: 0x147660 - 0x1476f0
void sub_00147660_0x147660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147660_0x147660");
#endif

    switch (ctx->pc) {
        case 0x147688u: goto label_147688;
        case 0x147690u: goto label_147690;
        case 0x1476a4u: goto label_1476a4;
        case 0x1476c8u: goto label_1476c8;
        case 0x1476d8u: goto label_1476d8;
        default: break;
    }

    ctx->pc = 0x147660u;

    // 0x147660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147664: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x147664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x147668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14766c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14766cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147670: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x147670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x147674: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x147674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147678: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x147678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14767c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147680: 0xc0e4060  jal         func_390180
    ctx->pc = 0x147680u;
    SET_GPR_U32(ctx, 31, 0x147688u);
    ctx->pc = 0x147684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147680u;
    // 0x147684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x147680u, 0x147688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147688u;
label_147688:
    // 0x147688: 0xc08a61a  jal         func_229868
    ctx->pc = 0x147688u;
    SET_GPR_U32(ctx, 31, 0x147690u);
    ctx->pc = 0x14768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147688u;
    // 0x14768c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x147688u, 0x147690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147690u;
label_147690:
    // 0x147690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x147690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147694: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x147694u;
    {
        const bool branch_taken_0x147694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x147694) {
            ctx->pc = 0x147698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147694u;
            // 0x147698: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1476DCu;
            goto label_1476dc;
        }
    }
    ctx->pc = 0x14769Cu;
    // 0x14769c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x14769Cu;
    SET_GPR_U32(ctx, 31, 0x1476A4u);
    ctx->pc = 0x1476A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14769Cu;
    // 0x1476a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x14769Cu, 0x1476A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476A4u;
label_1476a4:
    // 0x1476a4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x1476a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x1476a8: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1476A8u;
    {
        const bool branch_taken_0x1476a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476a8) {
            ctx->pc = 0x1476ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1476A8u;
            // 0x1476ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1476DCu;
            goto label_1476dc;
        }
    }
    ctx->pc = 0x1476B0u;
    // 0x1476b0: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1476B0u;
    {
        const bool branch_taken_0x1476b0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1476B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476B0u;
        // 0x1476b4: 0x2a22003a  slti        $v0, $s1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476b0) {
            ctx->pc = 0x1476D8u;
            goto label_1476d8;
        }
    }
    ctx->pc = 0x1476B8u;
    // 0x1476b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1476B8u;
    {
        const bool branch_taken_0x1476b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476b8) {
            ctx->pc = 0x1476BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1476B8u;
            // 0x1476bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1476DCu;
            goto label_1476dc;
        }
    }
    ctx->pc = 0x1476C0u;
    // 0x1476c0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1476C0u;
    SET_GPR_U32(ctx, 31, 0x1476C8u);
    ctx->pc = 0x1476C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476C0u;
    // 0x1476c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1476C0u, 0x1476C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476C8u;
label_1476c8:
    // 0x1476c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1476c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1476ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476d0: 0xc051d90  jal         func_147640
    ctx->pc = 0x1476D0u;
    SET_GPR_U32(ctx, 31, 0x1476D8u);
    ctx->pc = 0x1476D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476D0u;
    // 0x1476d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147640u, 0x1476D0u, 0x1476D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476D8u;
label_1476d8:
    // 0x1476d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1476d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1476dc:
    // 0x1476dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1476dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1476e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1476e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1476e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1476e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1476e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1476E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476E8u;
        // 0x1476ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1476F0u;
}
