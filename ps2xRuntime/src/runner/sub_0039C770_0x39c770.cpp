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

// Function: sub_0039C770
// Address: 0x39c770 - 0x39c7d8
void sub_0039C770_0x39c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C770_0x39c770");
#endif

    switch (ctx->pc) {
        case 0x39c770u: goto label_39c770;
        case 0x39c774u: goto label_39c774;
        case 0x39c778u: goto label_39c778;
        case 0x39c77cu: goto label_39c77c;
        case 0x39c780u: goto label_39c780;
        case 0x39c784u: goto label_39c784;
        case 0x39c788u: goto label_39c788;
        case 0x39c78cu: goto label_39c78c;
        case 0x39c790u: goto label_39c790;
        case 0x39c794u: goto label_39c794;
        case 0x39c798u: goto label_39c798;
        case 0x39c79cu: goto label_39c79c;
        case 0x39c7a0u: goto label_39c7a0;
        case 0x39c7a4u: goto label_39c7a4;
        case 0x39c7a8u: goto label_39c7a8;
        case 0x39c7acu: goto label_39c7ac;
        case 0x39c7b0u: goto label_39c7b0;
        case 0x39c7b4u: goto label_39c7b4;
        case 0x39c7b8u: goto label_39c7b8;
        case 0x39c7bcu: goto label_39c7bc;
        case 0x39c7c0u: goto label_39c7c0;
        case 0x39c7c4u: goto label_39c7c4;
        case 0x39c7c8u: goto label_39c7c8;
        case 0x39c7ccu: goto label_39c7cc;
        case 0x39c7d0u: goto label_39c7d0;
        case 0x39c7d4u: goto label_39c7d4;
        default: break;
    }

    ctx->pc = 0x39c770u;

label_39c770:
    // 0x39c770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39c774:
    // 0x39c774: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39c778:
    // 0x39c778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39c77c:
    // 0x39c77c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39c77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c780:
    // 0x39c780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c784:
    // 0x39c784: 0x10000006  b           . + 4 + (0x6 << 2)
label_39c788:
    if (ctx->pc == 0x39C788u) {
        ctx->pc = 0x39C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C784u;
        // 0x39c788: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C78Cu;
        goto label_39c78c;
    }
    ctx->pc = 0x39C784u;
    {
        const bool branch_taken_0x39c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C784u;
        // 0x39c788: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c784) {
            ctx->pc = 0x39C7A0u;
            goto label_39c7a0;
        }
    }
    ctx->pc = 0x39C78Cu;
label_39c78c:
    // 0x39c78c: 0x0  nop
    ctx->pc = 0x39c78cu;
    // NOP
label_39c790:
    // 0x39c790: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x39c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39c794:
    // 0x39c794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39c798:
    // 0x39c798: 0xc0e6c08  jal         func_39B020
label_39c79c:
    if (ctx->pc == 0x39C79Cu) {
        ctx->pc = 0x39C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C798u;
        // 0x39c79c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C7A0u;
        goto label_39c7a0;
    }
    ctx->pc = 0x39C798u;
    SET_GPR_U32(ctx, 31, 0x39C7A0u);
    ctx->pc = 0x39C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C798u;
    // 0x39c79c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B020u, 0x39C798u, 0x39C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7A0u;
label_39c7a0:
    // 0x39c7a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39c7a4:
    // 0x39c7a4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39c7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39c7a8:
    // 0x39c7a8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39c7ac:
    // 0x39c7ac: 0x40f809  jalr        $v0
label_39c7b0:
    if (ctx->pc == 0x39C7B0u) {
        ctx->pc = 0x39C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7ACu;
        // 0x39c7b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C7B4u;
        goto label_39c7b4;
    }
    ctx->pc = 0x39C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C7B4u);
        ctx->pc = 0x39C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7ACu;
        // 0x39c7b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C7ACu, 0x39C7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C7B4u;
label_39c7b4:
    // 0x39c7b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x39c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_39c7b8:
    // 0x39c7b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x39c7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39c7bc:
    // 0x39c7bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_39c7c0:
    if (ctx->pc == 0x39C7C0u) {
        ctx->pc = 0x39C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7BCu;
        // 0x39c7c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C7C4u;
        goto label_39c7c4;
    }
    ctx->pc = 0x39C7BCu;
    {
        const bool branch_taken_0x39c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7BCu;
        // 0x39c7c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7bc) {
            ctx->pc = 0x39C790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c790;
        }
    }
    ctx->pc = 0x39C7C4u;
label_39c7c4:
    // 0x39c7c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39c7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c7c8:
    // 0x39c7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c7cc:
    // 0x39c7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c7d0:
    // 0x39c7d0: 0x3e00008  jr          $ra
label_39c7d4:
    if (ctx->pc == 0x39C7D4u) {
        ctx->pc = 0x39C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7D0u;
        // 0x39c7d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C7D8u;
        goto label_fallthrough_0x39c7d0;
    }
    ctx->pc = 0x39C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7D0u;
        // 0x39c7d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c7d0:
    ctx->pc = 0x39C7D8u;
}
