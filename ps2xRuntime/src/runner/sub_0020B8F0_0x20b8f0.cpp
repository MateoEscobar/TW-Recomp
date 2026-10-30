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

// Function: sub_0020B8F0
// Address: 0x20b8f0 - 0x20bbe0
void sub_0020B8F0_0x20b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B8F0_0x20b8f0");
#endif

    switch (ctx->pc) {
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        default: break;
    }

    ctx->pc = 0x20b8f0u;

label_20b8f0:
    // 0x20b8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20b8f4:
    // 0x20b8f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20b8f8:
    // 0x20b8f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b8fc:
    // 0x20b8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b900:
    // 0x20b900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b904:
    // 0x20b904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20b908:
    // 0x20b908: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20b908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20b90c:
    // 0x20b90c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20b910:
    // 0x20b910: 0x40f809  jalr        $v0
label_20b914:
    if (ctx->pc == 0x20B914u) {
        ctx->pc = 0x20B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B910u;
        // 0x20b914: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B918u;
        goto label_20b918;
    }
    ctx->pc = 0x20B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B918u);
        ctx->pc = 0x20B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B910u;
        // 0x20b914: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B910u, 0x20B918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B918u;
label_20b918:
    // 0x20b918: 0x504000ac  beql        $v0, $zero, . + 4 + (0xAC << 2)
label_20b91c:
    if (ctx->pc == 0x20B91Cu) {
        ctx->pc = 0x20B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B918u;
        // 0x20b91c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B920u;
        goto label_20b920;
    }
    ctx->pc = 0x20B918u;
    {
        const bool branch_taken_0x20b918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b918) {
            ctx->pc = 0x20B91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B918u;
            // 0x20b91c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BBCCu;
            goto label_20bbcc;
        }
    }
    ctx->pc = 0x20B920u;
label_20b920:
    // 0x20b920: 0xc080ffa  jal         func_203FE8
label_20b924:
    if (ctx->pc == 0x20B924u) {
        ctx->pc = 0x20B928u;
        goto label_20b928;
    }
    ctx->pc = 0x20B920u;
    SET_GPR_U32(ctx, 31, 0x20B928u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20B920u, 0x20B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B928u;
label_20b928:
    // 0x20b928: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
label_20b92c:
    if (ctx->pc == 0x20B92Cu) {
        ctx->pc = 0x20B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B928u;
        // 0x20b92c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B930u;
        goto label_20b930;
    }
    ctx->pc = 0x20B928u;
    {
        const bool branch_taken_0x20b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b928) {
            ctx->pc = 0x20B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B928u;
            // 0x20b92c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BBCCu;
            goto label_20bbcc;
        }
    }
    ctx->pc = 0x20B930u;
label_20b930:
    // 0x20b930: 0xc0750fa  jal         func_1D43E8
label_20b934:
    if (ctx->pc == 0x20B934u) {
        ctx->pc = 0x20B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B930u;
        // 0x20b934: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B938u;
        goto label_20b938;
    }
    ctx->pc = 0x20B930u;
    SET_GPR_U32(ctx, 31, 0x20B938u);
    ctx->pc = 0x20B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B930u;
    // 0x20b934: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20B930u, 0x20B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B938u;
label_20b938:
    // 0x20b938: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_20b93c:
    if (ctx->pc == 0x20B93Cu) {
        ctx->pc = 0x20B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B938u;
        // 0x20b93c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B940u;
        goto label_20b940;
    }
    ctx->pc = 0x20B938u;
    {
        const bool branch_taken_0x20b938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b938) {
            ctx->pc = 0x20B93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B938u;
            // 0x20b93c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B964u;
            goto label_20b964;
        }
    }
    ctx->pc = 0x20B940u;
label_20b940:
    // 0x20b940: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x20b940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_20b944:
    // 0x20b944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b948:
    // 0x20b948: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x20b948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_20b94c:
    // 0x20b94c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20b950:
    // 0x20b950: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x20b950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_20b954:
    // 0x20b954: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_20b958:
    // 0x20b958: 0x60f809  jalr        $v1
label_20b95c:
    if (ctx->pc == 0x20B95Cu) {
        ctx->pc = 0x20B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B958u;
        // 0x20b95c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B960u;
        goto label_20b960;
    }
    ctx->pc = 0x20B958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B960u);
        ctx->pc = 0x20B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B958u;
        // 0x20b95c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B958u, 0x20B960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B960u;
