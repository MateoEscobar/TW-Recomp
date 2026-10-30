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

// Function: sub_001B57C8
// Address: 0x1b57c8 - 0x1b5a90
void sub_001B57C8_0x1b57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B57C8_0x1b57c8");
#endif

    switch (ctx->pc) {
        case 0x1b57c8u: goto label_1b57c8;
        case 0x1b57ccu: goto label_1b57cc;
        case 0x1b57d0u: goto label_1b57d0;
        case 0x1b57d4u: goto label_1b57d4;
        case 0x1b57d8u: goto label_1b57d8;
        case 0x1b57dcu: goto label_1b57dc;
        case 0x1b57e0u: goto label_1b57e0;
        case 0x1b57e4u: goto label_1b57e4;
        case 0x1b57e8u: goto label_1b57e8;
        case 0x1b57ecu: goto label_1b57ec;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b57f8u: goto label_1b57f8;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5800u: goto label_1b5800;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5808u: goto label_1b5808;
        case 0x1b580cu: goto label_1b580c;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b5814u: goto label_1b5814;
        case 0x1b5818u: goto label_1b5818;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5820u: goto label_1b5820;
        case 0x1b5824u: goto label_1b5824;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b582cu: goto label_1b582c;
        case 0x1b5830u: goto label_1b5830;
        case 0x1b5834u: goto label_1b5834;
        case 0x1b5838u: goto label_1b5838;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5840u: goto label_1b5840;
        case 0x1b5844u: goto label_1b5844;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b584cu: goto label_1b584c;
        case 0x1b5850u: goto label_1b5850;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5858u: goto label_1b5858;
        case 0x1b585cu: goto label_1b585c;
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5928u: goto label_1b5928;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        case 0x1b5990u: goto label_1b5990;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b5998u: goto label_1b5998;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a4cu: goto label_1b5a4c;
        case 0x1b5a50u: goto label_1b5a50;
        case 0x1b5a54u: goto label_1b5a54;
        case 0x1b5a58u: goto label_1b5a58;
        case 0x1b5a5cu: goto label_1b5a5c;
        case 0x1b5a60u: goto label_1b5a60;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a70u: goto label_1b5a70;
        case 0x1b5a74u: goto label_1b5a74;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a80u: goto label_1b5a80;
        case 0x1b5a84u: goto label_1b5a84;
        case 0x1b5a88u: goto label_1b5a88;
        case 0x1b5a8cu: goto label_1b5a8c;
        default: break;
    }

    ctx->pc = 0x1b57c8u;

label_1b57c8:
    // 0x1b57c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b57cc:
    // 0x1b57cc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1b57ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1b57d0:
    // 0x1b57d0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1b57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1b57d4:
    // 0x1b57d4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1b57d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1b57d8:
    // 0x1b57d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b57dc:
    // 0x1b57dc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b57dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b57e0:
    // 0x1b57e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b57e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b57e4:
    // 0x1b57e4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1b57e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1b57e8:
    // 0x1b57e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b57e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b57ec:
    // 0x1b57ec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1b57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1b57f0:
    // 0x1b57f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1b57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1b57f4:
    // 0x1b57f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b57f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b57f8:
    // 0x1b57f8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1b57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1b57fc:
    // 0x1b57fc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1b57fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1b5800:
    // 0x1b5800: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
label_1b5804:
    if (ctx->pc == 0x1B5804u) {
        ctx->pc = 0x1B5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5800u;
        // 0x1b5804: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5808u;
        goto label_1b5808;
    }
    ctx->pc = 0x1B5800u;
    {
        const bool branch_taken_0x1b5800 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5800u;
        // 0x1b5804: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5800) {
            ctx->pc = 0x1B581Cu;
            goto label_1b581c;
        }
    }
    ctx->pc = 0x1B5808u;
