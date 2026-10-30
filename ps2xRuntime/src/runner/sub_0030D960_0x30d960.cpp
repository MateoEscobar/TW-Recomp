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

// Function: sub_0030D960
// Address: 0x30d960 - 0x30daf8
void sub_0030D960_0x30d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D960_0x30d960");
#endif

    switch (ctx->pc) {
        case 0x30d960u: goto label_30d960;
        case 0x30d964u: goto label_30d964;
        case 0x30d968u: goto label_30d968;
        case 0x30d96cu: goto label_30d96c;
        case 0x30d970u: goto label_30d970;
        case 0x30d974u: goto label_30d974;
        case 0x30d978u: goto label_30d978;
        case 0x30d97cu: goto label_30d97c;
        case 0x30d980u: goto label_30d980;
        case 0x30d984u: goto label_30d984;
        case 0x30d988u: goto label_30d988;
        case 0x30d98cu: goto label_30d98c;
        case 0x30d990u: goto label_30d990;
        case 0x30d994u: goto label_30d994;
        case 0x30d998u: goto label_30d998;
        case 0x30d99cu: goto label_30d99c;
        case 0x30d9a0u: goto label_30d9a0;
        case 0x30d9a4u: goto label_30d9a4;
        case 0x30d9a8u: goto label_30d9a8;
        case 0x30d9acu: goto label_30d9ac;
        case 0x30d9b0u: goto label_30d9b0;
        case 0x30d9b4u: goto label_30d9b4;
        case 0x30d9b8u: goto label_30d9b8;
        case 0x30d9bcu: goto label_30d9bc;
        case 0x30d9c0u: goto label_30d9c0;
        case 0x30d9c4u: goto label_30d9c4;
        case 0x30d9c8u: goto label_30d9c8;
        case 0x30d9ccu: goto label_30d9cc;
        case 0x30d9d0u: goto label_30d9d0;
        case 0x30d9d4u: goto label_30d9d4;
        case 0x30d9d8u: goto label_30d9d8;
        case 0x30d9dcu: goto label_30d9dc;
        case 0x30d9e0u: goto label_30d9e0;
        case 0x30d9e4u: goto label_30d9e4;
        case 0x30d9e8u: goto label_30d9e8;
        case 0x30d9ecu: goto label_30d9ec;
        case 0x30d9f0u: goto label_30d9f0;
        case 0x30d9f4u: goto label_30d9f4;
        case 0x30d9f8u: goto label_30d9f8;
        case 0x30d9fcu: goto label_30d9fc;
        case 0x30da00u: goto label_30da00;
        case 0x30da04u: goto label_30da04;
        case 0x30da08u: goto label_30da08;
        case 0x30da0cu: goto label_30da0c;
        case 0x30da10u: goto label_30da10;
        case 0x30da14u: goto label_30da14;
        case 0x30da18u: goto label_30da18;
        case 0x30da1cu: goto label_30da1c;
        case 0x30da20u: goto label_30da20;
        case 0x30da24u: goto label_30da24;
        case 0x30da28u: goto label_30da28;
        case 0x30da2cu: goto label_30da2c;
        case 0x30da30u: goto label_30da30;
        case 0x30da34u: goto label_30da34;
        case 0x30da38u: goto label_30da38;
        case 0x30da3cu: goto label_30da3c;
        case 0x30da40u: goto label_30da40;
        case 0x30da44u: goto label_30da44;
        case 0x30da48u: goto label_30da48;
        case 0x30da4cu: goto label_30da4c;
        case 0x30da50u: goto label_30da50;
        case 0x30da54u: goto label_30da54;
        case 0x30da58u: goto label_30da58;
        case 0x30da5cu: goto label_30da5c;
        case 0x30da60u: goto label_30da60;
        case 0x30da64u: goto label_30da64;
        case 0x30da68u: goto label_30da68;
        case 0x30da6cu: goto label_30da6c;
        case 0x30da70u: goto label_30da70;
        case 0x30da74u: goto label_30da74;
        case 0x30da78u: goto label_30da78;
        case 0x30da7cu: goto label_30da7c;
        case 0x30da80u: goto label_30da80;
        case 0x30da84u: goto label_30da84;
        case 0x30da88u: goto label_30da88;
        case 0x30da8cu: goto label_30da8c;
        case 0x30da90u: goto label_30da90;
        case 0x30da94u: goto label_30da94;
        case 0x30da98u: goto label_30da98;
        case 0x30da9cu: goto label_30da9c;
        case 0x30daa0u: goto label_30daa0;
        case 0x30daa4u: goto label_30daa4;
        case 0x30daa8u: goto label_30daa8;
        case 0x30daacu: goto label_30daac;
        case 0x30dab0u: goto label_30dab0;
        case 0x30dab4u: goto label_30dab4;
        case 0x30dab8u: goto label_30dab8;
        case 0x30dabcu: goto label_30dabc;
        case 0x30dac0u: goto label_30dac0;
        case 0x30dac4u: goto label_30dac4;
        case 0x30dac8u: goto label_30dac8;
        case 0x30daccu: goto label_30dacc;
        case 0x30dad0u: goto label_30dad0;
        case 0x30dad4u: goto label_30dad4;
        case 0x30dad8u: goto label_30dad8;
        case 0x30dadcu: goto label_30dadc;
        case 0x30dae0u: goto label_30dae0;
        case 0x30dae4u: goto label_30dae4;
        case 0x30dae8u: goto label_30dae8;
        case 0x30daecu: goto label_30daec;
        case 0x30daf0u: goto label_30daf0;
        case 0x30daf4u: goto label_30daf4;
        default: break;
    }

    ctx->pc = 0x30d960u;

