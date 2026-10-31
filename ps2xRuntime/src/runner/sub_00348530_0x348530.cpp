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

// Function: sub_00348530
// Address: 0x348530 - 0x348a50
void sub_00348530_0x348530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348530_0x348530");
#endif

    switch (ctx->pc) {
        case 0x348588u: goto label_348588;
        case 0x3485e8u: goto label_3485e8;
        case 0x348608u: goto label_348608;
        case 0x348620u: goto label_348620;
        case 0x348680u: goto label_348680;
        case 0x348770u: goto label_348770;
        case 0x3487f0u: goto label_3487f0;
        case 0x34884cu: goto label_34884c;
        case 0x34885cu: goto label_34885c;
        case 0x3488bcu: goto label_3488bc;
        case 0x348948u: goto label_348948;
        case 0x348968u: goto label_348968;
        default: break;
    }

    ctx->pc = 0x348530u;

    // 0x348530: 0x27bdb7d0  addiu       $sp, $sp, -0x4830
    ctx->pc = 0x348530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948816));
    // 0x348534: 0xafa7475c  sw          $a3, 0x475C($sp)
    ctx->pc = 0x348534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18268), GPR_U32(ctx, 7));
    // 0x348538: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x348538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34853c: 0xafa44754  sw          $a0, 0x4754($sp)
    ctx->pc = 0x34853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18260), GPR_U32(ctx, 4));
    // 0x348540: 0xafa54758  sw          $a1, 0x4758($sp)
    ctx->pc = 0x348540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18264), GPR_U32(ctx, 5));
    // 0x348544: 0x27a44750  addiu       $a0, $sp, 0x4750
    ctx->pc = 0x348544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 18256));
    // 0x348548: 0xafa84760  sw          $t0, 0x4760($sp)
    ctx->pc = 0x348548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18272), GPR_U32(ctx, 8));
    // 0x34854c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348550: 0x7fbe47a0  sq          $fp, 0x47A0($sp)
    ctx->pc = 0x348550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18336), GPR_VEC(ctx, 30));
    // 0x348554: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348558: 0xafa94764  sw          $t1, 0x4764($sp)
    ctx->pc = 0x348558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18276), GPR_U32(ctx, 9));
    // 0x34855c: 0x7fb04820  sq          $s0, 0x4820($sp)
    ctx->pc = 0x34855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18464), GPR_VEC(ctx, 16));
    // 0x348560: 0x7fb14810  sq          $s1, 0x4810($sp)
    ctx->pc = 0x348560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18448), GPR_VEC(ctx, 17));
    // 0x348564: 0x7fb24800  sq          $s2, 0x4800($sp)
    ctx->pc = 0x348564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18432), GPR_VEC(ctx, 18));
    // 0x348568: 0x7fb347f0  sq          $s3, 0x47F0($sp)
    ctx->pc = 0x348568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18416), GPR_VEC(ctx, 19));
    // 0x34856c: 0x7fb447e0  sq          $s4, 0x47E0($sp)
    ctx->pc = 0x34856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18400), GPR_VEC(ctx, 20));
    // 0x348570: 0x7fb547d0  sq          $s5, 0x47D0($sp)
    ctx->pc = 0x348570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18384), GPR_VEC(ctx, 21));
    // 0x348574: 0x7fb647c0  sq          $s6, 0x47C0($sp)
    ctx->pc = 0x348574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18368), GPR_VEC(ctx, 22));
    // 0x348578: 0x7fb747b0  sq          $s7, 0x47B0($sp)
    ctx->pc = 0x348578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18352), GPR_VEC(ctx, 23));
    // 0x34857c: 0xffbf4790  sd          $ra, 0x4790($sp)
    ctx->pc = 0x34857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 18320), GPR_U64(ctx, 31));
    // 0x348580: 0xc0d1c5c  jal         func_347170
    ctx->pc = 0x348580u;
    SET_GPR_U32(ctx, 31, 0x348588u);
    ctx->pc = 0x348584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348580u;
    // 0x348584: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347170u, 0x348580u, 0x348588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348588u;
