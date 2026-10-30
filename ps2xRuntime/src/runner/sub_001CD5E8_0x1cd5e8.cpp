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

// Function: sub_001CD5E8
// Address: 0x1cd5e8 - 0x1cd748
void sub_001CD5E8_0x1cd5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD5E8_0x1cd5e8");
#endif

    switch (ctx->pc) {
        case 0x1cd5e8u: goto label_1cd5e8;
        case 0x1cd5ecu: goto label_1cd5ec;
        case 0x1cd5f0u: goto label_1cd5f0;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd5f8u: goto label_1cd5f8;
        case 0x1cd5fcu: goto label_1cd5fc;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd604u: goto label_1cd604;
        case 0x1cd608u: goto label_1cd608;
        case 0x1cd60cu: goto label_1cd60c;
        case 0x1cd610u: goto label_1cd610;
        case 0x1cd614u: goto label_1cd614;
        case 0x1cd618u: goto label_1cd618;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd620u: goto label_1cd620;
        case 0x1cd624u: goto label_1cd624;
        case 0x1cd628u: goto label_1cd628;
        case 0x1cd62cu: goto label_1cd62c;
        case 0x1cd630u: goto label_1cd630;
        case 0x1cd634u: goto label_1cd634;
        case 0x1cd638u: goto label_1cd638;
        case 0x1cd63cu: goto label_1cd63c;
        case 0x1cd640u: goto label_1cd640;
        case 0x1cd644u: goto label_1cd644;
        case 0x1cd648u: goto label_1cd648;
        case 0x1cd64cu: goto label_1cd64c;
        case 0x1cd650u: goto label_1cd650;
        case 0x1cd654u: goto label_1cd654;
        case 0x1cd658u: goto label_1cd658;
        case 0x1cd65cu: goto label_1cd65c;
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd664u: goto label_1cd664;
        case 0x1cd668u: goto label_1cd668;
        case 0x1cd66cu: goto label_1cd66c;
        case 0x1cd670u: goto label_1cd670;
        case 0x1cd674u: goto label_1cd674;
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd680u: goto label_1cd680;
        case 0x1cd684u: goto label_1cd684;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6a0u: goto label_1cd6a0;
        case 0x1cd6a4u: goto label_1cd6a4;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6acu: goto label_1cd6ac;
        case 0x1cd6b0u: goto label_1cd6b0;
        case 0x1cd6b4u: goto label_1cd6b4;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6bcu: goto label_1cd6bc;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6c8u: goto label_1cd6c8;
        case 0x1cd6ccu: goto label_1cd6cc;
        case 0x1cd6d0u: goto label_1cd6d0;
        case 0x1cd6d4u: goto label_1cd6d4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6dcu: goto label_1cd6dc;
        case 0x1cd6e0u: goto label_1cd6e0;
        case 0x1cd6e4u: goto label_1cd6e4;
        case 0x1cd6e8u: goto label_1cd6e8;
        case 0x1cd6ecu: goto label_1cd6ec;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f4u: goto label_1cd6f4;
        case 0x1cd6f8u: goto label_1cd6f8;
        case 0x1cd6fcu: goto label_1cd6fc;
        case 0x1cd700u: goto label_1cd700;
        case 0x1cd704u: goto label_1cd704;
        case 0x1cd708u: goto label_1cd708;
        case 0x1cd70cu: goto label_1cd70c;
        case 0x1cd710u: goto label_1cd710;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd718u: goto label_1cd718;
        case 0x1cd71cu: goto label_1cd71c;
        case 0x1cd720u: goto label_1cd720;
        case 0x1cd724u: goto label_1cd724;
        case 0x1cd728u: goto label_1cd728;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd730u: goto label_1cd730;
        case 0x1cd734u: goto label_1cd734;
        case 0x1cd738u: goto label_1cd738;
        case 0x1cd73cu: goto label_1cd73c;
        case 0x1cd740u: goto label_1cd740;
        case 0x1cd744u: goto label_1cd744;
        default: break;
    }

    ctx->pc = 0x1cd5e8u;

