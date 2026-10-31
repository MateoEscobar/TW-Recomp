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

// Function: sub_00155648
// Address: 0x155648 - 0x1557f8
void sub_00155648_0x155648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155648_0x155648");
#endif

    switch (ctx->pc) {
        case 0x155648u: goto label_155648;
        case 0x15564cu: goto label_15564c;
        case 0x155650u: goto label_155650;
        case 0x155654u: goto label_155654;
        case 0x155658u: goto label_155658;
        case 0x15565cu: goto label_15565c;
        case 0x155660u: goto label_155660;
        case 0x155664u: goto label_155664;
        case 0x155668u: goto label_155668;
        case 0x15566cu: goto label_15566c;
        case 0x155670u: goto label_155670;
        case 0x155674u: goto label_155674;
        case 0x155678u: goto label_155678;
        case 0x15567cu: goto label_15567c;
        case 0x155680u: goto label_155680;
        case 0x155684u: goto label_155684;
        case 0x155688u: goto label_155688;
        case 0x15568cu: goto label_15568c;
        case 0x155690u: goto label_155690;
        case 0x155694u: goto label_155694;
        case 0x155698u: goto label_155698;
        case 0x15569cu: goto label_15569c;
        case 0x1556a0u: goto label_1556a0;
        case 0x1556a4u: goto label_1556a4;
        case 0x1556a8u: goto label_1556a8;
        case 0x1556acu: goto label_1556ac;
        case 0x1556b0u: goto label_1556b0;
        case 0x1556b4u: goto label_1556b4;
        case 0x1556b8u: goto label_1556b8;
        case 0x1556bcu: goto label_1556bc;
        case 0x1556c0u: goto label_1556c0;
        case 0x1556c4u: goto label_1556c4;
        case 0x1556c8u: goto label_1556c8;
        case 0x1556ccu: goto label_1556cc;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556d4u: goto label_1556d4;
        case 0x1556d8u: goto label_1556d8;
        case 0x1556dcu: goto label_1556dc;
        case 0x1556e0u: goto label_1556e0;
        case 0x1556e4u: goto label_1556e4;
        case 0x1556e8u: goto label_1556e8;
        case 0x1556ecu: goto label_1556ec;
        case 0x1556f0u: goto label_1556f0;
        case 0x1556f4u: goto label_1556f4;
        case 0x1556f8u: goto label_1556f8;
        case 0x1556fcu: goto label_1556fc;
        case 0x155700u: goto label_155700;
        case 0x155704u: goto label_155704;
        case 0x155708u: goto label_155708;
        case 0x15570cu: goto label_15570c;
        case 0x155710u: goto label_155710;
        case 0x155714u: goto label_155714;
        case 0x155718u: goto label_155718;
        case 0x15571cu: goto label_15571c;
        case 0x155720u: goto label_155720;
        case 0x155724u: goto label_155724;
        case 0x155728u: goto label_155728;
        case 0x15572cu: goto label_15572c;
        case 0x155730u: goto label_155730;
        case 0x155734u: goto label_155734;
        case 0x155738u: goto label_155738;
        case 0x15573cu: goto label_15573c;
        case 0x155740u: goto label_155740;
        case 0x155744u: goto label_155744;
        case 0x155748u: goto label_155748;
        case 0x15574cu: goto label_15574c;
        case 0x155750u: goto label_155750;
        case 0x155754u: goto label_155754;
        case 0x155758u: goto label_155758;
        case 0x15575cu: goto label_15575c;
        case 0x155760u: goto label_155760;
        case 0x155764u: goto label_155764;
        case 0x155768u: goto label_155768;
        case 0x15576cu: goto label_15576c;
        case 0x155770u: goto label_155770;
        case 0x155774u: goto label_155774;
        case 0x155778u: goto label_155778;
        case 0x15577cu: goto label_15577c;
        case 0x155780u: goto label_155780;
        case 0x155784u: goto label_155784;
        case 0x155788u: goto label_155788;
        case 0x15578cu: goto label_15578c;
        case 0x155790u: goto label_155790;
        case 0x155794u: goto label_155794;
        case 0x155798u: goto label_155798;
        case 0x15579cu: goto label_15579c;
        case 0x1557a0u: goto label_1557a0;
        case 0x1557a4u: goto label_1557a4;
        case 0x1557a8u: goto label_1557a8;
        case 0x1557acu: goto label_1557ac;
        case 0x1557b0u: goto label_1557b0;
        case 0x1557b4u: goto label_1557b4;
        case 0x1557b8u: goto label_1557b8;
        case 0x1557bcu: goto label_1557bc;
        case 0x1557c0u: goto label_1557c0;
        case 0x1557c4u: goto label_1557c4;
        case 0x1557c8u: goto label_1557c8;
        case 0x1557ccu: goto label_1557cc;
        case 0x1557d0u: goto label_1557d0;
        case 0x1557d4u: goto label_1557d4;
        case 0x1557d8u: goto label_1557d8;
        case 0x1557dcu: goto label_1557dc;
        case 0x1557e0u: goto label_1557e0;
        case 0x1557e4u: goto label_1557e4;
        case 0x1557e8u: goto label_1557e8;
        case 0x1557ecu: goto label_1557ec;
        case 0x1557f0u: goto label_1557f0;
        case 0x1557f4u: goto label_1557f4;
        default: break;
    }

    ctx->pc = 0x155648u;

