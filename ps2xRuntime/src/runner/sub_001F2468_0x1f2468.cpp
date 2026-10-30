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

// Function: sub_001F2468
// Address: 0x1f2468 - 0x1f2650
void sub_001F2468_0x1f2468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2468_0x1f2468");
#endif

    switch (ctx->pc) {
        case 0x1f2468u: goto label_1f2468;
        case 0x1f246cu: goto label_1f246c;
        case 0x1f2470u: goto label_1f2470;
        case 0x1f2474u: goto label_1f2474;
        case 0x1f2478u: goto label_1f2478;
        case 0x1f247cu: goto label_1f247c;
        case 0x1f2480u: goto label_1f2480;
        case 0x1f2484u: goto label_1f2484;
        case 0x1f2488u: goto label_1f2488;
        case 0x1f248cu: goto label_1f248c;
        case 0x1f2490u: goto label_1f2490;
        case 0x1f2494u: goto label_1f2494;
        case 0x1f2498u: goto label_1f2498;
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24a0u: goto label_1f24a0;
        case 0x1f24a4u: goto label_1f24a4;
        case 0x1f24a8u: goto label_1f24a8;
        case 0x1f24acu: goto label_1f24ac;
        case 0x1f24b0u: goto label_1f24b0;
        case 0x1f24b4u: goto label_1f24b4;
        case 0x1f24b8u: goto label_1f24b8;
        case 0x1f24bcu: goto label_1f24bc;
        case 0x1f24c0u: goto label_1f24c0;
        case 0x1f24c4u: goto label_1f24c4;
        case 0x1f24c8u: goto label_1f24c8;
        case 0x1f24ccu: goto label_1f24cc;
        case 0x1f24d0u: goto label_1f24d0;
        case 0x1f24d4u: goto label_1f24d4;
        case 0x1f24d8u: goto label_1f24d8;
        case 0x1f24dcu: goto label_1f24dc;
        case 0x1f24e0u: goto label_1f24e0;
        case 0x1f24e4u: goto label_1f24e4;
        case 0x1f24e8u: goto label_1f24e8;
        case 0x1f24ecu: goto label_1f24ec;
        case 0x1f24f0u: goto label_1f24f0;
        case 0x1f24f4u: goto label_1f24f4;
        case 0x1f24f8u: goto label_1f24f8;
        case 0x1f24fcu: goto label_1f24fc;
        case 0x1f2500u: goto label_1f2500;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f2508u: goto label_1f2508;
        case 0x1f250cu: goto label_1f250c;
        case 0x1f2510u: goto label_1f2510;
        case 0x1f2514u: goto label_1f2514;
        case 0x1f2518u: goto label_1f2518;
        case 0x1f251cu: goto label_1f251c;
        case 0x1f2520u: goto label_1f2520;
        case 0x1f2524u: goto label_1f2524;
        case 0x1f2528u: goto label_1f2528;
        case 0x1f252cu: goto label_1f252c;
        case 0x1f2530u: goto label_1f2530;
        case 0x1f2534u: goto label_1f2534;
        case 0x1f2538u: goto label_1f2538;
        case 0x1f253cu: goto label_1f253c;
        case 0x1f2540u: goto label_1f2540;
        case 0x1f2544u: goto label_1f2544;
        case 0x1f2548u: goto label_1f2548;
        case 0x1f254cu: goto label_1f254c;
        case 0x1f2550u: goto label_1f2550;
        case 0x1f2554u: goto label_1f2554;
        case 0x1f2558u: goto label_1f2558;
        case 0x1f255cu: goto label_1f255c;
        case 0x1f2560u: goto label_1f2560;
        case 0x1f2564u: goto label_1f2564;
        case 0x1f2568u: goto label_1f2568;
        case 0x1f256cu: goto label_1f256c;
        case 0x1f2570u: goto label_1f2570;
        case 0x1f2574u: goto label_1f2574;
        case 0x1f2578u: goto label_1f2578;
        case 0x1f257cu: goto label_1f257c;
        case 0x1f2580u: goto label_1f2580;
        case 0x1f2584u: goto label_1f2584;
        case 0x1f2588u: goto label_1f2588;
        case 0x1f258cu: goto label_1f258c;
        case 0x1f2590u: goto label_1f2590;
        case 0x1f2594u: goto label_1f2594;
        case 0x1f2598u: goto label_1f2598;
        case 0x1f259cu: goto label_1f259c;
        case 0x1f25a0u: goto label_1f25a0;
        case 0x1f25a4u: goto label_1f25a4;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25acu: goto label_1f25ac;
        case 0x1f25b0u: goto label_1f25b0;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25b8u: goto label_1f25b8;
        case 0x1f25bcu: goto label_1f25bc;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25c4u: goto label_1f25c4;
        case 0x1f25c8u: goto label_1f25c8;
        case 0x1f25ccu: goto label_1f25cc;
        case 0x1f25d0u: goto label_1f25d0;
        case 0x1f25d4u: goto label_1f25d4;
        case 0x1f25d8u: goto label_1f25d8;
        case 0x1f25dcu: goto label_1f25dc;
        case 0x1f25e0u: goto label_1f25e0;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25e8u: goto label_1f25e8;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f25f0u: goto label_1f25f0;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25f8u: goto label_1f25f8;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2600u: goto label_1f2600;
        case 0x1f2604u: goto label_1f2604;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f260cu: goto label_1f260c;
        case 0x1f2610u: goto label_1f2610;
        case 0x1f2614u: goto label_1f2614;
        case 0x1f2618u: goto label_1f2618;
        case 0x1f261cu: goto label_1f261c;
        case 0x1f2620u: goto label_1f2620;
        case 0x1f2624u: goto label_1f2624;
        case 0x1f2628u: goto label_1f2628;
        case 0x1f262cu: goto label_1f262c;
        case 0x1f2630u: goto label_1f2630;
        case 0x1f2634u: goto label_1f2634;
        case 0x1f2638u: goto label_1f2638;
        case 0x1f263cu: goto label_1f263c;
        case 0x1f2640u: goto label_1f2640;
        case 0x1f2644u: goto label_1f2644;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f264cu: goto label_1f264c;
        default: break;
    }

    ctx->pc = 0x1f2468u;

