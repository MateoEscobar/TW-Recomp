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

// Function: sub_0042B2B8
// Address: 0x42b2b8 - 0x42b888
void sub_0042B2B8_0x42b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B2B8_0x42b2b8");
#endif

    ctx->pc = 0x42b2b8u;

    // 0x42b2b8: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x42b2b8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x42b2bc: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x42b2bcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x42b2c0: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x42b2c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x42b2c4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x42b2c4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x42b2c8: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x42b2c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x42b2cc: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x42b2ccu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x42b2d0: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x42B2D0u;
    {
        const bool branch_taken_0x42b2d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2D0u;
        // 0x42b2d4: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2d0) {
            ctx->pc = 0x42B69Cu;
            goto label_42b69c;
        }
    }
    ctx->pc = 0x42B2D8u;
    // 0x42b2d8: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x42b2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b2dc: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x42B2DCu;
    {
        const bool branch_taken_0x42b2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2DCu;
        // 0x42b2e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2dc) {
            ctx->pc = 0x42B42Cu;
            goto label_42b42c;
        }
    }
    ctx->pc = 0x42B2E4u;
    // 0x42b2e4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x42b2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b2e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B2E8u;
    {
        const bool branch_taken_0x42b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2E8u;
        // 0x42b2ec: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2e8) {
            ctx->pc = 0x42B300u;
            goto label_42b300;
        }
    }
    ctx->pc = 0x42B2F0u;
    // 0x42b2f0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x42b2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x42b2f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x42b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42b2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x42B2F8u;
    {
        const bool branch_taken_0x42b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2F8u;
        // 0x42b2fc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2f8) {
            ctx->pc = 0x42B318u;
            goto label_42b318;
        }
    }
    ctx->pc = 0x42B300u;
label_42b300:
    // 0x42b300: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x42b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x42b304: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b308: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x42b308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42b30c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x42b30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b310: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x42b310u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x42b314: 0x0  nop
    ctx->pc = 0x42b314u;
    // NOP
label_42b318:
    // 0x42b318: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42b31c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x42b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x42b320: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x42b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x42b324: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x42b324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x42b328: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x42b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x42b32c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x42b32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42b330: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x42b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x42b334: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x42b334u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x42b338: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B338u;
    {
        const bool branch_taken_0x42b338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B338u;
        // 0x42b33c: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b338) {
            ctx->pc = 0x42B354u;
            goto label_42b354;
        }
    }
    ctx->pc = 0x42B340u;
    // 0x42b340: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x42b340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b344: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x42b344u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x42b348: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x42b348u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b34c: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x42b34cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x42b350: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x42b350u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_42b354:
    // 0x42b354: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x42b354u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x42b358: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x42b358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x42b35c: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x42b35cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x42b360: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x42b360u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x42b364: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B364u;
    {
        const bool branch_taken_0x42b364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b364) {
            ctx->pc = 0x42B368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B364u;
            // 0x42b368: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B36Cu;
            goto label_42b36c;
        }
    }
    ctx->pc = 0x42B36Cu;
label_42b36c:
    // 0x42b36c: 0x1012  mflo        $v0
    ctx->pc = 0x42b36cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b370: 0x1810  mfhi        $v1
    ctx->pc = 0x42b370u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b374: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x42b374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b378: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b37c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b380: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b380u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b384: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x42b384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b388: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b38c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b390: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42B390u;
    {
        const bool branch_taken_0x42b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b390) {
            ctx->pc = 0x42B394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B390u;
            // 0x42b394: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B3C4u;
            goto label_42b3c4;
        }
    }
    ctx->pc = 0x42B398u;
    // 0x42b398: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b39c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b3a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B3A0u;
    {
        const bool branch_taken_0x42b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3A0u;
        // 0x42b3a4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b3a0) {
            ctx->pc = 0x42B3C0u;
            goto label_42b3c0;
        }
    }
    ctx->pc = 0x42B3A8u;
    // 0x42b3a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b3ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B3ACu;
    {
        const bool branch_taken_0x42b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b3ac) {
            ctx->pc = 0x42B3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B3ACu;
            // 0x42b3b0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B3C4u;
            goto label_42b3c4;
        }
    }
    ctx->pc = 0x42B3B4u;
    // 0x42b3b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x42b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x42b3b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b3bc: 0x0  nop
    ctx->pc = 0x42b3bcu;
    // NOP
