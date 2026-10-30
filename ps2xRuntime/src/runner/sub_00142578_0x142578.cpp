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

// Function: sub_00142578
// Address: 0x142578 - 0x142690
void sub_00142578_0x142578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142578_0x142578");
#endif

    switch (ctx->pc) {
        case 0x142578u: goto label_142578;
        case 0x14257cu: goto label_14257c;
        case 0x142580u: goto label_142580;
        case 0x142584u: goto label_142584;
        case 0x142588u: goto label_142588;
        case 0x14258cu: goto label_14258c;
        case 0x142590u: goto label_142590;
        case 0x142594u: goto label_142594;
        case 0x142598u: goto label_142598;
        case 0x14259cu: goto label_14259c;
        case 0x1425a0u: goto label_1425a0;
        case 0x1425a4u: goto label_1425a4;
        case 0x1425a8u: goto label_1425a8;
        case 0x1425acu: goto label_1425ac;
        case 0x1425b0u: goto label_1425b0;
        case 0x1425b4u: goto label_1425b4;
        case 0x1425b8u: goto label_1425b8;
        case 0x1425bcu: goto label_1425bc;
        case 0x1425c0u: goto label_1425c0;
        case 0x1425c4u: goto label_1425c4;
        case 0x1425c8u: goto label_1425c8;
        case 0x1425ccu: goto label_1425cc;
        case 0x1425d0u: goto label_1425d0;
        case 0x1425d4u: goto label_1425d4;
        case 0x1425d8u: goto label_1425d8;
        case 0x1425dcu: goto label_1425dc;
        case 0x1425e0u: goto label_1425e0;
        case 0x1425e4u: goto label_1425e4;
        case 0x1425e8u: goto label_1425e8;
        case 0x1425ecu: goto label_1425ec;
        case 0x1425f0u: goto label_1425f0;
        case 0x1425f4u: goto label_1425f4;
        case 0x1425f8u: goto label_1425f8;
        case 0x1425fcu: goto label_1425fc;
        case 0x142600u: goto label_142600;
        case 0x142604u: goto label_142604;
        case 0x142608u: goto label_142608;
        case 0x14260cu: goto label_14260c;
        case 0x142610u: goto label_142610;
        case 0x142614u: goto label_142614;
        case 0x142618u: goto label_142618;
        case 0x14261cu: goto label_14261c;
        case 0x142620u: goto label_142620;
        case 0x142624u: goto label_142624;
        case 0x142628u: goto label_142628;
        case 0x14262cu: goto label_14262c;
        case 0x142630u: goto label_142630;
        case 0x142634u: goto label_142634;
        case 0x142638u: goto label_142638;
        case 0x14263cu: goto label_14263c;
        case 0x142640u: goto label_142640;
        case 0x142644u: goto label_142644;
        case 0x142648u: goto label_142648;
        case 0x14264cu: goto label_14264c;
        case 0x142650u: goto label_142650;
        case 0x142654u: goto label_142654;
        case 0x142658u: goto label_142658;
        case 0x14265cu: goto label_14265c;
        case 0x142660u: goto label_142660;
        case 0x142664u: goto label_142664;
        case 0x142668u: goto label_142668;
        case 0x14266cu: goto label_14266c;
        case 0x142670u: goto label_142670;
        case 0x142674u: goto label_142674;
        case 0x142678u: goto label_142678;
        case 0x14267cu: goto label_14267c;
        case 0x142680u: goto label_142680;
        case 0x142684u: goto label_142684;
        case 0x142688u: goto label_142688;
        case 0x14268cu: goto label_14268c;
        default: break;
    }

    ctx->pc = 0x142578u;

label_142578:
    // 0x142578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14257c:
    // 0x14257c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142580:
    // 0x142580: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x142580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_142584:
    // 0x142584: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x142584u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_142588:
    // 0x142588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14258c:
    // 0x14258c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142590:
    // 0x142590: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x142590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_142594:
    // 0x142594: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x142594u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142598:
    // 0x142598: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_14259c:
    // 0x14259c: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x14259cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1425a0:
    // 0x1425a0: 0x11400020  beqz        $t2, . + 4 + (0x20 << 2)
label_1425a4:
    if (ctx->pc == 0x1425A4u) {
        ctx->pc = 0x1425A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425A0u;
        // 0x1425a4: 0xae020340  sw          $v0, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1425A8u;
        goto label_1425a8;
    }
    ctx->pc = 0x1425A0u;
    {
        const bool branch_taken_0x1425a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425A0u;
        // 0x1425a4: 0xae020340  sw          $v0, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425a0) {
            ctx->pc = 0x142624u;
            goto label_142624;
        }
    }
    ctx->pc = 0x1425A8u;
label_1425a8:
    // 0x1425a8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1425a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1425ac:
    // 0x1425ac: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x1425acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1425b0:
    // 0x1425b0: 0x2442030c  addiu       $v0, $v0, 0x30C
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 780));
label_1425b4:
    // 0x1425b4: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1425b8:
    // 0x1425b8: 0x504821  addu        $t1, $v0, $s0
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1425bc:
    // 0x1425bc: 0x2608030c  addiu       $t0, $s0, 0x30C
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
label_1425c0:
    // 0x1425c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1425c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1425c4:
    // 0x1425c4: 0x0  nop
    ctx->pc = 0x1425c4u;
    // NOP
