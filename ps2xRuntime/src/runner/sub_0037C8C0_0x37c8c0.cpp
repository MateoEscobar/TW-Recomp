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

// Function: sub_0037C8C0
// Address: 0x37c8c0 - 0x37c960
void sub_0037C8C0_0x37c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C8C0_0x37c8c0");
#endif

    switch (ctx->pc) {
        case 0x37c8ecu: goto label_37c8ec;
        case 0x37c8f4u: goto label_37c8f4;
        case 0x37c908u: goto label_37c908;
        case 0x37c910u: goto label_37c910;
        case 0x37c924u: goto label_37c924;
        case 0x37c92cu: goto label_37c92c;
        case 0x37c93cu: goto label_37c93c;
        default: break;
    }

    ctx->pc = 0x37c8c0u;

    // 0x37c8c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37c8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c8c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37c8cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37c8d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37c8dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37c8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c8e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C8E4u;
    SET_GPR_U32(ctx, 31, 0x37C8ECu);
    ctx->pc = 0x37C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8E4u;
    // 0x37c8e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C8E4u, 0x37C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8ECu;
label_37c8ec:
    // 0x37c8ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C8ECu;
    SET_GPR_U32(ctx, 31, 0x37C8F4u);
    ctx->pc = 0x37C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8ECu;
    // 0x37c8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C8ECu, 0x37C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8F4u;
label_37c8f4:
    // 0x37c8f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8f8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x37c8f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c8fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C900u;
    SET_GPR_U32(ctx, 31, 0x37C908u);
    ctx->pc = 0x37C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C900u;
    // 0x37c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C900u, 0x37C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C908u;
label_37c908:
    // 0x37c908: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C908u;
    SET_GPR_U32(ctx, 31, 0x37C910u);
    ctx->pc = 0x37C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C908u;
    // 0x37c90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C908u, 0x37C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C910u;
label_37c910:
    // 0x37c910: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c914: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x37c914u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c91c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C91Cu;
    SET_GPR_U32(ctx, 31, 0x37C924u);
    ctx->pc = 0x37C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C91Cu;
    // 0x37c920: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C91Cu, 0x37C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C924u;
label_37c924:
    // 0x37c924: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C924u;
    SET_GPR_U32(ctx, 31, 0x37C92Cu);
    ctx->pc = 0x37C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C924u;
    // 0x37c928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C924u, 0x37C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C92Cu;
label_37c92c:
    // 0x37c92c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37c92cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c934: 0xc10890c  jal         func_422430
    ctx->pc = 0x37C934u;
    SET_GPR_U32(ctx, 31, 0x37C93Cu);
    ctx->pc = 0x37C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C934u;
    // 0x37c938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422430u, 0x37C934u, 0x37C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C93Cu;
label_37c93c:
    // 0x37c93c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37c93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c944: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37c944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c94c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37c94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c954: 0x3e00008  jr          $ra
    ctx->pc = 0x37C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C954u;
        // 0x37c958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C95Cu;
    // 0x37c95c: 0x0  nop
    ctx->pc = 0x37c95cu;
    // NOP
    ctx->pc = 0x37c960u;
}
