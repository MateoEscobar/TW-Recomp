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

// Function: sub_00343810
// Address: 0x343810 - 0x343a88
void sub_00343810_0x343810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343810_0x343810");
#endif

    switch (ctx->pc) {
        case 0x343810u: goto label_343810;
        case 0x343814u: goto label_343814;
        case 0x343818u: goto label_343818;
        case 0x34381cu: goto label_34381c;
        case 0x343820u: goto label_343820;
        case 0x343824u: goto label_343824;
        case 0x343828u: goto label_343828;
        case 0x34382cu: goto label_34382c;
        case 0x343830u: goto label_343830;
        case 0x343834u: goto label_343834;
        case 0x343838u: goto label_343838;
        case 0x34383cu: goto label_34383c;
        case 0x343840u: goto label_343840;
        case 0x343844u: goto label_343844;
        case 0x343848u: goto label_343848;
        case 0x34384cu: goto label_34384c;
        case 0x343850u: goto label_343850;
        case 0x343854u: goto label_343854;
        case 0x343858u: goto label_343858;
        case 0x34385cu: goto label_34385c;
        case 0x343860u: goto label_343860;
        case 0x343864u: goto label_343864;
        case 0x343868u: goto label_343868;
        case 0x34386cu: goto label_34386c;
        case 0x343870u: goto label_343870;
        case 0x343874u: goto label_343874;
        case 0x343878u: goto label_343878;
        case 0x34387cu: goto label_34387c;
        case 0x343880u: goto label_343880;
        case 0x343884u: goto label_343884;
        case 0x343888u: goto label_343888;
        case 0x34388cu: goto label_34388c;
        case 0x343890u: goto label_343890;
        case 0x343894u: goto label_343894;
        case 0x343898u: goto label_343898;
        case 0x34389cu: goto label_34389c;
        case 0x3438a0u: goto label_3438a0;
        case 0x3438a4u: goto label_3438a4;
        case 0x3438a8u: goto label_3438a8;
        case 0x3438acu: goto label_3438ac;
        case 0x3438b0u: goto label_3438b0;
        case 0x3438b4u: goto label_3438b4;
        case 0x3438b8u: goto label_3438b8;
        case 0x3438bcu: goto label_3438bc;
        case 0x3438c0u: goto label_3438c0;
        case 0x3438c4u: goto label_3438c4;
        case 0x3438c8u: goto label_3438c8;
        case 0x3438ccu: goto label_3438cc;
        case 0x3438d0u: goto label_3438d0;
        case 0x3438d4u: goto label_3438d4;
        case 0x3438d8u: goto label_3438d8;
        case 0x3438dcu: goto label_3438dc;
        case 0x3438e0u: goto label_3438e0;
        case 0x3438e4u: goto label_3438e4;
        case 0x3438e8u: goto label_3438e8;
        case 0x3438ecu: goto label_3438ec;
        case 0x3438f0u: goto label_3438f0;
        case 0x3438f4u: goto label_3438f4;
        case 0x3438f8u: goto label_3438f8;
        case 0x3438fcu: goto label_3438fc;
        case 0x343900u: goto label_343900;
        case 0x343904u: goto label_343904;
        case 0x343908u: goto label_343908;
        case 0x34390cu: goto label_34390c;
        case 0x343910u: goto label_343910;
        case 0x343914u: goto label_343914;
        case 0x343918u: goto label_343918;
        case 0x34391cu: goto label_34391c;
        case 0x343920u: goto label_343920;
        case 0x343924u: goto label_343924;
        case 0x343928u: goto label_343928;
        case 0x34392cu: goto label_34392c;
        case 0x343930u: goto label_343930;
        case 0x343934u: goto label_343934;
        case 0x343938u: goto label_343938;
        case 0x34393cu: goto label_34393c;
        case 0x343940u: goto label_343940;
        case 0x343944u: goto label_343944;
        case 0x343948u: goto label_343948;
        case 0x34394cu: goto label_34394c;
        case 0x343950u: goto label_343950;
        case 0x343954u: goto label_343954;
        case 0x343958u: goto label_343958;
        case 0x34395cu: goto label_34395c;
        case 0x343960u: goto label_343960;
        case 0x343964u: goto label_343964;
        case 0x343968u: goto label_343968;
        case 0x34396cu: goto label_34396c;
        case 0x343970u: goto label_343970;
        case 0x343974u: goto label_343974;
        case 0x343978u: goto label_343978;
        case 0x34397cu: goto label_34397c;
        case 0x343980u: goto label_343980;
        case 0x343984u: goto label_343984;
        case 0x343988u: goto label_343988;
        case 0x34398cu: goto label_34398c;
        case 0x343990u: goto label_343990;
        case 0x343994u: goto label_343994;
        case 0x343998u: goto label_343998;
        case 0x34399cu: goto label_34399c;
        case 0x3439a0u: goto label_3439a0;
        case 0x3439a4u: goto label_3439a4;
        case 0x3439a8u: goto label_3439a8;
        case 0x3439acu: goto label_3439ac;
        case 0x3439b0u: goto label_3439b0;
        case 0x3439b4u: goto label_3439b4;
        case 0x3439b8u: goto label_3439b8;
        case 0x3439bcu: goto label_3439bc;
        case 0x3439c0u: goto label_3439c0;
        case 0x3439c4u: goto label_3439c4;
        case 0x3439c8u: goto label_3439c8;
        case 0x3439ccu: goto label_3439cc;
        case 0x3439d0u: goto label_3439d0;
        case 0x3439d4u: goto label_3439d4;
        case 0x3439d8u: goto label_3439d8;
        case 0x3439dcu: goto label_3439dc;
        case 0x3439e0u: goto label_3439e0;
        case 0x3439e4u: goto label_3439e4;
        case 0x3439e8u: goto label_3439e8;
        case 0x3439ecu: goto label_3439ec;
        case 0x3439f0u: goto label_3439f0;
        case 0x3439f4u: goto label_3439f4;
        case 0x3439f8u: goto label_3439f8;
        case 0x3439fcu: goto label_3439fc;
        case 0x343a00u: goto label_343a00;
        case 0x343a04u: goto label_343a04;
        case 0x343a08u: goto label_343a08;
        case 0x343a0cu: goto label_343a0c;
        case 0x343a10u: goto label_343a10;
        case 0x343a14u: goto label_343a14;
        case 0x343a18u: goto label_343a18;
        case 0x343a1cu: goto label_343a1c;
        case 0x343a20u: goto label_343a20;
        case 0x343a24u: goto label_343a24;
        case 0x343a28u: goto label_343a28;
        case 0x343a2cu: goto label_343a2c;
        case 0x343a30u: goto label_343a30;
        case 0x343a34u: goto label_343a34;
        case 0x343a38u: goto label_343a38;
        case 0x343a3cu: goto label_343a3c;
        case 0x343a40u: goto label_343a40;
        case 0x343a44u: goto label_343a44;
        case 0x343a48u: goto label_343a48;
        case 0x343a4cu: goto label_343a4c;
        case 0x343a50u: goto label_343a50;
        case 0x343a54u: goto label_343a54;
        case 0x343a58u: goto label_343a58;
        case 0x343a5cu: goto label_343a5c;
        case 0x343a60u: goto label_343a60;
        case 0x343a64u: goto label_343a64;
        case 0x343a68u: goto label_343a68;
        case 0x343a6cu: goto label_343a6c;
        case 0x343a70u: goto label_343a70;
        case 0x343a74u: goto label_343a74;
        case 0x343a78u: goto label_343a78;
        case 0x343a7cu: goto label_343a7c;
        case 0x343a80u: goto label_343a80;
        case 0x343a84u: goto label_343a84;
        default: break;
    }

    ctx->pc = 0x343810u;