label_42b3c0:
    // 0x42b3c0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x42b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_42b3c4:
    // 0x42b3c4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B3C4u;
    {
        const bool branch_taken_0x42b3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b3c4) {
            ctx->pc = 0x42B3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B3C4u;
            // 0x42b3c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B3CCu;
            goto label_42b3cc;
        }
    }
    ctx->pc = 0x42B3CCu;
label_42b3cc:
    // 0x42b3cc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x42b3ccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x42b3d0: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x42b3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x42b3d4: 0x1012  mflo        $v0
    ctx->pc = 0x42b3d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b3d8: 0x1810  mfhi        $v1
    ctx->pc = 0x42b3d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42b3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b3e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b3e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b3e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b3e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b3ec: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x42b3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b3f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b3f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b3f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B3F8u;
    {
        const bool branch_taken_0x42b3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3F8u;
        // 0x42b3fc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b3f8) {
            ctx->pc = 0x42B418u;
            goto label_42b418;
        }
    }
    ctx->pc = 0x42B400u;
    // 0x42b400: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B404u;
    {
        const bool branch_taken_0x42b404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B404u;
        // 0x42b408: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b404) {
            ctx->pc = 0x42B418u;
            goto label_42b418;
        }
    }
    ctx->pc = 0x42B40Cu;
    // 0x42b40c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b410: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B410u;
    {
        const bool branch_taken_0x42b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b410) {
            ctx->pc = 0x42B414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B410u;
            // 0x42b414: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B418u;
            goto label_42b418;
        }
    }
    ctx->pc = 0x42B418u;
label_42b418:
    // 0x42b418: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x42b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x42b41c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b420: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42b420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42b424: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x42B424u;
    {
        const bool branch_taken_0x42b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B424u;
        // 0x42b428: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b424) {
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B42Cu;
label_42b42c:
    // 0x42b42c: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x42B42Cu;
    {
        const bool branch_taken_0x42b42c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B42Cu;
        // 0x42b430: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b42c) {
            ctx->pc = 0x42B458u;
            goto label_42b458;
        }
    }
    ctx->pc = 0x42B434u;
    // 0x42b434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42b438: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B438u;
    {
        const bool branch_taken_0x42b438 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b438) {
            ctx->pc = 0x42B43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B438u;
            // 0x42b43c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B440u;
            goto label_42b440;
        }
    }
    ctx->pc = 0x42B440u;
label_42b440:
    // 0x42b440: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x42b440u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x42b444: 0x1012  mflo        $v0
    ctx->pc = 0x42b444u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b448: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x42b448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b44c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x42b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x42b450: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x42b450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b454: 0x0  nop
    ctx->pc = 0x42b454u;
    // NOP
label_42b458:
    // 0x42b458: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B458u;
    {
        const bool branch_taken_0x42b458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B458u;
        // 0x42b45c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b458) {
            ctx->pc = 0x42B470u;
            goto label_42b470;
        }
    }
    ctx->pc = 0x42B460u;
    // 0x42b460: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x42b460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x42b464: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x42b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42b468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x42B468u;
    {
        const bool branch_taken_0x42b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B468u;
        // 0x42b46c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b468) {
            ctx->pc = 0x42B488u;
            goto label_42b488;
        }
    }
    ctx->pc = 0x42B470u;
label_42b470:
    // 0x42b470: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x42b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x42b474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b478: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x42b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42b47c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x42b47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b480: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x42b480u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x42b484: 0x0  nop
    ctx->pc = 0x42b484u;
    // NOP
