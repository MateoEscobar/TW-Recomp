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

// Function: sub_00421638
// Address: 0x421638 - 0x421708
void sub_00421638_0x421638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421638_0x421638");
#endif

    switch (ctx->pc) {
        case 0x421638u: goto label_421638;
        case 0x42163cu: goto label_42163c;
        case 0x421640u: goto label_421640;
        case 0x421644u: goto label_421644;
        case 0x421648u: goto label_421648;
        case 0x42164cu: goto label_42164c;
        case 0x421650u: goto label_421650;
        case 0x421654u: goto label_421654;
        case 0x421658u: goto label_421658;
        case 0x42165cu: goto label_42165c;
        case 0x421660u: goto label_421660;
        case 0x421664u: goto label_421664;
        case 0x421668u: goto label_421668;
        case 0x42166cu: goto label_42166c;
        case 0x421670u: goto label_421670;
        case 0x421674u: goto label_421674;
        case 0x421678u: goto label_421678;
        case 0x42167cu: goto label_42167c;
        case 0x421680u: goto label_421680;
        case 0x421684u: goto label_421684;
        case 0x421688u: goto label_421688;
        case 0x42168cu: goto label_42168c;
        case 0x421690u: goto label_421690;
        case 0x421694u: goto label_421694;
        case 0x421698u: goto label_421698;
        case 0x42169cu: goto label_42169c;
        case 0x4216a0u: goto label_4216a0;
        case 0x4216a4u: goto label_4216a4;
        case 0x4216a8u: goto label_4216a8;
        case 0x4216acu: goto label_4216ac;
        case 0x4216b0u: goto label_4216b0;
        case 0x4216b4u: goto label_4216b4;
        case 0x4216b8u: goto label_4216b8;
        case 0x4216bcu: goto label_4216bc;
        case 0x4216c0u: goto label_4216c0;
        case 0x4216c4u: goto label_4216c4;
        case 0x4216c8u: goto label_4216c8;
        case 0x4216ccu: goto label_4216cc;
        case 0x4216d0u: goto label_4216d0;
        case 0x4216d4u: goto label_4216d4;
        case 0x4216d8u: goto label_4216d8;
        case 0x4216dcu: goto label_4216dc;
        case 0x4216e0u: goto label_4216e0;
        case 0x4216e4u: goto label_4216e4;
        case 0x4216e8u: goto label_4216e8;
        case 0x4216ecu: goto label_4216ec;
        case 0x4216f0u: goto label_4216f0;
        case 0x4216f4u: goto label_4216f4;
        case 0x4216f8u: goto label_4216f8;
        case 0x4216fcu: goto label_4216fc;
        case 0x421700u: goto label_421700;
        case 0x421704u: goto label_421704;
        default: break;
    }

    ctx->pc = 0x421638u;

label_421638:
    // 0x421638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x421638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42163c:
    // 0x42163c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x42163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_421640:
    // 0x421640: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x421640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_421644:
    // 0x421644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x421644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421648:
    // 0x421648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x421648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42164c:
    // 0x42164c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x42164cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421650:
    // 0x421650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x421650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_421654:
    // 0x421654: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x421654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421658:
    // 0x421658: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x421658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_42165c:
    // 0x42165c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_421660:
    // 0x421660: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x421660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_421664:
    // 0x421664: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x421664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_421668:
    // 0x421668: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x421668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_42166c:
    // 0x42166c: 0x2812  mflo        $a1
    ctx->pc = 0x42166cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_421670:
    // 0x421670: 0x60f809  jalr        $v1
label_421674:
    if (ctx->pc == 0x421674u) {
        ctx->pc = 0x421674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421670u;
        // 0x421674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421678u;
        goto label_421678;
    }
    ctx->pc = 0x421670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421678u);
        ctx->pc = 0x421674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421670u;
        // 0x421674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421670u, 0x421678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421678u;
label_421678:
    // 0x421678: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x421678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42167c:
    // 0x42167c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x42167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_421680:
    // 0x421680: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x421680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_421684:
    // 0x421684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x421684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421688:
    // 0x421688: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x421688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_42168c:
    // 0x42168c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x42168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421690:
    // 0x421690: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x421690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_421694:
    // 0x421694: 0x40f809  jalr        $v0
label_421698:
    if (ctx->pc == 0x421698u) {
        ctx->pc = 0x421698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421694u;
        // 0x421698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42169Cu;
        goto label_42169c;
    }
    ctx->pc = 0x421694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42169Cu);
        ctx->pc = 0x421698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421694u;
        // 0x421698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421694u, 0x42169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42169Cu;
label_42169c:
    // 0x42169c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x42169cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4216a0:
    // 0x4216a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4216a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4216a4:
    // 0x4216a4: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x4216a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_4216a8:
    // 0x4216a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4216a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4216ac:
    // 0x4216ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4216acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4216b0:
    // 0x4216b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4216b4:
    // 0x4216b4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x4216b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4216b8:
    // 0x4216b8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x4216b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_4216bc:
    // 0x4216bc: 0x60f809  jalr        $v1
label_4216c0:
    if (ctx->pc == 0x4216C0u) {
        ctx->pc = 0x4216C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216BCu;
        // 0x4216c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216C4u;
        goto label_4216c4;
    }
    ctx->pc = 0x4216BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4216C4u);
        ctx->pc = 0x4216C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216BCu;
        // 0x4216c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4216BCu, 0x4216C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4216C4u;
label_4216c4:
    // 0x4216c4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4216c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4216c8:
    // 0x4216c8: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x4216c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_4216cc:
    // 0x4216cc: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x4216ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4216d0:
    // 0x4216d0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x4216d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_4216d4:
    // 0x4216d4: 0x84e40058  lh          $a0, 0x58($a3)
    ctx->pc = 0x4216d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 88)));
label_4216d8:
    // 0x4216d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4216d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4216dc:
    // 0x4216dc: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x4216dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_4216e0:
    // 0x4216e0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x4216e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4216e4:
    // 0x4216e4: 0x40f809  jalr        $v0
label_4216e8:
    if (ctx->pc == 0x4216E8u) {
        ctx->pc = 0x4216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216E4u;
        // 0x4216e8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216ECu;
        goto label_4216ec;
    }
    ctx->pc = 0x4216E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4216ECu);
        ctx->pc = 0x4216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216E4u;
        // 0x4216e8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4216E4u, 0x4216ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4216ECu;
label_4216ec:
    // 0x4216ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4216ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4216f0:
    // 0x4216f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4216f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4216f4:
    // 0x4216f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4216f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4216f8:
    // 0x4216f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4216f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4216fc:
    // 0x4216fc: 0x3e00008  jr          $ra
label_421700:
    if (ctx->pc == 0x421700u) {
        ctx->pc = 0x421700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216FCu;
        // 0x421700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421704u;
        goto label_421704;
    }
    ctx->pc = 0x4216FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216FCu;
        // 0x421700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4216FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421704u;
label_421704:
    // 0x421704: 0x0  nop
    ctx->pc = 0x421704u;
    // NOP
    ctx->pc = 0x421708u;
}
