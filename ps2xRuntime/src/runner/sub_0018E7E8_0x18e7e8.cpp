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

// Function: sub_0018E7E8
// Address: 0x18e7e8 - 0x18e898
void sub_0018E7E8_0x18e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E7E8_0x18e7e8");
#endif

    switch (ctx->pc) {
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e7ecu: goto label_18e7ec;
        case 0x18e7f0u: goto label_18e7f0;
        case 0x18e7f4u: goto label_18e7f4;
        case 0x18e7f8u: goto label_18e7f8;
        case 0x18e7fcu: goto label_18e7fc;
        case 0x18e800u: goto label_18e800;
        case 0x18e804u: goto label_18e804;
        case 0x18e808u: goto label_18e808;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e810u: goto label_18e810;
        case 0x18e814u: goto label_18e814;
        case 0x18e818u: goto label_18e818;
        case 0x18e81cu: goto label_18e81c;
        case 0x18e820u: goto label_18e820;
        case 0x18e824u: goto label_18e824;
        case 0x18e828u: goto label_18e828;
        case 0x18e82cu: goto label_18e82c;
        case 0x18e830u: goto label_18e830;
        case 0x18e834u: goto label_18e834;
        case 0x18e838u: goto label_18e838;
        case 0x18e83cu: goto label_18e83c;
        case 0x18e840u: goto label_18e840;
        case 0x18e844u: goto label_18e844;
        case 0x18e848u: goto label_18e848;
        case 0x18e84cu: goto label_18e84c;
        case 0x18e850u: goto label_18e850;
        case 0x18e854u: goto label_18e854;
        case 0x18e858u: goto label_18e858;
        case 0x18e85cu: goto label_18e85c;
        case 0x18e860u: goto label_18e860;
        case 0x18e864u: goto label_18e864;
        case 0x18e868u: goto label_18e868;
        case 0x18e86cu: goto label_18e86c;
        case 0x18e870u: goto label_18e870;
        case 0x18e874u: goto label_18e874;
        case 0x18e878u: goto label_18e878;
        case 0x18e87cu: goto label_18e87c;
        case 0x18e880u: goto label_18e880;
        case 0x18e884u: goto label_18e884;
        case 0x18e888u: goto label_18e888;
        case 0x18e88cu: goto label_18e88c;
        case 0x18e890u: goto label_18e890;
        case 0x18e894u: goto label_18e894;
        default: break;
    }

    ctx->pc = 0x18e7e8u;

label_18e7e8:
    // 0x18e7e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18e7ec:
    // 0x18e7ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18e7f0:
    // 0x18e7f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18e7f4:
    // 0x18e7f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18e7f8:
    // 0x18e7f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18e7fc:
    // 0x18e7fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18e7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18e800:
    // 0x18e800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e804:
    // 0x18e804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e808:
    // 0x18e808: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_18e80c:
    // 0x18e80c: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_18e810:
    // 0x18e810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18e814:
    // 0x18e814: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18e814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18e818:
    // 0x18e818: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x18e818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_18e81c:
    // 0x18e81c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18e81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18e820:
    // 0x18e820: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18e820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_18e824:
    // 0x18e824: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18e824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18e828:
    // 0x18e828: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18e82c:
    // 0x18e82c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18e830:
    // 0x18e830: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18e834:
    // 0x18e834: 0x40f809  jalr        $v0
label_18e838:
    if (ctx->pc == 0x18E838u) {
        ctx->pc = 0x18E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E834u;
        // 0x18e838: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E83Cu;
        goto label_18e83c;
    }
    ctx->pc = 0x18E834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E83Cu);
        ctx->pc = 0x18E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E834u;
        // 0x18e838: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E834u, 0x18E83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E83Cu;
label_18e83c:
    // 0x18e83c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_18e840:
    // 0x18e840: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_18e844:
    // 0x18e844: 0x24638d60  addiu       $v1, $v1, -0x72A0
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937952));
label_18e848:
    // 0x18e848: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18e84c:
    // 0x18e84c: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x18e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
label_18e850:
    // 0x18e850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e854:
    // 0x18e854: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x18e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
label_18e858:
    // 0x18e858: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
label_18e85c:
    // 0x18e85c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x18e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_18e860:
    // 0x18e860: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x18e860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_18e864:
    // 0x18e864: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x18e864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_18e868:
    // 0x18e868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e86c:
    // 0x18e86c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_18e870:
    // 0x18e870: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18e870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e874:
    // 0x18e874: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_18e878:
    // 0x18e878: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18e878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e87c:
    // 0x18e87c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_18e880:
    // 0x18e880: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18e880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18e884:
    // 0x18e884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e888:
    // 0x18e888: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x18e888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
label_18e88c:
    // 0x18e88c: 0x3e00008  jr          $ra
label_18e890:
    if (ctx->pc == 0x18E890u) {
        ctx->pc = 0x18E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E88Cu;
        // 0x18e890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E894u;
        goto label_18e894;
    }
    ctx->pc = 0x18E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E88Cu;
        // 0x18e890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E894u;
label_18e894:
    // 0x18e894: 0x0  nop
    ctx->pc = 0x18e894u;
    // NOP
    ctx->pc = 0x18e898u;
}
