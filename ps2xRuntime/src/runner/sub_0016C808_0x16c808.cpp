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

// Function: sub_0016C808
// Address: 0x16c808 - 0x16c978
void sub_0016C808_0x16c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C808_0x16c808");
#endif

    switch (ctx->pc) {
        case 0x16c808u: goto label_16c808;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c810u: goto label_16c810;
        case 0x16c814u: goto label_16c814;
        case 0x16c818u: goto label_16c818;
        case 0x16c81cu: goto label_16c81c;
        case 0x16c820u: goto label_16c820;
        case 0x16c824u: goto label_16c824;
        case 0x16c828u: goto label_16c828;
        case 0x16c82cu: goto label_16c82c;
        case 0x16c830u: goto label_16c830;
        case 0x16c834u: goto label_16c834;
        case 0x16c838u: goto label_16c838;
        case 0x16c83cu: goto label_16c83c;
        case 0x16c840u: goto label_16c840;
        case 0x16c844u: goto label_16c844;
        case 0x16c848u: goto label_16c848;
        case 0x16c84cu: goto label_16c84c;
        case 0x16c850u: goto label_16c850;
        case 0x16c854u: goto label_16c854;
        case 0x16c858u: goto label_16c858;
        case 0x16c85cu: goto label_16c85c;
        case 0x16c860u: goto label_16c860;
        case 0x16c864u: goto label_16c864;
        case 0x16c868u: goto label_16c868;
        case 0x16c86cu: goto label_16c86c;
        case 0x16c870u: goto label_16c870;
        case 0x16c874u: goto label_16c874;
        case 0x16c878u: goto label_16c878;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c880u: goto label_16c880;
        case 0x16c884u: goto label_16c884;
        case 0x16c888u: goto label_16c888;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c890u: goto label_16c890;
        case 0x16c894u: goto label_16c894;
        case 0x16c898u: goto label_16c898;
        case 0x16c89cu: goto label_16c89c;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8acu: goto label_16c8ac;
        case 0x16c8b0u: goto label_16c8b0;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8b8u: goto label_16c8b8;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c8c4u: goto label_16c8c4;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8ccu: goto label_16c8cc;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8d8u: goto label_16c8d8;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8e4u: goto label_16c8e4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c8f0u: goto label_16c8f0;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c8fcu: goto label_16c8fc;
        case 0x16c900u: goto label_16c900;
        case 0x16c904u: goto label_16c904;
        case 0x16c908u: goto label_16c908;
        case 0x16c90cu: goto label_16c90c;
        case 0x16c910u: goto label_16c910;
        case 0x16c914u: goto label_16c914;
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        default: break;
    }

    ctx->pc = 0x16c808u;

label_16c808:
    // 0x16c808: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_16c80c:
    // 0x16c80c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_16c810:
    // 0x16c810: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x16c810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_16c814:
    // 0x16c814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c818:
    // 0x16c818: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_16c81c:
    // 0x16c81c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_16c820:
    // 0x16c820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c824:
    // 0x16c824: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16c824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_16c828:
    // 0x16c828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c82c:
    // 0x16c82c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16c82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16c830:
    // 0x16c830: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16c830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c834:
    // 0x16c834: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_16c838:
    // 0x16c838: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16c838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c83c:
    // 0x16c83c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_16c840:
    // 0x16c840: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c844:
    // 0x16c844: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x16c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_16c848:
    // 0x16c848: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16c848u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c84c:
    // 0x16c84c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16c84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_16c850:
    // 0x16c850: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16c854:
    // 0x16c854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c858:
    // 0x16c858: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x16c858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_16c85c:
    // 0x16c85c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x16c85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_16c860:
    // 0x16c860: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_16c864:
    // 0x16c864: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_16c868:
    // 0x16c868: 0xc05b0e2  jal         func_16C388
label_16c86c:
    if (ctx->pc == 0x16C86Cu) {
        ctx->pc = 0x16C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C868u;
        // 0x16c86c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C870u;
        goto label_16c870;
    }
    ctx->pc = 0x16C868u;
    SET_GPR_U32(ctx, 31, 0x16C870u);
    ctx->pc = 0x16C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C868u;
    // 0x16c86c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C868u, 0x16C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C870u;
