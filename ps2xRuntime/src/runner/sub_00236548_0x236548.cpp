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

// Function: sub_00236548
// Address: 0x236548 - 0x2365f0
void sub_00236548_0x236548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236548_0x236548");
#endif

    switch (ctx->pc) {
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        case 0x236550u: goto label_236550;
        case 0x236554u: goto label_236554;
        case 0x236558u: goto label_236558;
        case 0x23655cu: goto label_23655c;
        case 0x236560u: goto label_236560;
        case 0x236564u: goto label_236564;
        case 0x236568u: goto label_236568;
        case 0x23656cu: goto label_23656c;
        case 0x236570u: goto label_236570;
        case 0x236574u: goto label_236574;
        case 0x236578u: goto label_236578;
        case 0x23657cu: goto label_23657c;
        case 0x236580u: goto label_236580;
        case 0x236584u: goto label_236584;
        case 0x236588u: goto label_236588;
        case 0x23658cu: goto label_23658c;
        case 0x236590u: goto label_236590;
        case 0x236594u: goto label_236594;
        case 0x236598u: goto label_236598;
        case 0x23659cu: goto label_23659c;
        case 0x2365a0u: goto label_2365a0;
        case 0x2365a4u: goto label_2365a4;
        case 0x2365a8u: goto label_2365a8;
        case 0x2365acu: goto label_2365ac;
        case 0x2365b0u: goto label_2365b0;
        case 0x2365b4u: goto label_2365b4;
        case 0x2365b8u: goto label_2365b8;
        case 0x2365bcu: goto label_2365bc;
        case 0x2365c0u: goto label_2365c0;
        case 0x2365c4u: goto label_2365c4;
        case 0x2365c8u: goto label_2365c8;
        case 0x2365ccu: goto label_2365cc;
        case 0x2365d0u: goto label_2365d0;
        case 0x2365d4u: goto label_2365d4;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365dcu: goto label_2365dc;
        case 0x2365e0u: goto label_2365e0;
        case 0x2365e4u: goto label_2365e4;
        case 0x2365e8u: goto label_2365e8;
        case 0x2365ecu: goto label_2365ec;
        default: break;
    }

    ctx->pc = 0x236548u;

label_236548:
    // 0x236548: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23654c:
    // 0x23654c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23654cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236550:
    // 0x236550: 0x8c42027c  lw          $v0, 0x27C($v0)
    ctx->pc = 0x236550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_236554:
    // 0x236554: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_236558:
    // 0x236558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23655c:
    // 0x23655c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23655cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_236560:
    // 0x236560: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_236564:
    if (ctx->pc == 0x236564u) {
        ctx->pc = 0x236564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236560u;
        // 0x236564: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236568u;
        goto label_236568;
    }
    ctx->pc = 0x236560u;
    {
        const bool branch_taken_0x236560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236560u;
        // 0x236564: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236560) {
            ctx->pc = 0x2365E0u;
            goto label_2365e0;
        }
    }
    ctx->pc = 0x236568u;
label_236568:
    // 0x236568: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x236568u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23656c:
    // 0x23656c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236570:
    // 0x236570: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236574:
    // 0x236574: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236578:
    // 0x236578: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23657c:
    // 0x23657c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236580:
    // 0x236580: 0x40f809  jalr        $v0
label_236584:
    if (ctx->pc == 0x236584u) {
        ctx->pc = 0x236584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236580u;
        // 0x236584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236588u;
        goto label_236588;
    }
    ctx->pc = 0x236580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236588u);
        ctx->pc = 0x236584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236580u;
        // 0x236584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236580u, 0x236588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236588u;
label_236588:
    // 0x236588: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23658c:
    // 0x23658c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236590:
    // 0x236590: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236594:
    // 0x236594: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236598:
    // 0x236598: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23659c:
    // 0x23659c: 0x60f809  jalr        $v1
label_2365a0:
    if (ctx->pc == 0x2365A0u) {
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365A4u;
        goto label_2365a4;
    }
    ctx->pc = 0x23659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2365A4u);
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23659Cu, 0x2365A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2365A4u;
label_2365a4:
    // 0x2365a4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2365a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2365a8:
    // 0x2365a8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2365a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2365ac:
    // 0x2365ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2365acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2365b0:
    // 0x2365b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2365b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2365b4:
    // 0x2365b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2365b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2365b8:
    // 0x2365b8: 0x60f809  jalr        $v1
label_2365bc:
    if (ctx->pc == 0x2365BCu) {
        ctx->pc = 0x2365BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B8u;
        // 0x2365bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365C0u;
        goto label_2365c0;
    }
    ctx->pc = 0x2365B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2365C0u);
        ctx->pc = 0x2365BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B8u;
        // 0x2365bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365B8u, 0x2365C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2365C0u;
label_2365c0:
    // 0x2365c0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2365c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2365c4:
    // 0x2365c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2365c8:
    // 0x2365c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2365c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2365cc:
    // 0x2365cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2365ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2365d0:
    // 0x2365d0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2365d4:
    // 0x2365d4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2365d8:
    // 0x2365d8: 0x60f809  jalr        $v1
label_2365dc:
    if (ctx->pc == 0x2365DCu) {
        ctx->pc = 0x2365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D8u;
        // 0x2365dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365E0u;
        goto label_2365e0;
    }
    ctx->pc = 0x2365D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2365E0u);
        ctx->pc = 0x2365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D8u;
        // 0x2365dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365D8u, 0x2365E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2365E0u;
label_2365e0:
    // 0x2365e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2365e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2365e4:
    // 0x2365e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2365e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2365e8:
    // 0x2365e8: 0x3e00008  jr          $ra
label_2365ec:
    if (ctx->pc == 0x2365ECu) {
        ctx->pc = 0x2365ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365E8u;
        // 0x2365ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365F0u;
        goto label_fallthrough_0x2365e8;
    }
    ctx->pc = 0x2365E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2365ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365E8u;
        // 0x2365ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2365E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2365e8:
    ctx->pc = 0x2365F0u;
}
