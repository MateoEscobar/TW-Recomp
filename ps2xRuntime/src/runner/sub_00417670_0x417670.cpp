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

// Function: sub_00417670
// Address: 0x417670 - 0x4176d8
void sub_00417670_0x417670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417670_0x417670");
#endif

    switch (ctx->pc) {
        case 0x41768cu: goto label_41768c;
        case 0x4176b4u: goto label_4176b4;
        default: break;
    }

    ctx->pc = 0x417670u;

    // 0x417670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x417670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x417674: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x417674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x417678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41767c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41767cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417684: 0xc087502  jal         func_21D408
    ctx->pc = 0x417684u;
    SET_GPR_U32(ctx, 31, 0x41768Cu);
    ctx->pc = 0x417688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417684u;
    // 0x417688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x417684u, 0x41768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41768Cu;
label_41768c:
    // 0x41768c: 0x904302d1  lbu         $v1, 0x2D1($v0)
    ctx->pc = 0x41768cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 721)));
    // 0x417690: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x417690u;
    {
        const bool branch_taken_0x417690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x417694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417690u;
        // 0x417694: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417690) {
            ctx->pc = 0x4176BCu;
            goto label_4176bc;
        }
    }
    ctx->pc = 0x417698u;
    // 0x417698: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x417698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x41769c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x41769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x4176a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4176a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4176a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4176a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4176a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176ac: 0xc105db6  jal         func_4176D8
    ctx->pc = 0x4176ACu;
    SET_GPR_U32(ctx, 31, 0x4176B4u);
    ctx->pc = 0x4176B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4176ACu;
    // 0x4176b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4176D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4176D8u, 0x4176ACu, 0x4176B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4176B4u;
label_4176b4:
    // 0x4176b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4176B4u;
    {
        const bool branch_taken_0x4176b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4176B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4176B4u;
        // 0x4176b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4176b4) {
            ctx->pc = 0x4176C4u;
            goto label_4176c4;
        }
    }
    ctx->pc = 0x4176BCu;
label_4176bc:
    // 0x4176bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4176bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4176c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4176c4:
    // 0x4176c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4176c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4176c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4176c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4176cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4176CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4176D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4176CCu;
        // 0x4176d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4176CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4176D4u;
    // 0x4176d4: 0x0  nop
    ctx->pc = 0x4176d4u;
    // NOP
    ctx->pc = 0x4176d8u;
}
