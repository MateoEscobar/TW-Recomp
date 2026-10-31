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

// Function: sub_0032D828
// Address: 0x32d828 - 0x32d8b8
void sub_0032D828_0x32d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D828_0x32d828");
#endif

    switch (ctx->pc) {
        case 0x32d848u: goto label_32d848;
        case 0x32d85cu: goto label_32d85c;
        case 0x32d868u: goto label_32d868;
        case 0x32d870u: goto label_32d870;
        case 0x32d878u: goto label_32d878;
        case 0x32d894u: goto label_32d894;
        case 0x32d89cu: goto label_32d89c;
        default: break;
    }

    ctx->pc = 0x32d828u;

    // 0x32d828: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
    // 0x32d82c: 0x7fb00530  sq          $s0, 0x530($sp)
    ctx->pc = 0x32d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 16));
    // 0x32d830: 0x7fb10520  sq          $s1, 0x520($sp)
    ctx->pc = 0x32d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 17));
    // 0x32d834: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d838: 0xffbf0510  sd          $ra, 0x510($sp)
    ctx->pc = 0x32d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 31));
    // 0x32d83c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d840: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x32D840u;
    SET_GPR_U32(ctx, 31, 0x32D848u);
    ctx->pc = 0x32D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D840u;
    // 0x32d844: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x32D840u, 0x32D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D848u;
label_32d848:
    // 0x32d848: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32d848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d84c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d850: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32d850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d854: 0xc0ca91e  jal         func_32A478
    ctx->pc = 0x32D854u;
    SET_GPR_U32(ctx, 31, 0x32D85Cu);
    ctx->pc = 0x32D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D854u;
    // 0x32d858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A478u, 0x32D854u, 0x32D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D85Cu;
label_32d85c:
    // 0x32d85c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x32d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32d860: 0xc0cb596  jal         func_32D658
    ctx->pc = 0x32D860u;
    SET_GPR_U32(ctx, 31, 0x32D868u);
    ctx->pc = 0x32D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D860u;
    // 0x32d864: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D658u, 0x32D860u, 0x32D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D868u;
label_32d868:
    // 0x32d868: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32D868u;
    SET_GPR_U32(ctx, 31, 0x32D870u);
    ctx->pc = 0x32D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D868u;
    // 0x32d86c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32D868u, 0x32D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D870u;
label_32d870:
    // 0x32d870: 0xc0cbd4e  jal         func_32F538
    ctx->pc = 0x32D870u;
    SET_GPR_U32(ctx, 31, 0x32D878u);
    ctx->pc = 0x32D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D870u;
    // 0x32d874: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F538u, 0x32D870u, 0x32D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D878u;
label_32d878:
    // 0x32d878: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x32d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d87c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32d87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32d880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32d880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d884: 0x24c65d08  addiu       $a2, $a2, 0x5D08
    ctx->pc = 0x32d884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23816));
    // 0x32d888: 0x38a5011c  xori        $a1, $a1, 0x11C
    ctx->pc = 0x32d888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)284);
    // 0x32d88c: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32D88Cu;
    SET_GPR_U32(ctx, 31, 0x32D894u);
    ctx->pc = 0x32D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D88Cu;
    // 0x32d890: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32D88Cu, 0x32D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D894u;
label_32d894:
    // 0x32d894: 0xc0cb5ba  jal         func_32D6E8
    ctx->pc = 0x32D894u;
    SET_GPR_U32(ctx, 31, 0x32D89Cu);
    ctx->pc = 0x32D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D894u;
    // 0x32d898: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6E8u, 0x32D894u, 0x32D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D89Cu;
label_32d89c:
    // 0x32d89c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x32d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d8a0: 0x7bb00530  lq          $s0, 0x530($sp)
    ctx->pc = 0x32d8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x32d8a4: 0x7bb10520  lq          $s1, 0x520($sp)
    ctx->pc = 0x32d8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x32d8a8: 0xdfbf0510  ld          $ra, 0x510($sp)
    ctx->pc = 0x32d8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x32d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8ACu;
        // 0x32d8b0: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D8B4u;
    // 0x32d8b4: 0x0  nop
    ctx->pc = 0x32d8b4u;
    // NOP
    ctx->pc = 0x32d8b8u;
}