label_30d960:
    // 0x30d960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30d964:
    // 0x30d964: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30d968:
    // 0x30d968: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30d96c:
    // 0x30d96c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30d970:
    // 0x30d970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30d970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d974:
    // 0x30d974: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30d978:
    // 0x30d978: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30d97c:
    // 0x30d97c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_30d980:
    // 0x30d980: 0xc087502  jal         func_21D408
label_30d984:
    if (ctx->pc == 0x30D984u) {
        ctx->pc = 0x30D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D980u;
        // 0x30d984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D988u;
        goto label_30d988;
    }
    ctx->pc = 0x30D980u;
    SET_GPR_U32(ctx, 31, 0x30D988u);
    ctx->pc = 0x30D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D980u;
    // 0x30d984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30D980u, 0x30D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D988u;
label_30d988:
    // 0x30d988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d98c:
    // 0x30d98c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30d98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d990:
    // 0x30d990: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30d990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30d994:
    // 0x30d994: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30d998:
    // 0x30d998: 0x40f809  jalr        $v0
label_30d99c:
    if (ctx->pc == 0x30D99Cu) {
        ctx->pc = 0x30D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D998u;
        // 0x30d99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D9A0u;
        goto label_30d9a0;
    }
    ctx->pc = 0x30D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D9A0u);
        ctx->pc = 0x30D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D998u;
        // 0x30d99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D998u, 0x30D9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D9A0u;
label_30d9a0:
    // 0x30d9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30d9a4:
    // 0x30d9a4: 0xc0a3630  jal         func_28D8C0
label_30d9a8:
    if (ctx->pc == 0x30D9A8u) {
        ctx->pc = 0x30D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9A4u;
        // 0x30d9a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D9ACu;
        goto label_30d9ac;
    }
    ctx->pc = 0x30D9A4u;
    SET_GPR_U32(ctx, 31, 0x30D9ACu);
    ctx->pc = 0x30D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9A4u;
    // 0x30d9a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30D9A4u, 0x30D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9ACu;
label_30d9ac:
    // 0x30d9ac: 0xc0a3628  jal         func_28D8A0
label_30d9b0:
    if (ctx->pc == 0x30D9B0u) {
        ctx->pc = 0x30D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9ACu;
        // 0x30d9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D9B4u;
        goto label_30d9b4;
    }
    ctx->pc = 0x30D9ACu;
    SET_GPR_U32(ctx, 31, 0x30D9B4u);
    ctx->pc = 0x30D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9ACu;
    // 0x30d9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30D9ACu, 0x30D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9B4u;
label_30d9b4:
    // 0x30d9b4: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30d9b8:
    // 0x30d9b8: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x30d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_30d9bc:
    // 0x30d9bc: 0x54620043  bnel        $v1, $v0, . + 4 + (0x43 << 2)
label_30d9c0:
    if (ctx->pc == 0x30D9C0u) {
        ctx->pc = 0x30D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9BCu;
        // 0x30d9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D9C4u;
        goto label_30d9c4;
    }
    ctx->pc = 0x30D9BCu;
    {
        const bool branch_taken_0x30d9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d9bc) {
            ctx->pc = 0x30D9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D9BCu;
            // 0x30d9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DACCu;
            goto label_30dacc;
        }
    }
    ctx->pc = 0x30D9C4u;
