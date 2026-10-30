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

// Function: sub_0033B650
// Address: 0x33b650 - 0x33b6f8
void sub_0033B650_0x33b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B650_0x33b650");
#endif

    switch (ctx->pc) {
        case 0x33b650u: goto label_33b650;
        case 0x33b654u: goto label_33b654;
        case 0x33b658u: goto label_33b658;
        case 0x33b65cu: goto label_33b65c;
        case 0x33b660u: goto label_33b660;
        case 0x33b664u: goto label_33b664;
        case 0x33b668u: goto label_33b668;
        case 0x33b66cu: goto label_33b66c;
        case 0x33b670u: goto label_33b670;
        case 0x33b674u: goto label_33b674;
        case 0x33b678u: goto label_33b678;
        case 0x33b67cu: goto label_33b67c;
        case 0x33b680u: goto label_33b680;
        case 0x33b684u: goto label_33b684;
        case 0x33b688u: goto label_33b688;
        case 0x33b68cu: goto label_33b68c;
        case 0x33b690u: goto label_33b690;
        case 0x33b694u: goto label_33b694;
        case 0x33b698u: goto label_33b698;
        case 0x33b69cu: goto label_33b69c;
        case 0x33b6a0u: goto label_33b6a0;
        case 0x33b6a4u: goto label_33b6a4;
        case 0x33b6a8u: goto label_33b6a8;
        case 0x33b6acu: goto label_33b6ac;
        case 0x33b6b0u: goto label_33b6b0;
        case 0x33b6b4u: goto label_33b6b4;
        case 0x33b6b8u: goto label_33b6b8;
        case 0x33b6bcu: goto label_33b6bc;
        case 0x33b6c0u: goto label_33b6c0;
        case 0x33b6c4u: goto label_33b6c4;
        case 0x33b6c8u: goto label_33b6c8;
        case 0x33b6ccu: goto label_33b6cc;
        case 0x33b6d0u: goto label_33b6d0;
        case 0x33b6d4u: goto label_33b6d4;
        case 0x33b6d8u: goto label_33b6d8;
        case 0x33b6dcu: goto label_33b6dc;
        case 0x33b6e0u: goto label_33b6e0;
        case 0x33b6e4u: goto label_33b6e4;
        case 0x33b6e8u: goto label_33b6e8;
        case 0x33b6ecu: goto label_33b6ec;
        case 0x33b6f0u: goto label_33b6f0;
        case 0x33b6f4u: goto label_33b6f4;
        default: break;
    }

    ctx->pc = 0x33b650u;

label_33b650:
    // 0x33b650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33b654:
    // 0x33b654: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33b658:
    // 0x33b658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33b65c:
    // 0x33b65c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33b65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33b660:
    // 0x33b660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33b664:
    // 0x33b664: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_33b668:
    if (ctx->pc == 0x33B668u) {
        ctx->pc = 0x33B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B664u;
        // 0x33b668: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B66Cu;
        goto label_33b66c;
    }
    ctx->pc = 0x33B664u;
    {
        const bool branch_taken_0x33b664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B664u;
        // 0x33b668: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b664) {
            ctx->pc = 0x33B6E0u;
            goto label_33b6e0;
        }
    }
    ctx->pc = 0x33B66Cu;
label_33b66c:
    // 0x33b66c: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_33b670:
    if (ctx->pc == 0x33B670u) {
        ctx->pc = 0x33B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B66Cu;
        // 0x33b670: 0x8c8300a4  lw          $v1, 0xA4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B674u;
        goto label_33b674;
    }
    ctx->pc = 0x33B66Cu;
    {
        const bool branch_taken_0x33b66c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b66c) {
            ctx->pc = 0x33B670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B66Cu;
            // 0x33b670: 0x8c8300a4  lw          $v1, 0xA4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B698u;
            goto label_33b698;
        }
    }
    ctx->pc = 0x33B674u;
label_33b674:
    // 0x33b674: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33b678:
    // 0x33b678: 0x8c4427f4  lw          $a0, 0x27F4($v0)
    ctx->pc = 0x33b678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10228)));
label_33b67c:
    // 0x33b67c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_33b680:
    if (ctx->pc == 0x33B680u) {
        ctx->pc = 0x33B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B67Cu;
        // 0x33b680: 0x8c8300a4  lw          $v1, 0xA4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B684u;
        goto label_33b684;
    }
    ctx->pc = 0x33B67Cu;
    {
        const bool branch_taken_0x33b67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b67c) {
            ctx->pc = 0x33B680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B67Cu;
            // 0x33b680: 0x8c8300a4  lw          $v1, 0xA4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B698u;
            goto label_33b698;
        }
    }
    ctx->pc = 0x33B684u;
label_33b684:
    // 0x33b684: 0xc0cf09a  jal         func_33C268