label_16c870:
    // 0x16c870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c874:
    // 0x16c874: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16c878:
    // 0x16c878: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_16c87c:
    if (ctx->pc == 0x16C87Cu) {
        ctx->pc = 0x16C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C878u;
        // 0x16c87c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C880u;
        goto label_16c880;
    }
    ctx->pc = 0x16C878u;
    {
        const bool branch_taken_0x16c878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c878) {
            ctx->pc = 0x16C87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C878u;
            // 0x16c87c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C880u;
label_16c880:
    // 0x16c880: 0x5213002e  beql        $s0, $s3, . + 4 + (0x2E << 2)
label_16c884:
    if (ctx->pc == 0x16C884u) {
        ctx->pc = 0x16C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C880u;
        // 0x16c884: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C888u;
        goto label_16c888;
    }
    ctx->pc = 0x16C880u;
    {
        const bool branch_taken_0x16c880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x16c880) {
            ctx->pc = 0x16C884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C880u;
            // 0x16c884: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C888u;
label_16c888:
    // 0x16c888: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_16c88c:
    // 0x16c88c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16c890:
    // 0x16c890: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16c894:
    if (ctx->pc == 0x16C894u) {
        ctx->pc = 0x16C898u;
        goto label_16c898;
    }
    ctx->pc = 0x16C890u;
    {
        const bool branch_taken_0x16c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c890) {
            ctx->pc = 0x16C8D4u;
            goto label_16c8d4;
        }
    }
    ctx->pc = 0x16C898u;
label_16c898:
    // 0x16c898: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16c89c:
    // 0x16c89c: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x16c89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_16c8a0:
    // 0x16c8a0: 0x54550026  bnel        $v0, $s5, . + 4 + (0x26 << 2)
label_16c8a4:
    if (ctx->pc == 0x16C8A4u) {
        ctx->pc = 0x16C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8A0u;
        // 0x16c8a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8A8u;
        goto label_16c8a8;
    }
    ctx->pc = 0x16C8A0u;
    {
        const bool branch_taken_0x16c8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x16c8a0) {
            ctx->pc = 0x16C8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8A0u;
            // 0x16c8a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C8A8u;
label_16c8a8:
    // 0x16c8a8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x16c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_16c8ac:
    // 0x16c8ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16c8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16c8b0:
    // 0x16c8b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16c8b4:
    // 0x16c8b4: 0x40f809  jalr        $v0
label_16c8b8:
    if (ctx->pc == 0x16C8B8u) {
        ctx->pc = 0x16C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B4u;
        // 0x16c8b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8BCu;
        goto label_16c8bc;
    }
    ctx->pc = 0x16C8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C8BCu);
        ctx->pc = 0x16C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B4u;
        // 0x16c8b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8B4u, 0x16C8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8BCu;
label_16c8bc:
    // 0x16c8bc: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_16c8c0:
    if (ctx->pc == 0x16C8C0u) {
        ctx->pc = 0x16C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8BCu;
        // 0x16c8c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8C4u;
        goto label_16c8c4;
    }
    ctx->pc = 0x16C8BCu;
    {
        const bool branch_taken_0x16c8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x16c8bc) {
            ctx->pc = 0x16C8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8BCu;
            // 0x16c8c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C8C4u;
label_16c8c4:
    // 0x16c8c4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16c8c8:
    // 0x16c8c8: 0x9443004c  lhu         $v1, 0x4C($v0)
    ctx->pc = 0x16c8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
label_16c8cc:
    // 0x16c8cc: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
label_16c8d0:
    if (ctx->pc == 0x16C8D0u) {
        ctx->pc = 0x16C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8CCu;
        // 0x16c8d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8D4u;
        goto label_16c8d4;
    }
    ctx->pc = 0x16C8CCu;
    {
        const bool branch_taken_0x16c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c8cc) {
            ctx->pc = 0x16C8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8CCu;
            // 0x16c8d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C8D4u;
label_16c8d4:
    // 0x16c8d4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_16c8d8:
    if (ctx->pc == 0x16C8D8u) {
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8D4u;
        // 0x16c8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8DCu;
        goto label_16c8dc;
    }
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8D4u;
        // 0x16c8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8ECu;
            goto label_16c8ec;
        }
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0x280f809  jalr        $s4
label_16c8e0:
    if (ctx->pc == 0x16C8E0u) {
        ctx->pc = 0x16C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8DCu;
        // 0x16c8e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8E4u;
        goto label_16c8e4;
    }
    ctx->pc = 0x16C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x16C8E4u);
        ctx->pc = 0x16C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8DCu;
        // 0x16c8e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8DCu, 0x16C8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8E4u;
label_16c8e4:
    // 0x16c8e4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_16c8e8:
    if (ctx->pc == 0x16C8E8u) {
        ctx->pc = 0x16C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E4u;
        // 0x16c8e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8ECu;
        goto label_16c8ec;
    }
    ctx->pc = 0x16C8E4u;
    {
        const bool branch_taken_0x16c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8e4) {
            ctx->pc = 0x16C8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8E4u;
            // 0x16c8e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C8ECu;
label_16c8ec:
    // 0x16c8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c8f0:
    // 0x16c8f0: 0xc059856  jal         func_166158
label_16c8f4:
    if (ctx->pc == 0x16C8F4u) {
        ctx->pc = 0x16C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8F0u;
        // 0x16c8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8F8u;
        goto label_16c8f8;
    }
    ctx->pc = 0x16C8F0u;
    SET_GPR_U32(ctx, 31, 0x16C8F8u);
    ctx->pc = 0x16C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F0u;
    // 0x16c8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16C8F0u, 0x16C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8F8u;
label_16c8f8:
    // 0x16c8f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16c8fc:
    if (ctx->pc == 0x16C8FCu) {
        ctx->pc = 0x16C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8F8u;
        // 0x16c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C900u;
        goto label_16c900;
    }
    ctx->pc = 0x16C8F8u;
    {
        const bool branch_taken_0x16c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8F8u;
        // 0x16c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8f8) {
            ctx->pc = 0x16C938u;
            goto label_16c938;
        }
    }
    ctx->pc = 0x16C900u;
label_16c900:
    // 0x16c900: 0xc05a776  jal         func_169DD8
label_16c904:
    if (ctx->pc == 0x16C904u) {
        ctx->pc = 0x16C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C900u;
        // 0x16c904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C908u;
        goto label_16c908;
    }
    ctx->pc = 0x16C900u;
    SET_GPR_U32(ctx, 31, 0x16C908u);
    ctx->pc = 0x16C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C900u;
    // 0x16c904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DD8u, 0x16C900u, 0x16C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C908u;
label_16c908:
    // 0x16c908: 0x1055000b  beq         $v0, $s5, . + 4 + (0xB << 2)
label_16c90c:
    if (ctx->pc == 0x16C90Cu) {
        ctx->pc = 0x16C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C908u;
        // 0x16c90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C910u;
        goto label_16c910;
    }
    ctx->pc = 0x16C908u;
    {
        const bool branch_taken_0x16c908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x16C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C908u;
        // 0x16c90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c908) {
            ctx->pc = 0x16C938u;
            goto label_16c938;
        }
    }
    ctx->pc = 0x16C910u;