label_20b960:
    // 0x20b960: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x20b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20b964:
    // 0x20b964: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20b968:
    if (ctx->pc == 0x20B968u) {
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B96Cu;
        goto label_20b96c;
    }
    ctx->pc = 0x20B964u;
    {
        const bool branch_taken_0x20b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b964) {
            ctx->pc = 0x20B9C8u;
            goto label_20b9c8;
        }
    }
    ctx->pc = 0x20B96Cu;
label_20b96c:
    // 0x20b96c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x20b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_20b970:
    // 0x20b970: 0xc06ba26  jal         func_1AE898
label_20b974:
    if (ctx->pc == 0x20B974u) {
        ctx->pc = 0x20B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B970u;
        // 0x20b974: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B978u;
        goto label_20b978;
    }
    ctx->pc = 0x20B970u;
    SET_GPR_U32(ctx, 31, 0x20B978u);
    ctx->pc = 0x20B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B970u;
    // 0x20b974: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x20B970u, 0x20B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B978u;
label_20b978:
    // 0x20b978: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_20b97c:
    // 0x20b97c: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
label_20b980:
    if (ctx->pc == 0x20B980u) {
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B984u;
        goto label_20b984;
    }
    ctx->pc = 0x20B97Cu;
    {
        const bool branch_taken_0x20b97c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b97c) {
            ctx->pc = 0x20B9C8u;
            goto label_20b9c8;
        }
    }
    ctx->pc = 0x20B984u;
label_20b984:
    // 0x20b984: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x20b984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_20b988:
    // 0x20b988: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x20b988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20b98c:
    // 0x20b98c: 0x2484d810  addiu       $a0, $a0, -0x27F0
    ctx->pc = 0x20b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
label_20b990:
    // 0x20b990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b994:
    // 0x20b994: 0xc0512b4  jal         func_144AD0
label_20b998:
    if (ctx->pc == 0x20B998u) {
        ctx->pc = 0x20B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B994u;
        // 0x20b998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B99Cu;
        goto label_20b99c;
    }
    ctx->pc = 0x20B994u;
    SET_GPR_U32(ctx, 31, 0x20B99Cu);
    ctx->pc = 0x20B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B994u;
    // 0x20b998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x20B994u, 0x20B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B99Cu;
label_20b99c:
    // 0x20b99c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20b99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_20b9a0:
    // 0x20b9a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20b9a4:
    if (ctx->pc == 0x20B9A4u) {
        ctx->pc = 0x20B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9A0u;
        // 0x20b9a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9A8u;
        goto label_20b9a8;
    }
    ctx->pc = 0x20B9A0u;
    {
        const bool branch_taken_0x20b9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9A0u;
        // 0x20b9a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9a0) {
            ctx->pc = 0x20B9C8u;
            goto label_20b9c8;
        }
    }
    ctx->pc = 0x20B9A8u;
label_20b9a8:
    // 0x20b9a8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x20b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_20b9ac:
    // 0x20b9ac: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x20b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_20b9b0:
    // 0x20b9b0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x20b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20b9b4:
    // 0x20b9b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b9b8:
    // 0x20b9b8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x20b9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_20b9bc:
    // 0x20b9bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20b9c0:
    // 0x20b9c0: 0x40f809  jalr        $v0
label_20b9c4:
    if (ctx->pc == 0x20B9C4u) {
        ctx->pc = 0x20B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9C0u;
        // 0x20b9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9C8u;
        goto label_20b9c8;
    }
    ctx->pc = 0x20B9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B9C8u);
        ctx->pc = 0x20B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9C0u;
        // 0x20b9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9C0u, 0x20B9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B9C8u;
label_20b9c8:
    // 0x20b9c8: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_20b9cc:
    // 0x20b9cc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_20b9d0:
    // 0x20b9d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b9d4:
    // 0x20b9d4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20b9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20b9d8:
    // 0x20b9d8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20b9dc:
    // 0x20b9dc: 0x60f809  jalr        $v1
label_20b9e0:
    if (ctx->pc == 0x20B9E0u) {
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9DCu;
        // 0x20b9e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9E4u;
        goto label_20b9e4;
    }
    ctx->pc = 0x20B9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B9E4u);
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9DCu;
        // 0x20b9e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9DCu, 0x20B9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B9E4u;
label_20b9e4:
    // 0x20b9e4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_20b9e8:
    // 0x20b9e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b9ec:
    // 0x20b9ec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20b9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20b9f0:
    // 0x20b9f0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20b9f4:
    // 0x20b9f4: 0x60f809  jalr        $v1
