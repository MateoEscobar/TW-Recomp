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

// Function: sub_004A8FE0
// Address: 0x4a8fe0 - 0x4a9158
void sub_004A8FE0_0x4a8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8FE0_0x4a8fe0");
#endif

    switch (ctx->pc) {
        case 0x4a9120u: goto label_4a9120;
        case 0x4a912cu: goto label_4a912c;
        default: break;
    }

    ctx->pc = 0x4a8fe0u;

    // 0x4a8fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a8fe4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a8fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8fe8: 0x11000046  beqz        $t0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4A8FE8u;
    {
        const bool branch_taken_0x4a8fe8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FE8u;
        // 0x4a8fec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8fe8) {
            ctx->pc = 0x4A9104u;
            goto label_4a9104;
        }
    }
    ctx->pc = 0x4A8FF0u;
    // 0x4a8ff0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a8ff4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a8ff8: 0x2445ad18  addiu       $a1, $v0, -0x52E8
    ctx->pc = 0x4a8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a8ffc: 0x8ca30124  lw          $v1, 0x124($a1)
    ctx->pc = 0x4a8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AE3Cu));
    // 0x4a9000: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A9000u;
    {
        const bool branch_taken_0x4a9000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9000u;
        // 0x4a9004: 0x8f828a88  lw          $v0, -0x7578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9000) {
            ctx->pc = 0x4A906Cu;
            goto label_4a906c;
        }
    }
    ctx->pc = 0x4A9008u;
    // 0x4a9008: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a900c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x4a900cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a9010: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x4a9010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a9014: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x4a9014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a9018: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x4a9018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a901c: 0x6845001b  ldl         $a1, 0x1B($v0)
    ctx->pc = 0x4a901cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a9020: 0x6c450014  ldr         $a1, 0x14($v0)
    ctx->pc = 0x4a9020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a9024: 0x68460023  ldl         $a2, 0x23($v0)
    ctx->pc = 0x4a9024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4a9028: 0x6c46001c  ldr         $a2, 0x1C($v0)
    ctx->pc = 0x4a9028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4a902c: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x4a902cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9030: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x4a9030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9034: 0xb104000f  sdl         $a0, 0xF($t0)
    ctx->pc = 0x4a9034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9038: 0xb5040008  sdr         $a0, 0x8($t0)
    ctx->pc = 0x4a9038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a903c: 0xb1050017  sdl         $a1, 0x17($t0)
    ctx->pc = 0x4a903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9040: 0xb5050010  sdr         $a1, 0x10($t0)
    ctx->pc = 0x4a9040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9044: 0xb106001f  sdl         $a2, 0x1F($t0)
    ctx->pc = 0x4a9044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9048: 0xb5060018  sdr         $a2, 0x18($t0)
    ctx->pc = 0x4a9048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a904c: 0x6843002b  ldl         $v1, 0x2B($v0)
    ctx->pc = 0x4a904cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a9050: 0x6c430024  ldr         $v1, 0x24($v0)
    ctx->pc = 0x4a9050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a9054: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x4a9054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x4a9058: 0xb1030027  sdl         $v1, 0x27($t0)
    ctx->pc = 0x4a9058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a905c: 0xb5030020  sdr         $v1, 0x20($t0)
    ctx->pc = 0x4a905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a9060: 0xad040028  sw          $a0, 0x28($t0)
    ctx->pc = 0x4a9060u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 4));
    // 0x4a9064: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4A9064u;
    {
        const bool branch_taken_0x4a9064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9064u;
        // 0x4a9068: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9064) {
            ctx->pc = 0x4A9130u;
            goto label_4a9130;
        }
    }
    ctx->pc = 0x4A906Cu;
