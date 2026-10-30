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

// Function: sub_004EA810
// Address: 0x4ea810 - 0x4ea890
void sub_004EA810_0x4ea810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA810_0x4ea810");
#endif

    switch (ctx->pc) {
        case 0x4ea810u: goto label_4ea810;
        case 0x4ea814u: goto label_4ea814;
        case 0x4ea818u: goto label_4ea818;
        case 0x4ea81cu: goto label_4ea81c;
        case 0x4ea820u: goto label_4ea820;
        case 0x4ea824u: goto label_4ea824;
        case 0x4ea828u: goto label_4ea828;
        case 0x4ea82cu: goto label_4ea82c;
        case 0x4ea830u: goto label_4ea830;
        case 0x4ea834u: goto label_4ea834;
        case 0x4ea838u: goto label_4ea838;
        case 0x4ea83cu: goto label_4ea83c;
        case 0x4ea840u: goto label_4ea840;
        case 0x4ea844u: goto label_4ea844;
        case 0x4ea848u: goto label_4ea848;
        case 0x4ea84cu: goto label_4ea84c;
        case 0x4ea850u: goto label_4ea850;
        case 0x4ea854u: goto label_4ea854;
        case 0x4ea858u: goto label_4ea858;
        case 0x4ea85cu: goto label_4ea85c;
        case 0x4ea860u: goto label_4ea860;
        case 0x4ea864u: goto label_4ea864;
        case 0x4ea868u: goto label_4ea868;
        case 0x4ea86cu: goto label_4ea86c;
        case 0x4ea870u: goto label_4ea870;
        case 0x4ea874u: goto label_4ea874;
        case 0x4ea878u: goto label_4ea878;
        case 0x4ea87cu: goto label_4ea87c;
        case 0x4ea880u: goto label_4ea880;
        case 0x4ea884u: goto label_4ea884;
        case 0x4ea888u: goto label_4ea888;
        case 0x4ea88cu: goto label_4ea88c;
        default: break;
    }

    ctx->pc = 0x4ea810u;

label_4ea810:
    // 0x4ea810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea814:
    // 0x4ea814: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea818:
    // 0x4ea818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea81c:
    // 0x4ea81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea820:
    // 0x4ea820: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea824:
    // 0x4ea824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea828:
    // 0x4ea828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea82c:
    // 0x4ea82c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea830:
    if (ctx->pc == 0x4EA830u) {
        ctx->pc = 0x4EA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA82Cu;
        // 0x4ea830: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA834u;
        goto label_4ea834;
    }
    ctx->pc = 0x4EA82Cu;
    {
        const bool branch_taken_0x4ea82c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA82Cu;
        // 0x4ea830: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea82c) {
            ctx->pc = 0x4EA874u;
            goto label_4ea874;
        }
    }
    ctx->pc = 0x4EA834u;
label_4ea834:
    // 0x4ea834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea838:
    // 0x4ea838: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea83c:
    // 0x4ea83c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea840:
    // 0x4ea840: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea844:
    // 0x4ea844: 0x60f809  jalr        $v1
label_4ea848:
    if (ctx->pc == 0x4EA848u) {
        ctx->pc = 0x4EA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA844u;
        // 0x4ea848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA84Cu;
        goto label_4ea84c;
    }
    ctx->pc = 0x4EA844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA84Cu);
        ctx->pc = 0x4EA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA844u;
        // 0x4ea848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA844u, 0x4EA84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA84Cu;
label_4ea84c:
    // 0x4ea84c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea850:
    // 0x4ea850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea854:
    // 0x4ea854: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea858:
    // 0x4ea858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea85c:
    // 0x4ea85c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea860:
    // 0x4ea860: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea864:
    // 0x4ea864: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea868:
    // 0x4ea868: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea86c:
    // 0x4ea86c: 0x60f809  jalr        $v1
label_4ea870:
    if (ctx->pc == 0x4EA870u) {
        ctx->pc = 0x4EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA86Cu;
        // 0x4ea870: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA874u;
        goto label_4ea874;
    }
    ctx->pc = 0x4EA86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA874u);
        ctx->pc = 0x4EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA86Cu;
        // 0x4ea870: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA86Cu, 0x4EA874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA874u;
label_4ea874:
    // 0x4ea874: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea878:
    // 0x4ea878: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea87c:
    // 0x4ea87c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea880:
    // 0x4ea880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea884:
    // 0x4ea884: 0x3e00008  jr          $ra
label_4ea888:
    if (ctx->pc == 0x4EA888u) {
        ctx->pc = 0x4EA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA884u;
        // 0x4ea888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA88Cu;
        goto label_4ea88c;
    }
    ctx->pc = 0x4EA884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA884u;
        // 0x4ea888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA88Cu;
label_4ea88c:
    // 0x4ea88c: 0x0  nop
    ctx->pc = 0x4ea88cu;
    // NOP
    ctx->pc = 0x4ea890u;
}