label_42b488:
    // 0x42b488: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42b48c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x42b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x42b490: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x42b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x42b494: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x42b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x42b498: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x42b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x42b49c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x42b49cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42b4a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x42b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x42b4a4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x42b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x42b4a8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B4A8u;
    {
        const bool branch_taken_0x42b4a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B4A8u;
        // 0x42b4ac: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b4a8) {
            ctx->pc = 0x42B4C4u;
            goto label_42b4c4;
        }
    }
    ctx->pc = 0x42B4B0u;
    // 0x42b4b0: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x42b4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x42b4b4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x42b4b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42b4b8: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x42b4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x42b4bc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x42B4BCu;
    {
        const bool branch_taken_0x42b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B4BCu;
        // 0x42b4c0: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b4bc) {
            ctx->pc = 0x42B5C8u;
            goto label_42b5c8;
        }
    }
    ctx->pc = 0x42B4C4u;
label_42b4c4:
    // 0x42b4c4: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x42b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b4c8: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x42b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x42b4cc: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x42b4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b4d0: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x42b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x42b4d4: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x42b4d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b4d8: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x42b4d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x42b4dc: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x42b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x42b4e0: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x42b4e0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x42b4e4: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x42b4e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x42b4e8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x42b4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b4ec: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x42b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x42b4f0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B4F0u;
    {
        const bool branch_taken_0x42b4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b4f0) {
            ctx->pc = 0x42B4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B4F0u;
            // 0x42b4f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B4F8u;
            goto label_42b4f8;
        }
    }
    ctx->pc = 0x42B4F8u;
label_42b4f8:
    // 0x42b4f8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x42b4f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b4fc: 0x1012  mflo        $v0
    ctx->pc = 0x42b4fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b500: 0x1810  mfhi        $v1
    ctx->pc = 0x42b500u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b504: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x42b504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b508: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b50c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b510: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b510u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b514: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x42b514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b518: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b51c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b520: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42B520u;
    {
        const bool branch_taken_0x42b520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b520) {
            ctx->pc = 0x42B524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B520u;
            // 0x42b524: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B554u;
            goto label_42b554;
        }
    }
    ctx->pc = 0x42B528u;
    // 0x42b528: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b52c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b530: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B530u;
    {
        const bool branch_taken_0x42b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B530u;
        // 0x42b534: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b530) {
            ctx->pc = 0x42B550u;
            goto label_42b550;
        }
    }
    ctx->pc = 0x42B538u;
    // 0x42b538: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b53c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B53Cu;
    {
        const bool branch_taken_0x42b53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b53c) {
            ctx->pc = 0x42B540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B53Cu;
            // 0x42b540: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B554u;
            goto label_42b554;
        }
    }
    ctx->pc = 0x42B544u;
    // 0x42b544: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x42b544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x42b548: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b54c: 0x0  nop
    ctx->pc = 0x42b54cu;
    // NOP
label_42b550:
    // 0x42b550: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x42b550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_42b554:
    // 0x42b554: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B554u;
    {
        const bool branch_taken_0x42b554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b554) {
            ctx->pc = 0x42B558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B554u;
            // 0x42b558: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B55Cu;
            goto label_42b55c;
        }
    }
    ctx->pc = 0x42B55Cu;
label_42b55c:
    // 0x42b55c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x42b55cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x42b560: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x42b560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x42b564: 0x1012  mflo        $v0
    ctx->pc = 0x42b564u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b568: 0x1810  mfhi        $v1
    ctx->pc = 0x42b568u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b56c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42b56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b570: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b574: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b578: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b578u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b57c: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x42b57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b580: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b584: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b588: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42B588u;
    {
        const bool branch_taken_0x42b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B588u;
        // 0x42b58c: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b588) {
            ctx->pc = 0x42B5B8u;
            goto label_42b5b8;
        }
    }
    ctx->pc = 0x42B590u;
    // 0x42b590: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b594: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b598: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B598u;
    {
        const bool branch_taken_0x42b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B598u;
        // 0x42b59c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b598) {
            ctx->pc = 0x42B5B4u;
            goto label_42b5b4;
        }
    }
    ctx->pc = 0x42B5A0u;
    // 0x42b5a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b5a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B5A4u;
    {
        const bool branch_taken_0x42b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B5A4u;
        // 0x42b5a8: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b5a4) {
            ctx->pc = 0x42B5B8u;
            goto label_42b5b8;
        }
    }
    ctx->pc = 0x42B5ACu;
    // 0x42b5ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x42b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x42b5b0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_42b5b4:
    // 0x42b5b4: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x42b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_42b5b8:
    // 0x42b5b8: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x42b5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x42b5bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b5c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42b5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42b5c4: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x42b5c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_42b5c8:
    // 0x42b5c8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x42b5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b5cc: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x42b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x42b5d0: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x42b5d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x42b5d4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x42b5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b5d8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B5D8u;
    {
        const bool branch_taken_0x42b5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b5d8) {
            ctx->pc = 0x42B5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B5D8u;
            // 0x42b5dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B5E0u;
            goto label_42b5e0;
        }
    }
    ctx->pc = 0x42B5E0u;