label_343810:
    // 0x343810: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x343810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_343814:
    // 0x343814: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x343814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_343818:
    // 0x343818: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x343818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_34381c:
    // 0x34381c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x34381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_343820:
    // 0x343820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343824:
    // 0x343824: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x343824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_343828:
    // 0x343828: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x343828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_34382c:
    // 0x34382c: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x34382cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_343830:
    // 0x343830: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x343830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_343834:
    // 0x343834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_343838:
    if (ctx->pc == 0x343838u) {
        ctx->pc = 0x343838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343834u;
        // 0x343838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34383Cu;
        goto label_34383c;
    }
    ctx->pc = 0x343834u;
    {
        const bool branch_taken_0x343834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343834u;
        // 0x343838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343834) {
            ctx->pc = 0x343844u;
            goto label_343844;
        }
    }
    ctx->pc = 0x34383Cu;
label_34383c:
    // 0x34383c: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x34383cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_343840:
    // 0x343840: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x343840u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_343844:
    // 0x343844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343848:
    // 0x343848: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x343848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_34384c:
    // 0x34384c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_343850:
    // 0x343850: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x343850u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_343854:
    // 0x343854: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x343854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_343858:
    // 0x343858: 0x40f809  jalr        $v0
label_34385c:
    if (ctx->pc == 0x34385Cu) {
        ctx->pc = 0x34385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343858u;
        // 0x34385c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343860u;
        goto label_343860;
    }
    ctx->pc = 0x343858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343860u);
        ctx->pc = 0x34385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343858u;
        // 0x34385c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343858u, 0x343860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343860u;
