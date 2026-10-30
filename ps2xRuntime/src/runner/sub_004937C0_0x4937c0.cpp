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

// Function: sub_004937C0
// Address: 0x4937c0 - 0x493908
void sub_004937C0_0x4937c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004937C0_0x4937c0");
#endif

    switch (ctx->pc) {
        case 0x4937c0u: goto label_4937c0;
        case 0x4937c4u: goto label_4937c4;
        case 0x4937c8u: goto label_4937c8;
        case 0x4937ccu: goto label_4937cc;
        case 0x4937d0u: goto label_4937d0;
        case 0x4937d4u: goto label_4937d4;
        case 0x4937d8u: goto label_4937d8;
        case 0x4937dcu: goto label_4937dc;
        case 0x4937e0u: goto label_4937e0;
        case 0x4937e4u: goto label_4937e4;
        case 0x4937e8u: goto label_4937e8;
        case 0x4937ecu: goto label_4937ec;
        case 0x4937f0u: goto label_4937f0;
        case 0x4937f4u: goto label_4937f4;
        case 0x4937f8u: goto label_4937f8;
        case 0x4937fcu: goto label_4937fc;
        case 0x493800u: goto label_493800;
        case 0x493804u: goto label_493804;
        case 0x493808u: goto label_493808;
        case 0x49380cu: goto label_49380c;
        case 0x493810u: goto label_493810;
        case 0x493814u: goto label_493814;
        case 0x493818u: goto label_493818;
        case 0x49381cu: goto label_49381c;
        case 0x493820u: goto label_493820;
        case 0x493824u: goto label_493824;
        case 0x493828u: goto label_493828;
        case 0x49382cu: goto label_49382c;
        case 0x493830u: goto label_493830;
        case 0x493834u: goto label_493834;
        case 0x493838u: goto label_493838;
        case 0x49383cu: goto label_49383c;
        case 0x493840u: goto label_493840;
        case 0x493844u: goto label_493844;
        case 0x493848u: goto label_493848;
        case 0x49384cu: goto label_49384c;
        case 0x493850u: goto label_493850;
        case 0x493854u: goto label_493854;
        case 0x493858u: goto label_493858;
        case 0x49385cu: goto label_49385c;
        case 0x493860u: goto label_493860;
        case 0x493864u: goto label_493864;
        case 0x493868u: goto label_493868;
        case 0x49386cu: goto label_49386c;
        case 0x493870u: goto label_493870;
        case 0x493874u: goto label_493874;
        case 0x493878u: goto label_493878;
        case 0x49387cu: goto label_49387c;
        case 0x493880u: goto label_493880;
        case 0x493884u: goto label_493884;
        case 0x493888u: goto label_493888;
        case 0x49388cu: goto label_49388c;
        case 0x493890u: goto label_493890;
        case 0x493894u: goto label_493894;
        case 0x493898u: goto label_493898;
        case 0x49389cu: goto label_49389c;
        case 0x4938a0u: goto label_4938a0;
        case 0x4938a4u: goto label_4938a4;
        case 0x4938a8u: goto label_4938a8;
        case 0x4938acu: goto label_4938ac;
        case 0x4938b0u: goto label_4938b0;
        case 0x4938b4u: goto label_4938b4;
        case 0x4938b8u: goto label_4938b8;
        case 0x4938bcu: goto label_4938bc;
        case 0x4938c0u: goto label_4938c0;
        case 0x4938c4u: goto label_4938c4;
        case 0x4938c8u: goto label_4938c8;
        case 0x4938ccu: goto label_4938cc;
        case 0x4938d0u: goto label_4938d0;
        case 0x4938d4u: goto label_4938d4;
        case 0x4938d8u: goto label_4938d8;
        case 0x4938dcu: goto label_4938dc;
        case 0x4938e0u: goto label_4938e0;
        case 0x4938e4u: goto label_4938e4;
        case 0x4938e8u: goto label_4938e8;
        case 0x4938ecu: goto label_4938ec;
        case 0x4938f0u: goto label_4938f0;
        case 0x4938f4u: goto label_4938f4;
        case 0x4938f8u: goto label_4938f8;
        case 0x4938fcu: goto label_4938fc;
        case 0x493900u: goto label_493900;
        case 0x493904u: goto label_493904;
        default: break;
    }

    ctx->pc = 0x4937c0u;

