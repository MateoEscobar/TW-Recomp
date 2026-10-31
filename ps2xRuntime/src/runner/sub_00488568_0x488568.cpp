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

// Function: sub_00488568
// Address: 0x488568 - 0x488700
void sub_00488568_0x488568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488568_0x488568");
#endif

    switch (ctx->pc) {
        case 0x488568u: goto label_488568;
        case 0x48856cu: goto label_48856c;
        case 0x488570u: goto label_488570;
        case 0x488574u: goto label_488574;
        case 0x488578u: goto label_488578;
        case 0x48857cu: goto label_48857c;
        case 0x488580u: goto label_488580;
        case 0x488584u: goto label_488584;
        case 0x488588u: goto label_488588;
        case 0x48858cu: goto label_48858c;
        case 0x488590u: goto label_488590;
        case 0x488594u: goto label_488594;
        case 0x488598u: goto label_488598;
        case 0x48859cu: goto label_48859c;
        case 0x4885a0u: goto label_4885a0;
        case 0x4885a4u: goto label_4885a4;
        case 0x4885a8u: goto label_4885a8;
        case 0x4885acu: goto label_4885ac;
        case 0x4885b0u: goto label_4885b0;
        case 0x4885b4u: goto label_4885b4;
        case 0x4885b8u: goto label_4885b8;
        case 0x4885bcu: goto label_4885bc;
        case 0x4885c0u: goto label_4885c0;
        case 0x4885c4u: goto label_4885c4;
        case 0x4885c8u: goto label_4885c8;
        case 0x4885ccu: goto label_4885cc;
        case 0x4885d0u: goto label_4885d0;
        case 0x4885d4u: goto label_4885d4;
        case 0x4885d8u: goto label_4885d8;
        case 0x4885dcu: goto label_4885dc;
        case 0x4885e0u: goto label_4885e0;
        case 0x4885e4u: goto label_4885e4;
        case 0x4885e8u: goto label_4885e8;
        case 0x4885ecu: goto label_4885ec;
        case 0x4885f0u: goto label_4885f0;
        case 0x4885f4u: goto label_4885f4;
        case 0x4885f8u: goto label_4885f8;
        case 0x4885fcu: goto label_4885fc;
        case 0x488600u: goto label_488600;
        case 0x488604u: goto label_488604;
        case 0x488608u: goto label_488608;
        case 0x48860cu: goto label_48860c;
        case 0x488610u: goto label_488610;
        case 0x488614u: goto label_488614;
        case 0x488618u: goto label_488618;
        case 0x48861cu: goto label_48861c;
        case 0x488620u: goto label_488620;
        case 0x488624u: goto label_488624;
        case 0x488628u: goto label_488628;
        case 0x48862cu: goto label_48862c;
        case 0x488630u: goto label_488630;
        case 0x488634u: goto label_488634;
        case 0x488638u: goto label_488638;
        case 0x48863cu: goto label_48863c;
        case 0x488640u: goto label_488640;
        case 0x488644u: goto label_488644;
        case 0x488648u: goto label_488648;
        case 0x48864cu: goto label_48864c;
        case 0x488650u: goto label_488650;
        case 0x488654u: goto label_488654;
        case 0x488658u: goto label_488658;
        case 0x48865cu: goto label_48865c;
        case 0x488660u: goto label_488660;
        case 0x488664u: goto label_488664;
        case 0x488668u: goto label_488668;
        case 0x48866cu: goto label_48866c;
        case 0x488670u: goto label_488670;
        case 0x488674u: goto label_488674;
        case 0x488678u: goto label_488678;
        case 0x48867cu: goto label_48867c;
        case 0x488680u: goto label_488680;
        case 0x488684u: goto label_488684;
        case 0x488688u: goto label_488688;
        case 0x48868cu: goto label_48868c;
        case 0x488690u: goto label_488690;
        case 0x488694u: goto label_488694;
        case 0x488698u: goto label_488698;
        case 0x48869cu: goto label_48869c;
        case 0x4886a0u: goto label_4886a0;
        case 0x4886a4u: goto label_4886a4;
        case 0x4886a8u: goto label_4886a8;
        case 0x4886acu: goto label_4886ac;
        case 0x4886b0u: goto label_4886b0;
        case 0x4886b4u: goto label_4886b4;
        case 0x4886b8u: goto label_4886b8;
        case 0x4886bcu: goto label_4886bc;
        case 0x4886c0u: goto label_4886c0;
        case 0x4886c4u: goto label_4886c4;
        case 0x4886c8u: goto label_4886c8;
        case 0x4886ccu: goto label_4886cc;
        case 0x4886d0u: goto label_4886d0;
        case 0x4886d4u: goto label_4886d4;
        case 0x4886d8u: goto label_4886d8;
        case 0x4886dcu: goto label_4886dc;
        case 0x4886e0u: goto label_4886e0;
        case 0x4886e4u: goto label_4886e4;
        case 0x4886e8u: goto label_4886e8;
        case 0x4886ecu: goto label_4886ec;
        case 0x4886f0u: goto label_4886f0;
        case 0x4886f4u: goto label_4886f4;
        case 0x4886f8u: goto label_4886f8;
        case 0x4886fcu: goto label_4886fc;
        default: break;
    }

    ctx->pc = 0x488568u;