label_30d9c4:
    // 0x30d9c4: 0x2402008a  addiu       $v0, $zero, 0x8A
    ctx->pc = 0x30d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_30d9c8:
    // 0x30d9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d9cc:
    // 0x30d9cc: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x30d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_30d9d0:
    // 0x30d9d0: 0x92730024  lbu         $s3, 0x24($s3)
    ctx->pc = 0x30d9d0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_30d9d4:
    // 0x30d9d4: 0x16630026  bne         $s3, $v1, . + 4 + (0x26 << 2)
label_30d9d8:
    if (ctx->pc == 0x30D9D8u) {
        ctx->pc = 0x30D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9D4u;
        // 0x30d9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D9DCu;
        goto label_30d9dc;
    }
    ctx->pc = 0x30D9D4u;
    {
        const bool branch_taken_0x30d9d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9D4u;
        // 0x30d9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9d4) {
            ctx->pc = 0x30DA70u;
            goto label_30da70;
        }
    }
    ctx->pc = 0x30D9DCu;
label_30d9dc:
    // 0x30d9dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x30d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_30d9e0:
    // 0x30d9e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30d9e4:
    // 0x30d9e4: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x30d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_30d9e8:
    // 0x30d9e8: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x30d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_30d9ec:
    // 0x30d9ec: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x30d9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30d9f0:
    // 0x30d9f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x30d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_30d9f4:
    // 0x30d9f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x30d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_30d9f8:
    // 0x30d9f8: 0xc0e5de0  jal         func_397780
label_30d9fc:
    if (ctx->pc == 0x30D9FCu) {
        ctx->pc = 0x30D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9F8u;
        // 0x30d9fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA00u;
        goto label_30da00;
    }
    ctx->pc = 0x30D9F8u;
    SET_GPR_U32(ctx, 31, 0x30DA00u);
    ctx->pc = 0x30D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9F8u;
    // 0x30d9fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397780u, 0x30D9F8u, 0x30DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA00u;
label_30da00:
    // 0x30da00: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_30da04:
    // 0x30da04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30da08:
    // 0x30da08: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x30da08u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_30da0c:
    // 0x30da0c: 0xc0e5de0  jal         func_397780
label_30da10:
    if (ctx->pc == 0x30DA10u) {
        ctx->pc = 0x30DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA0Cu;
        // 0x30da10: 0x2484ceb0  addiu       $a0, $a0, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA14u;
        goto label_30da14;
    }
    ctx->pc = 0x30DA0Cu;
    SET_GPR_U32(ctx, 31, 0x30DA14u);
    ctx->pc = 0x30DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA0Cu;
    // 0x30da10: 0x2484ceb0  addiu       $a0, $a0, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397780u, 0x30DA0Cu, 0x30DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA14u;
label_30da14:
    // 0x30da14: 0xa7b00022  sh          $s0, 0x22($sp)
    ctx->pc = 0x30da14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 16));
label_30da18:
    // 0x30da18: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x30da18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
label_30da1c:
    // 0x30da1c: 0xa7b1002e  sh          $s1, 0x2E($sp)
    ctx->pc = 0x30da1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 17));
label_30da20:
    // 0x30da20: 0xa7b10024  sh          $s1, 0x24($sp)
    ctx->pc = 0x30da20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 17));
label_30da24:
    // 0x30da24: 0xa7b10026  sh          $s1, 0x26($sp)
    ctx->pc = 0x30da24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 17));
label_30da28:
    // 0x30da28: 0xa7b10028  sh          $s1, 0x28($sp)
    ctx->pc = 0x30da28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 17));
label_30da2c:
    // 0x30da2c: 0xa7b1002a  sh          $s1, 0x2A($sp)
    ctx->pc = 0x30da2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 17));
label_30da30:
    // 0x30da30: 0xc0a4e54  jal         func_293950
label_30da34:
    if (ctx->pc == 0x30DA34u) {
        ctx->pc = 0x30DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA30u;
        // 0x30da34: 0xa7b1002c  sh          $s1, 0x2C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA38u;
        goto label_30da38;
    }
    ctx->pc = 0x30DA30u;
    SET_GPR_U32(ctx, 31, 0x30DA38u);
    ctx->pc = 0x30DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA30u;
    // 0x30da34: 0xa7b1002c  sh          $s1, 0x2C($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30DA30u, 0x30DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA38u;
