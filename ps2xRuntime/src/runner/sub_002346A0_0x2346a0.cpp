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

// Function: sub_002346A0
// Address: 0x2346a0 - 0x234768
void sub_002346A0_0x2346a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002346A0_0x2346a0");
#endif

    switch (ctx->pc) {
        case 0x2346a0u: goto label_2346a0;
        case 0x2346a4u: goto label_2346a4;
        case 0x2346a8u: goto label_2346a8;
        case 0x2346acu: goto label_2346ac;
        case 0x2346b0u: goto label_2346b0;
        case 0x2346b4u: goto label_2346b4;
        case 0x2346b8u: goto label_2346b8;
        case 0x2346bcu: goto label_2346bc;
        case 0x2346c0u: goto label_2346c0;
        case 0x2346c4u: goto label_2346c4;
        case 0x2346c8u: goto label_2346c8;
        case 0x2346ccu: goto label_2346cc;
        case 0x2346d0u: goto label_2346d0;
        case 0x2346d4u: goto label_2346d4;
        case 0x2346d8u: goto label_2346d8;
        case 0x2346dcu: goto label_2346dc;
        case 0x2346e0u: goto label_2346e0;
        case 0x2346e4u: goto label_2346e4;
        case 0x2346e8u: goto label_2346e8;
        case 0x2346ecu: goto label_2346ec;
        case 0x2346f0u: goto label_2346f0;
        case 0x2346f4u: goto label_2346f4;
        case 0x2346f8u: goto label_2346f8;
        case 0x2346fcu: goto label_2346fc;
        case 0x234700u: goto label_234700;
        case 0x234704u: goto label_234704;
        case 0x234708u: goto label_234708;
        case 0x23470cu: goto label_23470c;
        case 0x234710u: goto label_234710;
        case 0x234714u: goto label_234714;
        case 0x234718u: goto label_234718;
        case 0x23471cu: goto label_23471c;
        case 0x234720u: goto label_234720;
        case 0x234724u: goto label_234724;
        case 0x234728u: goto label_234728;
        case 0x23472cu: goto label_23472c;
        case 0x234730u: goto label_234730;
        case 0x234734u: goto label_234734;
        case 0x234738u: goto label_234738;
        case 0x23473cu: goto label_23473c;
        case 0x234740u: goto label_234740;
        case 0x234744u: goto label_234744;
        case 0x234748u: goto label_234748;
        case 0x23474cu: goto label_23474c;
        case 0x234750u: goto label_234750;
        case 0x234754u: goto label_234754;
        case 0x234758u: goto label_234758;
        case 0x23475cu: goto label_23475c;
        case 0x234760u: goto label_234760;
        case 0x234764u: goto label_234764;
        default: break;
    }

    ctx->pc = 0x2346a0u;

label_2346a0:
    // 0x2346a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2346a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2346a4:
    // 0x2346a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2346a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2346a8:
    // 0x2346a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2346a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2346ac:
    // 0x2346ac: 0x8c45023c  lw          $a1, 0x23C($v0)
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_2346b0:
    // 0x2346b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2346b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2346b4:
    // 0x2346b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2346b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2346b8:
    // 0x2346b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2346b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2346bc:
    // 0x2346bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2346bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2346c0:
    // 0x2346c0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_2346c4:
    if (ctx->pc == 0x2346C4u) {
        ctx->pc = 0x2346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C0u;
        // 0x2346c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346C8u;
        goto label_2346c8;
    }
    ctx->pc = 0x2346C0u;
    {
        const bool branch_taken_0x2346c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C0u;
        // 0x2346c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346c0) {
            ctx->pc = 0x234748u;
            goto label_234748;
        }
    }
    ctx->pc = 0x2346C8u;
