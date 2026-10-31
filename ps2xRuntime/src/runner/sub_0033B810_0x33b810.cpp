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

// Function: sub_0033B810
// Address: 0x33b810 - 0x33b9d0
void sub_0033B810_0x33b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B810_0x33b810");
#endif

    switch (ctx->pc) {
        case 0x33b810u: goto label_33b810;
        case 0x33b814u: goto label_33b814;
        case 0x33b818u: goto label_33b818;
        case 0x33b81cu: goto label_33b81c;
        case 0x33b820u: goto label_33b820;
        case 0x33b824u: goto label_33b824;
        case 0x33b828u: goto label_33b828;
        case 0x33b82cu: goto label_33b82c;
        case 0x33b830u: goto label_33b830;
        case 0x33b834u: goto label_33b834;
        case 0x33b838u: goto label_33b838;
        case 0x33b83cu: goto label_33b83c;
        case 0x33b840u: goto label_33b840;
        case 0x33b844u: goto label_33b844;
        case 0x33b848u: goto label_33b848;
        case 0x33b84cu: goto label_33b84c;
        case 0x33b850u: goto label_33b850;
        case 0x33b854u: goto label_33b854;
        case 0x33b858u: goto label_33b858;
        case 0x33b85cu: goto label_33b85c;
        case 0x33b860u: goto label_33b860;
        case 0x33b864u: goto label_33b864;
        case 0x33b868u: goto label_33b868;
        case 0x33b86cu: goto label_33b86c;
        case 0x33b870u: goto label_33b870;
        case 0x33b874u: goto label_33b874;
        case 0x33b878u: goto label_33b878;
        case 0x33b87cu: goto label_33b87c;
        case 0x33b880u: goto label_33b880;
        case 0x33b884u: goto label_33b884;
        case 0x33b888u: goto label_33b888;
        case 0x33b88cu: goto label_33b88c;
        case 0x33b890u: goto label_33b890;
        case 0x33b894u: goto label_33b894;
        case 0x33b898u: goto label_33b898;
        case 0x33b89cu: goto label_33b89c;
        case 0x33b8a0u: goto label_33b8a0;
        case 0x33b8a4u: goto label_33b8a4;
        case 0x33b8a8u: goto label_33b8a8;
        case 0x33b8acu: goto label_33b8ac;
        case 0x33b8b0u: goto label_33b8b0;
        case 0x33b8b4u: goto label_33b8b4;
        case 0x33b8b8u: goto label_33b8b8;
        case 0x33b8bcu: goto label_33b8bc;
        case 0x33b8c0u: goto label_33b8c0;
        case 0x33b8c4u: goto label_33b8c4;
        case 0x33b8c8u: goto label_33b8c8;
        case 0x33b8ccu: goto label_33b8cc;
        case 0x33b8d0u: goto label_33b8d0;
        case 0x33b8d4u: goto label_33b8d4;
        case 0x33b8d8u: goto label_33b8d8;
        case 0x33b8dcu: goto label_33b8dc;
        case 0x33b8e0u: goto label_33b8e0;
        case 0x33b8e4u: goto label_33b8e4;
        case 0x33b8e8u: goto label_33b8e8;
        case 0x33b8ecu: goto label_33b8ec;
        case 0x33b8f0u: goto label_33b8f0;
        case 0x33b8f4u: goto label_33b8f4;
        case 0x33b8f8u: goto label_33b8f8;
        case 0x33b8fcu: goto label_33b8fc;
        case 0x33b900u: goto label_33b900;
        case 0x33b904u: goto label_33b904;
        case 0x33b908u: goto label_33b908;
        case 0x33b90cu: goto label_33b90c;
        case 0x33b910u: goto label_33b910;
        case 0x33b914u: goto label_33b914;
        case 0x33b918u: goto label_33b918;
        case 0x33b91cu: goto label_33b91c;
        case 0x33b920u: goto label_33b920;
        case 0x33b924u: goto label_33b924;
        case 0x33b928u: goto label_33b928;
        case 0x33b92cu: goto label_33b92c;
        case 0x33b930u: goto label_33b930;
        case 0x33b934u: goto label_33b934;
        case 0x33b938u: goto label_33b938;
        case 0x33b93cu: goto label_33b93c;
        case 0x33b940u: goto label_33b940;
        case 0x33b944u: goto label_33b944;
        case 0x33b948u: goto label_33b948;
        case 0x33b94cu: goto label_33b94c;
        case 0x33b950u: goto label_33b950;
        case 0x33b954u: goto label_33b954;
        case 0x33b958u: goto label_33b958;
        case 0x33b95cu: goto label_33b95c;
        case 0x33b960u: goto label_33b960;
        case 0x33b964u: goto label_33b964;
        case 0x33b968u: goto label_33b968;
        case 0x33b96cu: goto label_33b96c;
        case 0x33b970u: goto label_33b970;
        case 0x33b974u: goto label_33b974;
        case 0x33b978u: goto label_33b978;
        case 0x33b97cu: goto label_33b97c;
        case 0x33b980u: goto label_33b980;
        case 0x33b984u: goto label_33b984;
        case 0x33b988u: goto label_33b988;
        case 0x33b98cu: goto label_33b98c;
        case 0x33b990u: goto label_33b990;
        case 0x33b994u: goto label_33b994;
        case 0x33b998u: goto label_33b998;
        case 0x33b99cu: goto label_33b99c;
        case 0x33b9a0u: goto label_33b9a0;
        case 0x33b9a4u: goto label_33b9a4;
        case 0x33b9a8u: goto label_33b9a8;
        case 0x33b9acu: goto label_33b9ac;
        case 0x33b9b0u: goto label_33b9b0;
        case 0x33b9b4u: goto label_33b9b4;
        case 0x33b9b8u: goto label_33b9b8;
        case 0x33b9bcu: goto label_33b9bc;
        case 0x33b9c0u: goto label_33b9c0;
        case 0x33b9c4u: goto label_33b9c4;
        case 0x33b9c8u: goto label_33b9c8;
        case 0x33b9ccu: goto label_33b9cc;
        default: break;
    }

    ctx->pc = 0x33b810u;