label_30da38:
    // 0x30da38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30da38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30da3c:
    // 0x30da3c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_30da40:
    if (ctx->pc == 0x30DA40u) {
        ctx->pc = 0x30DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA3Cu;
        // 0x30da40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA44u;
        goto label_30da44;
    }
    ctx->pc = 0x30DA3Cu;
    {
        const bool branch_taken_0x30da3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA3Cu;
        // 0x30da40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da3c) {
            ctx->pc = 0x30DAB8u;
            goto label_30dab8;
        }
    }
    ctx->pc = 0x30DA44u;
label_30da44:
    // 0x30da44: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x30da44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_30da48:
    // 0x30da48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30da48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30da4c:
    // 0x30da4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30da50:
    // 0x30da50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30da54:
    // 0x30da54: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x30da54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30da58:
    // 0x30da58: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x30da58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_30da5c:
    // 0x30da5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30da5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30da60:
    // 0x30da60: 0xc0bb7fe  jal         func_2EDFF8
label_30da64:
    if (ctx->pc == 0x30DA64u) {
        ctx->pc = 0x30DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA60u;
        // 0x30da64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA68u;
        goto label_30da68;
    }
    ctx->pc = 0x30DA60u;
    SET_GPR_U32(ctx, 31, 0x30DA68u);
    ctx->pc = 0x30DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA60u;
    // 0x30da64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDFF8u, 0x30DA60u, 0x30DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA68u;
label_30da68:
    // 0x30da68: 0x10000014  b           . + 4 + (0x14 << 2)
label_30da6c:
    if (ctx->pc == 0x30DA6Cu) {
        ctx->pc = 0x30DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA68u;
        // 0x30da6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA70u;
        goto label_30da70;
    }
    ctx->pc = 0x30DA68u;
    {
        const bool branch_taken_0x30da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA68u;
        // 0x30da6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da68) {
            ctx->pc = 0x30DABCu;
            goto label_30dabc;
        }
    }
    ctx->pc = 0x30DA70u;
label_30da70:
    // 0x30da70: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_30da74:
    if (ctx->pc == 0x30DA74u) {
        ctx->pc = 0x30DA78u;
        goto label_30da78;
    }
    ctx->pc = 0x30DA70u;
    {
        const bool branch_taken_0x30da70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x30da70) {
            ctx->pc = 0x30DA9Cu;
            goto label_30da9c;
        }
    }
    ctx->pc = 0x30DA78u;
label_30da78:
    // 0x30da78: 0xc0a4e54  jal         func_293950
label_30da7c:
    if (ctx->pc == 0x30DA7Cu) {
        ctx->pc = 0x30DA80u;
        goto label_30da80;
    }
    ctx->pc = 0x30DA78u;
    SET_GPR_U32(ctx, 31, 0x30DA80u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30DA78u, 0x30DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA80u;
label_30da80:
    // 0x30da80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30da80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30da84:
    // 0x30da84: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_30da88:
    if (ctx->pc == 0x30DA88u) {
        ctx->pc = 0x30DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA84u;
        // 0x30da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA8Cu;
        goto label_30da8c;
    }
    ctx->pc = 0x30DA84u;
    {
        const bool branch_taken_0x30da84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA84u;
        // 0x30da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da84) {
            ctx->pc = 0x30DAB8u;
            goto label_30dab8;
        }
    }
    ctx->pc = 0x30DA8Cu;
label_30da8c:
    // 0x30da8c: 0xc0bdef4  jal         func_2F7BD0
label_30da90:
    if (ctx->pc == 0x30DA90u) {
        ctx->pc = 0x30DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA8Cu;
        // 0x30da90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA94u;
        goto label_30da94;
    }
    ctx->pc = 0x30DA8Cu;
    SET_GPR_U32(ctx, 31, 0x30DA94u);
    ctx->pc = 0x30DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA8Cu;
    // 0x30da90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7BD0u, 0x30DA8Cu, 0x30DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA94u;
label_30da94:
    // 0x30da94: 0x10000009  b           . + 4 + (0x9 << 2)
