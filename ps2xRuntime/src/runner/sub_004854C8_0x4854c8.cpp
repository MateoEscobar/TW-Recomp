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

// Function: sub_004854C8
// Address: 0x4854c8 - 0x485690
void sub_004854C8_0x4854c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004854C8_0x4854c8");
#endif

    switch (ctx->pc) {
        case 0x4855a8u: goto label_4855a8;
        case 0x4855bcu: goto label_4855bc;
        case 0x4855e0u: goto label_4855e0;
        case 0x4855f0u: goto label_4855f0;
        case 0x485658u: goto label_485658;
        case 0x485664u: goto label_485664;
        default: break;
    }

    ctx->pc = 0x4854c8u;

    // 0x4854c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4854c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4854cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4854ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4854d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4854d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4854d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4854d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4854d8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4854d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4854dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4854dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4854e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4854e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4854e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4854e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4854e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4854e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4854ec: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x4854ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x4854f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4854f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4854f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4854f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4854f8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x4854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4854fc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x4854fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x485500: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x485500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x485504: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x485504u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x485508: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x485508u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x48550c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x48550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x485510: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x485510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x485514: 0x8eb10014  lw          $s1, 0x14($s5)
    ctx->pc = 0x485514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x485518: 0x10640048  beq         $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x485518u;
    {
        const bool branch_taken_0x485518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x48551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485518u;
        // 0x48551c: 0x8e720014  lw          $s2, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485518) {
            ctx->pc = 0x48563Cu;
            goto label_48563c;
        }
    }
    ctx->pc = 0x485520u;
    // 0x485520: 0x2c620809  sltiu       $v0, $v1, 0x809
    ctx->pc = 0x485520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2057) ? 1 : 0);
    // 0x485524: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x485524u;
    {
        const bool branch_taken_0x485524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485524u;
        // 0x485528: 0x24020408  addiu       $v0, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485524) {
            ctx->pc = 0x485560u;
            goto label_485560;
        }
    }
    ctx->pc = 0x48552Cu;
    // 0x48552c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x48552Cu;
    {
        const bool branch_taken_0x48552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x485530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48552Cu;
        // 0x485530: 0x2c620409  sltiu       $v0, $v1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1033) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48552c) {
            ctx->pc = 0x4855A0u;
            goto label_4855a0;
        }
    }
    ctx->pc = 0x485534u;
    // 0x485534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x485534u;
    {
        const bool branch_taken_0x485534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485534u;
        // 0x485538: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485534) {
            ctx->pc = 0x48554Cu;
            goto label_48554c;
        }
    }
    ctx->pc = 0x48553Cu;
    // 0x48553c: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x48553Cu;
    {
        const bool branch_taken_0x48553c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x485540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48553Cu;
        // 0x485540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48553c) {
            ctx->pc = 0x48563Cu;
            goto label_48563c;
        }
    }
    ctx->pc = 0x485544u;
    // 0x485544: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x485544u;
    {
        const bool branch_taken_0x485544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485544) {
            ctx->pc = 0x485648u;
            goto label_485648;
        }
    }
    ctx->pc = 0x48554Cu;
label_48554c:
    // 0x48554c: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x48554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x485550: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x485550u;
    {
        const bool branch_taken_0x485550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x485554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485550u;
        // 0x485554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485550) {
            ctx->pc = 0x4855D8u;
            goto label_4855d8;
        }
    }
    ctx->pc = 0x485558u;
    // 0x485558: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x485558u;
    {
        const bool branch_taken_0x485558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485558) {
            ctx->pc = 0x485648u;
            goto label_485648;
        }
    }
    ctx->pc = 0x485560u;
label_485560:
    // 0x485560: 0x24022004  addiu       $v0, $zero, 0x2004
    ctx->pc = 0x485560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    // 0x485564: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x485564u;
    {
        const bool branch_taken_0x485564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x485568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485564u;
        // 0x485568: 0x2c622005  sltiu       $v0, $v1, 0x2005 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x485564) {
            ctx->pc = 0x485644u;
            goto label_485644;
        }
    }
    ctx->pc = 0x48556Cu;
    // 0x48556c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48556Cu;
    {
        const bool branch_taken_0x48556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48556Cu;
        // 0x485570: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48556c) {
            ctx->pc = 0x485584u;
            goto label_485584;
        }
    }
    ctx->pc = 0x485574u;
    // 0x485574: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x485574u;
    {
        const bool branch_taken_0x485574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x485578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485574u;
        // 0x485578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485574) {
            ctx->pc = 0x4855D8u;
            goto label_4855d8;
        }
    }
    ctx->pc = 0x48557Cu;
    // 0x48557c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x48557Cu;
    {
        const bool branch_taken_0x48557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48557c) {
            ctx->pc = 0x485648u;
            goto label_485648;
        }
    }
    ctx->pc = 0x485584u;
