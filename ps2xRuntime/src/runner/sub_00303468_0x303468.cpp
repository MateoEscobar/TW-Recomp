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

// Function: sub_00303468
// Address: 0x303468 - 0x3035d8
void sub_00303468_0x303468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303468_0x303468");
#endif

    switch (ctx->pc) {
        case 0x303468u: goto label_303468;
        case 0x30346cu: goto label_30346c;
        case 0x303470u: goto label_303470;
        case 0x303474u: goto label_303474;
        case 0x303478u: goto label_303478;
        case 0x30347cu: goto label_30347c;
        case 0x303480u: goto label_303480;
        case 0x303484u: goto label_303484;
        case 0x303488u: goto label_303488;
        case 0x30348cu: goto label_30348c;
        case 0x303490u: goto label_303490;
        case 0x303494u: goto label_303494;
        case 0x303498u: goto label_303498;
        case 0x30349cu: goto label_30349c;
        case 0x3034a0u: goto label_3034a0;
        case 0x3034a4u: goto label_3034a4;
        case 0x3034a8u: goto label_3034a8;
        case 0x3034acu: goto label_3034ac;
        case 0x3034b0u: goto label_3034b0;
        case 0x3034b4u: goto label_3034b4;
        case 0x3034b8u: goto label_3034b8;
        case 0x3034bcu: goto label_3034bc;
        case 0x3034c0u: goto label_3034c0;
        case 0x3034c4u: goto label_3034c4;
        case 0x3034c8u: goto label_3034c8;
        case 0x3034ccu: goto label_3034cc;
        case 0x3034d0u: goto label_3034d0;
        case 0x3034d4u: goto label_3034d4;
        case 0x3034d8u: goto label_3034d8;
        case 0x3034dcu: goto label_3034dc;
        case 0x3034e0u: goto label_3034e0;
        case 0x3034e4u: goto label_3034e4;
        case 0x3034e8u: goto label_3034e8;
        case 0x3034ecu: goto label_3034ec;
        case 0x3034f0u: goto label_3034f0;
        case 0x3034f4u: goto label_3034f4;
        case 0x3034f8u: goto label_3034f8;
        case 0x3034fcu: goto label_3034fc;
        case 0x303500u: goto label_303500;
        case 0x303504u: goto label_303504;
        case 0x303508u: goto label_303508;
        case 0x30350cu: goto label_30350c;
        case 0x303510u: goto label_303510;
        case 0x303514u: goto label_303514;
        case 0x303518u: goto label_303518;
        case 0x30351cu: goto label_30351c;
        case 0x303520u: goto label_303520;
        case 0x303524u: goto label_303524;
        case 0x303528u: goto label_303528;
        case 0x30352cu: goto label_30352c;
        case 0x303530u: goto label_303530;
        case 0x303534u: goto label_303534;
        case 0x303538u: goto label_303538;
        case 0x30353cu: goto label_30353c;
        case 0x303540u: goto label_303540;
        case 0x303544u: goto label_303544;
        case 0x303548u: goto label_303548;
        case 0x30354cu: goto label_30354c;
        case 0x303550u: goto label_303550;
        case 0x303554u: goto label_303554;
        case 0x303558u: goto label_303558;
        case 0x30355cu: goto label_30355c;
        case 0x303560u: goto label_303560;
        case 0x303564u: goto label_303564;
        case 0x303568u: goto label_303568;
        case 0x30356cu: goto label_30356c;
        case 0x303570u: goto label_303570;
        case 0x303574u: goto label_303574;
        case 0x303578u: goto label_303578;
        case 0x30357cu: goto label_30357c;
        case 0x303580u: goto label_303580;
        case 0x303584u: goto label_303584;
        case 0x303588u: goto label_303588;
        case 0x30358cu: goto label_30358c;
        case 0x303590u: goto label_303590;
        case 0x303594u: goto label_303594;
        case 0x303598u: goto label_303598;
        case 0x30359cu: goto label_30359c;
        case 0x3035a0u: goto label_3035a0;
        case 0x3035a4u: goto label_3035a4;
        case 0x3035a8u: goto label_3035a8;
        case 0x3035acu: goto label_3035ac;
        case 0x3035b0u: goto label_3035b0;
        case 0x3035b4u: goto label_3035b4;
        case 0x3035b8u: goto label_3035b8;
        case 0x3035bcu: goto label_3035bc;
        case 0x3035c0u: goto label_3035c0;
        case 0x3035c4u: goto label_3035c4;
        case 0x3035c8u: goto label_3035c8;
        case 0x3035ccu: goto label_3035cc;
        case 0x3035d0u: goto label_3035d0;
        case 0x3035d4u: goto label_3035d4;
        default: break;
    }

    ctx->pc = 0x303468u;