label_1425c8:
    // 0x1425c8: 0x78c20260  lq          $v0, 0x260($a2)
    ctx->pc = 0x1425c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 608)));
label_1425cc:
    // 0x1425cc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1425d0:
    // 0x1425d0: 0x78c401e0  lq          $a0, 0x1E0($a2)
    ctx->pc = 0x1425d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 480)));
label_1425d4:
    // 0x1425d4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1425d8:
    // 0x1425d8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1425d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1425dc:
    // 0x1425dc: 0x16a282b  sltu        $a1, $t3, $t2
    ctx->pc = 0x1425dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_1425e0:
    // 0x1425e0: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1425e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_1425e4:
    // 0x1425e4: 0x78e201e0  lq          $v0, 0x1E0($a3)
    ctx->pc = 0x1425e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 480)));
label_1425e8:
    // 0x1425e8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1425e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1425ec:
    // 0x1425ec: 0x7cc201e0  sq          $v0, 0x1E0($a2)
    ctx->pc = 0x1425ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 480), GPR_VEC(ctx, 2));
label_1425f0:
    // 0x1425f0: 0x78e30260  lq          $v1, 0x260($a3)
    ctx->pc = 0x1425f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 608)));
label_1425f4:
    // 0x1425f4: 0x7cc30260  sq          $v1, 0x260($a2)
    ctx->pc = 0x1425f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 608), GPR_VEC(ctx, 3));
label_1425f8:
    // 0x1425f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1425f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1425fc:
    // 0x1425fc: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1425fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_142600:
    // 0x142600: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x142600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_142604:
    // 0x142604: 0x7ce401e0  sq          $a0, 0x1E0($a3)
    ctx->pc = 0x142604u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 480), GPR_VEC(ctx, 4));
label_142608:
    // 0x142608: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_14260c:
    // 0x14260c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x14260cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142610:
    // 0x142610: 0x7ce20260  sq          $v0, 0x260($a3)
    ctx->pc = 0x142610u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 608), GPR_VEC(ctx, 2));
label_142614:
    // 0x142614: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x142614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_142618:
    // 0x142618: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x142618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_14261c:
    // 0x14261c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
label_142620:
    if (ctx->pc == 0x142620u) {
        ctx->pc = 0x142620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14261Cu;
        // 0x142620: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142624u;
        goto label_142624;
    }
    ctx->pc = 0x14261Cu;
    {
        const bool branch_taken_0x14261c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x142620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14261Cu;
        // 0x142620: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14261c) {
            ctx->pc = 0x1425C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1425c8;
        }
    }
    ctx->pc = 0x142624u;
label_142624:
    // 0x142624: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_142628:
    // 0x142628: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x142628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_14262c:
    // 0x14262c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_142630:
    // 0x142630: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_142634:
    // 0x142634: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_142638:
    // 0x142638: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_14263c:
    // 0x14263c: 0x40f809  jalr        $v0
label_142640:
    if (ctx->pc == 0x142640u) {
        ctx->pc = 0x142640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14263Cu;
        // 0x142640: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142644u;
        goto label_142644;
    }
    ctx->pc = 0x14263Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142644u);
        ctx->pc = 0x142640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14263Cu;
        // 0x142640: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14263Cu, 0x142644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142644u;
label_142644:
    // 0x142644: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x142644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
label_142648:
    // 0x142648: 0x260501e0  addiu       $a1, $s0, 0x1E0
    ctx->pc = 0x142648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_14264c:
    // 0x14264c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142650:
    // 0x142650: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x142650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
label_142654:
    // 0x142654: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x142654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_142658:
    // 0x142658: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_14265c:
    // 0x14265c: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x14265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_142660:
    // 0x142660: 0x60f809  jalr        $v1
label_142664:
    if (ctx->pc == 0x142664u) {
        ctx->pc = 0x142664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142660u;
        // 0x142664: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142668u;
        goto label_142668;
    }
    ctx->pc = 0x142660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142668u);
        ctx->pc = 0x142664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142660u;
        // 0x142664: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142660u, 0x142668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142668u;
label_142668:
    // 0x142668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x142668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14266c:
    // 0x14266c: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x14266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_142670:
    // 0x142670: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x142670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_142674:
    // 0x142674: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x142674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_142678:
    // 0x142678: 0x60f809  jalr        $v1
label_14267c:
    if (ctx->pc == 0x14267Cu) {
        ctx->pc = 0x14267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142678u;
        // 0x14267c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142680u;
        goto label_142680;
    }
    ctx->pc = 0x142678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142680u);
        ctx->pc = 0x14267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142678u;
        // 0x14267c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142678u, 0x142680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142680u;
label_142680:
    // 0x142680: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x142680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_142684:
    // 0x142684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_142688:
    // 0x142688: 0x3e00008  jr          $ra
label_14268c:
    if (ctx->pc == 0x14268Cu) {
        ctx->pc = 0x14268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142688u;
        // 0x14268c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142690u;
        goto label_fallthrough_0x142688;
    }
    ctx->pc = 0x142688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142688u;
        // 0x14268c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142688:
    ctx->pc = 0x142690u;
}
