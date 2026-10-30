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

// Function: sub_002366D8
// Address: 0x2366d8 - 0x236780
void sub_002366D8_0x2366d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002366D8_0x2366d8");
#endif

    switch (ctx->pc) {
        case 0x2366d8u: goto label_2366d8;
        case 0x2366dcu: goto label_2366dc;
        case 0x2366e0u: goto label_2366e0;
        case 0x2366e4u: goto label_2366e4;
        case 0x2366e8u: goto label_2366e8;
        case 0x2366ecu: goto label_2366ec;
        case 0x2366f0u: goto label_2366f0;
        case 0x2366f4u: goto label_2366f4;
        case 0x2366f8u: goto label_2366f8;
        case 0x2366fcu: goto label_2366fc;
        case 0x236700u: goto label_236700;
        case 0x236704u: goto label_236704;
        case 0x236708u: goto label_236708;
        case 0x23670cu: goto label_23670c;
        case 0x236710u: goto label_236710;
        case 0x236714u: goto label_236714;
        case 0x236718u: goto label_236718;
        case 0x23671cu: goto label_23671c;
        case 0x236720u: goto label_236720;
        case 0x236724u: goto label_236724;
        case 0x236728u: goto label_236728;
        case 0x23672cu: goto label_23672c;
        case 0x236730u: goto label_236730;
        case 0x236734u: goto label_236734;
        case 0x236738u: goto label_236738;
        case 0x23673cu: goto label_23673c;
        case 0x236740u: goto label_236740;
        case 0x236744u: goto label_236744;
        case 0x236748u: goto label_236748;
        case 0x23674cu: goto label_23674c;
        case 0x236750u: goto label_236750;
        case 0x236754u: goto label_236754;
        case 0x236758u: goto label_236758;
        case 0x23675cu: goto label_23675c;
        case 0x236760u: goto label_236760;
        case 0x236764u: goto label_236764;
        case 0x236768u: goto label_236768;
        case 0x23676cu: goto label_23676c;
        case 0x236770u: goto label_236770;
        case 0x236774u: goto label_236774;
        case 0x236778u: goto label_236778;
        case 0x23677cu: goto label_23677c;
        default: break;
    }

    ctx->pc = 0x2366d8u;

label_2366d8:
    // 0x2366d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2366d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2366dc:
    // 0x2366dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2366dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2366e0:
    // 0x2366e0: 0x8c42028c  lw          $v0, 0x28C($v0)
    ctx->pc = 0x2366e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
label_2366e4:
    // 0x2366e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2366e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2366e8:
    // 0x2366e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2366e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2366ec:
    // 0x2366ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2366ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2366f0:
    // 0x2366f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2366f4:
    if (ctx->pc == 0x2366F4u) {
        ctx->pc = 0x2366F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366F0u;
        // 0x2366f4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366F8u;
        goto label_2366f8;
    }
    ctx->pc = 0x2366F0u;
    {
        const bool branch_taken_0x2366f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366F0u;
        // 0x2366f4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366f0) {
            ctx->pc = 0x236770u;
            goto label_236770;
        }
    }
    ctx->pc = 0x2366F8u;
label_2366f8:
    // 0x2366f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2366f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2366fc:
    // 0x2366fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2366fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236700:
    // 0x236700: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236704:
    // 0x236704: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236708:
    // 0x236708: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23670c:
    // 0x23670c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236710:
    // 0x236710: 0x40f809  jalr        $v0
label_236714:
    if (ctx->pc == 0x236714u) {
        ctx->pc = 0x236714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236710u;
        // 0x236714: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236718u;
        goto label_236718;
    }
    ctx->pc = 0x236710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236718u);
        ctx->pc = 0x236714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236710u;
        // 0x236714: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236710u, 0x236718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236718u;
label_236718:
    // 0x236718: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23671c:
    // 0x23671c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236720:
    // 0x236720: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236724:
    // 0x236724: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236728:
    // 0x236728: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23672c:
    // 0x23672c: 0x60f809  jalr        $v1
label_236730:
    if (ctx->pc == 0x236730u) {
        ctx->pc = 0x236730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23672Cu;
        // 0x236730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236734u;
        goto label_236734;
    }
    ctx->pc = 0x23672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236734u);
        ctx->pc = 0x236730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23672Cu;
        // 0x236730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23672Cu, 0x236734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236734u;
label_236734:
    // 0x236734: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236738:
    // 0x236738: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x236738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_23673c:
    // 0x23673c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236740:
    // 0x236740: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236744:
    // 0x236744: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_236748:
    // 0x236748: 0x60f809  jalr        $v1
label_23674c:
    if (ctx->pc == 0x23674Cu) {
        ctx->pc = 0x23674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236748u;
        // 0x23674c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236750u;
        goto label_236750;
    }
    ctx->pc = 0x236748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236750u);
        ctx->pc = 0x23674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236748u;
        // 0x23674c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236748u, 0x236750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236750u;
label_236750:
    // 0x236750: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x236750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236754:
    // 0x236754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236758:
    // 0x236758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23675c:
    // 0x23675c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_236760:
    // 0x236760: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x236760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_236764:
    // 0x236764: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x236764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_236768:
    // 0x236768: 0x60f809  jalr        $v1
label_23676c:
    if (ctx->pc == 0x23676Cu) {
        ctx->pc = 0x23676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236768u;
        // 0x23676c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236770u;
        goto label_236770;
    }
    ctx->pc = 0x236768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236770u);
        ctx->pc = 0x23676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236768u;
        // 0x23676c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236768u, 0x236770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236770u;
label_236770:
    // 0x236770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236774:
    // 0x236774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236778:
    // 0x236778: 0x3e00008  jr          $ra
label_23677c:
    if (ctx->pc == 0x23677Cu) {
        ctx->pc = 0x23677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236778u;
        // 0x23677c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236780u;
        goto label_fallthrough_0x236778;
    }
    ctx->pc = 0x236778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236778u;
        // 0x23677c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236778:
    ctx->pc = 0x236780u;
}
