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

// Function: sub_001F34E8
// Address: 0x1f34e8 - 0x1f35c8
void sub_001F34E8_0x1f34e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F34E8_0x1f34e8");
#endif

    switch (ctx->pc) {
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f4u: goto label_1f34f4;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f34fcu: goto label_1f34fc;
        case 0x1f3500u: goto label_1f3500;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f3508u: goto label_1f3508;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3510u: goto label_1f3510;
        case 0x1f3514u: goto label_1f3514;
        case 0x1f3518u: goto label_1f3518;
        case 0x1f351cu: goto label_1f351c;
        case 0x1f3520u: goto label_1f3520;
        case 0x1f3524u: goto label_1f3524;
        case 0x1f3528u: goto label_1f3528;
        case 0x1f352cu: goto label_1f352c;
        case 0x1f3530u: goto label_1f3530;
        case 0x1f3534u: goto label_1f3534;
        case 0x1f3538u: goto label_1f3538;
        case 0x1f353cu: goto label_1f353c;
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3544u: goto label_1f3544;
        case 0x1f3548u: goto label_1f3548;
        case 0x1f354cu: goto label_1f354c;
        case 0x1f3550u: goto label_1f3550;
        case 0x1f3554u: goto label_1f3554;
        case 0x1f3558u: goto label_1f3558;
        case 0x1f355cu: goto label_1f355c;
        case 0x1f3560u: goto label_1f3560;
        case 0x1f3564u: goto label_1f3564;
        case 0x1f3568u: goto label_1f3568;
        case 0x1f356cu: goto label_1f356c;
        case 0x1f3570u: goto label_1f3570;
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3578u: goto label_1f3578;
        case 0x1f357cu: goto label_1f357c;
        case 0x1f3580u: goto label_1f3580;
        case 0x1f3584u: goto label_1f3584;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f358cu: goto label_1f358c;
        case 0x1f3590u: goto label_1f3590;
        case 0x1f3594u: goto label_1f3594;
        case 0x1f3598u: goto label_1f3598;
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35a0u: goto label_1f35a0;
        case 0x1f35a4u: goto label_1f35a4;
        case 0x1f35a8u: goto label_1f35a8;
        case 0x1f35acu: goto label_1f35ac;
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35b4u: goto label_1f35b4;
        case 0x1f35b8u: goto label_1f35b8;
        case 0x1f35bcu: goto label_1f35bc;
        case 0x1f35c0u: goto label_1f35c0;
        case 0x1f35c4u: goto label_1f35c4;
        default: break;
    }

    ctx->pc = 0x1f34e8u;

label_1f34e8:
    // 0x1f34e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f34e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f34ec:
    // 0x1f34ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f34f0:
    // 0x1f34f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f34f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f34f4:
    // 0x1f34f4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f34f8:
    // 0x1f34f8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f34fc:
    // 0x1f34fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f34fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3500:
    // 0x1f3500: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f3500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f3504:
    // 0x1f3504: 0x2442d100  addiu       $v0, $v0, -0x2F00
    ctx->pc = 0x1f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
label_1f3508:
    // 0x1f3508: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f350c:
    // 0x1f350c: 0x2463d128  addiu       $v1, $v1, -0x2ED8
    ctx->pc = 0x1f350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955304));
label_1f3510:
    // 0x1f3510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f3514:
    // 0x1f3514: 0x24c6d158  addiu       $a2, $a2, -0x2EA8
    ctx->pc = 0x1f3514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955352));
label_1f3518:
    // 0x1f3518: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1f3518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1f351c:
    // 0x1f351c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f351cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3520:
    // 0x1f3520: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f3520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f3524:
    // 0x1f3524: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f3524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1f3528:
    // 0x1f3528: 0xc07d1f2  jal         func_1F47C8
label_1f352c:
    if (ctx->pc == 0x1F352Cu) {
        ctx->pc = 0x1F352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3528u;
        // 0x1f352c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3530u;
        goto label_1f3530;
    }
    ctx->pc = 0x1F3528u;
    SET_GPR_U32(ctx, 31, 0x1F3530u);
    ctx->pc = 0x1F352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3528u;
    // 0x1f352c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47C8u, 0x1F3528u, 0x1F3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3530u;