label_4937c0:
    // 0x4937c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4937c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4937c4:
    // 0x4937c4: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x4937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_4937c8:
    // 0x4937c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4937c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4937cc:
    // 0x4937cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4937ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4937d0:
    // 0x4937d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4937d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4937d4:
    // 0x4937d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4937d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4937d8:
    // 0x4937d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4937d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4937dc:
    // 0x4937dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4937dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4937e0:
    // 0x4937e0: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x4937e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_4937e4:
    // 0x4937e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4937e8:
    if (ctx->pc == 0x4937E8u) {
        ctx->pc = 0x4937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4937E4u;
        // 0x4937e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4937ECu;
        goto label_4937ec;
    }
    ctx->pc = 0x4937E4u;
    {
        const bool branch_taken_0x4937e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4937E4u;
        // 0x4937e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4937e4) {
            ctx->pc = 0x4937F4u;
            goto label_4937f4;
        }
    }
    ctx->pc = 0x4937ECu;
label_4937ec:
    // 0x4937ec: 0xc129056  jal         func_4A4158
label_4937f0:
    if (ctx->pc == 0x4937F0u) {
        ctx->pc = 0x4937F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4937ECu;
        // 0x4937f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4937F4u;
        goto label_4937f4;
    }
    ctx->pc = 0x4937ECu;
    SET_GPR_U32(ctx, 31, 0x4937F4u);
    ctx->pc = 0x4937F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4937ECu;
    // 0x4937f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4158u, 0x4937ECu, 0x4937F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937F4u;
label_4937f4:
    // 0x4937f4: 0xc128fd6  jal         func_4A3F58
label_4937f8:
    if (ctx->pc == 0x4937F8u) {
        ctx->pc = 0x4937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4937F4u;
        // 0x4937f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4937FCu;
        goto label_4937fc;
    }
    ctx->pc = 0x4937F4u;
    SET_GPR_U32(ctx, 31, 0x4937FCu);
    ctx->pc = 0x4937F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4937F4u;
    // 0x4937f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x4937F4u, 0x4937FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937FCu;
label_4937fc:
    // 0x4937fc: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x4937fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_493800:
    // 0x493800: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x493800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_493804:
    // 0x493804: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_493808:
    if (ctx->pc == 0x493808u) {
        ctx->pc = 0x493808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493804u;
        // 0x493808: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49380Cu;
        goto label_49380c;
    }
    ctx->pc = 0x493804u;
    {
        const bool branch_taken_0x493804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493804u;
        // 0x493808: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493804) {
            ctx->pc = 0x4938ECu;
            goto label_4938ec;
        }
    }
    ctx->pc = 0x49380Cu;
label_49380c:
    // 0x49380c: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x49380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_493810:
    // 0x493810: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x493810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_493814:
    // 0x493814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x493814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_493818:
    // 0x493818: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_49381c:
    if (ctx->pc == 0x49381Cu) {
        ctx->pc = 0x49381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493818u;
        // 0x49381c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493820u;
        goto label_493820;
    }
    ctx->pc = 0x493818u;
    {
        const bool branch_taken_0x493818 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x493818) {
            ctx->pc = 0x49381Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493818u;
            // 0x49381c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493840u;
            goto label_493840;
        }
    }
    ctx->pc = 0x493820u;
label_493820:
    // 0x493820: 0xc123142  jal         func_48C508
