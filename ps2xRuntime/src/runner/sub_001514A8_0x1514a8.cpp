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

// Function: sub_001514A8
// Address: 0x1514a8 - 0x151640
void sub_001514A8_0x1514a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001514A8_0x1514a8");
#endif

    switch (ctx->pc) {
        case 0x1514a8u: goto label_1514a8;
        case 0x1514acu: goto label_1514ac;
        case 0x1514b0u: goto label_1514b0;
        case 0x1514b4u: goto label_1514b4;
        case 0x1514b8u: goto label_1514b8;
        case 0x1514bcu: goto label_1514bc;
        case 0x1514c0u: goto label_1514c0;
        case 0x1514c4u: goto label_1514c4;
        case 0x1514c8u: goto label_1514c8;
        case 0x1514ccu: goto label_1514cc;
        case 0x1514d0u: goto label_1514d0;
        case 0x1514d4u: goto label_1514d4;
        case 0x1514d8u: goto label_1514d8;
        case 0x1514dcu: goto label_1514dc;
        case 0x1514e0u: goto label_1514e0;
        case 0x1514e4u: goto label_1514e4;
        case 0x1514e8u: goto label_1514e8;
        case 0x1514ecu: goto label_1514ec;
        case 0x1514f0u: goto label_1514f0;
        case 0x1514f4u: goto label_1514f4;
        case 0x1514f8u: goto label_1514f8;
        case 0x1514fcu: goto label_1514fc;
        case 0x151500u: goto label_151500;
        case 0x151504u: goto label_151504;
        case 0x151508u: goto label_151508;
        case 0x15150cu: goto label_15150c;
        case 0x151510u: goto label_151510;
        case 0x151514u: goto label_151514;
        case 0x151518u: goto label_151518;
        case 0x15151cu: goto label_15151c;
        case 0x151520u: goto label_151520;
        case 0x151524u: goto label_151524;
        case 0x151528u: goto label_151528;
        case 0x15152cu: goto label_15152c;
        case 0x151530u: goto label_151530;
        case 0x151534u: goto label_151534;
        case 0x151538u: goto label_151538;
        case 0x15153cu: goto label_15153c;
        case 0x151540u: goto label_151540;
        case 0x151544u: goto label_151544;
        case 0x151548u: goto label_151548;
        case 0x15154cu: goto label_15154c;
        case 0x151550u: goto label_151550;
        case 0x151554u: goto label_151554;
        case 0x151558u: goto label_151558;
        case 0x15155cu: goto label_15155c;
        case 0x151560u: goto label_151560;
        case 0x151564u: goto label_151564;
        case 0x151568u: goto label_151568;
        case 0x15156cu: goto label_15156c;
        case 0x151570u: goto label_151570;
        case 0x151574u: goto label_151574;
        case 0x151578u: goto label_151578;
        case 0x15157cu: goto label_15157c;
        case 0x151580u: goto label_151580;
        case 0x151584u: goto label_151584;
        case 0x151588u: goto label_151588;
        case 0x15158cu: goto label_15158c;
        case 0x151590u: goto label_151590;
        case 0x151594u: goto label_151594;
        case 0x151598u: goto label_151598;
        case 0x15159cu: goto label_15159c;
        case 0x1515a0u: goto label_1515a0;
        case 0x1515a4u: goto label_1515a4;
        case 0x1515a8u: goto label_1515a8;
        case 0x1515acu: goto label_1515ac;
        case 0x1515b0u: goto label_1515b0;
        case 0x1515b4u: goto label_1515b4;
        case 0x1515b8u: goto label_1515b8;
        case 0x1515bcu: goto label_1515bc;
        case 0x1515c0u: goto label_1515c0;
        case 0x1515c4u: goto label_1515c4;
        case 0x1515c8u: goto label_1515c8;
        case 0x1515ccu: goto label_1515cc;
        case 0x1515d0u: goto label_1515d0;
        case 0x1515d4u: goto label_1515d4;
        case 0x1515d8u: goto label_1515d8;
        case 0x1515dcu: goto label_1515dc;
        case 0x1515e0u: goto label_1515e0;
        case 0x1515e4u: goto label_1515e4;
        case 0x1515e8u: goto label_1515e8;
        case 0x1515ecu: goto label_1515ec;
        case 0x1515f0u: goto label_1515f0;
        case 0x1515f4u: goto label_1515f4;
        case 0x1515f8u: goto label_1515f8;
        case 0x1515fcu: goto label_1515fc;
        case 0x151600u: goto label_151600;
        case 0x151604u: goto label_151604;
        case 0x151608u: goto label_151608;
        case 0x15160cu: goto label_15160c;
        case 0x151610u: goto label_151610;
        case 0x151614u: goto label_151614;
        case 0x151618u: goto label_151618;
        case 0x15161cu: goto label_15161c;
        case 0x151620u: goto label_151620;
        case 0x151624u: goto label_151624;
        case 0x151628u: goto label_151628;
        case 0x15162cu: goto label_15162c;
        case 0x151630u: goto label_151630;
        case 0x151634u: goto label_151634;
        case 0x151638u: goto label_151638;
        case 0x15163cu: goto label_15163c;
        default: break;
    }

    ctx->pc = 0x1514a8u;

