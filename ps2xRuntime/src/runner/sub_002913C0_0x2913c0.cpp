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

// Function: sub_002913C0
// Address: 0x2913c0 - 0x291668
void sub_002913C0_0x2913c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002913C0_0x2913c0");
#endif

    switch (ctx->pc) {
        case 0x2913c0u: goto label_2913c0;
        case 0x2913c4u: goto label_2913c4;
        case 0x2913c8u: goto label_2913c8;
        case 0x2913ccu: goto label_2913cc;
        case 0x2913d0u: goto label_2913d0;
        case 0x2913d4u: goto label_2913d4;
        case 0x2913d8u: goto label_2913d8;
        case 0x2913dcu: goto label_2913dc;
        case 0x2913e0u: goto label_2913e0;
        case 0x2913e4u: goto label_2913e4;
        case 0x2913e8u: goto label_2913e8;
        case 0x2913ecu: goto label_2913ec;
        case 0x2913f0u: goto label_2913f0;
        case 0x2913f4u: goto label_2913f4;
        case 0x2913f8u: goto label_2913f8;
        case 0x2913fcu: goto label_2913fc;
        case 0x291400u: goto label_291400;
        case 0x291404u: goto label_291404;
        case 0x291408u: goto label_291408;
        case 0x29140cu: goto label_29140c;
        case 0x291410u: goto label_291410;
        case 0x291414u: goto label_291414;
        case 0x291418u: goto label_291418;
        case 0x29141cu: goto label_29141c;
        case 0x291420u: goto label_291420;
        case 0x291424u: goto label_291424;
        case 0x291428u: goto label_291428;
        case 0x29142cu: goto label_29142c;
        case 0x291430u: goto label_291430;
        case 0x291434u: goto label_291434;
        case 0x291438u: goto label_291438;
        case 0x29143cu: goto label_29143c;
        case 0x291440u: goto label_291440;
        case 0x291444u: goto label_291444;
        case 0x291448u: goto label_291448;
        case 0x29144cu: goto label_29144c;
        case 0x291450u: goto label_291450;
        case 0x291454u: goto label_291454;
        case 0x291458u: goto label_291458;
        case 0x29145cu: goto label_29145c;
        case 0x291460u: goto label_291460;
        case 0x291464u: goto label_291464;
        case 0x291468u: goto label_291468;
        case 0x29146cu: goto label_29146c;
        case 0x291470u: goto label_291470;
        case 0x291474u: goto label_291474;
        case 0x291478u: goto label_291478;
        case 0x29147cu: goto label_29147c;
        case 0x291480u: goto label_291480;
        case 0x291484u: goto label_291484;
        case 0x291488u: goto label_291488;
        case 0x29148cu: goto label_29148c;
        case 0x291490u: goto label_291490;
        case 0x291494u: goto label_291494;
        case 0x291498u: goto label_291498;
        case 0x29149cu: goto label_29149c;
        case 0x2914a0u: goto label_2914a0;
        case 0x2914a4u: goto label_2914a4;
        case 0x2914a8u: goto label_2914a8;
        case 0x2914acu: goto label_2914ac;
        case 0x2914b0u: goto label_2914b0;
        case 0x2914b4u: goto label_2914b4;
        case 0x2914b8u: goto label_2914b8;
        case 0x2914bcu: goto label_2914bc;
        case 0x2914c0u: goto label_2914c0;
        case 0x2914c4u: goto label_2914c4;
        case 0x2914c8u: goto label_2914c8;
        case 0x2914ccu: goto label_2914cc;
        case 0x2914d0u: goto label_2914d0;
        case 0x2914d4u: goto label_2914d4;
        case 0x2914d8u: goto label_2914d8;
        case 0x2914dcu: goto label_2914dc;
        case 0x2914e0u: goto label_2914e0;
        case 0x2914e4u: goto label_2914e4;
        case 0x2914e8u: goto label_2914e8;
        case 0x2914ecu: goto label_2914ec;
        case 0x2914f0u: goto label_2914f0;
        case 0x2914f4u: goto label_2914f4;
        case 0x2914f8u: goto label_2914f8;
        case 0x2914fcu: goto label_2914fc;
        case 0x291500u: goto label_291500;
        case 0x291504u: goto label_291504;
        case 0x291508u: goto label_291508;
        case 0x29150cu: goto label_29150c;
        case 0x291510u: goto label_291510;
        case 0x291514u: goto label_291514;
        case 0x291518u: goto label_291518;
        case 0x29151cu: goto label_29151c;
        case 0x291520u: goto label_291520;
        case 0x291524u: goto label_291524;
        case 0x291528u: goto label_291528;
        case 0x29152cu: goto label_29152c;
        case 0x291530u: goto label_291530;
        case 0x291534u: goto label_291534;
        case 0x291538u: goto label_291538;
        case 0x29153cu: goto label_29153c;
        case 0x291540u: goto label_291540;
        case 0x291544u: goto label_291544;
        case 0x291548u: goto label_291548;
        case 0x29154cu: goto label_29154c;
        case 0x291550u: goto label_291550;
        case 0x291554u: goto label_291554;
        case 0x291558u: goto label_291558;
        case 0x29155cu: goto label_29155c;
        case 0x291560u: goto label_291560;
        case 0x291564u: goto label_291564;
        case 0x291568u: goto label_291568;
        case 0x29156cu: goto label_29156c;
        case 0x291570u: goto label_291570;
        case 0x291574u: goto label_291574;
        case 0x291578u: goto label_291578;
        case 0x29157cu: goto label_29157c;
        case 0x291580u: goto label_291580;
        case 0x291584u: goto label_291584;
        case 0x291588u: goto label_291588;
        case 0x29158cu: goto label_29158c;
        case 0x291590u: goto label_291590;
        case 0x291594u: goto label_291594;
        case 0x291598u: goto label_291598;
        case 0x29159cu: goto label_29159c;
        case 0x2915a0u: goto label_2915a0;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915a8u: goto label_2915a8;
        case 0x2915acu: goto label_2915ac;
        case 0x2915b0u: goto label_2915b0;
        case 0x2915b4u: goto label_2915b4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915bcu: goto label_2915bc;
        case 0x2915c0u: goto label_2915c0;
        case 0x2915c4u: goto label_2915c4;
        case 0x2915c8u: goto label_2915c8;
        case 0x2915ccu: goto label_2915cc;
        case 0x2915d0u: goto label_2915d0;
        case 0x2915d4u: goto label_2915d4;
        case 0x2915d8u: goto label_2915d8;
        case 0x2915dcu: goto label_2915dc;
        case 0x2915e0u: goto label_2915e0;
        case 0x2915e4u: goto label_2915e4;
        case 0x2915e8u: goto label_2915e8;
        case 0x2915ecu: goto label_2915ec;
        case 0x2915f0u: goto label_2915f0;
        case 0x2915f4u: goto label_2915f4;
        case 0x2915f8u: goto label_2915f8;
        case 0x2915fcu: goto label_2915fc;
        case 0x291600u: goto label_291600;
        case 0x291604u: goto label_291604;
        case 0x291608u: goto label_291608;
        case 0x29160cu: goto label_29160c;
        case 0x291610u: goto label_291610;
        case 0x291614u: goto label_291614;
        case 0x291618u: goto label_291618;
        case 0x29161cu: goto label_29161c;
        case 0x291620u: goto label_291620;
        case 0x291624u: goto label_291624;
        case 0x291628u: goto label_291628;
        case 0x29162cu: goto label_29162c;
        case 0x291630u: goto label_291630;
        case 0x291634u: goto label_291634;
        case 0x291638u: goto label_291638;
        case 0x29163cu: goto label_29163c;
        case 0x291640u: goto label_291640;
        case 0x291644u: goto label_291644;
        case 0x291648u: goto label_291648;
        case 0x29164cu: goto label_29164c;
        case 0x291650u: goto label_291650;
        case 0x291654u: goto label_291654;
        case 0x291658u: goto label_291658;
        case 0x29165cu: goto label_29165c;
        case 0x291660u: goto label_291660;
        case 0x291664u: goto label_291664;
        default: break;
    }

    ctx->pc = 0x2913c0u;

