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

// Function: sub_0032A478
// Address: 0x32a478 - 0x32a578
void sub_0032A478_0x32a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A478_0x32a478");
#endif

    switch (ctx->pc) {
        case 0x32a478u: goto label_32a478;
        case 0x32a47cu: goto label_32a47c;
        case 0x32a480u: goto label_32a480;
        case 0x32a484u: goto label_32a484;
        case 0x32a488u: goto label_32a488;
        case 0x32a48cu: goto label_32a48c;
        case 0x32a490u: goto label_32a490;
        case 0x32a494u: goto label_32a494;
        case 0x32a498u: goto label_32a498;
        case 0x32a49cu: goto label_32a49c;
        case 0x32a4a0u: goto label_32a4a0;
        case 0x32a4a4u: goto label_32a4a4;
        case 0x32a4a8u: goto label_32a4a8;
        case 0x32a4acu: goto label_32a4ac;
        case 0x32a4b0u: goto label_32a4b0;
        case 0x32a4b4u: goto label_32a4b4;
        case 0x32a4b8u: goto label_32a4b8;
        case 0x32a4bcu: goto label_32a4bc;
        case 0x32a4c0u: goto label_32a4c0;
        case 0x32a4c4u: goto label_32a4c4;
        case 0x32a4c8u: goto label_32a4c8;
        case 0x32a4ccu: goto label_32a4cc;
        case 0x32a4d0u: goto label_32a4d0;
        case 0x32a4d4u: goto label_32a4d4;
        case 0x32a4d8u: goto label_32a4d8;
        case 0x32a4dcu: goto label_32a4dc;
        case 0x32a4e0u: goto label_32a4e0;
        case 0x32a4e4u: goto label_32a4e4;
        case 0x32a4e8u: goto label_32a4e8;
        case 0x32a4ecu: goto label_32a4ec;
        case 0x32a4f0u: goto label_32a4f0;
        case 0x32a4f4u: goto label_32a4f4;
        case 0x32a4f8u: goto label_32a4f8;
        case 0x32a4fcu: goto label_32a4fc;
        case 0x32a500u: goto label_32a500;
        case 0x32a504u: goto label_32a504;
        case 0x32a508u: goto label_32a508;
        case 0x32a50cu: goto label_32a50c;
        case 0x32a510u: goto label_32a510;
        case 0x32a514u: goto label_32a514;
        case 0x32a518u: goto label_32a518;
        case 0x32a51cu: goto label_32a51c;
        case 0x32a520u: goto label_32a520;
        case 0x32a524u: goto label_32a524;
        case 0x32a528u: goto label_32a528;
        case 0x32a52cu: goto label_32a52c;
        case 0x32a530u: goto label_32a530;
        case 0x32a534u: goto label_32a534;
        case 0x32a538u: goto label_32a538;
        case 0x32a53cu: goto label_32a53c;
        case 0x32a540u: goto label_32a540;
        case 0x32a544u: goto label_32a544;
        case 0x32a548u: goto label_32a548;
        case 0x32a54cu: goto label_32a54c;
        case 0x32a550u: goto label_32a550;
        case 0x32a554u: goto label_32a554;
        case 0x32a558u: goto label_32a558;
        case 0x32a55cu: goto label_32a55c;
        case 0x32a560u: goto label_32a560;
        case 0x32a564u: goto label_32a564;
        case 0x32a568u: goto label_32a568;
        case 0x32a56cu: goto label_32a56c;
        case 0x32a570u: goto label_32a570;
        case 0x32a574u: goto label_32a574;
        default: break;
    }

    ctx->pc = 0x32a478u;

label_32a478:
    // 0x32a478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32a478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32a47c:
    // 0x32a47c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a480:
    // 0x32a480: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_32a484:
    // 0x32a484: 0x2402011c  addiu       $v0, $zero, 0x11C
    ctx->pc = 0x32a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_32a488:
    // 0x32a488: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32a48c:
    // 0x32a48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32a48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a490:
    // 0x32a490: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_32a494:
    // 0x32a494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32a498:
    // 0x32a498: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x32a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_32a49c:
    // 0x32a49c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x32a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_32a4a0:
    // 0x32a4a0: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x32a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_32a4a4:
    // 0x32a4a4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x32a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_32a4a8:
    // 0x32a4a8: 0xae07003c  sw          $a3, 0x3C($s0)
    ctx->pc = 0x32a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 7));
label_32a4ac:
    // 0x32a4ac: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x32a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
label_32a4b0:
    // 0x32a4b0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x32a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_32a4b4:
    // 0x32a4b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32a4b8:
    // 0x32a4b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32a4b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a4bc:
    // 0x32a4bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a4c0:
    // 0x32a4c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_32a4c4:
    if (ctx->pc == 0x32A4C4u) {
        ctx->pc = 0x32A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4C0u;
        // 0x32a4c4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4C8u;
        goto label_32a4c8;
    }
    ctx->pc = 0x32A4C0u;
    {
        const bool branch_taken_0x32a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4C0u;
        // 0x32a4c4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4c0) {
            ctx->pc = 0x32A4E0u;
            goto label_32a4e0;
        }
    }
    ctx->pc = 0x32A4C8u;