label_1b5808:
    // 0x1b5808: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1b580c:
    // 0x1b580c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1b580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_1b5810:
    // 0x1b5810: 0x24575320  addiu       $s7, $v0, 0x5320
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
label_1b5814:
    // 0x1b5814: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b5818:
    if (ctx->pc == 0x1B5818u) {
        ctx->pc = 0x1B5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5814u;
        // 0x1b5818: 0x8c762e44  lw          $s6, 0x2E44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B581Cu;
        goto label_1b581c;
    }
    ctx->pc = 0x1B5814u;
    {
        const bool branch_taken_0x1b5814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5814u;
        // 0x1b5818: 0x8c762e44  lw          $s6, 0x2E44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5814) {
            ctx->pc = 0x1B582Cu;
            goto label_1b582c;
        }
    }
    ctx->pc = 0x1B581Cu;
label_1b581c:
    // 0x1b581c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1b5820:
    // 0x1b5820: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1b5820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1b5824:
    // 0x1b5824: 0x8c562e40  lw          $s6, 0x2E40($v0)
    ctx->pc = 0x1b5824u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11840)));
label_1b5828:
    // 0x1b5828: 0x24775320  addiu       $s7, $v1, 0x5320
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 21280));
label_1b582c:
    // 0x1b582c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1b582cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5830:
    // 0x1b5830: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b5834:
    if (ctx->pc == 0x1B5834u) {
        ctx->pc = 0x1B5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5830u;
        // 0x1b5834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5838u;
        goto label_1b5838;
    }
    ctx->pc = 0x1B5830u;
    {
        const bool branch_taken_0x1b5830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5830u;
        // 0x1b5834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5830) {
            ctx->pc = 0x1B583Cu;
            goto label_1b583c;
        }
    }
    ctx->pc = 0x1B5838u;
label_1b5838:
    // 0x1b5838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b583c:
    // 0x1b583c: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1b583cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1b5840:
    // 0x1b5840: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b5844:
    if (ctx->pc == 0x1B5844u) {
        ctx->pc = 0x1B5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5840u;
        // 0x1b5844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5848u;
        goto label_1b5848;
    }
    ctx->pc = 0x1B5840u;
    {
        const bool branch_taken_0x1b5840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5840u;
        // 0x1b5844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5840) {
            ctx->pc = 0x1B587Cu;
            goto label_1b587c;
        }
    }
    ctx->pc = 0x1B5848u;
label_1b5848:
    // 0x1b5848: 0x24040560  addiu       $a0, $zero, 0x560
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_1b584c:
    // 0x1b584c: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1b584cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b5850:
    // 0x1b5850: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1b5854:
    // 0x1b5854: 0x8c430434  lw          $v1, 0x434($v0)
    ctx->pc = 0x1b5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1076)));
label_1b5858:
    // 0x1b5858: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
label_1b585c:
    if (ctx->pc == 0x1B585Cu) {
        ctx->pc = 0x1B585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5858u;
        // 0x1b585c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5860u;
        goto label_1b5860;
    }
    ctx->pc = 0x1B5858u;
    {
        const bool branch_taken_0x1b5858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5858u;
        // 0x1b585c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5858) {
            ctx->pc = 0x1B5838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5838;
        }
    }
    ctx->pc = 0x1B5860u;
label_1b5860:
    // 0x1b5860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b5860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5864:
    // 0x1b5864: 0xc10c313  jal         func_430C4C
label_1b5868:
    if (ctx->pc == 0x1B5868u) {
        ctx->pc = 0x1B5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5864u;
        // 0x1b5868: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B586Cu;
        goto label_1b586c;
    }
    ctx->pc = 0x1B5864u;
    SET_GPR_U32(ctx, 31, 0x1B586Cu);
    ctx->pc = 0x1B5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5864u;
    // 0x1b5868: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1B5864u, 0x1B586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B586Cu;
