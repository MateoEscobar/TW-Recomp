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

// Function: sub_0013B7B8
// Address: 0x13b7b8 - 0x13ba68
void sub_0013B7B8_0x13b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B7B8_0x13b7b8");
#endif

    switch (ctx->pc) {
        case 0x13b7b8u: goto label_13b7b8;
        case 0x13b7bcu: goto label_13b7bc;
        case 0x13b7c0u: goto label_13b7c0;
        case 0x13b7c4u: goto label_13b7c4;
        case 0x13b7c8u: goto label_13b7c8;
        case 0x13b7ccu: goto label_13b7cc;
        case 0x13b7d0u: goto label_13b7d0;
        case 0x13b7d4u: goto label_13b7d4;
        case 0x13b7d8u: goto label_13b7d8;
        case 0x13b7dcu: goto label_13b7dc;
        case 0x13b7e0u: goto label_13b7e0;
        case 0x13b7e4u: goto label_13b7e4;
        case 0x13b7e8u: goto label_13b7e8;
        case 0x13b7ecu: goto label_13b7ec;
        case 0x13b7f0u: goto label_13b7f0;
        case 0x13b7f4u: goto label_13b7f4;
        case 0x13b7f8u: goto label_13b7f8;
        case 0x13b7fcu: goto label_13b7fc;
        case 0x13b800u: goto label_13b800;
        case 0x13b804u: goto label_13b804;
        case 0x13b808u: goto label_13b808;
        case 0x13b80cu: goto label_13b80c;
        case 0x13b810u: goto label_13b810;
        case 0x13b814u: goto label_13b814;
        case 0x13b818u: goto label_13b818;
        case 0x13b81cu: goto label_13b81c;
        case 0x13b820u: goto label_13b820;
        case 0x13b824u: goto label_13b824;
        case 0x13b828u: goto label_13b828;
        case 0x13b82cu: goto label_13b82c;
        case 0x13b830u: goto label_13b830;
        case 0x13b834u: goto label_13b834;
        case 0x13b838u: goto label_13b838;
        case 0x13b83cu: goto label_13b83c;
        case 0x13b840u: goto label_13b840;
        case 0x13b844u: goto label_13b844;
        case 0x13b848u: goto label_13b848;
        case 0x13b84cu: goto label_13b84c;
        case 0x13b850u: goto label_13b850;
        case 0x13b854u: goto label_13b854;
        case 0x13b858u: goto label_13b858;
        case 0x13b85cu: goto label_13b85c;
        case 0x13b860u: goto label_13b860;
        case 0x13b864u: goto label_13b864;
        case 0x13b868u: goto label_13b868;
        case 0x13b86cu: goto label_13b86c;
        case 0x13b870u: goto label_13b870;
        case 0x13b874u: goto label_13b874;
        case 0x13b878u: goto label_13b878;
        case 0x13b87cu: goto label_13b87c;
        case 0x13b880u: goto label_13b880;
        case 0x13b884u: goto label_13b884;
        case 0x13b888u: goto label_13b888;
        case 0x13b88cu: goto label_13b88c;
        case 0x13b890u: goto label_13b890;
        case 0x13b894u: goto label_13b894;
        case 0x13b898u: goto label_13b898;
        case 0x13b89cu: goto label_13b89c;
        case 0x13b8a0u: goto label_13b8a0;
        case 0x13b8a4u: goto label_13b8a4;
        case 0x13b8a8u: goto label_13b8a8;
        case 0x13b8acu: goto label_13b8ac;
        case 0x13b8b0u: goto label_13b8b0;
        case 0x13b8b4u: goto label_13b8b4;
        case 0x13b8b8u: goto label_13b8b8;
        case 0x13b8bcu: goto label_13b8bc;
        case 0x13b8c0u: goto label_13b8c0;
        case 0x13b8c4u: goto label_13b8c4;
        case 0x13b8c8u: goto label_13b8c8;
        case 0x13b8ccu: goto label_13b8cc;
        case 0x13b8d0u: goto label_13b8d0;
        case 0x13b8d4u: goto label_13b8d4;
        case 0x13b8d8u: goto label_13b8d8;
        case 0x13b8dcu: goto label_13b8dc;
        case 0x13b8e0u: goto label_13b8e0;
        case 0x13b8e4u: goto label_13b8e4;
        case 0x13b8e8u: goto label_13b8e8;
        case 0x13b8ecu: goto label_13b8ec;
        case 0x13b8f0u: goto label_13b8f0;
        case 0x13b8f4u: goto label_13b8f4;
        case 0x13b8f8u: goto label_13b8f8;
        case 0x13b8fcu: goto label_13b8fc;
        case 0x13b900u: goto label_13b900;
        case 0x13b904u: goto label_13b904;
        case 0x13b908u: goto label_13b908;
        case 0x13b90cu: goto label_13b90c;
        case 0x13b910u: goto label_13b910;
        case 0x13b914u: goto label_13b914;
        case 0x13b918u: goto label_13b918;
        case 0x13b91cu: goto label_13b91c;
        case 0x13b920u: goto label_13b920;
        case 0x13b924u: goto label_13b924;
        case 0x13b928u: goto label_13b928;
        case 0x13b92cu: goto label_13b92c;
        case 0x13b930u: goto label_13b930;
        case 0x13b934u: goto label_13b934;
        case 0x13b938u: goto label_13b938;
        case 0x13b93cu: goto label_13b93c;
        case 0x13b940u: goto label_13b940;
        case 0x13b944u: goto label_13b944;
        case 0x13b948u: goto label_13b948;
        case 0x13b94cu: goto label_13b94c;
        case 0x13b950u: goto label_13b950;
        case 0x13b954u: goto label_13b954;
        case 0x13b958u: goto label_13b958;
        case 0x13b95cu: goto label_13b95c;
        case 0x13b960u: goto label_13b960;
        case 0x13b964u: goto label_13b964;
        case 0x13b968u: goto label_13b968;
        case 0x13b96cu: goto label_13b96c;
        case 0x13b970u: goto label_13b970;
        case 0x13b974u: goto label_13b974;
        case 0x13b978u: goto label_13b978;
        case 0x13b97cu: goto label_13b97c;
        case 0x13b980u: goto label_13b980;
        case 0x13b984u: goto label_13b984;
        case 0x13b988u: goto label_13b988;
        case 0x13b98cu: goto label_13b98c;
        case 0x13b990u: goto label_13b990;
        case 0x13b994u: goto label_13b994;
        case 0x13b998u: goto label_13b998;
        case 0x13b99cu: goto label_13b99c;
        case 0x13b9a0u: goto label_13b9a0;
        case 0x13b9a4u: goto label_13b9a4;
        case 0x13b9a8u: goto label_13b9a8;
        case 0x13b9acu: goto label_13b9ac;
        case 0x13b9b0u: goto label_13b9b0;
        case 0x13b9b4u: goto label_13b9b4;
        case 0x13b9b8u: goto label_13b9b8;
        case 0x13b9bcu: goto label_13b9bc;
        case 0x13b9c0u: goto label_13b9c0;
        case 0x13b9c4u: goto label_13b9c4;
        case 0x13b9c8u: goto label_13b9c8;
        case 0x13b9ccu: goto label_13b9cc;
        case 0x13b9d0u: goto label_13b9d0;
        case 0x13b9d4u: goto label_13b9d4;
        case 0x13b9d8u: goto label_13b9d8;
        case 0x13b9dcu: goto label_13b9dc;
        case 0x13b9e0u: goto label_13b9e0;
        case 0x13b9e4u: goto label_13b9e4;
        case 0x13b9e8u: goto label_13b9e8;
        case 0x13b9ecu: goto label_13b9ec;
        case 0x13b9f0u: goto label_13b9f0;
        case 0x13b9f4u: goto label_13b9f4;
        case 0x13b9f8u: goto label_13b9f8;
        case 0x13b9fcu: goto label_13b9fc;
        case 0x13ba00u: goto label_13ba00;
        case 0x13ba04u: goto label_13ba04;
        case 0x13ba08u: goto label_13ba08;
        case 0x13ba0cu: goto label_13ba0c;
        case 0x13ba10u: goto label_13ba10;
        case 0x13ba14u: goto label_13ba14;
        case 0x13ba18u: goto label_13ba18;
        case 0x13ba1cu: goto label_13ba1c;
        case 0x13ba20u: goto label_13ba20;
        case 0x13ba24u: goto label_13ba24;
        case 0x13ba28u: goto label_13ba28;
        case 0x13ba2cu: goto label_13ba2c;
        case 0x13ba30u: goto label_13ba30;
        case 0x13ba34u: goto label_13ba34;
        case 0x13ba38u: goto label_13ba38;
        case 0x13ba3cu: goto label_13ba3c;
        case 0x13ba40u: goto label_13ba40;
        case 0x13ba44u: goto label_13ba44;
        case 0x13ba48u: goto label_13ba48;
        case 0x13ba4cu: goto label_13ba4c;
        case 0x13ba50u: goto label_13ba50;
        case 0x13ba54u: goto label_13ba54;
        case 0x13ba58u: goto label_13ba58;
        case 0x13ba5cu: goto label_13ba5c;
        case 0x13ba60u: goto label_13ba60;
        case 0x13ba64u: goto label_13ba64;
        default: break;
    }

    ctx->pc = 0x13b7b8u;

