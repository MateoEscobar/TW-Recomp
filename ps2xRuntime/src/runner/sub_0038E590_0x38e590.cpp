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

// Function: sub_0038E590
// Address: 0x38e590 - 0x38e5f8
void sub_0038E590_0x38e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E590_0x38e590");
#endif

    switch (ctx->pc) {
        case 0x38e590u: goto label_38e590;
        case 0x38e594u: goto label_38e594;
        case 0x38e598u: goto label_38e598;
        case 0x38e59cu: goto label_38e59c;
        case 0x38e5a0u: goto label_38e5a0;
        case 0x38e5a4u: goto label_38e5a4;
        case 0x38e5a8u: goto label_38e5a8;
        case 0x38e5acu: goto label_38e5ac;
        case 0x38e5b0u: goto label_38e5b0;
        case 0x38e5b4u: goto label_38e5b4;
        case 0x38e5b8u: goto label_38e5b8;
        case 0x38e5bcu: goto label_38e5bc;
        case 0x38e5c0u: goto label_38e5c0;
        case 0x38e5c4u: goto label_38e5c4;
        case 0x38e5c8u: goto label_38e5c8;
        case 0x38e5ccu: goto label_38e5cc;
        case 0x38e5d0u: goto label_38e5d0;
        case 0x38e5d4u: goto label_38e5d4;
        case 0x38e5d8u: goto label_38e5d8;
        case 0x38e5dcu: goto label_38e5dc;
        case 0x38e5e0u: goto label_38e5e0;
        case 0x38e5e4u: goto label_38e5e4;
        case 0x38e5e8u: goto label_38e5e8;
        case 0x38e5ecu: goto label_38e5ec;
        case 0x38e5f0u: goto label_38e5f0;
        case 0x38e5f4u: goto label_38e5f4;
        default: break;
    }

    ctx->pc = 0x38e590u;

label_38e590:
    // 0x38e590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e594:
    // 0x38e594: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38e598:
    // 0x38e598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e59c:
    // 0x38e59c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38e59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e5a0:
    // 0x38e5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e5a4:
    // 0x38e5a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_38e5a8:
    if (ctx->pc == 0x38E5A8u) {
        ctx->pc = 0x38E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5A4u;
        // 0x38e5a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5ACu;
        goto label_38e5ac;
    }
    ctx->pc = 0x38E5A4u;
    {
        const bool branch_taken_0x38e5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5A4u;
        // 0x38e5a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5a4) {
            ctx->pc = 0x38E5C0u;
            goto label_38e5c0;
        }
    }
    ctx->pc = 0x38E5ACu;
label_38e5ac:
    // 0x38e5ac: 0x0  nop
    ctx->pc = 0x38e5acu;
    // NOP
label_38e5b0:
    // 0x38e5b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38e5b4:
    // 0x38e5b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38e5b8:
    // 0x38e5b8: 0xc0e2646  jal         func_389918
label_38e5bc:
    if (ctx->pc == 0x38E5BCu) {
        ctx->pc = 0x38E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5B8u;
        // 0x38e5bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5C0u;
        goto label_38e5c0;
    }
    ctx->pc = 0x38E5B8u;
    SET_GPR_U32(ctx, 31, 0x38E5C0u);
    ctx->pc = 0x38E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5B8u;
    // 0x38e5bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389918u, 0x38E5B8u, 0x38E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5C0u;
label_38e5c0:
    // 0x38e5c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38e5c4:
    // 0x38e5c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38e5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38e5c8:
    // 0x38e5c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e5cc:
    // 0x38e5cc: 0x40f809  jalr        $v0
label_38e5d0:
    if (ctx->pc == 0x38E5D0u) {
        ctx->pc = 0x38E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5CCu;
        // 0x38e5d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5D4u;
        goto label_38e5d4;
    }
    ctx->pc = 0x38E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E5D4u);
        ctx->pc = 0x38E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5CCu;
        // 0x38e5d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E5CCu, 0x38E5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E5D4u;
label_38e5d4:
    // 0x38e5d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x38e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_38e5d8:
    // 0x38e5d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x38e5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38e5dc:
    // 0x38e5dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_38e5e0:
    if (ctx->pc == 0x38E5E0u) {
        ctx->pc = 0x38E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5DCu;
        // 0x38e5e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5E4u;
        goto label_38e5e4;
    }
    ctx->pc = 0x38E5DCu;
    {
        const bool branch_taken_0x38e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5DCu;
        // 0x38e5e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5dc) {
            ctx->pc = 0x38E5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e5b0;
        }
    }
    ctx->pc = 0x38E5E4u;
label_38e5e4:
    // 0x38e5e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e5e8:
    // 0x38e5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e5ec:
    // 0x38e5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e5f0:
    // 0x38e5f0: 0x3e00008  jr          $ra
label_38e5f4:
    if (ctx->pc == 0x38E5F4u) {
        ctx->pc = 0x38E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5F0u;
        // 0x38e5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E5F8u;
        goto label_fallthrough_0x38e5f0;
    }
    ctx->pc = 0x38E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5F0u;
        // 0x38e5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e5f0:
    ctx->pc = 0x38E5F8u;
}