label_1b586c:
    // 0x1b586c: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1b5870:
    if (ctx->pc == 0x1B5870u) {
        ctx->pc = 0x1B5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B586Cu;
        // 0x1b5870: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5874u;
        goto label_1b5874;
    }
    ctx->pc = 0x1B586Cu;
    {
        const bool branch_taken_0x1b586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b586c) {
            ctx->pc = 0x1B5870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B586Cu;
            // 0x1b5870: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B583Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b583c;
        }
    }
    ctx->pc = 0x1B5874u;
label_1b5874:
    // 0x1b5874: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b5874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5878:
    // 0x1b5878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b587c:
    // 0x1b587c: 0x12220077  beq         $s1, $v0, . + 4 + (0x77 << 2)
label_1b5880:
    if (ctx->pc == 0x1B5880u) {
        ctx->pc = 0x1B5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B587Cu;
        // 0x1b5880: 0x24120560  addiu       $s2, $zero, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5884u;
        goto label_1b5884;
    }
    ctx->pc = 0x1B587Cu;
    {
        const bool branch_taken_0x1b587c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B587Cu;
        // 0x1b5880: 0x24120560  addiu       $s2, $zero, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b587c) {
            ctx->pc = 0x1B5A5Cu;
            goto label_1b5a5c;
        }
    }
    ctx->pc = 0x1B5884u;
label_1b5884:
    // 0x1b5884: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b5884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5888:
    // 0x1b5888: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x1b5888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b588c:
    // 0x1b588c: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1b588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1b5890:
    // 0x1b5890: 0xac550558  sw          $s5, 0x558($v0)
    ctx->pc = 0x1b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1368), GPR_U32(ctx, 21));
label_1b5894:
    // 0x1b5894: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b5894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5898:
    // 0x1b5898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b589c:
    // 0x1b589c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1b589cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b58a0:
    // 0x1b58a0: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1b58a4:
    // 0x1b58a4: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1b58a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1b58a8:
    // 0x1b58a8: 0xc0733c4  jal         func_1CCF10
label_1b58ac:
    if (ctx->pc == 0x1B58ACu) {
        ctx->pc = 0x1B58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58A8u;
        // 0x1b58ac: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B58B0u;
        goto label_1b58b0;
    }
    ctx->pc = 0x1B58A8u;
    SET_GPR_U32(ctx, 31, 0x1B58B0u);
    ctx->pc = 0x1B58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58A8u;
    // 0x1b58ac: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF10u, 0x1B58A8u, 0x1B58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58B0u;
label_1b58b0:
    // 0x1b58b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b58b4:
    // 0x1b58b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b58b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b58b8:
    // 0x1b58b8: 0x60f809  jalr        $v1
label_1b58bc:
    if (ctx->pc == 0x1B58BCu) {
        ctx->pc = 0x1B58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58B8u;
        // 0x1b58bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B58C0u;
        goto label_1b58c0;
    }
    ctx->pc = 0x1B58B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B58C0u);
        ctx->pc = 0x1B58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58B8u;
        // 0x1b58bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B58B8u, 0x1B58C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B58C0u;
label_1b58c0:
    // 0x1b58c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b58c4:
    // 0x1b58c4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1b58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1b58c8:
    // 0x1b58c8: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x1b58c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1b58cc:
    // 0x1b58cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1b58ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b58d0:
    // 0x1b58d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b58d4:
    // 0x1b58d4: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x1b58d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1b58d8:
    // 0x1b58d8: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x1b58d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1b58dc:
    // 0x1b58dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b58dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b58e0:
    // 0x1b58e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1b58e4:
    // 0x1b58e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b58e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b58e8:
    // 0x1b58e8: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x1b58e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_1b58ec:
    // 0x1b58ec: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1b58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b58f0:
    // 0x1b58f0: 0xc06e534  jal         func_1B94D0
label_1b58f4:
    if (ctx->pc == 0x1B58F4u) {
        ctx->pc = 0x1B58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58F0u;
        // 0x1b58f4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B58F8u;
        goto label_1b58f8;
    }
    ctx->pc = 0x1B58F0u;
    SET_GPR_U32(ctx, 31, 0x1B58F8u);
    ctx->pc = 0x1B58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58F0u;
    // 0x1b58f4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1B58F0u, 0x1B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58F8u;