label_13b7b8:
    // 0x13b7b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_13b7bc:
    // 0x13b7bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x13b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_13b7c0:
    // 0x13b7c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x13b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_13b7c4:
    // 0x13b7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b7c8:
    // 0x13b7c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x13b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_13b7cc:
    // 0x13b7cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b7d0:
    // 0x13b7d0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x13b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_13b7d4:
    // 0x13b7d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13b7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_13b7d8:
    // 0x13b7d8: 0x26130340  addiu       $s3, $s0, 0x340
    ctx->pc = 0x13b7d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_13b7dc:
    // 0x13b7dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13b7e0:
    // 0x13b7e0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x13b7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b7e4:
    // 0x13b7e4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x13b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_13b7e8:
    // 0x13b7e8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x13b7e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_13b7ec:
    // 0x13b7ec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x13b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_13b7f0:
    // 0x13b7f0: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x13b7f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_13b7f4:
    // 0x13b7f4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x13b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_13b7f8:
    // 0x13b7f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x13b7f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b7fc:
    // 0x13b7fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13b800:
    // 0x13b800: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
label_13b804:
    // 0x13b804: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x13b804u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_13b808:
    // 0x13b808: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x13b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b80c:
    // 0x13b80c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_13b810:
    // 0x13b810: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x13b810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