label_348588:
    // 0x348588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x348588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34858c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x34858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x348590: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x348590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x348594: 0xafa24768  sw          $v0, 0x4768($sp)
    ctx->pc = 0x348594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18280), GPR_U32(ctx, 2));
    // 0x348598: 0xafa3476c  sw          $v1, 0x476C($sp)
    ctx->pc = 0x348598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18284), GPR_U32(ctx, 3));
    // 0x34859c: 0xafa44770  sw          $a0, 0x4770($sp)
    ctx->pc = 0x34859cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18288), GPR_U32(ctx, 4));
    // 0x3485a0: 0x8fa54760  lw          $a1, 0x4760($sp)
    ctx->pc = 0x3485a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x3485a4: 0x8fa74760  lw          $a3, 0x4760($sp)
    ctx->pc = 0x3485a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x3485a8: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x3485a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3485ac: 0x78a30060  lq          $v1, 0x60($a1)
    ctx->pc = 0x3485acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3485b0: 0x78a40070  lq          $a0, 0x70($a1)
    ctx->pc = 0x3485b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x3485b4: 0x78a50080  lq          $a1, 0x80($a1)
    ctx->pc = 0x3485b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3485b8: 0x78e60040  lq          $a2, 0x40($a3)
    ctx->pc = 0x3485b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x3485bc: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x3485bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3485c0: 0x8fa94768  lw          $t1, 0x4768($sp)
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
    // 0x3485c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3485c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3485c8: 0xafa84774  sw          $t0, 0x4774($sp)
    ctx->pc = 0x3485c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18292), GPR_U32(ctx, 8));
    // 0x3485cc: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x3485ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3485d0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3485d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x3485d4: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3485d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x3485d8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3485d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x3485dc: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3485DCu;
    {
        const bool branch_taken_0x3485dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3485E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485DCu;
        // 0x3485e0: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485dc) {
            ctx->pc = 0x348930u;
            goto label_348930;
        }
    }
    ctx->pc = 0x3485E4u;
    // 0x3485e4: 0x0  nop
    ctx->pc = 0x3485e4u;
    // NOP
label_3485e8:
    // 0x3485e8: 0x8faa4774  lw          $t2, 0x4774($sp)
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18292)));
    // 0x3485ec: 0x8fb60004  lw          $s6, 0x4($sp)
    ctx->pc = 0x3485ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3485f0: 0x8fa3476c  lw          $v1, 0x476C($sp)
    ctx->pc = 0x3485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18284)));
    // 0x3485f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3485f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3485f8: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x3485f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3485fc: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x3485FCu;
    {
        const bool branch_taken_0x3485fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485FCu;
        // 0x348600: 0xafaa477c  sw          $t2, 0x477C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18300), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485fc) {
            ctx->pc = 0x34891Cu;
            goto label_34891c;
        }
    }
    ctx->pc = 0x348604u;
    // 0x348604: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x348604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_348608:
    // 0x348608: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x348608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x34860c: 0x8fa64770  lw          $a2, 0x4770($sp)
    ctx->pc = 0x34860cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18288)));
    // 0x348610: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x348610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x348614: 0x144000bc  bnez        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x348614u;
    {
        const bool branch_taken_0x348614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348614u;
        // 0x348618: 0xafa54780  sw          $a1, 0x4780($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348614) {
            ctx->pc = 0x348908u;
            goto label_348908;
        }
    }
    ctx->pc = 0x34861Cu;
    // 0x34861c: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x34861cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_348620:
    // 0x348620: 0x8fa54750  lw          $a1, 0x4750($sp)
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x348624: 0xafa74784  sw          $a3, 0x4784($sp)
    ctx->pc = 0x348624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18308), GPR_U32(ctx, 7));
    // 0x348628: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x348628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
    // 0x34862c: 0x94a30070  lhu         $v1, 0x70($a1)
    ctx->pc = 0x34862cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x348630: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x348630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x348634: 0x8ca40078  lw          $a0, 0x78($a1)
    ctx->pc = 0x348634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x348638: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x348638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x34863c: 0x8fa64774  lw          $a2, 0x4774($sp)
    ctx->pc = 0x34863cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18292)));
    // 0x348640: 0xc00013  mtlo        $a2
    ctx->pc = 0x348640u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x348644: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x348644u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x348648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x348648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34864c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x348650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x348650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348654: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x348654u;
    {
        const bool branch_taken_0x348654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348654u;
        // 0x348658: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348654) {
            ctx->pc = 0x3488F4u;
            goto label_3488f4;
        }
    }
    ctx->pc = 0x34865Cu;
    // 0x34865c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x34865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x348660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x348660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348664: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x348664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x348668: 0x96170000  lhu         $s7, 0x0($s0)
    ctx->pc = 0x348668u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34866c: 0x12e000a1  beqz        $s7, . + 4 + (0xA1 << 2)
    ctx->pc = 0x34866Cu;
    {
        const bool branch_taken_0x34866c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x348670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34866Cu;
        // 0x348670: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34866c) {
            ctx->pc = 0x3488F4u;
            goto label_3488f4;
        }
    }
    ctx->pc = 0x348674u;
    // 0x348674: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x348674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x348678: 0xafa74778  sw          $a3, 0x4778($sp)
    ctx->pc = 0x348678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18296), GPR_U32(ctx, 7));
    // 0x34867c: 0x0  nop
    ctx->pc = 0x34867cu;
    // NOP
