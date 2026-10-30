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

// Function: sub_004E3508
// Address: 0x4e3508 - 0x4e36a8
void sub_004E3508_0x4e3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3508_0x4e3508");
#endif

    switch (ctx->pc) {
        case 0x4e3508u: goto label_4e3508;
        case 0x4e350cu: goto label_4e350c;
        case 0x4e3510u: goto label_4e3510;
        case 0x4e3514u: goto label_4e3514;
        case 0x4e3518u: goto label_4e3518;
        case 0x4e351cu: goto label_4e351c;
        case 0x4e3520u: goto label_4e3520;
        case 0x4e3524u: goto label_4e3524;
        case 0x4e3528u: goto label_4e3528;
        case 0x4e352cu: goto label_4e352c;
        case 0x4e3530u: goto label_4e3530;
        case 0x4e3534u: goto label_4e3534;
        case 0x4e3538u: goto label_4e3538;
        case 0x4e353cu: goto label_4e353c;
        case 0x4e3540u: goto label_4e3540;
        case 0x4e3544u: goto label_4e3544;
        case 0x4e3548u: goto label_4e3548;
        case 0x4e354cu: goto label_4e354c;
        case 0x4e3550u: goto label_4e3550;
        case 0x4e3554u: goto label_4e3554;
        case 0x4e3558u: goto label_4e3558;
        case 0x4e355cu: goto label_4e355c;
        case 0x4e3560u: goto label_4e3560;
        case 0x4e3564u: goto label_4e3564;
        case 0x4e3568u: goto label_4e3568;
        case 0x4e356cu: goto label_4e356c;
        case 0x4e3570u: goto label_4e3570;
        case 0x4e3574u: goto label_4e3574;
        case 0x4e3578u: goto label_4e3578;
        case 0x4e357cu: goto label_4e357c;
        case 0x4e3580u: goto label_4e3580;
        case 0x4e3584u: goto label_4e3584;
        case 0x4e3588u: goto label_4e3588;
        case 0x4e358cu: goto label_4e358c;
        case 0x4e3590u: goto label_4e3590;
        case 0x4e3594u: goto label_4e3594;
        case 0x4e3598u: goto label_4e3598;
        case 0x4e359cu: goto label_4e359c;
        case 0x4e35a0u: goto label_4e35a0;
        case 0x4e35a4u: goto label_4e35a4;
        case 0x4e35a8u: goto label_4e35a8;
        case 0x4e35acu: goto label_4e35ac;
        case 0x4e35b0u: goto label_4e35b0;
        case 0x4e35b4u: goto label_4e35b4;
        case 0x4e35b8u: goto label_4e35b8;
        case 0x4e35bcu: goto label_4e35bc;
        case 0x4e35c0u: goto label_4e35c0;
        case 0x4e35c4u: goto label_4e35c4;
        case 0x4e35c8u: goto label_4e35c8;
        case 0x4e35ccu: goto label_4e35cc;
        case 0x4e35d0u: goto label_4e35d0;
        case 0x4e35d4u: goto label_4e35d4;
        case 0x4e35d8u: goto label_4e35d8;
        case 0x4e35dcu: goto label_4e35dc;
        case 0x4e35e0u: goto label_4e35e0;
        case 0x4e35e4u: goto label_4e35e4;
        case 0x4e35e8u: goto label_4e35e8;
        case 0x4e35ecu: goto label_4e35ec;
        case 0x4e35f0u: goto label_4e35f0;
        case 0x4e35f4u: goto label_4e35f4;
        case 0x4e35f8u: goto label_4e35f8;
        case 0x4e35fcu: goto label_4e35fc;
        case 0x4e3600u: goto label_4e3600;
        case 0x4e3604u: goto label_4e3604;
        case 0x4e3608u: goto label_4e3608;
        case 0x4e360cu: goto label_4e360c;
        case 0x4e3610u: goto label_4e3610;
        case 0x4e3614u: goto label_4e3614;
        case 0x4e3618u: goto label_4e3618;
        case 0x4e361cu: goto label_4e361c;
        case 0x4e3620u: goto label_4e3620;
        case 0x4e3624u: goto label_4e3624;
        case 0x4e3628u: goto label_4e3628;
        case 0x4e362cu: goto label_4e362c;
        case 0x4e3630u: goto label_4e3630;
        case 0x4e3634u: goto label_4e3634;
        case 0x4e3638u: goto label_4e3638;
        case 0x4e363cu: goto label_4e363c;
        case 0x4e3640u: goto label_4e3640;
        case 0x4e3644u: goto label_4e3644;
        case 0x4e3648u: goto label_4e3648;
        case 0x4e364cu: goto label_4e364c;
        case 0x4e3650u: goto label_4e3650;
        case 0x4e3654u: goto label_4e3654;
        case 0x4e3658u: goto label_4e3658;
        case 0x4e365cu: goto label_4e365c;
        case 0x4e3660u: goto label_4e3660;
        case 0x4e3664u: goto label_4e3664;
        case 0x4e3668u: goto label_4e3668;
        case 0x4e366cu: goto label_4e366c;
        case 0x4e3670u: goto label_4e3670;
        case 0x4e3674u: goto label_4e3674;
        case 0x4e3678u: goto label_4e3678;
        case 0x4e367cu: goto label_4e367c;
        case 0x4e3680u: goto label_4e3680;
        case 0x4e3684u: goto label_4e3684;
        case 0x4e3688u: goto label_4e3688;
        case 0x4e368cu: goto label_4e368c;
        case 0x4e3690u: goto label_4e3690;
        case 0x4e3694u: goto label_4e3694;
        case 0x4e3698u: goto label_4e3698;
        case 0x4e369cu: goto label_4e369c;
        case 0x4e36a0u: goto label_4e36a0;
        case 0x4e36a4u: goto label_4e36a4;
        default: break;
    }

    ctx->pc = 0x4e3508u;