label_1cd5e8:
    // 0x1cd5e8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cd5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1cd5ec:
    // 0x1cd5ec: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1cd5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_1cd5f0:
    // 0x1cd5f0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1cd5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_1cd5f4:
    // 0x1cd5f4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1cd5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_1cd5f8:
    // 0x1cd5f8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1cd5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_1cd5fc:
    // 0x1cd5fc: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1cd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_1cd600:
    // 0x1cd600: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1cd600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1cd604:
    // 0x1cd604: 0xc073500  jal         func_1CD400
label_1cd608:
    if (ctx->pc == 0x1CD608u) {
        ctx->pc = 0x1CD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD604u;
        // 0x1cd608: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD60Cu;
        goto label_1cd60c;
    }
    ctx->pc = 0x1CD604u;
    SET_GPR_U32(ctx, 31, 0x1CD60Cu);
    ctx->pc = 0x1CD608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD604u;
    // 0x1cd608: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD400u, 0x1CD604u, 0x1CD60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD60Cu;
label_1cd60c:
    // 0x1cd60c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1cd610:
    // 0x1cd610: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1cd614:
    // 0x1cd614: 0x8cc4504c  lw          $a0, 0x504C($a2)
    ctx->pc = 0x1cd614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20556)));
label_1cd618:
    // 0x1cd618: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1cd61c:
    if (ctx->pc == 0x1CD61Cu) {
        ctx->pc = 0x1CD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD618u;
        // 0x1cd61c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD620u;
        goto label_1cd620;
    }
    ctx->pc = 0x1CD618u;
    {
        const bool branch_taken_0x1cd618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd618) {
            ctx->pc = 0x1CD61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD618u;
            // 0x1cd61c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD620u;
            goto label_1cd620;
        }
    }
    ctx->pc = 0x1CD620u;
label_1cd620:
    // 0x1cd620: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cd624:
    // 0x1cd624: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1cd628:
    // 0x1cd628: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cd628u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cd62c:
    // 0x1cd62c: 0x2012  mflo        $a0
    ctx->pc = 0x1cd62cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1cd630:
    // 0x1cd630: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
label_1cd634:
    if (ctx->pc == 0x1CD634u) {
        ctx->pc = 0x1CD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD630u;
        // 0x1cd634: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD638u;
        goto label_1cd638;
    }
    ctx->pc = 0x1CD630u;
    {
        const bool branch_taken_0x1cd630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD630u;
        // 0x1cd634: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd630) {
            ctx->pc = 0x1CD70Cu;
            goto label_1cd70c;
        }
    }
    ctx->pc = 0x1CD638u;
label_1cd638:
    // 0x1cd638: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cd63c:
    // 0x1cd63c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1cd63cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1cd640:
    // 0x1cd640: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1cd644:
    if (ctx->pc == 0x1CD644u) {
        ctx->pc = 0x1CD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD640u;
        // 0x1cd644: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD648u;
        goto label_1cd648;
    }
    ctx->pc = 0x1CD640u;
    {
        const bool branch_taken_0x1cd640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd640) {
            ctx->pc = 0x1CD644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD640u;
            // 0x1cd644: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD648u;
            goto label_1cd648;
        }
    }
    ctx->pc = 0x1CD648u;
label_1cd648:
    // 0x1cd648: 0xa22001f0  sb          $zero, 0x1F0($s1)
    ctx->pc = 0x1cd648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 496), (uint8_t)GPR_U32(ctx, 0));
label_1cd64c:
    // 0x1cd64c: 0x8cc2504c  lw          $v0, 0x504C($a2)
    ctx->pc = 0x1cd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20556)));