label_493824:
    if (ctx->pc == 0x493824u) {
        ctx->pc = 0x493828u;
        goto label_493828;
    }
    ctx->pc = 0x493820u;
    SET_GPR_U32(ctx, 31, 0x493828u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x493820u, 0x493828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493828u;
label_493828:
    // 0x493828: 0xc123142  jal         func_48C508
label_49382c:
    if (ctx->pc == 0x49382Cu) {
        ctx->pc = 0x493830u;
        goto label_493830;
    }
    ctx->pc = 0x493828u;
    SET_GPR_U32(ctx, 31, 0x493830u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x493828u, 0x493830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493830u;
label_493830:
    // 0x493830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x493830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_493834:
    // 0x493834: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_493838:
    if (ctx->pc == 0x493838u) {
        ctx->pc = 0x49383Cu;
        goto label_49383c;
    }
    ctx->pc = 0x493834u;
    {
        const bool branch_taken_0x493834 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x493834) {
            ctx->pc = 0x493820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493820;
        }
    }
    ctx->pc = 0x49383Cu;
label_49383c:
    // 0x49383c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x49383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_493840:
    // 0x493840: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x493840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_493844:
    // 0x493844: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_493848:
    if (ctx->pc == 0x493848u) {
        ctx->pc = 0x493848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493844u;
        // 0x493848: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49384Cu;
        goto label_49384c;
    }
    ctx->pc = 0x493844u;
    {
        const bool branch_taken_0x493844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493844u;
        // 0x493848: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493844) {
            ctx->pc = 0x493858u;
            goto label_493858;
        }
    }
    ctx->pc = 0x49384Cu;
label_49384c:
    // 0x49384c: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x49384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_493850:
    // 0x493850: 0x40f809  jalr        $v0
label_493854:
    if (ctx->pc == 0x493854u) {
        ctx->pc = 0x493858u;
        goto label_493858;
    }
    ctx->pc = 0x493850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493858u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493850u, 0x493858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493858u;
label_493858:
    // 0x493858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x493858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49385c:
    // 0x49385c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_493860:
    if (ctx->pc == 0x493860u) {
        ctx->pc = 0x493860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49385Cu;
        // 0x493860: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493864u;
        goto label_493864;
    }
    ctx->pc = 0x49385Cu;
    {
        const bool branch_taken_0x49385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49385c) {
            ctx->pc = 0x493860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49385Cu;
            // 0x493860: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4938BCu;
            goto label_4938bc;
        }
    }
    ctx->pc = 0x493864u;
label_493864:
    // 0x493864: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x493864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_493868:
    // 0x493868: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_49386c:
    if (ctx->pc == 0x49386Cu) {
        ctx->pc = 0x49386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493868u;
        // 0x49386c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493870u;
        goto label_493870;
    }
    ctx->pc = 0x493868u;
    {
        const bool branch_taken_0x493868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493868u;
        // 0x49386c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493868) {
            ctx->pc = 0x493880u;
            goto label_493880;
        }
    }
    ctx->pc = 0x493870u;
label_493870:
    // 0x493870: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x493870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_493874:
    // 0x493874: 0x40f809  jalr        $v0
label_493878:
    if (ctx->pc == 0x493878u) {
        ctx->pc = 0x49387Cu;
        goto label_49387c;
    }
    ctx->pc = 0x493874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49387Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493874u, 0x49387Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49387Cu;
label_49387c:
    // 0x49387c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x49387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_493880:
    // 0x493880: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x493880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_493884:
    // 0x493884: 0x2610003c  addiu       $s0, $s0, 0x3C
    ctx->pc = 0x493884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_493888:
    // 0x493888: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x493888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_49388c:
    // 0x49388c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x49388cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_493890:
    // 0x493890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x493890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_493894:
    // 0x493894: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_493898:
    if (ctx->pc == 0x493898u) {
        ctx->pc = 0x493898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493894u;
        // 0x493898: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49389Cu;
        goto label_49389c;
    }
    ctx->pc = 0x493894u;
    {
        const bool branch_taken_0x493894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x493898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493894u;
        // 0x493898: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493894) {
            ctx->pc = 0x4938ACu;
            goto label_4938ac;
        }
    }
    ctx->pc = 0x49389Cu;
label_49389c:
    // 0x49389c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x49389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4938a0:
    // 0x4938a0: 0x40f809  jalr        $v0
