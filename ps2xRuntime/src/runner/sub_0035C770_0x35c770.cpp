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

// Function: sub_0035C770
// Address: 0x35c770 - 0x35c7d8
void sub_0035C770_0x35c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C770_0x35c770");
#endif

    switch (ctx->pc) {
        case 0x35c788u: goto label_35c788;
        case 0x35c798u: goto label_35c798;
        case 0x35c7b0u: goto label_35c7b0;
        case 0x35c7bcu: goto label_35c7bc;
        default: break;
    }

    ctx->pc = 0x35c770u;

    // 0x35c770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c778: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35c77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c780: 0xc107608  jal         func_41D820
    ctx->pc = 0x35C780u;
    SET_GPR_U32(ctx, 31, 0x35C788u);
    ctx->pc = 0x35C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C780u;
    // 0x35c784: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D820u, 0x35C780u, 0x35C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C788u;
label_35c788:
    // 0x35c788: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x35c788u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35c78c: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x35c78cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x35c790: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35C790u;
    SET_GPR_U32(ctx, 31, 0x35C798u);
    ctx->pc = 0x35C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C790u;
    // 0x35c794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35C790u, 0x35C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C798u;
label_35c798:
    // 0x35c798: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C798u;
    {
        const bool branch_taken_0x35c798 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C798u;
        // 0x35c79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c798) {
            ctx->pc = 0x35C7B4u;
            goto label_35c7b4;
        }
    }
    ctx->pc = 0x35C7A0u;
    // 0x35c7a0: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x35c7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x35c7a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35c7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35c7a8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35C7A8u;
    SET_GPR_U32(ctx, 31, 0x35C7B0u);
    ctx->pc = 0x35C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7A8u;
    // 0x35c7ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35C7A8u, 0x35C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7B0u;
label_35c7b0:
    // 0x35c7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35c7b4:
    // 0x35c7b4: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35C7B4u;
    SET_GPR_U32(ctx, 31, 0x35C7BCu);
    ctx->pc = 0x35C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7B4u;
    // 0x35c7b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35C7B4u, 0x35C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7BCu;
label_35c7bc:
    // 0x35c7bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35c7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7CCu;
        // 0x35c7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C7D4u;
    // 0x35c7d4: 0x0  nop
    ctx->pc = 0x35c7d4u;
    // NOP
    ctx->pc = 0x35c7d8u;
}