label_1cd650:
    // 0x1cd650: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x1cd650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1cd654:
    // 0x1cd654: 0x9812  mflo        $s3
    ctx->pc = 0x1cd654u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_1cd658:
    // 0x1cd658: 0xa010  mfhi        $s4
    ctx->pc = 0x1cd658u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_1cd65c:
    // 0x1cd65c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1cd660:
    if (ctx->pc == 0x1CD660u) {
        ctx->pc = 0x1CD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD65Cu;
        // 0x1cd660: 0x263201f0  addiu       $s2, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD664u;
        goto label_1cd664;
    }
    ctx->pc = 0x1CD65Cu;
    {
        const bool branch_taken_0x1cd65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD65Cu;
        // 0x1cd660: 0x263201f0  addiu       $s2, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd65c) {
            ctx->pc = 0x1CD67Cu;
            goto label_1cd67c;
        }
    }
    ctx->pc = 0x1CD664u;
label_1cd664:
    // 0x1cd664: 0xc10c3ac  jal         func_430EB0
label_1cd668:
    if (ctx->pc == 0x1CD668u) {
        ctx->pc = 0x1CD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD664u;
        // 0x1cd668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD66Cu;
        goto label_1cd66c;
    }
    ctx->pc = 0x1CD664u;
    SET_GPR_U32(ctx, 31, 0x1CD66Cu);
    ctx->pc = 0x1CD668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD664u;
    // 0x1cd668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD664u, 0x1CD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD66Cu;
label_1cd66c:
    // 0x1cd66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd670:
    // 0x1cd670: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd674:
    // 0x1cd674: 0xc10c4de  jal         func_431378
label_1cd678:
    if (ctx->pc == 0x1CD678u) {
        ctx->pc = 0x1CD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD674u;
        // 0x1cd678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD67Cu;
        goto label_1cd67c;
    }
    ctx->pc = 0x1CD674u;
    SET_GPR_U32(ctx, 31, 0x1CD67Cu);
    ctx->pc = 0x1CD678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD674u;
    // 0x1cd678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CD674u, 0x1CD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD67Cu;
label_1cd67c:
    // 0x1cd67c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1cd680:
    // 0x1cd680: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cd684:
    // 0x1cd684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd688:
    // 0x1cd688: 0x24c658f0  addiu       $a2, $a2, 0x58F0
    ctx->pc = 0x1cd688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22768));
label_1cd68c:
    // 0x1cd68c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1cd68cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cd690:
    // 0x1cd690: 0xc10ca04  jal         func_432810
label_1cd694:
    if (ctx->pc == 0x1CD694u) {
        ctx->pc = 0x1CD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD690u;
        // 0x1cd694: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD698u;
        goto label_1cd698;
    }
    ctx->pc = 0x1CD690u;
    SET_GPR_U32(ctx, 31, 0x1CD698u);
    ctx->pc = 0x1CD694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD690u;
    // 0x1cd694: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CD690u, 0x1CD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD698u;
label_1cd698:
    // 0x1cd698: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd69c:
    // 0x1cd69c: 0xc10c25f  jal         func_43097C
label_1cd6a0:
    if (ctx->pc == 0x1CD6A0u) {
        ctx->pc = 0x1CD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD69Cu;
        // 0x1cd6a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6A4u;
        goto label_1cd6a4;
    }
    ctx->pc = 0x1CD69Cu;
    SET_GPR_U32(ctx, 31, 0x1CD6A4u);
    ctx->pc = 0x1CD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD69Cu;
    // 0x1cd6a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1CD69Cu, 0x1CD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6A4u;
label_1cd6a4:
    // 0x1cd6a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6a8:
    // 0x1cd6a8: 0xc06ec94  jal         func_1BB250
label_1cd6ac:
    if (ctx->pc == 0x1CD6ACu) {
        ctx->pc = 0x1CD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6A8u;
        // 0x1cd6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6B0u;
        goto label_1cd6b0;
    }
    ctx->pc = 0x1CD6A8u;
    SET_GPR_U32(ctx, 31, 0x1CD6B0u);
    ctx->pc = 0x1CD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6A8u;
    // 0x1cd6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CD6A8u, 0x1CD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6B0u;