label_42b5e0:
    // 0x42b5e0: 0x1012  mflo        $v0
    ctx->pc = 0x42b5e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b5e4: 0x1810  mfhi        $v1
    ctx->pc = 0x42b5e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b5e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x42b5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b5ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b5f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b5f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b5f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b5f8: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x42b5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b5fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b600: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b604: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x42B604u;
    {
        const bool branch_taken_0x42b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b604) {
            ctx->pc = 0x42B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B604u;
            // 0x42b608: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B634u;
            goto label_42b634;
        }
    }
    ctx->pc = 0x42B60Cu;
    // 0x42b60c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x42b610: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b614: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B614u;
    {
        const bool branch_taken_0x42b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B614u;
        // 0x42b618: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b614) {
            ctx->pc = 0x42B630u;
            goto label_42b630;
        }
    }
    ctx->pc = 0x42B61Cu;
    // 0x42b61c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b620: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B620u;
    {
        const bool branch_taken_0x42b620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b620) {
            ctx->pc = 0x42B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B620u;
            // 0x42b624: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B634u;
            goto label_42b634;
        }
    }
    ctx->pc = 0x42B628u;
    // 0x42b628: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x42b628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x42b62c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x42b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_42b630:
    // 0x42b630: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x42b630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_42b634:
    // 0x42b634: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B634u;
    {
        const bool branch_taken_0x42b634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b634) {
            ctx->pc = 0x42B638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B634u;
            // 0x42b638: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B63Cu;
            goto label_42b63c;
        }
    }
    ctx->pc = 0x42B63Cu;
label_42b63c:
    // 0x42b63c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x42b63cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x42b640: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x42b640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x42b644: 0x1012  mflo        $v0
    ctx->pc = 0x42b644u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b648: 0x1810  mfhi        $v1
    ctx->pc = 0x42b648u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b64c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b650: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b654: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b658: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b65c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x42b65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42b660: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b664: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B668u;
    {
        const bool branch_taken_0x42b668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B668u;
        // 0x42b66c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b668) {
            ctx->pc = 0x42B688u;
            goto label_42b688;
        }
    }
    ctx->pc = 0x42B670u;
    // 0x42b670: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x42b670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B674u;
    {
        const bool branch_taken_0x42b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B674u;
        // 0x42b678: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b674) {
            ctx->pc = 0x42B688u;
            goto label_42b688;
        }
    }
    ctx->pc = 0x42B67Cu;
    // 0x42b67c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b680: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B680u;
    {
        const bool branch_taken_0x42b680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b680) {
            ctx->pc = 0x42B684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B680u;
            // 0x42b684: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B688u;
            goto label_42b688;
        }
    }
    ctx->pc = 0x42B688u;
label_42b688:
    // 0x42b688: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x42b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x42b68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b690: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42b690u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42b694: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x42B694u;
    {
        const bool branch_taken_0x42b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B694u;
        // 0x42b698: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b694) {
            ctx->pc = 0x42B870u;
            goto label_42b870;
        }
    }
    ctx->pc = 0x42B69Cu;