label_303468:
    // 0x303468: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x303468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30346c:
    // 0x30346c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_303470:
    // 0x303470: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x303470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_303474:
    // 0x303474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_303478:
    // 0x303478: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x303478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_30347c:
    // 0x30347c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30347cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303480:
    // 0x303480: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x303480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_303484:
    // 0x303484: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x303484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303488:
    // 0x303488: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x303488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_30348c:
    // 0x30348c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x30348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_303490:
    // 0x303490: 0x84650050  lh          $a1, 0x50($v1)
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_303494:
    // 0x303494: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x303494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_303498:
    // 0x303498: 0x40f809  jalr        $v0
label_30349c:
    if (ctx->pc == 0x30349Cu) {
        ctx->pc = 0x30349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303498u;
        // 0x30349c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034A0u;
        goto label_3034a0;
    }
    ctx->pc = 0x303498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3034A0u);
        ctx->pc = 0x30349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303498u;
        // 0x30349c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303498u, 0x3034A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3034A0u;
label_3034a0:
    // 0x3034a0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_3034a4:
    if (ctx->pc == 0x3034A4u) {
        ctx->pc = 0x3034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A0u;
        // 0x3034a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034A8u;
        goto label_3034a8;
    }
    ctx->pc = 0x3034A0u;
    {
        const bool branch_taken_0x3034a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A0u;
        // 0x3034a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034a0) {
            ctx->pc = 0x3035BCu;
            goto label_3035bc;
        }
    }
    ctx->pc = 0x3034A8u;
label_3034a8:
    // 0x3034a8: 0xc08a61a  jal         func_229868
label_3034ac:
    if (ctx->pc == 0x3034ACu) {
        ctx->pc = 0x3034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A8u;
        // 0x3034ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034B0u;
        goto label_3034b0;
    }
    ctx->pc = 0x3034A8u;
    SET_GPR_U32(ctx, 31, 0x3034B0u);
    ctx->pc = 0x3034ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034A8u;
    // 0x3034ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3034A8u, 0x3034B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034B0u;
label_3034b0:
    // 0x3034b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3034b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3034b4:
    // 0x3034b4: 0xc08a08a  jal         func_228228
label_3034b8:
    if (ctx->pc == 0x3034B8u) {
        ctx->pc = 0x3034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034B4u;
        // 0x3034b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034BCu;
        goto label_3034bc;
    }
    ctx->pc = 0x3034B4u;
    SET_GPR_U32(ctx, 31, 0x3034BCu);
    ctx->pc = 0x3034B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034B4u;
    // 0x3034b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3034B4u, 0x3034BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034BCu;
label_3034bc:
    // 0x3034bc: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_3034c0:
    if (ctx->pc == 0x3034C0u) {
        ctx->pc = 0x3034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034BCu;
        // 0x3034c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034C4u;
        goto label_3034c4;
    }
    ctx->pc = 0x3034BCu;
    {
        const bool branch_taken_0x3034bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034BCu;
        // 0x3034c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034bc) {
            ctx->pc = 0x3035BCu;
            goto label_3035bc;
        }
    }
    ctx->pc = 0x3034C4u;
label_3034c4:
    // 0x3034c4: 0xc08a08a  jal         func_228228
label_3034c8:
    if (ctx->pc == 0x3034C8u) {
        ctx->pc = 0x3034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034C4u;
        // 0x3034c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034CCu;
        goto label_3034cc;
    }
    ctx->pc = 0x3034C4u;
    SET_GPR_U32(ctx, 31, 0x3034CCu);
    ctx->pc = 0x3034C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034C4u;
    // 0x3034c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3034C4u, 0x3034CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034CCu;