label_488568:
    // 0x488568: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48856c:
    // 0x48856c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_488570:
    // 0x488570: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x488570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_488574:
    // 0x488574: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488578:
    // 0x488578: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x488578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_48857c:
    // 0x48857c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x48857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_488580:
    // 0x488580: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x488580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_488584:
    // 0x488584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x488584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_488588:
    // 0x488588: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x488588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_48858c:
    // 0x48858c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x48858cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488590:
    // 0x488590: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x488590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_488594:
    // 0x488594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488598:
    // 0x488598: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x488598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_48859c:
    // 0x48859c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4885a0:
    if (ctx->pc == 0x4885A0u) {
        ctx->pc = 0x4885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48859Cu;
        // 0x4885a0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4885A4u;
        goto label_4885a4;
    }
    ctx->pc = 0x48859Cu;
    {
        const bool branch_taken_0x48859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48859Cu;
        // 0x4885a0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48859c) {
            ctx->pc = 0x4885C0u;
            goto label_4885c0;
        }
    }
    ctx->pc = 0x4885A4u;
label_4885a4:
    // 0x4885a4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x4885a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4885a8:
    // 0x4885a8: 0x60f809  jalr        $v1
label_4885ac:
    if (ctx->pc == 0x4885ACu) {
        ctx->pc = 0x4885B0u;
        goto label_4885b0;
    }
    ctx->pc = 0x4885A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4885B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4885A8u, 0x4885B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4885B0u;
label_4885b0:
    // 0x4885b0: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x4885b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4885b4:
    // 0x4885b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4885b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4885b8:
    // 0x4885b8: 0xa4400028  sh          $zero, 0x28($v0)
    ctx->pc = 0x4885b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
label_4885bc:
    // 0x4885bc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4885bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_4885c0:
    // 0x4885c0: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x4885c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4885c4:
    // 0x4885c4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x4885c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4885c8:
    // 0x4885c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4885c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4885cc:
    // 0x4885cc: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_4885d0:
    if (ctx->pc == 0x4885D0u) {
        ctx->pc = 0x4885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885CCu;
        // 0x4885d0: 0x2670ad18  addiu       $s0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4885D4u;
        goto label_4885d4;
    }
    ctx->pc = 0x4885CCu;
    {
        const bool branch_taken_0x4885cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4885cc) {
            ctx->pc = 0x4885D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4885CCu;
            // 0x4885d0: 0x2670ad18  addiu       $s0, $s3, -0x52E8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4886ACu;
            goto label_4886ac;
        }
    }
    ctx->pc = 0x4885D4u;
label_4885d4:
    // 0x4885d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4885d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4885d8:
    // 0x4885d8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4885dc:
    if (ctx->pc == 0x4885DCu) {
        ctx->pc = 0x4885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885D8u;
        // 0x4885dc: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4885E0u;
        goto label_4885e0;
    }
    ctx->pc = 0x4885D8u;
    {
        const bool branch_taken_0x4885d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885D8u;
        // 0x4885dc: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4885d8) {
            ctx->pc = 0x48867Cu;
            goto label_48867c;
        }
    }
    ctx->pc = 0x4885E0u;
label_4885e0:
    // 0x4885e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4885e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4885e4:
    // 0x4885e4: 0x10640026  beq         $v1, $a0, . + 4 + (0x26 << 2)
label_4885e8:
    if (ctx->pc == 0x4885E8u) {
        ctx->pc = 0x4885E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885E4u;
        // 0x4885e8: 0x2670ad18  addiu       $s0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4885ECu;
        goto label_4885ec;
    }
    ctx->pc = 0x4885E4u;
    {
        const bool branch_taken_0x4885e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4885E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885E4u;
        // 0x4885e8: 0x2670ad18  addiu       $s0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4885e4) {
            ctx->pc = 0x488680u;
            goto label_488680;
        }
    }
    ctx->pc = 0x4885ECu;
