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

// Function: sub_0026B848
// Address: 0x26b848 - 0x26bad8
void sub_0026B848_0x26b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B848_0x26b848");
#endif

    switch (ctx->pc) {
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        default: break;
    }

    ctx->pc = 0x26b848u;

label_26b848:
    // 0x26b848: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26b84c:
    // 0x26b84c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x26b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_26b850:
    // 0x26b850: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x26b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_26b854:
    // 0x26b854: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x26b854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_26b858:
    // 0x26b858: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x26b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_26b85c:
    // 0x26b85c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26b860:
    // 0x26b860: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x26b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_26b864:
    // 0x26b864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26b868:
    // 0x26b868: 0xc08a162  jal         func_228588
label_26b86c:
    if (ctx->pc == 0x26B86Cu) {
        ctx->pc = 0x26B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B868u;
        // 0x26b86c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B870u;
        goto label_26b870;
    }
    ctx->pc = 0x26B868u;
    SET_GPR_U32(ctx, 31, 0x26B870u);
    ctx->pc = 0x26B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B868u;
    // 0x26b86c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228588u, 0x26B868u, 0x26B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B870u;
label_26b870:
    // 0x26b870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b874:
    if (ctx->pc == 0x26B874u) {
        ctx->pc = 0x26B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B870u;
        // 0x26b874: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B878u;
        goto label_26b878;
    }
    ctx->pc = 0x26B870u;
    {
        const bool branch_taken_0x26b870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B870u;
        // 0x26b874: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b870) {
            ctx->pc = 0x26B880u;
            goto label_26b880;
        }
    }
    ctx->pc = 0x26B878u;
label_26b878:
    // 0x26b878: 0x1000008d  b           . + 4 + (0x8D << 2)
label_26b87c:
    if (ctx->pc == 0x26B87Cu) {
        ctx->pc = 0x26B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B878u;
        // 0x26b87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B880u;
        goto label_26b880;
    }
    ctx->pc = 0x26B878u;
    {
        const bool branch_taken_0x26b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B878u;
        // 0x26b87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b878) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26B880u;
label_26b880:
    // 0x26b880: 0xc088ac6  jal         func_222B18
label_26b884:
    if (ctx->pc == 0x26B884u) {
        ctx->pc = 0x26B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B880u;
        // 0x26b884: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B888u;
        goto label_26b888;
    }
    ctx->pc = 0x26B880u;
    SET_GPR_U32(ctx, 31, 0x26B888u);
    ctx->pc = 0x26B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B880u;
    // 0x26b884: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x26B880u, 0x26B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B888u;
label_26b888:
    // 0x26b888: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26b888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b88c:
    // 0x26b88c: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x26b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_26b890:
    // 0x26b890: 0x2454001c  addiu       $s4, $v0, 0x1C
    ctx->pc = 0x26b890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_26b894:
    // 0x26b894: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26b894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26b898:
    // 0x26b898: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x26b898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_26b89c:
    // 0x26b89c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x26b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26b8a0:
    // 0x26b8a0: 0x40f809  jalr        $v0
label_26b8a4:
    if (ctx->pc == 0x26B8A4u) {
        ctx->pc = 0x26B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8A0u;
        // 0x26b8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8A8u;
        goto label_26b8a8;
    }
    ctx->pc = 0x26B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B8A8u);
        ctx->pc = 0x26B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8A0u;
        // 0x26b8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B8A0u, 0x26B8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B8A8u;
label_26b8a8:
    // 0x26b8a8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x26b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26b8ac:
    // 0x26b8ac: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x26b8acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26b8b0:
    // 0x26b8b0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_26b8b4:
    if (ctx->pc == 0x26B8B4u) {
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8B0u;
        // 0x26b8b4: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8B8u;
        goto label_26b8b8;
    }
    ctx->pc = 0x26B8B0u;
    {
        const bool branch_taken_0x26b8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b8b0) {
            ctx->pc = 0x26B8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B8B0u;
            // 0x26b8b4: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B8C8u;
            goto label_26b8c8;
        }
    }
    ctx->pc = 0x26B8B8u;
