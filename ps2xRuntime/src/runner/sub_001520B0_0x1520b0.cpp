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

// Function: sub_001520B0
// Address: 0x1520b0 - 0x1521b8
void sub_001520B0_0x1520b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001520B0_0x1520b0");
#endif

    switch (ctx->pc) {
        case 0x1520f8u: goto label_1520f8;
        case 0x152150u: goto label_152150;
        default: break;
    }

    ctx->pc = 0x1520b0u;

    // 0x1520b0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x1520b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1520b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1520b8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1520b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x1520bc: 0x8d06c5cc  lw          $a2, -0x3A34($t0)
    ctx->pc = 0x1520bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50C5CCu));
    // 0x1520c0: 0x2469d650  addiu       $t1, $v1, -0x29B0
    ctx->pc = 0x1520c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1520c4: 0x244a4668  addiu       $t2, $v0, 0x4668
    ctx->pc = 0x1520c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
    // 0x1520c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1520cc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1520ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1520d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1520d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1520d4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1520d8: 0x12a1025  or          $v0, $t1, $t2
    ctx->pc = 0x1520d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1520dc: 0xac86c5d0  sw          $a2, -0x3A30($a0)
    ctx->pc = 0x1520dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x50C5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5D0u, _value); } while (0);
    // 0x1520e0: 0xaca3c5d4  sw          $v1, -0x3A2C($a1)
    ctx->pc = 0x1520e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C5D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5D4u, _value); } while (0);
    // 0x1520e4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1520e8: 0xad00c5cc  sw          $zero, -0x3A34($t0)
    ctx->pc = 0x1520e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C5CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5CCu, _value); } while (0);
    // 0x1520ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1520ECu;
    {
        const bool branch_taken_0x1520ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520ECu;
        // 0x1520f0: 0xace0c5d8  sw          $zero, -0x3A28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520ec) {
            ctx->pc = 0x15214Cu;
            goto label_15214c;
        }
    }
    ctx->pc = 0x1520F4u;
    // 0x1520f4: 0x25220080  addiu       $v0, $t1, 0x80
    ctx->pc = 0x1520f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
label_1520f8:
    // 0x1520f8: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x1520f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1520fc: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x1520fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x152100: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x152100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152104: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x152104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152108: 0x69250017  ldl         $a1, 0x17($t1)
    ctx->pc = 0x152108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x15210c: 0x6d250010  ldr         $a1, 0x10($t1)
    ctx->pc = 0x15210cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x152110: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x152110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x152114: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x152114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x152118: 0xb1430007  sdl         $v1, 0x7($t2)
    ctx->pc = 0x152118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15211c: 0xb5430000  sdr         $v1, 0x0($t2)
    ctx->pc = 0x15211cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152120: 0xb144000f  sdl         $a0, 0xF($t2)
    ctx->pc = 0x152120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152124: 0xb5440008  sdr         $a0, 0x8($t2)
    ctx->pc = 0x152124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152128: 0xb1450017  sdl         $a1, 0x17($t2)
    ctx->pc = 0x152128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15212c: 0xb5450010  sdr         $a1, 0x10($t2)
    ctx->pc = 0x15212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152130: 0xb146001f  sdl         $a2, 0x1F($t2)
    ctx->pc = 0x152130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152134: 0xb5460018  sdr         $a2, 0x18($t2)
    ctx->pc = 0x152134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x152138: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x152138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x15213c: 0x1522ffee  bne         $t1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15213Cu;
    {
        const bool branch_taken_0x15213c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x152140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15213Cu;
        // 0x152140: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15213c) {
            ctx->pc = 0x1520F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1520f8;
        }
    }
    ctx->pc = 0x152144u;
    // 0x152144: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152144u;
    {
        const bool branch_taken_0x152144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152144) {
            ctx->pc = 0x15217Cu;
            goto label_15217c;
        }
    }
    ctx->pc = 0x15214Cu;
label_15214c:
    // 0x15214c: 0x25220080  addiu       $v0, $t1, 0x80
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
label_152150:
    // 0x152150: 0xdd230000  ld          $v1, 0x0($t1)
    ctx->pc = 0x152150u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x152154: 0xdd240008  ld          $a0, 0x8($t1)
    ctx->pc = 0x152154u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x152158: 0xdd250010  ld          $a1, 0x10($t1)
    ctx->pc = 0x152158u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x15215c: 0xdd260018  ld          $a2, 0x18($t1)
    ctx->pc = 0x15215cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x152160: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x152160u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x152164: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x152164u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x152168: 0xfd450010  sd          $a1, 0x10($t2)
    ctx->pc = 0x152168u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 5));
    // 0x15216c: 0xfd460018  sd          $a2, 0x18($t2)
    ctx->pc = 0x15216cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 6));
    // 0x152170: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x152174: 0x1522fff6  bne         $t1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x152174u;
    {
        const bool branch_taken_0x152174 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x152178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152174u;
        // 0x152178: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152174) {
            ctx->pc = 0x152150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152150;
        }
    }
    ctx->pc = 0x15217Cu;
label_15217c:
    // 0x15217c: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x15217cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x152180: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x152180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x152184: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x152184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x152188: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x152188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15218c: 0x69240017  ldl         $a0, 0x17($t1)
    ctx->pc = 0x15218cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x152190: 0x6d240010  ldr         $a0, 0x10($t1)
    ctx->pc = 0x152190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x152194: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x152194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x152198: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x152198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15219c: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x15219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1521a0: 0xb143000f  sdl         $v1, 0xF($t2)
    ctx->pc = 0x1521a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1521a4: 0xb5430008  sdr         $v1, 0x8($t2)
    ctx->pc = 0x1521a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1521a8: 0xb1440017  sdl         $a0, 0x17($t2)
    ctx->pc = 0x1521a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1521ac: 0xb5440010  sdr         $a0, 0x10($t2)
    ctx->pc = 0x1521acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1521b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1521B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1521B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521B0u;
        // 0x1521b4: 0xad450018  sw          $a1, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1521B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1521B8u;
}
