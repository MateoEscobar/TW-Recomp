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

// Function: sub_0022E848
// Address: 0x22e848 - 0x22eb40
void sub_0022E848_0x22e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E848_0x22e848");
#endif

    switch (ctx->pc) {
        case 0x22e848u: goto label_22e848;
        case 0x22e84cu: goto label_22e84c;
        case 0x22e850u: goto label_22e850;
        case 0x22e854u: goto label_22e854;
        case 0x22e858u: goto label_22e858;
        case 0x22e85cu: goto label_22e85c;
        case 0x22e860u: goto label_22e860;
        case 0x22e864u: goto label_22e864;
        case 0x22e868u: goto label_22e868;
        case 0x22e86cu: goto label_22e86c;
        case 0x22e870u: goto label_22e870;
        case 0x22e874u: goto label_22e874;
        case 0x22e878u: goto label_22e878;
        case 0x22e87cu: goto label_22e87c;
        case 0x22e880u: goto label_22e880;
        case 0x22e884u: goto label_22e884;
        case 0x22e888u: goto label_22e888;
        case 0x22e88cu: goto label_22e88c;
        case 0x22e890u: goto label_22e890;
        case 0x22e894u: goto label_22e894;
        case 0x22e898u: goto label_22e898;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8a0u: goto label_22e8a0;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e8a8u: goto label_22e8a8;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e8b4u: goto label_22e8b4;
        case 0x22e8b8u: goto label_22e8b8;
        case 0x22e8bcu: goto label_22e8bc;
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8c8u: goto label_22e8c8;
        case 0x22e8ccu: goto label_22e8cc;
        case 0x22e8d0u: goto label_22e8d0;
        case 0x22e8d4u: goto label_22e8d4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8dcu: goto label_22e8dc;
        case 0x22e8e0u: goto label_22e8e0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e8ecu: goto label_22e8ec;
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e8f8u: goto label_22e8f8;
        case 0x22e8fcu: goto label_22e8fc;
        case 0x22e900u: goto label_22e900;
        case 0x22e904u: goto label_22e904;
        case 0x22e908u: goto label_22e908;
        case 0x22e90cu: goto label_22e90c;
        case 0x22e910u: goto label_22e910;
        case 0x22e914u: goto label_22e914;
        case 0x22e918u: goto label_22e918;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e920u: goto label_22e920;
        case 0x22e924u: goto label_22e924;
        case 0x22e928u: goto label_22e928;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e930u: goto label_22e930;
        case 0x22e934u: goto label_22e934;
        case 0x22e938u: goto label_22e938;
        case 0x22e93cu: goto label_22e93c;
        case 0x22e940u: goto label_22e940;
        case 0x22e944u: goto label_22e944;
        case 0x22e948u: goto label_22e948;
        case 0x22e94cu: goto label_22e94c;
        case 0x22e950u: goto label_22e950;
        case 0x22e954u: goto label_22e954;
        case 0x22e958u: goto label_22e958;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e960u: goto label_22e960;
        case 0x22e964u: goto label_22e964;
        case 0x22e968u: goto label_22e968;
        case 0x22e96cu: goto label_22e96c;
        case 0x22e970u: goto label_22e970;
        case 0x22e974u: goto label_22e974;
        case 0x22e978u: goto label_22e978;
        case 0x22e97cu: goto label_22e97c;
        case 0x22e980u: goto label_22e980;
        case 0x22e984u: goto label_22e984;
        case 0x22e988u: goto label_22e988;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e990u: goto label_22e990;
        case 0x22e994u: goto label_22e994;
        case 0x22e998u: goto label_22e998;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9a4u: goto label_22e9a4;
        case 0x22e9a8u: goto label_22e9a8;
        case 0x22e9acu: goto label_22e9ac;
        case 0x22e9b0u: goto label_22e9b0;
        case 0x22e9b4u: goto label_22e9b4;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9bcu: goto label_22e9bc;
        case 0x22e9c0u: goto label_22e9c0;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9c8u: goto label_22e9c8;
        case 0x22e9ccu: goto label_22e9cc;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9d4u: goto label_22e9d4;
        case 0x22e9d8u: goto label_22e9d8;
        case 0x22e9dcu: goto label_22e9dc;
        case 0x22e9e0u: goto label_22e9e0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9e8u: goto label_22e9e8;
        case 0x22e9ecu: goto label_22e9ec;
        case 0x22e9f0u: goto label_22e9f0;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22e9f8u: goto label_22e9f8;
        case 0x22e9fcu: goto label_22e9fc;
        case 0x22ea00u: goto label_22ea00;
        case 0x22ea04u: goto label_22ea04;
        case 0x22ea08u: goto label_22ea08;
        case 0x22ea0cu: goto label_22ea0c;
        case 0x22ea10u: goto label_22ea10;
        case 0x22ea14u: goto label_22ea14;
        case 0x22ea18u: goto label_22ea18;
        case 0x22ea1cu: goto label_22ea1c;
        case 0x22ea20u: goto label_22ea20;
        case 0x22ea24u: goto label_22ea24;
        case 0x22ea28u: goto label_22ea28;
        case 0x22ea2cu: goto label_22ea2c;
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea34u: goto label_22ea34;
        case 0x22ea38u: goto label_22ea38;
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22ea40u: goto label_22ea40;
        case 0x22ea44u: goto label_22ea44;
        case 0x22ea48u: goto label_22ea48;
        case 0x22ea4cu: goto label_22ea4c;
        case 0x22ea50u: goto label_22ea50;
        case 0x22ea54u: goto label_22ea54;
        case 0x22ea58u: goto label_22ea58;
        case 0x22ea5cu: goto label_22ea5c;
        case 0x22ea60u: goto label_22ea60;
        case 0x22ea64u: goto label_22ea64;
        case 0x22ea68u: goto label_22ea68;
        case 0x22ea6cu: goto label_22ea6c;
        case 0x22ea70u: goto label_22ea70;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea78u: goto label_22ea78;
        case 0x22ea7cu: goto label_22ea7c;
        case 0x22ea80u: goto label_22ea80;
        case 0x22ea84u: goto label_22ea84;
        case 0x22ea88u: goto label_22ea88;
        case 0x22ea8cu: goto label_22ea8c;
        case 0x22ea90u: goto label_22ea90;
        case 0x22ea94u: goto label_22ea94;
        case 0x22ea98u: goto label_22ea98;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eaa0u: goto label_22eaa0;
        case 0x22eaa4u: goto label_22eaa4;
        case 0x22eaa8u: goto label_22eaa8;
        case 0x22eaacu: goto label_22eaac;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eab8u: goto label_22eab8;
        case 0x22eabcu: goto label_22eabc;
        case 0x22eac0u: goto label_22eac0;
        case 0x22eac4u: goto label_22eac4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaccu: goto label_22eacc;
        case 0x22ead0u: goto label_22ead0;
        case 0x22ead4u: goto label_22ead4;
        case 0x22ead8u: goto label_22ead8;
        case 0x22eadcu: goto label_22eadc;
        case 0x22eae0u: goto label_22eae0;
        case 0x22eae4u: goto label_22eae4;
        case 0x22eae8u: goto label_22eae8;
        case 0x22eaecu: goto label_22eaec;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eaf8u: goto label_22eaf8;
        case 0x22eafcu: goto label_22eafc;
        case 0x22eb00u: goto label_22eb00;
        case 0x22eb04u: goto label_22eb04;
        case 0x22eb08u: goto label_22eb08;
        case 0x22eb0cu: goto label_22eb0c;
        case 0x22eb10u: goto label_22eb10;
        case 0x22eb14u: goto label_22eb14;
        case 0x22eb18u: goto label_22eb18;
        case 0x22eb1cu: goto label_22eb1c;
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb28u: goto label_22eb28;
        case 0x22eb2cu: goto label_22eb2c;
        case 0x22eb30u: goto label_22eb30;
        case 0x22eb34u: goto label_22eb34;
        case 0x22eb38u: goto label_22eb38;
        case 0x22eb3cu: goto label_22eb3c;
        default: break;
    }

    ctx->pc = 0x22e848u;