label_1f2468:
    // 0x1f2468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f246c:
    // 0x1f246c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f2470:
    // 0x1f2470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f2470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f2474:
    // 0x1f2474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2478:
    // 0x1f2478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f247c:
    // 0x1f247c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f2480:
    // 0x1f2480: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f2480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f2484:
    // 0x1f2484: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f2488:
    // 0x1f2488: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f2488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f248c:
    // 0x1f248c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f2490:
    // 0x1f2490: 0x40f809  jalr        $v0
label_1f2494:
    if (ctx->pc == 0x1F2494u) {
        ctx->pc = 0x1F2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2490u;
        // 0x1f2494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2498u;
        goto label_1f2498;
    }
    ctx->pc = 0x1F2490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2498u);
        ctx->pc = 0x1F2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2490u;
        // 0x1f2494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2490u, 0x1F2498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2498u;
label_1f2498:
    // 0x1f2498: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_1f249c:
    if (ctx->pc == 0x1F249Cu) {
        ctx->pc = 0x1F249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2498u;
        // 0x1f249c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24A0u;
        goto label_1f24a0;
    }
    ctx->pc = 0x1F2498u;
    {
        const bool branch_taken_0x1f2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2498u;
        // 0x1f249c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2498) {
            ctx->pc = 0x1F2638u;
            goto label_1f2638;
        }
    }
    ctx->pc = 0x1F24A0u;
label_1f24a0:
    // 0x1f24a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f24a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f24a4:
    // 0x1f24a4: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1f24a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1f24a8:
    // 0x1f24a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f24ac:
    // 0x1f24ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f24b0:
    // 0x1f24b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f24b4:
    // 0x1f24b4: 0x40f809  jalr        $v0
label_1f24b8:
    if (ctx->pc == 0x1F24B8u) {
        ctx->pc = 0x1F24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24B4u;
        // 0x1f24b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24BCu;
        goto label_1f24bc;
    }
    ctx->pc = 0x1F24B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F24BCu);
        ctx->pc = 0x1F24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24B4u;
        // 0x1f24b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F24B4u, 0x1F24BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F24BCu;