label_26b8b8:
    // 0x26b8b8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_26b8bc:
    // 0x26b8bc: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_26b8c0:
    if (ctx->pc == 0x26B8C0u) {
        ctx->pc = 0x26B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8BCu;
        // 0x26b8c0: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8C4u;
        goto label_26b8c4;
    }
    ctx->pc = 0x26B8BCu;
    {
        const bool branch_taken_0x26b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b8bc) {
            ctx->pc = 0x26B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B8BCu;
            // 0x26b8c0: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B9ECu;
            goto label_26b9ec;
        }
    }
    ctx->pc = 0x26B8C4u;
label_26b8c4:
    // 0x26b8c4: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x26b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26b8c8:
    // 0x26b8c8: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_26b8cc:
    if (ctx->pc == 0x26B8CCu) {
        ctx->pc = 0x26B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C8u;
        // 0x26b8cc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8D0u;
        goto label_26b8d0;
    }
    ctx->pc = 0x26B8C8u;
    {
        const bool branch_taken_0x26b8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C8u;
        // 0x26b8cc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8c8) {
            ctx->pc = 0x26B9E8u;
            goto label_26b9e8;
        }
    }
    ctx->pc = 0x26B8D0u;
label_26b8d0:
    // 0x26b8d0: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x26b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_26b8d4:
    // 0x26b8d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b8d8:
    // 0x26b8d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x26b8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_26b8dc:
    // 0x26b8dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x26b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_26b8e0:
    // 0x26b8e0: 0x40f809  jalr        $v0
label_26b8e4:
    if (ctx->pc == 0x26B8E4u) {
        ctx->pc = 0x26B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8E0u;
        // 0x26b8e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8E8u;
        goto label_26b8e8;
    }
    ctx->pc = 0x26B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B8E8u);
        ctx->pc = 0x26B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8E0u;
        // 0x26b8e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x26b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_26b8ec:
    // 0x26b8ec: 0x8e930020  lw          $s3, 0x20($s4)
    ctx->pc = 0x26b8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_26b8f0:
    // 0x26b8f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b8f4:
    // 0x26b8f4: 0x3a650002  xori        $a1, $s3, 0x2
    ctx->pc = 0x26b8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
label_26b8f8:
    // 0x26b8f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x26b8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_26b8fc:
    // 0x26b8fc: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x26b8fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26b900:
    // 0x26b900: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x26b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26b904:
    // 0x26b904: 0x40f809  jalr        $v0
label_26b908:
    if (ctx->pc == 0x26B908u) {
        ctx->pc = 0x26B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B904u;
        // 0x26b908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B90Cu;
        goto label_26b90c;
    }
    ctx->pc = 0x26B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B90Cu);
        ctx->pc = 0x26B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B904u;
        // 0x26b908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B904u, 0x26B90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B90Cu;
label_26b90c:
    // 0x26b90c: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x26b90cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_26b910:
    // 0x26b910: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x26b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_26b914:
    // 0x26b914: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x26b914u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b918:
    // 0x26b918: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26b918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26b91c:
    // 0x26b91c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x26b91cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_26b920:
    // 0x26b920: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26b924:
    // 0x26b924: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_26b928:
    // 0x26b928: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x26b928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_26b92c:
    // 0x26b92c: 0x40f809  jalr        $v0
label_26b930:
    if (ctx->pc == 0x26B930u) {
        ctx->pc = 0x26B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B92Cu;
        // 0x26b930: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B934u;
        goto label_26b934;
    }
    ctx->pc = 0x26B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B934u);
        ctx->pc = 0x26B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B92Cu;
        // 0x26b930: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B92Cu, 0x26B934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B934u;
label_26b934:
    // 0x26b934: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26b934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26b938:
    // 0x26b938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26b938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26b93c:
    // 0x26b93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b940:
    // 0x26b940: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_26b944:
    // 0x26b944: 0x40f809  jalr        $v0
label_26b948:
    if (ctx->pc == 0x26B948u) {
        ctx->pc = 0x26B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B944u;
        // 0x26b948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B94Cu;
        goto label_26b94c;
    }
    ctx->pc = 0x26B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B94Cu);
        ctx->pc = 0x26B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B944u;
        // 0x26b948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B944u, 0x26B94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B94Cu;
