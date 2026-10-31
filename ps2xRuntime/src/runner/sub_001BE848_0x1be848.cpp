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

// Function: sub_001BE848
// Address: 0x1be848 - 0x1be970
void sub_001BE848_0x1be848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE848_0x1be848");
#endif

    switch (ctx->pc) {
        case 0x1be848u: goto label_1be848;
        case 0x1be84cu: goto label_1be84c;
        case 0x1be850u: goto label_1be850;
        case 0x1be854u: goto label_1be854;
        case 0x1be858u: goto label_1be858;
        case 0x1be85cu: goto label_1be85c;
        case 0x1be860u: goto label_1be860;
        case 0x1be864u: goto label_1be864;
        case 0x1be868u: goto label_1be868;
        case 0x1be86cu: goto label_1be86c;
        case 0x1be870u: goto label_1be870;
        case 0x1be874u: goto label_1be874;
        case 0x1be878u: goto label_1be878;
        case 0x1be87cu: goto label_1be87c;
        case 0x1be880u: goto label_1be880;
        case 0x1be884u: goto label_1be884;
        case 0x1be888u: goto label_1be888;
        case 0x1be88cu: goto label_1be88c;
        case 0x1be890u: goto label_1be890;
        case 0x1be894u: goto label_1be894;
        case 0x1be898u: goto label_1be898;
        case 0x1be89cu: goto label_1be89c;
        case 0x1be8a0u: goto label_1be8a0;
        case 0x1be8a4u: goto label_1be8a4;
        case 0x1be8a8u: goto label_1be8a8;
        case 0x1be8acu: goto label_1be8ac;
        case 0x1be8b0u: goto label_1be8b0;
        case 0x1be8b4u: goto label_1be8b4;
        case 0x1be8b8u: goto label_1be8b8;
        case 0x1be8bcu: goto label_1be8bc;
        case 0x1be8c0u: goto label_1be8c0;
        case 0x1be8c4u: goto label_1be8c4;
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8ccu: goto label_1be8cc;
        case 0x1be8d0u: goto label_1be8d0;
        case 0x1be8d4u: goto label_1be8d4;
        case 0x1be8d8u: goto label_1be8d8;
        case 0x1be8dcu: goto label_1be8dc;
        case 0x1be8e0u: goto label_1be8e0;
        case 0x1be8e4u: goto label_1be8e4;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8ecu: goto label_1be8ec;
        case 0x1be8f0u: goto label_1be8f0;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be8f8u: goto label_1be8f8;
        case 0x1be8fcu: goto label_1be8fc;
        case 0x1be900u: goto label_1be900;
        case 0x1be904u: goto label_1be904;
        case 0x1be908u: goto label_1be908;
        case 0x1be90cu: goto label_1be90c;
        case 0x1be910u: goto label_1be910;
        case 0x1be914u: goto label_1be914;
        case 0x1be918u: goto label_1be918;
        case 0x1be91cu: goto label_1be91c;
        case 0x1be920u: goto label_1be920;
        case 0x1be924u: goto label_1be924;
        case 0x1be928u: goto label_1be928;
        case 0x1be92cu: goto label_1be92c;
        case 0x1be930u: goto label_1be930;
        case 0x1be934u: goto label_1be934;
        case 0x1be938u: goto label_1be938;
        case 0x1be93cu: goto label_1be93c;
        case 0x1be940u: goto label_1be940;
        case 0x1be944u: goto label_1be944;
        case 0x1be948u: goto label_1be948;
        case 0x1be94cu: goto label_1be94c;
        case 0x1be950u: goto label_1be950;
        case 0x1be954u: goto label_1be954;
        case 0x1be958u: goto label_1be958;
        case 0x1be95cu: goto label_1be95c;
        case 0x1be960u: goto label_1be960;
        case 0x1be964u: goto label_1be964;
        case 0x1be968u: goto label_1be968;
        case 0x1be96cu: goto label_1be96c;
        default: break;
    }

    ctx->pc = 0x1be848u;

label_1be848:
    // 0x1be848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1be84c:
    // 0x1be84c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1be84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1be850:
    // 0x1be850: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1be850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1be854:
    // 0x1be854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be858:
    // 0x1be858: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1be858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1be85c:
    // 0x1be85c: 0x26320070  addiu       $s2, $s1, 0x70
    ctx->pc = 0x1be85cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1be860:
    // 0x1be860: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1be860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1be864:
    // 0x1be864: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1be864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1be868:
    // 0x1be868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be86c:
    // 0x1be86c: 0x8e220580  lw          $v0, 0x580($s1)
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
label_1be870:
    // 0x1be870: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1be870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1be874:
    // 0x1be874: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1be874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1be878:
    // 0x1be878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be87c:
    // 0x1be87c: 0x84a40088  lh          $a0, 0x88($a1)
    ctx->pc = 0x1be87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