label_22e848:
    // 0x22e848: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_22e84c:
    // 0x22e84c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x22e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_22e850:
    // 0x22e850: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x22e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_22e854:
    // 0x22e854: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x22e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_22e858:
    // 0x22e858: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e85c:
    // 0x22e85c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22e860:
    // 0x22e860: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22e864:
    // 0x22e864: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x22e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_22e868:
    // 0x22e868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e86c:
    // 0x22e86c: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x22e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_22e870:
    // 0x22e870: 0xc0e4060  jal         func_390180
label_22e874:
    if (ctx->pc == 0x22E874u) {
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E878u;
        goto label_22e878;
    }
    ctx->pc = 0x22E870u;
    SET_GPR_U32(ctx, 31, 0x22E878u);
    ctx->pc = 0x22E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E870u;
    // 0x22e874: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22E870u, 0x22E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E878u;
label_22e878:
    // 0x22e878: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_22e87c:
    // 0x22e87c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22e87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e880:
    // 0x22e880: 0x8c71489c  lw          $s1, 0x489C($v1)
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_22e884:
    // 0x22e884: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x22e884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_22e888:
    // 0x22e888: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x22e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_22e88c:
    // 0x22e88c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22e88cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22e890:
    // 0x22e890: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e894:
    // 0x22e894: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22e894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22e898:
    // 0x22e898: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_22e89c:
    if (ctx->pc == 0x22E89Cu) {
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8A0u;
        goto label_22e8a0;
    }
    ctx->pc = 0x22E898u;
    {
        const bool branch_taken_0x22e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e898) {
            ctx->pc = 0x22E950u;
            goto label_22e950;
        }
    }
    ctx->pc = 0x22E8A0u;
