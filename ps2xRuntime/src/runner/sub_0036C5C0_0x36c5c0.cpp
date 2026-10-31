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

// Function: sub_0036C5C0
// Address: 0x36c5c0 - 0x36c620
void sub_0036C5C0_0x36c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C5C0_0x36c5c0");
#endif

    switch (ctx->pc) {
        case 0x36c5d8u: goto label_36c5d8;
        case 0x36c5e4u: goto label_36c5e4;
        case 0x36c5fcu: goto label_36c5fc;
        case 0x36c608u: goto label_36c608;
        default: break;
    }

    ctx->pc = 0x36c5c0u;

    // 0x36c5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c5c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c5c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c5d0: 0xc1075c6  jal         func_41D718
    ctx->pc = 0x36C5D0u;
    SET_GPR_U32(ctx, 31, 0x36C5D8u);
    ctx->pc = 0x36C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5D0u;
    // 0x36c5d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D718u, 0x36C5D0u, 0x36C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5D8u;
label_36c5d8:
    // 0x36c5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c5dc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C5DCu;
    SET_GPR_U32(ctx, 31, 0x36C5E4u);
    ctx->pc = 0x36C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5DCu;
    // 0x36c5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C5DCu, 0x36C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5E4u;
label_36c5e4:
    // 0x36c5e4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C5E4u;
    {
        const bool branch_taken_0x36c5e4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C5E4u;
        // 0x36c5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c5e4) {
            ctx->pc = 0x36C600u;
            goto label_36c600;
        }
    }
    ctx->pc = 0x36C5ECu;
    // 0x36c5ec: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36c5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36c5f0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36c5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36c5f4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36C5F4u;
    SET_GPR_U32(ctx, 31, 0x36C5FCu);
    ctx->pc = 0x36C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5F4u;
    // 0x36c5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36C5F4u, 0x36C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5FCu;
label_36c5fc:
    // 0x36c5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c600:
    // 0x36c600: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C600u;
    SET_GPR_U32(ctx, 31, 0x36C608u);
    ctx->pc = 0x36C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C600u;
    // 0x36c604: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C600u, 0x36C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C608u;
label_36c608:
    // 0x36c608: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c618: 0x3e00008  jr          $ra
    ctx->pc = 0x36C618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C618u;
        // 0x36c61c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C620u;
}
