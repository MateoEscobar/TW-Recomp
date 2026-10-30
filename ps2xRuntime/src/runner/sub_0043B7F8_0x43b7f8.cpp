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

// Function: sub_0043B7F8
// Address: 0x43b7f8 - 0x43b990
void sub_0043B7F8_0x43b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B7F8_0x43b7f8");
#endif

    switch (ctx->pc) {
        case 0x43b838u: goto label_43b838;
        default: break;
    }

    ctx->pc = 0x43b7f8u;

    // 0x43b7f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43b7fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x43b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x43b800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x43b804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43b804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b808: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x43b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x43b80c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x43b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x43b810: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x43b810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x43b814: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x43b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x43b818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b81c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x43b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x43b820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43b820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43b824: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x43b824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x43b828: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x43b828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x43b82c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x43b82cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x43b830: 0xc10ebd6  jal         func_43AF58
    ctx->pc = 0x43B830u;
    SET_GPR_U32(ctx, 31, 0x43B838u);
    ctx->pc = 0x43B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B830u;
    // 0x43b834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AF58u, 0x43B830u, 0x43B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B838u;
label_43b838:
    // 0x43b838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x43b838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b83c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x43b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43b840: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x43b840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x43b844: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x43b844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43b848: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x43B848u;
    {
        const bool branch_taken_0x43b848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B848u;
        // 0x43b84c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b848) {
            ctx->pc = 0x43B8B8u;
            goto label_43b8b8;
        }
    }
    ctx->pc = 0x43B850u;
    // 0x43b850: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x43b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x43b854: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x43b854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x43b858: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x43b858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43b85c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b860: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43b864: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x43b864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x43b868: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x43b868u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x43b86c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43b870: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x43b870u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x43b874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43b878: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x43b878u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x43b87c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x43B87Cu;
    {
        const bool branch_taken_0x43b87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B87Cu;
        // 0x43b880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b87c) {
            ctx->pc = 0x43B888u;
            goto label_43b888;
        }
    }
    ctx->pc = 0x43B884u;
    // 0x43b884: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x43b884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_43b888:
    // 0x43b888: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x43b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x43b88c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x43b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x43b890: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x43b890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43b894: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x43b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x43b898: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x43b898u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x43b89c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43b89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43b8a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b8a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x43b8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43b8a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b8ac: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x43b8acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x43b8b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x43B8B0u;
    {
        const bool branch_taken_0x43b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B8B0u;
        // 0x43b8b4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b8b0) {
            ctx->pc = 0x43B968u;
            goto label_43b968;
        }
    }
    ctx->pc = 0x43B8B8u;
label_43b8b8:
    // 0x43b8b8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x43b8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x43b8bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43B8BCu;
    {
        const bool branch_taken_0x43b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B8BCu;
        // 0x43b8c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b8bc) {
            ctx->pc = 0x43B8CCu;
            goto label_43b8cc;
        }
    }
    ctx->pc = 0x43B8C4u;
    // 0x43b8c4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x43b8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x43b8c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x43b8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_43b8cc:
    // 0x43b8cc: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x43b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x43b8d0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x43B8D0u;
    {
        const bool branch_taken_0x43b8d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B8D0u;
        // 0x43b8d4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b8d0) {
            ctx->pc = 0x43B938u;
            goto label_43b938;
        }
    }
    ctx->pc = 0x43B8D8u;
    // 0x43b8d8: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x43b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x43b8dc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x43b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x43b8e0: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x43b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x43b8e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43b8e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b8ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43b8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43b8f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43b8f4: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x43b8f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x43b8f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b8fc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x43b8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x43b900: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x43b900u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x43b904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x43B904u;
    {
        const bool branch_taken_0x43b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B904u;
        // 0x43b908: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b904) {
            ctx->pc = 0x43B910u;
            goto label_43b910;
        }
    }
    ctx->pc = 0x43B90Cu;
    // 0x43b90c: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x43b90cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_43b910:
    // 0x43b910: 0x61023  negu        $v0, $a2
    ctx->pc = 0x43b910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x43b914: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x43b914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x43b918: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x43b918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x43b91c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b920: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x43b920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43b924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43b928: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x43b928u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x43b92c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b930: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x43B930u;
    {
        const bool branch_taken_0x43b930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B930u;
        // 0x43b934: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b930) {
            ctx->pc = 0x43B968u;
            goto label_43b968;
        }
    }
    ctx->pc = 0x43B938u;
label_43b938:
    // 0x43b938: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x43b938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x43b93c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b940: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43b940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43b944: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x43b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x43b948: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x43b948u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x43b94c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43b950: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x43b950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x43b954: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x43b954u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x43b958: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b95c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x43b95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43b960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43b960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43b964: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x43b964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_43b968:
    // 0x43b968: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x43b968u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x43b96c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43b96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b970: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x43b970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43b974: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x43b974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43b978: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43b978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43b97c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x43b97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43b980: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x43b980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b988: 0x3e00008  jr          $ra
    ctx->pc = 0x43B988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B988u;
        // 0x43b98c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B990u;
}