label_42b69c:
    // 0x42b69c: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x42b69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42b6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42B6A0u;
    {
        const bool branch_taken_0x42b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B6A0u;
        // 0x42b6a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b6a0) {
            ctx->pc = 0x42B6B0u;
            goto label_42b6b0;
        }
    }
    ctx->pc = 0x42B6A8u;
    // 0x42b6a8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x42B6A8u;
    {
        const bool branch_taken_0x42b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B6A8u;
        // 0x42b6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b6a8) {
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B6B0u;
label_42b6b0:
    // 0x42b6b0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x42b6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42b6b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B6B4u;
    {
        const bool branch_taken_0x42b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B6B4u;
        // 0x42b6b8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b6b4) {
            ctx->pc = 0x42B6D0u;
            goto label_42b6d0;
        }
    }
    ctx->pc = 0x42B6BCu;
    // 0x42b6bc: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x42b6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x42b6c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x42b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42b6c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x42B6C4u;
    {
        const bool branch_taken_0x42b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B6C4u;
        // 0x42b6c8: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b6c4) {
            ctx->pc = 0x42B6E8u;
            goto label_42b6e8;
        }
    }
    ctx->pc = 0x42B6CCu;
    // 0x42b6cc: 0x0  nop
    ctx->pc = 0x42b6ccu;
    // NOP
label_42b6d0:
    // 0x42b6d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x42b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x42b6d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42b6d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x42b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42b6dc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x42b6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42b6e0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x42b6e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x42b6e4: 0x0  nop
    ctx->pc = 0x42b6e4u;
    // NOP
label_42b6e8:
    // 0x42b6e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42b6ec: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x42b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x42b6f0: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x42b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x42b6f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x42b6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x42b6f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x42b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x42b6fc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x42b6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42b700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x42b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x42b704: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x42b704u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x42b708: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42B708u;
    {
        const bool branch_taken_0x42b708 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b708) {
            ctx->pc = 0x42B70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B708u;
            // 0x42b70c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B730u;
            goto label_42b730;
        }
    }
    ctx->pc = 0x42B710u;
    // 0x42b710: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x42b710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x42b714: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x42B714u;
    {
        const bool branch_taken_0x42b714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B714u;
        // 0x42b718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b714) {
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B71Cu;
    // 0x42b71c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x42b71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x42b720: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x42B720u;
    {
        const bool branch_taken_0x42b720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B720u;
        // 0x42b724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b720) {
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B728u;
    // 0x42b728: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x42B728u;
    {
        const bool branch_taken_0x42b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B728u;
        // 0x42b72c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b728) {
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B730u;
label_42b730:
    // 0x42b730: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x42b730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b734: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x42b734u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x42b738: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x42b738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x42b73c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x42b73cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x42b740: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x42b740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b744: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x42b744u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x42b748: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x42b748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x42b74c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x42b74cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b750: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x42b750u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x42b754: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x42b754u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x42b758: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x42b758u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x42b75c: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x42b75cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x42b760: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x42b760u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x42b764: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B764u;
    {
        const bool branch_taken_0x42b764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b764) {
            ctx->pc = 0x42B768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B764u;
            // 0x42b768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B76Cu;
            goto label_42b76c;
        }
    }
    ctx->pc = 0x42B76Cu;
label_42b76c:
    // 0x42b76c: 0x1012  mflo        $v0
    ctx->pc = 0x42b76cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b770: 0x1810  mfhi        $v1
    ctx->pc = 0x42b770u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b774: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x42b774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b778: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b77c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b780: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b784: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x42b784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x42b788: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b78c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x42b78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42b790: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42B790u;
    {
        const bool branch_taken_0x42b790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b790) {
            ctx->pc = 0x42B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B790u;
            // 0x42b794: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B7C4u;
            goto label_42b7c4;
        }
    }
    ctx->pc = 0x42B798u;
    // 0x42b798: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x42b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x42b79c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x42b79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42b7a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B7A0u;
    {
        const bool branch_taken_0x42b7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B7A0u;
        // 0x42b7a4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b7a0) {
            ctx->pc = 0x42B7C0u;
            goto label_42b7c0;
        }
    }
    ctx->pc = 0x42B7A8u;
    // 0x42b7a8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x42b7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42b7ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B7ACu;
    {
        const bool branch_taken_0x42b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7ac) {
            ctx->pc = 0x42B7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B7ACu;
            // 0x42b7b0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B7C4u;
            goto label_42b7c4;
        }
    }
    ctx->pc = 0x42B7B4u;
    // 0x42b7b4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x42b7b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x42b7b8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x42b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x42b7bc: 0x0  nop
    ctx->pc = 0x42b7bcu;
    // NOP
