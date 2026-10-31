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

// Function: sub_00432660
// Address: 0x432660 - 0x4327c8
void sub_00432660_0x432660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432660_0x432660");
#endif

    switch (ctx->pc) {
        case 0x432660u: goto label_432660;
        case 0x432664u: goto label_432664;
        case 0x432668u: goto label_432668;
        case 0x43266cu: goto label_43266c;
        case 0x432670u: goto label_432670;
        case 0x432674u: goto label_432674;
        case 0x432678u: goto label_432678;
        case 0x43267cu: goto label_43267c;
        case 0x432680u: goto label_432680;
        case 0x432684u: goto label_432684;
        case 0x432688u: goto label_432688;
        case 0x43268cu: goto label_43268c;
        case 0x432690u: goto label_432690;
        case 0x432694u: goto label_432694;
        case 0x432698u: goto label_432698;
        case 0x43269cu: goto label_43269c;
        case 0x4326a0u: goto label_4326a0;
        case 0x4326a4u: goto label_4326a4;
        case 0x4326a8u: goto label_4326a8;
        case 0x4326acu: goto label_4326ac;
        case 0x4326b0u: goto label_4326b0;
        case 0x4326b4u: goto label_4326b4;
        case 0x4326b8u: goto label_4326b8;
        case 0x4326bcu: goto label_4326bc;
        case 0x4326c0u: goto label_4326c0;
        case 0x4326c4u: goto label_4326c4;
        case 0x4326c8u: goto label_4326c8;
        case 0x4326ccu: goto label_4326cc;
        case 0x4326d0u: goto label_4326d0;
        case 0x4326d4u: goto label_4326d4;
        case 0x4326d8u: goto label_4326d8;
        case 0x4326dcu: goto label_4326dc;
        case 0x4326e0u: goto label_4326e0;
        case 0x4326e4u: goto label_4326e4;
        case 0x4326e8u: goto label_4326e8;
        case 0x4326ecu: goto label_4326ec;
        case 0x4326f0u: goto label_4326f0;
        case 0x4326f4u: goto label_4326f4;
        case 0x4326f8u: goto label_4326f8;
        case 0x4326fcu: goto label_4326fc;
        case 0x432700u: goto label_432700;
        case 0x432704u: goto label_432704;
        case 0x432708u: goto label_432708;
        case 0x43270cu: goto label_43270c;
        case 0x432710u: goto label_432710;
        case 0x432714u: goto label_432714;
        case 0x432718u: goto label_432718;
        case 0x43271cu: goto label_43271c;
        case 0x432720u: goto label_432720;
        case 0x432724u: goto label_432724;
        case 0x432728u: goto label_432728;
        case 0x43272cu: goto label_43272c;
        case 0x432730u: goto label_432730;
        case 0x432734u: goto label_432734;
        case 0x432738u: goto label_432738;
        case 0x43273cu: goto label_43273c;
        case 0x432740u: goto label_432740;
        case 0x432744u: goto label_432744;
        case 0x432748u: goto label_432748;
        case 0x43274cu: goto label_43274c;
        case 0x432750u: goto label_432750;
        case 0x432754u: goto label_432754;
        case 0x432758u: goto label_432758;
        case 0x43275cu: goto label_43275c;
        case 0x432760u: goto label_432760;
        case 0x432764u: goto label_432764;
        case 0x432768u: goto label_432768;
        case 0x43276cu: goto label_43276c;
        case 0x432770u: goto label_432770;
        case 0x432774u: goto label_432774;
        case 0x432778u: goto label_432778;
        case 0x43277cu: goto label_43277c;
        case 0x432780u: goto label_432780;
        case 0x432784u: goto label_432784;
        case 0x432788u: goto label_432788;
        case 0x43278cu: goto label_43278c;
        case 0x432790u: goto label_432790;
        case 0x432794u: goto label_432794;
        case 0x432798u: goto label_432798;
        case 0x43279cu: goto label_43279c;
        case 0x4327a0u: goto label_4327a0;
        case 0x4327a4u: goto label_4327a4;
        case 0x4327a8u: goto label_4327a8;
        case 0x4327acu: goto label_4327ac;
        case 0x4327b0u: goto label_4327b0;
        case 0x4327b4u: goto label_4327b4;
        case 0x4327b8u: goto label_4327b8;
        case 0x4327bcu: goto label_4327bc;
        case 0x4327c0u: goto label_4327c0;
        case 0x4327c4u: goto label_4327c4;
        default: break;
    }

    ctx->pc = 0x432660u;