label_155648:
    // 0x155648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15564c:
    // 0x15564c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_155650:
    // 0x155650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155654:
    // 0x155654: 0xc0579d2  jal         func_15E748
label_155658:
    if (ctx->pc == 0x155658u) {
        ctx->pc = 0x15565Cu;
        goto label_15565c;
    }
    ctx->pc = 0x155654u;
    SET_GPR_U32(ctx, 31, 0x15565Cu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155654u, 0x15565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15565Cu;
label_15565c:
    // 0x15565c: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x15565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_155660:
    // 0x155660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_155664:
    if (ctx->pc == 0x155664u) {
        ctx->pc = 0x155664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155660u;
        // 0x155664: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155668u;
        goto label_155668;
    }
    ctx->pc = 0x155660u;
    {
        const bool branch_taken_0x155660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155660u;
        // 0x155664: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155660) {
            ctx->pc = 0x155678u;
            goto label_155678;
        }
    }
    ctx->pc = 0x155668u;
label_155668:
    // 0x155668: 0xc05797a  jal         func_15E5E8
label_15566c:
    if (ctx->pc == 0x15566Cu) {
        ctx->pc = 0x15566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155668u;
        // 0x15566c: 0x248467d0  addiu       $a0, $a0, 0x67D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155670u;
        goto label_155670;
    }
    ctx->pc = 0x155668u;
    SET_GPR_U32(ctx, 31, 0x155670u);
    ctx->pc = 0x15566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155668u;
    // 0x15566c: 0x248467d0  addiu       $a0, $a0, 0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x155668u, 0x155670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155670u;
label_155670:
    // 0x155670: 0x1000005d  b           . + 4 + (0x5D << 2)
label_155674:
    if (ctx->pc == 0x155674u) {
        ctx->pc = 0x155674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155670u;
        // 0x155674: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155678u;
        goto label_155678;
    }
    ctx->pc = 0x155670u;
    {
        const bool branch_taken_0x155670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155670u;
        // 0x155674: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155670) {
            ctx->pc = 0x1557E8u;
            goto label_1557e8;
        }
    }
    ctx->pc = 0x155678u;
label_155678:
    // 0x155678: 0xc057994  jal         func_15E650
label_15567c:
    if (ctx->pc == 0x15567Cu) {
        ctx->pc = 0x155680u;
        goto label_155680;
    }
    ctx->pc = 0x155678u;
    SET_GPR_U32(ctx, 31, 0x155680u);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x155678u, 0x155680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155680u;
label_155680:
    // 0x155680: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_155684:
    // 0x155684: 0x8c63ee94  lw          $v1, -0x116C($v1)
    ctx->pc = 0x155684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962836)));
label_155688:
    // 0x155688: 0x8c6207a4  lw          $v0, 0x7A4($v1)
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1956)));
label_15568c:
    // 0x15568c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_155690:
    if (ctx->pc == 0x155690u) {
        ctx->pc = 0x155690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15568Cu;
        // 0x155690: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155694u;
        goto label_155694;
    }
    ctx->pc = 0x15568Cu;
    {
        const bool branch_taken_0x15568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15568Cu;
        // 0x155690: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15568c) {
            ctx->pc = 0x1556B4u;
            goto label_1556b4;
        }
    }
    ctx->pc = 0x155694u;
