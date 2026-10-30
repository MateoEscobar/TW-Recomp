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

// Function: sub_001FC488
// Address: 0x1fc488 - 0x1fc568
void sub_001FC488_0x1fc488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC488_0x1fc488");
#endif

    switch (ctx->pc) {
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc48cu: goto label_1fc48c;
        case 0x1fc490u: goto label_1fc490;
        case 0x1fc494u: goto label_1fc494;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc49cu: goto label_1fc49c;
        case 0x1fc4a0u: goto label_1fc4a0;
        case 0x1fc4a4u: goto label_1fc4a4;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4acu: goto label_1fc4ac;
        case 0x1fc4b0u: goto label_1fc4b0;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4b8u: goto label_1fc4b8;
        case 0x1fc4bcu: goto label_1fc4bc;
        case 0x1fc4c0u: goto label_1fc4c0;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4c8u: goto label_1fc4c8;
        case 0x1fc4ccu: goto label_1fc4cc;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4d4u: goto label_1fc4d4;
        case 0x1fc4d8u: goto label_1fc4d8;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4e0u: goto label_1fc4e0;
        case 0x1fc4e4u: goto label_1fc4e4;
        case 0x1fc4e8u: goto label_1fc4e8;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4f0u: goto label_1fc4f0;
        case 0x1fc4f4u: goto label_1fc4f4;
        case 0x1fc4f8u: goto label_1fc4f8;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc500u: goto label_1fc500;
        case 0x1fc504u: goto label_1fc504;
        case 0x1fc508u: goto label_1fc508;
        case 0x1fc50cu: goto label_1fc50c;
        case 0x1fc510u: goto label_1fc510;
        case 0x1fc514u: goto label_1fc514;
        case 0x1fc518u: goto label_1fc518;
        case 0x1fc51cu: goto label_1fc51c;
        case 0x1fc520u: goto label_1fc520;
        case 0x1fc524u: goto label_1fc524;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc52cu: goto label_1fc52c;
        case 0x1fc530u: goto label_1fc530;
        case 0x1fc534u: goto label_1fc534;
        case 0x1fc538u: goto label_1fc538;
        case 0x1fc53cu: goto label_1fc53c;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc544u: goto label_1fc544;
        case 0x1fc548u: goto label_1fc548;
        case 0x1fc54cu: goto label_1fc54c;
        case 0x1fc550u: goto label_1fc550;
        case 0x1fc554u: goto label_1fc554;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc55cu: goto label_1fc55c;
        case 0x1fc560u: goto label_1fc560;
        case 0x1fc564u: goto label_1fc564;
        default: break;
    }

    ctx->pc = 0x1fc488u;

label_1fc488:
    // 0x1fc488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fc48c:
    // 0x1fc48c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc490:
    // 0x1fc490: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fc494:
    // 0x1fc494: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc498:
    // 0x1fc498: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fc49c:
    // 0x1fc49c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc4a0:
    // 0x1fc4a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fc4a4:
    // 0x1fc4a4: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
label_1fc4a8:
    // 0x1fc4a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fc4ac:
    // 0x1fc4ac: 0x2463d710  addiu       $v1, $v1, -0x28F0
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956816));
label_1fc4b0:
    // 0x1fc4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc4b4:
    // 0x1fc4b4: 0x24c6d740  addiu       $a2, $a2, -0x28C0
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956864));
label_1fc4b8:
    // 0x1fc4b8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1fc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1fc4bc:
    // 0x1fc4bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc4c0:
    // 0x1fc4c0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1fc4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1fc4c4:
    // 0x1fc4c4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1fc4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1fc4c8:
    // 0x1fc4c8: 0xc07f3fe  jal         func_1FCFF8
label_1fc4cc:
    if (ctx->pc == 0x1FC4CCu) {
        ctx->pc = 0x1FC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4C8u;
        // 0x1fc4cc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC4D0u;
        goto label_1fc4d0;
    }
    ctx->pc = 0x1FC4C8u;
    SET_GPR_U32(ctx, 31, 0x1FC4D0u);
    ctx->pc = 0x1FC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4C8u;
    // 0x1fc4cc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCFF8u, 0x1FC4C8u, 0x1FC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4D0u;