label_432660:
    // 0x432660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x432660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_432664:
    // 0x432664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x432664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_432668:
    // 0x432668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x432668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43266c:
    // 0x43266c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43266cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432670:
    // 0x432670: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x432670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_432674:
    // 0x432674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_432678:
    if (ctx->pc == 0x432678u) {
        ctx->pc = 0x432678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432674u;
        // 0x432678: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43267Cu;
        goto label_43267c;
    }
    ctx->pc = 0x432674u;
    {
        const bool branch_taken_0x432674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432674) {
            ctx->pc = 0x432678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432674u;
            // 0x432678: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432690u;
            goto label_432690;
        }
    }
    ctx->pc = 0x43267Cu;
label_43267c:
    // 0x43267c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_432680:
    // 0x432680: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x432680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_432684:
    // 0x432684: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x432684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_432688:
    // 0x432688: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_43268c:
    // 0x43268c: 0x0  nop
    ctx->pc = 0x43268cu;
    // NOP
label_432690:
    // 0x432690: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x432690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_432694:
    // 0x432694: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_432698:
    if (ctx->pc == 0x432698u) {
        ctx->pc = 0x432698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432694u;
        // 0x432698: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43269Cu;
        goto label_43269c;
    }
    ctx->pc = 0x432694u;
    {
        const bool branch_taken_0x432694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432694) {
            ctx->pc = 0x432698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432694u;
            // 0x432698: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4326A8u;
            goto label_4326a8;
        }
    }
    ctx->pc = 0x43269Cu;
label_43269c:
    // 0x43269c: 0xc10c63e  jal         func_4318F8
label_4326a0:
    if (ctx->pc == 0x4326A0u) {
        ctx->pc = 0x4326A4u;
        goto label_4326a4;
    }
    ctx->pc = 0x43269Cu;
    SET_GPR_U32(ctx, 31, 0x4326A4u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x43269Cu, 0x4326A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4326A4u;
label_4326a4:
    // 0x4326a4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x4326a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_4326a8:
    // 0x4326a8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x4326a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_4326ac:
    // 0x4326ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4326b0:
    if (ctx->pc == 0x4326B0u) {
        ctx->pc = 0x4326B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326ACu;
        // 0x4326b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326B4u;
        goto label_4326b4;
    }
    ctx->pc = 0x4326ACu;
    {
        const bool branch_taken_0x4326ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4326B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326ACu;
        // 0x4326b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326ac) {
            ctx->pc = 0x4326CCu;
            goto label_4326cc;
        }
    }
    ctx->pc = 0x4326B4u;
label_4326b4:
    // 0x4326b4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4326b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4326b8:
    // 0x4326b8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_4326bc:
    if (ctx->pc == 0x4326BCu) {
        ctx->pc = 0x4326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326B8u;
        // 0x4326bc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326C0u;
        goto label_4326c0;
    }
    ctx->pc = 0x4326B8u;
    {
        const bool branch_taken_0x4326b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4326b8) {
            ctx->pc = 0x4326BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4326B8u;
            // 0x4326bc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432710u;
            goto label_432710;
        }
    }
    ctx->pc = 0x4326C0u;
label_4326c0:
    // 0x4326c0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x4326c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_4326c4:
    // 0x4326c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4326c8:
    if (ctx->pc == 0x4326C8u) {
        ctx->pc = 0x4326C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326C4u;
        // 0x4326c8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326CCu;
        goto label_4326cc;
    }
    ctx->pc = 0x4326C4u;
    {
        const bool branch_taken_0x4326c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4326C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326C4u;
        // 0x4326c8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326c4) {
            ctx->pc = 0x4326D4u;
            goto label_4326d4;
        }
    }
    ctx->pc = 0x4326CCu;
label_4326cc:
    // 0x4326cc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4326d0:
    if (ctx->pc == 0x4326D0u) {
        ctx->pc = 0x4326D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326CCu;
        // 0x4326d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326D4u;
        goto label_4326d4;
    }
    ctx->pc = 0x4326CCu;
    {
        const bool branch_taken_0x4326cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4326D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326CCu;
        // 0x4326d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326cc) {
            ctx->pc = 0x4327B8u;
            goto label_4327b8;
        }
    }
    ctx->pc = 0x4326D4u;
label_4326d4:
    // 0x4326d4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4326d8:
    if (ctx->pc == 0x4326D8u) {
        ctx->pc = 0x4326D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326D4u;
        // 0x4326d8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326DCu;
        goto label_4326dc;
    }
    ctx->pc = 0x4326D4u;
    {
        const bool branch_taken_0x4326d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4326d4) {
            ctx->pc = 0x4326D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4326D4u;
            // 0x4326d8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432704u;
            goto label_432704;
        }
    }
    ctx->pc = 0x4326DCu;