label_348680:
    // 0x348680: 0x8fa34750  lw          $v1, 0x4750($sp)
    ctx->pc = 0x348680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x348684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348688: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x348688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34868c: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x34868cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x348690: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x348690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x348694: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x348694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x348698: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x348698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x34869c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3486a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3486a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3486a4: 0xc31007  srav        $v0, $v1, $a2
    ctx->pc = 0x3486a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x3486a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3486a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3486ac: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x3486acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x3486b0: 0x14a0008c  bnez        $a1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3486B0u;
    {
        const bool branch_taken_0x3486b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3486B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486B0u;
        // 0x3486b4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486b0) {
            ctx->pc = 0x3488E4u;
            goto label_3488e4;
        }
    }
    ctx->pc = 0x3486B8u;
    // 0x3486b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3486b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3486bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3486bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3486c0: 0xc81004  sllv        $v0, $t0, $a2
    ctx->pc = 0x3486c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3486c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3486c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3486c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3486c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3486cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3486ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3486d0: 0x8fa74750  lw          $a3, 0x4750($sp)
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x3486d4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3486d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3486d8: 0x8ce40088  lw          $a0, 0x88($a3)
    ctx->pc = 0x3486d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x3486dc: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x3486dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3486e0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3486e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3486e4: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x3486e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3486e8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x3486e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x3486ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3486ECu;
    {
        const bool branch_taken_0x3486ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3486F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486ECu;
        // 0x3486f0: 0x8fa9475c  lw          $t1, 0x475C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486ec) {
            ctx->pc = 0x348704u;
            goto label_348704;
        }
    }
    ctx->pc = 0x3486F4u;
    // 0x3486f4: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x3486f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x3486f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3486f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3486fc: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x3486FCu;
    {
        const bool branch_taken_0x3486fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3486fc) {
            ctx->pc = 0x348700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3486FCu;
            // 0x348700: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488E8u;
            goto label_3488e8;
        }
    }
    ctx->pc = 0x348704u;