label_26b94c:
    // 0x26b94c: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_26b950:
    // 0x26b950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26b954:
    // 0x26b954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b958:
    // 0x26b958: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_26b95c:
    // 0x26b95c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x26b95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_26b960:
    // 0x26b960: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x26b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_26b964:
    // 0x26b964: 0x60f809  jalr        $v1
label_26b968:
    if (ctx->pc == 0x26B968u) {
        ctx->pc = 0x26B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B964u;
        // 0x26b968: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B96Cu;
        goto label_26b96c;
    }
    ctx->pc = 0x26B964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26B96Cu);
        ctx->pc = 0x26B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B964u;
        // 0x26b968: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B964u, 0x26B96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B96Cu;
label_26b96c:
    // 0x26b96c: 0x8e452b04  lw          $a1, 0x2B04($s2)
    ctx->pc = 0x26b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_26b970:
    // 0x26b970: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26b974:
    // 0x26b974: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x26b974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_26b978:
    // 0x26b978: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x26b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_26b97c:
    // 0x26b97c: 0x60f809  jalr        $v1
label_26b980:
    if (ctx->pc == 0x26B980u) {
        ctx->pc = 0x26B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B97Cu;
        // 0x26b980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B984u;
        goto label_26b984;
    }
    ctx->pc = 0x26B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26B984u);
        ctx->pc = 0x26B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B97Cu;
        // 0x26b980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B97Cu, 0x26B984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B984u;
label_26b984:
    // 0x26b984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b988:
    // 0x26b988: 0xc10b0a0  jal         func_42C280
label_26b98c:
    if (ctx->pc == 0x26B98Cu) {
        ctx->pc = 0x26B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B988u;
        // 0x26b98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B990u;
        goto label_26b990;
    }
    ctx->pc = 0x26B988u;
    SET_GPR_U32(ctx, 31, 0x26B990u);
    ctx->pc = 0x26B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B988u;
    // 0x26b98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x26B988u, 0x26B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B990u;
label_26b990:
    // 0x26b990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b994:
    // 0x26b994: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26b998:
    // 0x26b998: 0x12640011  beq         $s3, $a0, . + 4 + (0x11 << 2)
label_26b99c:
    if (ctx->pc == 0x26B99Cu) {
        ctx->pc = 0x26B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B998u;
        // 0x26b99c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9A0u;
        goto label_26b9a0;
    }
    ctx->pc = 0x26B998u;
    {
        const bool branch_taken_0x26b998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x26B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B998u;
        // 0x26b99c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b998) {
            ctx->pc = 0x26B9E0u;
            goto label_26b9e0;
        }
    }
    ctx->pc = 0x26B9A0u;
label_26b9a0:
    // 0x26b9a0: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x26b9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_26b9a4:
    // 0x26b9a4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x26b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_26b9a8:
    // 0x26b9a8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x26b9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26b9ac:
    // 0x26b9ac: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_26b9b0:
    // 0x26b9b0: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
label_26b9b4:
    // 0x26b9b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_26b9b8:
    if (ctx->pc == 0x26B9B8u) {
        ctx->pc = 0x26B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9B4u;
        // 0x26b9b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9BCu;
        goto label_26b9bc;
    }
    ctx->pc = 0x26B9B4u;
    {
        const bool branch_taken_0x26b9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9B4u;
        // 0x26b9b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9b4) {
            ctx->pc = 0x26B9E0u;
            goto label_26b9e0;
        }
    }
    ctx->pc = 0x26B9BCu;
label_26b9bc:
    // 0x26b9bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26b9c0:
    // 0x26b9c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26b9c4:
    // 0x26b9c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b9c8:
    // 0x26b9c8: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x26b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_26b9cc:
    // 0x26b9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b9d0:
    // 0x26b9d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x26b9d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_26b9d4:
    // 0x26b9d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b9d8:
    // 0x26b9d8: 0xc0968f8  jal         func_25A3E0
label_26b9dc:
    if (ctx->pc == 0x26B9DCu) {
        ctx->pc = 0x26B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9D8u;
        // 0x26b9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9E0u;
        goto label_26b9e0;
    }
    ctx->pc = 0x26B9D8u;
    SET_GPR_U32(ctx, 31, 0x26B9E0u);
    ctx->pc = 0x26B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9D8u;
    // 0x26b9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x26B9D8u, 0x26B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9E0u;