label_3034cc:
    // 0x3034cc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_3034d0:
    if (ctx->pc == 0x3034D0u) {
        ctx->pc = 0x3034D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034CCu;
        // 0x3034d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034D4u;
        goto label_3034d4;
    }
    ctx->pc = 0x3034CCu;
    {
        const bool branch_taken_0x3034cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3034D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034CCu;
        // 0x3034d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034cc) {
            ctx->pc = 0x3035BCu;
            goto label_3035bc;
        }
    }
    ctx->pc = 0x3034D4u;
label_3034d4:
    // 0x3034d4: 0xc0a36c8  jal         func_28DB20
label_3034d8:
    if (ctx->pc == 0x3034D8u) {
        ctx->pc = 0x3034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034D4u;
        // 0x3034d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3034DCu;
        goto label_3034dc;
    }
    ctx->pc = 0x3034D4u;
    SET_GPR_U32(ctx, 31, 0x3034DCu);
    ctx->pc = 0x3034D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034D4u;
    // 0x3034d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3034D4u, 0x3034DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034DCu;
label_3034dc:
    // 0x3034dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3034dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3034e0:
    // 0x3034e0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3034e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3034e4:
    // 0x3034e4: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x3034e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_3034e8:
    // 0x3034e8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x3034e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3034ec:
    // 0x3034ec: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x3034ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_3034f0:
    // 0x3034f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3034f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3034f4:
    // 0x3034f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3034f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3034f8:
    // 0x3034f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3034f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3034fc:
    // 0x3034fc: 0xc0cd780  jal         func_335E00
label_303500:
    if (ctx->pc == 0x303500u) {
        ctx->pc = 0x303500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034FCu;
        // 0x303500: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303504u;
        goto label_303504;
    }
    ctx->pc = 0x3034FCu;
    SET_GPR_U32(ctx, 31, 0x303504u);
    ctx->pc = 0x303500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3034FCu;
    // 0x303500: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x3034FCu, 0x303504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303504u;
label_303504:
    // 0x303504: 0xc0cd742  jal         func_335D08
label_303508:
    if (ctx->pc == 0x303508u) {
        ctx->pc = 0x303508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303504u;
        // 0x303508: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30350Cu;
        goto label_30350c;
    }
    ctx->pc = 0x303504u;
    SET_GPR_U32(ctx, 31, 0x30350Cu);
    ctx->pc = 0x303508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303504u;
    // 0x303508: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x303504u, 0x30350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30350Cu;
label_30350c:
    // 0x30350c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_303510:
    // 0x303510: 0xc0cd7a8  jal         func_335EA0
label_303514:
    if (ctx->pc == 0x303514u) {
        ctx->pc = 0x303514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303510u;
        // 0x303514: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303518u;
        goto label_303518;
    }
    ctx->pc = 0x303510u;
    SET_GPR_U32(ctx, 31, 0x303518u);
    ctx->pc = 0x303514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303510u;
    // 0x303514: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x303510u, 0x303518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303518u;
label_303518:
    // 0x303518: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30351c:
    // 0x30351c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x30351cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_303520:
    // 0x303520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303524:
    // 0x303524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x303524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_303528:
    // 0x303528: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_30352c:
    // 0x30352c: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x30352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_303530:
    // 0x303530: 0xc0f809  jalr        $a2
label_303534:
    if (ctx->pc == 0x303534u) {
        ctx->pc = 0x303534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303530u;
        // 0x303534: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303538u;
        goto label_303538;
    }
    ctx->pc = 0x303530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x303538u);
        ctx->pc = 0x303534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303530u;
        // 0x303534: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303530u, 0x303538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303538u;
label_303538:
    // 0x303538: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x303538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30353c:
    // 0x30353c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303540:
    // 0x303540: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x303540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303544:
    // 0x303544: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x303544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_303548:
    // 0x303548: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30354c:
    // 0x30354c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x30354cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_303550:
    // 0x303550: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_303554:
    // 0x303554: 0x60f809  jalr        $v1
label_303558:
    if (ctx->pc == 0x303558u) {
        ctx->pc = 0x303558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303554u;
        // 0x303558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30355Cu;
        goto label_30355c;
    }
    ctx->pc = 0x303554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30355Cu);
        ctx->pc = 0x303558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303554u;
        // 0x303558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303554u, 0x30355Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30355Cu;