label_13b814:
    // 0x13b814: 0x27c491a8  addiu       $a0, $fp, -0x6E58
    ctx->pc = 0x13b814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939048));
label_13b818:
    // 0x13b818: 0xc136b7c  jal         func_4DADF0
label_13b81c:
    if (ctx->pc == 0x13B81Cu) {
        ctx->pc = 0x13B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B818u;
        // 0x13b81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B820u;
        goto label_13b820;
    }
    ctx->pc = 0x13B818u;
    SET_GPR_U32(ctx, 31, 0x13B820u);
    ctx->pc = 0x13B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B818u;
    // 0x13b81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x13B818u, 0x13B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B820u;
label_13b820:
    // 0x13b820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b824:
    // 0x13b824: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13b828:
    // 0x13b828: 0xc0e409a  jal         func_390268
label_13b82c:
    if (ctx->pc == 0x13B82Cu) {
        ctx->pc = 0x13B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B828u;
        // 0x13b82c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B830u;
        goto label_13b830;
    }
    ctx->pc = 0x13B828u;
    SET_GPR_U32(ctx, 31, 0x13B830u);
    ctx->pc = 0x13B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B828u;
    // 0x13b82c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13B828u, 0x13B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B830u;
label_13b830:
    // 0x13b830: 0x8e030348  lw          $v1, 0x348($s0)
    ctx->pc = 0x13b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b834:
    // 0x13b834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13b838:
    // 0x13b838: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x13b838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_13b83c:
    // 0x13b83c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13b840:
    // 0x13b840: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x13b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b844:
    // 0x13b844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13b848:
    // 0x13b848: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13b84c:
    // 0x13b84c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b850:
    // 0x13b850: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_13b854:
    if (ctx->pc == 0x13B854u) {
        ctx->pc = 0x13B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B850u;
        // 0x13b854: 0x8e82b1c0  lw          $v0, -0x4E40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B858u;
        goto label_13b858;
    }
    ctx->pc = 0x13B850u;
    {
        const bool branch_taken_0x13b850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B850u;
        // 0x13b854: 0x8e82b1c0  lw          $v0, -0x4E40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b850) {
            ctx->pc = 0x13B8A4u;
            goto label_13b8a4;
        }
    }
    ctx->pc = 0x13B858u;
label_13b858:
    // 0x13b858: 0x1057000f  beq         $v0, $s7, . + 4 + (0xF << 2)
label_13b85c:
    if (ctx->pc == 0x13B85Cu) {
        ctx->pc = 0x13B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B858u;
        // 0x13b85c: 0x8ec2b2b4  lw          $v0, -0x4D4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B860u;
        goto label_13b860;
    }
    ctx->pc = 0x13B858u;
    {
        const bool branch_taken_0x13b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x13B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B858u;
        // 0x13b85c: 0x8ec2b2b4  lw          $v0, -0x4D4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b858) {
            ctx->pc = 0x13B898u;
            goto label_13b898;
        }
    }
    ctx->pc = 0x13B860u;