label_2913c0:
    // 0x2913c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2913c4:
    // 0x2913c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2913c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2913c8:
    // 0x2913c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2913c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2913cc:
    // 0x2913cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2913ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2913d0:
    // 0x2913d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2913d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2913d4:
    // 0x2913d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2913d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2913d8:
    // 0x2913d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2913d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2913dc:
    // 0x2913dc: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x2913dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_2913e0:
    // 0x2913e0: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_2913e4:
    if (ctx->pc == 0x2913E4u) {
        ctx->pc = 0x2913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913E0u;
        // 0x2913e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913E8u;
        goto label_2913e8;
    }
    ctx->pc = 0x2913E0u;
    {
        const bool branch_taken_0x2913e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913E0u;
        // 0x2913e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913e0) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2913E8u;
label_2913e8:
    // 0x2913e8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x2913e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_2913ec:
    // 0x2913ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2913f0:
    if (ctx->pc == 0x2913F0u) {
        ctx->pc = 0x2913F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913ECu;
        // 0x2913f0: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913F4u;
        goto label_2913f4;
    }
    ctx->pc = 0x2913ECu;
    {
        const bool branch_taken_0x2913ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913ec) {
            ctx->pc = 0x2913F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913ECu;
            // 0x2913f0: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2913FCu;
            goto label_2913fc;
        }
    }
    ctx->pc = 0x2913F4u;