label_4938a4:
    if (ctx->pc == 0x4938A4u) {
        ctx->pc = 0x4938A8u;
        goto label_4938a8;
    }
    ctx->pc = 0x4938A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4938A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4938A0u, 0x4938A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4938A8u;
label_4938a8:
    // 0x4938a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4938a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4938ac:
    // 0x4938ac: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_4938b0:
    if (ctx->pc == 0x4938B0u) {
        ctx->pc = 0x4938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938ACu;
        // 0x4938b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4938B4u;
        goto label_4938b4;
    }
    ctx->pc = 0x4938ACu;
    {
        const bool branch_taken_0x4938ac = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938ACu;
        // 0x4938b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4938ac) {
            ctx->pc = 0x493890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493890;
        }
    }
    ctx->pc = 0x4938B4u;
label_4938b4:
    // 0x4938b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_4938b8:
    if (ctx->pc == 0x4938B8u) {
        ctx->pc = 0x4938B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938B4u;
        // 0x4938b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4938BCu;
        goto label_4938bc;
    }
    ctx->pc = 0x4938B4u;
    {
        const bool branch_taken_0x4938b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4938B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938B4u;
        // 0x4938b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4938b4) {
            ctx->pc = 0x4938ECu;
            goto label_4938ec;
        }
    }
    ctx->pc = 0x4938BCu;
label_4938bc:
    // 0x4938bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4938c0:
    if (ctx->pc == 0x4938C0u) {
        ctx->pc = 0x4938C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938BCu;
        // 0x4938c0: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4938C4u;
        goto label_4938c4;
    }
    ctx->pc = 0x4938BCu;
    {
        const bool branch_taken_0x4938bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4938bc) {
            ctx->pc = 0x4938C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4938BCu;
            // 0x4938c0: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4938C4u;
            goto label_4938c4;
        }
    }
    ctx->pc = 0x4938C4u;
label_4938c4:
    // 0x4938c4: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x4938c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_4938c8:
    // 0x4938c8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x4938c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4938cc:
    // 0x4938cc: 0x0  nop
    ctx->pc = 0x4938ccu;
    // NOP
label_4938d0:
    // 0x4938d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4938d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4938d4:
    // 0x4938d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4938d8:
    if (ctx->pc == 0x4938D8u) {
        ctx->pc = 0x4938D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938D4u;
        // 0x4938d8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4938DCu;
        goto label_4938dc;
    }
    ctx->pc = 0x4938D4u;
    {
        const bool branch_taken_0x4938d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4938d4) {
            ctx->pc = 0x4938D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4938D4u;
            // 0x4938d8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4938DCu;
            goto label_4938dc;
        }
    }
    ctx->pc = 0x4938DCu;
label_4938dc:
    // 0x4938dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4938dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4938e0:
    // 0x4938e0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_4938e4:
    if (ctx->pc == 0x4938E4u) {
        ctx->pc = 0x4938E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938E0u;
        // 0x4938e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4938E8u;
        goto label_4938e8;
    }
    ctx->pc = 0x4938E0u;
    {
        const bool branch_taken_0x4938e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4938E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938E0u;
        // 0x4938e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4938e0) {
            ctx->pc = 0x4938D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4938d0;
        }
    }
    ctx->pc = 0x4938E8u;
label_4938e8:
    // 0x4938e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4938e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4938ec:
    // 0x4938ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4938f0:
    // 0x4938f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4938f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4938f4:
    // 0x4938f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4938f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4938f8:
    // 0x4938f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4938f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4938fc:
    // 0x4938fc: 0x3e00008  jr          $ra
label_493900:
    if (ctx->pc == 0x493900u) {
        ctx->pc = 0x493900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938FCu;
        // 0x493900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x493904u;
        goto label_493904;
    }
    ctx->pc = 0x4938FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4938FCu;
        // 0x493900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4938FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493904u;
label_493904:
    // 0x493904: 0x0  nop
    ctx->pc = 0x493904u;
    // NOP
    ctx->pc = 0x493908u;
}
