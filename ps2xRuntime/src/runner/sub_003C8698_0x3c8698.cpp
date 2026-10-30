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

// Function: sub_003C8698
// Address: 0x3c8698 - 0x3c87a0
void sub_003C8698_0x3c8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8698_0x3c8698");
#endif

    switch (ctx->pc) {
        case 0x3c8698u: goto label_3c8698;
        case 0x3c869cu: goto label_3c869c;
        case 0x3c86a0u: goto label_3c86a0;
        case 0x3c86a4u: goto label_3c86a4;
        case 0x3c86a8u: goto label_3c86a8;
        case 0x3c86acu: goto label_3c86ac;
        case 0x3c86b0u: goto label_3c86b0;
        case 0x3c86b4u: goto label_3c86b4;
        case 0x3c86b8u: goto label_3c86b8;
        case 0x3c86bcu: goto label_3c86bc;
        case 0x3c86c0u: goto label_3c86c0;
        case 0x3c86c4u: goto label_3c86c4;
        case 0x3c86c8u: goto label_3c86c8;
        case 0x3c86ccu: goto label_3c86cc;
        case 0x3c86d0u: goto label_3c86d0;
        case 0x3c86d4u: goto label_3c86d4;
        case 0x3c86d8u: goto label_3c86d8;
        case 0x3c86dcu: goto label_3c86dc;
        case 0x3c86e0u: goto label_3c86e0;
        case 0x3c86e4u: goto label_3c86e4;
        case 0x3c86e8u: goto label_3c86e8;
        case 0x3c86ecu: goto label_3c86ec;
        case 0x3c86f0u: goto label_3c86f0;
        case 0x3c86f4u: goto label_3c86f4;
        case 0x3c86f8u: goto label_3c86f8;
        case 0x3c86fcu: goto label_3c86fc;
        case 0x3c8700u: goto label_3c8700;
        case 0x3c8704u: goto label_3c8704;
        case 0x3c8708u: goto label_3c8708;
        case 0x3c870cu: goto label_3c870c;
        case 0x3c8710u: goto label_3c8710;
        case 0x3c8714u: goto label_3c8714;
        case 0x3c8718u: goto label_3c8718;
        case 0x3c871cu: goto label_3c871c;
        case 0x3c8720u: goto label_3c8720;
        case 0x3c8724u: goto label_3c8724;
        case 0x3c8728u: goto label_3c8728;
        case 0x3c872cu: goto label_3c872c;
        case 0x3c8730u: goto label_3c8730;
        case 0x3c8734u: goto label_3c8734;
        case 0x3c8738u: goto label_3c8738;
        case 0x3c873cu: goto label_3c873c;
        case 0x3c8740u: goto label_3c8740;
        case 0x3c8744u: goto label_3c8744;
        case 0x3c8748u: goto label_3c8748;
        case 0x3c874cu: goto label_3c874c;
        case 0x3c8750u: goto label_3c8750;
        case 0x3c8754u: goto label_3c8754;
        case 0x3c8758u: goto label_3c8758;
        case 0x3c875cu: goto label_3c875c;
        case 0x3c8760u: goto label_3c8760;
        case 0x3c8764u: goto label_3c8764;
        case 0x3c8768u: goto label_3c8768;
        case 0x3c876cu: goto label_3c876c;
        case 0x3c8770u: goto label_3c8770;
        case 0x3c8774u: goto label_3c8774;
        case 0x3c8778u: goto label_3c8778;
        case 0x3c877cu: goto label_3c877c;
        case 0x3c8780u: goto label_3c8780;
        case 0x3c8784u: goto label_3c8784;
        case 0x3c8788u: goto label_3c8788;
        case 0x3c878cu: goto label_3c878c;
        case 0x3c8790u: goto label_3c8790;
        case 0x3c8794u: goto label_3c8794;
        case 0x3c8798u: goto label_3c8798;
        case 0x3c879cu: goto label_3c879c;
        default: break;
    }

    ctx->pc = 0x3c8698u;

label_3c8698:
    // 0x3c8698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c869c:
    // 0x3c869c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c86a0:
    // 0x3c86a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c86a4:
    // 0x3c86a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c86a8:
    // 0x3c86a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c86a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c86ac:
    // 0x3c86ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c86acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c86b0:
    // 0x3c86b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c86b4:
    // 0x3c86b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c86b8:
    // 0x3c86b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c86b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c86bc:
    // 0x3c86bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c86c0:
    // 0x3c86c0: 0x40f809  jalr        $v0