label_30da98:
    if (ctx->pc == 0x30DA98u) {
        ctx->pc = 0x30DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA94u;
        // 0x30da98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DA9Cu;
        goto label_30da9c;
    }
    ctx->pc = 0x30DA94u;
    {
        const bool branch_taken_0x30da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA94u;
        // 0x30da98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da94) {
            ctx->pc = 0x30DABCu;
            goto label_30dabc;
        }
    }
    ctx->pc = 0x30DA9Cu;
label_30da9c:
    // 0x30da9c: 0xc0a4e54  jal         func_293950
label_30daa0:
    if (ctx->pc == 0x30DAA0u) {
        ctx->pc = 0x30DAA4u;
        goto label_30daa4;
    }
    ctx->pc = 0x30DA9Cu;
    SET_GPR_U32(ctx, 31, 0x30DAA4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30DA9Cu, 0x30DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAA4u;
label_30daa4:
    // 0x30daa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30daa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30daa8:
    // 0x30daa8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_30daac:
    if (ctx->pc == 0x30DAACu) {
        ctx->pc = 0x30DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAA8u;
        // 0x30daac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DAB0u;
        goto label_30dab0;
    }
    ctx->pc = 0x30DAA8u;
    {
        const bool branch_taken_0x30daa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAA8u;
        // 0x30daac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30daa8) {
            ctx->pc = 0x30DAB8u;
            goto label_30dab8;
        }
    }
    ctx->pc = 0x30DAB0u;
label_30dab0:
    // 0x30dab0: 0xc0ba734  jal         func_2E9CD0
label_30dab4:
    if (ctx->pc == 0x30DAB4u) {
        ctx->pc = 0x30DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAB0u;
        // 0x30dab4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DAB8u;
        goto label_30dab8;
    }
    ctx->pc = 0x30DAB0u;
    SET_GPR_U32(ctx, 31, 0x30DAB8u);
    ctx->pc = 0x30DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DAB0u;
    // 0x30dab4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CD0u, 0x30DAB0u, 0x30DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAB8u;
label_30dab8:
    // 0x30dab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30dabc:
    // 0x30dabc: 0xc0a35d6  jal         func_28D758
label_30dac0:
    if (ctx->pc == 0x30DAC0u) {
        ctx->pc = 0x30DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DABCu;
        // 0x30dac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DAC4u;
        goto label_30dac4;
    }
    ctx->pc = 0x30DABCu;
    SET_GPR_U32(ctx, 31, 0x30DAC4u);
    ctx->pc = 0x30DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DABCu;
    // 0x30dac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30DABCu, 0x30DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAC4u;
label_30dac4:
    // 0x30dac4: 0x10000005  b           . + 4 + (0x5 << 2)
label_30dac8:
    if (ctx->pc == 0x30DAC8u) {
        ctx->pc = 0x30DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAC4u;
        // 0x30dac8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DACCu;
        goto label_30dacc;
    }
    ctx->pc = 0x30DAC4u;
    {
        const bool branch_taken_0x30dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAC4u;
        // 0x30dac8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dac4) {
            ctx->pc = 0x30DADCu;
            goto label_30dadc;
        }
    }
    ctx->pc = 0x30DACCu;
label_30dacc:
    // 0x30dacc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30dad0:
    // 0x30dad0: 0xc0ab742  jal         func_2ADD08
label_30dad4:
    if (ctx->pc == 0x30DAD4u) {
        ctx->pc = 0x30DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAD0u;
        // 0x30dad4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DAD8u;
        goto label_30dad8;
    }
    ctx->pc = 0x30DAD0u;
    SET_GPR_U32(ctx, 31, 0x30DAD8u);
    ctx->pc = 0x30DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DAD0u;
    // 0x30dad4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x30DAD0u, 0x30DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAD8u;
label_30dad8:
    // 0x30dad8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30dad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30dadc:
    // 0x30dadc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30dadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30dae0:
    // 0x30dae0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30dae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30dae4:
    // 0x30dae4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30dae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30dae8:
    // 0x30dae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30daec:
    // 0x30daec: 0x3e00008  jr          $ra
label_30daf0:
    if (ctx->pc == 0x30DAF0u) {
        ctx->pc = 0x30DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAECu;
        // 0x30daf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DAF4u;
        goto label_30daf4;
    }
    ctx->pc = 0x30DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAECu;
        // 0x30daf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DAF4u;
label_30daf4:
    // 0x30daf4: 0x0  nop
    ctx->pc = 0x30daf4u;
    // NOP
    ctx->pc = 0x30daf8u;
}