label_32a4c8:
    // 0x32a4c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a4cc:
    // 0x32a4cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a4d0:
    // 0x32a4d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a4d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a4d4:
    // 0x32a4d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a4d8:
    // 0x32a4d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a4dc:
    if (ctx->pc == 0x32A4DCu) {
        ctx->pc = 0x32A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D8u;
        // 0x32a4dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4E0u;
        goto label_32a4e0;
    }
    ctx->pc = 0x32A4D8u;
    {
        const bool branch_taken_0x32a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D8u;
        // 0x32a4dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4d8) {
            ctx->pc = 0x32A4F4u;
            goto label_32a4f4;
        }
    }
    ctx->pc = 0x32A4E0u;
label_32a4e0:
    // 0x32a4e0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a4e4:
    // 0x32a4e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a4e8:
    // 0x32a4e8: 0x40f809  jalr        $v0
label_32a4ec:
    if (ctx->pc == 0x32A4ECu) {
        ctx->pc = 0x32A4F0u;
        goto label_32a4f0;
    }
    ctx->pc = 0x32A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A4F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A4E8u, 0x32A4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A4F0u;
label_32a4f0:
    // 0x32a4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a4f4:
    // 0x32a4f4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x32a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_32a4f8:
    // 0x32a4f8: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
label_32a4fc:
    if (ctx->pc == 0x32A4FCu) {
        ctx->pc = 0x32A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F8u;
        // 0x32a4fc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A500u;
        goto label_32a500;
    }
    ctx->pc = 0x32A4F8u;
    {
        const bool branch_taken_0x32a4f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F8u;
        // 0x32a4fc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4f8) {
            ctx->pc = 0x32A560u;
            goto label_32a560;
        }
    }
    ctx->pc = 0x32A500u;
label_32a500:
    // 0x32a500: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x32a500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32a504:
    // 0x32a504: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x32a504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32a508:
    // 0x32a508: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a50c:
    // 0x32a50c: 0x0  nop
    ctx->pc = 0x32a50cu;
    // NOP
label_32a510:
    // 0x32a510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a514:
    // 0x32a514: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32a518:
    // 0x32a518: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32a51c:
    // 0x32a51c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a520:
    if (ctx->pc == 0x32A520u) {
        ctx->pc = 0x32A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A51Cu;
        // 0x32a520: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A524u;
        goto label_32a524;
    }
    ctx->pc = 0x32A51Cu;
    {
        const bool branch_taken_0x32a51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A51Cu;
        // 0x32a520: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a51c) {
            ctx->pc = 0x32A53Cu;
            goto label_32a53c;
        }
    }
    ctx->pc = 0x32A524u;
label_32a524:
    // 0x32a524: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a528:
    // 0x32a528: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a52c:
    // 0x32a52c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a52cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a530:
    // 0x32a530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a534:
    // 0x32a534: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a538:
    if (ctx->pc == 0x32A538u) {
        ctx->pc = 0x32A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A534u;
        // 0x32a538: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A53Cu;
        goto label_32a53c;
    }
    ctx->pc = 0x32A534u;
    {
        const bool branch_taken_0x32a534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A534u;
        // 0x32a538: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a534) {
            ctx->pc = 0x32A550u;
            goto label_32a550;
        }
    }
    ctx->pc = 0x32A53Cu;
label_32a53c:
    // 0x32a53c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a540:
    // 0x32a540: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a544:
    // 0x32a544: 0x40f809  jalr        $v0
label_32a548:
    if (ctx->pc == 0x32A548u) {
        ctx->pc = 0x32A54Cu;
        goto label_32a54c;
    }
    ctx->pc = 0x32A544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A544u, 0x32A54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A54Cu;
label_32a54c:
    // 0x32a54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a550:
    // 0x32a550: 0x10920003  beq         $a0, $s2, . + 4 + (0x3 << 2)
label_32a554:
    if (ctx->pc == 0x32A554u) {
        ctx->pc = 0x32A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A550u;
        // 0x32a554: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A558u;
        goto label_32a558;
    }
    ctx->pc = 0x32A550u;
    {
        const bool branch_taken_0x32a550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x32A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A550u;
        // 0x32a554: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a550) {
            ctx->pc = 0x32A560u;
            goto label_32a560;
        }
    }
    ctx->pc = 0x32A558u;
label_32a558:
    // 0x32a558: 0x5491ffed  bnel        $a0, $s1, . + 4 + (-0x13 << 2)
label_32a55c:
    if (ctx->pc == 0x32A55Cu) {
        ctx->pc = 0x32A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A558u;
        // 0x32a55c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A560u;
        goto label_32a560;
    }
    ctx->pc = 0x32A558u;
    {
        const bool branch_taken_0x32a558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x32a558) {
            ctx->pc = 0x32A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A558u;
            // 0x32a55c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a510;
        }
    }
    ctx->pc = 0x32A560u;
label_32a560:
    // 0x32a560: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32a560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a564:
    // 0x32a564: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32a564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a568:
    // 0x32a568: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32a568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a56c:
    // 0x32a56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a570:
    // 0x32a570: 0x3e00008  jr          $ra
label_32a574:
    if (ctx->pc == 0x32A574u) {
        ctx->pc = 0x32A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A570u;
        // 0x32a574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A578u;
        goto label_fallthrough_0x32a570;
    }
    ctx->pc = 0x32A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A570u;
        // 0x32a574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a570:
    ctx->pc = 0x32A578u;
}