label_22e8a0:
    // 0x22e8a0: 0xc136ad6  jal         func_4DAB58
label_22e8a4:
    if (ctx->pc == 0x22E8A4u) {
        ctx->pc = 0x22E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8A0u;
        // 0x22e8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8A8u;
        goto label_22e8a8;
    }
    ctx->pc = 0x22E8A0u;
    SET_GPR_U32(ctx, 31, 0x22E8A8u);
    ctx->pc = 0x22E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8A0u;
    // 0x22e8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x22E8A0u, 0x22E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8A8u;
label_22e8a8:
    // 0x22e8a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e8ac:
    // 0x22e8ac: 0xc136ad4  jal         func_4DAB50
label_22e8b0:
    if (ctx->pc == 0x22E8B0u) {
        ctx->pc = 0x22E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8ACu;
        // 0x22e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8B4u;
        goto label_22e8b4;
    }
    ctx->pc = 0x22E8ACu;
    SET_GPR_U32(ctx, 31, 0x22E8B4u);
    ctx->pc = 0x22E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8ACu;
    // 0x22e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22E8ACu, 0x22E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8B4u;
label_22e8b4:
    // 0x22e8b4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x22e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22e8b8:
    // 0x22e8b8: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_22e8bc:
    // 0x22e8bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22e8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22e8c0:
    // 0x22e8c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22e8c4:
    // 0x22e8c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22e8c8:
    // 0x22e8c8: 0x54440022  bnel        $v0, $a0, . + 4 + (0x22 << 2)
label_22e8cc:
    if (ctx->pc == 0x22E8CCu) {
        ctx->pc = 0x22E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C8u;
        // 0x22e8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8D0u;
        goto label_22e8d0;
    }
    ctx->pc = 0x22E8C8u;
    {
        const bool branch_taken_0x22e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e8c8) {
            ctx->pc = 0x22E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E8C8u;
            // 0x22e8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E954u;
            goto label_22e954;
        }
    }
    ctx->pc = 0x22E8D0u;
label_22e8d0:
    // 0x22e8d0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22e8d4:
    // 0x22e8d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22e8d8:
    // 0x22e8d8: 0xc0739c6  jal         func_1CE718
label_22e8dc:
    if (ctx->pc == 0x22E8DCu) {
        ctx->pc = 0x22E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8D8u;
        // 0x22e8dc: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8E0u;
        goto label_22e8e0;
    }
    ctx->pc = 0x22E8D8u;
    SET_GPR_U32(ctx, 31, 0x22E8E0u);
    ctx->pc = 0x22E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8D8u;
    // 0x22e8dc: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22E8D8u, 0x22E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E0u;
label_22e8e0:
    // 0x22e8e0: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22e8e4:
    // 0x22e8e4: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22e8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22e8e8:
    // 0x22e8e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22e8ec:
    if (ctx->pc == 0x22E8ECu) {
        ctx->pc = 0x22E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8E8u;
        // 0x22e8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8F0u;
        goto label_22e8f0;
    }
    ctx->pc = 0x22E8E8u;
    {
        const bool branch_taken_0x22e8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8E8u;
        // 0x22e8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8e8) {
            ctx->pc = 0x22E8FCu;
            goto label_22e8fc;
        }
    }
    ctx->pc = 0x22E8F0u;
label_22e8f0:
    // 0x22e8f0: 0xc107444  jal         func_41D110