label_33b810:
    // 0x33b810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_33b814:
    // 0x33b814: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x33b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_33b818:
    // 0x33b818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33b81c:
    // 0x33b81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b820:
    // 0x33b820: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x33b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_33b824:
    // 0x33b824: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x33b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_33b828:
    // 0x33b828: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x33b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_33b82c:
    // 0x33b82c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_33b830:
    // 0x33b830: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x33b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_33b834:
    // 0x33b834: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x33b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_33b838:
    // 0x33b838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33b83c:
    // 0x33b83c: 0xc0cedbe  jal         func_33B6F8
label_33b840:
    if (ctx->pc == 0x33B840u) {
        ctx->pc = 0x33B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B83Cu;
        // 0x33b840: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B844u;
        goto label_33b844;
    }
    ctx->pc = 0x33B83Cu;
    SET_GPR_U32(ctx, 31, 0x33B844u);
    ctx->pc = 0x33B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B83Cu;
    // 0x33b840: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6F8u, 0x33B83Cu, 0x33B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B844u;
label_33b844:
    // 0x33b844: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x33b844u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b848:
    // 0x33b848: 0x12c00055  beqz        $s6, . + 4 + (0x55 << 2)
label_33b84c:
    if (ctx->pc == 0x33B84Cu) {
        ctx->pc = 0x33B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B848u;
        // 0x33b84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B850u;
        goto label_33b850;
    }
    ctx->pc = 0x33B848u;
    {
        const bool branch_taken_0x33b848 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B848u;
        // 0x33b84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b848) {
            ctx->pc = 0x33B9A0u;
            goto label_33b9a0;
        }
    }
    ctx->pc = 0x33B850u;
label_33b850:
    // 0x33b850: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x33b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33b854:
    // 0x33b854: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x33b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_33b858:
    // 0x33b858: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x33b858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33b85c:
    // 0x33b85c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b860:
    // 0x33b860: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33b864:
    // 0x33b864: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x33b864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33b868:
    // 0x33b868: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x33b868u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33b86c:
    // 0x33b86c: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x33b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33b870:
    // 0x33b870: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x33b870u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_33b874:
    // 0x33b874: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33b874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33b878:
    // 0x33b878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33b87c:
    // 0x33b87c: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x33b87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33b880:
    // 0x33b880: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_33b884:
    if (ctx->pc == 0x33B884u) {
        ctx->pc = 0x33B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B880u;
        // 0x33b884: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B888u;
        goto label_33b888;
    }
    ctx->pc = 0x33B880u;
    {
        const bool branch_taken_0x33b880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B880u;
        // 0x33b884: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b880) {
            ctx->pc = 0x33B978u;
            goto label_33b978;
        }
    }
    ctx->pc = 0x33B888u;
label_33b888:
    // 0x33b888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33b888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b88c:
    // 0x33b88c: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x33b88cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_33b890:
    // 0x33b890: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x33b890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33b894:
    // 0x33b894: 0x0  nop
    ctx->pc = 0x33b894u;
    // NOP