label_4885ec:
    // 0x4885ec: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x4885ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_4885f0:
    // 0x4885f0: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4885f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
label_4885f4:
    // 0x4885f4: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x4885f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_4885f8:
    // 0x4885f8: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x4885f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_4885fc:
    // 0x4885fc: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_488600:
    if (ctx->pc == 0x488600u) {
        ctx->pc = 0x488600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885FCu;
        // 0x488600: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488604u;
        goto label_488604;
    }
    ctx->pc = 0x4885FCu;
    {
        const bool branch_taken_0x4885fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x488600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885FCu;
        // 0x488600: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4885fc) {
            ctx->pc = 0x488670u;
            goto label_488670;
        }
    }
    ctx->pc = 0x488604u;
label_488604:
    // 0x488604: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488608:
    // 0x488608: 0x2671ad18  addiu       $s1, $s3, -0x52E8
    ctx->pc = 0x488608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_48860c:
    // 0x48860c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x48860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488610:
    // 0x488610: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x488610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_488614:
    // 0x488614: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_488618:
    if (ctx->pc == 0x488618u) {
        ctx->pc = 0x488618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488614u;
        // 0x488618: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48861Cu;
        goto label_48861c;
    }
    ctx->pc = 0x488614u;
    {
        const bool branch_taken_0x488614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x488614) {
            ctx->pc = 0x488618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488614u;
            // 0x488618: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48861Cu;
            goto label_48861c;
        }
    }
    ctx->pc = 0x48861Cu;
label_48861c:
    // 0x48861c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48861cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488620:
    // 0x488620: 0x24a58d90  addiu       $a1, $a1, -0x7270
    ctx->pc = 0x488620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938000));
label_488624:
    // 0x488624: 0xc1223ec  jal         func_488FB0
label_488628:
    if (ctx->pc == 0x488628u) {
        ctx->pc = 0x488628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488624u;
        // 0x488628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48862Cu;
        goto label_48862c;
    }
    ctx->pc = 0x488624u;
    SET_GPR_U32(ctx, 31, 0x48862Cu);
    ctx->pc = 0x488628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488624u;
    // 0x488628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x488624u, 0x48862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48862Cu;
label_48862c:
    // 0x48862c: 0x2644ec20  addiu       $a0, $s2, -0x13E0
    ctx->pc = 0x48862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
label_488630:
    // 0x488630: 0xc11ffb4  jal         func_47FED0
label_488634:
    if (ctx->pc == 0x488634u) {
        ctx->pc = 0x488634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488630u;
        // 0x488634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488638u;
        goto label_488638;
    }
    ctx->pc = 0x488630u;
    SET_GPR_U32(ctx, 31, 0x488638u);
    ctx->pc = 0x488634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488630u;
    // 0x488634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x488630u, 0x488638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488638u;
label_488638:
    // 0x488638: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x488638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_48863c:
    // 0x48863c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488640:
    // 0x488640: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x488640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_488644:
    // 0x488644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x488644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_488648:
    // 0x488648: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x488648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_48864c:
    // 0x48864c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_488650:
    // 0x488650: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x488650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_488654:
    // 0x488654: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488658:
    // 0x488658: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x488658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_48865c:
    // 0x48865c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x48865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488660:
    // 0x488660: 0x40f809  jalr        $v0
label_488664:
    if (ctx->pc == 0x488664u) {
        ctx->pc = 0x488664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488660u;
        // 0x488664: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488668u;
        goto label_488668;
    }
    ctx->pc = 0x488660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488668u);
        ctx->pc = 0x488664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488660u;
        // 0x488664: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488660u, 0x488668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488668u;
label_488668:
    // 0x488668: 0x10000003  b           . + 4 + (0x3 << 2)
label_48866c:
    if (ctx->pc == 0x48866Cu) {
        ctx->pc = 0x48866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488668u;
        // 0x48866c: 0xaf808640  sw          $zero, -0x79C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488670u;
        goto label_488670;
    }
    ctx->pc = 0x488668u;
    {
        const bool branch_taken_0x488668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488668u;
        // 0x48866c: 0xaf808640  sw          $zero, -0x79C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488668) {
            ctx->pc = 0x488678u;
            goto label_488678;
        }
    }
    ctx->pc = 0x488670u;