label_30355c:
    // 0x30355c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30355cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303560:
    // 0x303560: 0xc08cec2  jal         func_233B08
label_303564:
    if (ctx->pc == 0x303564u) {
        ctx->pc = 0x303564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303560u;
        // 0x303564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303568u;
        goto label_303568;
    }
    ctx->pc = 0x303560u;
    SET_GPR_U32(ctx, 31, 0x303568u);
    ctx->pc = 0x303564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303560u;
    // 0x303564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B08u, 0x303560u, 0x303568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303568u;
label_303568:
    // 0x303568: 0xc089bfc  jal         func_226FF0
label_30356c:
    if (ctx->pc == 0x30356Cu) {
        ctx->pc = 0x30356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303568u;
        // 0x30356c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303570u;
        goto label_303570;
    }
    ctx->pc = 0x303568u;
    SET_GPR_U32(ctx, 31, 0x303570u);
    ctx->pc = 0x30356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303568u;
    // 0x30356c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x303568u, 0x303570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303570u;
label_303570:
    // 0x303570: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_303574:
    if (ctx->pc == 0x303574u) {
        ctx->pc = 0x303574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303570u;
        // 0x303574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303578u;
        goto label_303578;
    }
    ctx->pc = 0x303570u;
    {
        const bool branch_taken_0x303570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303570u;
        // 0x303574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303570) {
            ctx->pc = 0x3035BCu;
            goto label_3035bc;
        }
    }
    ctx->pc = 0x303578u;
label_303578:
    // 0x303578: 0xc087502  jal         func_21D408
label_30357c:
    if (ctx->pc == 0x30357Cu) {
        ctx->pc = 0x30357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303578u;
        // 0x30357c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303580u;
        goto label_303580;
    }
    ctx->pc = 0x303578u;
    SET_GPR_U32(ctx, 31, 0x303580u);
    ctx->pc = 0x30357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303578u;
    // 0x30357c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x303578u, 0x303580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303580u;
label_303580:
    // 0x303580: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x303580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_303584:
    // 0x303584: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_303588:
    if (ctx->pc == 0x303588u) {
        ctx->pc = 0x303588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303584u;
        // 0x303588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30358Cu;
        goto label_30358c;
    }
    ctx->pc = 0x303584u;
    {
        const bool branch_taken_0x303584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303584) {
            ctx->pc = 0x303588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303584u;
            // 0x303588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3035BCu;
            goto label_3035bc;
        }
    }
    ctx->pc = 0x30358Cu;
label_30358c:
    // 0x30358c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_303590:
    // 0x303590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_303594:
    // 0x303594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_303598:
    // 0x303598: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x303598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_30359c:
    // 0x30359c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3035a0:
    // 0x3035a0: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_3035a4:
    // 0x3035a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3035a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3035a8:
    // 0x3035a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3035a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3035ac:
    // 0x3035ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3035acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3035b0:
    // 0x3035b0: 0xc088178  jal         func_2205E0
label_3035b4:
    if (ctx->pc == 0x3035B4u) {
        ctx->pc = 0x3035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035B0u;
        // 0x3035b4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035B8u;
        goto label_3035b8;
    }
    ctx->pc = 0x3035B0u;
    SET_GPR_U32(ctx, 31, 0x3035B8u);
    ctx->pc = 0x3035B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3035B0u;
    // 0x3035b4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x3035B0u, 0x3035B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035B8u;
label_3035b8:
    // 0x3035b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3035bc:
    // 0x3035bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3035bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3035c0:
    // 0x3035c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3035c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3035c4:
    // 0x3035c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3035c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3035c8:
    // 0x3035c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3035c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3035cc:
    // 0x3035cc: 0x3e00008  jr          $ra
label_3035d0:
    if (ctx->pc == 0x3035D0u) {
        ctx->pc = 0x3035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035CCu;
        // 0x3035d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035D4u;
        goto label_3035d4;
    }
    ctx->pc = 0x3035CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035CCu;
        // 0x3035d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3035CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3035D4u;
label_3035d4:
    // 0x3035d4: 0x0  nop
    ctx->pc = 0x3035d4u;
    // NOP
    ctx->pc = 0x3035d8u;
}