label_4a906c:
    // 0x4a906c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a9070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9074: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A9074u;
    {
        const bool branch_taken_0x4a9074 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9074u;
        // 0x4a9078: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9074) {
            ctx->pc = 0x4A9090u;
            goto label_4a9090;
        }
    }
    ctx->pc = 0x4A907Cu;
    // 0x4a907c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9080: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a9080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a9084: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a9084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a9088: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4A9088u;
    {
        const bool branch_taken_0x4a9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9088u;
        // 0x4a908c: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9088) {
            ctx->pc = 0x4A9118u;
            goto label_4a9118;
        }
    }
    ctx->pc = 0x4A9090u;
label_4a9090:
    // 0x4a9090: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a9090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a9094: 0x24ac6ed8  addiu       $t4, $a1, 0x6ED8
    ctx->pc = 0x4a9094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
    // 0x4a9098: 0x89890003  lwl         $t1, 0x3($t4)
    ctx->pc = 0x4a9098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x4a909c: 0x99890000  lwr         $t1, 0x0($t4)
    ctx->pc = 0x4a909cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x4a90a0: 0xaba90003  swl         $t1, 0x3($sp)
    ctx->pc = 0x4a90a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90a4: 0xbba90000  swr         $t1, 0x0($sp)
    ctx->pc = 0x4a90a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a90a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a90ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a90b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a90b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4a90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a90b8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a90bc: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x4a90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x4a90c0: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x4a90c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x4a90c4: 0xad070018  sw          $a3, 0x18($t0)
    ctx->pc = 0x4a90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x4a90c8: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x4a90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x4a90cc: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x4a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x4a90d0: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x4a90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x4a90d4: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x4a90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x4a90d8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x4a90d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4a90dc: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x4a90dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4a90e0: 0xa9020023  swl         $v0, 0x23($t0)
    ctx->pc = 0x4a90e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90e4: 0xb9020020  swr         $v0, 0x20($t0)
    ctx->pc = 0x4a90e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90e8: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x4a90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x4a90ec: 0x8ba60003  lwl         $a2, 0x3($sp)
    ctx->pc = 0x4a90ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x4a90f0: 0x9ba60000  lwr         $a2, 0x0($sp)
    ctx->pc = 0x4a90f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x4a90f4: 0xa906002b  swl         $a2, 0x2B($t0)
    ctx->pc = 0x4a90f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90f8: 0xb9060028  swr         $a2, 0x28($t0)
    ctx->pc = 0x4a90f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a90fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A90FCu;
    {
        const bool branch_taken_0x4a90fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90FCu;
        // 0x4a9100: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a90fc) {
            ctx->pc = 0x4A9130u;
            goto label_4a9130;
        }
    }
    ctx->pc = 0x4A9104u;
label_4a9104:
    // 0x4a9104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9108: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a9108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a910c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a910cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a9110: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x4a9110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x4a9114: 0x0  nop
    ctx->pc = 0x4a9114u;
    // NOP
label_4a9118:
    // 0x4a9118: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A9118u;
    SET_GPR_U32(ctx, 31, 0x4A9120u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A9118u, 0x4A9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9120u;
label_4a9120:
    // 0x4a9120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9124: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A9124u;
    SET_GPR_U32(ctx, 31, 0x4A912Cu);
    ctx->pc = 0x4A9128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9124u;
    // 0x4a9128: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A9124u, 0x4A912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A912Cu;
label_4a912c:
    // 0x4a912c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a912cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9130:
    // 0x4a9130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a9130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9134: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9134u;
        // 0x4a9138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A913Cu;
    // 0x4a913c: 0x0  nop
    ctx->pc = 0x4a913cu;
    // NOP
    // 0x4a9140: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4a9140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4a9144: 0x0  nop
    ctx->pc = 0x4a9144u;
    // NOP
    // 0x4a9148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4a9148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4a914c: 0x0  nop
    ctx->pc = 0x4a914cu;
    // NOP
    // 0x4a9150: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4a9150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a9154: 0x0  nop
    ctx->pc = 0x4a9154u;
    // NOP
    ctx->pc = 0x4a9158u;
}