label_2346c8:
    // 0x2346c8: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_2346cc:
    if (ctx->pc == 0x2346CCu) {
        ctx->pc = 0x2346CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C8u;
        // 0x2346cc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346D0u;
        goto label_2346d0;
    }
    ctx->pc = 0x2346C8u;
    {
        const bool branch_taken_0x2346c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C8u;
        // 0x2346cc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346c8) {
            ctx->pc = 0x234748u;
            goto label_234748;
        }
    }
    ctx->pc = 0x2346D0u;
label_2346d0:
    // 0x2346d0: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x2346d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2346d4:
    // 0x2346d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2346d8:
    // 0x2346d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2346d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2346dc:
    // 0x2346dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2346e0:
    // 0x2346e0: 0x40f809  jalr        $v0
label_2346e4:
    if (ctx->pc == 0x2346E4u) {
        ctx->pc = 0x2346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E0u;
        // 0x2346e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346E8u;
        goto label_2346e8;
    }
    ctx->pc = 0x2346E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2346E8u);
        ctx->pc = 0x2346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E0u;
        // 0x2346e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2346E0u, 0x2346E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2346E8u;
label_2346e8:
    // 0x2346e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2346ec:
    if (ctx->pc == 0x2346ECu) {
        ctx->pc = 0x2346ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E8u;
        // 0x2346ec: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346F0u;
        goto label_2346f0;
    }
    ctx->pc = 0x2346E8u;
    {
        const bool branch_taken_0x2346e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E8u;
        // 0x2346ec: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346e8) {
            ctx->pc = 0x234748u;
            goto label_234748;
        }
    }
    ctx->pc = 0x2346F0u;
label_2346f0:
    // 0x2346f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2346f4:
    // 0x2346f4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2346f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2346f8:
    // 0x2346f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2346f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2346fc:
    // 0x2346fc: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2346fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_234700:
    // 0x234700: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234704:
    // 0x234704: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x234704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_234708:
    // 0x234708: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x234708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_23470c:
    // 0x23470c: 0x40f809  jalr        $v0
label_234710:
    if (ctx->pc == 0x234710u) {
        ctx->pc = 0x234710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23470Cu;
        // 0x234710: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234714u;
        goto label_234714;
    }
    ctx->pc = 0x23470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234714u);
        ctx->pc = 0x234710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23470Cu;
        // 0x234710: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23470Cu, 0x234714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234714u;
label_234714:
    // 0x234714: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234718:
    // 0x234718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23471c:
    // 0x23471c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234720:
    // 0x234720: 0x40f809  jalr        $v0
label_234724:
    if (ctx->pc == 0x234724u) {
        ctx->pc = 0x234724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234720u;
        // 0x234724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234728u;
        goto label_234728;
    }
    ctx->pc = 0x234720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234728u);
        ctx->pc = 0x234724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234720u;
        // 0x234724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234720u, 0x234728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234728u;
label_234728:
    // 0x234728: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x234728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_23472c:
    // 0x23472c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234730:
    // 0x234730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234734:
    // 0x234734: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x234734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234738:
    // 0x234738: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x234738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_23473c:
    // 0x23473c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x23473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_234740:
    // 0x234740: 0x60f809  jalr        $v1
label_234744:
    if (ctx->pc == 0x234744u) {
        ctx->pc = 0x234744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234740u;
        // 0x234744: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234748u;
        goto label_234748;
    }
    ctx->pc = 0x234740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234748u);
        ctx->pc = 0x234744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234740u;
        // 0x234744: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234740u, 0x234748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234748u;
label_234748:
    // 0x234748: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23474c:
    // 0x23474c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23474cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234750:
    // 0x234750: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234754:
    // 0x234754: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x234754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234758:
    // 0x234758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23475c:
    // 0x23475c: 0x3e00008  jr          $ra
label_234760:
    if (ctx->pc == 0x234760u) {
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23475Cu;
        // 0x234760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234764u;
        goto label_234764;
    }
    ctx->pc = 0x23475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23475Cu;
        // 0x234760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234764u;
label_234764:
    // 0x234764: 0x0  nop
    ctx->pc = 0x234764u;
    // NOP
    ctx->pc = 0x234768u;
}
