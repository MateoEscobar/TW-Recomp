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

// Function: sub_003C54B8
// Address: 0x3c54b8 - 0x3c55c8
void sub_003C54B8_0x3c54b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C54B8_0x3c54b8");
#endif

    switch (ctx->pc) {
        case 0x3c54b8u: goto label_3c54b8;
        case 0x3c54bcu: goto label_3c54bc;
        case 0x3c54c0u: goto label_3c54c0;
        case 0x3c54c4u: goto label_3c54c4;
        case 0x3c54c8u: goto label_3c54c8;
        case 0x3c54ccu: goto label_3c54cc;
        case 0x3c54d0u: goto label_3c54d0;
        case 0x3c54d4u: goto label_3c54d4;
        case 0x3c54d8u: goto label_3c54d8;
        case 0x3c54dcu: goto label_3c54dc;
        case 0x3c54e0u: goto label_3c54e0;
        case 0x3c54e4u: goto label_3c54e4;
        case 0x3c54e8u: goto label_3c54e8;
        case 0x3c54ecu: goto label_3c54ec;
        case 0x3c54f0u: goto label_3c54f0;
        case 0x3c54f4u: goto label_3c54f4;
        case 0x3c54f8u: goto label_3c54f8;
        case 0x3c54fcu: goto label_3c54fc;
        case 0x3c5500u: goto label_3c5500;
        case 0x3c5504u: goto label_3c5504;
        case 0x3c5508u: goto label_3c5508;
        case 0x3c550cu: goto label_3c550c;
        case 0x3c5510u: goto label_3c5510;
        case 0x3c5514u: goto label_3c5514;
        case 0x3c5518u: goto label_3c5518;
        case 0x3c551cu: goto label_3c551c;
        case 0x3c5520u: goto label_3c5520;
        case 0x3c5524u: goto label_3c5524;
        case 0x3c5528u: goto label_3c5528;
        case 0x3c552cu: goto label_3c552c;
        case 0x3c5530u: goto label_3c5530;
        case 0x3c5534u: goto label_3c5534;
        case 0x3c5538u: goto label_3c5538;
        case 0x3c553cu: goto label_3c553c;
        case 0x3c5540u: goto label_3c5540;
        case 0x3c5544u: goto label_3c5544;
        case 0x3c5548u: goto label_3c5548;
        case 0x3c554cu: goto label_3c554c;
        case 0x3c5550u: goto label_3c5550;
        case 0x3c5554u: goto label_3c5554;
        case 0x3c5558u: goto label_3c5558;
        case 0x3c555cu: goto label_3c555c;
        case 0x3c5560u: goto label_3c5560;
        case 0x3c5564u: goto label_3c5564;
        case 0x3c5568u: goto label_3c5568;
        case 0x3c556cu: goto label_3c556c;
        case 0x3c5570u: goto label_3c5570;
        case 0x3c5574u: goto label_3c5574;
        case 0x3c5578u: goto label_3c5578;
        case 0x3c557cu: goto label_3c557c;
        case 0x3c5580u: goto label_3c5580;
        case 0x3c5584u: goto label_3c5584;
        case 0x3c5588u: goto label_3c5588;
        case 0x3c558cu: goto label_3c558c;
        case 0x3c5590u: goto label_3c5590;
        case 0x3c5594u: goto label_3c5594;
        case 0x3c5598u: goto label_3c5598;
        case 0x3c559cu: goto label_3c559c;
        case 0x3c55a0u: goto label_3c55a0;
        case 0x3c55a4u: goto label_3c55a4;
        case 0x3c55a8u: goto label_3c55a8;
        case 0x3c55acu: goto label_3c55ac;
        case 0x3c55b0u: goto label_3c55b0;
        case 0x3c55b4u: goto label_3c55b4;
        case 0x3c55b8u: goto label_3c55b8;
        case 0x3c55bcu: goto label_3c55bc;
        case 0x3c55c0u: goto label_3c55c0;
        case 0x3c55c4u: goto label_3c55c4;
        default: break;
    }

    ctx->pc = 0x3c54b8u;