label_155694:
    // 0x155694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155698:
    // 0x155698: 0xc1073bc  jal         func_41CEF0
label_15569c:
    if (ctx->pc == 0x15569Cu) {
        ctx->pc = 0x15569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155698u;
        // 0x15569c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556A0u;
        goto label_1556a0;
    }
    ctx->pc = 0x155698u;
    SET_GPR_U32(ctx, 31, 0x1556A0u);
    ctx->pc = 0x15569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155698u;
    // 0x15569c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x155698u, 0x1556A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556A0u;
label_1556a0:
    // 0x1556a0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1556a4:
    // 0x1556a4: 0xc05835e  jal         func_160D78
label_1556a8:
    if (ctx->pc == 0x1556A8u) {
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556A4u;
        // 0x1556a8: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556ACu;
        goto label_1556ac;
    }
    ctx->pc = 0x1556A4u;
    SET_GPR_U32(ctx, 31, 0x1556ACu);
    ctx->pc = 0x1556A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556A4u;
    // 0x1556a8: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x1556A4u, 0x1556ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556ACu;
label_1556ac:
    // 0x1556ac: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1556b0:
    if (ctx->pc == 0x1556B0u) {
        ctx->pc = 0x1556B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556ACu;
        // 0x1556b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556B4u;
        goto label_1556b4;
    }
    ctx->pc = 0x1556ACu;
    {
        const bool branch_taken_0x1556ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556ACu;
        // 0x1556b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556ac) {
            ctx->pc = 0x1557E8u;
            goto label_1557e8;
        }
    }
    ctx->pc = 0x1556B4u;
label_1556b4:
    // 0x1556b4: 0x8c6207ac  lw          $v0, 0x7AC($v1)
    ctx->pc = 0x1556b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1964)));
label_1556b8:
    // 0x1556b8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1556bc:
    if (ctx->pc == 0x1556BCu) {
        ctx->pc = 0x1556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B8u;
        // 0x1556bc: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556C0u;
        goto label_1556c0;
    }
    ctx->pc = 0x1556B8u;
    {
        const bool branch_taken_0x1556b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B8u;
        // 0x1556bc: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556b8) {
            ctx->pc = 0x155758u;
            goto label_155758;
        }
    }
    ctx->pc = 0x1556C0u;
label_1556c0:
    // 0x1556c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1556c4:
    // 0x1556c4: 0xc07f86a  jal         func_1FE1A8
label_1556c8:
    if (ctx->pc == 0x1556C8u) {
        ctx->pc = 0x1556C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556C4u;
        // 0x1556c8: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556CCu;
        goto label_1556cc;
    }
    ctx->pc = 0x1556C4u;
    SET_GPR_U32(ctx, 31, 0x1556CCu);
    ctx->pc = 0x1556C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556C4u;
    // 0x1556c8: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1556C4u, 0x1556CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556CCu;
label_1556cc:
    // 0x1556cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1556d0:
    if (ctx->pc == 0x1556D0u) {
        ctx->pc = 0x1556D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556CCu;
        // 0x1556d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556D4u;
        goto label_1556d4;
    }
    ctx->pc = 0x1556CCu;
    {
        const bool branch_taken_0x1556cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556cc) {
            ctx->pc = 0x1556D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1556CCu;
            // 0x1556d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1556F4u;
            goto label_1556f4;
        }
    }
    ctx->pc = 0x1556D4u;
label_1556d4:
    // 0x1556d4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1556d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1556d8:
    // 0x1556d8: 0xc1073bc  jal         func_41CEF0
label_1556dc:
    if (ctx->pc == 0x1556DCu) {
        ctx->pc = 0x1556DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556D8u;
        // 0x1556dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556E0u;
        goto label_1556e0;
    }
    ctx->pc = 0x1556D8u;
    SET_GPR_U32(ctx, 31, 0x1556E0u);
    ctx->pc = 0x1556DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556D8u;
    // 0x1556dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x1556D8u, 0x1556E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556E0u;