label_1f24bc:
    // 0x1f24bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f24c0:
    // 0x1f24c0: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1f24c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1f24c4:
    // 0x1f24c4: 0x8c83f3e4  lw          $v1, -0xC1C($a0)
    ctx->pc = 0x1f24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964196)));
label_1f24c8:
    // 0x1f24c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f24cc:
    // 0x1f24cc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1f24ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f24d0:
    // 0x1f24d0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1f24d4:
    if (ctx->pc == 0x1F24D4u) {
        ctx->pc = 0x1F24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D0u;
        // 0x1f24d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24D8u;
        goto label_1f24d8;
    }
    ctx->pc = 0x1F24D0u;
    {
        const bool branch_taken_0x1f24d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D0u;
        // 0x1f24d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24d0) {
            ctx->pc = 0x1F251Cu;
            goto label_1f251c;
        }
    }
    ctx->pc = 0x1F24D8u;
label_1f24d8:
    // 0x1f24d8: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x1f24d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_1f24dc:
    // 0x1f24dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f24e0:
    // 0x1f24e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f24e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f24e4:
    // 0x1f24e4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f24e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f24e8:
    // 0x1f24e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1f24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1f24ec:
    // 0x1f24ec: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1f24f0:
    if (ctx->pc == 0x1F24F0u) {
        ctx->pc = 0x1F24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24ECu;
        // 0x1f24f0: 0xa20400a8  sb          $a0, 0xA8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24F4u;
        goto label_1f24f4;
    }
    ctx->pc = 0x1F24ECu;
    {
        const bool branch_taken_0x1f24ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24ECu;
        // 0x1f24f0: 0xa20400a8  sb          $a0, 0xA8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24ec) {
            ctx->pc = 0x1F24F8u;
            goto label_1f24f8;
        }
    }
    ctx->pc = 0x1F24F4u;
label_1f24f4:
    // 0x1f24f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f24f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f24f8:
    // 0x1f24f8: 0xa20500a8  sb          $a1, 0xA8($s0)
    ctx->pc = 0x1f24f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 5));
label_1f24fc:
    // 0x1f24fc: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1f2500:
    // 0x1f2500: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2504:
    // 0x1f2504: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f2504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f2508:
    // 0x1f2508: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f250c:
    // 0x1f250c: 0x40f809  jalr        $v0
label_1f2510:
    if (ctx->pc == 0x1F2510u) {
        ctx->pc = 0x1F2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F250Cu;
        // 0x1f2510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2514u;
        goto label_1f2514;
    }
    ctx->pc = 0x1F250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2514u);
        ctx->pc = 0x1F2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F250Cu;
        // 0x1f2510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F250Cu, 0x1F2514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2514u;
label_1f2514:
    // 0x1f2514: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f2518:
    if (ctx->pc == 0x1F2518u) {
        ctx->pc = 0x1F2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2514u;
        // 0x1f2518: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F251Cu;
        goto label_1f251c;
    }
    ctx->pc = 0x1F2514u;
    {
        const bool branch_taken_0x1f2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2514u;
        // 0x1f2518: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2514) {
            ctx->pc = 0x1F2594u;
            goto label_1f2594;
        }
    }
    ctx->pc = 0x1F251Cu;
label_1f251c:
    // 0x1f251c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f2520:
    if (ctx->pc == 0x1F2520u) {
        ctx->pc = 0x1F2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F251Cu;
        // 0x1f2520: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2524u;
        goto label_1f2524;
    }
    ctx->pc = 0x1F251Cu;
    {
        const bool branch_taken_0x1f251c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F251Cu;
        // 0x1f2520: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f251c) {
            ctx->pc = 0x1F2538u;
            goto label_1f2538;
        }
    }
    ctx->pc = 0x1F2524u;
label_1f2524:
    // 0x1f2524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2528:
    // 0x1f2528: 0x0  nop
    ctx->pc = 0x1f2528u;
    // NOP
label_1f252c:
    // 0x1f252c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f252cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f2530:
    // 0x1f2530: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f2534:
    if (ctx->pc == 0x1F2534u) {
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x8cc2f3e4  lw          $v0, -0xC1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2538u;
        goto label_1f2538;
    }
    ctx->pc = 0x1F2530u;
    {
        const bool branch_taken_0x1f2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x8cc2f3e4  lw          $v0, -0xC1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2530) {
            ctx->pc = 0x1F2554u;
            goto label_1f2554;
        }
    }
    ctx->pc = 0x1F2538u;
