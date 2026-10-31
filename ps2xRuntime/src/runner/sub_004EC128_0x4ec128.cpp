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

// Function: sub_004EC128
// Address: 0x4ec128 - 0x4ec198
void sub_004EC128_0x4ec128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC128_0x4ec128");
#endif

    switch (ctx->pc) {
        case 0x4ec164u: goto label_4ec164;
        case 0x4ec180u: goto label_4ec180;
        default: break;
    }

    ctx->pc = 0x4ec128u;

    // 0x4ec128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ec128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ec12c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ec130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ec134: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ec138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec13c: 0x2442dad0  addiu       $v0, $v0, -0x2530
    ctx->pc = 0x4ec13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
    // 0x4ec140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ec140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec148: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ec148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec14c: 0x2463db80  addiu       $v1, $v1, -0x2480
    ctx->pc = 0x4ec14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957952));
    // 0x4ec150: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4ec150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4ec154: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4ec154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4ec158: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4ec158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x4ec15c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EC15Cu;
    SET_GPR_U32(ctx, 31, 0x4EC164u);
    ctx->pc = 0x4EC160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC15Cu;
    // 0x4ec160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC15Cu, 0x4EC164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC164u;
label_4ec164:
    // 0x4ec164: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec168: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4ec168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4ec16c: 0x2442a9c8  addiu       $v0, $v0, -0x5638
    ctx->pc = 0x4ec16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945224));
    // 0x4ec170: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EC170u;
    {
        const bool branch_taken_0x4ec170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC170u;
        // 0x4ec174: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec170) {
            ctx->pc = 0x4EC180u;
            goto label_4ec180;
        }
    }
    ctx->pc = 0x4EC178u;
    // 0x4ec178: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EC178u;
    SET_GPR_U32(ctx, 31, 0x4EC180u);
    ctx->pc = 0x4EC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC178u;
    // 0x4ec17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EC178u, 0x4EC180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC180u;
label_4ec180:
    // 0x4ec180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ec180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec18c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC18Cu;
        // 0x4ec190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC194u;
    // 0x4ec194: 0x0  nop
    ctx->pc = 0x4ec194u;
    // NOP
    ctx->pc = 0x4ec198u;
}