label_2913f4:
    // 0x2913f4: 0x10000094  b           . + 4 + (0x94 << 2)
label_2913f8:
    if (ctx->pc == 0x2913F8u) {
        ctx->pc = 0x2913F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913F4u;
        // 0x2913f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913FCu;
        goto label_2913fc;
    }
    ctx->pc = 0x2913F4u;
    {
        const bool branch_taken_0x2913f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913F4u;
        // 0x2913f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913f4) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2913FCu;
label_2913fc:
    // 0x2913fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_291400:
    if (ctx->pc == 0x291400u) {
        ctx->pc = 0x291400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913FCu;
        // 0x291400: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291404u;
        goto label_291404;
    }
    ctx->pc = 0x2913FCu;
    {
        const bool branch_taken_0x2913fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x291400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913FCu;
        // 0x291400: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913fc) {
            ctx->pc = 0x291414u;
            goto label_291414;
        }
    }
    ctx->pc = 0x291404u;
label_291404:
    // 0x291404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_291408:
    // 0x291408: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x291408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29140c:
    // 0x29140c: 0x10000002  b           . + 4 + (0x2 << 2)
label_291410:
    if (ctx->pc == 0x291410u) {
        ctx->pc = 0x291410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29140Cu;
        // 0x291410: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291414u;
        goto label_291414;
    }
    ctx->pc = 0x29140Cu;
    {
        const bool branch_taken_0x29140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29140Cu;
        // 0x291410: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29140c) {
            ctx->pc = 0x291418u;
            goto label_291418;
        }
    }
    ctx->pc = 0x291414u;
label_291414:
    // 0x291414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291418:
    // 0x291418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29141c:
    // 0x29141c: 0x10a0008a  beqz        $a1, . + 4 + (0x8A << 2)
label_291420:
    if (ctx->pc == 0x291420u) {
        ctx->pc = 0x291420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29141Cu;
        // 0x291420: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291424u;
        goto label_291424;
    }
    ctx->pc = 0x29141Cu;
    {
        const bool branch_taken_0x29141c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29141Cu;
        // 0x291420: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29141c) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x291424u;
label_291424:
    // 0x291424: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x291424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_291428:
    // 0x291428: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x291428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29142c:
    // 0x29142c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29142cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_291430:
    // 0x291430: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x291430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_291434:
    // 0x291434: 0x40f809  jalr        $v0
label_291438:
    if (ctx->pc == 0x291438u) {
        ctx->pc = 0x291438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291434u;
        // 0x291438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29143Cu;
        goto label_29143c;
    }
    ctx->pc = 0x291434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29143Cu);
        ctx->pc = 0x291438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291434u;
        // 0x291438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291434u, 0x29143Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29143Cu;