label_1514a8:
    // 0x1514a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1514a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1514ac:
    // 0x1514ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1514b0:
    // 0x1514b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1514b4:
    // 0x1514b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1514b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1514b8:
    // 0x1514b8: 0xa062c50c  sb          $v0, -0x3AF4($v1)
    ctx->pc = 0x1514b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294952204), (uint8_t)GPR_U32(ctx, 2));
label_1514bc:
    // 0x1514bc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1514c0:
    // 0x1514c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1514c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1514c4:
    // 0x1514c4: 0x249341b0  addiu       $s3, $a0, 0x41B0
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16816));
label_1514c8:
    // 0x1514c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1514c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1514cc:
    // 0x1514cc: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1514d0:
    // 0x1514d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1514d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1514d4:
    // 0x1514d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1514d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1514d8:
    // 0x1514d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1514d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1514dc:
    // 0x1514dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1514dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1514e0:
    // 0x1514e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1514e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1514e4:
    // 0x1514e4: 0xac8341b0  sw          $v1, 0x41B0($a0)
    ctx->pc = 0x1514e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16816), GPR_U32(ctx, 3));
label_1514e8:
    // 0x1514e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1514e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1514ec:
    // 0x1514ec: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1514ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1514f0:
    // 0x1514f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1514f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1514f4:
    // 0x1514f4: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1514f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_1514f8:
    // 0x1514f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1514f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1514fc:
    // 0x1514fc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1514fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_151500:
    // 0x151500: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_151504:
    // 0x151504: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x151504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_151508:
    // 0x151508: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15150c:
    // 0x15150c: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x15150cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_151510:
    // 0x151510: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x151510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_151514:
    // 0x151514: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x151514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_151518:
    // 0x151518: 0x8c8241b0  lw          $v0, 0x41B0($a0)
    ctx->pc = 0x151518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16816)));
label_15151c:
    // 0x15151c: 0x14460009  bne         $v0, $a2, . + 4 + (0x9 << 2)
label_151520:
    if (ctx->pc == 0x151520u) {
        ctx->pc = 0x151520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15151Cu;
        // 0x151520: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151524u;
        goto label_151524;
    }
    ctx->pc = 0x15151Cu;
    {
        const bool branch_taken_0x15151c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x151520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15151Cu;
        // 0x151520: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15151c) {
            ctx->pc = 0x151544u;
            goto label_151544;
        }
    }
    ctx->pc = 0x151524u;
label_151524:
    // 0x151524: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x151524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_151528:
    // 0x151528: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x151528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_15152c:
    // 0x15152c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_151530:
    // 0x151530: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_151534:
    // 0x151534: 0xc10f690  jal         func_43DA40
label_151538:
    if (ctx->pc == 0x151538u) {
        ctx->pc = 0x151538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151534u;
        // 0x151538: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15153Cu;
        goto label_15153c;
    }
    ctx->pc = 0x151534u;
    SET_GPR_U32(ctx, 31, 0x15153Cu);
    ctx->pc = 0x151538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151534u;
    // 0x151538: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DA40u, 0x151534u, 0x15153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15153Cu;
label_15153c:
    // 0x15153c: 0x10000031  b           . + 4 + (0x31 << 2)