label_13b860:
    // 0x13b860: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_13b864:
    if (ctx->pc == 0x13B864u) {
        ctx->pc = 0x13B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B860u;
        // 0x13b864: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B868u;
        goto label_13b868;
    }
    ctx->pc = 0x13B860u;
    {
        const bool branch_taken_0x13b860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b860) {
            ctx->pc = 0x13B864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B860u;
            // 0x13b864: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            goto label_13b880;
        }
    }
    ctx->pc = 0x13B868u;
label_13b868:
    // 0x13b868: 0x920203ed  lbu         $v0, 0x3ED($s0)
    ctx->pc = 0x13b868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1005)));
label_13b86c:
    // 0x13b86c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_13b870:
    if (ctx->pc == 0x13B870u) {
        ctx->pc = 0x13B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B86Cu;
        // 0x13b870: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B874u;
        goto label_13b874;
    }
    ctx->pc = 0x13B86Cu;
    {
        const bool branch_taken_0x13b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b86c) {
            ctx->pc = 0x13B870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B86Cu;
            // 0x13b870: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            goto label_13b880;
        }
    }
    ctx->pc = 0x13B874u;
label_13b874:
    // 0x13b874: 0x8ea2b2b0  lw          $v0, -0x4D50($s5)
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947504)));
label_13b878:
    // 0x13b878: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_13b87c:
    if (ctx->pc == 0x13B87Cu) {
        ctx->pc = 0x13B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B878u;
        // 0x13b87c: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B880u;
        goto label_13b880;
    }
    ctx->pc = 0x13B878u;
    {
        const bool branch_taken_0x13b878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B878u;
        // 0x13b87c: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b878) {
            ctx->pc = 0x13B89Cu;
            goto label_13b89c;
        }
    }
    ctx->pc = 0x13B880u;
label_13b880:
    // 0x13b880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13b884:
    // 0x13b884: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_13b888:
    // 0x13b888: 0xc048d40  jal         func_123500
label_13b88c:
    if (ctx->pc == 0x13B88Cu) {
        ctx->pc = 0x13B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B888u;
        // 0x13b88c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B890u;
        goto label_13b890;
    }
    ctx->pc = 0x13B888u;
    SET_GPR_U32(ctx, 31, 0x13B890u);
    ctx->pc = 0x13B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B888u;
    // 0x13b88c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x13B888u, 0x13B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B890u;
label_13b890:
    // 0x13b890: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_13b894:
    if (ctx->pc == 0x13B894u) {
        ctx->pc = 0x13B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B890u;
        // 0x13b894: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B898u;
        goto label_13b898;
    }
    ctx->pc = 0x13B890u;
    {
        const bool branch_taken_0x13b890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b890) {
            ctx->pc = 0x13B894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B890u;
            // 0x13b894: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B8A8u;
            goto label_13b8a8;
        }
    }
    ctx->pc = 0x13B898u;
label_13b898:
    // 0x13b898: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x13b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b89c:
    // 0x13b89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13b8a0:
    // 0x13b8a0: 0xae020348  sw          $v0, 0x348($s0)
    ctx->pc = 0x13b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 2));
label_13b8a4:
    // 0x13b8a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13b8a8:
    // 0x13b8a8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x13b8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13b8ac:
    // 0x13b8ac: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_13b8b0:
    if (ctx->pc == 0x13B8B0u) {
        ctx->pc = 0x13B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8ACu;
        // 0x13b8b0: 0x27c491a8  addiu       $a0, $fp, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8B4u;
        goto label_13b8b4;
    }
    ctx->pc = 0x13B8ACu;
    {
        const bool branch_taken_0x13b8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b8ac) {
            ctx->pc = 0x13B8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B8ACu;
            // 0x13b8b0: 0x27c491a8  addiu       $a0, $fp, -0x6E58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b818;
        }
    }
    ctx->pc = 0x13B8B4u;
label_13b8b4:
    // 0x13b8b4: 0x8e82b1c0  lw          $v0, -0x4E40($s4)
    ctx->pc = 0x13b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947264)));
label_13b8b8:
    // 0x13b8b8: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_13b8bc:
    if (ctx->pc == 0x13B8BCu) {
        ctx->pc = 0x13B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8B8u;
        // 0x13b8bc: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8C0u;
        goto label_13b8c0;
    }
    ctx->pc = 0x13B8B8u;
    {
        const bool branch_taken_0x13b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b8b8) {
            ctx->pc = 0x13B8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B8B8u;
            // 0x13b8bc: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B98Cu;
            goto label_13b98c;
        }
    }
    ctx->pc = 0x13B8C0u;
label_13b8c0:
    // 0x13b8c0: 0xc047e6c  jal         func_11F9B0
