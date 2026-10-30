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

// Function: sub_004CE670
// Address: 0x4ce670 - 0x4ce7a0
void sub_004CE670_0x4ce670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE670_0x4ce670");
#endif

    ctx->pc = 0x4ce670u;

    // 0x4ce670: 0x850019  multu       $a0, $a1
    ctx->pc = 0x4ce670u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4ce674: 0x1012  mflo        $v0
    ctx->pc = 0x4ce674u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4ce678: 0x2010  mfhi        $a0
    ctx->pc = 0x4ce678u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x4ce67c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ce67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ce680: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4ce680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4ce684: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4ce688: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4ce688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4ce68c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x4ce68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4ce690: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4ce690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ce694: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4CE694u;
    {
        const bool branch_taken_0x4ce694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE694u;
        // 0x4ce698: 0x4103e  dsrl32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce694) {
            ctx->pc = 0x4CE6C0u;
            goto label_4ce6c0;
        }
    }
    ctx->pc = 0x4CE69Cu;
    // 0x4ce69c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x4ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x4ce6a0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x4ce6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4ce6a4: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x4ce6a4u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x4ce6a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ce6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ce6ac: 0x441016  dsrlv       $v0, $a0, $v0
    ctx->pc = 0x4ce6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x4ce6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ce6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ce6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ce6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ce6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE6C0u;
label_4ce6c0:
    // 0x4ce6c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CE6C0u;
    {
        const bool branch_taken_0x4ce6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE6C0u;
        // 0x4ce6c4: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce6c0) {
            ctx->pc = 0x4CE6E0u;
            goto label_4ce6e0;
        }
    }
    ctx->pc = 0x4CE6C8u;
    // 0x4ce6c8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4ce6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4ce6cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ce6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ce6d0: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x4ce6d0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4ce6d4: 0x1012  mflo        $v0
    ctx->pc = 0x4ce6d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4ce6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE6E0u;
label_4ce6e0:
    // 0x4ce6e0: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x4ce6e0u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x4ce6e4: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x4ce6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x4ce6e8: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x4ce6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ce6ec: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x4ce6ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4ce6f0: 0x64c02  srl         $t1, $a2, 16
    ctx->pc = 0x4ce6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x4ce6f4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x4ce6f4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4ce6f8: 0x30cbffff  andi        $t3, $a2, 0xFFFF
    ctx->pc = 0x4ce6f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4ce6fc: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x4ce6fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4ce700: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x4ce700u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x4ce704: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x4ce704u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x4ce708: 0x2810  mfhi        $a1
    ctx->pc = 0x4ce708u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x4ce70c: 0x3812  mflo        $a3
    ctx->pc = 0x4ce70cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x4ce710: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4ce710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ce714: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x4ce714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ce718: 0xeb4018  mult        $t0, $a3, $t3
    ctx->pc = 0x4ce718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ce71c: 0xa8182b  sltu        $v1, $a1, $t0
    ctx->pc = 0x4ce71cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4ce720: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4CE720u;
    {
        const bool branch_taken_0x4ce720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce720) {
            ctx->pc = 0x4CE724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE720u;
            // 0x4ce724: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE750u;
            goto label_4ce750;
        }
    }
    ctx->pc = 0x4CE728u;
    // 0x4ce728: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4ce728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4ce72c: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x4ce72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4ce730: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CE730u;
    {
        const bool branch_taken_0x4ce730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE730u;
        // 0x4ce734: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce730) {
            ctx->pc = 0x4CE74Cu;
            goto label_4ce74c;
        }
    }
    ctx->pc = 0x4CE738u;
    // 0x4ce738: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x4ce738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4ce73c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CE73Cu;
    {
        const bool branch_taken_0x4ce73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce73c) {
            ctx->pc = 0x4CE740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE73Cu;
            // 0x4ce740: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE750u;
            goto label_4ce750;
        }
    }
    ctx->pc = 0x4CE744u;
    // 0x4ce744: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ce744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ce748: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4ce748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4ce74c:
    // 0x4ce74c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x4ce74cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4ce750:
    // 0x4ce750: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4ce750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4ce754: 0xa9001b  divu        $zero, $a1, $t1
    ctx->pc = 0x4ce754u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4ce758: 0x1010  mfhi        $v0
    ctx->pc = 0x4ce758u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4ce75c: 0x2812  mflo        $a1
    ctx->pc = 0x4ce75cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x4ce760: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ce760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ce764: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4ce764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ce768: 0xab4018  mult        $t0, $a1, $t3
    ctx->pc = 0x4ce768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4ce76c: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x4ce76cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4ce770: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CE770u;
    {
        const bool branch_taken_0x4ce770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE770u;
        // 0x4ce774: 0x73c00  sll         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce770) {
            ctx->pc = 0x4CE794u;
            goto label_4ce794;
        }
    }
    ctx->pc = 0x4CE778u;
    // 0x4ce778: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4ce778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ce77c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x4ce77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4ce780: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CE780u;
    {
        const bool branch_taken_0x4ce780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE780u;
        // 0x4ce784: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce780) {
            ctx->pc = 0x4CE794u;
            goto label_4ce794;
        }
    }
    ctx->pc = 0x4CE788u;
    // 0x4ce788: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x4ce788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4ce78c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4CE78Cu;
    {
        const bool branch_taken_0x4ce78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ce78c) {
            ctx->pc = 0x4CE790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE78Cu;
            // 0x4ce790: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE794u;
            goto label_4ce794;
        }
    }
    ctx->pc = 0x4CE794u;
label_4ce794:
    // 0x4ce794: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE794u;
        // 0x4ce798: 0xe51025  or          $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE79Cu;
    // 0x4ce79c: 0x0  nop
    ctx->pc = 0x4ce79cu;
    // NOP
    ctx->pc = 0x4ce7a0u;
}
