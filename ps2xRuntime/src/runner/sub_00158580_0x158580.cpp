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

// Function: sub_00158580
// Address: 0x158580 - 0x158660
void sub_00158580_0x158580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158580_0x158580");
#endif

    switch (ctx->pc) {
        case 0x158580u: goto label_158580;
        case 0x158584u: goto label_158584;
        case 0x158588u: goto label_158588;
        case 0x15858cu: goto label_15858c;
        case 0x158590u: goto label_158590;
        case 0x158594u: goto label_158594;
        case 0x158598u: goto label_158598;
        case 0x15859cu: goto label_15859c;
        case 0x1585a0u: goto label_1585a0;
        case 0x1585a4u: goto label_1585a4;
        case 0x1585a8u: goto label_1585a8;
        case 0x1585acu: goto label_1585ac;
        case 0x1585b0u: goto label_1585b0;
        case 0x1585b4u: goto label_1585b4;
        case 0x1585b8u: goto label_1585b8;
        case 0x1585bcu: goto label_1585bc;
        case 0x1585c0u: goto label_1585c0;
        case 0x1585c4u: goto label_1585c4;
        case 0x1585c8u: goto label_1585c8;
        case 0x1585ccu: goto label_1585cc;
        case 0x1585d0u: goto label_1585d0;
        case 0x1585d4u: goto label_1585d4;
        case 0x1585d8u: goto label_1585d8;
        case 0x1585dcu: goto label_1585dc;
        case 0x1585e0u: goto label_1585e0;
        case 0x1585e4u: goto label_1585e4;
        case 0x1585e8u: goto label_1585e8;
        case 0x1585ecu: goto label_1585ec;
        case 0x1585f0u: goto label_1585f0;
        case 0x1585f4u: goto label_1585f4;
        case 0x1585f8u: goto label_1585f8;
        case 0x1585fcu: goto label_1585fc;
        case 0x158600u: goto label_158600;
        case 0x158604u: goto label_158604;
        case 0x158608u: goto label_158608;
        case 0x15860cu: goto label_15860c;
        case 0x158610u: goto label_158610;
        case 0x158614u: goto label_158614;
        case 0x158618u: goto label_158618;
        case 0x15861cu: goto label_15861c;
        case 0x158620u: goto label_158620;
        case 0x158624u: goto label_158624;
        case 0x158628u: goto label_158628;
        case 0x15862cu: goto label_15862c;
        case 0x158630u: goto label_158630;
        case 0x158634u: goto label_158634;
        case 0x158638u: goto label_158638;
        case 0x15863cu: goto label_15863c;
        case 0x158640u: goto label_158640;
        case 0x158644u: goto label_158644;
        case 0x158648u: goto label_158648;
        case 0x15864cu: goto label_15864c;
        case 0x158650u: goto label_158650;
        case 0x158654u: goto label_158654;
        case 0x158658u: goto label_158658;
        case 0x15865cu: goto label_15865c;
        default: break;
    }

    ctx->pc = 0x158580u;

label_158580:
    // 0x158580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_158584:
    // 0x158584: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158588:
    // 0x158588: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x158588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15858c:
    // 0x15858c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158590:
    // 0x158590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158594:
    // 0x158594: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x158594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_158598:
    // 0x158598: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_15859c:
    // 0x15859c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1585a0:
    // 0x1585a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1585a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1585a4:
    // 0x1585a4: 0xc0e8b20  jal         func_3A2C80
label_1585a8:
    if (ctx->pc == 0x1585A8u) {
        ctx->pc = 0x1585A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585A4u;
        // 0x1585a8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585ACu;
        goto label_1585ac;
    }
    ctx->pc = 0x1585A4u;
    SET_GPR_U32(ctx, 31, 0x1585ACu);
    ctx->pc = 0x1585A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1585A4u;
    // 0x1585a8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x1585A4u, 0x1585ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585ACu;
label_1585ac:
    // 0x1585ac: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1585b0:
    // 0x1585b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1585b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1585b4:
    // 0x1585b4: 0xa06256e0  sb          $v0, 0x56E0($v1)
    ctx->pc = 0x1585b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22240), (uint8_t)GPR_U32(ctx, 2));
label_1585b8:
    // 0x1585b8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1585b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1585bc:
    // 0x1585bc: 0xc0e409a  jal         func_390268
label_1585c0:
    if (ctx->pc == 0x1585C0u) {
        ctx->pc = 0x1585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585BCu;
        // 0x1585c0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585C4u;
        goto label_1585c4;
    }
    ctx->pc = 0x1585BCu;
    SET_GPR_U32(ctx, 31, 0x1585C4u);
    ctx->pc = 0x1585C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1585BCu;
    // 0x1585c0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1585BCu, 0x1585C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585C4u;