label_1f3530:
    // 0x1f3530: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f3530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f3534:
    // 0x1f3534: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1f3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1f3538:
    // 0x1f3538: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1f3538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1f353c:
    // 0x1f353c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f3540:
    // 0x1f3540: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f3544:
    if (ctx->pc == 0x1F3544u) {
        ctx->pc = 0x1F3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3540u;
        // 0x1f3544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3548u;
        goto label_1f3548;
    }
    ctx->pc = 0x1F3540u;
    {
        const bool branch_taken_0x1f3540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3540u;
        // 0x1f3544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3540) {
            ctx->pc = 0x1F3570u;
            goto label_1f3570;
        }
    }
    ctx->pc = 0x1F3548u;
label_1f3548:
    // 0x1f3548: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f354c:
    // 0x1f354c: 0xc1376d6  jal         func_4DDB58
label_1f3550:
    if (ctx->pc == 0x1F3550u) {
        ctx->pc = 0x1F3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F354Cu;
        // 0x1f3550: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3554u;
        goto label_1f3554;
    }
    ctx->pc = 0x1F354Cu;
    SET_GPR_U32(ctx, 31, 0x1F3554u);
    ctx->pc = 0x1F3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F354Cu;
    // 0x1f3550: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1F354Cu, 0x1F3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3554u;
label_1f3554:
    // 0x1f3554: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3558:
    // 0x1f3558: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f3558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f355c:
    // 0x1f355c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3560:
    // 0x1f3560: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f3560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f3564:
    // 0x1f3564: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3568:
    // 0x1f3568: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1f3568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1f356c:
    // 0x1f356c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f356cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f3570:
    // 0x1f3570: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f3570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3574:
    // 0x1f3574: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f3578:
    if (ctx->pc == 0x1F3578u) {
        ctx->pc = 0x1F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3574u;
        // 0x1f3578: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F357Cu;
        goto label_1f357c;
    }
    ctx->pc = 0x1F3574u;
    {
        const bool branch_taken_0x1f3574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3574u;
        // 0x1f3578: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3574) {
            ctx->pc = 0x1F35A0u;
            goto label_1f35a0;
        }
    }
    ctx->pc = 0x1F357Cu;
label_1f357c:
    // 0x1f357c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f357cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1f3580:
    // 0x1f3580: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f3584:
    // 0x1f3584: 0x24c67430  addiu       $a2, $a2, 0x7430
    ctx->pc = 0x1f3584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29744));
label_1f3588:
    // 0x1f3588: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1f358c:
    // 0x1f358c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f3590:
    // 0x1f3590: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1f3594:
    // 0x1f3594: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1f3594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f3598:
    // 0x1f3598: 0x60f809  jalr        $v1
label_1f359c:
    if (ctx->pc == 0x1F359Cu) {
        ctx->pc = 0x1F359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3598u;
        // 0x1f359c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35A0u;
        goto label_1f35a0;
    }
    ctx->pc = 0x1F3598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F35A0u);
        ctx->pc = 0x1F359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3598u;
        // 0x1f359c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3598u, 0x1F35A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F35A0u;
label_1f35a0:
    // 0x1f35a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f35a4:
    // 0x1f35a4: 0xc06a39e  jal         func_1A8E78
label_1f35a8:
    if (ctx->pc == 0x1F35A8u) {
        ctx->pc = 0x1F35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35A4u;
        // 0x1f35a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35ACu;
        goto label_1f35ac;
    }
    ctx->pc = 0x1F35A4u;
    SET_GPR_U32(ctx, 31, 0x1F35ACu);
    ctx->pc = 0x1F35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35A4u;
    // 0x1f35a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1F35A4u, 0x1F35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35ACu;
label_1f35ac:
    // 0x1f35ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f35acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f35b0:
    // 0x1f35b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f35b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f35b4:
    // 0x1f35b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f35b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f35b8:
    // 0x1f35b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f35b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f35bc:
    // 0x1f35bc: 0x3e00008  jr          $ra
label_1f35c0:
    if (ctx->pc == 0x1F35C0u) {
        ctx->pc = 0x1F35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35BCu;
        // 0x1f35c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35C4u;
        goto label_1f35c4;
    }
    ctx->pc = 0x1F35BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35BCu;
        // 0x1f35c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F35BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F35C4u;
label_1f35c4:
    // 0x1f35c4: 0x0  nop
    ctx->pc = 0x1f35c4u;
    // NOP
    ctx->pc = 0x1f35c8u;
}