label_22e8f4:
    if (ctx->pc == 0x22E8F4u) {
        ctx->pc = 0x22E8F8u;
        goto label_22e8f8;
    }
    ctx->pc = 0x22E8F0u;
    SET_GPR_U32(ctx, 31, 0x22E8F8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22E8F0u, 0x22E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8F8u;
label_22e8f8:
    // 0x22e8f8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22e8f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e8fc:
    // 0x22e8fc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_22e900:
    if (ctx->pc == 0x22E900u) {
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8FCu;
        // 0x22e900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E904u;
        goto label_22e904;
    }
    ctx->pc = 0x22E8FCu;
    {
        const bool branch_taken_0x22e8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8FCu;
        // 0x22e900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8fc) {
            ctx->pc = 0x22E954u;
            goto label_22e954;
        }
    }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0xc073a8e  jal         func_1CEA38
label_22e908:
    if (ctx->pc == 0x22E908u) {
        ctx->pc = 0x22E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E904u;
        // 0x22e908: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E90Cu;
        goto label_22e90c;
    }
    ctx->pc = 0x22E904u;
    SET_GPR_U32(ctx, 31, 0x22E90Cu);
    ctx->pc = 0x22E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E904u;
    // 0x22e908: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22E904u, 0x22E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E90Cu;
label_22e90c:
    // 0x22e90c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22e910:
    if (ctx->pc == 0x22E910u) {
        ctx->pc = 0x22E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E90Cu;
        // 0x22e910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E914u;
        goto label_22e914;
    }
    ctx->pc = 0x22E90Cu;
    {
        const bool branch_taken_0x22e90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E90Cu;
        // 0x22e910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e90c) {
            ctx->pc = 0x22E954u;
            goto label_22e954;
        }
    }
    ctx->pc = 0x22E914u;
label_22e914:
    // 0x22e914: 0x924203ba  lbu         $v0, 0x3BA($s2)
    ctx->pc = 0x22e914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 954)));
label_22e918:
    // 0x22e918: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22e91c:
    if (ctx->pc == 0x22E91Cu) {
        ctx->pc = 0x22E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E918u;
        // 0x22e91c: 0x8e65489c  lw          $a1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E920u;
        goto label_22e920;
    }
    ctx->pc = 0x22E918u;
    {
        const bool branch_taken_0x22e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E918u;
        // 0x22e91c: 0x8e65489c  lw          $a1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e918) {
            ctx->pc = 0x22E954u;
            goto label_22e954;
        }
    }
    ctx->pc = 0x22E920u;
label_22e920:
    // 0x22e920: 0x3c04ffe7  lui         $a0, 0xFFE7
    ctx->pc = 0x22e920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65511 << 16));
label_22e924:
    // 0x22e924: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x22e924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_22e928:
    // 0x22e928: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x22e928u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_22e92c:
    // 0x22e92c: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x22e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
label_22e930:
    // 0x22e930: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22e930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22e934:
    // 0x22e934: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e938:
    // 0x22e938: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22e938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22e93c:
    // 0x22e93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22e940:
    // 0x22e940: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e944:
    // 0x22e944: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x22e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
label_22e948:
    // 0x22e948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22e948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22e94c:
    // 0x22e94c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x22e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_22e950:
    // 0x22e950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e954:
    // 0x22e954: 0xc0899aa  jal         func_2266A8
label_22e958:
    if (ctx->pc == 0x22E958u) {
        ctx->pc = 0x22E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E954u;
        // 0x22e958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E95Cu;
        goto label_22e95c;
    }
    ctx->pc = 0x22E954u;
    SET_GPR_U32(ctx, 31, 0x22E95Cu);
    ctx->pc = 0x22E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E954u;
    // 0x22e958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x22E954u, 0x22E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E95Cu;
label_22e95c:
    // 0x22e95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e960:
    // 0x22e960: 0xc089988  jal         func_226620
label_22e964:
    if (ctx->pc == 0x22E964u) {
        ctx->pc = 0x22E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E960u;
        // 0x22e964: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E968u;
        goto label_22e968;
    }
    ctx->pc = 0x22E960u;
    SET_GPR_U32(ctx, 31, 0x22E968u);
    ctx->pc = 0x22E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E960u;
    // 0x22e964: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E960u, 0x22E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E968u;
label_22e968:
    // 0x22e968: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22e96c:
    // 0x22e96c: 0x8c44013c  lw          $a0, 0x13C($v0)
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_22e970:
    // 0x22e970: 0x5080002b  beql        $a0, $zero, . + 4 + (0x2B << 2)
