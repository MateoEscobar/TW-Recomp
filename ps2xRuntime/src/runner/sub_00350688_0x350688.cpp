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

// Function: sub_00350688
// Address: 0x350688 - 0x350778
void sub_00350688_0x350688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350688_0x350688");
#endif

    switch (ctx->pc) {
        case 0x350688u: goto label_350688;
        case 0x35068cu: goto label_35068c;
        case 0x350690u: goto label_350690;
        case 0x350694u: goto label_350694;
        case 0x350698u: goto label_350698;
        case 0x35069cu: goto label_35069c;
        case 0x3506a0u: goto label_3506a0;
        case 0x3506a4u: goto label_3506a4;
        case 0x3506a8u: goto label_3506a8;
        case 0x3506acu: goto label_3506ac;
        case 0x3506b0u: goto label_3506b0;
        case 0x3506b4u: goto label_3506b4;
        case 0x3506b8u: goto label_3506b8;
        case 0x3506bcu: goto label_3506bc;
        case 0x3506c0u: goto label_3506c0;
        case 0x3506c4u: goto label_3506c4;
        case 0x3506c8u: goto label_3506c8;
        case 0x3506ccu: goto label_3506cc;
        case 0x3506d0u: goto label_3506d0;
        case 0x3506d4u: goto label_3506d4;
        case 0x3506d8u: goto label_3506d8;
        case 0x3506dcu: goto label_3506dc;
        case 0x3506e0u: goto label_3506e0;
        case 0x3506e4u: goto label_3506e4;
        case 0x3506e8u: goto label_3506e8;
        case 0x3506ecu: goto label_3506ec;
        case 0x3506f0u: goto label_3506f0;
        case 0x3506f4u: goto label_3506f4;
        case 0x3506f8u: goto label_3506f8;
        case 0x3506fcu: goto label_3506fc;
        case 0x350700u: goto label_350700;
        case 0x350704u: goto label_350704;
        case 0x350708u: goto label_350708;
        case 0x35070cu: goto label_35070c;
        case 0x350710u: goto label_350710;
        case 0x350714u: goto label_350714;
        case 0x350718u: goto label_350718;
        case 0x35071cu: goto label_35071c;
        case 0x350720u: goto label_350720;
        case 0x350724u: goto label_350724;
        case 0x350728u: goto label_350728;
        case 0x35072cu: goto label_35072c;
        case 0x350730u: goto label_350730;
        case 0x350734u: goto label_350734;
        case 0x350738u: goto label_350738;
        case 0x35073cu: goto label_35073c;
        case 0x350740u: goto label_350740;
        case 0x350744u: goto label_350744;
        case 0x350748u: goto label_350748;
        case 0x35074cu: goto label_35074c;
        case 0x350750u: goto label_350750;
        case 0x350754u: goto label_350754;
        case 0x350758u: goto label_350758;
        case 0x35075cu: goto label_35075c;
        case 0x350760u: goto label_350760;
        case 0x350764u: goto label_350764;
        case 0x350768u: goto label_350768;
        case 0x35076cu: goto label_35076c;
        case 0x350770u: goto label_350770;
        case 0x350774u: goto label_350774;
        default: break;
    }

    ctx->pc = 0x350688u;

label_350688:
    // 0x350688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35068c:
    // 0x35068c: 0x2407011d  addiu       $a3, $zero, 0x11D
    ctx->pc = 0x35068cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_350690:
    // 0x350690: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x350690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_350694:
    // 0x350694: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x350694u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_350698:
    // 0x350698: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x350698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_35069c:
    // 0x35069c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3506a0:
    // 0x3506a0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3506a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3506a4:
    // 0x3506a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3506a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3506a8:
    // 0x3506a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3506a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3506ac:
    // 0x3506ac: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x3506acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_3506b0:
    // 0x3506b0: 0x261088f8  addiu       $s0, $s0, -0x7708
    ctx->pc = 0x3506b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936824));
label_3506b4:
    // 0x3506b4: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x3506b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_3506b8:
    // 0x3506b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3506b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3506bc:
    // 0x3506bc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3506bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3506c0:
    // 0x3506c0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x3506c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_3506c4:
    // 0x3506c4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x3506c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3506c8:
    // 0x3506c8: 0x40f809  jalr        $v0
