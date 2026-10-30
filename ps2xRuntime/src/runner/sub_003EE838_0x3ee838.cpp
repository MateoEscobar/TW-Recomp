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

// Function: sub_003EE838
// Address: 0x3ee838 - 0x3ee9d8
void sub_003EE838_0x3ee838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE838_0x3ee838");
#endif

    switch (ctx->pc) {
        case 0x3ee838u: goto label_3ee838;
        case 0x3ee83cu: goto label_3ee83c;
        case 0x3ee840u: goto label_3ee840;
        case 0x3ee844u: goto label_3ee844;
        case 0x3ee848u: goto label_3ee848;
        case 0x3ee84cu: goto label_3ee84c;
        case 0x3ee850u: goto label_3ee850;
        case 0x3ee854u: goto label_3ee854;
        case 0x3ee858u: goto label_3ee858;
        case 0x3ee85cu: goto label_3ee85c;
        case 0x3ee860u: goto label_3ee860;
        case 0x3ee864u: goto label_3ee864;
        case 0x3ee868u: goto label_3ee868;
        case 0x3ee86cu: goto label_3ee86c;
        case 0x3ee870u: goto label_3ee870;
        case 0x3ee874u: goto label_3ee874;
        case 0x3ee878u: goto label_3ee878;
        case 0x3ee87cu: goto label_3ee87c;
        case 0x3ee880u: goto label_3ee880;
        case 0x3ee884u: goto label_3ee884;
        case 0x3ee888u: goto label_3ee888;
        case 0x3ee88cu: goto label_3ee88c;
        case 0x3ee890u: goto label_3ee890;
        case 0x3ee894u: goto label_3ee894;
        case 0x3ee898u: goto label_3ee898;
        case 0x3ee89cu: goto label_3ee89c;
        case 0x3ee8a0u: goto label_3ee8a0;
        case 0x3ee8a4u: goto label_3ee8a4;
        case 0x3ee8a8u: goto label_3ee8a8;
        case 0x3ee8acu: goto label_3ee8ac;
        case 0x3ee8b0u: goto label_3ee8b0;
        case 0x3ee8b4u: goto label_3ee8b4;
        case 0x3ee8b8u: goto label_3ee8b8;
        case 0x3ee8bcu: goto label_3ee8bc;
        case 0x3ee8c0u: goto label_3ee8c0;
        case 0x3ee8c4u: goto label_3ee8c4;
        case 0x3ee8c8u: goto label_3ee8c8;
        case 0x3ee8ccu: goto label_3ee8cc;
        case 0x3ee8d0u: goto label_3ee8d0;
        case 0x3ee8d4u: goto label_3ee8d4;
        case 0x3ee8d8u: goto label_3ee8d8;
        case 0x3ee8dcu: goto label_3ee8dc;
        case 0x3ee8e0u: goto label_3ee8e0;
        case 0x3ee8e4u: goto label_3ee8e4;
        case 0x3ee8e8u: goto label_3ee8e8;
        case 0x3ee8ecu: goto label_3ee8ec;
        case 0x3ee8f0u: goto label_3ee8f0;
        case 0x3ee8f4u: goto label_3ee8f4;
        case 0x3ee8f8u: goto label_3ee8f8;
        case 0x3ee8fcu: goto label_3ee8fc;
        case 0x3ee900u: goto label_3ee900;
        case 0x3ee904u: goto label_3ee904;
        case 0x3ee908u: goto label_3ee908;
        case 0x3ee90cu: goto label_3ee90c;
        case 0x3ee910u: goto label_3ee910;
        case 0x3ee914u: goto label_3ee914;
        case 0x3ee918u: goto label_3ee918;
        case 0x3ee91cu: goto label_3ee91c;
        case 0x3ee920u: goto label_3ee920;
        case 0x3ee924u: goto label_3ee924;
        case 0x3ee928u: goto label_3ee928;
        case 0x3ee92cu: goto label_3ee92c;
        case 0x3ee930u: goto label_3ee930;
        case 0x3ee934u: goto label_3ee934;
        case 0x3ee938u: goto label_3ee938;
        case 0x3ee93cu: goto label_3ee93c;
        case 0x3ee940u: goto label_3ee940;
        case 0x3ee944u: goto label_3ee944;
        case 0x3ee948u: goto label_3ee948;
        case 0x3ee94cu: goto label_3ee94c;
        case 0x3ee950u: goto label_3ee950;
        case 0x3ee954u: goto label_3ee954;
        case 0x3ee958u: goto label_3ee958;
        case 0x3ee95cu: goto label_3ee95c;
        case 0x3ee960u: goto label_3ee960;
        case 0x3ee964u: goto label_3ee964;
        case 0x3ee968u: goto label_3ee968;
        case 0x3ee96cu: goto label_3ee96c;
        case 0x3ee970u: goto label_3ee970;
        case 0x3ee974u: goto label_3ee974;
        case 0x3ee978u: goto label_3ee978;
        case 0x3ee97cu: goto label_3ee97c;
        case 0x3ee980u: goto label_3ee980;
        case 0x3ee984u: goto label_3ee984;
        case 0x3ee988u: goto label_3ee988;
        case 0x3ee98cu: goto label_3ee98c;
        case 0x3ee990u: goto label_3ee990;
        case 0x3ee994u: goto label_3ee994;
        case 0x3ee998u: goto label_3ee998;
        case 0x3ee99cu: goto label_3ee99c;
        case 0x3ee9a0u: goto label_3ee9a0;
        case 0x3ee9a4u: goto label_3ee9a4;
        case 0x3ee9a8u: goto label_3ee9a8;
        case 0x3ee9acu: goto label_3ee9ac;
        case 0x3ee9b0u: goto label_3ee9b0;
        case 0x3ee9b4u: goto label_3ee9b4;
        case 0x3ee9b8u: goto label_3ee9b8;
        case 0x3ee9bcu: goto label_3ee9bc;
        case 0x3ee9c0u: goto label_3ee9c0;
        case 0x3ee9c4u: goto label_3ee9c4;
        case 0x3ee9c8u: goto label_3ee9c8;
        case 0x3ee9ccu: goto label_3ee9cc;
        case 0x3ee9d0u: goto label_3ee9d0;
        case 0x3ee9d4u: goto label_3ee9d4;
        default: break;
    }

    ctx->pc = 0x3ee838u;