label_22e974:
    if (ctx->pc == 0x22E974u) {
        ctx->pc = 0x22E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E970u;
        // 0x22e974: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E978u;
        goto label_22e978;
    }
    ctx->pc = 0x22E970u;
    {
        const bool branch_taken_0x22e970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e970) {
            ctx->pc = 0x22E974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E970u;
            // 0x22e974: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EA20u;
            goto label_22ea20;
        }
    }
    ctx->pc = 0x22E978u;
label_22e978:
    // 0x22e978: 0x924203ba  lbu         $v0, 0x3BA($s2)
    ctx->pc = 0x22e978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 954)));
label_22e97c:
    // 0x22e97c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22e980:
    if (ctx->pc == 0x22E980u) {
        ctx->pc = 0x22E984u;
        goto label_22e984;
    }
    ctx->pc = 0x22E97Cu;
    {
        const bool branch_taken_0x22e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e97c) {
            ctx->pc = 0x22E9BCu;
            goto label_22e9bc;
        }
    }
    ctx->pc = 0x22E984u;
label_22e984:
    // 0x22e984: 0x8c820504  lw          $v0, 0x504($a0)
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1284)));
label_22e988:
    // 0x22e988: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22e98c:
    if (ctx->pc == 0x22E98Cu) {
        ctx->pc = 0x22E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E988u;
        // 0x22e98c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E990u;
        goto label_22e990;
    }
    ctx->pc = 0x22E988u;
    {
        const bool branch_taken_0x22e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E988u;
        // 0x22e98c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e988) {
            ctx->pc = 0x22E998u;
            goto label_22e998;
        }
    }
    ctx->pc = 0x22E990u;
label_22e990:
    // 0x22e990: 0x8c8204fc  lw          $v0, 0x4FC($a0)
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1276)));
label_22e994:
    // 0x22e994: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22e994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e998:
    // 0x22e998: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_22e99c:
    if (ctx->pc == 0x22E99Cu) {
        ctx->pc = 0x22E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E998u;
        // 0x22e99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9A0u;
        goto label_22e9a0;
    }
    ctx->pc = 0x22E998u;
    {
        const bool branch_taken_0x22e998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E998u;
        // 0x22e99c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e998) {
            ctx->pc = 0x22E9FCu;
            goto label_22e9fc;
        }
    }
    ctx->pc = 0x22E9A0u;
label_22e9a0:
    // 0x22e9a0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x22e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_22e9a4:
    // 0x22e9a4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x22e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_22e9a8:
    // 0x22e9a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22e9ac:
    // 0x22e9ac: 0xc13b622  jal         func_4ED888
label_22e9b0:
    if (ctx->pc == 0x22E9B0u) {
        ctx->pc = 0x22E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9ACu;
        // 0x22e9b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9B4u;
        goto label_22e9b4;
    }
    ctx->pc = 0x22E9ACu;
    SET_GPR_U32(ctx, 31, 0x22E9B4u);
    ctx->pc = 0x22E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9ACu;
    // 0x22e9b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED888u, 0x22E9ACu, 0x22E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9B4u;
label_22e9b4:
    // 0x22e9b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_22e9b8:
    if (ctx->pc == 0x22E9B8u) {
        ctx->pc = 0x22E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B4u;
        // 0x22e9b8: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9BCu;
        goto label_22e9bc;
    }
    ctx->pc = 0x22E9B4u;
    {
        const bool branch_taken_0x22e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B4u;
        // 0x22e9b8: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9b4) {
            ctx->pc = 0x22EA00u;
            goto label_22ea00;
        }
    }
    ctx->pc = 0x22E9BCu;
label_22e9bc:
    // 0x22e9bc: 0xc09d18e  jal         func_274638
label_22e9c0:
    if (ctx->pc == 0x22E9C0u) {
        ctx->pc = 0x22E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9BCu;
        // 0x22e9c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9C4u;
        goto label_22e9c4;
    }
    ctx->pc = 0x22E9BCu;
    SET_GPR_U32(ctx, 31, 0x22E9C4u);
    ctx->pc = 0x22E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9BCu;
    // 0x22e9c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274638u, 0x22E9BCu, 0x22E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9C4u;
label_22e9c4:
    // 0x22e9c4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x22e9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_22e9c8:
    // 0x22e9c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22e9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_22e9cc:
    // 0x22e9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22e9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e9d0:
    // 0x22e9d0: 0x0  nop
    ctx->pc = 0x22e9d0u;
    // NOP