label_1f2538:
    // 0x1f2538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f2538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f253c:
    // 0x1f253c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f2540:
    // 0x1f2540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2544:
    // 0x1f2544: 0x0  nop
    ctx->pc = 0x1f2544u;
    // NOP
label_1f2548:
    // 0x1f2548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f254c:
    // 0x1f254c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f2550:
    // 0x1f2550: 0x8cc2f3e4  lw          $v0, -0xC1C($a2)
    ctx->pc = 0x1f2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964196)));
label_1f2554:
    // 0x1f2554: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f2558:
    if (ctx->pc == 0x1F2558u) {
        ctx->pc = 0x1F2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2554u;
        // 0x1f2558: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F255Cu;
        goto label_1f255c;
    }
    ctx->pc = 0x1F2554u;
    {
        const bool branch_taken_0x1f2554 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2554u;
        // 0x1f2558: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2554) {
            ctx->pc = 0x1F2570u;
            goto label_1f2570;
        }
    }
    ctx->pc = 0x1F255Cu;
label_1f255c:
    // 0x1f255c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f255cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2560:
    // 0x1f2560: 0x0  nop
    ctx->pc = 0x1f2560u;
    // NOP
label_1f2564:
    // 0x1f2564: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1f2568:
    // 0x1f2568: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f256c:
    if (ctx->pc == 0x1F256Cu) {
        ctx->pc = 0x1F2570u;
        goto label_1f2570;
    }
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F2588u;
            goto label_1f2588;
        }
    }
    ctx->pc = 0x1F2570u;
label_1f2570:
    // 0x1f2570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f2574:
    // 0x1f2574: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f2578:
    // 0x1f2578: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f257c:
    // 0x1f257c: 0x0  nop
    ctx->pc = 0x1f257cu;
    // NOP
label_1f2580:
    // 0x1f2580: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1f2584:
    // 0x1f2584: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1f2584u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1f2588:
    // 0x1f2588: 0x0  nop
    ctx->pc = 0x1f2588u;
    // NOP
label_1f258c:
    // 0x1f258c: 0x0  nop
    ctx->pc = 0x1f258cu;
    // NOP
label_1f2590:
    // 0x1f2590: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x1f2590u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_1f2594:
    // 0x1f2594: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x1f2594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_1f2598:
    // 0x1f2598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f259c:
    // 0x1f259c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1f25a0:
    if (ctx->pc == 0x1F25A0u) {
        ctx->pc = 0x1F25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F259Cu;
        // 0x1f25a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25A4u;
        goto label_1f25a4;
    }
    ctx->pc = 0x1F259Cu;
    {
        const bool branch_taken_0x1f259c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F259Cu;
        // 0x1f25a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f259c) {
            ctx->pc = 0x1F25ACu;
            goto label_1f25ac;
        }
    }
    ctx->pc = 0x1F25A4u;
label_1f25a4:
    // 0x1f25a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f25a8:
    if (ctx->pc == 0x1F25A8u) {
        ctx->pc = 0x1F25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A4u;
        // 0x1f25a8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25ACu;
        goto label_1f25ac;
    }
    ctx->pc = 0x1F25A4u;
    {
        const bool branch_taken_0x1f25a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A4u;
        // 0x1f25a8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25a4) {
            ctx->pc = 0x1F25B0u;
            goto label_1f25b0;
        }
    }
    ctx->pc = 0x1F25ACu;
label_1f25ac:
    // 0x1f25ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f25acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f25b0:
    // 0x1f25b0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f25b4:
    // 0x1f25b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f25b8:
    // 0x1f25b8: 0x2442ee70  addiu       $v0, $v0, -0x1190
    ctx->pc = 0x1f25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962800));
label_1f25bc:
    // 0x1f25bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f25c0:
    // 0x1f25c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1f25c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f25c4:
    // 0x1f25c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f25c8:
    // 0x1f25c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f25cc:
    // 0x1f25cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f25ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f25d0:
    // 0x1f25d0: 0xc05e896  jal         func_17A258
