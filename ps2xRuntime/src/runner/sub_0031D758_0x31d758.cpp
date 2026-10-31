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

// Function: sub_0031D758
// Address: 0x31d758 - 0x31d854
void sub_0031D758_0x31d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D758_0x31d758");
#endif

    switch (ctx->pc) {
        case 0x31d758u: goto label_31d758;
        case 0x31d75cu: goto label_31d75c;
        case 0x31d760u: goto label_31d760;
        case 0x31d764u: goto label_31d764;
        case 0x31d768u: goto label_31d768;
        case 0x31d76cu: goto label_31d76c;
        case 0x31d770u: goto label_31d770;
        case 0x31d774u: goto label_31d774;
        case 0x31d778u: goto label_31d778;
        case 0x31d77cu: goto label_31d77c;
        case 0x31d780u: goto label_31d780;
        case 0x31d784u: goto label_31d784;
        case 0x31d788u: goto label_31d788;
        case 0x31d78cu: goto label_31d78c;
        case 0x31d790u: goto label_31d790;
        case 0x31d794u: goto label_31d794;
        case 0x31d798u: goto label_31d798;
        case 0x31d79cu: goto label_31d79c;
        case 0x31d7a0u: goto label_31d7a0;
        case 0x31d7a4u: goto label_31d7a4;
        case 0x31d7a8u: goto label_31d7a8;
        case 0x31d7acu: goto label_31d7ac;
        case 0x31d7b0u: goto label_31d7b0;
        case 0x31d7b4u: goto label_31d7b4;
        case 0x31d7b8u: goto label_31d7b8;
        case 0x31d7bcu: goto label_31d7bc;
        case 0x31d7c0u: goto label_31d7c0;
        case 0x31d7c4u: goto label_31d7c4;
        case 0x31d7c8u: goto label_31d7c8;
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d0u: goto label_31d7d0;
        case 0x31d7d4u: goto label_31d7d4;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e0u: goto label_31d7e0;
        case 0x31d7e4u: goto label_31d7e4;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d7ecu: goto label_31d7ec;
        case 0x31d7f0u: goto label_31d7f0;
        case 0x31d7f4u: goto label_31d7f4;
        case 0x31d7f8u: goto label_31d7f8;
        case 0x31d7fcu: goto label_31d7fc;
        case 0x31d800u: goto label_31d800;
        case 0x31d804u: goto label_31d804;
        case 0x31d808u: goto label_31d808;
        case 0x31d80cu: goto label_31d80c;
        case 0x31d810u: goto label_31d810;
        case 0x31d814u: goto label_31d814;
        case 0x31d818u: goto label_31d818;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d820u: goto label_31d820;
        case 0x31d824u: goto label_31d824;
        case 0x31d828u: goto label_31d828;
        case 0x31d82cu: goto label_31d82c;
        case 0x31d830u: goto label_31d830;
        case 0x31d834u: goto label_31d834;
        case 0x31d838u: goto label_31d838;
        case 0x31d83cu: goto label_31d83c;
        case 0x31d840u: goto label_31d840;
        case 0x31d844u: goto label_31d844;
        case 0x31d848u: goto label_31d848;
        case 0x31d84cu: goto label_31d84c;
        case 0x31d850u: goto label_31d850;
        default: break;
    }

    ctx->pc = 0x31d758u;

label_31d758:
    // 0x31d758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31d75c:
    // 0x31d75c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31d760:
    // 0x31d760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31d764:
    // 0x31d764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d768:
    // 0x31d768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d76c:
    // 0x31d76c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31d76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31d770:
    // 0x31d770: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31d774:
    // 0x31d774: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31d778:
    // 0x31d778: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31d778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31d77c:
    // 0x31d77c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_31d780:
    if (ctx->pc == 0x31D780u) {
        ctx->pc = 0x31D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D77Cu;
        // 0x31d780: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D784u;
        goto label_31d784;
    }
    ctx->pc = 0x31D77Cu;
    {
        const bool branch_taken_0x31d77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D77Cu;
        // 0x31d780: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d77c) {
            ctx->pc = 0x31D85Cu;
            return;
        }
    }
    ctx->pc = 0x31D784u;
label_31d784:
    // 0x31d784: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31d784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31d788:
    // 0x31d788: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x31d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
label_31d78c:
    // 0x31d78c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31d790:
    // 0x31d790: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31d790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31d794:
    // 0x31d794: 0x800008  jr          $a0
label_31d798:
    if (ctx->pc == 0x31D798u) {
        ctx->pc = 0x31D79Cu;
        goto label_31d79c;
    }
    ctx->pc = 0x31D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31D79Cu: goto label_31d79c;
            case 0x31D7CCu: goto label_31d7cc;
            case 0x31D7D8u: goto label_31d7d8;
            case 0x31D7E4u: goto label_31d7e4;
            case 0x31D824u: goto label_31d824;
            case 0x31D844u: goto label_31d844;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D794u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31D79Cu;