label_1b58f8:
    // 0x1b58f8: 0x12c00058  beqz        $s6, . + 4 + (0x58 << 2)
label_1b58fc:
    if (ctx->pc == 0x1B58FCu) {
        ctx->pc = 0x1B58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58F8u;
        // 0x1b58fc: 0x24150560  addiu       $s5, $zero, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5900u;
        goto label_1b5900;
    }
    ctx->pc = 0x1B58F8u;
    {
        const bool branch_taken_0x1b58f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58F8u;
        // 0x1b58fc: 0x24150560  addiu       $s5, $zero, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58f8) {
            ctx->pc = 0x1B5A5Cu;
            goto label_1b5a5c;
        }
    }
    ctx->pc = 0x1B5900u;
label_1b5900:
    // 0x1b5900: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x1b5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b5904:
    // 0x1b5904: 0x0  nop
    ctx->pc = 0x1b5904u;
    // NOP
label_1b5908:
    // 0x1b5908: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1b5908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b590c:
    // 0x1b590c: 0xb6102b  sltu        $v0, $a1, $s6
    ctx->pc = 0x1b590cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1b5910:
    // 0x1b5910: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1b5914:
    if (ctx->pc == 0x1B5914u) {
        ctx->pc = 0x1B5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5910u;
        // 0x1b5914: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5918u;
        goto label_1b5918;
    }
    ctx->pc = 0x1B5910u;
    {
        const bool branch_taken_0x1b5910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5910u;
        // 0x1b5914: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5910) {
            ctx->pc = 0x1B5950u;
            goto label_1b5950;
        }
    }
    ctx->pc = 0x1B5918u;
label_1b5918:
    // 0x1b5918: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_1b591c:
    // 0x1b591c: 0x3c71018  mult        $v0, $fp, $a3
    ctx->pc = 0x1b591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b5920:
    // 0x1b5920: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1b5924:
    // 0x1b5924: 0x0  nop
    ctx->pc = 0x1b5924u;
    // NOP
label_1b5928:
    // 0x1b5928: 0x2871018  mult        $v0, $s4, $a3
    ctx->pc = 0x1b5928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b592c:
    // 0x1b592c: 0x8cc40558  lw          $a0, 0x558($a2)
    ctx->pc = 0x1b592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1368)));
label_1b5930:
    // 0x1b5930: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1b5934:
    // 0x1b5934: 0x8c620558  lw          $v0, 0x558($v1)
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
label_1b5938:
    // 0x1b5938: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1b5938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b593c:
    // 0x1b593c: 0xa2a00b  movn        $s4, $a1, $v0
    ctx->pc = 0x1b593cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
label_1b5940:
    // 0x1b5940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b5944:
    // 0x1b5944: 0xb6102b  sltu        $v0, $a1, $s6
    ctx->pc = 0x1b5944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1b5948:
    // 0x1b5948: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b594c:
    if (ctx->pc == 0x1B594Cu) {
        ctx->pc = 0x1B594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5948u;
        // 0x1b594c: 0x24c60560  addiu       $a2, $a2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5950u;
        goto label_1b5950;
    }
    ctx->pc = 0x1B5948u;
    {
        const bool branch_taken_0x1b5948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5948u;
        // 0x1b594c: 0x24c60560  addiu       $a2, $a2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5948) {
            ctx->pc = 0x1B5928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5928;
        }
    }
    ctx->pc = 0x1B5950u;
label_1b5950:
    // 0x1b5950: 0x1293003e  beq         $s4, $s3, . + 4 + (0x3E << 2)