label_3c86c4:
    if (ctx->pc == 0x3C86C4u) {
        ctx->pc = 0x3C86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86C0u;
        // 0x3c86c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86C8u;
        goto label_3c86c8;
    }
    ctx->pc = 0x3C86C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C86C8u);
        ctx->pc = 0x3C86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86C0u;
        // 0x3c86c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C86C0u, 0x3C86C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C86C8u;
label_3c86c8:
    // 0x3c86c8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3c86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3c86cc:
    // 0x3c86cc: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
label_3c86d0:
    if (ctx->pc == 0x3C86D0u) {
        ctx->pc = 0x3C86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86CCu;
        // 0x3c86d0: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86D4u;
        goto label_3c86d4;
    }
    ctx->pc = 0x3C86CCu;
    {
        const bool branch_taken_0x3c86cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86CCu;
        // 0x3c86d0: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86cc) {
            ctx->pc = 0x3C8714u;
            goto label_3c8714;
        }
    }
    ctx->pc = 0x3C86D4u;
label_3c86d4:
    // 0x3c86d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c86d8:
    if (ctx->pc == 0x3C86D8u) {
        ctx->pc = 0x3C86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86D4u;
        // 0x3c86d8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86DCu;
        goto label_3c86dc;
    }
    ctx->pc = 0x3C86D4u;
    {
        const bool branch_taken_0x3c86d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86D4u;
        // 0x3c86d8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86d4) {
            ctx->pc = 0x3C86ECu;
            goto label_3c86ec;
        }
    }
    ctx->pc = 0x3C86DCu;
label_3c86dc:
    // 0x3c86dc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3c86e0:
    if (ctx->pc == 0x3C86E0u) {
        ctx->pc = 0x3C86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86DCu;
        // 0x3c86e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86E4u;
        goto label_3c86e4;
    }
    ctx->pc = 0x3C86DCu;
    {
        const bool branch_taken_0x3c86dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86DCu;
        // 0x3c86e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86dc) {
            ctx->pc = 0x3C8700u;
            goto label_3c8700;
        }
    }
    ctx->pc = 0x3C86E4u;
label_3c86e4:
    // 0x3c86e4: 0x10000029  b           . + 4 + (0x29 << 2)
label_3c86e8:
    if (ctx->pc == 0x3C86E8u) {
        ctx->pc = 0x3C86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86E4u;
        // 0x3c86e8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86ECu;
        goto label_3c86ec;
    }
    ctx->pc = 0x3C86E4u;
    {
        const bool branch_taken_0x3c86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86E4u;
        // 0x3c86e8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86e4) {
            ctx->pc = 0x3C878Cu;
            goto label_3c878c;
        }
    }
    ctx->pc = 0x3C86ECu;
label_3c86ec:
    // 0x3c86ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c86f0:
    // 0x3c86f0: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_3c86f4:
    if (ctx->pc == 0x3C86F4u) {
        ctx->pc = 0x3C86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86F0u;
        // 0x3c86f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86F8u;
        goto label_3c86f8;
    }
    ctx->pc = 0x3C86F0u;
    {
        const bool branch_taken_0x3c86f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86F0u;
        // 0x3c86f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86f0) {
            ctx->pc = 0x3C8724u;
            goto label_3c8724;
        }
    }
    ctx->pc = 0x3C86F8u;
label_3c86f8:
    // 0x3c86f8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3c86fc:
    if (ctx->pc == 0x3C86FCu) {
        ctx->pc = 0x3C86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86F8u;
        // 0x3c86fc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8700u;
        goto label_3c8700;
    }
    ctx->pc = 0x3C86F8u;
    {
        const bool branch_taken_0x3c86f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86F8u;
        // 0x3c86fc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86f8) {
            ctx->pc = 0x3C878Cu;
            goto label_3c878c;
        }
    }
    ctx->pc = 0x3C8700u;
label_3c8700:
    // 0x3c8700: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3c8700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3c8704:
    // 0x3c8704: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3c8704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3c8708:
    // 0x3c8708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c8708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c870c:
    // 0x3c870c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3c8710:
    if (ctx->pc == 0x3C8710u) {
        ctx->pc = 0x3C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C870Cu;
        // 0x3c8710: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8714u;
        goto label_3c8714;
    }
    ctx->pc = 0x3C870Cu;
    {
        const bool branch_taken_0x3c870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C870Cu;
        // 0x3c8710: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c870c) {
            ctx->pc = 0x3C8784u;
            goto label_3c8784;
        }
    }
    ctx->pc = 0x3C8714u;
label_3c8714:
    // 0x3c8714: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3c8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3c8718:
    // 0x3c8718: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c8718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3c871c:
    // 0x3c871c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3c8720:
    if (ctx->pc == 0x3C8720u) {
        ctx->pc = 0x3C8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C871Cu;
        // 0x3c8720: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8724u;
        goto label_3c8724;
    }
    ctx->pc = 0x3C871Cu;
    {
        const bool branch_taken_0x3c871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C871Cu;
        // 0x3c8720: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c871c) {
            ctx->pc = 0x3C8784u;
            goto label_3c8784;
        }
    }
    ctx->pc = 0x3C8724u;