label_29143c:
    // 0x29143c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29143cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291440:
    // 0x291440: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x291440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_291444:
    // 0x291444: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_291448:
    if (ctx->pc == 0x291448u) {
        ctx->pc = 0x291448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291444u;
        // 0x291448: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29144Cu;
        goto label_29144c;
    }
    ctx->pc = 0x291444u;
    {
        const bool branch_taken_0x291444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291444u;
        // 0x291448: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291444) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x29144Cu;
label_29144c:
    // 0x29144c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_291450:
    if (ctx->pc == 0x291450u) {
        ctx->pc = 0x291450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29144Cu;
        // 0x291450: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291454u;
        goto label_291454;
    }
    ctx->pc = 0x29144Cu;
    {
        const bool branch_taken_0x29144c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29144Cu;
        // 0x291450: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29144c) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291454u;
label_291454:
    // 0x291454: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_291458:
    if (ctx->pc == 0x291458u) {
        ctx->pc = 0x291458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291454u;
        // 0x291458: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29145Cu;
        goto label_29145c;
    }
    ctx->pc = 0x291454u;
    {
        const bool branch_taken_0x291454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291454u;
        // 0x291458: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291454) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x29145Cu;
label_29145c:
    // 0x29145c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_291460:
    if (ctx->pc == 0x291460u) {
        ctx->pc = 0x291460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29145Cu;
        // 0x291460: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291464u;
        goto label_291464;
    }
    ctx->pc = 0x29145Cu;
    {
        const bool branch_taken_0x29145c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29145Cu;
        // 0x291460: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29145c) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291464u;
label_291464:
    // 0x291464: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_291468:
    if (ctx->pc == 0x291468u) {
        ctx->pc = 0x291468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291464u;
        // 0x291468: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29146Cu;
        goto label_29146c;
    }
    ctx->pc = 0x291464u;
    {
        const bool branch_taken_0x291464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291464u;
        // 0x291468: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291464) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x29146Cu;
label_29146c:
    // 0x29146c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_291470:
    if (ctx->pc == 0x291470u) {
        ctx->pc = 0x291470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29146Cu;
        // 0x291470: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291474u;
        goto label_291474;
    }
    ctx->pc = 0x29146Cu;
    {
        const bool branch_taken_0x29146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29146Cu;
        // 0x291470: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29146c) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291474u;
label_291474:
    // 0x291474: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_291478:
    if (ctx->pc == 0x291478u) {
        ctx->pc = 0x291478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291474u;
        // 0x291478: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29147Cu;
        goto label_29147c;
    }
    ctx->pc = 0x291474u;
    {
        const bool branch_taken_0x291474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291474u;
        // 0x291478: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291474) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x29147Cu;
label_29147c:
    // 0x29147c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_291480:
    if (ctx->pc == 0x291480u) {
        ctx->pc = 0x291480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29147Cu;
        // 0x291480: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291484u;
        goto label_291484;
    }
    ctx->pc = 0x29147Cu;
    {
        const bool branch_taken_0x29147c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29147Cu;
        // 0x291480: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29147c) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291484u;
label_291484:
    // 0x291484: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_291488:
    if (ctx->pc == 0x291488u) {
        ctx->pc = 0x291488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291484u;
        // 0x291488: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29148Cu;
        goto label_29148c;
    }
    ctx->pc = 0x291484u;
    {
        const bool branch_taken_0x291484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291484u;
        // 0x291488: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291484) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x29148Cu;
label_29148c:
    // 0x29148c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_291490:
    if (ctx->pc == 0x291490u) {
        ctx->pc = 0x291490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29148Cu;
        // 0x291490: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291494u;
        goto label_291494;
    }
    ctx->pc = 0x29148Cu;
    {
        const bool branch_taken_0x29148c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29148Cu;
        // 0x291490: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29148c) {
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291494u;
label_291494:
    // 0x291494: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_291498:
    if (ctx->pc == 0x291498u) {
        ctx->pc = 0x291498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291494u;
        // 0x291498: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29149Cu;
        goto label_29149c;
    }
    ctx->pc = 0x291494u;
    {
        const bool branch_taken_0x291494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291494u;
        // 0x291498: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291494) {
            ctx->pc = 0x2914A4u;
            goto label_2914a4;
        }
    }
    ctx->pc = 0x29149Cu;
label_29149c:
    // 0x29149c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29149cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2914a0:
    // 0x2914a0: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_2914a4:
    // 0x2914a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2914a8:
    if (ctx->pc == 0x2914A8u) {
        ctx->pc = 0x2914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914A4u;
        // 0x2914a8: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914ACu;
        goto label_2914ac;
    }
    ctx->pc = 0x2914A4u;
    {
        const bool branch_taken_0x2914a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914A4u;
        // 0x2914a8: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914a4) {
            ctx->pc = 0x2914B4u;
            goto label_2914b4;
        }
    }
    ctx->pc = 0x2914ACu;
label_2914ac:
    // 0x2914ac: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2914b0:
    if (ctx->pc == 0x2914B0u) {
        ctx->pc = 0x2914B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914ACu;
        // 0x2914b0: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914B4u;
        goto label_2914b4;
    }
    ctx->pc = 0x2914ACu;
    {
        const bool branch_taken_0x2914ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2914ac) {
            ctx->pc = 0x2914B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2914ACu;
            // 0x2914b0: 0x8e02020c  lw          $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914C0u;
            goto label_2914c0;
        }
    }
    ctx->pc = 0x2914B4u;
label_2914b4:
    // 0x2914b4: 0xc0a35f6  jal         func_28D7D8
label_2914b8:
    if (ctx->pc == 0x2914B8u) {
        ctx->pc = 0x2914B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914B4u;
        // 0x2914b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914BCu;
        goto label_2914bc;
    }
    ctx->pc = 0x2914B4u;
    SET_GPR_U32(ctx, 31, 0x2914BCu);
    ctx->pc = 0x2914B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914B4u;
    // 0x2914b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2914B4u, 0x2914BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914BCu;
label_2914bc:
    // 0x2914bc: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_2914c0:
    // 0x2914c0: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2914c4:
    // 0x2914c4: 0x10a00060  beqz        $a1, . + 4 + (0x60 << 2)
label_2914c8:
    if (ctx->pc == 0x2914C8u) {
        ctx->pc = 0x2914C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914C4u;
        // 0x2914c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914CCu;
        goto label_2914cc;
    }
    ctx->pc = 0x2914C4u;
    {
        const bool branch_taken_0x2914c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914C4u;
        // 0x2914c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914c4) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2914CCu;
label_2914cc:
    // 0x2914cc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2914d0:
    // 0x2914d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2914d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2914d4:
    // 0x2914d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2914d8:
    // 0x2914d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2914dc:
    // 0x2914dc: 0x40f809  jalr        $v0
label_2914e0:
    if (ctx->pc == 0x2914E0u) {
        ctx->pc = 0x2914E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914DCu;
        // 0x2914e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914E4u;
        goto label_2914e4;
    }
    ctx->pc = 0x2914DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2914E4u);
        ctx->pc = 0x2914E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914DCu;
        // 0x2914e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2914DCu, 0x2914E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2914E4u;
label_2914e4:
    // 0x2914e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2914e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2914e8:
    // 0x2914e8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2914ec:
    // 0x2914ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2914f0:
    if (ctx->pc == 0x2914F0u) {
        ctx->pc = 0x2914F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914ECu;
        // 0x2914f0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914F4u;
        goto label_2914f4;
    }
    ctx->pc = 0x2914ECu;
    {
        const bool branch_taken_0x2914ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2914F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914ECu;
        // 0x2914f0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914ec) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x2914F4u;
label_2914f4:
    // 0x2914f4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2914f8:
    if (ctx->pc == 0x2914F8u) {
        ctx->pc = 0x2914F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F4u;
        // 0x2914f8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914FCu;
        goto label_2914fc;
    }
    ctx->pc = 0x2914F4u;
    {
        const bool branch_taken_0x2914f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2914F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F4u;
        // 0x2914f8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f4) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x2914FCu;
label_2914fc:
    // 0x2914fc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_291500:
    if (ctx->pc == 0x291500u) {
        ctx->pc = 0x291500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914FCu;
        // 0x291500: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291504u;
        goto label_291504;
    }
    ctx->pc = 0x2914FCu;
    {
        const bool branch_taken_0x2914fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914FCu;
        // 0x291500: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914fc) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x291504u;
label_291504:
    // 0x291504: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_291508:
    if (ctx->pc == 0x291508u) {
        ctx->pc = 0x291508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291504u;
        // 0x291508: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29150Cu;
        goto label_29150c;
    }
    ctx->pc = 0x291504u;
    {
        const bool branch_taken_0x291504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291504u;
        // 0x291508: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291504) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x29150Cu;
label_29150c:
    // 0x29150c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_291510:
    if (ctx->pc == 0x291510u) {
        ctx->pc = 0x291510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29150Cu;
        // 0x291510: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291514u;
        goto label_291514;
    }
    ctx->pc = 0x29150Cu;
    {
        const bool branch_taken_0x29150c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29150Cu;
        // 0x291510: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29150c) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x291514u;
label_291514:
    // 0x291514: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_291518:
    if (ctx->pc == 0x291518u) {
        ctx->pc = 0x291518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291514u;
        // 0x291518: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29151Cu;
        goto label_29151c;
    }
    ctx->pc = 0x291514u;
    {
        const bool branch_taken_0x291514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291514u;
        // 0x291518: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291514) {
            ctx->pc = 0x2915DCu;
            goto label_2915dc;
        }
    }
    ctx->pc = 0x29151Cu;
label_29151c:
    // 0x29151c: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_291520:
    // 0x291520: 0xc059856  jal         func_166158
label_291524:
    if (ctx->pc == 0x291524u) {
        ctx->pc = 0x291524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291520u;
        // 0x291524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291528u;
        goto label_291528;
    }
    ctx->pc = 0x291520u;
    SET_GPR_U32(ctx, 31, 0x291528u);
    ctx->pc = 0x291524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291520u;
    // 0x291524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x291520u, 0x291528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291528u;
label_291528:
    // 0x291528: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x291528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_29152c:
    // 0x29152c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29152cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291530:
    // 0x291530: 0xc05959e  jal         func_165678
label_291534:
    if (ctx->pc == 0x291534u) {
        ctx->pc = 0x291534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291530u;
        // 0x291534: 0x909200d7  lbu         $s2, 0xD7($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 215)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291538u;
        goto label_291538;
    }
    ctx->pc = 0x291530u;
    SET_GPR_U32(ctx, 31, 0x291538u);
    ctx->pc = 0x291534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291530u;
    // 0x291534: 0x909200d7  lbu         $s2, 0xD7($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 215)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x291530u, 0x291538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291538u;
label_291538:
    // 0x291538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x291538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29153c:
    // 0x29153c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_291540:
    if (ctx->pc == 0x291540u) {
        ctx->pc = 0x291540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29153Cu;
        // 0x291540: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291544u;
        goto label_291544;
    }
    ctx->pc = 0x29153Cu;
    {
        const bool branch_taken_0x29153c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29153c) {
            ctx->pc = 0x291540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29153Cu;
            // 0x291540: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291560u;
            goto label_291560;
        }
    }
    ctx->pc = 0x291544u;
label_291544:
    // 0x291544: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x291544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_291548:
    // 0x291548: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_29154c:
    if (ctx->pc == 0x29154Cu) {
        ctx->pc = 0x29154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291548u;
        // 0x29154c: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291550u;
        goto label_291550;
    }
    ctx->pc = 0x291548u;
    {
        const bool branch_taken_0x291548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291548) {
            ctx->pc = 0x29154Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291548u;
            // 0x29154c: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291560u;
            goto label_291560;
        }
    }
    ctx->pc = 0x291550u;
label_291550:
    // 0x291550: 0x2e420064  sltiu       $v0, $s2, 0x64
    ctx->pc = 0x291550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_291554:
    // 0x291554: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_291558:
    if (ctx->pc == 0x291558u) {
        ctx->pc = 0x291558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291554u;
        // 0x291558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29155Cu;
        goto label_29155c;
    }
    ctx->pc = 0x291554u;
    {
        const bool branch_taken_0x291554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291554u;
        // 0x291558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291554) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x29155Cu;
label_29155c:
    // 0x29155c: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x29155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_291560:
    // 0x291560: 0xc059552  jal         func_165548
label_291564:
    if (ctx->pc == 0x291564u) {
        ctx->pc = 0x291564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291560u;
        // 0x291564: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291568u;
        goto label_291568;
    }
    ctx->pc = 0x291560u;
    SET_GPR_U32(ctx, 31, 0x291568u);
    ctx->pc = 0x291564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291560u;
    // 0x291564: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165548u, 0x291560u, 0x291568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291568u;
label_291568:
    // 0x291568: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_29156c:
    if (ctx->pc == 0x29156Cu) {
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291568u;
        // 0x29156c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291570u;
        goto label_291570;
    }
    ctx->pc = 0x291568u;
    {
        const bool branch_taken_0x291568 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291568u;
        // 0x29156c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291568) {
            ctx->pc = 0x291584u;
            goto label_291584;
        }
    }
    ctx->pc = 0x291570u;
label_291570:
    // 0x291570: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x291570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_291574:
    // 0x291574: 0x0  nop
    ctx->pc = 0x291574u;
    // NOP
label_291578:
    // 0x291578: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x291578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_29157c:
    // 0x29157c: 0x10000007  b           . + 4 + (0x7 << 2)
label_291580:
    if (ctx->pc == 0x291580u) {
        ctx->pc = 0x291584u;
        goto label_291584;
    }
    ctx->pc = 0x29157Cu;
    {
        const bool branch_taken_0x29157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29157c) {
            ctx->pc = 0x29159Cu;
            goto label_29159c;
        }
    }
    ctx->pc = 0x291584u;
label_291584:
    // 0x291584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x291584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_291588:
    // 0x291588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29158c:
    // 0x29158c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29158cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_291590:
    // 0x291590: 0x0  nop
    ctx->pc = 0x291590u;
    // NOP
label_291594:
    // 0x291594: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x291594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_291598:
    // 0x291598: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x291598u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_29159c:
    // 0x29159c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x29159cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2915a0:
    // 0x2915a0: 0x0  nop
    ctx->pc = 0x2915a0u;
    // NOP
label_2915a4:
    // 0x2915a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2915a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2915a8:
    // 0x2915a8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2915a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2915ac:
    // 0x2915ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2915acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2915b0:
    // 0x2915b0: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x2915b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2915b4:
    // 0x2915b4: 0x0  nop
    ctx->pc = 0x2915b4u;
    // NOP
label_2915b8:
    // 0x2915b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2915b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2915bc:
    // 0x2915bc: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x2915bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_2915c0:
    // 0x2915c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2915c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2915c4:
    // 0x2915c4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2915c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2915c8:
    // 0x2915c8: 0x0  nop
    ctx->pc = 0x2915c8u;
    // NOP
label_2915cc:
    // 0x2915cc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2915d0:
    if (ctx->pc == 0x2915D0u) {
        ctx->pc = 0x2915D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915CCu;
        // 0x2915d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915D4u;
        goto label_2915d4;
    }
    ctx->pc = 0x2915CCu;
    {
        const bool branch_taken_0x2915cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2915D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915CCu;
        // 0x2915d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915cc) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2915D4u;
label_2915d4:
    // 0x2915d4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2915d8:
    if (ctx->pc == 0x2915D8u) {
        ctx->pc = 0x2915D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915D4u;
        // 0x2915d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915DCu;
        goto label_2915dc;
    }
    ctx->pc = 0x2915D4u;
    {
        const bool branch_taken_0x2915d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915D4u;
        // 0x2915d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915d4) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2915DCu;
label_2915dc:
    // 0x2915dc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_2915e0:
    if (ctx->pc == 0x2915E0u) {
        ctx->pc = 0x2915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915DCu;
        // 0x2915e0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915E4u;
        goto label_2915e4;
    }
    ctx->pc = 0x2915DCu;
    {
        const bool branch_taken_0x2915dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915DCu;
        // 0x2915e0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915dc) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x2915E4u;
label_2915e4:
    // 0x2915e4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2915e8:
    // 0x2915e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2915ec:
    if (ctx->pc == 0x2915ECu) {
        ctx->pc = 0x2915ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915E8u;
        // 0x2915ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915F0u;
        goto label_2915f0;
    }
    ctx->pc = 0x2915E8u;
    {
        const bool branch_taken_0x2915e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2915ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915E8u;
        // 0x2915ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915e8) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2915F0u;
label_2915f0:
    // 0x2915f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2915f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2915f4:
    // 0x2915f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2915f8:
    if (ctx->pc == 0x2915F8u) {
        ctx->pc = 0x2915F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915F4u;
        // 0x2915f8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915FCu;
        goto label_2915fc;
    }
    ctx->pc = 0x2915F4u;
    {
        const bool branch_taken_0x2915f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915F4u;
        // 0x2915f8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915f4) {
            ctx->pc = 0x291600u;
            goto label_291600;
        }
    }
    ctx->pc = 0x2915FCu;
label_2915fc:
    // 0x2915fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2915fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291600:
    // 0x291600: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_291604:
    if (ctx->pc == 0x291604u) {
        ctx->pc = 0x291604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291600u;
        // 0x291604: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291608u;
        goto label_291608;
    }
    ctx->pc = 0x291600u;
    {
        const bool branch_taken_0x291600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291600u;
        // 0x291604: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291600) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x291608u;
label_291608:
    // 0x291608: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29160c:
    // 0x29160c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29160cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_291610:
    // 0x291610: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x291610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_291614:
    // 0x291614: 0x40f809  jalr        $v0
label_291618:
    if (ctx->pc == 0x291618u) {
        ctx->pc = 0x291618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291614u;
        // 0x291618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29161Cu;
        goto label_29161c;
    }
    ctx->pc = 0x291614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29161Cu);
        ctx->pc = 0x291618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291614u;
        // 0x291618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291614u, 0x29161Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29161Cu;
label_29161c:
    // 0x29161c: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x29161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_291620:
    // 0x291620: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_291624:
    if (ctx->pc == 0x291624u) {
        ctx->pc = 0x291624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291620u;
        // 0x291624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291628u;
        goto label_291628;
    }
    ctx->pc = 0x291620u;
    {
        const bool branch_taken_0x291620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x291624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291620u;
        // 0x291624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291620) {
            ctx->pc = 0x291648u;
            goto label_291648;
        }
    }
    ctx->pc = 0x291628u;
label_291628:
    // 0x291628: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x291628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29162c:
    // 0x29162c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29162cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_291630:
    // 0x291630: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_291634:
    // 0x291634: 0x40f809  jalr        $v0
label_291638:
    if (ctx->pc == 0x291638u) {
        ctx->pc = 0x291638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291634u;
        // 0x291638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29163Cu;
        goto label_29163c;
    }
    ctx->pc = 0x291634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29163Cu);
        ctx->pc = 0x291638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291634u;
        // 0x291638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291634u, 0x29163Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29163Cu;
label_29163c:
    // 0x29163c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x29163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_291640:
    // 0x291640: 0x1043ffe4  beq         $v0, $v1, . + 4 + (-0x1C << 2)
label_291644:
    if (ctx->pc == 0x291644u) {
        ctx->pc = 0x291644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291640u;
        // 0x291644: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291648u;
        goto label_291648;
    }
    ctx->pc = 0x291640u;
    {
        const bool branch_taken_0x291640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x291644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291640u;
        // 0x291644: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291640) {
            ctx->pc = 0x2915D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2915d4;
        }
    }
    ctx->pc = 0x291648u;
label_291648:
    // 0x291648: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x291648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29164c:
    // 0x29164c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29164cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291650:
    // 0x291650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291654:
    // 0x291654: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x291654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_291658:
    // 0x291658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29165c:
    // 0x29165c: 0x3e00008  jr          $ra
label_291660:
    if (ctx->pc == 0x291660u) {
        ctx->pc = 0x291660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29165Cu;
        // 0x291660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291664u;
        goto label_291664;
    }
    ctx->pc = 0x29165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29165Cu;
        // 0x291660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29165Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291664u;
label_291664:
    // 0x291664: 0x0  nop
    ctx->pc = 0x291664u;
    // NOP
    ctx->pc = 0x291668u;
}
