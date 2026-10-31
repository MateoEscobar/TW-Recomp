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

// Function: sub_002BA580
// Address: 0x2ba580 - 0x2ba608
void sub_002BA580_0x2ba580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA580_0x2ba580");
#endif

    switch (ctx->pc) {
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5acu: goto label_2ba5ac;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5f0u: goto label_2ba5f0;
        default: break;
    }

    ctx->pc = 0x2ba580u;

    // 0x2ba580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ba580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ba584: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ba584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ba588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ba588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ba58c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ba58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba590: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ba590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ba594: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ba594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ba598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba59c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2BA59Cu;
    SET_GPR_U32(ctx, 31, 0x2BA5A4u);
    ctx->pc = 0x2BA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA59Cu;
    // 0x2ba5a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BA59Cu, 0x2BA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5A4u;
label_2ba5a4:
    // 0x2ba5a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2BA5A4u;
    SET_GPR_U32(ctx, 31, 0x2BA5ACu);
    ctx->pc = 0x2BA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5A4u;
    // 0x2ba5a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2BA5A4u, 0x2BA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5ACu;
label_2ba5ac:
    // 0x2ba5ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BA5ACu;
    {
        const bool branch_taken_0x2ba5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5ACu;
        // 0x2ba5b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5ac) {
            ctx->pc = 0x2BA5F4u;
            goto label_2ba5f4;
        }
    }
    ctx->pc = 0x2BA5B4u;
    // 0x2ba5b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BA5B4u;
    SET_GPR_U32(ctx, 31, 0x2BA5BCu);
    ctx->pc = 0x2BA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5B4u;
    // 0x2ba5b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BA5B4u, 0x2BA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5BCu;
label_2ba5bc:
    // 0x2ba5bc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2BA5BCu;
    SET_GPR_U32(ctx, 31, 0x2BA5C4u);
    ctx->pc = 0x2BA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5BCu;
    // 0x2ba5c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BA5BCu, 0x2BA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5C4u;
label_2ba5c4:
    // 0x2ba5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA5C8u;
    {
        const bool branch_taken_0x2ba5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5C8u;
        // 0x2ba5cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5c8) {
            ctx->pc = 0x2BA5E4u;
            goto label_2ba5e4;
        }
    }
    ctx->pc = 0x2BA5D0u;
    // 0x2ba5d0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2ba5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5dc: 0xc0ae982  jal         func_2BA608
    ctx->pc = 0x2BA5DCu;
    SET_GPR_U32(ctx, 31, 0x2BA5E4u);
    ctx->pc = 0x2BA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5DCu;
    // 0x2ba5e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA608u, 0x2BA5DCu, 0x2BA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5E4u;
label_2ba5e4:
    // 0x2ba5e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5e8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2BA5E8u;
    SET_GPR_U32(ctx, 31, 0x2BA5F0u);
    ctx->pc = 0x2BA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5E8u;
    // 0x2ba5ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BA5E8u, 0x2BA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5F0u;
label_2ba5f0:
    // 0x2ba5f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ba5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba5f4:
    // 0x2ba5f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ba5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba5fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba600: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA600u;
        // 0x2ba604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA608u;
}