label_3c8724:
    // 0x3c8724: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c8724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c8728:
    // 0x3c8728: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x3c8728u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3c872c:
    // 0x3c872c: 0xc136ad6  jal         func_4DAB58
label_3c8730:
    if (ctx->pc == 0x3C8730u) {
        ctx->pc = 0x3C8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C872Cu;
        // 0x3c8730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8734u;
        goto label_3c8734;
    }
    ctx->pc = 0x3C872Cu;
    SET_GPR_U32(ctx, 31, 0x3C8734u);
    ctx->pc = 0x3C8730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C872Cu;
    // 0x3c8730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3C872Cu, 0x3C8734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8734u;
label_3c8734:
    // 0x3c8734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c8734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8738:
    // 0x3c8738: 0xc136ad4  jal         func_4DAB50
label_3c873c:
    if (ctx->pc == 0x3C873Cu) {
        ctx->pc = 0x3C873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8738u;
        // 0x3c873c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8740u;
        goto label_3c8740;
    }
    ctx->pc = 0x3C8738u;
    SET_GPR_U32(ctx, 31, 0x3C8740u);
    ctx->pc = 0x3C873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8738u;
    // 0x3c873c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3C8738u, 0x3C8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8740u;
label_3c8740:
    // 0x3c8740: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3c8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3c8744:
    // 0x3c8744: 0x2404005d  addiu       $a0, $zero, 0x5D
    ctx->pc = 0x3c8744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_3c8748:
    // 0x3c8748: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3c8748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c874c:
    // 0x3c874c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3c874cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3c8750:
    // 0x3c8750: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c8754:
    // 0x3c8754: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_3c8758:
    if (ctx->pc == 0x3C8758u) {
        ctx->pc = 0x3C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8754u;
        // 0x3c8758: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C875Cu;
        goto label_3c875c;
    }
    ctx->pc = 0x3C8754u;
    {
        const bool branch_taken_0x3c8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8754u;
        // 0x3c8758: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8754) {
            ctx->pc = 0x3C8770u;
            goto label_3c8770;
        }
    }
    ctx->pc = 0x3C875Cu;
label_3c875c:
    // 0x3c875c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8760:
    // 0x3c8760: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3c8760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3c8764:
    // 0x3c8764: 0xac434480  sw          $v1, 0x4480($v0)
    ctx->pc = 0x3c8764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17536), GPR_U32(ctx, 3));
label_3c8768:
    // 0x3c8768: 0xc0f1b86  jal         func_3C6E18
label_3c876c:
    if (ctx->pc == 0x3C876Cu) {
        ctx->pc = 0x3C876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8768u;
        // 0x3c876c: 0x248416c0  addiu       $a0, $a0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8770u;
        goto label_3c8770;
    }
    ctx->pc = 0x3C8768u;
    SET_GPR_U32(ctx, 31, 0x3C8770u);
    ctx->pc = 0x3C876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8768u;
    // 0x3c876c: 0x248416c0  addiu       $a0, $a0, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6E18u, 0x3C8768u, 0x3C8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8770u;
label_3c8770:
    // 0x3c8770: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8774:
    // 0x3c8774: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c8774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c8778:
    // 0x3c8778: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c877c:
    // 0x3c877c: 0x60f809  jalr        $v1
label_3c8780:
    if (ctx->pc == 0x3C8780u) {
        ctx->pc = 0x3C8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C877Cu;
        // 0x3c8780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8784u;
        goto label_3c8784;
    }
    ctx->pc = 0x3C877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C8784u);
        ctx->pc = 0x3C8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C877Cu;
        // 0x3c8780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C877Cu, 0x3C8784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8784u;
label_3c8784:
    // 0x3c8784: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c8784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8788:
    // 0x3c8788: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c8788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c878c:
    // 0x3c878c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c878cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8790:
    // 0x3c8790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8794:
    // 0x3c8794: 0x3e00008  jr          $ra
label_3c8798:
    if (ctx->pc == 0x3C8798u) {
        ctx->pc = 0x3C8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8794u;
        // 0x3c8798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C879Cu;
        goto label_3c879c;
    }
    ctx->pc = 0x3C8794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8794u;
        // 0x3c8798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C879Cu;
label_3c879c:
    // 0x3c879c: 0x0  nop
    ctx->pc = 0x3c879cu;
    // NOP
    ctx->pc = 0x3c87a0u;
}
