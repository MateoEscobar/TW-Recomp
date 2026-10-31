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

// Function: sub_0030A580
// Address: 0x30a580 - 0x30a608
void sub_0030A580_0x30a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A580_0x30a580");
#endif

    switch (ctx->pc) {
        case 0x30a59cu: goto label_30a59c;
        case 0x30a5acu: goto label_30a5ac;
        case 0x30a5bcu: goto label_30a5bc;
        case 0x30a5f4u: goto label_30a5f4;
        default: break;
    }

    ctx->pc = 0x30a580u;

    // 0x30a580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a588: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30a58c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30a58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a594: 0xc08a61a  jal         func_229868
    ctx->pc = 0x30A594u;
    SET_GPR_U32(ctx, 31, 0x30A59Cu);
    ctx->pc = 0x30A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A594u;
    // 0x30a598: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30A594u, 0x30A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A59Cu;
label_30a59c:
    // 0x30a59c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30A59Cu;
    {
        const bool branch_taken_0x30a59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A59Cu;
        // 0x30a5a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a59c) {
            ctx->pc = 0x30A5F8u;
            goto label_30a5f8;
        }
    }
    ctx->pc = 0x30A5A4u;
    // 0x30a5a4: 0xc087502  jal         func_21D408
    ctx->pc = 0x30A5A4u;
    SET_GPR_U32(ctx, 31, 0x30A5ACu);
    ctx->pc = 0x30A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5A4u;
    // 0x30a5a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30A5A4u, 0x30A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5ACu;
label_30a5ac:
    // 0x30a5ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5b0: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x30a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x30a5b4: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x30A5B4u;
    SET_GPR_U32(ctx, 31, 0x30A5BCu);
    ctx->pc = 0x30A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5B4u;
    // 0x30a5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30A5B4u, 0x30A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5BCu;
label_30a5bc:
    // 0x30a5bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a5bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a5c4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30A5C4u;
    {
        const bool branch_taken_0x30a5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a5c4) {
            ctx->pc = 0x30A5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A5C4u;
            // 0x30a5c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A5F8u;
            goto label_30a5f8;
        }
    }
    ctx->pc = 0x30A5CCu;
    // 0x30a5cc: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A5CCu;
    {
        const bool branch_taken_0x30a5cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5CCu;
        // 0x30a5d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5cc) {
            ctx->pc = 0x30A5ECu;
            goto label_30a5ec;
        }
    }
    ctx->pc = 0x30A5D4u;
    // 0x30a5d4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x30a5d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30a5d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30a5dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A5DCu;
    {
        const bool branch_taken_0x30a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5DCu;
        // 0x30a5e0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5dc) {
            ctx->pc = 0x30A5ECu;
            goto label_30a5ec;
        }
    }
    ctx->pc = 0x30A5E4u;
    // 0x30a5e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30a5e8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x30a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30a5ec:
    // 0x30a5ec: 0xc0ba2f2  jal         func_2E8BC8
    ctx->pc = 0x30A5ECu;
    SET_GPR_U32(ctx, 31, 0x30A5F4u);
    ctx->pc = 0x30A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5ECu;
    // 0x30a5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BC8u, 0x30A5ECu, 0x30A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5F4u;
label_30a5f4:
    // 0x30a5f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30a5f8:
    // 0x30a5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a600: 0x3e00008  jr          $ra
    ctx->pc = 0x30A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A600u;
        // 0x30a604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A608u;
}