label_13b8c4:
    if (ctx->pc == 0x13B8C4u) {
        ctx->pc = 0x13B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8C0u;
        // 0x13b8c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8C8u;
        goto label_13b8c8;
    }
    ctx->pc = 0x13B8C0u;
    SET_GPR_U32(ctx, 31, 0x13B8C8u);
    ctx->pc = 0x13B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8C0u;
    // 0x13b8c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13B8C0u, 0x13B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8C8u;
label_13b8c8:
    // 0x13b8c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13b8cc:
    if (ctx->pc == 0x13B8CCu) {
        ctx->pc = 0x13B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8C8u;
        // 0x13b8cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8D0u;
        goto label_13b8d0;
    }
    ctx->pc = 0x13B8C8u;
    {
        const bool branch_taken_0x13b8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8C8u;
        // 0x13b8cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8c8) {
            ctx->pc = 0x13B8F8u;
            goto label_13b8f8;
        }
    }
    ctx->pc = 0x13B8D0u;
label_13b8d0:
    // 0x13b8d0: 0xc047e6c  jal         func_11F9B0
label_13b8d4:
    if (ctx->pc == 0x13B8D4u) {
        ctx->pc = 0x13B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8D0u;
        // 0x13b8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8D8u;
        goto label_13b8d8;
    }
    ctx->pc = 0x13B8D0u;
    SET_GPR_U32(ctx, 31, 0x13B8D8u);
    ctx->pc = 0x13B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8D0u;
    // 0x13b8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13B8D0u, 0x13B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8D8u;
label_13b8d8:
    // 0x13b8d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b8dc:
    // 0x13b8dc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13b8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_13b8e0:
    // 0x13b8e0: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x13b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_13b8e4:
    // 0x13b8e4: 0xa0f809  jalr        $a1
label_13b8e8:
    if (ctx->pc == 0x13B8E8u) {
        ctx->pc = 0x13B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8E4u;
        // 0x13b8e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8ECu;
        goto label_13b8ec;
    }
    ctx->pc = 0x13B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13B8ECu);
        ctx->pc = 0x13B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8E4u;
        // 0x13b8e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B8E4u, 0x13B8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B8ECu;
label_13b8ec:
    // 0x13b8ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13b8f0:
    // 0x13b8f0: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_13b8f4:
    if (ctx->pc == 0x13B8F4u) {
        ctx->pc = 0x13B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8F0u;
        // 0x13b8f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B8F8u;
        goto label_13b8f8;
    }
    ctx->pc = 0x13B8F0u;
    {
        const bool branch_taken_0x13b8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8F0u;
        // 0x13b8f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8f0) {
            ctx->pc = 0x13B930u;
            goto label_13b930;
        }
    }
    ctx->pc = 0x13B8F8u;
label_13b8f8:
    // 0x13b8f8: 0x8c44b19c  lw          $a0, -0x4E64($v0)
    ctx->pc = 0x13b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_13b8fc:
    // 0x13b8fc: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x13b8fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13b900:
    // 0x13b900: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_13b904:
    if (ctx->pc == 0x13B904u) {
        ctx->pc = 0x13B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B900u;
        // 0x13b904: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B908u;
        goto label_13b908;
    }
    ctx->pc = 0x13B900u;
    {
        const bool branch_taken_0x13b900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B900u;
        // 0x13b904: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b900) {
            ctx->pc = 0x13B918u;
            goto label_13b918;
        }
    }
    ctx->pc = 0x13B908u;
label_13b908:
    // 0x13b908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13b908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13b90c:
    // 0x13b90c: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x13b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_13b910:
    // 0x13b910: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_13b914:
    if (ctx->pc == 0x13B914u) {
        ctx->pc = 0x13B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B910u;
        // 0x13b914: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B918u;
        goto label_13b918;
    }
    ctx->pc = 0x13B910u;
    {
        const bool branch_taken_0x13b910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B910u;
        // 0x13b914: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b910) {
            ctx->pc = 0x13B930u;
            goto label_13b930;
        }
    }
    ctx->pc = 0x13B918u;
label_13b918:
    // 0x13b918: 0x8c62b1e8  lw          $v0, -0x4E18($v1)
    ctx->pc = 0x13b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947304)));
label_13b91c:
    // 0x13b91c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13b920:
    if (ctx->pc == 0x13B920u) {
        ctx->pc = 0x13B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B91Cu;
        // 0x13b920: 0x2464b1e8  addiu       $a0, $v1, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B924u;
        goto label_13b924;
    }
    ctx->pc = 0x13B91Cu;
    {
        const bool branch_taken_0x13b91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B91Cu;
        // 0x13b920: 0x2464b1e8  addiu       $a0, $v1, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b91c) {
            ctx->pc = 0x13B930u;
            goto label_13b930;
        }
    }
    ctx->pc = 0x13B924u;