label_33b688:
    if (ctx->pc == 0x33B688u) {
        ctx->pc = 0x33B68Cu;
        goto label_33b68c;
    }
    ctx->pc = 0x33B684u;
    SET_GPR_U32(ctx, 31, 0x33B68Cu);
    ctx->pc = 0x33C268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C268u, 0x33B684u, 0x33B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B68Cu;
label_33b68c:
    // 0x33b68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b690:
    // 0x33b690: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x33b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_33b694:
    // 0x33b694: 0x0  nop
    ctx->pc = 0x33b694u;
    // NOP
label_33b698:
    // 0x33b698: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_33b69c:
    if (ctx->pc == 0x33B69Cu) {
        ctx->pc = 0x33B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B698u;
        // 0x33b69c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6A0u;
        goto label_33b6a0;
    }
    ctx->pc = 0x33B698u;
    {
        const bool branch_taken_0x33b698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b698) {
            ctx->pc = 0x33B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B698u;
            // 0x33b69c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B6BCu;
            goto label_33b6bc;
        }
    }
    ctx->pc = 0x33B6A0u;
label_33b6a0:
    // 0x33b6a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33b6a4:
    // 0x33b6a4: 0x0  nop
    ctx->pc = 0x33b6a4u;
    // NOP
label_33b6a8:
    // 0x33b6a8: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
label_33b6ac:
    if (ctx->pc == 0x33B6ACu) {
        ctx->pc = 0x33B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6A8u;
        // 0x33b6ac: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6B0u;
        goto label_33b6b0;
    }
    ctx->pc = 0x33B6A8u;
    {
        const bool branch_taken_0x33b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x33b6a8) {
            ctx->pc = 0x33B6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B6A8u;
            // 0x33b6ac: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b698;
        }
    }
    ctx->pc = 0x33B6B0u;
label_33b6b0:
    // 0x33b6b0: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x33b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33b6b4:
    // 0x33b6b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_33b6b8:
    // 0x33b6b8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x33b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_33b6bc:
    // 0x33b6bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33b6c0:
    if (ctx->pc == 0x33B6C0u) {
        ctx->pc = 0x33B6C4u;
        goto label_33b6c4;
    }
    ctx->pc = 0x33B6BCu;
    {
        const bool branch_taken_0x33b6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6bc) {
            ctx->pc = 0x33B6D8u;
            goto label_33b6d8;
        }
    }
    ctx->pc = 0x33B6C4u;
label_33b6c4:
    // 0x33b6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b6c8:
    // 0x33b6c8: 0x40f809  jalr        $v0
label_33b6cc:
    if (ctx->pc == 0x33B6CCu) {
        ctx->pc = 0x33B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6C8u;
        // 0x33b6cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6D0u;
        goto label_33b6d0;
    }
    ctx->pc = 0x33B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B6D0u);
        ctx->pc = 0x33B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6C8u;
        // 0x33b6cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B6C8u, 0x33B6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B6D0u;
label_33b6d0:
    // 0x33b6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_33b6d4:
    if (ctx->pc == 0x33B6D4u) {
        ctx->pc = 0x33B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6D0u;
        // 0x33b6d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6D8u;
        goto label_33b6d8;
    }
    ctx->pc = 0x33B6D0u;
    {
        const bool branch_taken_0x33b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6D0u;
        // 0x33b6d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b6d0) {
            ctx->pc = 0x33B6E4u;
            goto label_33b6e4;
        }
    }
    ctx->pc = 0x33B6D8u;
label_33b6d8:
    // 0x33b6d8: 0xc0cec68  jal         func_33B1A0
label_33b6dc:
    if (ctx->pc == 0x33B6DCu) {
        ctx->pc = 0x33B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6D8u;
        // 0x33b6dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6E0u;
        goto label_33b6e0;
    }
    ctx->pc = 0x33B6D8u;
    SET_GPR_U32(ctx, 31, 0x33B6E0u);
    ctx->pc = 0x33B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6D8u;
    // 0x33b6dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33B6D8u, 0x33B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6E0u;
label_33b6e0:
    // 0x33b6e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33b6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b6e4:
    // 0x33b6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b6e8:
    // 0x33b6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b6ec:
    // 0x33b6ec: 0x3e00008  jr          $ra
label_33b6f0:
    if (ctx->pc == 0x33B6F0u) {
        ctx->pc = 0x33B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6ECu;
        // 0x33b6f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B6F4u;
        goto label_33b6f4;
    }
    ctx->pc = 0x33B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6ECu;
        // 0x33b6f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B6F4u;
label_33b6f4:
    // 0x33b6f4: 0x0  nop
    ctx->pc = 0x33b6f4u;
    // NOP
    ctx->pc = 0x33b6f8u;
}