label_4e3508:
    // 0x4e3508: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e350c:
    // 0x4e350c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e3510:
    // 0x4e3510: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e3514:
    // 0x4e3514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e3514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3518:
    // 0x4e3518: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e3518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e351c:
    // 0x4e351c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e351cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3520:
    // 0x4e3520: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e3520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e3524:
    // 0x4e3524: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e3524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e3528:
    // 0x4e3528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e3528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e352c:
    // 0x4e352c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e3530:
    // 0x4e3530: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e3530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e3534:
    // 0x4e3534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3538:
    // 0x4e3538: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e3538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e353c:
    // 0x4e353c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e3540:
    // 0x4e3540: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e3544:
    if (ctx->pc == 0x4E3544u) {
        ctx->pc = 0x4E3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3540u;
        // 0x4e3544: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3548u;
        goto label_4e3548;
    }
    ctx->pc = 0x4E3540u;
    {
        const bool branch_taken_0x4e3540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3540u;
        // 0x4e3544: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3540) {
            ctx->pc = 0x4E358Cu;
            goto label_4e358c;
        }
    }
    ctx->pc = 0x4E3548u;
label_4e3548:
    // 0x4e3548: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e354c:
    if (ctx->pc == 0x4E354Cu) {
        ctx->pc = 0x4E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3548u;
        // 0x4e354c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3550u;
        goto label_4e3550;
    }
    ctx->pc = 0x4E3548u;
    {
        const bool branch_taken_0x4e3548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3548) {
            ctx->pc = 0x4E354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3548u;
            // 0x4e354c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E355Cu;
            goto label_4e355c;
        }
    }
    ctx->pc = 0x4E3550u;