label_1f25d4:
    if (ctx->pc == 0x1F25D4u) {
        ctx->pc = 0x1F25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D0u;
        // 0x1f25d4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25D8u;
        goto label_1f25d8;
    }
    ctx->pc = 0x1F25D0u;
    SET_GPR_U32(ctx, 31, 0x1F25D8u);
    ctx->pc = 0x1F25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25D0u;
    // 0x1f25d4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1F25D0u, 0x1F25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25D8u;
label_1f25d8:
    // 0x1f25d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f25dc:
    // 0x1f25dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f25dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f25e0:
    // 0x1f25e0: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x1f25e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1f25e4:
    // 0x1f25e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f25e8:
    // 0x1f25e8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1f25e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1f25ec:
    // 0x1f25ec: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1f25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1f25f0:
    // 0x1f25f0: 0x60f809  jalr        $v1
label_1f25f4:
    if (ctx->pc == 0x1F25F4u) {
        ctx->pc = 0x1F25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25F0u;
        // 0x1f25f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25F8u;
        goto label_1f25f8;
    }
    ctx->pc = 0x1F25F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F25F8u);
        ctx->pc = 0x1F25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25F0u;
        // 0x1f25f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25F0u, 0x1F25F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F25F8u;
label_1f25f8:
    // 0x1f25f8: 0xc07f720  jal         func_1FDC80
label_1f25fc:
    if (ctx->pc == 0x1F25FCu) {
        ctx->pc = 0x1F2600u;
        goto label_1f2600;
    }
    ctx->pc = 0x1F25F8u;
    SET_GPR_U32(ctx, 31, 0x1F2600u);
    ctx->pc = 0x1FDC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC80u, 0x1F25F8u, 0x1F2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2600u;
label_1f2600:
    // 0x1f2600: 0xc07f724  jal         func_1FDC90
label_1f2604:
    if (ctx->pc == 0x1F2604u) {
        ctx->pc = 0x1F2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2600u;
        // 0x1f2604: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2608u;
        goto label_1f2608;
    }
    ctx->pc = 0x1F2600u;
    SET_GPR_U32(ctx, 31, 0x1F2608u);
    ctx->pc = 0x1F2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2600u;
    // 0x1f2604: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC90u, 0x1F2600u, 0x1F2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2608u;
label_1f2608:
    // 0x1f2608: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x1f2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1f260c:
    // 0x1f260c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2610:
    // 0x1f2610: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1f2610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1f2614:
    // 0x1f2614: 0xc068848  jal         func_1A2120
label_1f2618:
    if (ctx->pc == 0x1F2618u) {
        ctx->pc = 0x1F2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2614u;
        // 0x1f2618: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F261Cu;
        goto label_1f261c;
    }
    ctx->pc = 0x1F2614u;
    SET_GPR_U32(ctx, 31, 0x1F261Cu);
    ctx->pc = 0x1F2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2614u;
    // 0x1f2618: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1F2614u, 0x1F261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F261Cu;
label_1f261c:
    // 0x1f261c: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1f2620:
    // 0x1f2620: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2624:
    // 0x1f2624: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f2628:
    // 0x1f2628: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1f262c:
    // 0x1f262c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1f262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f2630:
    // 0x1f2630: 0x60f809  jalr        $v1
label_1f2634:
    if (ctx->pc == 0x1F2634u) {
        ctx->pc = 0x1F2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2630u;
        // 0x1f2634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2638u;
        goto label_1f2638;
    }
    ctx->pc = 0x1F2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2638u);
        ctx->pc = 0x1F2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2630u;
        // 0x1f2634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2630u, 0x1F2638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2638u;
label_1f2638:
    // 0x1f2638: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f2638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f263c:
    // 0x1f263c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f263cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2640:
    // 0x1f2640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2644:
    // 0x1f2644: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f2648:
    // 0x1f2648: 0x3e00008  jr          $ra
label_1f264c:
    if (ctx->pc == 0x1F264Cu) {
        ctx->pc = 0x1F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2648u;
        // 0x1f264c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2650u;
        goto label_fallthrough_0x1f2648;
    }
    ctx->pc = 0x1F2648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2648u;
        // 0x1f264c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f2648:
    ctx->pc = 0x1F2650u;
}
