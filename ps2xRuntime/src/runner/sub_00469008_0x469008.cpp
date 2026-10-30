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

// Function: sub_00469008
// Address: 0x469008 - 0x469178
void sub_00469008_0x469008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469008_0x469008");
#endif

    ctx->pc = 0x469008u;

    // 0x469008: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x469008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46900c: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x46900cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x469010: 0x10e00057  beqz        $a3, . + 4 + (0x57 << 2)
    ctx->pc = 0x469010u;
    {
        const bool branch_taken_0x469010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x469014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469010u;
        // 0x469014: 0x24a8004c  addiu       $t0, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469010) {
            ctx->pc = 0x469170u;
            goto label_469170;
        }
    }
    ctx->pc = 0x469018u;
    // 0x469018: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x469018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x46901c: 0x85060006  lh          $a2, 0x6($t0)
    ctx->pc = 0x46901cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x469020: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x469020u;
    {
        const bool branch_taken_0x469020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x469024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469020u;
        // 0x469024: 0x8ce30018  lw          $v1, 0x18($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469020) {
            ctx->pc = 0x46903Cu;
            goto label_46903c;
        }
    }
    ctx->pc = 0x469028u;
    // 0x469028: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x469028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x46902c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46902Cu;
    {
        const bool branch_taken_0x46902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46902Cu;
        // 0x469030: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46902c) {
            ctx->pc = 0x469050u;
            goto label_469050;
        }
    }
    ctx->pc = 0x469034u;
    // 0x469034: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x469034u;
    {
        const bool branch_taken_0x469034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469034) {
            ctx->pc = 0x469038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x469034u;
            // 0x469038: 0x8ce2005c  lw          $v0, 0x5C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4690B0u;
            goto label_4690b0;
        }
    }
    ctx->pc = 0x46903Cu;
label_46903c:
    // 0x46903c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x46903cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x469040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x469040u;
    {
        const bool branch_taken_0x469040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469040u;
        // 0x469044: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469040) {
            ctx->pc = 0x469050u;
            goto label_469050;
        }
    }
    ctx->pc = 0x469048u;
    // 0x469048: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x469048u;
    {
        const bool branch_taken_0x469048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469048u;
        // 0x46904c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469048) {
            ctx->pc = 0x46907Cu;
            goto label_46907c;
        }
    }
    ctx->pc = 0x469050u;
label_469050:
    // 0x469050: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x469050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x469054: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x469054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x469058: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x469058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x46905c: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x46905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x469060: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x469060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x469064: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x469064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x469068: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x469068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46906c: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x46906cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x469070: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x469070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x469074: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x469074u;
    {
        const bool branch_taken_0x469074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469074u;
        // 0x469078: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469074) {
            ctx->pc = 0x469158u;
            goto label_469158;
        }
    }
    ctx->pc = 0x46907Cu;
label_46907c:
    // 0x46907c: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x46907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x469080: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x469080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x469084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x469088: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x469088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x46908c: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x46908cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x469090: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x469090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x469094: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x469094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x469098: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x469098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46909c: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x46909cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4690a0: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x4690a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4690a4: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x4690a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4690a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4690A8u;
    {
        const bool branch_taken_0x4690a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4690A8u;
        // 0x4690ac: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4690a8) {
            ctx->pc = 0x469158u;
            goto label_469158;
        }
    }
    ctx->pc = 0x4690B0u;
label_4690b0:
    // 0x4690b0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4690b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4690b4: 0xc33818  mult        $a3, $a2, $v1
    ctx->pc = 0x4690b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4690b8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4690b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4690bc: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x4690bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4690c0: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x4690c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4690c4: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4690c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4690c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4690c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4690cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4690ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4690d0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4690d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4690d4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x4690d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4690d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4690d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4690dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4690dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4690e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4690e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4690e4: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x4690e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x4690e8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x4690e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4690ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4690ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4690f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4690f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4690f4: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x4690f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x4690f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4690f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4690fc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4690fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x469100: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x469100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x469104: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x469104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x469108: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x469108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46910c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x46910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x469110: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x469110u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x469114: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x469114u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x469118: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x469118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x46911c: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x46911cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x469120: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x469120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x469124: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x469124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x469128: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x469128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x46912c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x46912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x469130: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x469130u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x469134: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x469134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x469138: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x469138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46913c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x46913cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x469140: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x469140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x469144: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x469144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x469148: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x469148u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x46914c: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x46914cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x469150: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x469150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x469154: 0x0  nop
    ctx->pc = 0x469154u;
    // NOP
label_469158:
    // 0x469158: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x469158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x46915c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x469160: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x469160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x469164: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x469164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x469168: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x469168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x46916c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x46916cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_469170:
    // 0x469170: 0x3e00008  jr          $ra
    ctx->pc = 0x469170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469178u;
}