label_3506cc:
    if (ctx->pc == 0x3506CCu) {
        ctx->pc = 0x3506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506C8u;
        // 0x3506cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3506D0u;
        goto label_3506d0;
    }
    ctx->pc = 0x3506C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3506D0u);
        ctx->pc = 0x3506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506C8u;
        // 0x3506cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506C8u, 0x3506D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3506D0u;
label_3506d0:
    // 0x3506d0: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x3506d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_3506d4:
    // 0x3506d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3506d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3506d8:
    // 0x3506d8: 0x8e450078  lw          $a1, 0x78($s2)
    ctx->pc = 0x3506d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_3506dc:
    // 0x3506dc: 0x2407011e  addiu       $a3, $zero, 0x11E
    ctx->pc = 0x3506dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
label_3506e0:
    // 0x3506e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3506e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3506e4:
    // 0x3506e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3506e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3506e8:
    // 0x3506e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3506e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3506ec:
    // 0x3506ec: 0x60f809  jalr        $v1
label_3506f0:
    if (ctx->pc == 0x3506F0u) {
        ctx->pc = 0x3506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506ECu;
        // 0x3506f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3506F4u;
        goto label_3506f4;
    }
    ctx->pc = 0x3506ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3506F4u);
        ctx->pc = 0x3506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506ECu;
        // 0x3506f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506ECu, 0x3506F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3506F4u;
label_3506f4:
    // 0x3506f4: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x3506f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_3506f8:
    // 0x3506f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3506f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3506fc:
    // 0x3506fc: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x3506fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_350700:
    // 0x350700: 0x2407011f  addiu       $a3, $zero, 0x11F
    ctx->pc = 0x350700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_350704:
    // 0x350704: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_350708:
    // 0x350708: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_35070c:
    // 0x35070c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x35070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_350710:
    // 0x350710: 0x60f809  jalr        $v1
label_350714:
    if (ctx->pc == 0x350714u) {
        ctx->pc = 0x350714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350710u;
        // 0x350714: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350718u;
        goto label_350718;
    }
    ctx->pc = 0x350710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x350718u);
        ctx->pc = 0x350714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350710u;
        // 0x350714: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350710u, 0x350718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350718u;
label_350718:
    // 0x350718: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x350718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_35071c:
    // 0x35071c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35071cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350720:
    // 0x350720: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x350720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_350724:
    // 0x350724: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x350724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_350728:
    // 0x350728: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_35072c:
    // 0x35072c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x35072cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_350730:
    // 0x350730: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x350730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_350734:
    // 0x350734: 0x60f809  jalr        $v1
label_350738:
    if (ctx->pc == 0x350738u) {
        ctx->pc = 0x350738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350734u;
        // 0x350738: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35073Cu;
        goto label_35073c;
    }
    ctx->pc = 0x350734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35073Cu);
        ctx->pc = 0x350738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350734u;
        // 0x350738: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350734u, 0x35073Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35073Cu;
label_35073c:
    // 0x35073c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x35073cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_350740:
    // 0x350740: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x350740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350744:
    // 0x350744: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x350744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_350748:
    // 0x350748: 0x24070121  addiu       $a3, $zero, 0x121
    ctx->pc = 0x350748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
label_35074c:
    // 0x35074c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_350750:
    // 0x350750: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x350750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_350754:
    // 0x350754: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x350754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_350758:
    // 0x350758: 0x60f809  jalr        $v1
label_35075c:
    if (ctx->pc == 0x35075Cu) {
        ctx->pc = 0x35075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350758u;
        // 0x35075c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350760u;
        goto label_350760;
    }
    ctx->pc = 0x350758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x350760u);
        ctx->pc = 0x35075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350758u;
        // 0x35075c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350758u, 0x350760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350760u;
label_350760:
    // 0x350760: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x350760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_350764:
    // 0x350764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x350764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_350768:
    // 0x350768: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x350768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35076c:
    // 0x35076c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350770:
    // 0x350770: 0x3e00008  jr          $ra
label_350774:
    if (ctx->pc == 0x350774u) {
        ctx->pc = 0x350774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350770u;
        // 0x350774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350778u;
        goto label_fallthrough_0x350770;
    }
    ctx->pc = 0x350770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350770u;
        // 0x350774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x350770:
    ctx->pc = 0x350778u;
}