label_348704:
    // 0x348704: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x348704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x348708: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x348708u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x34870c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x348710: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x348710u;
    {
        const bool branch_taken_0x348710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348710u;
        // 0x348714: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348710) {
            ctx->pc = 0x3488E4u;
            goto label_3488e4;
        }
    }
    ctx->pc = 0x348718u;
    // 0x348718: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x348718u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34871c: 0x27b24530  addiu       $s2, $sp, 0x4530
    ctx->pc = 0x34871cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 17712));
    // 0x348720: 0x8ce3008c  lw          $v1, 0x8C($a3)
    ctx->pc = 0x348720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x348724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348728: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x348728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x34872c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34872cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348730: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x348730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x348734: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x348734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348738: 0x7fa24530  sq          $v0, 0x4530($sp)
    ctx->pc = 0x348738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17712), GPR_VEC(ctx, 2));
    // 0x34873c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x34873cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x348740: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x348740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x348744: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x348744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x348748: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34874c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34874cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348750: 0x7fa24540  sq          $v0, 0x4540($sp)
    ctx->pc = 0x348750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17728), GPR_VEC(ctx, 2));
    // 0x348754: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x348754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x348758: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x348758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x34875c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x348760: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x348764: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x348764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348768: 0xc0d0f0c  jal         func_343C30
    ctx->pc = 0x348768u;
    SET_GPR_U32(ctx, 31, 0x348770u);
    ctx->pc = 0x34876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348768u;
    // 0x34876c: 0x7fa24550  sq          $v0, 0x4550($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 17744), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C30u, 0x348768u, 0x348770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348770u;
label_348770:
    // 0x348770: 0x8faa4760  lw          $t2, 0x4760($sp)
    ctx->pc = 0x348770u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x348774: 0x7ba445a0  lq          $a0, 0x45A0($sp)
    ctx->pc = 0x348774u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 17824)));
    // 0x348778: 0x7ba24530  lq          $v0, 0x4530($sp)
    ctx->pc = 0x348778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17712)));
    // 0x34877c: 0x79430080  lq          $v1, 0x80($t2)
    ctx->pc = 0x34877cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x348780: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x348780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x348784: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x348784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x348788: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x348788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34878c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34878cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348790: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348794: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x348794u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x348798: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x348798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34879c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34879cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3487a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3487a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3487a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3487a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3487a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3487a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3487ac: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3487acu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3487b0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3487b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3487b4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3487b4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487b8: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x3487b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x3487bc: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x3487bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x3487c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3487c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3487c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3487c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3487c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3487c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3487cc: 0x0  nop
    ctx->pc = 0x3487ccu;
    // NOP
    // 0x3487d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3487D0u;
    {
        const bool branch_taken_0x3487d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3487D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487D0u;
        // 0x3487d4: 0x8fa74764  lw          $a3, 0x4764($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3487d0) {
            ctx->pc = 0x3487F4u;
            goto label_3487f4;
        }
    }
    ctx->pc = 0x3487D8u;
    // 0x3487d8: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3487d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3487dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3487dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3487e0: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x3487E0u;
    {
        const bool branch_taken_0x3487e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3487e0) {
            ctx->pc = 0x3487E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3487E0u;
            // 0x3487e4: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488E8u;
            goto label_3488e8;
        }
    }
    ctx->pc = 0x3487E8u;
    // 0x3487e8: 0xc0d0f24  jal         func_343C90
    ctx->pc = 0x3487E8u;
    SET_GPR_U32(ctx, 31, 0x3487F0u);
    ctx->pc = 0x3487ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487E8u;
    // 0x3487ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C90u, 0x3487E8u, 0x3487F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487F0u;
label_3487f0:
    // 0x3487f0: 0x8fa74764  lw          $a3, 0x4764($sp)
    ctx->pc = 0x3487f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