label_3ee838:
    // 0x3ee838: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ee838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ee83c:
    // 0x3ee83c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ee83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3ee840:
    // 0x3ee840: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ee840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ee844:
    // 0x3ee844: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ee844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3ee848:
    // 0x3ee848: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ee848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee84c:
    // 0x3ee84c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ee84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3ee850:
    // 0x3ee850: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ee850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ee854:
    // 0x3ee854: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ee854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ee858:
    // 0x3ee858: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ee858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ee85c:
    // 0x3ee85c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ee85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ee860:
    // 0x3ee860: 0x40f809  jalr        $v0
label_3ee864:
    if (ctx->pc == 0x3EE864u) {
        ctx->pc = 0x3EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE860u;
        // 0x3ee864: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE868u;
        goto label_3ee868;
    }
    ctx->pc = 0x3EE860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE868u);
        ctx->pc = 0x3EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE860u;
        // 0x3ee864: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE860u, 0x3EE868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE868u;
label_3ee868:
    // 0x3ee868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ee868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee86c:
    // 0x3ee86c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3ee86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ee870:
    // 0x3ee870: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3ee870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ee874:
    // 0x3ee874: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_3ee878:
    if (ctx->pc == 0x3EE878u) {
        ctx->pc = 0x3EE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE874u;
        // 0x3ee878: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE87Cu;
        goto label_3ee87c;
    }
    ctx->pc = 0x3EE874u;
    {
        const bool branch_taken_0x3ee874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ee874) {
            ctx->pc = 0x3EE878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE874u;
            // 0x3ee878: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE898u;
            goto label_3ee898;
        }
    }
    ctx->pc = 0x3EE87Cu;