label_26b9e0:
    // 0x26b9e0: 0x10000033  b           . + 4 + (0x33 << 2)
label_26b9e4:
    if (ctx->pc == 0x26B9E4u) {
        ctx->pc = 0x26B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9E0u;
        // 0x26b9e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9E8u;
        goto label_26b9e8;
    }
    ctx->pc = 0x26B9E0u;
    {
        const bool branch_taken_0x26b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9E0u;
        // 0x26b9e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9e0) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26B9E8u;
label_26b9e8:
    // 0x26b9e8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x26b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_26b9ec:
    // 0x26b9ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_26b9f0:
    if (ctx->pc == 0x26B9F0u) {
        ctx->pc = 0x26B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9ECu;
        // 0x26b9f0: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9F4u;
        goto label_26b9f4;
    }
    ctx->pc = 0x26B9ECu;
    {
        const bool branch_taken_0x26b9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9ECu;
        // 0x26b9f0: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9ec) {
            ctx->pc = 0x26BA40u;
            goto label_26ba40;
        }
    }
    ctx->pc = 0x26B9F4u;
label_26b9f4:
    // 0x26b9f4: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x26b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_26b9f8:
    // 0x26b9f8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x26b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_26b9fc:
    // 0x26b9fc: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x26b9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26ba00:
    // 0x26ba00: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_26ba04:
    // 0x26ba04: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
label_26ba08:
    // 0x26ba08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_26ba0c:
    if (ctx->pc == 0x26BA0Cu) {
        ctx->pc = 0x26BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA08u;
        // 0x26ba0c: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA10u;
        goto label_26ba10;
    }
    ctx->pc = 0x26BA08u;
    {
        const bool branch_taken_0x26ba08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA08u;
        // 0x26ba0c: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba08) {
            ctx->pc = 0x26BA3Cu;
            goto label_26ba3c;
        }
    }
    ctx->pc = 0x26BA10u;
label_26ba10:
    // 0x26ba10: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26ba14:
    // 0x26ba14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ba14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26ba18:
    // 0x26ba18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ba18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ba1c:
    // 0x26ba1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ba20:
    // 0x26ba20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ba24:
    // 0x26ba24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x26ba24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_26ba28:
    // 0x26ba28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26ba28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ba2c:
    // 0x26ba2c: 0xc0968f8  jal         func_25A3E0
label_26ba30:
    if (ctx->pc == 0x26BA30u) {
        ctx->pc = 0x26BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA2Cu;
        // 0x26ba30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA34u;
        goto label_26ba34;
    }
    ctx->pc = 0x26BA2Cu;
    SET_GPR_U32(ctx, 31, 0x26BA34u);
    ctx->pc = 0x26BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA2Cu;
    // 0x26ba30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x26BA2Cu, 0x26BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA34u;
label_26ba34:
    // 0x26ba34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ba38:
    // 0x26ba38: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x26ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_26ba3c:
    // 0x26ba3c: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_26ba40:
    // 0x26ba40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26ba44:
    // 0x26ba44: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x26ba44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_26ba48:
    // 0x26ba48: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26ba4c:
    // 0x26ba4c: 0x40f809  jalr        $v0
label_26ba50:
    if (ctx->pc == 0x26BA50u) {
        ctx->pc = 0x26BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA4Cu;
        // 0x26ba50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA54u;
        goto label_26ba54;
    }
    ctx->pc = 0x26BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BA54u);
        ctx->pc = 0x26BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA4Cu;
        // 0x26ba50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA4Cu, 0x26BA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BA54u;