label_3487f4:
    // 0x3487f4: 0x26150002  addiu       $s5, $s0, 0x2
    ctx->pc = 0x3487f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3487f8: 0x7ba245a0  lq          $v0, 0x45A0($sp)
    ctx->pc = 0x3487f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17824)));
    // 0x3487fc: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x3487fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x348800: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x348800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x348804: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x348804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x348808: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x348808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34880c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34880cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348810: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x348810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348814: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x348814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348818: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x348818u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34881c: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x34881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x348820: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x348820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x348824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348828: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x348828u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34882c: 0x0  nop
    ctx->pc = 0x34882cu;
    // NOP
    // 0x348830: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x348830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348834: 0x0  nop
    ctx->pc = 0x348834u;
    // NOP
    // 0x348838: 0x4503002b  bc1tl       . + 4 + (0x2B << 2)
    ctx->pc = 0x348838u;
    {
        const bool branch_taken_0x348838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348838) {
            ctx->pc = 0x34883Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348838u;
            // 0x34883c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488E8u;
            goto label_3488e8;
        }
    }
    ctx->pc = 0x348840u;
    // 0x348840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348844: 0xc0d0ea4  jal         func_343A90
    ctx->pc = 0x348844u;
    SET_GPR_U32(ctx, 31, 0x34884Cu);
    ctx->pc = 0x348848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348844u;
    // 0x348848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A90u, 0x348844u, 0x34884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34884Cu;
label_34884c:
    // 0x34884c: 0x8fa64764  lw          $a2, 0x4764($sp)
    ctx->pc = 0x34884cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
    // 0x348850: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x348850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x348854: 0xc0d3574  jal         func_34D5D0
    ctx->pc = 0x348854u;
    SET_GPR_U32(ctx, 31, 0x34885Cu);
    ctx->pc = 0x348858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348854u;
    // 0x348858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D5D0u, 0x348854u, 0x34885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34885Cu;
label_34885c:
    // 0x34885c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x34885cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x348860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348864: 0x0  nop
    ctx->pc = 0x348864u;
    // NOP
    // 0x348868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x348868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34886c: 0x0  nop
    ctx->pc = 0x34886cu;
    // NOP
    // 0x348870: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x348870u;
    {
        const bool branch_taken_0x348870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348870u;
        // 0x348874: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348870) {
            ctx->pc = 0x3488E8u;
            goto label_3488e8;
        }
    }
    ctx->pc = 0x348878u;
    // 0x348878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34887c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34887cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348880: 0x0  nop
    ctx->pc = 0x348880u;
    // NOP
    // 0x348884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348888: 0x0  nop
    ctx->pc = 0x348888u;
    // NOP
    // 0x34888c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x34888Cu;
    {
        const bool branch_taken_0x34888c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34888c) {
            ctx->pc = 0x348890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34888Cu;
            // 0x348890: 0x277102b  sltu        $v0, $s3, $s7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488ECu;
            goto label_3488ec;
        }
    }
    ctx->pc = 0x348894u;
    // 0x348894: 0x8fa54778  lw          $a1, 0x4778($sp)
    ctx->pc = 0x348894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18296)));
    // 0x348898: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x348898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x34889c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488a0: 0xa00013  mtlo        $a1
    ctx->pc = 0x3488a0u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x3488a4: 0x73c21800  madd        $v1, $fp, $v0
    ctx->pc = 0x3488a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3488a8: 0x27a545b0  addiu       $a1, $sp, 0x45B0
    ctx->pc = 0x3488a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17840));
    // 0x3488ac: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3488acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3488b0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x3488b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x3488b4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3488b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3488b8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3488b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3488bc:
    // 0x3488bc: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x3488bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3488c0: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x3488c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3488c4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x3488c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x3488c8: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x3488c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x3488cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3488ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3488d0: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3488D0u;
    {
        const bool branch_taken_0x3488d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3488D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488D0u;
        // 0x3488d4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488d0) {
            ctx->pc = 0x3488BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3488bc;
        }
    }
    ctx->pc = 0x3488D8u;
    // 0x3488d8: 0x788a0000  lq          $t2, 0x0($a0)
    ctx->pc = 0x3488d8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3488dc: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x3488dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x3488e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3488e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_3488e4:
    // 0x3488e4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3488e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3488e8:
    // 0x3488e8: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x3488e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_3488ec:
    // 0x3488ec: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x3488ECu;
    {
        const bool branch_taken_0x3488ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488ECu;
        // 0x3488f0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488ec) {
            ctx->pc = 0x348680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348680;
        }
    }
    ctx->pc = 0x3488F4u;