label_22e9d4:
    // 0x22e9d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22e9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e9d8:
    // 0x22e9d8: 0x0  nop
    ctx->pc = 0x22e9d8u;
    // NOP
label_22e9dc:
    // 0x22e9dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22e9e0:
    if (ctx->pc == 0x22E9E0u) {
        ctx->pc = 0x22E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9DCu;
        // 0x22e9e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9E4u;
        goto label_22e9e4;
    }
    ctx->pc = 0x22E9DCu;
    {
        const bool branch_taken_0x22e9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9DCu;
        // 0x22e9e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9dc) {
            ctx->pc = 0x22E9FCu;
            goto label_22e9fc;
        }
    }
    ctx->pc = 0x22E9E4u;
label_22e9e4:
    // 0x22e9e4: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22e9e8:
    // 0x22e9e8: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x22e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_22e9ec:
    // 0x22e9ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e9f0:
    // 0x22e9f0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_22e9f4:
    // 0x22e9f4: 0xc10796c  jal         func_41E5B0
label_22e9f8:
    if (ctx->pc == 0x22E9F8u) {
        ctx->pc = 0x22E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9F4u;
        // 0x22e9f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9FCu;
        goto label_22e9fc;
    }
    ctx->pc = 0x22E9F4u;
    SET_GPR_U32(ctx, 31, 0x22E9FCu);
    ctx->pc = 0x22E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9F4u;
    // 0x22e9f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x22E9F4u, 0x22E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9FCu;
label_22e9fc:
    // 0x22e9fc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22ea00:
    // 0x22ea00: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_22ea04:
    // 0x22ea04: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
label_22ea08:
    // 0x22ea08: 0x24060646  addiu       $a2, $zero, 0x646
    ctx->pc = 0x22ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1606));
label_22ea0c:
    // 0x22ea0c: 0xc13b54e  jal         func_4ED538
label_22ea10:
    if (ctx->pc == 0x22EA10u) {
        ctx->pc = 0x22EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA0Cu;
        // 0x22ea10: 0x8c44013c  lw          $a0, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA14u;
        goto label_22ea14;
    }
    ctx->pc = 0x22EA0Cu;
    SET_GPR_U32(ctx, 31, 0x22EA14u);
    ctx->pc = 0x22EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA0Cu;
    // 0x22ea10: 0x8c44013c  lw          $a0, 0x13C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED538u, 0x22EA0Cu, 0x22EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA14u;
label_22ea14:
    // 0x22ea14: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22ea18:
    // 0x22ea18: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x22ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
label_22ea1c:
    // 0x22ea1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22ea20:
    // 0x22ea20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22ea24:
    // 0x22ea24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22ea28:
    // 0x22ea28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ea28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ea2c:
    // 0x22ea2c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22ea30:
    // 0x22ea30: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22ea34:
    // 0x22ea34: 0x40f809  jalr        $v0
label_22ea38:
    if (ctx->pc == 0x22EA38u) {
        ctx->pc = 0x22EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA34u;
        // 0x22ea38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA3Cu;
        goto label_22ea3c;
    }
    ctx->pc = 0x22EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EA3Cu);
        ctx->pc = 0x22EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA34u;
        // 0x22ea38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EA34u, 0x22EA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EA3Cu;
label_22ea3c:
    // 0x22ea3c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_22ea40:
    // 0x22ea40: 0x8e43036c  lw          $v1, 0x36C($s2)
    ctx->pc = 0x22ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_22ea44:
    // 0x22ea44: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22ea44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22ea48:
    // 0x22ea48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22ea4c:
    if (ctx->pc == 0x22EA4Cu) {
        ctx->pc = 0x22EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA48u;
        // 0x22ea4c: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA50u;
        goto label_22ea50;
    }
    ctx->pc = 0x22EA48u;
    {
        const bool branch_taken_0x22ea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA48u;
        // 0x22ea4c: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea48) {
            ctx->pc = 0x22EA8Cu;
            goto label_22ea8c;
        }
    }
    ctx->pc = 0x22EA50u;
label_22ea50:
    // 0x22ea50: 0xc089c18  jal         func_227060
label_22ea54:
    if (ctx->pc == 0x22EA54u) {
        ctx->pc = 0x22EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA50u;
        // 0x22ea54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA58u;
        goto label_22ea58;
    }
    ctx->pc = 0x22EA50u;
    SET_GPR_U32(ctx, 31, 0x22EA58u);
    ctx->pc = 0x22EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA50u;
    // 0x22ea54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22EA50u, 0x22EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA58u;
