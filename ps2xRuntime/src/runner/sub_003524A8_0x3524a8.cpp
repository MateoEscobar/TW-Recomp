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

// Function: sub_003524A8
// Address: 0x3524a8 - 0x3525f8
void sub_003524A8_0x3524a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003524A8_0x3524a8");
#endif

    switch (ctx->pc) {
        case 0x3524a8u: goto label_3524a8;
        case 0x3524acu: goto label_3524ac;
        case 0x3524b0u: goto label_3524b0;
        case 0x3524b4u: goto label_3524b4;
        case 0x3524b8u: goto label_3524b8;
        case 0x3524bcu: goto label_3524bc;
        case 0x3524c0u: goto label_3524c0;
        case 0x3524c4u: goto label_3524c4;
        case 0x3524c8u: goto label_3524c8;
        case 0x3524ccu: goto label_3524cc;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524d4u: goto label_3524d4;
        case 0x3524d8u: goto label_3524d8;
        case 0x3524dcu: goto label_3524dc;
        case 0x3524e0u: goto label_3524e0;
        case 0x3524e4u: goto label_3524e4;
        case 0x3524e8u: goto label_3524e8;
        case 0x3524ecu: goto label_3524ec;
        case 0x3524f0u: goto label_3524f0;
        case 0x3524f4u: goto label_3524f4;
        case 0x3524f8u: goto label_3524f8;
        case 0x3524fcu: goto label_3524fc;
        case 0x352500u: goto label_352500;
        case 0x352504u: goto label_352504;
        case 0x352508u: goto label_352508;
        case 0x35250cu: goto label_35250c;
        case 0x352510u: goto label_352510;
        case 0x352514u: goto label_352514;
        case 0x352518u: goto label_352518;
        case 0x35251cu: goto label_35251c;
        case 0x352520u: goto label_352520;
        case 0x352524u: goto label_352524;
        case 0x352528u: goto label_352528;
        case 0x35252cu: goto label_35252c;
        case 0x352530u: goto label_352530;
        case 0x352534u: goto label_352534;
        case 0x352538u: goto label_352538;
        case 0x35253cu: goto label_35253c;
        case 0x352540u: goto label_352540;
        case 0x352544u: goto label_352544;
        case 0x352548u: goto label_352548;
        case 0x35254cu: goto label_35254c;
        case 0x352550u: goto label_352550;
        case 0x352554u: goto label_352554;
        case 0x352558u: goto label_352558;
        case 0x35255cu: goto label_35255c;
        case 0x352560u: goto label_352560;
        case 0x352564u: goto label_352564;
        case 0x352568u: goto label_352568;
        case 0x35256cu: goto label_35256c;
        case 0x352570u: goto label_352570;
        case 0x352574u: goto label_352574;
        case 0x352578u: goto label_352578;
        case 0x35257cu: goto label_35257c;
        case 0x352580u: goto label_352580;
        case 0x352584u: goto label_352584;
        case 0x352588u: goto label_352588;
        case 0x35258cu: goto label_35258c;
        case 0x352590u: goto label_352590;
        case 0x352594u: goto label_352594;
        case 0x352598u: goto label_352598;
        case 0x35259cu: goto label_35259c;
        case 0x3525a0u: goto label_3525a0;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525a8u: goto label_3525a8;
        case 0x3525acu: goto label_3525ac;
        case 0x3525b0u: goto label_3525b0;
        case 0x3525b4u: goto label_3525b4;
        case 0x3525b8u: goto label_3525b8;
        case 0x3525bcu: goto label_3525bc;
        case 0x3525c0u: goto label_3525c0;
        case 0x3525c4u: goto label_3525c4;
        case 0x3525c8u: goto label_3525c8;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525d0u: goto label_3525d0;
        case 0x3525d4u: goto label_3525d4;
        case 0x3525d8u: goto label_3525d8;
        case 0x3525dcu: goto label_3525dc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525e4u: goto label_3525e4;
        case 0x3525e8u: goto label_3525e8;
        case 0x3525ecu: goto label_3525ec;
        case 0x3525f0u: goto label_3525f0;
        case 0x3525f4u: goto label_3525f4;
        default: break;
    }

    ctx->pc = 0x3524a8u;