label_4e3550:
    // 0x4e3550: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e3554:
    // 0x4e3554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e3554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e3558:
    // 0x4e3558: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e3558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e355c:
    // 0x4e355c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e3560:
    // 0x4e3560: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e3560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e3564:
    // 0x4e3564: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e3564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e3568:
    // 0x4e3568: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e3568u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e356c:
    // 0x4e356c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e356cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e3570:
    // 0x4e3570: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3570u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e3574:
    // 0x4e3574: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e3574u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e3578:
    // 0x4e3578: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e3578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e357c:
    // 0x4e357c: 0xc10c1bb  jal         func_4306EC
label_4e3580:
    if (ctx->pc == 0x4E3580u) {
        ctx->pc = 0x4E3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E357Cu;
        // 0x4e3580: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3584u;
        goto label_4e3584;
    }
    ctx->pc = 0x4E357Cu;
    SET_GPR_U32(ctx, 31, 0x4E3584u);
    ctx->pc = 0x4E3580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E357Cu;
    // 0x4e3580: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E357Cu, 0x4E3584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3584u;
label_4e3584:
    // 0x4e3584: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e3588:
    if (ctx->pc == 0x4E3588u) {
        ctx->pc = 0x4E3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3584u;
        // 0x4e3588: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E358Cu;
        goto label_4e358c;
    }
    ctx->pc = 0x4E3584u;
    {
        const bool branch_taken_0x4e3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3584u;
        // 0x4e3588: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3584) {
            ctx->pc = 0x4E367Cu;
            goto label_4e367c;
        }
    }
    ctx->pc = 0x4E358Cu;
label_4e358c:
    // 0x4e358c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3590:
    // 0x4e3590: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e3590u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e3594:
    // 0x4e3594: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e3594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e3598:
    // 0x4e3598: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e3598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e359c:
    // 0x4e359c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e35a0:
    // 0x4e35a0: 0x24962c10  addiu       $s6, $a0, 0x2C10
    ctx->pc = 0x4e35a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
label_4e35a4:
    // 0x4e35a4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e35a8:
    // 0x4e35a8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e35a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e35ac:
    // 0x4e35ac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e35acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e35b0:
    // 0x4e35b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e35b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e35b4:
    // 0x4e35b4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e35b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e35b8:
    // 0x4e35b8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e35b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e35bc:
    // 0x4e35bc: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e35bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e35c0:
    // 0x4e35c0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e35c4:
    // 0x4e35c4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e35c8:
    // 0x4e35c8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e35cc:
    // 0x4e35cc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e35ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e35d0:
    // 0x4e35d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e35d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e35d4:
    // 0x4e35d4: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e35d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e35d8:
    // 0x4e35d8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e35d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e35dc:
    // 0x4e35dc: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e35dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e35e0:
    // 0x4e35e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e35e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e35e4:
    // 0x4e35e4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e35e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e35e8:
    // 0x4e35e8: 0x40f809  jalr        $v0
label_4e35ec:
    if (ctx->pc == 0x4E35ECu) {
        ctx->pc = 0x4E35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35E8u;
        // 0x4e35ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E35F0u;
        goto label_4e35f0;
    }
    ctx->pc = 0x4E35E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E35F0u);
        ctx->pc = 0x4E35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E35E8u;
        // 0x4e35ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E35E8u, 0x4E35F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E35F0u;
label_4e35f0:
    // 0x4e35f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e35f4:
    // 0x4e35f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e35f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e35f8:
    // 0x4e35f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e35f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e35fc:
    // 0x4e35fc: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e3600:
    // 0x4e3600: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e3600u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e3604:
    // 0x4e3604: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e3604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e3608:
    // 0x4e3608: 0xc10c1bb  jal         func_4306EC
label_4e360c:
    if (ctx->pc == 0x4E360Cu) {
        ctx->pc = 0x4E360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3608u;
        // 0x4e360c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3610u;
        goto label_4e3610;
    }
    ctx->pc = 0x4E3608u;
    SET_GPR_U32(ctx, 31, 0x4E3610u);
    ctx->pc = 0x4E360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3608u;
    // 0x4e360c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3608u, 0x4E3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3610u;