label_151540:
    if (ctx->pc == 0x151540u) {
        ctx->pc = 0x151540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15153Cu;
        // 0x151540: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151544u;
        goto label_151544;
    }
    ctx->pc = 0x15153Cu;
    {
        const bool branch_taken_0x15153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15153Cu;
        // 0x151540: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15153c) {
            ctx->pc = 0x151604u;
            goto label_151604;
        }
    }
    ctx->pc = 0x151544u;
label_151544:
    // 0x151544: 0x8c43c504  lw          $v1, -0x3AFC($v0)
    ctx->pc = 0x151544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952196)));
label_151548:
    // 0x151548: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_15154c:
    if (ctx->pc == 0x15154Cu) {
        ctx->pc = 0x15154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151548u;
        // 0x15154c: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151550u;
        goto label_151550;
    }
    ctx->pc = 0x151548u;
    {
        const bool branch_taken_0x151548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151548u;
        // 0x15154c: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151548) {
            ctx->pc = 0x1515A8u;
            goto label_1515a8;
        }
    }
    ctx->pc = 0x151550u;
label_151550:
    // 0x151550: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_151554:
    // 0x151554: 0x26504240  addiu       $s0, $s2, 0x4240
    ctx->pc = 0x151554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16960));
label_151558:
    // 0x151558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15155c:
    // 0x15155c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15155cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_151560:
    // 0x151560: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x151560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_151564:
    // 0x151564: 0x60f809  jalr        $v1
label_151568:
    if (ctx->pc == 0x151568u) {
        ctx->pc = 0x151568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151564u;
        // 0x151568: 0xae22c508  sw          $v0, -0x3AF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15156Cu;
        goto label_15156c;
    }
    ctx->pc = 0x151564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15156Cu);
        ctx->pc = 0x151568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151564u;
        // 0x151568: 0xae22c508  sw          $v0, -0x3AF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151564u, 0x15156Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15156Cu;
label_15156c:
    // 0x15156c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x15156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_151570:
    // 0x151570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151574:
    // 0x151574: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x151574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_151578:
    // 0x151578: 0xae20c508  sw          $zero, -0x3AF8($s1)
    ctx->pc = 0x151578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952200), GPR_U32(ctx, 0));
label_15157c:
    // 0x15157c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15157cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_151580:
    // 0x151580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151584:
    // 0x151584: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x151584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_151588:
    // 0x151588: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_15158c:
    if (ctx->pc == 0x15158Cu) {
        ctx->pc = 0x15158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151588u;
        // 0x15158c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151590u;
        goto label_151590;
    }
    ctx->pc = 0x151588u;
    {
        const bool branch_taken_0x151588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151588u;
        // 0x15158c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151588) {
            ctx->pc = 0x15159Cu;
            goto label_15159c;
        }
    }
    ctx->pc = 0x151590u;
label_151590:
    // 0x151590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x151590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_151594:
    // 0x151594: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
label_151598:
    if (ctx->pc == 0x151598u) {
        ctx->pc = 0x151598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151594u;
        // 0x151598: 0x268441b0  addiu       $a0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15159Cu;
        goto label_15159c;
    }
    ctx->pc = 0x151594u;
    {
        const bool branch_taken_0x151594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x151594) {
            ctx->pc = 0x151598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151594u;
            // 0x151598: 0x268441b0  addiu       $a0, $s4, 0x41B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1515BCu;
            goto label_1515bc;
        }
    }
    ctx->pc = 0x15159Cu;
label_15159c:
    // 0x15159c: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x15159cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_1515a0:
    // 0x1515a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1515a4:
    if (ctx->pc == 0x1515A4u) {
        ctx->pc = 0x1515A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515A0u;
        // 0x1515a4: 0x268441b0  addiu       $a0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1515A8u;
        goto label_1515a8;
    }
    ctx->pc = 0x1515A0u;
    {
        const bool branch_taken_0x1515a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515A0u;
        // 0x1515a4: 0x268441b0  addiu       $a0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515a0) {
            ctx->pc = 0x1515BCu;
            goto label_1515bc;
        }
    }
    ctx->pc = 0x1515A8u;
label_1515a8:
    // 0x1515a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1515ac:
    // 0x1515ac: 0x24434240  addiu       $v1, $v0, 0x4240
    ctx->pc = 0x1515acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