label_343860:
    // 0x343860: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x343860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_343864:
    // 0x343864: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x343864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_343868:
    // 0x343868: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x343868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34386c:
    // 0x34386c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343870:
    // 0x343870: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_343874:
    // 0x343874: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x343874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_343878:
    // 0x343878: 0xc0cd940  jal         func_336500
label_34387c:
    if (ctx->pc == 0x34387Cu) {
        ctx->pc = 0x34387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343878u;
        // 0x34387c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343880u;
        goto label_343880;
    }
    ctx->pc = 0x343878u;
    SET_GPR_U32(ctx, 31, 0x343880u);
    ctx->pc = 0x34387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343878u;
    // 0x34387c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x343878u, 0x343880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343880u;
label_343880:
    // 0x343880: 0x82260031  lb          $a2, 0x31($s1)
    ctx->pc = 0x343880u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_343884:
    // 0x343884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x343884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_343888:
    // 0x343888: 0x10c2005d  beq         $a2, $v0, . + 4 + (0x5D << 2)
label_34388c:
    if (ctx->pc == 0x34388Cu) {
        ctx->pc = 0x34388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343888u;
        // 0x34388c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343890u;
        goto label_343890;
    }
    ctx->pc = 0x343888u;
    {
        const bool branch_taken_0x343888 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x34388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343888u;
        // 0x34388c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343888) {
            ctx->pc = 0x343A00u;
            goto label_343a00;
        }
    }
    ctx->pc = 0x343890u;
label_343890:
    // 0x343890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343894:
    // 0x343894: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x343894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_343898:
    // 0x343898: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x343898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_34389c:
    // 0x34389c: 0x40f809  jalr        $v0
label_3438a0:
    if (ctx->pc == 0x3438A0u) {
        ctx->pc = 0x3438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34389Cu;
        // 0x3438a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3438A4u;
        goto label_3438a4;
    }
    ctx->pc = 0x34389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3438A4u);
        ctx->pc = 0x3438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34389Cu;
        // 0x3438a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34389Cu, 0x3438A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3438A4u;
label_3438a4:
    // 0x3438a4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3438a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3438a8:
    // 0x3438a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3438a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3438ac:
    // 0x3438ac: 0xc0cd940  jal         func_336500
