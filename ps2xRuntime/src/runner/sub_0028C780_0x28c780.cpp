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

// Function: sub_0028C780
// Address: 0x28c780 - 0x28c890
void sub_0028C780_0x28c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C780_0x28c780");
#endif

    switch (ctx->pc) {
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        case 0x28c7acu: goto label_28c7ac;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7b4u: goto label_28c7b4;
        case 0x28c7b8u: goto label_28c7b8;
        case 0x28c7bcu: goto label_28c7bc;
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7c4u: goto label_28c7c4;
        case 0x28c7c8u: goto label_28c7c8;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7d4u: goto label_28c7d4;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7dcu: goto label_28c7dc;
        case 0x28c7e0u: goto label_28c7e0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c7ecu: goto label_28c7ec;
        case 0x28c7f0u: goto label_28c7f0;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c7fcu: goto label_28c7fc;
        case 0x28c800u: goto label_28c800;
        case 0x28c804u: goto label_28c804;
        case 0x28c808u: goto label_28c808;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c810u: goto label_28c810;
        case 0x28c814u: goto label_28c814;
        case 0x28c818u: goto label_28c818;
        case 0x28c81cu: goto label_28c81c;
        case 0x28c820u: goto label_28c820;
        case 0x28c824u: goto label_28c824;
        case 0x28c828u: goto label_28c828;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c830u: goto label_28c830;
        case 0x28c834u: goto label_28c834;
        case 0x28c838u: goto label_28c838;
        case 0x28c83cu: goto label_28c83c;
        case 0x28c840u: goto label_28c840;
        case 0x28c844u: goto label_28c844;
        case 0x28c848u: goto label_28c848;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c850u: goto label_28c850;
        case 0x28c854u: goto label_28c854;
        case 0x28c858u: goto label_28c858;
        case 0x28c85cu: goto label_28c85c;
        case 0x28c860u: goto label_28c860;
        case 0x28c864u: goto label_28c864;
        case 0x28c868u: goto label_28c868;
        case 0x28c86cu: goto label_28c86c;
        case 0x28c870u: goto label_28c870;
        case 0x28c874u: goto label_28c874;
        case 0x28c878u: goto label_28c878;
        case 0x28c87cu: goto label_28c87c;
        case 0x28c880u: goto label_28c880;
        case 0x28c884u: goto label_28c884;
        case 0x28c888u: goto label_28c888;
        case 0x28c88cu: goto label_28c88c;
        default: break;
    }

    ctx->pc = 0x28c780u;

label_28c780:
    // 0x28c780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28c784:
    // 0x28c784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c788:
    // 0x28c788: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28c78c:
    // 0x28c78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c790:
    // 0x28c790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28c794:
    // 0x28c794: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x28c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_28c798:
    // 0x28c798: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_28c79c:
    if (ctx->pc == 0x28C79Cu) {
        ctx->pc = 0x28C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C798u;
        // 0x28c79c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7A0u;
        goto label_28c7a0;
    }
    ctx->pc = 0x28C798u;
    {
        const bool branch_taken_0x28c798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C798u;
        // 0x28c79c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c798) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C7A0u;
label_28c7a0:
    // 0x28c7a0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28c7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28c7a4:
    // 0x28c7a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28c7a8:
    if (ctx->pc == 0x28C7A8u) {
        ctx->pc = 0x28C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7A4u;
        // 0x28c7a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7ACu;
        goto label_28c7ac;
    }
    ctx->pc = 0x28C7A4u;
    {
        const bool branch_taken_0x28c7a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7A4u;
        // 0x28c7a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7a4) {
            ctx->pc = 0x28C7B8u;
            goto label_28c7b8;
        }
    }
    ctx->pc = 0x28C7ACu;
label_28c7ac:
    // 0x28c7ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c7b0:
    // 0x28c7b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28c7b4:
    if (ctx->pc == 0x28C7B4u) {
        ctx->pc = 0x28C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7B0u;
        // 0x28c7b4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7B8u;
        goto label_28c7b8;
    }
    ctx->pc = 0x28C7B0u;
    {
        const bool branch_taken_0x28c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7B0u;
        // 0x28c7b4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7b0) {
            ctx->pc = 0x28C7BCu;
            goto label_28c7bc;
        }
    }
    ctx->pc = 0x28C7B8u;
label_28c7b8:
    // 0x28c7b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c7bc:
    // 0x28c7bc: 0x52000030  beql        $s0, $zero, . + 4 + (0x30 << 2)