label_3ee87c:
    // 0x3ee87c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ee87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ee880:
    // 0x3ee880: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3ee880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ee884:
    // 0x3ee884: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ee884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ee888:
    // 0x3ee888: 0xc0440c6  jal         func_110318
label_3ee88c:
    if (ctx->pc == 0x3EE88Cu) {
        ctx->pc = 0x3EE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE888u;
        // 0x3ee88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE890u;
        goto label_3ee890;
    }
    ctx->pc = 0x3EE888u;
    SET_GPR_U32(ctx, 31, 0x3EE890u);
    ctx->pc = 0x3EE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE888u;
    // 0x3ee88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EE888u, 0x3EE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE890u;
label_3ee890:
    // 0x3ee890: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3ee894:
    if (ctx->pc == 0x3EE894u) {
        ctx->pc = 0x3EE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE890u;
        // 0x3ee894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE898u;
        goto label_3ee898;
    }
    ctx->pc = 0x3EE890u;
    {
        const bool branch_taken_0x3ee890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE890u;
        // 0x3ee894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee890) {
            ctx->pc = 0x3EE9BCu;
            goto label_3ee9bc;
        }
    }
    ctx->pc = 0x3EE898u;
label_3ee898:
    // 0x3ee898: 0xc0e858c  jal         func_3A1630
label_3ee89c:
    if (ctx->pc == 0x3EE89Cu) {
        ctx->pc = 0x3EE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE898u;
        // 0x3ee89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE8A0u;
        goto label_3ee8a0;
    }
    ctx->pc = 0x3EE898u;
    SET_GPR_U32(ctx, 31, 0x3EE8A0u);
    ctx->pc = 0x3EE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE898u;
    // 0x3ee89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EE898u, 0x3EE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE8A0u;
label_3ee8a0:
    // 0x3ee8a0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3ee8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3ee8a4:
    // 0x3ee8a4: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_3ee8a8:
    if (ctx->pc == 0x3EE8A8u) {
        ctx->pc = 0x3EE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8A4u;
        // 0x3ee8a8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE8ACu;
        goto label_3ee8ac;
    }
    ctx->pc = 0x3EE8A4u;
    {
        const bool branch_taken_0x3ee8a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3ee8a4) {
            ctx->pc = 0x3EE8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE8A4u;
            // 0x3ee8a8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE8BCu;
            goto label_3ee8bc;
        }
    }
    ctx->pc = 0x3EE8ACu;
label_3ee8ac:
    // 0x3ee8ac: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ee8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ee8b0:
    // 0x3ee8b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ee8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ee8b4:
    // 0x3ee8b4: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3ee8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3ee8b8:
    // 0x3ee8b8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3ee8bc:
    // 0x3ee8bc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3ee8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ee8c0:
    // 0x3ee8c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ee8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ee8c4:
    // 0x3ee8c4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_3ee8c8:
    if (ctx->pc == 0x3EE8C8u) {
        ctx->pc = 0x3EE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8C4u;
        // 0x3ee8c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE8CCu;
        goto label_3ee8cc;
    }
    ctx->pc = 0x3EE8C4u;
    {
        const bool branch_taken_0x3ee8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8C4u;
        // 0x3ee8c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee8c4) {
            ctx->pc = 0x3EE9BCu;
            goto label_3ee9bc;
        }
    }
    ctx->pc = 0x3EE8CCu;
label_3ee8cc:
    // 0x3ee8cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ee8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ee8d0:
    // 0x3ee8d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ee8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ee8d4:
    // 0x3ee8d4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ee8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ee8d8:
    // 0x3ee8d8: 0xc0cd4ee  jal         func_3353B8