label_31d79c:
    // 0x31d79c: 0xc08a61a  jal         func_229868
label_31d7a0:
    if (ctx->pc == 0x31D7A0u) {
        ctx->pc = 0x31D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D79Cu;
        // 0x31d7a0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7A4u;
        goto label_31d7a4;
    }
    ctx->pc = 0x31D79Cu;
    SET_GPR_U32(ctx, 31, 0x31D7A4u);
    ctx->pc = 0x31D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D79Cu;
    // 0x31d7a0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31D79Cu, 0x31D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7A4u;
label_31d7a4:
    // 0x31d7a4: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_31d7a8:
    if (ctx->pc == 0x31D7A8u) {
        ctx->pc = 0x31D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7A4u;
        // 0x31d7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7ACu;
        goto label_31d7ac;
    }
    ctx->pc = 0x31D7A4u;
    {
        const bool branch_taken_0x31d7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7a4) {
            ctx->pc = 0x31D7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D7A4u;
            // 0x31d7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D860u;
            return;
        }
    }
    ctx->pc = 0x31D7ACu;
label_31d7ac:
    // 0x31d7ac: 0xc087502  jal         func_21D408
label_31d7b0:
    if (ctx->pc == 0x31D7B0u) {
        ctx->pc = 0x31D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7ACu;
        // 0x31d7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7B4u;
        goto label_31d7b4;
    }
    ctx->pc = 0x31D7ACu;
    SET_GPR_U32(ctx, 31, 0x31D7B4u);
    ctx->pc = 0x31D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7ACu;
    // 0x31d7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D7ACu, 0x31D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7B4u;
label_31d7b4:
    // 0x31d7b4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x31d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_31d7b8:
    // 0x31d7b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d7bc:
    // 0x31d7bc: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_31d7c0:
    if (ctx->pc == 0x31D7C0u) {
        ctx->pc = 0x31D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7BCu;
        // 0x31d7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7C4u;
        goto label_31d7c4;
    }
    ctx->pc = 0x31D7BCu;
    {
        const bool branch_taken_0x31d7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7BCu;
        // 0x31d7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7bc) {
            ctx->pc = 0x31D860u;
            return;
        }
    }
    ctx->pc = 0x31D7C4u;
label_31d7c4:
    // 0x31d7c4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_31d7c8:
    if (ctx->pc == 0x31D7C8u) {
        ctx->pc = 0x31D7CCu;
        goto label_31d7cc;
    }
    ctx->pc = 0x31D7C4u;
    {
        const bool branch_taken_0x31d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7c4) {
            ctx->pc = 0x31D844u;
            goto label_31d844;
        }
    }
    ctx->pc = 0x31D7CCu;
label_31d7cc:
    // 0x31d7cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d7d0:
    // 0x31d7d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_31d7d4:
    if (ctx->pc == 0x31D7D4u) {
        ctx->pc = 0x31D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7D0u;
        // 0x31d7d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7D8u;
        goto label_31d7d8;
    }
    ctx->pc = 0x31D7D0u;
    {
        const bool branch_taken_0x31d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7D0u;
        // 0x31d7d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7d0) {
            ctx->pc = 0x31D82Cu;
            goto label_31d82c;
        }
    }
    ctx->pc = 0x31D7D8u;
label_31d7d8:
    // 0x31d7d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d7dc:
    // 0x31d7dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_31d7e0:
    if (ctx->pc == 0x31D7E0u) {
        ctx->pc = 0x31D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7DCu;
        // 0x31d7e0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7E4u;
        goto label_31d7e4;
    }
    ctx->pc = 0x31D7DCu;
    {
        const bool branch_taken_0x31d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7DCu;
        // 0x31d7e0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7dc) {
            ctx->pc = 0x31D82Cu;
            goto label_31d82c;
        }
    }
    ctx->pc = 0x31D7E4u;
label_31d7e4:
    // 0x31d7e4: 0xc08a61a  jal         func_229868
label_31d7e8:
    if (ctx->pc == 0x31D7E8u) {
        ctx->pc = 0x31D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7E4u;
        // 0x31d7e8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7ECu;
        goto label_31d7ec;
    }
    ctx->pc = 0x31D7E4u;
    SET_GPR_U32(ctx, 31, 0x31D7ECu);
    ctx->pc = 0x31D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7E4u;
    // 0x31d7e8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31D7E4u, 0x31D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7ECu;
label_31d7ec:
    // 0x31d7ec: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_31d7f0:
    if (ctx->pc == 0x31D7F0u) {
        ctx->pc = 0x31D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7ECu;
        // 0x31d7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7F4u;
        goto label_31d7f4;
    }
    ctx->pc = 0x31D7ECu;
    {
        const bool branch_taken_0x31d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7ec) {
            ctx->pc = 0x31D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D7ECu;
            // 0x31d7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D860u;
            return;
        }
    }
    ctx->pc = 0x31D7F4u;
