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

// Function: sub_001C94C8
// Address: 0x1c94c8 - 0x1c9628
void sub_001C94C8_0x1c94c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C94C8_0x1c94c8");
#endif

    switch (ctx->pc) {
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94d4u: goto label_1c94d4;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c94dcu: goto label_1c94dc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c94e4u: goto label_1c94e4;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c94f0u: goto label_1c94f0;
        case 0x1c94f4u: goto label_1c94f4;
        case 0x1c94f8u: goto label_1c94f8;
        case 0x1c94fcu: goto label_1c94fc;
        case 0x1c9500u: goto label_1c9500;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9508u: goto label_1c9508;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9514u: goto label_1c9514;
        case 0x1c9518u: goto label_1c9518;
        case 0x1c951cu: goto label_1c951c;
        case 0x1c9520u: goto label_1c9520;
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9528u: goto label_1c9528;
        case 0x1c952cu: goto label_1c952c;
        case 0x1c9530u: goto label_1c9530;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c9538u: goto label_1c9538;
        case 0x1c953cu: goto label_1c953c;
        case 0x1c9540u: goto label_1c9540;
        case 0x1c9544u: goto label_1c9544;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c9550u: goto label_1c9550;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9558u: goto label_1c9558;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9564u: goto label_1c9564;
        case 0x1c9568u: goto label_1c9568;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9570u: goto label_1c9570;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c957cu: goto label_1c957c;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c9588u: goto label_1c9588;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9598u: goto label_1c9598;
        case 0x1c959cu: goto label_1c959c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95a4u: goto label_1c95a4;
        case 0x1c95a8u: goto label_1c95a8;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b0u: goto label_1c95b0;
        case 0x1c95b4u: goto label_1c95b4;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95bcu: goto label_1c95bc;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95c4u: goto label_1c95c4;
        case 0x1c95c8u: goto label_1c95c8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d0u: goto label_1c95d0;
        case 0x1c95d4u: goto label_1c95d4;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95dcu: goto label_1c95dc;
        case 0x1c95e0u: goto label_1c95e0;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95e8u: goto label_1c95e8;
        case 0x1c95ecu: goto label_1c95ec;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        default: break;
    }

    ctx->pc = 0x1c94c8u;

label_1c94c8:
    // 0x1c94c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c94cc:
    // 0x1c94cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1c94d0:
    // 0x1c94d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c94d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1c94d4:
    // 0x1c94d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c94d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c94d8:
    // 0x1c94d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c94d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c94dc:
    // 0x1c94dc: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_1c94e0:
    if (ctx->pc == 0x1C94E0u) {
        ctx->pc = 0x1C94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94DCu;
        // 0x1c94e0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94E4u;
        goto label_1c94e4;
    }
    ctx->pc = 0x1C94DCu;
    {
        const bool branch_taken_0x1c94dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94DCu;
        // 0x1c94e0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94dc) {
            ctx->pc = 0x1C9610u;
            goto label_1c9610;
        }
    }
    ctx->pc = 0x1C94E4u;
label_1c94e4:
    // 0x1c94e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1c94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1c94e8:
    // 0x1c94e8: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_1c94ec:
    if (ctx->pc == 0x1C94ECu) {
        ctx->pc = 0x1C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E8u;
        // 0x1c94ec: 0x8e040544  lw          $a0, 0x544($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94F0u;
        goto label_1c94f0;
    }
    ctx->pc = 0x1C94E8u;
    {
        const bool branch_taken_0x1c94e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94e8) {
            ctx->pc = 0x1C94ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C94E8u;
            // 0x1c94ec: 0x8e040544  lw          $a0, 0x544($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9534u;
            goto label_1c9534;
        }
    }
    ctx->pc = 0x1C94F0u;
label_1c94f0:
    // 0x1c94f0: 0xc10c313  jal         func_430C4C
label_1c94f4:
    if (ctx->pc == 0x1C94F4u) {
        ctx->pc = 0x1C94F8u;
        goto label_1c94f8;
    }
    ctx->pc = 0x1C94F0u;
    SET_GPR_U32(ctx, 31, 0x1C94F8u);
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1C94F0u, 0x1C94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94F8u;
label_1c94f8:
    // 0x1c94f8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1c94fc:
    if (ctx->pc == 0x1C94FCu) {
        ctx->pc = 0x1C94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F8u;
        // 0x1c94fc: 0x8e040544  lw          $a0, 0x544($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9500u;
        goto label_1c9500;
    }
    ctx->pc = 0x1C94F8u;
    {
        const bool branch_taken_0x1c94f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c94f8) {
            ctx->pc = 0x1C94FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C94F8u;
            // 0x1c94fc: 0x8e040544  lw          $a0, 0x544($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9534u;
            goto label_1c9534;
        }
    }
    ctx->pc = 0x1C9500u;
label_1c9500:
    // 0x1c9500: 0xc079cb0  jal         func_1E72C0