label_3ee8dc:
    if (ctx->pc == 0x3EE8DCu) {
        ctx->pc = 0x3EE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8D8u;
        // 0x3ee8dc: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE8E0u;
        goto label_3ee8e0;
    }
    ctx->pc = 0x3EE8D8u;
    SET_GPR_U32(ctx, 31, 0x3EE8E0u);
    ctx->pc = 0x3EE8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE8D8u;
    // 0x3ee8dc: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EE8D8u, 0x3EE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE8E0u;
label_3ee8e0:
    // 0x3ee8e0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3ee8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3ee8e4:
    // 0x3ee8e4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3ee8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ee8e8:
    // 0x3ee8e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3ee8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ee8ec:
    // 0x3ee8ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3ee8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ee8f0:
    // 0x3ee8f0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3ee8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3ee8f4:
    // 0x3ee8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee8f8:
    // 0x3ee8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ee8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee8fc:
    // 0x3ee8fc: 0xc0e8f5c  jal         func_3A3D70
label_3ee900:
    if (ctx->pc == 0x3EE900u) {
        ctx->pc = 0x3EE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8FCu;
        // 0x3ee900: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE904u;
        goto label_3ee904;
    }
    ctx->pc = 0x3EE8FCu;
    SET_GPR_U32(ctx, 31, 0x3EE904u);
    ctx->pc = 0x3EE900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE8FCu;
    // 0x3ee900: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3EE8FCu, 0x3EE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE904u;
label_3ee904:
    // 0x3ee904: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee908:
    // 0x3ee908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ee908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee90c:
    // 0x3ee90c: 0xc136afa  jal         func_4DABE8
label_3ee910:
    if (ctx->pc == 0x3EE910u) {
        ctx->pc = 0x3EE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE90Cu;
        // 0x3ee910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE914u;
        goto label_3ee914;
    }
    ctx->pc = 0x3EE90Cu;
    SET_GPR_U32(ctx, 31, 0x3EE914u);
    ctx->pc = 0x3EE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE90Cu;
    // 0x3ee910: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3EE90Cu, 0x3EE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE914u;
label_3ee914:
    // 0x3ee914: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee918:
    // 0x3ee918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee91c:
    // 0x3ee91c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ee91cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ee920:
    // 0x3ee920: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3ee920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee924:
    // 0x3ee924: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ee924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee928:
    // 0x3ee928: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ee928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee92c:
    // 0x3ee92c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3ee92cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3ee930:
    // 0x3ee930: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x3ee930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
label_3ee934:
    // 0x3ee934: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ee934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ee938:
    // 0x3ee938: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ee938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee93c:
    // 0x3ee93c: 0x0  nop
    ctx->pc = 0x3ee93cu;
    // NOP
label_3ee940:
    // 0x3ee940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ee940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee944:
    // 0x3ee944: 0x0  nop
    ctx->pc = 0x3ee944u;
    // NOP
label_3ee948:
    // 0x3ee948: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3ee94c:
    if (ctx->pc == 0x3EE94Cu) {
        ctx->pc = 0x3EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE948u;
        // 0x3ee94c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE950u;
        goto label_3ee950;
    }
    ctx->pc = 0x3EE948u;
    {
        const bool branch_taken_0x3ee948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE948u;
        // 0x3ee94c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee948) {
            ctx->pc = 0x3EE954u;
            goto label_3ee954;
        }
    }
    ctx->pc = 0x3EE950u;
label_3ee950:
    // 0x3ee950: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ee950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee954:
    // 0x3ee954: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_3ee958:
    if (ctx->pc == 0x3EE958u) {
        ctx->pc = 0x3EE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE954u;
        // 0x3ee958: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE95Cu;
        goto label_3ee95c;
    }
    ctx->pc = 0x3EE954u;
    {
        const bool branch_taken_0x3ee954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE954u;
        // 0x3ee958: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee954) {
            ctx->pc = 0x3EE9B8u;
            goto label_3ee9b8;
        }
    }
    ctx->pc = 0x3EE95Cu;