label_26ba54:
    // 0x26ba54: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x26ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_26ba58:
    // 0x26ba58: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x26ba58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26ba5c:
    // 0x26ba5c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_26ba60:
    if (ctx->pc == 0x26BA60u) {
        ctx->pc = 0x26BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA5Cu;
        // 0x26ba60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA64u;
        goto label_26ba64;
    }
    ctx->pc = 0x26BA5Cu;
    {
        const bool branch_taken_0x26ba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA5Cu;
        // 0x26ba60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba5c) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA64u;
label_26ba64:
    // 0x26ba64: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x26ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_26ba68:
    // 0x26ba68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_26ba6c:
    if (ctx->pc == 0x26BA6Cu) {
        ctx->pc = 0x26BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA68u;
        // 0x26ba6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA70u;
        goto label_26ba70;
    }
    ctx->pc = 0x26BA68u;
    {
        const bool branch_taken_0x26ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA68u;
        // 0x26ba6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba68) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA70u;
label_26ba70:
    // 0x26ba70: 0xc0874fa  jal         func_21D3E8
label_26ba74:
    if (ctx->pc == 0x26BA74u) {
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA70u;
        // 0x26ba74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA78u;
        goto label_26ba78;
    }
    ctx->pc = 0x26BA70u;
    SET_GPR_U32(ctx, 31, 0x26BA78u);
    ctx->pc = 0x26BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA70u;
    // 0x26ba74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26BA70u, 0x26BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA78u;
label_26ba78:
    // 0x26ba78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ba7c:
    // 0x26ba7c: 0xc052002  jal         func_148008
label_26ba80:
    if (ctx->pc == 0x26BA80u) {
        ctx->pc = 0x26BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA7Cu;
        // 0x26ba80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA84u;
        goto label_26ba84;
    }
    ctx->pc = 0x26BA7Cu;
    SET_GPR_U32(ctx, 31, 0x26BA84u);
    ctx->pc = 0x26BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA7Cu;
    // 0x26ba80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148008u, 0x26BA7Cu, 0x26BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA84u;
label_26ba84:
    // 0x26ba84: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_26ba88:
    if (ctx->pc == 0x26BA88u) {
        ctx->pc = 0x26BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA84u;
        // 0x26ba88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA8Cu;
        goto label_26ba8c;
    }
    ctx->pc = 0x26BA84u;
    {
        const bool branch_taken_0x26ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba84) {
            ctx->pc = 0x26BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA84u;
            // 0x26ba88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA8Cu;
label_26ba8c:
    // 0x26ba8c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x26ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26ba90:
    // 0x26ba90: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x26ba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_26ba94:
    // 0x26ba94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_26ba98:
    if (ctx->pc == 0x26BA98u) {
        ctx->pc = 0x26BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA94u;
        // 0x26ba98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA9Cu;
        goto label_26ba9c;
    }
    ctx->pc = 0x26BA94u;
    {
        const bool branch_taken_0x26ba94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA94u;
        // 0x26ba98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba94) {
            ctx->pc = 0x26BAA8u;
            goto label_26baa8;
        }
    }
    ctx->pc = 0x26BA9Cu;
label_26ba9c:
    // 0x26ba9c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_26baa0:
    if (ctx->pc == 0x26BAA0u) {
        ctx->pc = 0x26BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA9Cu;
        // 0x26baa0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BAA4u;
        goto label_26baa4;
    }
    ctx->pc = 0x26BA9Cu;
    {
        const bool branch_taken_0x26ba9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA9Cu;
        // 0x26baa0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba9c) {
            ctx->pc = 0x26BAB4u;
            goto label_26bab4;
        }
    }
    ctx->pc = 0x26BAA4u;
label_26baa4:
    // 0x26baa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26baa8:
    // 0x26baa8: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x26baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_26baac:
    // 0x26baac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bab0:
    // 0x26bab0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x26bab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26bab4:
    // 0x26bab4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x26bab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26bab8:
    // 0x26bab8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x26bab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26babc:
    // 0x26babc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26babcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26bac0:
    // 0x26bac0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x26bac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26bac4:
    // 0x26bac4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x26bac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26bac8:
    // 0x26bac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26bacc:
    // 0x26bacc: 0x3e00008  jr          $ra
label_26bad0:
    if (ctx->pc == 0x26BAD0u) {
        ctx->pc = 0x26BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BACCu;
        // 0x26bad0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BAD4u;
        goto label_26bad4;
    }
    ctx->pc = 0x26BACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BACCu;
        // 0x26bad0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BAD4u;
label_26bad4:
    // 0x26bad4: 0x0  nop
    ctx->pc = 0x26bad4u;
    // NOP
    ctx->pc = 0x26bad8u;
}