label_1c9504:
    if (ctx->pc == 0x1C9504u) {
        ctx->pc = 0x1C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9500u;
        // 0x1c9504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9508u;
        goto label_1c9508;
    }
    ctx->pc = 0x1C9500u;
    SET_GPR_U32(ctx, 31, 0x1C9508u);
    ctx->pc = 0x1C9504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9500u;
    // 0x1c9504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1C9500u, 0x1C9508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9508u;
label_1c9508:
    // 0x1c9508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c950c:
    // 0x1c950c: 0xc079cc0  jal         func_1E7300
label_1c9510:
    if (ctx->pc == 0x1C9510u) {
        ctx->pc = 0x1C9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C950Cu;
        // 0x1c9510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9514u;
        goto label_1c9514;
    }
    ctx->pc = 0x1C950Cu;
    SET_GPR_U32(ctx, 31, 0x1C9514u);
    ctx->pc = 0x1C9510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C950Cu;
    // 0x1c9510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1C950Cu, 0x1C9514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9514u;
label_1c9514:
    // 0x1c9514: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x1c9514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
label_1c9518:
    // 0x1c9518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c951c:
    // 0x1c951c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c951cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c9520:
    // 0x1c9520: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c9524:
    // 0x1c9524: 0x60f809  jalr        $v1
label_1c9528:
    if (ctx->pc == 0x1C9528u) {
        ctx->pc = 0x1C9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9524u;
        // 0x1c9528: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C952Cu;
        goto label_1c952c;
    }
    ctx->pc = 0x1C9524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C952Cu);
        ctx->pc = 0x1C9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9524u;
        // 0x1c9528: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9524u, 0x1C952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C952Cu;
label_1c952c:
    // 0x1c952c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1c9530:
    if (ctx->pc == 0x1C9530u) {
        ctx->pc = 0x1C9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C952Cu;
        // 0x1c9530: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9534u;
        goto label_1c9534;
    }
    ctx->pc = 0x1C952Cu;
    {
        const bool branch_taken_0x1c952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C952Cu;
        // 0x1c9530: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c952c) {
            ctx->pc = 0x1C9614u;
            goto label_1c9614;
        }
    }
    ctx->pc = 0x1C9534u;
label_1c9534:
    // 0x1c9534: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1c9534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1c9538:
    // 0x1c9538: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c953c:
    // 0x1c953c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1c9540:
    if (ctx->pc == 0x1C9540u) {
        ctx->pc = 0x1C9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C953Cu;
        // 0x1c9540: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9544u;
        goto label_1c9544;
    }
    ctx->pc = 0x1C953Cu;
    {
        const bool branch_taken_0x1c953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C953Cu;
        // 0x1c9540: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c953c) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C9544u;
label_1c9544:
    // 0x1c9544: 0x0  nop
    ctx->pc = 0x1c9544u;
    // NOP
label_1c9548:
    // 0x1c9548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c954c:
    // 0x1c954c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c9550:
    // 0x1c9550: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_1c9554:
    if (ctx->pc == 0x1C9554u) {
        ctx->pc = 0x1C9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9550u;
        // 0x1c9554: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9558u;
        goto label_1c9558;
    }
    ctx->pc = 0x1C9550u;
    {
        const bool branch_taken_0x1c9550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9550u;
        // 0x1c9554: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9550) {
            ctx->pc = 0x1C95ECu;
            goto label_1c95ec;
        }
    }
    ctx->pc = 0x1C9558u;
label_1c9558:
    // 0x1c9558: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c9558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c955c:
    // 0x1c955c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1c9560:
    if (ctx->pc == 0x1C9560u) {
        ctx->pc = 0x1C9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C955Cu;
        // 0x1c9560: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9564u;
        goto label_1c9564;
    }
    ctx->pc = 0x1C955Cu;
    {
        const bool branch_taken_0x1c955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C955Cu;
        // 0x1c9560: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c955c) {
            ctx->pc = 0x1C9578u;
            goto label_1c9578;
        }
    }
    ctx->pc = 0x1C9564u;
label_1c9564:
    // 0x1c9564: 0xc10c313  jal         func_430C4C
label_1c9568:
    if (ctx->pc == 0x1C9568u) {
        ctx->pc = 0x1C9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9564u;
        // 0x1c9568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C956Cu;
        goto label_1c956c;
    }
    ctx->pc = 0x1C9564u;
    SET_GPR_U32(ctx, 31, 0x1C956Cu);
    ctx->pc = 0x1C9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9564u;
    // 0x1c9568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1C9564u, 0x1C956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C956Cu;