label_20b9f8:
    if (ctx->pc == 0x20B9F8u) {
        ctx->pc = 0x20B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9F4u;
        // 0x20b9f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9FCu;
        goto label_20b9fc;
    }
    ctx->pc = 0x20B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B9FCu);
        ctx->pc = 0x20B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9F4u;
        // 0x20b9f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9F4u, 0x20B9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B9FCu;
label_20b9fc:
    // 0x20b9fc: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_20ba00:
    // 0x20ba00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ba04:
    // 0x20ba04: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20ba04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20ba08:
    // 0x20ba08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20ba0c:
    // 0x20ba0c: 0x40f809  jalr        $v0
label_20ba10:
    if (ctx->pc == 0x20BA10u) {
        ctx->pc = 0x20BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA0Cu;
        // 0x20ba10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA14u;
        goto label_20ba14;
    }
    ctx->pc = 0x20BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BA14u);
        ctx->pc = 0x20BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA0Cu;
        // 0x20ba10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA0Cu, 0x20BA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BA14u;
label_20ba14:
    // 0x20ba14: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x20ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_20ba18:
    // 0x20ba18: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x20ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20ba1c:
    // 0x20ba1c: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x20ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20ba20:
    // 0x20ba20: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20ba20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20ba24:
    // 0x20ba24: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_20ba28:
    if (ctx->pc == 0x20BA28u) {
        ctx->pc = 0x20BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA24u;
        // 0x20ba28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA2Cu;
        goto label_20ba2c;
    }
    ctx->pc = 0x20BA24u;
    {
        const bool branch_taken_0x20ba24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA24u;
        // 0x20ba28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba24) {
            ctx->pc = 0x20BA5Cu;
            goto label_20ba5c;
        }
    }
    ctx->pc = 0x20BA2Cu;
label_20ba2c:
    // 0x20ba2c: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x20ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_20ba30:
    // 0x20ba30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ba34:
    // 0x20ba34: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20ba34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20ba38:
    // 0x20ba38: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20ba3c:
    // 0x20ba3c: 0x40f809  jalr        $v0
label_20ba40:
    if (ctx->pc == 0x20BA40u) {
        ctx->pc = 0x20BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA3Cu;
        // 0x20ba40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA44u;
        goto label_20ba44;
    }
    ctx->pc = 0x20BA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BA44u);
        ctx->pc = 0x20BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA3Cu;
        // 0x20ba40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA3Cu, 0x20BA44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BA44u;
label_20ba44:
    // 0x20ba44: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x20ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20ba48:
    // 0x20ba48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ba4c:
    // 0x20ba4c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x20ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_20ba50:
    // 0x20ba50: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x20ba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_20ba54:
    // 0x20ba54: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x20ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_20ba58:
    // 0x20ba58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20ba5c:
    // 0x20ba5c: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x20ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20ba60:
    // 0x20ba60: 0x8c43d328  lw          $v1, -0x2CD8($v0)
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20ba64:
    // 0x20ba64: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_20ba68:
    if (ctx->pc == 0x20BA68u) {
        ctx->pc = 0x20BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA64u;
        // 0x20ba68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA6Cu;
        goto label_20ba6c;
    }
    ctx->pc = 0x20BA64u;
    {
        const bool branch_taken_0x20ba64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA64u;
        // 0x20ba68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba64) {
            ctx->pc = 0x20BAECu;
            goto label_20baec;
        }
    }
    ctx->pc = 0x20BA6Cu;
label_20ba6c:
    // 0x20ba6c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_20ba70:
    if (ctx->pc == 0x20BA70u) {
        ctx->pc = 0x20BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA6Cu;
        // 0x20ba70: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA74u;
        goto label_20ba74;
    }
    ctx->pc = 0x20BA6Cu;
    {
        const bool branch_taken_0x20ba6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA6Cu;
        // 0x20ba70: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba6c) {
            ctx->pc = 0x20BA88u;
            goto label_20ba88;
        }
    }
    ctx->pc = 0x20BA74u;
label_20ba74:
    // 0x20ba74: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ba74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ba78:
    // 0x20ba78: 0x0  nop
    ctx->pc = 0x20ba78u;
    // NOP
label_20ba7c:
    // 0x20ba7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20ba7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_20ba80:
    // 0x20ba80: 0x10000008  b           . + 4 + (0x8 << 2)
label_20ba84:
    if (ctx->pc == 0x20BA84u) {
        ctx->pc = 0x20BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA80u;
        // 0x20ba84: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA88u;
        goto label_20ba88;
    }
    ctx->pc = 0x20BA80u;
    {
        const bool branch_taken_0x20ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA80u;
        // 0x20ba84: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba80) {
            ctx->pc = 0x20BAA4u;
            goto label_20baa4;
        }
    }
    ctx->pc = 0x20BA88u;
