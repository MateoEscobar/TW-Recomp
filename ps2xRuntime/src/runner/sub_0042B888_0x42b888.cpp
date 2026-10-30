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

// Function: sub_0042B888
// Address: 0x42b888 - 0x42b9b8
void sub_0042B888_0x42b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B888_0x42b888");
#endif

    ctx->pc = 0x42b888u;

    // 0x42b888: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42b88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42b88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b890: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x42b890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x42b894: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x42b894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42b898: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B898u;
    {
        const bool branch_taken_0x42b898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B898u;
        // 0x42b89c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b898) {
            ctx->pc = 0x42B8B4u;
            goto label_42b8b4;
        }
    }
    ctx->pc = 0x42B8A0u;
    // 0x42b8a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42b8a4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x42b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x42b8a8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x42b8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x42b8ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x42B8ACu;
    {
        const bool branch_taken_0x42b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8ACu;
        // 0x42b8b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b8ac) {
            ctx->pc = 0x42B958u;
            goto label_42b958;
        }
    }
    ctx->pc = 0x42B8B4u;
label_42b8b4:
    // 0x42b8b4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x42b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x42b8b8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x42B8B8u;
    {
        const bool branch_taken_0x42b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b8b8) {
            ctx->pc = 0x42B8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B8B8u;
            // 0x42b8bc: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B914u;
            goto label_42b914;
        }
    }
    ctx->pc = 0x42B8C0u;
    // 0x42b8c0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x42b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x42b8c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42B8C4u;
    {
        const bool branch_taken_0x42b8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b8c4) {
            ctx->pc = 0x42B8D4u;
            goto label_42b8d4;
        }
    }
    ctx->pc = 0x42B8CCu;
    // 0x42b8cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x42B8CCu;
    {
        const bool branch_taken_0x42b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8CCu;
        // 0x42b8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b8cc) {
            ctx->pc = 0x42B958u;
            goto label_42b958;
        }
    }
    ctx->pc = 0x42B8D4u;
label_42b8d4:
    // 0x42b8d4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x42B8D4u;
    {
        const bool branch_taken_0x42b8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b8d4) {
            ctx->pc = 0x42B958u;
            goto label_42b958;
        }
    }
    ctx->pc = 0x42B8DCu;
    // 0x42b8dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x42b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42b8e0: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x42b8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x42b8e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B8E4u;
    {
        const bool branch_taken_0x42b8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8E4u;
        // 0x42b8e8: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b8e4) {
            ctx->pc = 0x42B904u;
            goto label_42b904;
        }
    }
    ctx->pc = 0x42B8ECu;
    // 0x42b8ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42b8f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x42b8f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x42b8f4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x42B8F4u;
    {
        const bool branch_taken_0x42b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8F4u;
        // 0x42b8f8: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b8f4) {
            ctx->pc = 0x42B954u;
            goto label_42b954;
        }
    }
    ctx->pc = 0x42B8FCu;
    // 0x42b8fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x42B8FCu;
    {
        const bool branch_taken_0x42b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8FCu;
        // 0x42b900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b8fc) {
            ctx->pc = 0x42B954u;
            goto label_42b954;
        }
    }
    ctx->pc = 0x42B904u;
label_42b904:
    // 0x42b904: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x42b904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x42b908: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B908u;
    {
        const bool branch_taken_0x42b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B908u;
        // 0x42b90c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b908) {
            ctx->pc = 0x42B91Cu;
            goto label_42b91c;
        }
    }
    ctx->pc = 0x42B910u;
    // 0x42b910: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x42b910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_42b914:
    // 0x42b914: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x42B914u;
    {
        const bool branch_taken_0x42b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B914u;
        // 0x42b918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b914) {
            ctx->pc = 0x42B958u;
            goto label_42b958;
        }
    }
    ctx->pc = 0x42B91Cu;
label_42b91c:
    // 0x42b91c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x42b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x42b920: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x42b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x42b924: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B924u;
    {
        const bool branch_taken_0x42b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42b924) {
            ctx->pc = 0x42B928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B924u;
            // 0x42b928: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B938u;
            goto label_42b938;
        }
    }
    ctx->pc = 0x42B92Cu;
    // 0x42b92c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x42b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x42b930: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x42b930u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x42b934: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x42b934u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_42b938:
    // 0x42b938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b93c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x42b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x42b940: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x42b940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42b944: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B944u;
    {
        const bool branch_taken_0x42b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b944) {
            ctx->pc = 0x42B948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B944u;
            // 0x42b948: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B958u;
            goto label_42b958;
        }
    }
    ctx->pc = 0x42B94Cu;
    // 0x42b94c: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x42b94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x42b950: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x42b950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42b954:
    // 0x42b954: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x42b954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_42b958:
    // 0x42b958: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x42b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x42b95c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x42b95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x42b960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b964: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x42b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x42b968: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x42b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x42b96c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x42b96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x42b970: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x42b970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x42b974: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x42b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x42b978: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x42b978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x42b97c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b980: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b984: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b988: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b98c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b990: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x42b990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x42b994: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x42b994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x42b998: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x42b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b99c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x42b99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x42b9a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x42b9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x42b9a4: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x42b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x42b9a8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x42b9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x42b9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x42B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B9ACu;
        // 0x42b9b0: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B9B4u;
    // 0x42b9b4: 0x0  nop
    ctx->pc = 0x42b9b4u;
    // NOP
    ctx->pc = 0x42b9b8u;
}