label_3438b0:
    if (ctx->pc == 0x3438B0u) {
        ctx->pc = 0x3438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438ACu;
        // 0x3438b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3438B4u;
        goto label_3438b4;
    }
    ctx->pc = 0x3438ACu;
    SET_GPR_U32(ctx, 31, 0x3438B4u);
    ctx->pc = 0x3438B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3438ACu;
    // 0x3438b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x3438ACu, 0x3438B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438B4u;
label_3438b4:
    // 0x3438b4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3438b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3438b8:
    // 0x3438b8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3438b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3438bc:
    // 0x3438bc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3438bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3438c0:
    // 0x3438c0: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3438c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3438c4:
    // 0x3438c4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x3438c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3438c8:
    // 0x3438c8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3438c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3438cc:
    // 0x3438cc: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x3438ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3438d0:
    // 0x3438d0: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x3438d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3438d4:
    // 0x3438d4: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x3438d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_3438d8:
    // 0x3438d8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3438d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3438dc:
    // 0x3438dc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3438dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3438e0:
    // 0x3438e0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3438e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3438e4:
    // 0x3438e4: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x3438e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3438e8:
    // 0x3438e8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3438e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3438ec:
    // 0x3438ec: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x3438ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3438f0:
    // 0x3438f0: 0x26280050  addiu       $t0, $s1, 0x50
    ctx->pc = 0x3438f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3438f4:
    // 0x3438f4: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x3438f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3438f8:
    // 0x3438f8: 0x26270040  addiu       $a3, $s1, 0x40
    ctx->pc = 0x3438f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3438fc:
    // 0x3438fc: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x3438fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_343900:
    // 0x343900: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x343900u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_343904:
    // 0x343904: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_343908:
    // 0x343908: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_34390c:
    // 0x34390c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34390cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_343910:
    // 0x343910: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343910u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_343914:
    // 0x343914: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x343914u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_343918:
    // 0x343918: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x343918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_34391c:
    // 0x34391c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x34391cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_343920:
    // 0x343920: 0x7e250050  sq          $a1, 0x50($s1)
    ctx->pc = 0x343920u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 5));
label_343924:
    // 0x343924: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x343924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_343928:
    // 0x343928: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x343928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_34392c:
    // 0x34392c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34392cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_343930:
    // 0x343930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_343934:
    // 0x343934: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x343934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_343938:
    // 0x343938: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_34393c:
    // 0x34393c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34393cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_343940:
    // 0x343940: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_343944:
    // 0x343944: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343944u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_343948:
    // 0x343948: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x343948u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_34394c:
    // 0x34394c: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x34394cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
label_343950:
    // 0x343950: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x343950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_343954:
    // 0x343954: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x343954u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_343958:
    // 0x343958: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x343958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_34395c:
    // 0x34395c: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x34395cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_343960:
    // 0x343960: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x343960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_343964:
    // 0x343964: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x343964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_343968:
    // 0x343968: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x343968u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_34396c:
    // 0x34396c: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x34396cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_343970:
    // 0x343970: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x343970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_343974:
    // 0x343974: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x343974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_343978:
    // 0x343978: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x343978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_34397c:
    // 0x34397c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x34397cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_343980:
    // 0x343980: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x343980u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_343984:
    // 0x343984: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x343984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_343988:
    // 0x343988: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x343988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34398c:
    // 0x34398c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34398cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_343990:
    // 0x343990: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x343990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_343994:
    // 0x343994: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_343998:
    // 0x343998: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343998u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_34399c:
    // 0x34399c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34399cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3439a0:
    // 0x3439a0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3439a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3439a4:
    // 0x3439a4: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x3439a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_3439a8:
    // 0x3439a8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3439a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3439ac:
    // 0x3439ac: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x3439acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_3439b0:
    // 0x3439b0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3439b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3439b4:
    // 0x3439b4: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x3439b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3439b8:
    // 0x3439b8: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x3439b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3439bc:
    // 0x3439bc: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x3439bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_3439c0:
    // 0x3439c0: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3439c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3439c4:
    // 0x3439c4: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3439c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3439c8:
    // 0x3439c8: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3439c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_3439cc:
    // 0x3439cc: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x3439ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3439d0:
    // 0x3439d0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3439d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3439d4:
    // 0x3439d4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3439d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3439d8:
    // 0x3439d8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3439d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3439dc:
    // 0x3439dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3439dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3439e0:
    // 0x3439e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3439e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3439e4:
    // 0x3439e4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3439e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3439e8:
    // 0x3439e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3439e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3439ec:
    // 0x3439ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3439ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3439f0:
    // 0x3439f0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3439f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3439f4:
    // 0x3439f4: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x3439f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