label_3524a8:
    // 0x3524a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3524a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3524ac:
    // 0x3524ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3524acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3524b0:
    // 0x3524b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3524b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3524b4:
    // 0x3524b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3524b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3524b8:
    // 0x3524b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3524b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3524bc:
    // 0x3524bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3524bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3524c0:
    // 0x3524c0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3524c4:
    // 0x3524c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3524c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3524c8:
    // 0x3524c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3524cc:
    if (ctx->pc == 0x3524CCu) {
        ctx->pc = 0x3524CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524C8u;
        // 0x3524cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524D0u;
        goto label_3524d0;
    }
    ctx->pc = 0x3524C8u;
    {
        const bool branch_taken_0x3524c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524C8u;
        // 0x3524cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524c8) {
            ctx->pc = 0x3524D8u;
            goto label_3524d8;
        }
    }
    ctx->pc = 0x3524D0u;
label_3524d0:
    // 0x3524d0: 0x10000042  b           . + 4 + (0x42 << 2)
label_3524d4:
    if (ctx->pc == 0x3524D4u) {
        ctx->pc = 0x3524D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524D0u;
        // 0x3524d4: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524D8u;
        goto label_3524d8;
    }
    ctx->pc = 0x3524D0u;
    {
        const bool branch_taken_0x3524d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524D0u;
        // 0x3524d4: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524d0) {
            ctx->pc = 0x3525DCu;
            goto label_3525dc;
        }
    }
    ctx->pc = 0x3524D8u;
label_3524d8:
    // 0x3524d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3524d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3524dc:
    // 0x3524dc: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x3524dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_3524e0:
    // 0x3524e0: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x3524e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3524e4:
    // 0x3524e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3524e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3524e8:
    // 0x3524e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3524ec:
    // 0x3524ec: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x3524ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3524f0:
    // 0x3524f0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3524f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3524f4:
    // 0x3524f4: 0x60f809  jalr        $v1
label_3524f8:
    if (ctx->pc == 0x3524F8u) {
        ctx->pc = 0x3524F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524F4u;
        // 0x3524f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524FCu;
        goto label_3524fc;
    }
    ctx->pc = 0x3524F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3524FCu);
        ctx->pc = 0x3524F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524F4u;
        // 0x3524f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3524F4u, 0x3524FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3524FCu;
label_3524fc:
    // 0x3524fc: 0x8e0727e4  lw          $a3, 0x27E4($s0)
    ctx->pc = 0x3524fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352500:
    // 0x352500: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x352500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_352504:
    // 0x352504: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x352504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_352508:
    // 0x352508: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x352508u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_35250c:
    // 0x35250c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x35250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_352510:
    // 0x352510: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x352510u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_352514:
    // 0x352514: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x352514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_352518:
    // 0x352518: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x352518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35251c:
    // 0x35251c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x35251cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_352520:
    // 0x352520: 0x254a8a00  addiu       $t2, $t2, -0x7600
    ctx->pc = 0x352520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937088));
label_352524:
    // 0x352524: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x352524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_352528:
    // 0x352528: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x352528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_35252c:
    // 0x35252c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x35252cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_352530:
    // 0x352530: 0x24a589f8  addiu       $a1, $a1, -0x7608
    ctx->pc = 0x352530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937080));
label_352534:
    // 0x352534: 0x250889d0  addiu       $t0, $t0, -0x7630
    ctx->pc = 0x352534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937040));
label_352538:
    // 0x352538: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x352538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_35253c:
    // 0x35253c: 0x40f809  jalr        $v0
label_352540:
    if (ctx->pc == 0x352540u) {
        ctx->pc = 0x352540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35253Cu;
        // 0x352540: 0x24090189  addiu       $t1, $zero, 0x189 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352544u;
        goto label_352544;
    }
    ctx->pc = 0x35253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352544u);
        ctx->pc = 0x352540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35253Cu;
        // 0x352540: 0x24090189  addiu       $t1, $zero, 0x189 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35253Cu, 0x352544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352544u;
label_352544:
    // 0x352544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x352544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_352548:
    // 0x352548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x352548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35254c:
    // 0x35254c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x35254cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352550:
    // 0x352550: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x352550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_352554:
    // 0x352554: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x352554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_352558:
    // 0x352558: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x352558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_35255c:
    // 0x35255c: 0x60f809  jalr        $v1