label_1be880:
    // 0x1be880: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be884:
    // 0x1be884: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x1be884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_1be888:
    // 0x1be888: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1be888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1be88c:
    // 0x1be88c: 0x40f809  jalr        $v0
label_1be890:
    if (ctx->pc == 0x1BE890u) {
        ctx->pc = 0x1BE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE88Cu;
        // 0x1be890: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE894u;
        goto label_1be894;
    }
    ctx->pc = 0x1BE88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE894u);
        ctx->pc = 0x1BE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE88Cu;
        // 0x1be890: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE88Cu, 0x1BE894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE894u;
label_1be894:
    // 0x1be894: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_1be898:
    if (ctx->pc == 0x1BE898u) {
        ctx->pc = 0x1BE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE894u;
        // 0x1be898: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE89Cu;
        goto label_1be89c;
    }
    ctx->pc = 0x1BE894u;
    {
        const bool branch_taken_0x1be894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be894) {
            ctx->pc = 0x1BE898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE894u;
            // 0x1be898: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE938u;
            goto label_1be938;
        }
    }
    ctx->pc = 0x1BE89Cu;
label_1be89c:
    // 0x1be89c: 0xc078710  jal         func_1E1C40
label_1be8a0:
    if (ctx->pc == 0x1BE8A0u) {
        ctx->pc = 0x1BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE89Cu;
        // 0x1be8a0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8A4u;
        goto label_1be8a4;
    }
    ctx->pc = 0x1BE89Cu;
    SET_GPR_U32(ctx, 31, 0x1BE8A4u);
    ctx->pc = 0x1BE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE89Cu;
    // 0x1be8a0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C40u, 0x1BE89Cu, 0x1BE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8A4u;
label_1be8a4:
    // 0x1be8a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1be8a8:
    if (ctx->pc == 0x1BE8A8u) {
        ctx->pc = 0x1BE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8A4u;
        // 0x1be8a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8ACu;
        goto label_1be8ac;
    }
    ctx->pc = 0x1BE8A4u;
    {
        const bool branch_taken_0x1be8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8A4u;
        // 0x1be8a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8a4) {
            ctx->pc = 0x1BE938u;
            goto label_1be938;
        }
    }
    ctx->pc = 0x1BE8ACu;
label_1be8ac:
    // 0x1be8ac: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1be8b0:
    // 0x1be8b0: 0xc068998  jal         func_1A2660
label_1be8b4:
    if (ctx->pc == 0x1BE8B4u) {
        ctx->pc = 0x1BE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8B0u;
        // 0x1be8b4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8B8u;
        goto label_1be8b8;
    }
    ctx->pc = 0x1BE8B0u;
    SET_GPR_U32(ctx, 31, 0x1BE8B8u);
    ctx->pc = 0x1BE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8B0u;
    // 0x1be8b4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1BE8B0u, 0x1BE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8B8u;
label_1be8b8:
    // 0x1be8b8: 0x263402b0  addiu       $s4, $s1, 0x2B0
    ctx->pc = 0x1be8b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_1be8bc:
    // 0x1be8bc: 0xc068998  jal         func_1A2660
label_1be8c0:
    if (ctx->pc == 0x1BE8C0u) {
        ctx->pc = 0x1BE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8BCu;
        // 0x1be8c0: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8C4u;
        goto label_1be8c4;
    }
    ctx->pc = 0x1BE8BCu;
    SET_GPR_U32(ctx, 31, 0x1BE8C4u);
    ctx->pc = 0x1BE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8BCu;
    // 0x1be8c0: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1BE8BCu, 0x1BE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C4u;
label_1be8c4:
    // 0x1be8c4: 0xc068998  jal         func_1A2660
label_1be8c8:
    if (ctx->pc == 0x1BE8C8u) {
        ctx->pc = 0x1BE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C4u;
        // 0x1be8c8: 0x26240590  addiu       $a0, $s1, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8CCu;
        goto label_1be8cc;
    }
    ctx->pc = 0x1BE8C4u;
    SET_GPR_U32(ctx, 31, 0x1BE8CCu);
    ctx->pc = 0x1BE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8C4u;
    // 0x1be8c8: 0x26240590  addiu       $a0, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1BE8C4u, 0x1BE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8CCu;
label_1be8cc:
    // 0x1be8cc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1be8d0:
    // 0x1be8d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1be8d4:
    // 0x1be8d4: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
label_1be8d8:
    if (ctx->pc == 0x1BE8D8u) {
        ctx->pc = 0x1BE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8D4u;
        // 0x1be8d8: 0x8e250080  lw          $a1, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8DCu;
        goto label_1be8dc;
    }
    ctx->pc = 0x1BE8D4u;
    {
        const bool branch_taken_0x1be8d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be8d4) {
            ctx->pc = 0x1BE8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE8D4u;
            // 0x1be8d8: 0x8e250080  lw          $a1, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE8FCu;
            goto label_1be8fc;
        }
    }
    ctx->pc = 0x1BE8DCu;
