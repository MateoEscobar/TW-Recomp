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

// Function: sub_003397A0
// Address: 0x3397a0 - 0x339878
void sub_003397A0_0x3397a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003397A0_0x3397a0");
#endif

    switch (ctx->pc) {
        case 0x3397a0u: goto label_3397a0;
        case 0x3397a4u: goto label_3397a4;
        case 0x3397a8u: goto label_3397a8;
        case 0x3397acu: goto label_3397ac;
        case 0x3397b0u: goto label_3397b0;
        case 0x3397b4u: goto label_3397b4;
        case 0x3397b8u: goto label_3397b8;
        case 0x3397bcu: goto label_3397bc;
        case 0x3397c0u: goto label_3397c0;
        case 0x3397c4u: goto label_3397c4;
        case 0x3397c8u: goto label_3397c8;
        case 0x3397ccu: goto label_3397cc;
        case 0x3397d0u: goto label_3397d0;
        case 0x3397d4u: goto label_3397d4;
        case 0x3397d8u: goto label_3397d8;
        case 0x3397dcu: goto label_3397dc;
        case 0x3397e0u: goto label_3397e0;
        case 0x3397e4u: goto label_3397e4;
        case 0x3397e8u: goto label_3397e8;
        case 0x3397ecu: goto label_3397ec;
        case 0x3397f0u: goto label_3397f0;
        case 0x3397f4u: goto label_3397f4;
        case 0x3397f8u: goto label_3397f8;
        case 0x3397fcu: goto label_3397fc;
        case 0x339800u: goto label_339800;
        case 0x339804u: goto label_339804;
        case 0x339808u: goto label_339808;
        case 0x33980cu: goto label_33980c;
        case 0x339810u: goto label_339810;
        case 0x339814u: goto label_339814;
        case 0x339818u: goto label_339818;
        case 0x33981cu: goto label_33981c;
        case 0x339820u: goto label_339820;
        case 0x339824u: goto label_339824;
        case 0x339828u: goto label_339828;
        case 0x33982cu: goto label_33982c;
        case 0x339830u: goto label_339830;
        case 0x339834u: goto label_339834;
        case 0x339838u: goto label_339838;
        case 0x33983cu: goto label_33983c;
        case 0x339840u: goto label_339840;
        case 0x339844u: goto label_339844;
        case 0x339848u: goto label_339848;
        case 0x33984cu: goto label_33984c;
        case 0x339850u: goto label_339850;
        case 0x339854u: goto label_339854;
        case 0x339858u: goto label_339858;
        case 0x33985cu: goto label_33985c;
        case 0x339860u: goto label_339860;
        case 0x339864u: goto label_339864;
        case 0x339868u: goto label_339868;
        case 0x33986cu: goto label_33986c;
        case 0x339870u: goto label_339870;
        case 0x339874u: goto label_339874;
        default: break;
    }

    ctx->pc = 0x3397a0u;

label_3397a0:
    // 0x3397a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3397a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3397a4:
    // 0x3397a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3397a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3397a8:
    // 0x3397a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3397a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3397ac:
    // 0x3397ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3397acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3397b0:
    // 0x3397b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3397b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3397b4:
    // 0x3397b4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x3397b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3397b8:
    // 0x3397b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3397b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3397bc:
    // 0x3397bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3397bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3397c0:
    // 0x3397c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3397c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3397c4:
    // 0x3397c4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3397c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3397c8:
    // 0x3397c8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3397cc:
    // 0x3397cc: 0x40f809  jalr        $v0
label_3397d0:
    if (ctx->pc == 0x3397D0u) {
        ctx->pc = 0x3397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397CCu;
        // 0x3397d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3397D4u;
        goto label_3397d4;
    }
    ctx->pc = 0x3397CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3397D4u);
        ctx->pc = 0x3397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397CCu;
        // 0x3397d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3397CCu, 0x3397D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3397D4u;
label_3397d4:
    // 0x3397d4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3397d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3397d8:
    // 0x3397d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3397d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3397dc:
    // 0x3397dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3397dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3397e0:
    // 0x3397e0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3397e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3397e4:
    // 0x3397e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3397e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3397e8:
    // 0x3397e8: 0xc0ce512  jal         func_339448