label_31d7f4:
    // 0x31d7f4: 0xc087502  jal         func_21D408
label_31d7f8:
    if (ctx->pc == 0x31D7F8u) {
        ctx->pc = 0x31D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7F4u;
        // 0x31d7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7FCu;
        goto label_31d7fc;
    }
    ctx->pc = 0x31D7F4u;
    SET_GPR_U32(ctx, 31, 0x31D7FCu);
    ctx->pc = 0x31D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7F4u;
    // 0x31d7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D7F4u, 0x31D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7FCu;
label_31d7fc:
    // 0x31d7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d800:
    // 0x31d800: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d804:
    // 0x31d804: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x31d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_31d808:
    // 0x31d808: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_31d80c:
    if (ctx->pc == 0x31D80Cu) {
        ctx->pc = 0x31D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D808u;
        // 0x31d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D810u;
        goto label_31d810;
    }
    ctx->pc = 0x31D808u;
    {
        const bool branch_taken_0x31d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D808u;
        // 0x31d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d808) {
            ctx->pc = 0x31D860u;
            return;
        }
    }
    ctx->pc = 0x31D810u;
label_31d810:
    // 0x31d810: 0xc0a3032  jal         func_28C0C8
label_31d814:
    if (ctx->pc == 0x31D814u) {
        ctx->pc = 0x31D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D810u;
        // 0x31d814: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D818u;
        goto label_31d818;
    }
    ctx->pc = 0x31D810u;
    SET_GPR_U32(ctx, 31, 0x31D818u);
    ctx->pc = 0x31D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D810u;
    // 0x31d814: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31D810u, 0x31D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D818u;
label_31d818:
    // 0x31d818: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d81c:
    // 0x31d81c: 0x10000003  b           . + 4 + (0x3 << 2)
label_31d820:
    if (ctx->pc == 0x31D820u) {
        ctx->pc = 0x31D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D81Cu;
        // 0x31d820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D824u;
        goto label_31d824;
    }
    ctx->pc = 0x31D81Cu;
    {
        const bool branch_taken_0x31d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D81Cu;
        // 0x31d820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d81c) {
            ctx->pc = 0x31D82Cu;
            goto label_31d82c;
        }
    }
    ctx->pc = 0x31D824u;
label_31d824:
    // 0x31d824: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d828:
    // 0x31d828: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31d82c:
    // 0x31d82c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31d830:
    // 0x31d830: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31d834:
    // 0x31d834: 0x60f809  jalr        $v1
label_31d838:
    if (ctx->pc == 0x31D838u) {
        ctx->pc = 0x31D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D834u;
        // 0x31d838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D83Cu;
        goto label_31d83c;
    }
    ctx->pc = 0x31D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D83Cu);
        ctx->pc = 0x31D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D834u;
        // 0x31d838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D834u, 0x31D83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D83Cu;
label_31d83c:
    // 0x31d83c: 0x10000008  b           . + 4 + (0x8 << 2)
label_31d840:
    if (ctx->pc == 0x31D840u) {
        ctx->pc = 0x31D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D83Cu;
        // 0x31d840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D844u;
        goto label_31d844;
    }
    ctx->pc = 0x31D83Cu;
    {
        const bool branch_taken_0x31d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D83Cu;
        // 0x31d840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d83c) {
            ctx->pc = 0x31D860u;
            return;
        }
    }
    ctx->pc = 0x31D844u;
label_31d844:
    // 0x31d844: 0xc0c7338  jal         func_31CCE0
label_31d848:
    if (ctx->pc == 0x31D848u) {
        ctx->pc = 0x31D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D844u;
        // 0x31d848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D84Cu;
        goto label_31d84c;
    }
    ctx->pc = 0x31D844u;
    SET_GPR_U32(ctx, 31, 0x31D84Cu);
    ctx->pc = 0x31D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D844u;
    // 0x31d848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCE0u, 0x31D844u, 0x31D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D84Cu;
label_31d84c:
    // 0x31d84c: 0x10000004  b           . + 4 + (0x4 << 2)
label_31d850:
    if (ctx->pc == 0x31D850u) {
        ctx->pc = 0x31D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D84Cu;
        // 0x31d850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D854u;
        goto label_fallthrough_0x31d84c;
    }
    ctx->pc = 0x31D84Cu;
    {
        const bool branch_taken_0x31d84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D84Cu;
        // 0x31d850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d84c) {
            ctx->pc = 0x31D860u;
            return;
        }
    }
label_fallthrough_0x31d84c:
    ctx->pc = 0x31D854u;
}