label_20ba88:
    // 0x20ba88: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x20ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_20ba8c:
    // 0x20ba8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20ba90:
    // 0x20ba90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ba90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ba94:
    // 0x20ba94: 0x0  nop
    ctx->pc = 0x20ba94u;
    // NOP
label_20ba98:
    // 0x20ba98: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20ba98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_20ba9c:
    // 0x20ba9c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x20ba9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_20baa0:
    // 0x20baa0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x20baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20baa4:
    // 0x20baa4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20baa8:
    if (ctx->pc == 0x20BAA8u) {
        ctx->pc = 0x20BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAA4u;
        // 0x20baa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAACu;
        goto label_20baac;
    }
    ctx->pc = 0x20BAA4u;
    {
        const bool branch_taken_0x20baa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAA4u;
        // 0x20baa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baa4) {
            ctx->pc = 0x20BAC0u;
            goto label_20bac0;
        }
    }
    ctx->pc = 0x20BAACu;
label_20baac:
    // 0x20baac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20baacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20bab0:
    // 0x20bab0: 0x0  nop
    ctx->pc = 0x20bab0u;
    // NOP
label_20bab4:
    // 0x20bab4: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20bab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_20bab8:
    // 0x20bab8: 0x10000007  b           . + 4 + (0x7 << 2)
label_20babc:
    if (ctx->pc == 0x20BABCu) {
        ctx->pc = 0x20BAC0u;
        goto label_20bac0;
    }
    ctx->pc = 0x20BAB8u;
    {
        const bool branch_taken_0x20bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bab8) {
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BAC0u;
label_20bac0:
    // 0x20bac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20bac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20bac4:
    // 0x20bac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20bac8:
    // 0x20bac8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20bac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20bacc:
    // 0x20bacc: 0x0  nop
    ctx->pc = 0x20baccu;
    // NOP
label_20bad0:
    // 0x20bad0: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20bad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_20bad4:
    // 0x20bad4: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x20bad4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_20bad8:
    // 0x20bad8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20bad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20badc:
    // 0x20badc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_20bae0:
    // 0x20bae0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x20bae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_20bae4:
    // 0x20bae4: 0x10000020  b           . + 4 + (0x20 << 2)
label_20bae8:
    if (ctx->pc == 0x20BAE8u) {
        ctx->pc = 0x20BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAE4u;
        // 0x20bae8: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAECu;
        goto label_20baec;
    }
    ctx->pc = 0x20BAE4u;
    {
        const bool branch_taken_0x20bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAE4u;
        // 0x20bae8: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bae4) {
            ctx->pc = 0x20BB68u;
            goto label_20bb68;
        }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_20baf0:
    if (ctx->pc == 0x20BAF0u) {
        ctx->pc = 0x20BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAECu;
        // 0x20baf0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAF4u;
        goto label_20baf4;
    }
    ctx->pc = 0x20BAECu;
    {
        const bool branch_taken_0x20baec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAECu;
        // 0x20baf0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baec) {
            ctx->pc = 0x20BB08u;
            goto label_20bb08;
        }
    }
    ctx->pc = 0x20BAF4u;
label_20baf4:
    // 0x20baf4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20baf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20baf8:
    // 0x20baf8: 0x0  nop
    ctx->pc = 0x20baf8u;
    // NOP
label_20bafc:
    // 0x20bafc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20bafcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_20bb00:
    // 0x20bb00: 0x10000008  b           . + 4 + (0x8 << 2)
label_20bb04:
    if (ctx->pc == 0x20BB04u) {
        ctx->pc = 0x20BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB00u;
        // 0x20bb04: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB08u;
        goto label_20bb08;
    }
    ctx->pc = 0x20BB00u;
    {
        const bool branch_taken_0x20bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB00u;
        // 0x20bb04: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb00) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BB08u;
label_20bb08:
    // 0x20bb08: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x20bb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_20bb0c:
    // 0x20bb0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20bb10:
    // 0x20bb10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20bb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20bb14:
    // 0x20bb14: 0x0  nop
    ctx->pc = 0x20bb14u;
    // NOP
label_20bb18:
    // 0x20bb18: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x20bb18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_20bb1c:
    // 0x20bb1c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x20bb1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_20bb20:
    // 0x20bb20: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x20bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20bb24:
    // 0x20bb24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20bb28:
    if (ctx->pc == 0x20BB28u) {
        ctx->pc = 0x20BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB24u;
        // 0x20bb28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB2Cu;
        goto label_20bb2c;
    }
    ctx->pc = 0x20BB24u;
    {
        const bool branch_taken_0x20bb24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB24u;
        // 0x20bb28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb24) {
            ctx->pc = 0x20BB40u;
            goto label_20bb40;
        }
    }
    ctx->pc = 0x20BB2Cu;