label_4e3610:
    // 0x4e3610: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e3614:
    if (ctx->pc == 0x4E3614u) {
        ctx->pc = 0x4E3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3610u;
        // 0x4e3614: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3618u;
        goto label_4e3618;
    }
    ctx->pc = 0x4E3610u;
    {
        const bool branch_taken_0x4e3610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3610) {
            ctx->pc = 0x4E3614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3610u;
            // 0x4e3614: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3624u;
            goto label_4e3624;
        }
    }
    ctx->pc = 0x4E3618u;
label_4e3618:
    // 0x4e3618: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e361c:
    // 0x4e361c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e3620:
    // 0x4e3620: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e3620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e3624:
    // 0x4e3624: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e3624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e3628:
    // 0x4e3628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e362c:
    // 0x4e362c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e3630:
    // 0x4e3630: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e3630u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e3634:
    // 0x4e3634: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e3634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e3638:
    // 0x4e3638: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3638u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e363c:
    // 0x4e363c: 0xc10c1bb  jal         func_4306EC
label_4e3640:
    if (ctx->pc == 0x4E3640u) {
        ctx->pc = 0x4E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E363Cu;
        // 0x4e3640: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3644u;
        goto label_4e3644;
    }
    ctx->pc = 0x4E363Cu;
    SET_GPR_U32(ctx, 31, 0x4E3644u);
    ctx->pc = 0x4E3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E363Cu;
    // 0x4e3640: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E363Cu, 0x4E3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3644u;
label_4e3644:
    // 0x4e3644: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e3644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3648:
    // 0x4e3648: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e364c:
    if (ctx->pc == 0x4E364Cu) {
        ctx->pc = 0x4E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3648u;
        // 0x4e364c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3650u;
        goto label_4e3650;
    }
    ctx->pc = 0x4E3648u;
    {
        const bool branch_taken_0x4e3648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3648u;
        // 0x4e364c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3648) {
            ctx->pc = 0x4E366Cu;
            goto label_4e366c;
        }
    }
    ctx->pc = 0x4E3650u;
label_4e3650:
    // 0x4e3650: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e3650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e3654:
    // 0x4e3654: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e3654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e3658:
    // 0x4e3658: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e365c:
    // 0x4e365c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e365cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3660:
    // 0x4e3660: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3664:
    // 0x4e3664: 0x60f809  jalr        $v1
label_4e3668:
    if (ctx->pc == 0x4E3668u) {
        ctx->pc = 0x4E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3664u;
        // 0x4e3668: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E366Cu;
        goto label_4e366c;
    }
    ctx->pc = 0x4E3664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E366Cu);
        ctx->pc = 0x4E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3664u;
        // 0x4e3668: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3664u, 0x4E366Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E366Cu;
label_4e366c:
    // 0x4e366c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e3670:
    // 0x4e3670: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e3670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e3674:
    // 0x4e3674: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e3674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e3678:
    // 0x4e3678: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e3678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e367c:
    // 0x4e367c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e367cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e3680:
    // 0x4e3680: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e3680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e3684:
    // 0x4e3684: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e3684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e3688:
    // 0x4e3688: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e3688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e368c:
    // 0x4e368c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e368cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e3690:
    // 0x4e3690: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e3690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3694:
    // 0x4e3694: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e3694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3698:
    // 0x4e3698: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e3698u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e369c:
    // 0x4e369c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e36a0:
    // 0x4e36a0: 0x3e00008  jr          $ra
label_4e36a4:
    if (ctx->pc == 0x4E36A4u) {
        ctx->pc = 0x4E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36A0u;
        // 0x4e36a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36A8u;
        goto label_fallthrough_0x4e36a0;
    }
    ctx->pc = 0x4E36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36A0u;
        // 0x4e36a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e36a0:
    ctx->pc = 0x4E36A8u;
}