label_1cd6b0:
    // 0x1cd6b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cd6b4:
    // 0x1cd6b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cd6b8:
    // 0x1cd6b8: 0xc440eb2c  lwc1        $f0, -0x14D4($v0)
    ctx->pc = 0x1cd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd6bc:
    // 0x1cd6bc: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1cd6c0:
    // 0x1cd6c0: 0xc461eb30  lwc1        $f1, -0x14D0($v1)
    ctx->pc = 0x1cd6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd6c4:
    // 0x1cd6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6c8:
    // 0x1cd6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd6cc:
    // 0x1cd6cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd6d0:
    // 0x1cd6d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1cd6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6d4:
    // 0x1cd6d4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1cd6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1cd6d8:
    // 0x1cd6d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd6dc:
    // 0x1cd6dc: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1cd6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1cd6e0:
    // 0x1cd6e0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1cd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_1cd6e4:
    // 0x1cd6e4: 0xc06e4dc  jal         func_1B9370
label_1cd6e8:
    if (ctx->pc == 0x1CD6E8u) {
        ctx->pc = 0x1CD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6E4u;
        // 0x1cd6e8: 0xe4e2000c  swc1        $f2, 0xC($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6ECu;
        goto label_1cd6ec;
    }
    ctx->pc = 0x1CD6E4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ECu);
    ctx->pc = 0x1CD6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6E4u;
    // 0x1cd6e8: 0xe4e2000c  swc1        $f2, 0xC($a3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1CD6E4u, 0x1CD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6ECu;
label_1cd6ec:
    // 0x1cd6ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd6f0:
    // 0x1cd6f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd6f4:
    // 0x1cd6f4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd6f8:
    // 0x1cd6f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd6fc:
    // 0x1cd6fc: 0x60f809  jalr        $v1
label_1cd700:
    if (ctx->pc == 0x1CD700u) {
        ctx->pc = 0x1CD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6FCu;
        // 0x1cd700: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD704u;
        goto label_1cd704;
    }
    ctx->pc = 0x1CD6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD704u);
        ctx->pc = 0x1CD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6FCu;
        // 0x1cd700: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD6FCu, 0x1CD704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD704u;
label_1cd704:
    // 0x1cd704: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cd708:
    if (ctx->pc == 0x1CD708u) {
        ctx->pc = 0x1CD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD704u;
        // 0x1cd708: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD70Cu;
        goto label_1cd70c;
    }
    ctx->pc = 0x1CD704u;
    {
        const bool branch_taken_0x1cd704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD704u;
        // 0x1cd708: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd704) {
            ctx->pc = 0x1CD728u;
            goto label_1cd728;
        }
    }
    ctx->pc = 0x1CD70Cu;
label_1cd70c:
    // 0x1cd70c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd710:
    // 0x1cd710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd714:
    // 0x1cd714: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd718:
    // 0x1cd718: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd71c:
    // 0x1cd71c: 0x60f809  jalr        $v1
label_1cd720:
    if (ctx->pc == 0x1CD720u) {
        ctx->pc = 0x1CD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD71Cu;
        // 0x1cd720: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD724u;
        goto label_1cd724;
    }
    ctx->pc = 0x1CD71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD724u);
        ctx->pc = 0x1CD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD71Cu;
        // 0x1cd720: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD71Cu, 0x1CD724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD724u;
label_1cd724:
    // 0x1cd724: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1cd724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1cd728:
    // 0x1cd728: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1cd728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1cd72c:
    // 0x1cd72c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1cd72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1cd730:
    // 0x1cd730: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1cd730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cd734:
    // 0x1cd734: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1cd734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cd738:
    // 0x1cd738: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cd738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1cd73c:
    // 0x1cd73c: 0x3e00008  jr          $ra
label_1cd740:
    if (ctx->pc == 0x1CD740u) {
        ctx->pc = 0x1CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD73Cu;
        // 0x1cd740: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD744u;
        goto label_1cd744;
    }
    ctx->pc = 0x1CD73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD73Cu;
        // 0x1cd740: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD744u;
label_1cd744:
    // 0x1cd744: 0x0  nop
    ctx->pc = 0x1cd744u;
    // NOP
    ctx->pc = 0x1cd748u;
}