label_3397ec:
    if (ctx->pc == 0x3397ECu) {
        ctx->pc = 0x3397ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397E8u;
        // 0x3397ec: 0x37a80008  ori         $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3397F0u;
        goto label_3397f0;
    }
    ctx->pc = 0x3397E8u;
    SET_GPR_U32(ctx, 31, 0x3397F0u);
    ctx->pc = 0x3397ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397E8u;
    // 0x3397ec: 0x37a80008  ori         $t0, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x3397E8u, 0x3397F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397F0u;
label_3397f0:
    // 0x3397f0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3397f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3397f4:
    // 0x3397f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3397f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3397f8:
    // 0x3397f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3397f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3397fc:
    // 0x3397fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_339800:
    if (ctx->pc == 0x339800u) {
        ctx->pc = 0x339800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397FCu;
        // 0x339800: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339804u;
        goto label_339804;
    }
    ctx->pc = 0x3397FCu;
    {
        const bool branch_taken_0x3397fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3397fc) {
            ctx->pc = 0x339800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3397FCu;
            // 0x339800: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339824u;
            goto label_339824;
        }
    }
    ctx->pc = 0x339804u;
label_339804:
    // 0x339804: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x339804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_339808:
    // 0x339808: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_33980c:
    if (ctx->pc == 0x33980Cu) {
        ctx->pc = 0x33980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339808u;
        // 0x33980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339810u;
        goto label_339810;
    }
    ctx->pc = 0x339808u;
    {
        const bool branch_taken_0x339808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339808u;
        // 0x33980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339808) {
            ctx->pc = 0x33982Cu;
            goto label_33982c;
        }
    }
    ctx->pc = 0x339810u;
label_339810:
    // 0x339810: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x339810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_339814:
    // 0x339814: 0xc0ce4f0  jal         func_3393C0
label_339818:
    if (ctx->pc == 0x339818u) {
        ctx->pc = 0x339818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339814u;
        // 0x339818: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33981Cu;
        goto label_33981c;
    }
    ctx->pc = 0x339814u;
    SET_GPR_U32(ctx, 31, 0x33981Cu);
    ctx->pc = 0x339818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339814u;
    // 0x339818: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393C0u, 0x339814u, 0x33981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33981Cu;
label_33981c:
    // 0x33981c: 0x10000005  b           . + 4 + (0x5 << 2)
label_339820:
    if (ctx->pc == 0x339820u) {
        ctx->pc = 0x339820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33981Cu;
        // 0x339820: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339824u;
        goto label_339824;
    }
    ctx->pc = 0x33981Cu;
    {
        const bool branch_taken_0x33981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33981Cu;
        // 0x339820: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33981c) {
            ctx->pc = 0x339834u;
            goto label_339834;
        }
    }
    ctx->pc = 0x339824u;
label_339824:
    // 0x339824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_339828:
    if (ctx->pc == 0x339828u) {
        ctx->pc = 0x339828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339824u;
        // 0x339828: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33982Cu;
        goto label_33982c;
    }
    ctx->pc = 0x339824u;
    {
        const bool branch_taken_0x339824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339824u;
        // 0x339828: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339824) {
            ctx->pc = 0x339834u;
            goto label_339834;
        }
    }
    ctx->pc = 0x33982Cu;
label_33982c:
    // 0x33982c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x33982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_339830:
    // 0x339830: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x339830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_339834:
    // 0x339834: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x339834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_339838:
    // 0x339838: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x339838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33983c:
    // 0x33983c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_339840:
    if (ctx->pc == 0x339840u) {
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339844u;
        goto label_339844;
    }
    ctx->pc = 0x33983Cu;
    {
        const bool branch_taken_0x33983c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33983c) {
            ctx->pc = 0x339860u;
            goto label_339860;
        }
    }
    ctx->pc = 0x339844u;
label_339844:
    // 0x339844: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x339844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_339848:
    // 0x339848: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x339848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_33984c:
    // 0x33984c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_339850:
    // 0x339850: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x339850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339854:
    // 0x339854: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x339854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_339858:
    // 0x339858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33985c:
    // 0x33985c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x33985cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_339860:
    // 0x339860: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x339860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339864:
    // 0x339864: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x339864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339868:
    // 0x339868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33986c:
    // 0x33986c: 0x3e00008  jr          $ra
label_339870:
    if (ctx->pc == 0x339870u) {
        ctx->pc = 0x339870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33986Cu;
        // 0x339870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339874u;
        goto label_339874;
    }
    ctx->pc = 0x33986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33986Cu;
        // 0x339870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339874u;
label_339874:
    // 0x339874: 0x0  nop
    ctx->pc = 0x339874u;
    // NOP
    ctx->pc = 0x339878u;
}