label_28c7c0:
    if (ctx->pc == 0x28C7C0u) {
        ctx->pc = 0x28C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7BCu;
        // 0x28c7c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7C4u;
        goto label_28c7c4;
    }
    ctx->pc = 0x28C7BCu;
    {
        const bool branch_taken_0x28c7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c7bc) {
            ctx->pc = 0x28C7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C7BCu;
            // 0x28c7c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C7C4u;
label_28c7c4:
    // 0x28c7c4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x28c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28c7c8:
    // 0x28c7c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28c7cc:
    // 0x28c7cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28c7d0:
    // 0x28c7d0: 0x40f809  jalr        $v0
label_28c7d4:
    if (ctx->pc == 0x28C7D4u) {
        ctx->pc = 0x28C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7D0u;
        // 0x28c7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7D8u;
        goto label_28c7d8;
    }
    ctx->pc = 0x28C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C7D8u);
        ctx->pc = 0x28C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7D0u;
        // 0x28c7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C7D0u, 0x28C7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C7D8u;
label_28c7d8:
    // 0x28c7d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28c7d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c7dc:
    // 0x28c7dc: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x28c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_28c7e0:
    // 0x28c7e0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_28c7e4:
    if (ctx->pc == 0x28C7E4u) {
        ctx->pc = 0x28C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E0u;
        // 0x28c7e4: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7E8u;
        goto label_28c7e8;
    }
    ctx->pc = 0x28C7E0u;
    {
        const bool branch_taken_0x28c7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E0u;
        // 0x28c7e4: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7e0) {
            ctx->pc = 0x28C7F8u;
            goto label_28c7f8;
        }
    }
    ctx->pc = 0x28C7E8u;
label_28c7e8:
    // 0x28c7e8: 0xc0bb526  jal         func_2ED498
label_28c7ec:
    if (ctx->pc == 0x28C7ECu) {
        ctx->pc = 0x28C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E8u;
        // 0x28c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7F0u;
        goto label_28c7f0;
    }
    ctx->pc = 0x28C7E8u;
    SET_GPR_U32(ctx, 31, 0x28C7F0u);
    ctx->pc = 0x28C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7E8u;
    // 0x28c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED498u, 0x28C7E8u, 0x28C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7F0u;
label_28c7f0:
    // 0x28c7f0: 0x10000023  b           . + 4 + (0x23 << 2)
label_28c7f4:
    if (ctx->pc == 0x28C7F4u) {
        ctx->pc = 0x28C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F0u;
        // 0x28c7f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7F8u;
        goto label_28c7f8;
    }
    ctx->pc = 0x28C7F0u;
    {
        const bool branch_taken_0x28c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F0u;
        // 0x28c7f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7f0) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C7F8u;
label_28c7f8:
    // 0x28c7f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_28c7fc:
    if (ctx->pc == 0x28C7FCu) {
        ctx->pc = 0x28C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F8u;
        // 0x28c7fc: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C800u;
        goto label_28c800;
    }
    ctx->pc = 0x28C7F8u;
    {
        const bool branch_taken_0x28c7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F8u;
        // 0x28c7fc: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7f8) {
            ctx->pc = 0x28C810u;
            goto label_28c810;
        }
    }
    ctx->pc = 0x28C800u;
label_28c800:
    // 0x28c800: 0xc0ba3b8  jal         func_2E8EE0
label_28c804:
    if (ctx->pc == 0x28C804u) {
        ctx->pc = 0x28C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C800u;
        // 0x28c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C808u;
        goto label_28c808;
    }
    ctx->pc = 0x28C800u;
    SET_GPR_U32(ctx, 31, 0x28C808u);
    ctx->pc = 0x28C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C800u;
    // 0x28c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8EE0u, 0x28C800u, 0x28C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C808u;
label_28c808:
    // 0x28c808: 0x1000001d  b           . + 4 + (0x1D << 2)
label_28c80c:
    if (ctx->pc == 0x28C80Cu) {
        ctx->pc = 0x28C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C808u;
        // 0x28c80c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C810u;
        goto label_28c810;
    }
    ctx->pc = 0x28C808u;
    {
        const bool branch_taken_0x28c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C808u;
        // 0x28c80c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c808) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C810u;
label_28c810:
    // 0x28c810: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_28c814:
    if (ctx->pc == 0x28C814u) {
        ctx->pc = 0x28C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C810u;
        // 0x28c814: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C818u;
        goto label_28c818;
    }
    ctx->pc = 0x28C810u;
    {
        const bool branch_taken_0x28c810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C810u;
        // 0x28c814: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c810) {
            ctx->pc = 0x28C828u;
            goto label_28c828;
        }
    }
    ctx->pc = 0x28C818u;
label_28c818:
    // 0x28c818: 0xc0bb9d6  jal         func_2EE758
label_28c81c:
    if (ctx->pc == 0x28C81Cu) {
        ctx->pc = 0x28C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C818u;
        // 0x28c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C820u;
        goto label_28c820;
    }
    ctx->pc = 0x28C818u;
    SET_GPR_U32(ctx, 31, 0x28C820u);
    ctx->pc = 0x28C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C818u;
    // 0x28c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE758u, 0x28C818u, 0x28C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C820u;
label_28c820:
    // 0x28c820: 0x10000017  b           . + 4 + (0x17 << 2)