label_42b7c0:
    // 0x42b7c0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x42b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_42b7c4:
    // 0x42b7c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x42B7C4u;
    {
        const bool branch_taken_0x42b7c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b7c4) {
            ctx->pc = 0x42B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B7C4u;
            // 0x42b7c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B7CCu;
            goto label_42b7cc;
        }
    }
    ctx->pc = 0x42B7CCu;
label_42b7cc:
    // 0x42b7cc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x42b7ccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x42b7d0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x42b7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x42b7d4: 0x1012  mflo        $v0
    ctx->pc = 0x42b7d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x42b7d8: 0x1810  mfhi        $v1
    ctx->pc = 0x42b7d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x42b7dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x42b7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b7e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42b7e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x42b7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x42b7e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42b7e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42b7ec: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x42b7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x42b7f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42b7f4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x42b7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42b7f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42B7F8u;
    {
        const bool branch_taken_0x42b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B7F8u;
        // 0x42b7fc: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b7f8) {
            ctx->pc = 0x42B828u;
            goto label_42b828;
        }
    }
    ctx->pc = 0x42B800u;
    // 0x42b800: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x42b800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x42b804: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x42b804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42b808: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B808u;
    {
        const bool branch_taken_0x42b808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B808u;
        // 0x42b80c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b808) {
            ctx->pc = 0x42B824u;
            goto label_42b824;
        }
    }
    ctx->pc = 0x42B810u;
    // 0x42b810: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x42b810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42b814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42B814u;
    {
        const bool branch_taken_0x42b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B814u;
        // 0x42b818: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b814) {
            ctx->pc = 0x42B828u;
            goto label_42b828;
        }
    }
    ctx->pc = 0x42B81Cu;
    // 0x42b81c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x42b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x42b820: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x42b820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_42b824:
    // 0x42b824: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x42b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_42b828:
    // 0x42b828: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x42b828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x42b82c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42b82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x42b830: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42b830u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42b834: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x42b834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x42b838: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x42b838u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x42b83c: 0x3010  mfhi        $a2
    ctx->pc = 0x42b83cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x42b840: 0x2012  mflo        $a0
    ctx->pc = 0x42b840u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x42b844: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x42b844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x42b848: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B848u;
    {
        const bool branch_taken_0x42b848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b848) {
            ctx->pc = 0x42B84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B848u;
            // 0x42b84c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B868u;
            goto label_42b868;
        }
    }
    ctx->pc = 0x42B850u;
    // 0x42b850: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B850u;
    {
        const bool branch_taken_0x42b850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x42B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B850u;
        // 0x42b854: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b850) {
            ctx->pc = 0x42B870u;
            goto label_42b870;
        }
    }
    ctx->pc = 0x42B858u;
    // 0x42b858: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x42b858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x42b85c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B85Cu;
    {
        const bool branch_taken_0x42b85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B85Cu;
        // 0x42b860: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b85c) {
            ctx->pc = 0x42B874u;
            goto label_42b874;
        }
    }
    ctx->pc = 0x42B864u;
    // 0x42b864: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x42b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_42b868:
    // 0x42b868: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x42b868u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b86c: 0x0  nop
    ctx->pc = 0x42b86cu;
    // NOP
label_42b870:
    // 0x42b870: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x42b870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_42b874:
    // 0x42b874: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x42b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x42b878: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x42b878u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x42b87c: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x42b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x42b880: 0x3e00008  jr          $ra
    ctx->pc = 0x42B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B880u;
        // 0x42b884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B888u;
}