label_13b924:
    // 0x13b924: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13b928:
    // 0x13b928: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_13b92c:
    if (ctx->pc == 0x13B92Cu) {
        ctx->pc = 0x13B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B928u;
        // 0x13b92c: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B930u;
        goto label_13b930;
    }
    ctx->pc = 0x13B928u;
    {
        const bool branch_taken_0x13b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b928) {
            ctx->pc = 0x13B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B928u;
            // 0x13b92c: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B98Cu;
            goto label_13b98c;
        }
    }
    ctx->pc = 0x13B930u;
label_13b930:
    // 0x13b930: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13b930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b934:
    // 0x13b934: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13b934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13b938:
    // 0x13b938: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13b93c:
    // 0x13b93c: 0x40f809  jalr        $v0
label_13b940:
    if (ctx->pc == 0x13B940u) {
        ctx->pc = 0x13B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B93Cu;
        // 0x13b940: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B944u;
        goto label_13b944;
    }
    ctx->pc = 0x13B93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B944u);
        ctx->pc = 0x13B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B93Cu;
        // 0x13b940: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B93Cu, 0x13B944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B944u;
label_13b944:
    // 0x13b944: 0x8e030348  lw          $v1, 0x348($s0)
    ctx->pc = 0x13b944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b948:
    // 0x13b948: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13b948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13b94c:
    // 0x13b94c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_13b950:
    if (ctx->pc == 0x13B950u) {
        ctx->pc = 0x13B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B94Cu;
        // 0x13b950: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B954u;
        goto label_13b954;
    }
    ctx->pc = 0x13B94Cu;
    {
        const bool branch_taken_0x13b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b94c) {
            ctx->pc = 0x13B950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B94Cu;
            // 0x13b950: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B984u;
            goto label_13b984;
        }
    }
    ctx->pc = 0x13B954u;
label_13b954:
    // 0x13b954: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b958:
    // 0x13b958: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13b95c:
    // 0x13b95c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13b960:
    // 0x13b960: 0x40f809  jalr        $v0
label_13b964:
    if (ctx->pc == 0x13B964u) {
        ctx->pc = 0x13B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B960u;
        // 0x13b964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B968u;
        goto label_13b968;
    }
    ctx->pc = 0x13B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B968u);
        ctx->pc = 0x13B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B960u;
        // 0x13b964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B960u, 0x13B968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B968u;
label_13b968:
    // 0x13b968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13b96c:
    // 0x13b96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b970:
    // 0x13b970: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_13b974:
    // 0x13b974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b978:
    // 0x13b978: 0xae040348  sw          $a0, 0x348($s0)
    ctx->pc = 0x13b978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 4));
label_13b97c:
    // 0x13b97c: 0x10000002  b           . + 4 + (0x2 << 2)
label_13b980:
    if (ctx->pc == 0x13B980u) {
        ctx->pc = 0x13B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B97Cu;
        // 0x13b980: 0xae030340  sw          $v1, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B984u;
        goto label_13b984;
    }
    ctx->pc = 0x13B97Cu;
    {
        const bool branch_taken_0x13b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B97Cu;
        // 0x13b980: 0xae030340  sw          $v1, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b97c) {
            ctx->pc = 0x13B988u;
            goto label_13b988;
        }
    }
    ctx->pc = 0x13B984u;
label_13b984:
    // 0x13b984: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x13b984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
label_13b988:
    // 0x13b988: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x13b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_13b98c:
    // 0x13b98c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x13b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13b990:
    // 0x13b990: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x13b990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13b994:
    // 0x13b994: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_13b998:
    if (ctx->pc == 0x13B998u) {
        ctx->pc = 0x13B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B994u;
        // 0x13b998: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B99Cu;
        goto label_13b99c;
    }
    ctx->pc = 0x13B994u;
    {
        const bool branch_taken_0x13b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B994u;
        // 0x13b998: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b994) {
            ctx->pc = 0x13BA34u;
            goto label_13ba34;
        }
    }
    ctx->pc = 0x13B99Cu;
label_13b99c:
    // 0x13b99c: 0x920203ed  lbu         $v0, 0x3ED($s0)
    ctx->pc = 0x13b99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1005)));
label_13b9a0:
    // 0x13b9a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x13b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_13b9a4:
    // 0x13b9a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13b9a8:
    if (ctx->pc == 0x13B9A8u) {
        ctx->pc = 0x13B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9A4u;
        // 0x13b9a8: 0xa20303e5  sb          $v1, 0x3E5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 997), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9ACu;
        goto label_13b9ac;
    }
    ctx->pc = 0x13B9A4u;
    {
        const bool branch_taken_0x13b9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9A4u;
        // 0x13b9a8: 0xa20303e5  sb          $v1, 0x3E5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 997), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9a4) {
            ctx->pc = 0x13B9B0u;
            goto label_13b9b0;
        }
    }
    ctx->pc = 0x13B9ACu;