label_1556e0:
    // 0x1556e0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1556e4:
    // 0x1556e4: 0xc05835e  jal         func_160D78
label_1556e8:
    if (ctx->pc == 0x1556E8u) {
        ctx->pc = 0x1556E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556E4u;
        // 0x1556e8: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556ECu;
        goto label_1556ec;
    }
    ctx->pc = 0x1556E4u;
    SET_GPR_U32(ctx, 31, 0x1556ECu);
    ctx->pc = 0x1556E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556E4u;
    // 0x1556e8: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x1556E4u, 0x1556ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556ECu;
label_1556ec:
    // 0x1556ec: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1556f0:
    if (ctx->pc == 0x1556F0u) {
        ctx->pc = 0x1556F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556ECu;
        // 0x1556f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556F4u;
        goto label_1556f4;
    }
    ctx->pc = 0x1556ECu;
    {
        const bool branch_taken_0x1556ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556ECu;
        // 0x1556f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556ec) {
            ctx->pc = 0x1557E8u;
            goto label_1557e8;
        }
    }
    ctx->pc = 0x1556F4u;
label_1556f4:
    // 0x1556f4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1556f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1556f8:
    // 0x1556f8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1556fc:
    // 0x1556fc: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
label_155700:
    // 0x155700: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155704:
    // 0x155704: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x155704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155708:
    // 0x155708: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15570c:
    // 0x15570c: 0x40f809  jalr        $v0
label_155710:
    if (ctx->pc == 0x155710u) {
        ctx->pc = 0x155710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15570Cu;
        // 0x155710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155714u;
        goto label_155714;
    }
    ctx->pc = 0x15570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155714u);
        ctx->pc = 0x155710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15570Cu;
        // 0x155710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15570Cu, 0x155714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155714u;
label_155714:
    // 0x155714: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x155714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155718:
    // 0x155718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15571c:
    // 0x15571c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155720:
    // 0x155720: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_155724:
    // 0x155724: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_155728:
    // 0x155728: 0x60f809  jalr        $v1
label_15572c:
    if (ctx->pc == 0x15572Cu) {
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155728u;
        // 0x15572c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155730u;
        goto label_155730;
    }
    ctx->pc = 0x155728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155730u);
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155728u;
        // 0x15572c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155728u, 0x155730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155730u;
label_155730:
    // 0x155730: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155734:
    // 0x155734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155738:
    // 0x155738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15573c:
    // 0x15573c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_155740:
    // 0x155740: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_155744:
    // 0x155744: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_155748:
    // 0x155748: 0x60f809  jalr        $v1
label_15574c:
    if (ctx->pc == 0x15574Cu) {
        ctx->pc = 0x15574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155748u;
        // 0x15574c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155750u;
        goto label_155750;
    }
    ctx->pc = 0x155748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155750u);
        ctx->pc = 0x15574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155748u;
        // 0x15574c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155748u, 0x155750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0x10000025  b           . + 4 + (0x25 << 2)
label_155754:
    if (ctx->pc == 0x155754u) {
        ctx->pc = 0x155754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155750u;
        // 0x155754: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155758u;
        goto label_155758;
    }
    ctx->pc = 0x155750u;
    {
        const bool branch_taken_0x155750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155750u;
        // 0x155754: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155750) {
            ctx->pc = 0x1557E8u;
            goto label_1557e8;
        }
    }
    ctx->pc = 0x155758u;
label_155758:
    // 0x155758: 0x8c6207a8  lw          $v0, 0x7A8($v1)
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1960)));
label_15575c:
    // 0x15575c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_155760:
    if (ctx->pc == 0x155760u) {
        ctx->pc = 0x155760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15575Cu;
        // 0x155760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155764u;
        goto label_155764;
    }
    ctx->pc = 0x15575Cu;
    {
        const bool branch_taken_0x15575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15575Cu;
        // 0x155760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15575c) {
            ctx->pc = 0x1557E4u;
            goto label_1557e4;
        }
    }
    ctx->pc = 0x155764u;
label_155764:
    // 0x155764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_155768:
    // 0x155768: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15576c:
    // 0x15576c: 0xc07f86a  jal         func_1FE1A8