label_3c54b8:
    // 0x3c54b8: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3c54b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3c54bc:
    // 0x3c54bc: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3c54bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3c54c0:
    // 0x3c54c0: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3c54c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3c54c4:
    // 0x3c54c4: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3c54c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3c54c8:
    // 0x3c54c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c54c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c54cc:
    // 0x3c54cc: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3c54ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3c54d0:
    // 0x3c54d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c54d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c54d4:
    // 0x3c54d4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c54d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c54d8:
    // 0x3c54d8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c54dc:
    // 0x3c54dc: 0x40f809  jalr        $v0
label_3c54e0:
    if (ctx->pc == 0x3C54E0u) {
        ctx->pc = 0x3C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54DCu;
        // 0x3c54e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C54E4u;
        goto label_3c54e4;
    }
    ctx->pc = 0x3C54DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C54E4u);
        ctx->pc = 0x3C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54DCu;
        // 0x3c54e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C54DCu, 0x3C54E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C54E4u;
label_3c54e4:
    // 0x3c54e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c54e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c54e8:
    // 0x3c54e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c54ec:
    // 0x3c54ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c54f0:
    // 0x3c54f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3c54f4:
    if (ctx->pc == 0x3C54F4u) {
        ctx->pc = 0x3C54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54F0u;
        // 0x3c54f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C54F8u;
        goto label_3c54f8;
    }
    ctx->pc = 0x3C54F0u;
    {
        const bool branch_taken_0x3c54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54F0u;
        // 0x3c54f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c54f0) {
            ctx->pc = 0x3C5500u;
            goto label_3c5500;
        }
    }
    ctx->pc = 0x3C54F8u;
label_3c54f8:
    // 0x3c54f8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3c54fc:
    if (ctx->pc == 0x3C54FCu) {
        ctx->pc = 0x3C54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54F8u;
        // 0x3c54fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5500u;
        goto label_3c5500;
    }
    ctx->pc = 0x3C54F8u;
    {
        const bool branch_taken_0x3c54f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54F8u;
        // 0x3c54fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c54f8) {
            ctx->pc = 0x3C55ACu;
            goto label_3c55ac;
        }
    }
    ctx->pc = 0x3C5500u;
label_3c5500:
    // 0x3c5500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c5500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c5504:
    // 0x3c5504: 0x24422e58  addiu       $v0, $v0, 0x2E58
    ctx->pc = 0x3c5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11864));
label_3c5508:
    // 0x3c5508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c5508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c550c:
    // 0x3c550c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c5510:
    // 0x3c5510: 0xc0e858c  jal         func_3A1630
label_3c5514:
    if (ctx->pc == 0x3C5514u) {
        ctx->pc = 0x3C5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5510u;
        // 0x3c5514: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5518u;
        goto label_3c5518;
    }
    ctx->pc = 0x3C5510u;
    SET_GPR_U32(ctx, 31, 0x3C5518u);
    ctx->pc = 0x3C5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5510u;
    // 0x3c5514: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C5510u, 0x3C5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5518u;
label_3c5518:
    // 0x3c5518: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c551c:
    // 0x3c551c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c5520:
    // 0x3c5520: 0x24632e68  addiu       $v1, $v1, 0x2E68
    ctx->pc = 0x3c5520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11880));
label_3c5524:
    // 0x3c5524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5528:
    // 0x3c5528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c5528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c552c:
    // 0x3c552c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c5530:
    // 0x3c5530: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3c5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5534:
    // 0x3c5534: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3c5534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c5538:
    // 0x3c5538: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c553c:
    // 0x3c553c: 0x54440011  bnel        $v0, $a0, . + 4 + (0x11 << 2)