label_13b9ac:
    // 0x13b9ac: 0xa20303e7  sb          $v1, 0x3E7($s0)
    ctx->pc = 0x13b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 999), (uint8_t)GPR_U32(ctx, 3));
label_13b9b0:
    // 0x13b9b0: 0xc047e6c  jal         func_11F9B0
label_13b9b4:
    if (ctx->pc == 0x13B9B4u) {
        ctx->pc = 0x13B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9B0u;
        // 0x13b9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9B8u;
        goto label_13b9b8;
    }
    ctx->pc = 0x13B9B0u;
    SET_GPR_U32(ctx, 31, 0x13B9B8u);
    ctx->pc = 0x13B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9B0u;
    // 0x13b9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13B9B0u, 0x13B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9B8u;
label_13b9b8:
    // 0x13b9b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_13b9bc:
    if (ctx->pc == 0x13B9BCu) {
        ctx->pc = 0x13B9C0u;
        goto label_13b9c0;
    }
    ctx->pc = 0x13B9B8u;
    {
        const bool branch_taken_0x13b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9b8) {
            ctx->pc = 0x13B9F0u;
            goto label_13b9f0;
        }
    }
    ctx->pc = 0x13B9C0u;
label_13b9c0:
    // 0x13b9c0: 0xc047e6c  jal         func_11F9B0
label_13b9c4:
    if (ctx->pc == 0x13B9C4u) {
        ctx->pc = 0x13B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9C0u;
        // 0x13b9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9C8u;
        goto label_13b9c8;
    }
    ctx->pc = 0x13B9C0u;
    SET_GPR_U32(ctx, 31, 0x13B9C8u);
    ctx->pc = 0x13B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9C0u;
    // 0x13b9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13B9C0u, 0x13B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9C8u;
label_13b9c8:
    // 0x13b9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b9cc:
    // 0x13b9cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b9d0:
    // 0x13b9d0: 0xc047eec  jal         func_11FBB0
label_13b9d4:
    if (ctx->pc == 0x13B9D4u) {
        ctx->pc = 0x13B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9D0u;
        // 0x13b9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9D8u;
        goto label_13b9d8;
    }
    ctx->pc = 0x13B9D0u;
    SET_GPR_U32(ctx, 31, 0x13B9D8u);
    ctx->pc = 0x13B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9D0u;
    // 0x13b9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B9D0u, 0x13B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9D8u;
label_13b9d8:
    // 0x13b9d8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_13b9dc:
    if (ctx->pc == 0x13B9DCu) {
        ctx->pc = 0x13B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9D8u;
        // 0x13b9dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9E0u;
        goto label_13b9e0;
    }
    ctx->pc = 0x13B9D8u;
    {
        const bool branch_taken_0x13b9d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9D8u;
        // 0x13b9dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9d8) {
            ctx->pc = 0x13B9F0u;
            goto label_13b9f0;
        }
    }
    ctx->pc = 0x13B9E0u;
label_13b9e0:
    // 0x13b9e0: 0xc047eec  jal         func_11FBB0
label_13b9e4:
    if (ctx->pc == 0x13B9E4u) {
        ctx->pc = 0x13B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9E0u;
        // 0x13b9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9E8u;
        goto label_13b9e8;
    }
    ctx->pc = 0x13B9E0u;
    SET_GPR_U32(ctx, 31, 0x13B9E8u);
    ctx->pc = 0x13B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9E0u;
    // 0x13b9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B9E0u, 0x13B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9E8u;
label_13b9e8:
    // 0x13b9e8: 0xc04f164  jal         func_13C590
label_13b9ec:
    if (ctx->pc == 0x13B9ECu) {
        ctx->pc = 0x13B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9E8u;
        // 0x13b9ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9F0u;
        goto label_13b9f0;
    }
    ctx->pc = 0x13B9E8u;
    SET_GPR_U32(ctx, 31, 0x13B9F0u);
    ctx->pc = 0x13B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9E8u;
    // 0x13b9ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C590u, 0x13B9E8u, 0x13B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9F0u;
label_13b9f0:
    // 0x13b9f0: 0xc047e6c  jal         func_11F9B0