label_1c956c:
    // 0x1c956c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1c9570:
    if (ctx->pc == 0x1C9570u) {
        ctx->pc = 0x1C9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C956Cu;
        // 0x1c9570: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9574u;
        goto label_1c9574;
    }
    ctx->pc = 0x1C956Cu;
    {
        const bool branch_taken_0x1c956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C956Cu;
        // 0x1c9570: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c956c) {
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C9574u;
label_1c9574:
    // 0x1c9574: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9578:
    // 0x1c9578: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_1c957c:
    if (ctx->pc == 0x1C957Cu) {
        ctx->pc = 0x1C957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9578u;
        // 0x1c957c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9580u;
        goto label_1c9580;
    }
    ctx->pc = 0x1C9578u;
    {
        const bool branch_taken_0x1c9578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9578) {
            ctx->pc = 0x1C957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9578u;
            // 0x1c957c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C9580u;
label_1c9580:
    // 0x1c9580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9584:
    // 0x1c9584: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1c9588:
    if (ctx->pc == 0x1C9588u) {
        ctx->pc = 0x1C9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9584u;
        // 0x1c9588: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C958Cu;
        goto label_1c958c;
    }
    ctx->pc = 0x1C9584u;
    {
        const bool branch_taken_0x1c9584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9584u;
        // 0x1c9588: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9584) {
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C958Cu;
label_1c958c:
    // 0x1c958c: 0x8e040544  lw          $a0, 0x544($s0)
    ctx->pc = 0x1c958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
label_1c9590:
    // 0x1c9590: 0xc139f8a  jal         func_4E7E28
label_1c9594:
    if (ctx->pc == 0x1C9594u) {
        ctx->pc = 0x1C9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9590u;
        // 0x1c9594: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9598u;
        goto label_1c9598;
    }
    ctx->pc = 0x1C9590u;
    SET_GPR_U32(ctx, 31, 0x1C9598u);
    ctx->pc = 0x1C9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9590u;
    // 0x1c9594: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7E28u, 0x1C9590u, 0x1C9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9598u;
label_1c9598:
    // 0x1c9598: 0x8e060548  lw          $a2, 0x548($s0)
    ctx->pc = 0x1c9598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1352)));
label_1c959c:
    // 0x1c959c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c95a0:
    // 0x1c95a0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1c95a4:
    // 0x1c95a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c95a8:
    // 0x1c95a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1c95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c95ac:
    // 0x1c95ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c95b0:
    // 0x1c95b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c95b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c95b4:
    // 0x1c95b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1c95b8:
    // 0x1c95b8: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1c95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1c95bc:
    // 0x1c95bc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c95c0:
    // 0x1c95c0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c95c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c95c4:
    // 0x1c95c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1c95c8:
    if (ctx->pc == 0x1C95C8u) {
        ctx->pc = 0x1C95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95C4u;
        // 0x1c95c8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95CCu;
        goto label_1c95cc;
    }
    ctx->pc = 0x1C95C4u;
    {
        const bool branch_taken_0x1c95c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95c4) {
            ctx->pc = 0x1C95C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C95C4u;
            // 0x1c95c8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C95E4u;
            goto label_1c95e4;
        }
    }
    ctx->pc = 0x1C95CCu;
label_1c95cc:
    // 0x1c95cc: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1c95ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c95d0:
    // 0x1c95d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1c95d4:
    if (ctx->pc == 0x1C95D4u) {
        ctx->pc = 0x1C95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95D0u;
        // 0x1c95d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95D8u;
        goto label_1c95d8;
    }
    ctx->pc = 0x1C95D0u;
    {
        const bool branch_taken_0x1c95d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c95d0) {
            ctx->pc = 0x1C95D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C95D0u;
            // 0x1c95d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C95D8u;
            goto label_1c95d8;
        }
    }
    ctx->pc = 0x1C95D8u;
label_1c95d8:
    // 0x1c95d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c95d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c95dc:
    // 0x1c95dc: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1c95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1c95e0:
    // 0x1c95e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c95e4:
    // 0x1c95e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c95e8:
    // 0x1c95e8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1c95ec:
    // 0x1c95ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c95f0:
    // 0x1c95f0: 0x8e040544  lw          $a0, 0x544($s0)
    ctx->pc = 0x1c95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
label_1c95f4:
    // 0x1c95f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c95f8:
    // 0x1c95f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c95fc:
    // 0x1c95fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c9600:
    // 0x1c9600: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c9600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c9604:
    // 0x1c9604: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c9608:
    // 0x1c9608: 0x1462ffcf  bne         $v1, $v0, . + 4 + (-0x31 << 2)
label_1c960c:
    if (ctx->pc == 0x1C960Cu) {
        ctx->pc = 0x1C960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9608u;
        // 0x1c960c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9610u;
        goto label_1c9610;
    }
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9608u;
        // 0x1c960c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C9548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9548;
        }
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c9610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c9614:
    // 0x1c9614: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c9614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c9618:
    // 0x1c9618: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c961c:
    // 0x1c961c: 0x3e00008  jr          $ra
label_1c9620:
    if (ctx->pc == 0x1C9620u) {
        ctx->pc = 0x1C9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C961Cu;
        // 0x1c9620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9624u;
        goto label_1c9624;
    }
    ctx->pc = 0x1C961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C961Cu;
        // 0x1c9620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9624u;
label_1c9624:
    // 0x1c9624: 0x0  nop
    ctx->pc = 0x1c9624u;
    // NOP
    ctx->pc = 0x1c9628u;
}