label_16c910:
    // 0x16c910: 0xc0cdb38  jal         func_336CE0
label_16c914:
    if (ctx->pc == 0x16C914u) {
        ctx->pc = 0x16C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C910u;
        // 0x16c914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C918u;
        goto label_16c918;
    }
    ctx->pc = 0x16C910u;
    SET_GPR_U32(ctx, 31, 0x16C918u);
    ctx->pc = 0x16C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C910u;
    // 0x16c914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16C910u, 0x16C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C918u;
label_16c918:
    // 0x16c918: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16c918u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_16c91c:
    // 0x16c91c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x16c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c920:
    // 0x16c920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c924:
    // 0x16c924: 0x0  nop
    ctx->pc = 0x16c924u;
    // NOP
label_16c928:
    // 0x16c928: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_16c92c:
    if (ctx->pc == 0x16C92Cu) {
        ctx->pc = 0x16C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C928u;
        // 0x16c92c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C930u;
        goto label_16c930;
    }
    ctx->pc = 0x16C928u;
    {
        const bool branch_taken_0x16c928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c928) {
            ctx->pc = 0x16C92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C928u;
            // 0x16c92c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C93Cu;
            goto label_16c93c;
        }
    }
    ctx->pc = 0x16C930u;
label_16c930:
    // 0x16c930: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x16c930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_16c934:
    // 0x16c934: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x16c934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c938:
    // 0x16c938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c93c:
    // 0x16c93c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x16c93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_16c940:
    // 0x16c940: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_16c944:
    if (ctx->pc == 0x16C944u) {
        ctx->pc = 0x16C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C940u;
        // 0x16c944: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C948u;
        goto label_16c948;
    }
    ctx->pc = 0x16C940u;
    {
        const bool branch_taken_0x16c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C940u;
        // 0x16c944: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c940) {
            ctx->pc = 0x16C868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c868;
        }
    }
    ctx->pc = 0x16C948u;
label_16c948:
    // 0x16c948: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x16c948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16c94c:
    // 0x16c94c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16c94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16c950:
    // 0x16c950: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16c950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16c954:
    // 0x16c954: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16c954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16c958:
    // 0x16c958: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16c958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16c95c:
    // 0x16c95c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16c95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16c960:
    // 0x16c960: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16c960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16c964:
    // 0x16c964: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16c964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c968:
    // 0x16c968: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x16c968u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c96c:
    // 0x16c96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c970:
    // 0x16c970: 0x3e00008  jr          $ra
label_16c974:
    if (ctx->pc == 0x16C974u) {
        ctx->pc = 0x16C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C970u;
        // 0x16c974: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C978u;
        goto label_fallthrough_0x16c970;
    }
    ctx->pc = 0x16C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C970u;
        // 0x16c974: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c970:
    ctx->pc = 0x16C978u;
}
