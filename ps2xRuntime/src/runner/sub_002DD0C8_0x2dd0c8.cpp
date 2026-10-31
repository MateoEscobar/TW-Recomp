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

// Function: sub_002DD0C8
// Address: 0x2dd0c8 - 0x2dd148
void sub_002DD0C8_0x2dd0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD0C8_0x2dd0c8");
#endif

    switch (ctx->pc) {
        case 0x2dd0ecu: goto label_2dd0ec;
        case 0x2dd0f4u: goto label_2dd0f4;
        case 0x2dd104u: goto label_2dd104;
        case 0x2dd10cu: goto label_2dd10c;
        case 0x2dd124u: goto label_2dd124;
        case 0x2dd130u: goto label_2dd130;
        default: break;
    }

    ctx->pc = 0x2dd0c8u;

    // 0x2dd0c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dd0cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dd0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dd0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd0d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2dd0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2dd0dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2dd0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2dd0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd0e4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DD0E4u;
    SET_GPR_U32(ctx, 31, 0x2DD0ECu);
    ctx->pc = 0x2DD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0E4u;
    // 0x2dd0e8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DD0E4u, 0x2DD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0ECu;
label_2dd0ec:
    // 0x2dd0ec: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DD0ECu;
    SET_GPR_U32(ctx, 31, 0x2DD0F4u);
    ctx->pc = 0x2DD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0ECu;
    // 0x2dd0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DD0ECu, 0x2DD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0F4u;
label_2dd0f4:
    // 0x2dd0f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DD0F4u;
    {
        const bool branch_taken_0x2dd0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F4u;
        // 0x2dd0f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0f4) {
            ctx->pc = 0x2DD134u;
            goto label_2dd134;
        }
    }
    ctx->pc = 0x2DD0FCu;
    // 0x2dd0fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DD0FCu;
    SET_GPR_U32(ctx, 31, 0x2DD104u);
    ctx->pc = 0x2DD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0FCu;
    // 0x2dd100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DD0FCu, 0x2DD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD104u;
label_2dd104:
    // 0x2dd104: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DD104u;
    SET_GPR_U32(ctx, 31, 0x2DD10Cu);
    ctx->pc = 0x2DD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD104u;
    // 0x2dd108: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DD104u, 0x2DD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD10Cu;
label_2dd10c:
    // 0x2dd10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd110: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD110u;
    {
        const bool branch_taken_0x2dd110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD110u;
        // 0x2dd114: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd110) {
            ctx->pc = 0x2DD124u;
            goto label_2dd124;
        }
    }
    ctx->pc = 0x2DD118u;
    // 0x2dd118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd11c: 0xc0b7452  jal         func_2DD148
    ctx->pc = 0x2DD11Cu;
    SET_GPR_U32(ctx, 31, 0x2DD124u);
    ctx->pc = 0x2DD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD11Cu;
    // 0x2dd120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD148u, 0x2DD11Cu, 0x2DD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD124u;
label_2dd124:
    // 0x2dd124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd128: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DD128u;
    SET_GPR_U32(ctx, 31, 0x2DD130u);
    ctx->pc = 0x2DD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD128u;
    // 0x2dd12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DD128u, 0x2DD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD130u;
label_2dd130:
    // 0x2dd130: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dd130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd134:
    // 0x2dd134: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dd134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd140: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD140u;
        // 0x2dd144: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD148u;
}