label_13b9f4:
    if (ctx->pc == 0x13B9F4u) {
        ctx->pc = 0x13B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9F0u;
        // 0x13b9f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9F8u;
        goto label_13b9f8;
    }
    ctx->pc = 0x13B9F0u;
    SET_GPR_U32(ctx, 31, 0x13B9F8u);
    ctx->pc = 0x13B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9F0u;
    // 0x13b9f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13B9F0u, 0x13B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9F8u;
label_13b9f8:
    // 0x13b9f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_13b9fc:
    if (ctx->pc == 0x13B9FCu) {
        ctx->pc = 0x13B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9F8u;
        // 0x13b9fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA00u;
        goto label_13ba00;
    }
    ctx->pc = 0x13B9F8u;
    {
        const bool branch_taken_0x13b9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9F8u;
        // 0x13b9fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9f8) {
            ctx->pc = 0x13BA38u;
            goto label_13ba38;
        }
    }
    ctx->pc = 0x13BA00u;
label_13ba00:
    // 0x13ba00: 0xc047e6c  jal         func_11F9B0
label_13ba04:
    if (ctx->pc == 0x13BA04u) {
        ctx->pc = 0x13BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA00u;
        // 0x13ba04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA08u;
        goto label_13ba08;
    }
    ctx->pc = 0x13BA00u;
    SET_GPR_U32(ctx, 31, 0x13BA08u);
    ctx->pc = 0x13BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA00u;
    // 0x13ba04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13BA00u, 0x13BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA08u;
label_13ba08:
    // 0x13ba08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ba08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ba0c:
    // 0x13ba0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ba10:
    // 0x13ba10: 0xc047eec  jal         func_11FBB0
label_13ba14:
    if (ctx->pc == 0x13BA14u) {
        ctx->pc = 0x13BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA10u;
        // 0x13ba14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA18u;
        goto label_13ba18;
    }
    ctx->pc = 0x13BA10u;
    SET_GPR_U32(ctx, 31, 0x13BA18u);
    ctx->pc = 0x13BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA10u;
    // 0x13ba14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13BA10u, 0x13BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA18u;
label_13ba18:
    // 0x13ba18: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_13ba1c:
    if (ctx->pc == 0x13BA1Cu) {
        ctx->pc = 0x13BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA18u;
        // 0x13ba1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA20u;
        goto label_13ba20;
    }
    ctx->pc = 0x13BA18u;
    {
        const bool branch_taken_0x13ba18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA18u;
        // 0x13ba1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba18) {
            ctx->pc = 0x13BA38u;
            goto label_13ba38;
        }
    }
    ctx->pc = 0x13BA20u;
label_13ba20:
    // 0x13ba20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ba24:
    // 0x13ba24: 0xc047eec  jal         func_11FBB0
label_13ba28:
    if (ctx->pc == 0x13BA28u) {
        ctx->pc = 0x13BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA24u;
        // 0x13ba28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA2Cu;
        goto label_13ba2c;
    }
    ctx->pc = 0x13BA24u;
    SET_GPR_U32(ctx, 31, 0x13BA2Cu);
    ctx->pc = 0x13BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA24u;
    // 0x13ba28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13BA24u, 0x13BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA2Cu;
label_13ba2c:
    // 0x13ba2c: 0xc04f164  jal         func_13C590
label_13ba30:
    if (ctx->pc == 0x13BA30u) {
        ctx->pc = 0x13BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA2Cu;
        // 0x13ba30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA34u;
        goto label_13ba34;
    }
    ctx->pc = 0x13BA2Cu;
    SET_GPR_U32(ctx, 31, 0x13BA34u);
    ctx->pc = 0x13BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA2Cu;
    // 0x13ba30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C590u, 0x13BA2Cu, 0x13BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA34u;
label_13ba34:
    // 0x13ba34: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x13ba34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13ba38:
    // 0x13ba38: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x13ba38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13ba3c:
    // 0x13ba3c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x13ba3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13ba40:
    // 0x13ba40: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x13ba40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13ba44:
    // 0x13ba44: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13ba44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13ba48:
    // 0x13ba48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13ba48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13ba4c:
    // 0x13ba4c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x13ba4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13ba50:
    // 0x13ba50: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x13ba50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13ba54:
    // 0x13ba54: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x13ba54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ba58:
    // 0x13ba58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ba5c:
    // 0x13ba5c: 0x3e00008  jr          $ra
label_13ba60:
    if (ctx->pc == 0x13BA60u) {
        ctx->pc = 0x13BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA5Cu;
        // 0x13ba60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA64u;
        goto label_13ba64;
    }
    ctx->pc = 0x13BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA5Cu;
        // 0x13ba60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BA64u;
label_13ba64:
    // 0x13ba64: 0x0  nop
    ctx->pc = 0x13ba64u;
    // NOP
    ctx->pc = 0x13ba68u;
}