label_3488f4:
    // 0x3488f4: 0x8fa44784  lw          $a0, 0x4784($sp)
    ctx->pc = 0x3488f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18308)));
    // 0x3488f8: 0x8fa84770  lw          $t0, 0x4770($sp)
    ctx->pc = 0x3488f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18288)));
    // 0x3488fc: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x3488fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x348900: 0x1040ff47  beqz        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x348900u;
    {
        const bool branch_taken_0x348900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348900u;
        // 0x348904: 0x24870001  addiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348900) {
            ctx->pc = 0x348620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348620;
        }
    }
    ctx->pc = 0x348908u;
label_348908:
    // 0x348908: 0x8fb64780  lw          $s6, 0x4780($sp)
    ctx->pc = 0x348908u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18304)));
    // 0x34890c: 0x8fa9476c  lw          $t1, 0x476C($sp)
    ctx->pc = 0x34890cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18284)));
    // 0x348910: 0x136102b  sltu        $v0, $t1, $s6
    ctx->pc = 0x348910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x348914: 0x5040ff3c  beql        $v0, $zero, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x348914u;
    {
        const bool branch_taken_0x348914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348914) {
            ctx->pc = 0x348918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348914u;
            // 0x348918: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348608;
        }
    }
    ctx->pc = 0x34891Cu;
label_34891c:
    // 0x34891c: 0x8faa477c  lw          $t2, 0x477C($sp)
    ctx->pc = 0x34891cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18300)));
    // 0x348920: 0x8fa34768  lw          $v1, 0x4768($sp)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18280)));
    // 0x348924: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x348924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x348928: 0x1040ff2f  beqz        $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x348928u;
    {
        const bool branch_taken_0x348928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348928u;
        // 0x34892c: 0xafaa4774  sw          $t2, 0x4774($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18292), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348928) {
            ctx->pc = 0x3485E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3485e8;
        }
    }
    ctx->pc = 0x348930u;
label_348930:
    // 0x348930: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
    ctx->pc = 0x348930u;
    {
        const bool branch_taken_0x348930 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x348934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348930u;
        // 0x348934: 0x27b045c0  addiu       $s0, $sp, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 17856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348930) {
            ctx->pc = 0x348A1Cu;
            goto label_348a1c;
        }
    }
    ctx->pc = 0x348938u;
    // 0x348938: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x348938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34893c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348940: 0xc0d1cc0  jal         func_347300
    ctx->pc = 0x348940u;
    SET_GPR_U32(ctx, 31, 0x348948u);
    ctx->pc = 0x348944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348940u;
    // 0x348944: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347300u, 0x348940u, 0x348948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348948u;
label_348948:
    // 0x348948: 0x8fa44758  lw          $a0, 0x4758($sp)
    ctx->pc = 0x348948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18264)));
    // 0x34894c: 0x9e102b  sltu        $v0, $a0, $fp
    ctx->pc = 0x34894cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x348950: 0x82f00b  movn        $fp, $a0, $v0
    ctx->pc = 0x348950u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 4));
    // 0x348954: 0x13c0002f  beqz        $fp, . + 4 + (0x2F << 2)
    ctx->pc = 0x348954u;
    {
        const bool branch_taken_0x348954 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x348958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348954u;
        // 0x348958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348954) {
            ctx->pc = 0x348A14u;
            goto label_348a14;
        }
    }
    ctx->pc = 0x34895Cu;
    // 0x34895c: 0x7ba90050  lq          $t1, 0x50($sp)
    ctx->pc = 0x34895cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348960: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x348960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348964: 0x8fa64754  lw          $a2, 0x4754($sp)
    ctx->pc = 0x348964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18260)));