label_4326dc:
    // 0x4326dc: 0xc10c57e  jal         func_4315F8
label_4326e0:
    if (ctx->pc == 0x4326E0u) {
        ctx->pc = 0x4326E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326DCu;
        // 0x4326e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326E4u;
        goto label_4326e4;
    }
    ctx->pc = 0x4326DCu;
    SET_GPR_U32(ctx, 31, 0x4326E4u);
    ctx->pc = 0x4326E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4326DCu;
    // 0x4326e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4326DCu, 0x4326E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4326E4u;
label_4326e4:
    // 0x4326e4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_4326e8:
    if (ctx->pc == 0x4326E8u) {
        ctx->pc = 0x4326E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326E4u;
        // 0x4326e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4326ECu;
        goto label_4326ec;
    }
    ctx->pc = 0x4326E4u;
    {
        const bool branch_taken_0x4326e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4326E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4326E4u;
        // 0x4326e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326e4) {
            ctx->pc = 0x4327B8u;
            goto label_4327b8;
        }
    }
    ctx->pc = 0x4326ECu;
label_4326ec:
    // 0x4326ec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x4326ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_4326f0:
    // 0x4326f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4326f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4326f4:
    // 0x4326f4: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x4326f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_4326f8:
    // 0x4326f8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4326f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_4326fc:
    // 0x4326fc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4326fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_432700:
    // 0x432700: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_432704:
    // 0x432704: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x432704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_432708:
    // 0x432708: 0x1000000a  b           . + 4 + (0xA << 2)
label_43270c:
    if (ctx->pc == 0x43270Cu) {
        ctx->pc = 0x43270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432708u;
        // 0x43270c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432710u;
        goto label_432710;
    }
    ctx->pc = 0x432708u;
    {
        const bool branch_taken_0x432708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432708u;
        // 0x43270c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432708) {
            ctx->pc = 0x432734u;
            goto label_432734;
        }
    }
    ctx->pc = 0x432710u;
label_432710:
    // 0x432710: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_432714:
    if (ctx->pc == 0x432714u) {
        ctx->pc = 0x432714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432710u;
        // 0x432714: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432718u;
        goto label_432718;
    }
    ctx->pc = 0x432710u;
    {
        const bool branch_taken_0x432710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432710) {
            ctx->pc = 0x432714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432710u;
            // 0x432714: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432738u;
            goto label_432738;
        }
    }
    ctx->pc = 0x432718u;
label_432718:
    // 0x432718: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x432718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_43271c:
    // 0x43271c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_432720:
    if (ctx->pc == 0x432720u) {
        ctx->pc = 0x432720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43271Cu;
        // 0x432720: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432724u;
        goto label_432724;
    }
    ctx->pc = 0x43271Cu;
    {
        const bool branch_taken_0x43271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43271Cu;
        // 0x432720: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43271c) {
            ctx->pc = 0x432734u;
            goto label_432734;
        }
    }
    ctx->pc = 0x432724u;
label_432724:
    // 0x432724: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x432724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_432728:
    // 0x432728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x432728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43272c:
    // 0x43272c: 0x10000022  b           . + 4 + (0x22 << 2)
label_432730:
    if (ctx->pc == 0x432730u) {
        ctx->pc = 0x432730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43272Cu;
        // 0x432730: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432734u;
        goto label_432734;
    }
    ctx->pc = 0x43272Cu;
    {
        const bool branch_taken_0x43272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43272Cu;
        // 0x432730: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43272c) {
            ctx->pc = 0x4327B8u;
            goto label_4327b8;
        }
    }
    ctx->pc = 0x432734u;
label_432734:
    // 0x432734: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x432734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_432738:
    // 0x432738: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_43273c:
    if (ctx->pc == 0x43273Cu) {
        ctx->pc = 0x43273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432738u;
        // 0x43273c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432740u;
        goto label_432740;
    }
    ctx->pc = 0x432738u;
    {
        const bool branch_taken_0x432738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432738) {
            ctx->pc = 0x43273Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432738u;
            // 0x43273c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43274Cu;
            goto label_43274c;
        }
    }
    ctx->pc = 0x432740u;
label_432740:
    // 0x432740: 0xc10c944  jal         func_432510
label_432744:
    if (ctx->pc == 0x432744u) {
        ctx->pc = 0x432744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432740u;
        // 0x432744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432748u;
        goto label_432748;
    }
    ctx->pc = 0x432740u;
    SET_GPR_U32(ctx, 31, 0x432748u);
    ctx->pc = 0x432744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432740u;
    // 0x432744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432510u, 0x432740u, 0x432748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432748u;