label_33b898:
    // 0x33b898: 0x0  nop
    ctx->pc = 0x33b898u;
    // NOP
label_33b89c:
    // 0x33b89c: 0x0  nop
    ctx->pc = 0x33b89cu;
    // NOP
label_33b8a0:
    // 0x33b8a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33b8a4:
    if (ctx->pc == 0x33B8A4u) {
        ctx->pc = 0x33B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8A0u;
        // 0x33b8a4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8A8u;
        goto label_33b8a8;
    }
    ctx->pc = 0x33B8A0u;
    {
        const bool branch_taken_0x33b8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8a0) {
            ctx->pc = 0x33B8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B8A0u;
            // 0x33b8a4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b890;
        }
    }
    ctx->pc = 0x33B8A8u;
label_33b8a8:
    // 0x33b8a8: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x33b8a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33b8ac:
    // 0x33b8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b8b0:
    // 0x33b8b0: 0x2359018  mult        $s2, $s1, $s5
    ctx->pc = 0x33b8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_33b8b4:
    // 0x33b8b4: 0xc0cedbe  jal         func_33B6F8
label_33b8b8:
    if (ctx->pc == 0x33B8B8u) {
        ctx->pc = 0x33B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8B4u;
        // 0x33b8b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8BCu;
        goto label_33b8bc;
    }
    ctx->pc = 0x33B8B4u;
    SET_GPR_U32(ctx, 31, 0x33B8BCu);
    ctx->pc = 0x33B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B8B4u;
    // 0x33b8b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6F8u, 0x33B8B4u, 0x33B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B8BCu;
label_33b8bc:
    // 0x33b8bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33b8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b8c0:
    // 0x33b8c0: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_33b8c4:
    if (ctx->pc == 0x33B8C4u) {
        ctx->pc = 0x33B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8C0u;
        // 0x33b8c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8C8u;
        goto label_33b8c8;
    }
    ctx->pc = 0x33B8C0u;
    {
        const bool branch_taken_0x33b8c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8C0u;
        // 0x33b8c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8c0) {
            ctx->pc = 0x33B8E0u;
            goto label_33b8e0;
        }
    }
    ctx->pc = 0x33B8C8u;
label_33b8c8:
    // 0x33b8c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x33b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_33b8cc:
    // 0x33b8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b8d0:
    // 0x33b8d0: 0x40f809  jalr        $v0
label_33b8d4:
    if (ctx->pc == 0x33B8D4u) {
        ctx->pc = 0x33B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8D0u;
        // 0x33b8d4: 0x142823  negu        $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8D8u;
        goto label_33b8d8;
    }
    ctx->pc = 0x33B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B8D8u);
        ctx->pc = 0x33B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8D0u;
        // 0x33b8d4: 0x142823  negu        $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B8D0u, 0x33B8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B8D8u;
label_33b8d8:
    // 0x33b8d8: 0x10000031  b           . + 4 + (0x31 << 2)
label_33b8dc:
    if (ctx->pc == 0x33B8DCu) {
        ctx->pc = 0x33B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8D8u;
        // 0x33b8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8E0u;
        goto label_33b8e0;
    }
    ctx->pc = 0x33B8D8u;
    {
        const bool branch_taken_0x33b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8D8u;
        // 0x33b8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8d8) {
            ctx->pc = 0x33B9A0u;
            goto label_33b9a0;
        }
    }
    ctx->pc = 0x33B8E0u;
label_33b8e0:
    // 0x33b8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33b8e4:
    // 0x33b8e4: 0xc10c1fa  jal         func_4307E8
label_33b8e8:
    if (ctx->pc == 0x33B8E8u) {
        ctx->pc = 0x33B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8E4u;
        // 0x33b8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B8ECu;
        goto label_33b8ec;
    }
    ctx->pc = 0x33B8E4u;
    SET_GPR_U32(ctx, 31, 0x33B8ECu);
    ctx->pc = 0x33B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B8E4u;
    // 0x33b8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33B8E4u, 0x33B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B8ECu;
label_33b8ec:
    // 0x33b8ec: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x33b8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33b8f0:
    // 0x33b8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33b8f4:
    // 0x33b8f4: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x33b8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_33b8f8:
    // 0x33b8f8: 0x3012  mflo        $a2
    ctx->pc = 0x33b8f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_33b8fc:
    // 0x33b8fc: 0xc10c190  jal         func_430640