label_3c5540:
    if (ctx->pc == 0x3C5540u) {
        ctx->pc = 0x3C5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C553Cu;
        // 0x3c5540: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5544u;
        goto label_3c5544;
    }
    ctx->pc = 0x3C553Cu;
    {
        const bool branch_taken_0x3c553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c553c) {
            ctx->pc = 0x3C5540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C553Cu;
            // 0x3c5540: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5584u;
            goto label_3c5584;
        }
    }
    ctx->pc = 0x3C5544u;
label_3c5544:
    // 0x3c5544: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3c5544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3c5548:
    // 0x3c5548: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c5548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c554c:
    // 0x3c554c: 0x26102e60  addiu       $s0, $s0, 0x2E60
    ctx->pc = 0x3c554cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11872));
label_3c5550:
    // 0x3c5550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c5550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c5554:
    // 0x3c5554: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c5558:
    // 0x3c5558: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3c5558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c555c:
    // 0x3c555c: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3c555cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c5560:
    // 0x3c5560: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3c5560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c5564:
    // 0x3c5564: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c5564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c5568:
    // 0x3c5568: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3c5568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3c556c:
    // 0x3c556c: 0xc0e9fa6  jal         func_3A7E98
label_3c5570:
    if (ctx->pc == 0x3C5570u) {
        ctx->pc = 0x3C5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C556Cu;
        // 0x3c5570: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5574u;
        goto label_3c5574;
    }
    ctx->pc = 0x3C556Cu;
    SET_GPR_U32(ctx, 31, 0x3C5574u);
    ctx->pc = 0x3C5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C556Cu;
    // 0x3c5570: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C556Cu, 0x3C5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5574u;
label_3c5574:
    // 0x3c5574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5578:
    // 0x3c5578: 0xc0f15bc  jal         func_3C56F0
label_3c557c:
    if (ctx->pc == 0x3C557Cu) {
        ctx->pc = 0x3C557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5578u;
        // 0x3c557c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5580u;
        goto label_3c5580;
    }
    ctx->pc = 0x3C5578u;
    SET_GPR_U32(ctx, 31, 0x3C5580u);
    ctx->pc = 0x3C557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5578u;
    // 0x3c557c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C5578u, 0x3C5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5580u;
label_3c5580:
    // 0x3c5580: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c5584:
    // 0x3c5584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c5588:
    // 0x3c5588: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3c558c:
    if (ctx->pc == 0x3C558Cu) {
        ctx->pc = 0x3C558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5588u;
        // 0x3c558c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5590u;
        goto label_3c5590;
    }
    ctx->pc = 0x3C5588u;
    {
        const bool branch_taken_0x3c5588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c5588) {
            ctx->pc = 0x3C558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5588u;
            // 0x3c558c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C55A0u;
            goto label_3c55a0;
        }
    }
    ctx->pc = 0x3C5590u;
label_3c5590:
    // 0x3c5590: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c5590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c5594:
    // 0x3c5594: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3c5594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3c5598:
    // 0x3c5598: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3c5598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3c559c:
    // 0x3c559c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c55a0:
    // 0x3c55a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c55a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c55a4:
    // 0x3c55a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c55a8:
    // 0x3c55a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3c55ac:
    // 0x3c55ac: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3c55acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c55b0:
    // 0x3c55b0: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3c55b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c55b4:
    // 0x3c55b4: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3c55b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c55b8:
    // 0x3c55b8: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3c55b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c55bc:
    // 0x3c55bc: 0x3e00008  jr          $ra
label_3c55c0:
    if (ctx->pc == 0x3C55C0u) {
        ctx->pc = 0x3C55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55BCu;
        // 0x3c55c0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C55C4u;
        goto label_3c55c4;
    }
    ctx->pc = 0x3C55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55BCu;
        // 0x3c55c0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C55C4u;
label_3c55c4:
    // 0x3c55c4: 0x0  nop
    ctx->pc = 0x3c55c4u;
    // NOP
    ctx->pc = 0x3c55c8u;
}