label_3439f8:
    // 0x3439f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3439fc:
    if (ctx->pc == 0x3439FCu) {
        ctx->pc = 0x3439FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439F8u;
        // 0x3439fc: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A00u;
        goto label_343a00;
    }
    ctx->pc = 0x3439F8u;
    {
        const bool branch_taken_0x3439f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3439FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439F8u;
        // 0x3439fc: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439f8) {
            ctx->pc = 0x343A48u;
            goto label_343a48;
        }
    }
    ctx->pc = 0x343A00u;
label_343a00:
    // 0x343a00: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x343a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_343a04:
    // 0x343a04: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x343a04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_343a08:
    // 0x343a08: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x343a08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_343a0c:
    // 0x343a0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x343a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_343a10:
    // 0x343a10: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x343a10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
label_343a14:
    // 0x343a14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_343a18:
    // 0x343a18: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x343a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_343a1c:
    // 0x343a1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_343a20:
    // 0x343a20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343a20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_343a24:
    // 0x343a24: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x343a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_343a28:
    // 0x343a28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343a28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_343a2c:
    // 0x343a2c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x343a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_343a30:
    // 0x343a30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_343a34:
    // 0x343a34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343a34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_343a38:
    // 0x343a38: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x343a38u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_343a3c:
    // 0x343a3c: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x343a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
label_343a40:
    // 0x343a40: 0x7e250040  sq          $a1, 0x40($s1)
    ctx->pc = 0x343a40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 5));
label_343a44:
    // 0x343a44: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x343a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_343a48:
    // 0x343a48: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x343a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_343a4c:
    // 0x343a4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x343a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_343a50:
    // 0x343a50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_343a54:
    if (ctx->pc == 0x343A54u) {
        ctx->pc = 0x343A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A50u;
        // 0x343a54: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A58u;
        goto label_343a58;
    }
    ctx->pc = 0x343A50u;
    {
        const bool branch_taken_0x343a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a50) {
            ctx->pc = 0x343A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343A50u;
            // 0x343a54: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343A64u;
            goto label_343a64;
        }
    }
    ctx->pc = 0x343A58u;
label_343a58:
    // 0x343a58: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x343a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_343a5c:
    // 0x343a5c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x343a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_343a60:
    // 0x343a60: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x343a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_343a64:
    // 0x343a64: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x343a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_343a68:
    // 0x343a68: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x343a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_343a6c:
    // 0x343a6c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x343a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_343a70:
    // 0x343a70: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x343a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
label_343a74:
    // 0x343a74: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x343a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_343a78:
    // 0x343a78: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x343a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_343a7c:
    // 0x343a7c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x343a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_343a80:
    // 0x343a80: 0x3e00008  jr          $ra
label_343a84:
    if (ctx->pc == 0x343A84u) {
        ctx->pc = 0x343A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A80u;
        // 0x343a84: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343A88u;
        goto label_fallthrough_0x343a80;
    }
    ctx->pc = 0x343A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A80u;
        // 0x343a84: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343a80:
    ctx->pc = 0x343A88u;
}