label_33b900:
    if (ctx->pc == 0x33B900u) {
        ctx->pc = 0x33B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8FCu;
        // 0x33b900: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B904u;
        goto label_33b904;
    }
    ctx->pc = 0x33B8FCu;
    SET_GPR_U32(ctx, 31, 0x33B904u);
    ctx->pc = 0x33B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B8FCu;
    // 0x33b900: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x33B8FCu, 0x33B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B904u;
label_33b904:
    // 0x33b904: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x33b904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_33b908:
    // 0x33b908: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33b908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b90c:
    // 0x33b90c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x33b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33b910:
    // 0x33b910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b914:
    // 0x33b914: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x33b914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33b918:
    // 0x33b918: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x33b918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_33b91c:
    // 0x33b91c: 0x103302a  slt         $a2, $t0, $v1
    ctx->pc = 0x33b91cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33b920:
    // 0x33b920: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x33b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33b924:
    // 0x33b924: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x33b924u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_33b928:
    // 0x33b928: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33b928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33b92c:
    // 0x33b92c: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x33b92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b930:
    // 0x33b930: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x33b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_33b934:
    // 0x33b934: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x33b934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_33b938:
    // 0x33b938: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x33b938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33b93c:
    // 0x33b93c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33b940:
    // 0x33b940: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x33b940u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_33b944:
    // 0x33b944: 0x107402a  slt         $t0, $t0, $a3
    ctx->pc = 0x33b944u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_33b948:
    // 0x33b948: 0x24e203ff  addiu       $v0, $a3, 0x3FF
    ctx->pc = 0x33b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1023));
label_33b94c:
    // 0x33b94c: 0xe8100b  movn        $v0, $a3, $t0
    ctx->pc = 0x33b94cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
label_33b950:
    // 0x33b950: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x33b950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33b954:
    // 0x33b954: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33b954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33b958:
    // 0x33b958: 0x553018  mult        $a2, $v0, $s5
    ctx->pc = 0x33b958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_33b95c:
    // 0x33b95c: 0x246303ff  addiu       $v1, $v1, 0x3FF
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33b960:
    // 0x33b960: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x33b960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
label_33b964:
    // 0x33b964: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_33b968:
    // 0x33b968: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x33b968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_33b96c:
    // 0x33b96c: 0xc0cec68  jal         func_33B1A0
label_33b970:
    if (ctx->pc == 0x33B970u) {
        ctx->pc = 0x33B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B96Cu;
        // 0x33b970: 0xae13003c  sw          $s3, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B974u;
        goto label_33b974;
    }
    ctx->pc = 0x33B96Cu;
    SET_GPR_U32(ctx, 31, 0x33B974u);
    ctx->pc = 0x33B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B96Cu;
    // 0x33b970: 0xae13003c  sw          $s3, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33B96Cu, 0x33B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B974u;
label_33b974:
    // 0x33b974: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x33b974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_33b978:
    // 0x33b978: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x33b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33b97c:
    // 0x33b97c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b980:
    // 0x33b980: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x33b980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33b984:
    // 0x33b984: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x33b984u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_33b988:
    // 0x33b988: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x33b988u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33b98c:
    // 0x33b98c: 0x246403ff  addiu       $a0, $v1, 0x3FF
    ctx->pc = 0x33b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_33b990:
    // 0x33b990: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x33b990u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_33b994:
    // 0x33b994: 0x42283  sra         $a0, $a0, 10
    ctx->pc = 0x33b994u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 10));
label_33b998:
    // 0x33b998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33b99c:
    // 0x33b99c: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x33b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_33b9a0:
    // 0x33b9a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x33b9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33b9a4:
    // 0x33b9a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x33b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33b9a8:
    // 0x33b9a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x33b9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33b9ac:
    // 0x33b9ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x33b9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33b9b0:
    // 0x33b9b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33b9b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33b9b4:
    // 0x33b9b4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x33b9b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33b9b8:
    // 0x33b9b8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x33b9b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b9bc:
    // 0x33b9bc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x33b9bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b9c0:
    // 0x33b9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b9c4:
    // 0x33b9c4: 0x3e00008  jr          $ra
label_33b9c8:
    if (ctx->pc == 0x33B9C8u) {
        ctx->pc = 0x33B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9C4u;
        // 0x33b9c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B9CCu;
        goto label_33b9cc;
    }
    ctx->pc = 0x33B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9C4u;
        // 0x33b9c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B9CCu;
label_33b9cc:
    // 0x33b9cc: 0x0  nop
    ctx->pc = 0x33b9ccu;
    // NOP
    ctx->pc = 0x33b9d0u;
}