label_485584:
    // 0x485584: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x485584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x485588: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x485588u;
    {
        const bool branch_taken_0x485588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485588u;
        // 0x48558c: 0x24022020  addiu       $v0, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485588) {
            ctx->pc = 0x485644u;
            goto label_485644;
        }
    }
    ctx->pc = 0x485590u;
    // 0x485590: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x485590u;
    {
        const bool branch_taken_0x485590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x485594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485590u;
        // 0x485594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485590) {
            ctx->pc = 0x485648u;
            goto label_485648;
        }
    }
    ctx->pc = 0x485598u;
    // 0x485598: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x485598u;
    {
        const bool branch_taken_0x485598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485598u;
        // 0x48559c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485598) {
            ctx->pc = 0x485664u;
            goto label_485664;
        }
    }
    ctx->pc = 0x4855A0u;
label_4855a0:
    // 0x4855a0: 0x18e00026  blez        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x4855A0u;
    {
        const bool branch_taken_0x4855a0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4855A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4855A0u;
        // 0x4855a4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4855a0) {
            ctx->pc = 0x48563Cu;
            goto label_48563c;
        }
    }
    ctx->pc = 0x4855A8u;
label_4855a8:
    // 0x4855a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4855a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4855acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4855b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4855b4: 0xc10c190  jal         func_430640
    ctx->pc = 0x4855B4u;
    SET_GPR_U32(ctx, 31, 0x4855BCu);
    ctx->pc = 0x4855B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4855B4u;
    // 0x4855b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4855B4u, 0x4855BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4855BCu;
label_4855bc:
    // 0x4855bc: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x4855bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4855c0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4855c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4855c4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x4855c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4855c8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4855C8u;
    {
        const bool branch_taken_0x4855c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4855C8u;
        // 0x4855cc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4855c8) {
            ctx->pc = 0x4855A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4855a8;
        }
    }
    ctx->pc = 0x4855D0u;
    // 0x4855d0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4855D0u;
    {
        const bool branch_taken_0x4855d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4855D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4855D0u;
        // 0x4855d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4855d0) {
            ctx->pc = 0x485664u;
            goto label_485664;
        }
    }
    ctx->pc = 0x4855D8u;
label_4855d8:
    // 0x4855d8: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4855D8u;
    {
        const bool branch_taken_0x4855d8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4855D8u;
        // 0x4855dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4855d8) {
            ctx->pc = 0x48563Cu;
            goto label_48563c;
        }
    }
    ctx->pc = 0x4855E0u;
label_4855e0:
    // 0x4855e0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x4855e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4855e4: 0x1a80000e  blez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x4855E4u;
    {
        const bool branch_taken_0x4855e4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x4855E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4855E4u;
        // 0x4855e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4855e4) {
            ctx->pc = 0x485620u;
            goto label_485620;
        }
    }
    ctx->pc = 0x4855ECu;
    // 0x4855ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4855ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4855f0:
    // 0x4855f0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x4855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x4855f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4855f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4855f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4855f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4855fc: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x4855fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x485600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x485600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x485604: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x485604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x485608: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x485608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x48560c: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x48560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x485610: 0xa8c90003  swl         $t1, 0x3($a2)
    ctx->pc = 0x485610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x485614: 0xb8c90000  swr         $t1, 0x0($a2)
    ctx->pc = 0x485614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x485618: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x485618u;
    {
        const bool branch_taken_0x485618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485618u;
        // 0x48561c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485618) {
            ctx->pc = 0x4855F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4855f0;
        }
    }
    ctx->pc = 0x485620u;
label_485620:
    // 0x485620: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x485620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x485624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485628: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x485628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x48562c: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x48562cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x485630: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x485630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x485634: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x485634u;
    {
        const bool branch_taken_0x485634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x485638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485634u;
        // 0x485638: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485634) {
            ctx->pc = 0x4855E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4855e0;
        }
    }
    ctx->pc = 0x48563Cu;
label_48563c:
    // 0x48563c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48563Cu;
    {
        const bool branch_taken_0x48563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48563Cu;
        // 0x485640: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48563c) {
            ctx->pc = 0x485664u;
            goto label_485664;
        }
    }
    ctx->pc = 0x485644u;
label_485644:
    // 0x485644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485648:
    // 0x485648: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x485648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48564c: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x48564cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x485650: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x485650u;
    SET_GPR_U32(ctx, 31, 0x485658u);
    ctx->pc = 0x485654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485650u;
    // 0x485654: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x485650u, 0x485658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485658u;
label_485658:
    // 0x485658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x485658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48565c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x48565Cu;
    SET_GPR_U32(ctx, 31, 0x485664u);
    ctx->pc = 0x485660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48565Cu;
    // 0x485660: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48565Cu, 0x485664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485664u;
label_485664:
    // 0x485664: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485668: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x485668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48566c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x48566cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x485670: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x485670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x485674: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x485674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485678: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x485678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48567c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x48567cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485684: 0x3e00008  jr          $ra
    ctx->pc = 0x485684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485684u;
        // 0x485688: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48568Cu;
    // 0x48568c: 0x0  nop
    ctx->pc = 0x48568cu;
    // NOP
    ctx->pc = 0x485690u;
}