label_348968:
    // 0x348968: 0x8fa54760  lw          $a1, 0x4760($sp)
    ctx->pc = 0x348968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x34896c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34896cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x348970: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x348970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x348974: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x348974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x348978: 0xfe282b  sltu        $a1, $a3, $fp
    ctx->pc = 0x348978u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x34897c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x34897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x348980: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x348980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x348984: 0x78820090  lq          $v0, 0x90($a0)
    ctx->pc = 0x348984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x348988: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x348988u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x34898c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348990: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x348990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x348994: 0x8faa4764  lw          $t2, 0x4764($sp)
    ctx->pc = 0x348994u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
    // 0x348998: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x348998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34899c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x34899cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x3489a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3489a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3489a4: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x3489a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x3489a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3489a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3489ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3489acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3489b0: 0x7cc30090  sq          $v1, 0x90($a2)
    ctx->pc = 0x3489b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 3));
    // 0x3489b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3489b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3489b8: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x3489b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x3489bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3489bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3489c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3489c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3489c4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3489c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3489c8: 0x7cc30090  sq          $v1, 0x90($a2)
    ctx->pc = 0x3489c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 3));
    // 0x3489cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3489ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3489d0: 0xacc200b0  sw          $v0, 0xB0($a2)
    ctx->pc = 0x3489d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 2));
    // 0x3489d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3489d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3489d8: 0xacc300b4  sw          $v1, 0xB4($a2)
    ctx->pc = 0x3489d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
    // 0x3489dc: 0x8fa34764  lw          $v1, 0x4764($sp)
    ctx->pc = 0x3489dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18276)));
    // 0x3489e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3489e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3489e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3489e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3489e8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3489e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3489ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3489ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3489f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3489f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3489f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3489f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3489f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3489f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3489fc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3489fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x348a00: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x348a00u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x348a04: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x348a04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x348a08: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x348A08u;
    {
        const bool branch_taken_0x348a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x348A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A08u;
        // 0x348a0c: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a08) {
            ctx->pc = 0x348968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348968;
        }
    }
    ctx->pc = 0x348A10u;
    // 0x348a10: 0x7fa34530  sq          $v1, 0x4530($sp)
    ctx->pc = 0x348a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17712), GPR_VEC(ctx, 3));
label_348a14:
    // 0x348a14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x348A14u;
    {
        const bool branch_taken_0x348a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A14u;
        // 0x348a18: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a14) {
            ctx->pc = 0x348A20u;
            goto label_348a20;
        }
    }
    ctx->pc = 0x348A1Cu;
label_348a1c:
    // 0x348a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x348a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348a20:
    // 0x348a20: 0x7bb04820  lq          $s0, 0x4820($sp)
    ctx->pc = 0x348a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18464)));
    // 0x348a24: 0x7bb14810  lq          $s1, 0x4810($sp)
    ctx->pc = 0x348a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18448)));
    // 0x348a28: 0x7bb24800  lq          $s2, 0x4800($sp)
    ctx->pc = 0x348a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18432)));
    // 0x348a2c: 0x7bb347f0  lq          $s3, 0x47F0($sp)
    ctx->pc = 0x348a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18416)));
    // 0x348a30: 0x7bb447e0  lq          $s4, 0x47E0($sp)
    ctx->pc = 0x348a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18400)));
    // 0x348a34: 0x7bb547d0  lq          $s5, 0x47D0($sp)
    ctx->pc = 0x348a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18384)));
    // 0x348a38: 0x7bb647c0  lq          $s6, 0x47C0($sp)
    ctx->pc = 0x348a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 18368)));
    // 0x348a3c: 0x7bb747b0  lq          $s7, 0x47B0($sp)
    ctx->pc = 0x348a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 18352)));
    // 0x348a40: 0x7bbe47a0  lq          $fp, 0x47A0($sp)
    ctx->pc = 0x348a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 18336)));
    // 0x348a44: 0xdfbf4790  ld          $ra, 0x4790($sp)
    ctx->pc = 0x348a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 18320)));
    // 0x348a48: 0x3e00008  jr          $ra
    ctx->pc = 0x348A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A48u;
        // 0x348a4c: 0x27bd4830  addiu       $sp, $sp, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348A50u;
}