label_1b5954:
    if (ctx->pc == 0x1B5954u) {
        ctx->pc = 0x1B5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5950u;
        // 0x1b5954: 0x2751018  mult        $v0, $s3, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5958u;
        goto label_1b5958;
    }
    ctx->pc = 0x1B5950u;
    {
        const bool branch_taken_0x1b5950 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5950u;
        // 0x1b5954: 0x2751018  mult        $v0, $s3, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5950) {
            ctx->pc = 0x1B5A4Cu;
            goto label_1b5a4c;
        }
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1b595c:
    // 0x1b595c: 0x2951018  mult        $v0, $s4, $s5
    ctx->pc = 0x1b595cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b5960:
    // 0x1b5960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5964:
    // 0x1b5964: 0x24840540  addiu       $a0, $a0, 0x540
    ctx->pc = 0x1b5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
label_1b5968:
    // 0x1b5968: 0xc10c3ac  jal         func_430EB0
label_1b596c:
    if (ctx->pc == 0x1B596Cu) {
        ctx->pc = 0x1B596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5968u;
        // 0x1b596c: 0x579021  addu        $s2, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5970u;
        goto label_1b5970;
    }
    ctx->pc = 0x1B5968u;
    SET_GPR_U32(ctx, 31, 0x1B5970u);
    ctx->pc = 0x1B596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5968u;
    // 0x1b596c: 0x579021  addu        $s2, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B5968u, 0x1B5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5970u;
label_1b5970:
    // 0x1b5970: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1b5970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5974:
    // 0x1b5974: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1b5974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b5978:
    // 0x1b5978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b597c:
    // 0x1b597c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b597cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b5980:
    // 0x1b5980: 0x26100540  addiu       $s0, $s0, 0x540
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
label_1b5984:
    // 0x1b5984: 0xc10c3ac  jal         func_430EB0
label_1b5988:
    if (ctx->pc == 0x1B5988u) {
        ctx->pc = 0x1B5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5984u;
        // 0x1b5988: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B598Cu;
        goto label_1b598c;
    }
    ctx->pc = 0x1B5984u;
    SET_GPR_U32(ctx, 31, 0x1B598Cu);
    ctx->pc = 0x1B5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5984u;
    // 0x1b5988: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B5984u, 0x1B598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B598Cu;
label_1b598c:
    // 0x1b598c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5990:
    // 0x1b5990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b5990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5994:
    // 0x1b5994: 0xc10c4de  jal         func_431378
label_1b5998:
    if (ctx->pc == 0x1B5998u) {
        ctx->pc = 0x1B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5994u;
        // 0x1b5998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B599Cu;
        goto label_1b599c;
    }
    ctx->pc = 0x1B5994u;
    SET_GPR_U32(ctx, 31, 0x1B599Cu);
    ctx->pc = 0x1B5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5994u;
    // 0x1b5998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1B5994u, 0x1B599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B599Cu;
label_1b599c:
    // 0x1b599c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b59a0:
    // 0x1b59a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b59a4:
    // 0x1b59a4: 0xc06e536  jal         func_1B94D8
label_1b59a8:
    if (ctx->pc == 0x1B59A8u) {
        ctx->pc = 0x1B59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59A4u;
        // 0x1b59a8: 0x8c730558  lw          $s3, 0x558($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59ACu;
        goto label_1b59ac;
    }
    ctx->pc = 0x1B59A4u;
    SET_GPR_U32(ctx, 31, 0x1B59ACu);
    ctx->pc = 0x1B59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59A4u;
    // 0x1b59a8: 0x8c730558  lw          $s3, 0x558($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D8u, 0x1B59A4u, 0x1B59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59ACu;
label_1b59ac:
    // 0x1b59ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b59acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b0:
    // 0x1b59b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b59b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b4:
    // 0x1b59b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b8:
    // 0x1b59b8: 0xc0733ae  jal         func_1CCEB8
label_1b59bc:
    if (ctx->pc == 0x1B59BCu) {
        ctx->pc = 0x1B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59B8u;
        // 0x1b59bc: 0x24a50540  addiu       $a1, $a1, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59C0u;
        goto label_1b59c0;
    }
    ctx->pc = 0x1B59B8u;
    SET_GPR_U32(ctx, 31, 0x1B59C0u);
    ctx->pc = 0x1B59BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59B8u;
    // 0x1b59bc: 0x24a50540  addiu       $a1, $a1, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCEB8u, 0x1B59B8u, 0x1B59C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59C0u;