label_155770:
    if (ctx->pc == 0x155770u) {
        ctx->pc = 0x155770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15576Cu;
        // 0x155770: 0xac64014c  sw          $a0, 0x14C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155774u;
        goto label_155774;
    }
    ctx->pc = 0x15576Cu;
    SET_GPR_U32(ctx, 31, 0x155774u);
    ctx->pc = 0x155770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15576Cu;
    // 0x155770: 0xac64014c  sw          $a0, 0x14C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x15576Cu, 0x155774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155774u;
label_155774:
    // 0x155774: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_155778:
    if (ctx->pc == 0x155778u) {
        ctx->pc = 0x155778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155774u;
        // 0x155778: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15577Cu;
        goto label_15577c;
    }
    ctx->pc = 0x155774u;
    {
        const bool branch_taken_0x155774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155774u;
        // 0x155778: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155774) {
            ctx->pc = 0x1557A4u;
            goto label_1557a4;
        }
    }
    ctx->pc = 0x15577Cu;
label_15577c:
    // 0x15577c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15577cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_155780:
    // 0x155780: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x155780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155784:
    // 0x155784: 0x24a5e7a8  addiu       $a1, $a1, -0x1858
    ctx->pc = 0x155784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961064));
label_155788:
    // 0x155788: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x155788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15578c:
    // 0x15578c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15578cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155790:
    // 0x155790: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_155794:
    // 0x155794: 0x40f809  jalr        $v0
label_155798:
    if (ctx->pc == 0x155798u) {
        ctx->pc = 0x155798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155794u;
        // 0x155798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15579Cu;
        goto label_15579c;
    }
    ctx->pc = 0x155794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15579Cu);
        ctx->pc = 0x155798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155794u;
        // 0x155798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155794u, 0x15579Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15579Cu;
label_15579c:
    // 0x15579c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1557a0:
    if (ctx->pc == 0x1557A0u) {
        ctx->pc = 0x1557A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15579Cu;
        // 0x1557a0: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557A4u;
        goto label_1557a4;
    }
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15579Cu;
        // 0x1557a0: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x1557A4u;
label_1557a4:
    // 0x1557a4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1557a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1557a8:
    // 0x1557a8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1557a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1557ac:
    // 0x1557ac: 0x24a5e7c0  addiu       $a1, $a1, -0x1840
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961088));
label_1557b0:
    // 0x1557b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1557b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1557b4:
    // 0x1557b4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1557b8:
    // 0x1557b8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1557b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1557bc:
    // 0x1557bc: 0x40f809  jalr        $v0
label_1557c0:
    if (ctx->pc == 0x1557C0u) {
        ctx->pc = 0x1557C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557BCu;
        // 0x1557c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557C4u;
        goto label_1557c4;
    }
    ctx->pc = 0x1557BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1557C4u);
        ctx->pc = 0x1557C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557BCu;
        // 0x1557c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557BCu, 0x1557C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1557C4u;
label_1557c4:
    // 0x1557c4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1557c8:
    // 0x1557c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1557c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1557cc:
    // 0x1557cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1557ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1557d0:
    // 0x1557d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1557d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1557d4:
    // 0x1557d4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1557d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1557d8:
    // 0x1557d8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1557dc:
    // 0x1557dc: 0x60f809  jalr        $v1
label_1557e0:
    if (ctx->pc == 0x1557E0u) {
        ctx->pc = 0x1557E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557DCu;
        // 0x1557e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557E4u;
        goto label_1557e4;
    }
    ctx->pc = 0x1557DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1557E4u);
        ctx->pc = 0x1557E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557DCu;
        // 0x1557e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557DCu, 0x1557E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1557E4u;
label_1557e4:
    // 0x1557e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1557e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1557e8:
    // 0x1557e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1557e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1557ec:
    // 0x1557ec: 0x3e00008  jr          $ra
label_1557f0:
    if (ctx->pc == 0x1557F0u) {
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557ECu;
        // 0x1557f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557F4u;
        goto label_1557f4;
    }
    ctx->pc = 0x1557ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557ECu;
        // 0x1557f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1557F4u;
label_1557f4:
    // 0x1557f4: 0x0  nop
    ctx->pc = 0x1557f4u;
    // NOP
    ctx->pc = 0x1557f8u;
}
