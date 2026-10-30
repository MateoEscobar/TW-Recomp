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

// Function: sub_0040A7D8
// Address: 0x40a7d8 - 0x40a858
void sub_0040A7D8_0x40a7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A7D8_0x40a7d8");
#endif

    switch (ctx->pc) {
        case 0x40a7fcu: goto label_40a7fc;
        case 0x40a808u: goto label_40a808;
        case 0x40a810u: goto label_40a810;
        case 0x40a81cu: goto label_40a81c;
        case 0x40a828u: goto label_40a828;
        case 0x40a834u: goto label_40a834;
        case 0x40a840u: goto label_40a840;
        default: break;
    }

    ctx->pc = 0x40a7d8u;

    // 0x40a7d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a7e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a7e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40a7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a7ec: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a7f4: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A7F4u;
    SET_GPR_U32(ctx, 31, 0x40A7FCu);
    ctx->pc = 0x40A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A7F4u;
    // 0x40a7f8: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A7F4u, 0x40A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A7FCu;
label_40a7fc:
    // 0x40a7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a800: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40A800u;
    SET_GPR_U32(ctx, 31, 0x40A808u);
    ctx->pc = 0x40A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A800u;
    // 0x40a804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40A800u, 0x40A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A808u;
label_40a808:
    // 0x40a808: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A808u;
    SET_GPR_U32(ctx, 31, 0x40A810u);
    ctx->pc = 0x40A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A808u;
    // 0x40a80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A808u, 0x40A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A810u;
label_40a810:
    // 0x40a810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a814: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A814u;
    SET_GPR_U32(ctx, 31, 0x40A81Cu);
    ctx->pc = 0x40A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A814u;
    // 0x40a818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A814u, 0x40A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A81Cu;
label_40a81c:
    // 0x40a81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a820: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40A820u;
    SET_GPR_U32(ctx, 31, 0x40A828u);
    ctx->pc = 0x40A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A820u;
    // 0x40a824: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40A820u, 0x40A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A828u;
label_40a828:
    // 0x40a828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a82c: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40A82Cu;
    SET_GPR_U32(ctx, 31, 0x40A834u);
    ctx->pc = 0x40A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A82Cu;
    // 0x40a830: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40A82Cu, 0x40A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A834u;
label_40a834:
    // 0x40a834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a838: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A838u;
    SET_GPR_U32(ctx, 31, 0x40A840u);
    ctx->pc = 0x40A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A838u;
    // 0x40a83c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A838u, 0x40A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A840u;
label_40a840:
    // 0x40a840: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a84c: 0x3e00008  jr          $ra
    ctx->pc = 0x40A84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A84Cu;
        // 0x40a850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A854u;
    // 0x40a854: 0x0  nop
    ctx->pc = 0x40a854u;
    // NOP
    ctx->pc = 0x40a858u;
}