label_488670:
    // 0x488670: 0x1464ffe1  bne         $v1, $a0, . + 4 + (-0x1F << 2)
label_488674:
    if (ctx->pc == 0x488674u) {
        ctx->pc = 0x488674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488670u;
        // 0x488674: 0x2470fff0  addiu       $s0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488678u;
        goto label_488678;
    }
    ctx->pc = 0x488670u;
    {
        const bool branch_taken_0x488670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x488674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488670u;
        // 0x488674: 0x2470fff0  addiu       $s0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488670) {
            ctx->pc = 0x4885F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4885f8;
        }
    }
    ctx->pc = 0x488678u;
label_488678:
    // 0x488678: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_48867c:
    // 0x48867c: 0x2670ad18  addiu       $s0, $s3, -0x52E8
    ctx->pc = 0x48867cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_488680:
    // 0x488680: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x488680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_488684:
    // 0x488684: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x488684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_488688:
    // 0x488688: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_48868c:
    if (ctx->pc == 0x48868Cu) {
        ctx->pc = 0x48868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488688u;
        // 0x48868c: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488690u;
        goto label_488690;
    }
    ctx->pc = 0x488688u;
    {
        const bool branch_taken_0x488688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488688u;
        // 0x48868c: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488688) {
            ctx->pc = 0x4886A8u;
            goto label_4886a8;
        }
    }
    ctx->pc = 0x488690u;
label_488690:
    // 0x488690: 0xc11f74a  jal         func_47DD28
label_488694:
    if (ctx->pc == 0x488694u) {
        ctx->pc = 0x488698u;
        goto label_488698;
    }
    ctx->pc = 0x488690u;
    SET_GPR_U32(ctx, 31, 0x488698u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x488690u, 0x488698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488698u;
label_488698:
    // 0x488698: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_48869c:
    // 0x48869c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x48869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4886a0:
    // 0x4886a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4886a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_4886a4:
    // 0x4886a4: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x4886a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4886a8:
    // 0x4886a8: 0x2670ad18  addiu       $s0, $s3, -0x52E8
    ctx->pc = 0x4886a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_4886ac:
    // 0x4886ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4886acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4886b0:
    // 0x4886b0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4886b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4886b4:
    // 0x4886b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4886b8:
    if (ctx->pc == 0x4886B8u) {
        ctx->pc = 0x4886BCu;
        goto label_4886bc;
    }
    ctx->pc = 0x4886B4u;
    {
        const bool branch_taken_0x4886b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4886b4) {
            ctx->pc = 0x4886D0u;
            goto label_4886d0;
        }
    }
    ctx->pc = 0x4886BCu;
label_4886bc:
    // 0x4886bc: 0xc11f74a  jal         func_47DD28
label_4886c0:
    if (ctx->pc == 0x4886C0u) {
        ctx->pc = 0x4886C4u;
        goto label_4886c4;
    }
    ctx->pc = 0x4886BCu;
    SET_GPR_U32(ctx, 31, 0x4886C4u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4886BCu, 0x4886C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886C4u;
label_4886c4:
    // 0x4886c4: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x4886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4886c8:
    // 0x4886c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4886c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4886cc:
    // 0x4886cc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4886ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_4886d0:
    // 0x4886d0: 0x8f83897c  lw          $v1, -0x7684($gp)
    ctx->pc = 0x4886d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936956)));
label_4886d4:
    // 0x4886d4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4886d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4886d8:
    // 0x4886d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4886d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4886dc:
    // 0x4886dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4886dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4886e0:
    // 0x4886e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4886e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4886e4:
    // 0x4886e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4886e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4886e8:
    // 0x4886e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4886e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4886ec:
    // 0x4886ec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4886ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4886f0:
    // 0x4886f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4886f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4886f4:
    // 0x4886f4: 0xaf83897c  sw          $v1, -0x7684($gp)
    ctx->pc = 0x4886f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936956), GPR_U32(ctx, 3));
label_4886f8:
    // 0x4886f8: 0x3e00008  jr          $ra
label_4886fc:
    if (ctx->pc == 0x4886FCu) {
        ctx->pc = 0x4886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4886F8u;
        // 0x4886fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488700u;
        goto label_fallthrough_0x4886f8;
    }
    ctx->pc = 0x4886F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4886F8u;
        // 0x4886fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4886F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4886f8:
    ctx->pc = 0x488700u;
}