label_20bb2c:
    // 0x20bb2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20bb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20bb30:
    // 0x20bb30: 0x0  nop
    ctx->pc = 0x20bb30u;
    // NOP
label_20bb34:
    // 0x20bb34: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20bb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_20bb38:
    // 0x20bb38: 0x10000007  b           . + 4 + (0x7 << 2)
label_20bb3c:
    if (ctx->pc == 0x20BB3Cu) {
        ctx->pc = 0x20BB40u;
        goto label_20bb40;
    }
    ctx->pc = 0x20BB38u;
    {
        const bool branch_taken_0x20bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb38) {
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BB40u;
label_20bb40:
    // 0x20bb40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20bb44:
    // 0x20bb44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20bb48:
    // 0x20bb48: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20bb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20bb4c:
    // 0x20bb4c: 0x0  nop
    ctx->pc = 0x20bb4cu;
    // NOP
label_20bb50:
    // 0x20bb50: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x20bb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_20bb54:
    // 0x20bb54: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x20bb54u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_20bb58:
    // 0x20bb58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20bb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20bb5c:
    // 0x20bb5c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x20bb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_20bb60:
    // 0x20bb60: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x20bb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_20bb64:
    // 0x20bb64: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x20bb64u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
label_20bb68:
    // 0x20bb68: 0xc0cdd5a  jal         func_337568
label_20bb6c:
    if (ctx->pc == 0x20BB6Cu) {
        ctx->pc = 0x20BB70u;
        goto label_20bb70;
    }
    ctx->pc = 0x20BB68u;
    SET_GPR_U32(ctx, 31, 0x20BB70u);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x20BB68u, 0x20BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB70u;
label_20bb70:
    // 0x20bb70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20bb70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_20bb74:
    // 0x20bb74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x20bb74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_20bb78:
    // 0x20bb78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20bb7c:
    // 0x20bb7c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_20bb80:
    // 0x20bb80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20bb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20bb84:
    // 0x20bb84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20bb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20bb88:
    // 0x20bb88: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x20bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_20bb8c:
    // 0x20bb8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20bb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_20bb90:
    // 0x20bb90: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_20bb94:
    // 0x20bb94: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_20bb98:
    // 0x20bb98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20bb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20bb9c:
    // 0x20bb9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20bba0:
    // 0x20bba0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x20bba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_20bba4:
    // 0x20bba4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x20bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_20bba8:
    // 0x20bba8: 0x60f809  jalr        $v1
label_20bbac:
    if (ctx->pc == 0x20BBACu) {
        ctx->pc = 0x20BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA8u;
        // 0x20bbac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBB0u;
        goto label_20bbb0;
    }
    ctx->pc = 0x20BBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BBB0u);
        ctx->pc = 0x20BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA8u;
        // 0x20bbac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBA8u, 0x20BBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BBB0u;
label_20bbb0:
    // 0x20bbb0: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_20bbb4:
    // 0x20bbb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20bbb8:
    // 0x20bbb8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20bbbc:
    // 0x20bbbc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20bbc0:
    // 0x20bbc0: 0x60f809  jalr        $v1
label_20bbc4:
    if (ctx->pc == 0x20BBC4u) {
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBC8u;
        goto label_20bbc8;
    }
    ctx->pc = 0x20BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BBC8u);
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBC0u, 0x20BBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BBC8u;
label_20bbc8:
    // 0x20bbc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20bbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bbcc:
    // 0x20bbcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20bbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bbd0:
    // 0x20bbd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20bbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20bbd4:
    // 0x20bbd4: 0x3e00008  jr          $ra
label_20bbd8:
    if (ctx->pc == 0x20BBD8u) {
        ctx->pc = 0x20BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD4u;
        // 0x20bbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBDCu;
        goto label_20bbdc;
    }
    ctx->pc = 0x20BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD4u;
        // 0x20bbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BBDCu;
label_20bbdc:
    // 0x20bbdc: 0x0  nop
    ctx->pc = 0x20bbdcu;
    // NOP
    ctx->pc = 0x20bbe0u;
}