label_28c824:
    if (ctx->pc == 0x28C824u) {
        ctx->pc = 0x28C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C820u;
        // 0x28c824: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C828u;
        goto label_28c828;
    }
    ctx->pc = 0x28C820u;
    {
        const bool branch_taken_0x28c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C820u;
        // 0x28c824: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c820) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C828u;
label_28c828:
    // 0x28c828: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_28c82c:
    if (ctx->pc == 0x28C82Cu) {
        ctx->pc = 0x28C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C828u;
        // 0x28c82c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C830u;
        goto label_28c830;
    }
    ctx->pc = 0x28C828u;
    {
        const bool branch_taken_0x28c828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c828) {
            ctx->pc = 0x28C82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C828u;
            // 0x28c82c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C840u;
            goto label_28c840;
        }
    }
    ctx->pc = 0x28C830u;
label_28c830:
    // 0x28c830: 0xc0bbc4c  jal         func_2EF130
label_28c834:
    if (ctx->pc == 0x28C834u) {
        ctx->pc = 0x28C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C830u;
        // 0x28c834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C838u;
        goto label_28c838;
    }
    ctx->pc = 0x28C830u;
    SET_GPR_U32(ctx, 31, 0x28C838u);
    ctx->pc = 0x28C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C830u;
    // 0x28c834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF130u, 0x28C830u, 0x28C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C838u;
label_28c838:
    // 0x28c838: 0x10000011  b           . + 4 + (0x11 << 2)
label_28c83c:
    if (ctx->pc == 0x28C83Cu) {
        ctx->pc = 0x28C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C838u;
        // 0x28c83c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C840u;
        goto label_28c840;
    }
    ctx->pc = 0x28C838u;
    {
        const bool branch_taken_0x28c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C838u;
        // 0x28c83c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c838) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C840u;
label_28c840:
    // 0x28c840: 0xc08a200  jal         func_228800
label_28c844:
    if (ctx->pc == 0x28C844u) {
        ctx->pc = 0x28C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C840u;
        // 0x28c844: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C848u;
        goto label_28c848;
    }
    ctx->pc = 0x28C840u;
    SET_GPR_U32(ctx, 31, 0x28C848u);
    ctx->pc = 0x28C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C840u;
    // 0x28c844: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28C840u, 0x28C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C848u;
label_28c848:
    // 0x28c848: 0x2450018c  addiu       $s0, $v0, 0x18C
    ctx->pc = 0x28c848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
label_28c84c:
    // 0x28c84c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x28c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_28c850:
    // 0x28c850: 0x24a5feb0  addiu       $a1, $a1, -0x150
    ctx->pc = 0x28c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
label_28c854:
    // 0x28c854: 0xc10c313  jal         func_430C4C
label_28c858:
    if (ctx->pc == 0x28C858u) {
        ctx->pc = 0x28C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C854u;
        // 0x28c858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C85Cu;
        goto label_28c85c;
    }
    ctx->pc = 0x28C854u;
    SET_GPR_U32(ctx, 31, 0x28C85Cu);
    ctx->pc = 0x28C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C854u;
    // 0x28c858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x28C854u, 0x28C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C85Cu;
label_28c85c:
    // 0x28c85c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28c860:
    if (ctx->pc == 0x28C860u) {
        ctx->pc = 0x28C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C85Cu;
        // 0x28c860: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C864u;
        goto label_28c864;
    }
    ctx->pc = 0x28C85Cu;
    {
        const bool branch_taken_0x28c85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C85Cu;
        // 0x28c860: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c85c) {
            ctx->pc = 0x28C86Cu;
            goto label_28c86c;
        }
    }
    ctx->pc = 0x28C864u;
label_28c864:
    // 0x28c864: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x28c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_28c868:
    // 0x28c868: 0x2450feb8  addiu       $s0, $v0, -0x148
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966968));
label_28c86c:
    // 0x28c86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c870:
    // 0x28c870: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28c870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c874:
    // 0x28c874: 0xc0930a0  jal         func_24C280
label_28c878:
    if (ctx->pc == 0x28C878u) {
        ctx->pc = 0x28C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C874u;
        // 0x28c878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C87Cu;
        goto label_28c87c;
    }
    ctx->pc = 0x28C874u;
    SET_GPR_U32(ctx, 31, 0x28C87Cu);
    ctx->pc = 0x28C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C874u;
    // 0x28c878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x28C874u, 0x28C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C87Cu;
label_28c87c:
    // 0x28c87c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28c87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c880:
    // 0x28c880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c884:
    // 0x28c884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28c888:
    // 0x28c888: 0x3e00008  jr          $ra
label_28c88c:
    if (ctx->pc == 0x28C88Cu) {
        ctx->pc = 0x28C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C888u;
        // 0x28c88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C890u;
        goto label_fallthrough_0x28c888;
    }
    ctx->pc = 0x28C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C888u;
        // 0x28c88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c888:
    ctx->pc = 0x28C890u;
}