label_352560:
    if (ctx->pc == 0x352560u) {
        ctx->pc = 0x352560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35255Cu;
        // 0x352560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352564u;
        goto label_352564;
    }
    ctx->pc = 0x35255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352564u);
        ctx->pc = 0x352560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35255Cu;
        // 0x352560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35255Cu, 0x352564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352564u;
label_352564:
    // 0x352564: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x352564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_352568:
    // 0x352568: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x352568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_35256c:
    // 0x35256c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_352570:
    // 0x352570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x352570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_352574:
    // 0x352574: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_352578:
    if (ctx->pc == 0x352578u) {
        ctx->pc = 0x352578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352574u;
        // 0x352578: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35257Cu;
        goto label_35257c;
    }
    ctx->pc = 0x352574u;
    {
        const bool branch_taken_0x352574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x352578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352574u;
        // 0x352578: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352574) {
            ctx->pc = 0x3525D4u;
            goto label_3525d4;
        }
    }
    ctx->pc = 0x35257Cu;
label_35257c:
    // 0x35257c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x35257cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_352580:
    // 0x352580: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x352580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_352584:
    // 0x352584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352588:
    // 0x352588: 0x24c68a08  addiu       $a2, $a2, -0x75F8
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937096));
label_35258c:
    // 0x35258c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_352590:
    // 0x352590: 0xc10ca04  jal         func_432810
label_352594:
    if (ctx->pc == 0x352594u) {
        ctx->pc = 0x352594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352590u;
        // 0x352594: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352598u;
        goto label_352598;
    }
    ctx->pc = 0x352590u;
    SET_GPR_U32(ctx, 31, 0x352598u);
    ctx->pc = 0x352594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352590u;
    // 0x352594: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x352590u, 0x352598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352598u;
label_352598:
    // 0x352598: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x352598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_35259c:
    // 0x35259c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3525a0:
    // 0x3525a0: 0x8c445340  lw          $a0, 0x5340($v0)
    ctx->pc = 0x3525a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_3525a4:
    // 0x3525a4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_3525a8:
    // 0x3525a8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3525a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_3525ac:
    // 0x3525ac: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x3525acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3525b0:
    // 0x3525b0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x3525b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_3525b4:
    // 0x3525b4: 0x24e72430  addiu       $a3, $a3, 0x2430
    ctx->pc = 0x3525b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9264));
label_3525b8:
    // 0x3525b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3525b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3525bc:
    // 0x3525bc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3525bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3525c0:
    // 0x3525c0: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x3525c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3525c4:
    // 0x3525c4: 0xc055354  jal         func_154D50
label_3525c8:
    if (ctx->pc == 0x3525C8u) {
        ctx->pc = 0x3525C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525C4u;
        // 0x3525c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525CCu;
        goto label_3525cc;
    }
    ctx->pc = 0x3525C4u;
    SET_GPR_U32(ctx, 31, 0x3525CCu);
    ctx->pc = 0x3525C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3525C4u;
    // 0x3525c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x3525C4u, 0x3525CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525CCu;
label_3525cc:
    // 0x3525cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3525d0:
    if (ctx->pc == 0x3525D0u) {
        ctx->pc = 0x3525D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525CCu;
        // 0x3525d0: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525D4u;
        goto label_3525d4;
    }
    ctx->pc = 0x3525CCu;
    {
        const bool branch_taken_0x3525cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525CCu;
        // 0x3525d0: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525cc) {
            ctx->pc = 0x3525DCu;
            goto label_3525dc;
        }
    }
    ctx->pc = 0x3525D4u;
label_3525d4:
    // 0x3525d4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x3525d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_3525d8:
    // 0x3525d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3525d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3525dc:
    // 0x3525dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3525dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3525e0:
    // 0x3525e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3525e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3525e4:
    // 0x3525e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3525e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3525e8:
    // 0x3525e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3525e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3525ec:
    // 0x3525ec: 0x3e00008  jr          $ra
label_3525f0:
    if (ctx->pc == 0x3525F0u) {
        ctx->pc = 0x3525F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525ECu;
        // 0x3525f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525F4u;
        goto label_3525f4;
    }
    ctx->pc = 0x3525ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3525F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525ECu;
        // 0x3525f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3525ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3525F4u;
label_3525f4:
    // 0x3525f4: 0x0  nop
    ctx->pc = 0x3525f4u;
    // NOP
    ctx->pc = 0x3525f8u;
}