label_3ee95c:
    // 0x3ee95c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3ee95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ee960:
    // 0x3ee960: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ee960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ee964:
    // 0x3ee964: 0xc0440c6  jal         func_110318
label_3ee968:
    if (ctx->pc == 0x3EE968u) {
        ctx->pc = 0x3EE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE964u;
        // 0x3ee968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE96Cu;
        goto label_3ee96c;
    }
    ctx->pc = 0x3EE964u;
    SET_GPR_U32(ctx, 31, 0x3EE96Cu);
    ctx->pc = 0x3EE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE964u;
    // 0x3ee968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EE964u, 0x3EE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE96Cu;
label_3ee96c:
    // 0x3ee96c: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x3ee96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3ee970:
    // 0x3ee970: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ee974:
    // 0x3ee974: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3ee974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee978:
    // 0x3ee978: 0x24423190  addiu       $v0, $v0, 0x3190
    ctx->pc = 0x3ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12688));
label_3ee97c:
    // 0x3ee97c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3ee97cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ee980:
    // 0x3ee980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ee980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee984:
    // 0x3ee984: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ee984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ee988:
    // 0x3ee988: 0xc0e90ca  jal         func_3A4328
label_3ee98c:
    if (ctx->pc == 0x3EE98Cu) {
        ctx->pc = 0x3EE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE988u;
        // 0x3ee98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE990u;
        goto label_3ee990;
    }
    ctx->pc = 0x3EE988u;
    SET_GPR_U32(ctx, 31, 0x3EE990u);
    ctx->pc = 0x3EE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE988u;
    // 0x3ee98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EE988u, 0x3EE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE990u;
label_3ee990:
    // 0x3ee990: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ee990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ee994:
    // 0x3ee994: 0xc045c8e  jal         func_117238
label_3ee998:
    if (ctx->pc == 0x3EE998u) {
        ctx->pc = 0x3EE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE994u;
        // 0x3ee998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE99Cu;
        goto label_3ee99c;
    }
    ctx->pc = 0x3EE994u;
    SET_GPR_U32(ctx, 31, 0x3EE99Cu);
    ctx->pc = 0x3EE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE994u;
    // 0x3ee998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3EE994u, 0x3EE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE99Cu;
label_3ee99c:
    // 0x3ee99c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3ee99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3ee9a0:
    // 0x3ee9a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3ee9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ee9a4:
    // 0x3ee9a4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3ee9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3ee9a8:
    // 0x3ee9a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ee9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ee9ac:
    // 0x3ee9ac: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_3ee9b0:
    if (ctx->pc == 0x3EE9B0u) {
        ctx->pc = 0x3EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9ACu;
        // 0x3ee9b0: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE9B4u;
        goto label_3ee9b4;
    }
    ctx->pc = 0x3EE9ACu;
    {
        const bool branch_taken_0x3ee9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9ACu;
        // 0x3ee9b0: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9ac) {
            ctx->pc = 0x3EE9B8u;
            goto label_3ee9b8;
        }
    }
    ctx->pc = 0x3EE9B4u;
label_3ee9b4:
    // 0x3ee9b4: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3ee9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3ee9b8:
    // 0x3ee9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ee9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee9bc:
    // 0x3ee9bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ee9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ee9c0:
    // 0x3ee9c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ee9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ee9c4:
    // 0x3ee9c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ee9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ee9c8:
    // 0x3ee9c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ee9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee9cc:
    // 0x3ee9cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ee9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ee9d0:
    // 0x3ee9d0: 0x3e00008  jr          $ra
label_3ee9d4:
    if (ctx->pc == 0x3EE9D4u) {
        ctx->pc = 0x3EE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9D0u;
        // 0x3ee9d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE9D8u;
        goto label_fallthrough_0x3ee9d0;
    }
    ctx->pc = 0x3EE9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9D0u;
        // 0x3ee9d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ee9d0:
    ctx->pc = 0x3EE9D8u;
}