label_432748:
    // 0x432748: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_43274c:
    // 0x43274c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x43274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_432750:
    // 0x432750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_432754:
    if (ctx->pc == 0x432754u) {
        ctx->pc = 0x432754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432750u;
        // 0x432754: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432758u;
        goto label_432758;
    }
    ctx->pc = 0x432750u;
    {
        const bool branch_taken_0x432750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432750u;
        // 0x432754: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432750) {
            ctx->pc = 0x432764u;
            goto label_432764;
        }
    }
    ctx->pc = 0x432758u;
label_432758:
    // 0x432758: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_43275c:
    // 0x43275c: 0xc10c91e  jal         func_432478
label_432760:
    if (ctx->pc == 0x432760u) {
        ctx->pc = 0x432760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43275Cu;
        // 0x432760: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432764u;
        goto label_432764;
    }
    ctx->pc = 0x43275Cu;
    SET_GPR_U32(ctx, 31, 0x432764u);
    ctx->pc = 0x432760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43275Cu;
    // 0x432760: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432478u, 0x43275Cu, 0x432764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432764u;
label_432764:
    // 0x432764: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x432764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_432768:
    // 0x432768: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x432768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_43276c:
    // 0x43276c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x43276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_432770:
    // 0x432770: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x432770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_432774:
    // 0x432774: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x432774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_432778:
    // 0x432778: 0x40f809  jalr        $v0
label_43277c:
    if (ctx->pc == 0x43277Cu) {
        ctx->pc = 0x43277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432778u;
        // 0x43277c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432780u;
        goto label_432780;
    }
    ctx->pc = 0x432778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x432780u);
        ctx->pc = 0x43277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432778u;
        // 0x43277c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432778u, 0x432780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x432780u;
label_432780:
    // 0x432780: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x432780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432784:
    // 0x432784: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432784u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_432788:
    // 0x432788: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x432788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_43278c:
    // 0x43278c: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x43278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_432790:
    // 0x432790: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_432794:
    if (ctx->pc == 0x432794u) {
        ctx->pc = 0x432794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432790u;
        // 0x432794: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432798u;
        goto label_432798;
    }
    ctx->pc = 0x432790u;
    {
        const bool branch_taken_0x432790 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x432794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432790u;
        // 0x432794: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432790) {
            ctx->pc = 0x4327B4u;
            goto label_4327b4;
        }
    }
    ctx->pc = 0x432798u;
label_432798:
    // 0x432798: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_43279c:
    if (ctx->pc == 0x43279Cu) {
        ctx->pc = 0x43279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432798u;
        // 0x43279c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4327A0u;
        goto label_4327a0;
    }
    ctx->pc = 0x432798u;
    {
        const bool branch_taken_0x432798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x432798) {
            ctx->pc = 0x43279Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432798u;
            // 0x43279c: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4327A8u;
            goto label_4327a8;
        }
    }
    ctx->pc = 0x4327A0u;
label_4327a0:
    // 0x4327a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4327a4:
    if (ctx->pc == 0x4327A4u) {
        ctx->pc = 0x4327A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327A0u;
        // 0x4327a4: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4327A8u;
        goto label_4327a8;
    }
    ctx->pc = 0x4327A0u;
    {
        const bool branch_taken_0x4327a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4327A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327A0u;
        // 0x4327a4: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327a0) {
            ctx->pc = 0x4327ACu;
            goto label_4327ac;
        }
    }
    ctx->pc = 0x4327A8u;
label_4327a8:
    // 0x4327a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4327a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4327ac:
    // 0x4327ac: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_4327b0:
    if (ctx->pc == 0x4327B0u) {
        ctx->pc = 0x4327B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327ACu;
        // 0x4327b0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4327B4u;
        goto label_4327b4;
    }
    ctx->pc = 0x4327ACu;
    {
        const bool branch_taken_0x4327ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4327B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327ACu;
        // 0x4327b0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327ac) {
            ctx->pc = 0x4326CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4326cc;
        }
    }
    ctx->pc = 0x4327B4u;
label_4327b4:
    // 0x4327b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4327b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4327b8:
    // 0x4327b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4327b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4327bc:
    // 0x4327bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4327bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4327c0:
    // 0x4327c0: 0x3e00008  jr          $ra
label_4327c4:
    if (ctx->pc == 0x4327C4u) {
        ctx->pc = 0x4327C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327C0u;
        // 0x4327c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4327C8u;
        goto label_fallthrough_0x4327c0;
    }
    ctx->pc = 0x4327C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4327C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327C0u;
        // 0x4327c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4327C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4327c0:
    ctx->pc = 0x4327C8u;
}