label_1b59c0:
    // 0x1b59c0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1b59c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b59c4:
    // 0x1b59c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b59c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b59c8:
    // 0x1b59c8: 0x8c620558  lw          $v0, 0x558($v1)
    ctx->pc = 0x1b59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1368)));
label_1b59cc:
    // 0x1b59cc: 0xc06e536  jal         func_1B94D8
label_1b59d0:
    if (ctx->pc == 0x1B59D0u) {
        ctx->pc = 0x1B59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59CCu;
        // 0x1b59d0: 0xae220558  sw          $v0, 0x558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59D4u;
        goto label_1b59d4;
    }
    ctx->pc = 0x1B59CCu;
    SET_GPR_U32(ctx, 31, 0x1B59D4u);
    ctx->pc = 0x1B59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59CCu;
    // 0x1b59d0: 0xae220558  sw          $v0, 0x558($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D8u, 0x1B59CCu, 0x1B59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59D4u;
label_1b59d4:
    // 0x1b59d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b59d8:
    // 0x1b59d8: 0xc06e534  jal         func_1B94D0
label_1b59dc:
    if (ctx->pc == 0x1B59DCu) {
        ctx->pc = 0x1B59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59D8u;
        // 0x1b59dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59E0u;
        goto label_1b59e0;
    }
    ctx->pc = 0x1B59D8u;
    SET_GPR_U32(ctx, 31, 0x1B59E0u);
    ctx->pc = 0x1B59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59D8u;
    // 0x1b59dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1B59D8u, 0x1B59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59E0u;
label_1b59e0:
    // 0x1b59e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b59e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b59e4:
    // 0x1b59e4: 0xc0733ae  jal         func_1CCEB8
label_1b59e8:
    if (ctx->pc == 0x1B59E8u) {
        ctx->pc = 0x1B59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59E4u;
        // 0x1b59e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59ECu;
        goto label_1b59ec;
    }
    ctx->pc = 0x1B59E4u;
    SET_GPR_U32(ctx, 31, 0x1B59ECu);
    ctx->pc = 0x1B59E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59E4u;
    // 0x1b59e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCEB8u, 0x1B59E4u, 0x1B59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59ECu;
label_1b59ec:
    // 0x1b59ec: 0xae530558  sw          $s3, 0x558($s2)
    ctx->pc = 0x1b59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 19));
label_1b59f0:
    // 0x1b59f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b59f4:
    // 0x1b59f4: 0xc06e534  jal         func_1B94D0
label_1b59f8:
    if (ctx->pc == 0x1B59F8u) {
        ctx->pc = 0x1B59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59F4u;
        // 0x1b59f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B59FCu;
        goto label_1b59fc;
    }
    ctx->pc = 0x1B59F4u;
    SET_GPR_U32(ctx, 31, 0x1B59FCu);
    ctx->pc = 0x1B59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59F4u;
    // 0x1b59f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1B59F4u, 0x1B59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59FCu;
label_1b59fc:
    // 0x1b59fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5a00:
    // 0x1b5a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a04:
    // 0x1b5a04: 0x860200e8  lh          $v0, 0xE8($s0)
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1b5a08:
    // 0x1b5a08: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1b5a0c:
    // 0x1b5a0c: 0xc0733c4  jal         func_1CCF10
label_1b5a10:
    if (ctx->pc == 0x1B5A10u) {
        ctx->pc = 0x1B5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A0Cu;
        // 0x1b5a10: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A14u;
        goto label_1b5a14;
    }
    ctx->pc = 0x1B5A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A14u);
    ctx->pc = 0x1B5A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A0Cu;
    // 0x1b5a10: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF10u, 0x1B5A0Cu, 0x1B5A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A14u;