label_1fc4d0:
    // 0x1fc4d0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc4d4:
    // 0x1fc4d4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1fc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1fc4d8:
    // 0x1fc4d8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1fc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1fc4dc:
    // 0x1fc4dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fc4e0:
    // 0x1fc4e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fc4e4:
    if (ctx->pc == 0x1FC4E4u) {
        ctx->pc = 0x1FC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E0u;
        // 0x1fc4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC4E8u;
        goto label_1fc4e8;
    }
    ctx->pc = 0x1FC4E0u;
    {
        const bool branch_taken_0x1fc4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E0u;
        // 0x1fc4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4e0) {
            ctx->pc = 0x1FC510u;
            goto label_1fc510;
        }
    }
    ctx->pc = 0x1FC4E8u;
label_1fc4e8:
    // 0x1fc4e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc4ec:
    // 0x1fc4ec: 0xc1376d6  jal         func_4DDB58
label_1fc4f0:
    if (ctx->pc == 0x1FC4F0u) {
        ctx->pc = 0x1FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4ECu;
        // 0x1fc4f0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC4F4u;
        goto label_1fc4f4;
    }
    ctx->pc = 0x1FC4ECu;
    SET_GPR_U32(ctx, 31, 0x1FC4F4u);
    ctx->pc = 0x1FC4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4ECu;
    // 0x1fc4f0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1FC4ECu, 0x1FC4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4F4u;
label_1fc4f4:
    // 0x1fc4f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc4f8:
    // 0x1fc4f8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1fc4fc:
    // 0x1fc4fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc500:
    // 0x1fc500: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fc500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fc504:
    // 0x1fc504: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc508:
    // 0x1fc508: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fc508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1fc50c:
    // 0x1fc50c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fc510:
    // 0x1fc510: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fc510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc514:
    // 0x1fc514: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1fc518:
    if (ctx->pc == 0x1FC518u) {
        ctx->pc = 0x1FC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC514u;
        // 0x1fc518: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC51Cu;
        goto label_1fc51c;
    }
    ctx->pc = 0x1FC514u;
    {
        const bool branch_taken_0x1fc514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC514u;
        // 0x1fc518: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc514) {
            ctx->pc = 0x1FC540u;
            goto label_1fc540;
        }
    }
    ctx->pc = 0x1FC51Cu;
label_1fc51c:
    // 0x1fc51c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1fc51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1fc520:
    // 0x1fc520: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fc524:
    // 0x1fc524: 0x24c67f20  addiu       $a2, $a2, 0x7F20
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32544));
label_1fc528:
    // 0x1fc528: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1fc52c:
    // 0x1fc52c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc530:
    // 0x1fc530: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1fc534:
    // 0x1fc534: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1fc534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1fc538:
    // 0x1fc538: 0x60f809  jalr        $v1
label_1fc53c:
    if (ctx->pc == 0x1FC53Cu) {
        ctx->pc = 0x1FC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC538u;
        // 0x1fc53c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC540u;
        goto label_1fc540;
    }
    ctx->pc = 0x1FC538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC540u);
        ctx->pc = 0x1FC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC538u;
        // 0x1fc53c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC538u, 0x1FC540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC540u;
label_1fc540:
    // 0x1fc540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc544:
    // 0x1fc544: 0xc06a39e  jal         func_1A8E78
label_1fc548:
    if (ctx->pc == 0x1FC548u) {
        ctx->pc = 0x1FC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC544u;
        // 0x1fc548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC54Cu;
        goto label_1fc54c;
    }
    ctx->pc = 0x1FC544u;
    SET_GPR_U32(ctx, 31, 0x1FC54Cu);
    ctx->pc = 0x1FC548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC544u;
    // 0x1fc548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1FC544u, 0x1FC54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC54Cu;
label_1fc54c:
    // 0x1fc54c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fc54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc550:
    // 0x1fc550: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fc550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc554:
    // 0x1fc554: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fc554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc558:
    // 0x1fc558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc55c:
    // 0x1fc55c: 0x3e00008  jr          $ra
label_1fc560:
    if (ctx->pc == 0x1FC560u) {
        ctx->pc = 0x1FC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC55Cu;
        // 0x1fc560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC564u;
        goto label_1fc564;
    }
    ctx->pc = 0x1FC55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC55Cu;
        // 0x1fc560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC564u;
label_1fc564:
    // 0x1fc564: 0x0  nop
    ctx->pc = 0x1fc564u;
    // NOP
    ctx->pc = 0x1fc568u;
}