label_1be8dc:
    // 0x1be8dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1be8e0:
    // 0x1be8e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1be8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1be8e4:
    // 0x1be8e4: 0xc068998  jal         func_1A2660
label_1be8e8:
    if (ctx->pc == 0x1BE8E8u) {
        ctx->pc = 0x1BE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8E4u;
        // 0x1be8e8: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8ECu;
        goto label_1be8ec;
    }
    ctx->pc = 0x1BE8E4u;
    SET_GPR_U32(ctx, 31, 0x1BE8ECu);
    ctx->pc = 0x1BE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8E4u;
    // 0x1be8e8: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1BE8E4u, 0x1BE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8ECu;
label_1be8ec:
    // 0x1be8ec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1be8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1be8f0:
    // 0x1be8f0: 0x5602fffb  bnel        $s0, $v0, . + 4 + (-0x5 << 2)
label_1be8f4:
    if (ctx->pc == 0x1BE8F4u) {
        ctx->pc = 0x1BE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8F0u;
        // 0x1be8f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8F8u;
        goto label_1be8f8;
    }
    ctx->pc = 0x1BE8F0u;
    {
        const bool branch_taken_0x1be8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be8f0) {
            ctx->pc = 0x1BE8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE8F0u;
            // 0x1be8f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be8e0;
        }
    }
    ctx->pc = 0x1BE8F8u;
label_1be8f8:
    // 0x1be8f8: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1be8fc:
    // 0x1be8fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1be8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1be900:
    // 0x1be900: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1be904:
    // 0x1be904: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1be904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1be908:
    // 0x1be908: 0x60f809  jalr        $v1
label_1be90c:
    if (ctx->pc == 0x1BE90Cu) {
        ctx->pc = 0x1BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE908u;
        // 0x1be90c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE910u;
        goto label_1be910;
    }
    ctx->pc = 0x1BE908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE910u);
        ctx->pc = 0x1BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE908u;
        // 0x1be90c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE908u, 0x1BE910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE910u;
label_1be910:
    // 0x1be910: 0x8e220580  lw          $v0, 0x580($s1)
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1408)));
label_1be914:
    // 0x1be914: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1be918:
    // 0x1be918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be91c:
    // 0x1be91c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be920:
    // 0x1be920: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1be924:
    // 0x1be924: 0xc078b90  jal         func_1E2E40
label_1be928:
    if (ctx->pc == 0x1BE928u) {
        ctx->pc = 0x1BE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE924u;
        // 0x1be928: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE92Cu;
        goto label_1be92c;
    }
    ctx->pc = 0x1BE924u;
    SET_GPR_U32(ctx, 31, 0x1BE92Cu);
    ctx->pc = 0x1BE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE924u;
    // 0x1be928: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E40u, 0x1BE924u, 0x1BE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE92Cu;
label_1be92c:
    // 0x1be92c: 0xc073b62  jal         func_1CED88
label_1be930:
    if (ctx->pc == 0x1BE930u) {
        ctx->pc = 0x1BE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE92Cu;
        // 0x1be930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE934u;
        goto label_1be934;
    }
    ctx->pc = 0x1BE92Cu;
    SET_GPR_U32(ctx, 31, 0x1BE934u);
    ctx->pc = 0x1BE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE92Cu;
    // 0x1be930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1BE92Cu, 0x1BE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE934u;
label_1be934:
    // 0x1be934: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1be934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1be938:
    // 0x1be938: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1be938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1be93c:
    // 0x1be93c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1be93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1be940:
    // 0x1be940: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1be940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1be944:
    // 0x1be944: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1be944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be948:
    // 0x1be948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be94c:
    // 0x1be94c: 0x3e00008  jr          $ra
label_1be950:
    if (ctx->pc == 0x1BE950u) {
        ctx->pc = 0x1BE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE94Cu;
        // 0x1be950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE954u;
        goto label_1be954;
    }
    ctx->pc = 0x1BE94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE94Cu;
        // 0x1be950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE954u;
label_1be954:
    // 0x1be954: 0x0  nop
    ctx->pc = 0x1be954u;
    // NOP
label_1be958:
    // 0x1be958: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1be95c:
    // 0x1be95c: 0x0  nop
    ctx->pc = 0x1be95cu;
    // NOP
label_1be960:
    // 0x1be960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1be964:
    // 0x1be964: 0x0  nop
    ctx->pc = 0x1be964u;
    // NOP
label_1be968:
    // 0x1be968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1be96c:
    // 0x1be96c: 0x0  nop
    ctx->pc = 0x1be96cu;
    // NOP
    ctx->pc = 0x1be970u;
}