label_22ea58:
    // 0x22ea58: 0xc105e98  jal         func_417A60
label_22ea5c:
    if (ctx->pc == 0x22EA5Cu) {
        ctx->pc = 0x22EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA58u;
        // 0x22ea5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA60u;
        goto label_22ea60;
    }
    ctx->pc = 0x22EA58u;
    SET_GPR_U32(ctx, 31, 0x22EA60u);
    ctx->pc = 0x22EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA58u;
    // 0x22ea5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x22EA58u, 0x22EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA60u;
label_22ea60:
    // 0x22ea60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ea60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ea64:
    // 0x22ea64: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_22ea68:
    if (ctx->pc == 0x22EA68u) {
        ctx->pc = 0x22EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA64u;
        // 0x22ea68: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA6Cu;
        goto label_22ea6c;
    }
    ctx->pc = 0x22EA64u;
    {
        const bool branch_taken_0x22ea64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA64u;
        // 0x22ea68: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea64) {
            ctx->pc = 0x22EA90u;
            goto label_22ea90;
        }
    }
    ctx->pc = 0x22EA6Cu;
label_22ea6c:
    // 0x22ea6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22ea70:
    // 0x22ea70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22ea74:
    // 0x22ea74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22ea78:
    // 0x22ea78: 0x40f809  jalr        $v0
label_22ea7c:
    if (ctx->pc == 0x22EA7Cu) {
        ctx->pc = 0x22EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA78u;
        // 0x22ea7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA80u;
        goto label_22ea80;
    }
    ctx->pc = 0x22EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EA80u);
        ctx->pc = 0x22EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA78u;
        // 0x22ea7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EA78u, 0x22EA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EA80u;
label_22ea80:
    // 0x22ea80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ea84:
    // 0x22ea84: 0xc10586e  jal         func_4161B8
label_22ea88:
    if (ctx->pc == 0x22EA88u) {
        ctx->pc = 0x22EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA84u;
        // 0x22ea88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA8Cu;
        goto label_22ea8c;
    }
    ctx->pc = 0x22EA84u;
    SET_GPR_U32(ctx, 31, 0x22EA8Cu);
    ctx->pc = 0x22EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA84u;
    // 0x22ea88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x22EA84u, 0x22EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA8Cu;
label_22ea8c:
    // 0x22ea8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22ea90:
    // 0x22ea90: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_22ea94:
    // 0x22ea94: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22ea98:
    // 0x22ea98: 0xc0e4060  jal         func_390180
label_22ea9c:
    if (ctx->pc == 0x22EA9Cu) {
        ctx->pc = 0x22EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA98u;
        // 0x22ea9c: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAA0u;
        goto label_22eaa0;
    }
    ctx->pc = 0x22EA98u;
    SET_GPR_U32(ctx, 31, 0x22EAA0u);
    ctx->pc = 0x22EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA98u;
    // 0x22ea9c: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22EA98u, 0x22EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAA0u;
label_22eaa0:
    // 0x22eaa0: 0x924303ba  lbu         $v1, 0x3BA($s2)
    ctx->pc = 0x22eaa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 954)));
label_22eaa4:
    // 0x22eaa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22eaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22eaa8:
    // 0x22eaa8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22eaac:
    // 0x22eaac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x22eaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22eab0:
    // 0x22eab0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x22eab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22eab4:
    // 0x22eab4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x22eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_22eab8:
    // 0x22eab8: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_22eabc:
    // 0x22eabc: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x22eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_22eac0:
    // 0x22eac0: 0x40f809  jalr        $v0
label_22eac4:
    if (ctx->pc == 0x22EAC4u) {
        ctx->pc = 0x22EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAC0u;
        // 0x22eac4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAC8u;
        goto label_22eac8;
    }
    ctx->pc = 0x22EAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EAC8u);
        ctx->pc = 0x22EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAC0u;
        // 0x22eac4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EAC0u, 0x22EAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EAC8u;
label_22eac8:
    // 0x22eac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22eacc:
    // 0x22eacc: 0xc089c20  jal         func_227080
label_22ead0:
    if (ctx->pc == 0x22EAD0u) {
        ctx->pc = 0x22EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EACCu;
        // 0x22ead0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAD4u;
        goto label_22ead4;
    }
    ctx->pc = 0x22EACCu;
    SET_GPR_U32(ctx, 31, 0x22EAD4u);
    ctx->pc = 0x22EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EACCu;
    // 0x22ead0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22EACCu, 0x22EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAD4u;