label_1b5a14:
    // 0x1b5a14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b5a18:
    // 0x1b5a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a1c:
    // 0x1b5a1c: 0x60f809  jalr        $v1
label_1b5a20:
    if (ctx->pc == 0x1B5A20u) {
        ctx->pc = 0x1B5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A1Cu;
        // 0x1b5a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A24u;
        goto label_1b5a24;
    }
    ctx->pc = 0x1B5A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5A24u);
        ctx->pc = 0x1B5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A1Cu;
        // 0x1b5a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A1Cu, 0x1B5A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5A24u;
label_1b5a24:
    // 0x1b5a24: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b5a28:
    // 0x1b5a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a2c:
    // 0x1b5a2c: 0x860200e8  lh          $v0, 0xE8($s0)
    ctx->pc = 0x1b5a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1b5a30:
    // 0x1b5a30: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1b5a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1b5a34:
    // 0x1b5a34: 0xc0733c4  jal         func_1CCF10
label_1b5a38:
    if (ctx->pc == 0x1B5A38u) {
        ctx->pc = 0x1B5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A34u;
        // 0x1b5a38: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A3Cu;
        goto label_1b5a3c;
    }
    ctx->pc = 0x1B5A34u;
    SET_GPR_U32(ctx, 31, 0x1B5A3Cu);
    ctx->pc = 0x1B5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A34u;
    // 0x1b5a38: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF10u, 0x1B5A34u, 0x1B5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A3Cu;
label_1b5a3c:
    // 0x1b5a3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b5a40:
    // 0x1b5a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a44:
    // 0x1b5a44: 0x60f809  jalr        $v1
label_1b5a48:
    if (ctx->pc == 0x1B5A48u) {
        ctx->pc = 0x1B5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A44u;
        // 0x1b5a48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A4Cu;
        goto label_1b5a4c;
    }
    ctx->pc = 0x1B5A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5A4Cu);
        ctx->pc = 0x1B5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A44u;
        // 0x1b5a48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A44u, 0x1B5A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5A4Cu;
label_1b5a4c:
    // 0x1b5a4c: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x1b5a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a50:
    // 0x1b5a50: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x1b5a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1b5a54:
    // 0x1b5a54: 0x5440ffac  bnel        $v0, $zero, . + 4 + (-0x54 << 2)
label_1b5a58:
    if (ctx->pc == 0x1B5A58u) {
        ctx->pc = 0x1B5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A54u;
        // 0x1b5a58: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A5Cu;
        goto label_1b5a5c;
    }
    ctx->pc = 0x1B5A54u;
    {
        const bool branch_taken_0x1b5a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a54) {
            ctx->pc = 0x1B5A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A54u;
            // 0x1b5a58: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5908;
        }
    }
    ctx->pc = 0x1B5A5Cu;
label_1b5a5c:
    // 0x1b5a5c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1b5a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b5a60:
    // 0x1b5a60: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1b5a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b5a64:
    // 0x1b5a64: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1b5a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b5a68:
    // 0x1b5a68: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1b5a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b5a6c:
    // 0x1b5a6c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b5a70:
    // 0x1b5a70: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b5a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b5a74:
    // 0x1b5a74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b5a74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b5a78:
    // 0x1b5a78: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1b5a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5a7c:
    // 0x1b5a7c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1b5a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5a80:
    // 0x1b5a80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b5a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5a84:
    // 0x1b5a84: 0x3e00008  jr          $ra
label_1b5a88:
    if (ctx->pc == 0x1B5A88u) {
        ctx->pc = 0x1B5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A84u;
        // 0x1b5a88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A8Cu;
        goto label_1b5a8c;
    }
    ctx->pc = 0x1B5A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A84u;
        // 0x1b5a88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5A8Cu;
label_1b5a8c:
    // 0x1b5a8c: 0x0  nop
    ctx->pc = 0x1b5a8cu;
    // NOP
    ctx->pc = 0x1b5a90u;
}