label_1585c4:
    // 0x1585c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1585c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1585c8:
    // 0x1585c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1585cc:
    // 0x1585cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1585d0:
    // 0x1585d0: 0x24510840  addiu       $s1, $v0, 0x840
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1585d4:
    // 0x1585d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1585d8:
    // 0x1585d8: 0x8c6277a4  lw          $v0, 0x77A4($v1)
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30628)));
label_1585dc:
    // 0x1585dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1585e0:
    if (ctx->pc == 0x1585E0u) {
        ctx->pc = 0x1585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585DCu;
        // 0x1585e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585E4u;
        goto label_1585e4;
    }
    ctx->pc = 0x1585DCu;
    {
        const bool branch_taken_0x1585dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585DCu;
        // 0x1585e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585dc) {
            ctx->pc = 0x158624u;
            goto label_158624;
        }
    }
    ctx->pc = 0x1585E4u;
label_1585e4:
    // 0x1585e4: 0x8c6277a0  lw          $v0, 0x77A0($v1)
    ctx->pc = 0x1585e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30624)));
label_1585e8:
    // 0x1585e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1585ec:
    if (ctx->pc == 0x1585ECu) {
        ctx->pc = 0x1585ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E8u;
        // 0x1585ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585F0u;
        goto label_1585f0;
    }
    ctx->pc = 0x1585E8u;
    {
        const bool branch_taken_0x1585e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1585ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E8u;
        // 0x1585ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585e8) {
            ctx->pc = 0x158624u;
            goto label_158624;
        }
    }
    ctx->pc = 0x1585F0u;
label_1585f0:
    // 0x1585f0: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1585f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1585f4:
    // 0x1585f4: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_1585f8:
    // 0x1585f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1585fc:
    if (ctx->pc == 0x1585FCu) {
        ctx->pc = 0x1585FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585F8u;
        // 0x1585fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158600u;
        goto label_158600;
    }
    ctx->pc = 0x1585F8u;
    {
        const bool branch_taken_0x1585f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1585FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585F8u;
        // 0x1585fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585f8) {
            ctx->pc = 0x158624u;
            goto label_158624;
        }
    }
    ctx->pc = 0x158600u;
label_158600:
    // 0x158600: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_158604:
    if (ctx->pc == 0x158604u) {
        ctx->pc = 0x158608u;
        goto label_158608;
    }
    ctx->pc = 0x158600u;
    {
        const bool branch_taken_0x158600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158600) {
            ctx->pc = 0x158618u;
            goto label_158618;
        }
    }
    ctx->pc = 0x158608u;
label_158608:
    // 0x158608: 0xc089f4a  jal         func_227D28
label_15860c:
    if (ctx->pc == 0x15860Cu) {
        ctx->pc = 0x158610u;
        goto label_158610;
    }
    ctx->pc = 0x158608u;
    SET_GPR_U32(ctx, 31, 0x158610u);
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x158608u, 0x158610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158610u;
label_158610:
    // 0x158610: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_158614:
    if (ctx->pc == 0x158614u) {
        ctx->pc = 0x158614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158610u;
        // 0x158614: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158618u;
        goto label_158618;
    }
    ctx->pc = 0x158610u;
    {
        const bool branch_taken_0x158610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158610u;
        // 0x158614: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158610) {
            ctx->pc = 0x158624u;
            goto label_158624;
        }
    }
    ctx->pc = 0x158618u;
label_158618:
    // 0x158618: 0xc06c83e  jal         func_1B20F8
label_15861c:
    if (ctx->pc == 0x15861Cu) {
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158618u;
        // 0x15861c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158620u;
        goto label_158620;
    }
    ctx->pc = 0x158618u;
    SET_GPR_U32(ctx, 31, 0x158620u);
    ctx->pc = 0x15861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158618u;
    // 0x15861c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F8u, 0x158618u, 0x158620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158620u;
label_158620:
    // 0x158620: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158624:
    // 0x158624: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x158624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_158628:
    // 0x158628: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x158628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15862c:
    // 0x15862c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15862cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_158630:
    // 0x158630: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158634:
    // 0x158634: 0x40f809  jalr        $v0
label_158638:
    if (ctx->pc == 0x158638u) {
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158634u;
        // 0x158638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15863Cu;
        goto label_15863c;
    }
    ctx->pc = 0x158634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15863Cu);
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158634u;
        // 0x158638: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158634u, 0x15863Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15863Cu;
label_15863c:
    // 0x15863c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x15863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_158640:
    // 0x158640: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x158640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_158644:
    // 0x158644: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x158644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
label_158648:
    // 0x158648: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x158648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15864c:
    // 0x15864c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15864cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_158650:
    // 0x158650: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x158650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_158654:
    // 0x158654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158658:
    // 0x158658: 0x3e00008  jr          $ra
label_15865c:
    if (ctx->pc == 0x15865Cu) {
        ctx->pc = 0x15865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158658u;
        // 0x15865c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158660u;
        goto label_fallthrough_0x158658;
    }
    ctx->pc = 0x158658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158658u;
        // 0x15865c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158658:
    ctx->pc = 0x158660u;
}