label_22ead4:
    // 0x22ead4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ead8:
    // 0x22ead8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22eadc:
    // 0x22eadc: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_22eae0:
    if (ctx->pc == 0x22EAE0u) {
        ctx->pc = 0x22EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EADCu;
        // 0x22eae0: 0xae43036c  sw          $v1, 0x36C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAE4u;
        goto label_22eae4;
    }
    ctx->pc = 0x22EADCu;
    {
        const bool branch_taken_0x22eadc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EADCu;
        // 0x22eae0: 0xae43036c  sw          $v1, 0x36C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eadc) {
            ctx->pc = 0x22EB08u;
            goto label_22eb08;
        }
    }
    ctx->pc = 0x22EAE4u;
label_22eae4:
    // 0x22eae4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22eae8:
    // 0x22eae8: 0xc0e8b48  jal         func_3A2D20
label_22eaec:
    if (ctx->pc == 0x22EAECu) {
        ctx->pc = 0x22EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAE8u;
        // 0x22eaec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAF0u;
        goto label_22eaf0;
    }
    ctx->pc = 0x22EAE8u;
    SET_GPR_U32(ctx, 31, 0x22EAF0u);
    ctx->pc = 0x22EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAE8u;
    // 0x22eaec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x22EAE8u, 0x22EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAF0u;
label_22eaf0:
    // 0x22eaf0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_22eaf4:
    // 0x22eaf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22eaf8:
    // 0x22eaf8: 0xc0e8b80  jal         func_3A2E00
label_22eafc:
    if (ctx->pc == 0x22EAFCu) {
        ctx->pc = 0x22EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAF8u;
        // 0x22eafc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB00u;
        goto label_22eb00;
    }
    ctx->pc = 0x22EAF8u;
    SET_GPR_U32(ctx, 31, 0x22EB00u);
    ctx->pc = 0x22EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAF8u;
    // 0x22eafc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x22EAF8u, 0x22EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB00u;
label_22eb00:
    // 0x22eb00: 0xc0e8b50  jal         func_3A2D40
label_22eb04:
    if (ctx->pc == 0x22EB04u) {
        ctx->pc = 0x22EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB00u;
        // 0x22eb04: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB08u;
        goto label_22eb08;
    }
    ctx->pc = 0x22EB00u;
    SET_GPR_U32(ctx, 31, 0x22EB08u);
    ctx->pc = 0x22EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB00u;
    // 0x22eb04: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x22EB00u, 0x22EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB08u;
label_22eb08:
    // 0x22eb08: 0xc0874fa  jal         func_21D3E8
label_22eb0c:
    if (ctx->pc == 0x22EB0Cu) {
        ctx->pc = 0x22EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB08u;
        // 0x22eb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB10u;
        goto label_22eb10;
    }
    ctx->pc = 0x22EB08u;
    SET_GPR_U32(ctx, 31, 0x22EB10u);
    ctx->pc = 0x22EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB08u;
    // 0x22eb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22EB08u, 0x22EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB10u;
label_22eb10:
    // 0x22eb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22eb14:
    // 0x22eb14: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22eb14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22eb18:
    // 0x22eb18: 0xc087c16  jal         func_21F058
label_22eb1c:
    if (ctx->pc == 0x22EB1Cu) {
        ctx->pc = 0x22EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB18u;
        // 0x22eb1c: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB20u;
        goto label_22eb20;
    }
    ctx->pc = 0x22EB18u;
    SET_GPR_U32(ctx, 31, 0x22EB20u);
    ctx->pc = 0x22EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB18u;
    // 0x22eb1c: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x22EB18u, 0x22EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB20u;
label_22eb20:
    // 0x22eb20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x22eb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22eb24:
    // 0x22eb24: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x22eb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22eb28:
    // 0x22eb28: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x22eb28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22eb2c:
    // 0x22eb2c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x22eb2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22eb30:
    // 0x22eb30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22eb30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22eb34:
    // 0x22eb34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22eb38:
    // 0x22eb38: 0x3e00008  jr          $ra
label_22eb3c:
    if (ctx->pc == 0x22EB3Cu) {
        ctx->pc = 0x22EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB38u;
        // 0x22eb3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB40u;
        goto label_fallthrough_0x22eb38;
    }
    ctx->pc = 0x22EB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB38u;
        // 0x22eb3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22eb38:
    ctx->pc = 0x22EB40u;
}
