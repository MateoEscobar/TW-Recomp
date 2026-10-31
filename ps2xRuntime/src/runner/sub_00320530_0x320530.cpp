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

// Function: sub_00320530
// Address: 0x320530 - 0x3205b0
void sub_00320530_0x320530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320530_0x320530");
#endif

    switch (ctx->pc) {
        case 0x320554u: goto label_320554;
        case 0x320568u: goto label_320568;
        case 0x320588u: goto label_320588;
        case 0x320594u: goto label_320594;
        default: break;
    }

    ctx->pc = 0x320530u;

    // 0x320530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x320534: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x320534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x320538: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x320538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32053c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x32053cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x320540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x320540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x320544: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x320544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x320548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32054c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x32054Cu;
    SET_GPR_U32(ctx, 31, 0x320554u);
    ctx->pc = 0x320550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32054Cu;
    // 0x320550: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x32054Cu, 0x320554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320554u;
label_320554:
    // 0x320554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320558: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x320558u;
    {
        const bool branch_taken_0x320558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320558u;
        // 0x32055c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320558) {
            ctx->pc = 0x320598u;
            goto label_320598;
        }
    }
    ctx->pc = 0x320560u;
    // 0x320560: 0xc0c1956  jal         func_306558
    ctx->pc = 0x320560u;
    SET_GPR_U32(ctx, 31, 0x320568u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x320560u, 0x320568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320568u;
label_320568:
    // 0x320568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32056c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32056Cu;
    {
        const bool branch_taken_0x32056c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32056Cu;
        // 0x320570: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32056c) {
            ctx->pc = 0x320588u;
            goto label_320588;
        }
    }
    ctx->pc = 0x320574u;
    // 0x320574: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x320574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x320578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32057c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320580: 0xc0c816c  jal         func_3205B0
    ctx->pc = 0x320580u;
    SET_GPR_U32(ctx, 31, 0x320588u);
    ctx->pc = 0x320584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320580u;
    // 0x320584: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3205B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3205B0u, 0x320580u, 0x320588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320588u;
label_320588:
    // 0x320588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32058c: 0xc059590  jal         func_165640
    ctx->pc = 0x32058Cu;
    SET_GPR_U32(ctx, 31, 0x320594u);
    ctx->pc = 0x320590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32058Cu;
    // 0x320590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x32058Cu, 0x320594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320594u;
label_320594:
    // 0x320594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x320594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_320598:
    // 0x320598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x320598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32059c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32059cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3205a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3205a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3205a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3205A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3205A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205A4u;
        // 0x3205a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3205A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3205ACu;
    // 0x3205ac: 0x0  nop
    ctx->pc = 0x3205acu;
    // NOP
    ctx->pc = 0x3205b0u;
}