label_1515b0:
    // 0x1515b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1515b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1515b4:
    // 0x1515b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1515b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1515b8:
    // 0x1515b8: 0x268441b0  addiu       $a0, $s4, 0x41B0
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
label_1515bc:
    // 0x1515bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1515c0:
    // 0x1515c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1515c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1515c4:
    // 0x1515c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1515c8:
    if (ctx->pc == 0x1515C8u) {
        ctx->pc = 0x1515C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515C4u;
        // 0x1515c8: 0x268241b0  addiu       $v0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1515CCu;
        goto label_1515cc;
    }
    ctx->pc = 0x1515C4u;
    {
        const bool branch_taken_0x1515c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515C4u;
        // 0x1515c8: 0x268241b0  addiu       $v0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515c4) {
            ctx->pc = 0x1515E8u;
            goto label_1515e8;
        }
    }
    ctx->pc = 0x1515CCu;
label_1515cc:
    // 0x1515cc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1515ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1515d0:
    // 0x1515d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1515d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1515d4:
    // 0x1515d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1515d8:
    if (ctx->pc == 0x1515D8u) {
        ctx->pc = 0x1515D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515D4u;
        // 0x1515d8: 0x268241b0  addiu       $v0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1515DCu;
        goto label_1515dc;
    }
    ctx->pc = 0x1515D4u;
    {
        const bool branch_taken_0x1515d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1515D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515D4u;
        // 0x1515d8: 0x268241b0  addiu       $v0, $s4, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515d4) {
            ctx->pc = 0x1515E8u;
            goto label_1515e8;
        }
    }
    ctx->pc = 0x1515DCu;
label_1515dc:
    // 0x1515dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1515dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1515e0:
    // 0x1515e0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1515e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1515e4:
    // 0x1515e4: 0x268241b0  addiu       $v0, $s4, 0x41B0
    ctx->pc = 0x1515e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16816));
label_1515e8:
    // 0x1515e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1515e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1515ec:
    // 0x1515ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1515ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1515f0:
    // 0x1515f0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1515f4:
    if (ctx->pc == 0x1515F4u) {
        ctx->pc = 0x1515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F0u;
        // 0x1515f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1515F8u;
        goto label_1515f8;
    }
    ctx->pc = 0x1515F0u;
    {
        const bool branch_taken_0x1515f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F0u;
        // 0x1515f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515f0) {
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1515F8u;
label_1515f8:
    // 0x1515f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1515fc:
    if (ctx->pc == 0x1515FCu) {
        ctx->pc = 0x1515FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F8u;
        // 0x1515fc: 0xae424240  sw          $v0, 0x4240($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151600u;
        goto label_151600;
    }
    ctx->pc = 0x1515F8u;
    {
        const bool branch_taken_0x1515f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F8u;
        // 0x1515fc: 0xae424240  sw          $v0, 0x4240($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515f8) {
            ctx->pc = 0x151604u;
            goto label_151604;
        }
    }
    ctx->pc = 0x151600u;
label_151600:
    // 0x151600: 0xae404240  sw          $zero, 0x4240($s2)
    ctx->pc = 0x151600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16960), GPR_U32(ctx, 0));
label_151604:
    // 0x151604: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_151608:
    // 0x151608: 0x24424240  addiu       $v0, $v0, 0x4240
    ctx->pc = 0x151608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
label_15160c:
    // 0x15160c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15160cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_151610:
    // 0x151610: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x151610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_151614:
    // 0x151614: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x151614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_151618:
    // 0x151618: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x151618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15161c:
    // 0x15161c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15161cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151620:
    // 0x151620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151624:
    // 0x151624: 0x3e00008  jr          $ra
label_151628:
    if (ctx->pc == 0x151628u) {
        ctx->pc = 0x151628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151624u;
        // 0x151628: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15162Cu;
        goto label_15162c;
    }
    ctx->pc = 0x151624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151624u;
        // 0x151628: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15162Cu;
label_15162c:
    // 0x15162c: 0x0  nop
    ctx->pc = 0x15162cu;
    // NOP
label_151630:
    // 0x151630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x151630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151634:
    // 0x151634: 0x0  nop
    ctx->pc = 0x151634u;
    // NOP
label_151638:
    // 0x151638: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x151638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15163c:
    // 0x15163c: 0x0  nop
    ctx->pc = 0x15163cu;
    // NOP
    ctx->pc = 0x151640u;
}
