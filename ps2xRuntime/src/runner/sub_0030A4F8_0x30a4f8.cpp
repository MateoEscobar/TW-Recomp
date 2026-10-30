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

// Function: sub_0030A4F8
// Address: 0x30a4f8 - 0x30a580
void sub_0030A4F8_0x30a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A4F8_0x30a4f8");
#endif

    switch (ctx->pc) {
        case 0x30a514u: goto label_30a514;
        case 0x30a524u: goto label_30a524;
        case 0x30a534u: goto label_30a534;
        case 0x30a56cu: goto label_30a56c;
        default: break;
    }

    ctx->pc = 0x30a4f8u;

    // 0x30a4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a500: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30a504: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30a504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a50c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x30A50Cu;
    SET_GPR_U32(ctx, 31, 0x30A514u);
    ctx->pc = 0x30A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A50Cu;
    // 0x30a510: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30A50Cu, 0x30A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A514u;
label_30a514:
    // 0x30a514: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30A514u;
    {
        const bool branch_taken_0x30a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A514u;
        // 0x30a518: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a514) {
            ctx->pc = 0x30A570u;
            goto label_30a570;
        }
    }
    ctx->pc = 0x30A51Cu;
    // 0x30a51c: 0xc087502  jal         func_21D408
    ctx->pc = 0x30A51Cu;
    SET_GPR_U32(ctx, 31, 0x30A524u);
    ctx->pc = 0x30A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A51Cu;
    // 0x30a520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30A51Cu, 0x30A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A524u;
label_30a524:
    // 0x30a524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a528: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x30a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x30a52c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x30A52Cu;
    SET_GPR_U32(ctx, 31, 0x30A534u);
    ctx->pc = 0x30A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A52Cu;
    // 0x30a530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30A52Cu, 0x30A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A534u;
label_30a534:
    // 0x30a534: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a53c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30A53Cu;
    {
        const bool branch_taken_0x30a53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a53c) {
            ctx->pc = 0x30A540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A53Cu;
            // 0x30a540: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A570u;
            goto label_30a570;
        }
    }
    ctx->pc = 0x30A544u;
    // 0x30a544: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A544u;
    {
        const bool branch_taken_0x30a544 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A544u;
        // 0x30a548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a544) {
            ctx->pc = 0x30A564u;
            goto label_30a564;
        }
    }
    ctx->pc = 0x30A54Cu;
    // 0x30a54c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x30a54cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30a550: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30a550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30a554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A554u;
    {
        const bool branch_taken_0x30a554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A554u;
        // 0x30a558: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a554) {
            ctx->pc = 0x30A564u;
            goto label_30a564;
        }
    }
    ctx->pc = 0x30A55Cu;
    // 0x30a55c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30a560: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30a564:
    // 0x30a564: 0xc0ba216  jal         func_2E8858
    ctx->pc = 0x30A564u;
    SET_GPR_U32(ctx, 31, 0x30A56Cu);
    ctx->pc = 0x30A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A564u;
    // 0x30a568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8858u, 0x30A564u, 0x30A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A56Cu;
label_30a56c:
    // 0x30a56c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30a570:
    // 0x30a570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a578: 0x3e00008  jr          $ra
    ctx->pc = 0x30A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A578u;
        // 0x30a57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A580u;
}
