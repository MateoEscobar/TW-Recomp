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

// Function: sub_004A5FE0
// Address: 0x4a5fe0 - 0x4a6380
void sub_004A5FE0_0x4a5fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5FE0_0x4a5fe0");
#endif

    switch (ctx->pc) {
        case 0x4a6040u: goto label_4a6040;
        case 0x4a6240u: goto label_4a6240;
        case 0x4a6260u: goto label_4a6260;
        case 0x4a62f8u: goto label_4a62f8;
        case 0x4a6348u: goto label_4a6348;
        default: break;
    }

    ctx->pc = 0x4a5fe0u;

label_4a5fe0:
    // 0x4a5fe0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4a5fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4a5fe4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4a5fe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5fe8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4a5fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4a5fec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4a5fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4a5ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a5ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ff4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4a5ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4a5ff8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4a5ffc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a5ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a6000: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4a6000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4a6004: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4a6004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a6008: 0x120a00a9  beq         $s0, $t2, . + 4 + (0xA9 << 2)
    ctx->pc = 0x4A6008u;
    {
        const bool branch_taken_0x4a6008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6008u;
        // 0x4a600c: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6008) {
            ctx->pc = 0x4A62B0u;
            goto label_4a62b0;
        }
    }
    ctx->pc = 0x4A6010u;
    // 0x4a6010: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4a6010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6014: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4a6014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a6018: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x4a6018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a601c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a601cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6020: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a6024: 0x1442818  mult        $a1, $t2, $a0
    ctx->pc = 0x4a6024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a6028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a6028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a602c: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x4a602cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a6030: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x4a6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a6034: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4a6034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a6038: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x4a6038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a603c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a603cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a6040:
    // 0x4a6040: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a6044: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a6044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4a6048: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a6048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a604c: 0x2d240020  sltiu       $a0, $t1, 0x20
    ctx->pc = 0x4a604cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x4a6050: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a6050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a6054: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a6054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a6058: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4a6058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4a605c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A605Cu;
    {
        const bool branch_taken_0x4a605c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A605Cu;
        // 0x4a6060: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a605c) {
            ctx->pc = 0x4A6040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6040;
        }
    }
    ctx->pc = 0x4A6064u;
    // 0x4a6064: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x4a6064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a6068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a606c: 0x2063818  mult        $a3, $s0, $a2
    ctx->pc = 0x4a606cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4a6070: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a6074: 0x1a63018  mult        $a2, $t5, $a2
    ctx->pc = 0x4a6074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4a6078: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a607c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x4a607cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x4a6080: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6084: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a6084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a6088: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a6088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a608c: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x4a608cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 12));
    // 0x4a6090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6094: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a6094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a6098: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x4a6098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a609c: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x4a609cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4a60a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a60a4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4a60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4a60a8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x4a60a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a60ac: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x4a60acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a60b0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4a60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4a60b4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a60b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60b8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a60b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a60c0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4a60c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a60c4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4a60c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a60c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a60cc: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x4a60ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60d0: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x4a60d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60d4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x4a60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x4a60d8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4a60d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a60dc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4a60dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a60e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a60e4: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4a60e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60e8: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4a60e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a60ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a60ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4a60f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a60f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a60f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a60f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a60fc: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x4a60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x4a6100: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6104: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a6108: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a610c: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x4a610cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
    // 0x4a6110: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a6110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6114: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a6118: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a611c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4a611cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a6120: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4a6120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a6124: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x4a6124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a6128: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x4a6128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a612c: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x4a612cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4a6130: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x4a6130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4a6134: 0x684b001f  ldl         $t3, 0x1F($v0)
    ctx->pc = 0x4a6134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4a6138: 0x6c4b0018  ldr         $t3, 0x18($v0)
    ctx->pc = 0x4a6138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4a613c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x4a613cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6140: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x4a6140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6144: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x4a6144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6148: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x4a6148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a614c: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x4a614cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6150: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x4a6150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6154: 0xb3ab002f  sdl         $t3, 0x2F($sp)
    ctx->pc = 0x4a6154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6158: 0xb7ab0028  sdr         $t3, 0x28($sp)
    ctx->pc = 0x4a6158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a615c: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x4a615cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a6160: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x4a6160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a6164: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x4a6164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6168: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x4a6168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a616c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a6170: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4a6170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4a6174: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4a6174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a6178: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4a6178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a617c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4a617cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a6180: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x4a6180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a6184: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x4a6184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a6188: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x4a6188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a618c: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x4a618cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a6190: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x4a6190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4a6194: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x4a6194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4a6198: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x4a6198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a619c: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x4a619cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61a0: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x4a61a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61a4: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x4a61a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61a8: 0xb0e50017  sdl         $a1, 0x17($a3)
    ctx->pc = 0x4a61a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61ac: 0xb4e50010  sdr         $a1, 0x10($a3)
    ctx->pc = 0x4a61acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61b0: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x4a61b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61b4: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x4a61b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61b8: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x4a61b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a61bc: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x4a61bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a61c0: 0xb0e20027  sdl         $v0, 0x27($a3)
    ctx->pc = 0x4a61c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61c4: 0xb4e20020  sdr         $v0, 0x20($a3)
    ctx->pc = 0x4a61c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a61cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a61d0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4a61d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a61d4: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x4a61d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4a61d8: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x4a61d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4a61dc: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x4a61dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a61e0: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x4a61e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a61e4: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x4a61e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a61e8: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x4a61e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a61ec: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x4a61ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a61f0: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x4a61f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a61f4: 0xb0cb0007  sdl         $t3, 0x7($a2)
    ctx->pc = 0x4a61f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61f8: 0xb4cb0000  sdr         $t3, 0x0($a2)
    ctx->pc = 0x4a61f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a61fc: 0xb0c2000f  sdl         $v0, 0xF($a2)
    ctx->pc = 0x4a61fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6200: 0xb4c20008  sdr         $v0, 0x8($a2)
    ctx->pc = 0x4a6200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6204: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x4a6204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6208: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x4a6208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a620c: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x4a620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6210: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x4a6210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6214: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x4a6214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4a6218: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x4a6218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4a621c: 0xb0cb0027  sdl         $t3, 0x27($a2)
    ctx->pc = 0x4a621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6220: 0xb4cb0020  sdr         $t3, 0x20($a2)
    ctx->pc = 0x4a6220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a6224: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6228: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a6228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a622c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4A622Cu;
    {
        const bool branch_taken_0x4a622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A622Cu;
        // 0x4a6230: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a622c) {
            ctx->pc = 0x4A62B0u;
            goto label_4a62b0;
        }
    }
    ctx->pc = 0x4A6234u;
    // 0x4a6234: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x4a6234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a6238: 0x1272018  mult        $a0, $t1, $a3
    ctx->pc = 0x4a6238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a623c: 0x0  nop
    ctx->pc = 0x4a623cu;
    // NOP
label_4a6240:
    // 0x4a6240: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4a6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a6244: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x4a6244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4a6248: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4a6248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a624c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a6250: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A6250u;
    {
        const bool branch_taken_0x4a6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6250u;
        // 0x4a6254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6250) {
            ctx->pc = 0x4A6298u;
            goto label_4a6298;
        }
    }
    ctx->pc = 0x4A6258u;
    // 0x4a6258: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a625c: 0x0  nop
    ctx->pc = 0x4a625cu;
    // NOP
label_4a6260:
    // 0x4a6260: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4a6260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a6264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a6268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a626c: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A626Cu;
    {
        const bool branch_taken_0x4a626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4a626c) {
            ctx->pc = 0x4A627Cu;
            goto label_4a627c;
        }
    }
    ctx->pc = 0x4A6274u;
    // 0x4a6274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A6274u;
    {
        const bool branch_taken_0x4a6274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6274u;
        // 0x4a6278: 0xac4a0000  sw          $t2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6274) {
            ctx->pc = 0x4A6284u;
            goto label_4a6284;
        }
    }
    ctx->pc = 0x4A627Cu;
label_4a627c:
    // 0x4a627c: 0x506a0001  beql        $v1, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A627Cu;
    {
        const bool branch_taken_0x4a627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x4a627c) {
            ctx->pc = 0x4A6280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A627Cu;
            // 0x4a6280: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6284u;
            goto label_4a6284;
        }
    }
    ctx->pc = 0x4A6284u;
label_4a6284:
    // 0x4a6284: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a6288: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a6288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a628c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a628cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a6290: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A6290u;
    {
        const bool branch_taken_0x4a6290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6290) {
            ctx->pc = 0x4A6294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6290u;
            // 0x4a6294: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6260;
        }
    }
    ctx->pc = 0x4A6298u;
label_4a6298:
    // 0x4a6298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a629c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4a629cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a62a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a62a4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x4a62a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a62a8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4A62A8u;
    {
        const bool branch_taken_0x4a62a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A62A8u;
        // 0x4a62ac: 0x1272018  mult        $a0, $t1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a62a8) {
            ctx->pc = 0x4A6240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6240;
        }
    }
    ctx->pc = 0x4A62B0u;
label_4a62b0:
    // 0x4a62b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a62b4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a62b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4a62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a62bc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4a62bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a62c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a62c4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a62c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4a62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4a62cc: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x4a62ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a62d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a62d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A62D4u;
    {
        const bool branch_taken_0x4a62d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A62D4u;
        // 0x4a62d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a62d4) {
            ctx->pc = 0x4A6360u;
            goto label_4a6360;
        }
    }
    ctx->pc = 0x4A62DCu;
    // 0x4a62dc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4A62DCu;
    {
        const bool branch_taken_0x4a62dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A62DCu;
        // 0x4a62e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a62dc) {
            ctx->pc = 0x4A635Cu;
            goto label_4a635c;
        }
    }
    ctx->pc = 0x4A62E4u;
    // 0x4a62e4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a62e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a62e8: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x4a62e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a62ec: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x4a62ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4a62f0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a62f4: 0x0  nop
    ctx->pc = 0x4a62f4u;
    // NOP
label_4a62f8:
    // 0x4a62f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4a62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4a62fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a6300: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4a6300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a6304: 0x10d30010  beq         $a2, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A6304u;
    {
        const bool branch_taken_0x4a6304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6304u;
        // 0x4a6308: 0xd41818  mult        $v1, $a2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6304) {
            ctx->pc = 0x4A6348u;
            goto label_4a6348;
        }
    }
    ctx->pc = 0x4A630Cu;
    // 0x4a630c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6310: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4a6310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a6314: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a6314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a6318: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x4a6318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a631c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a6320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a6324: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4a6324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4a6328: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a632c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4a632cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a6330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6334: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A6334u;
    {
        const bool branch_taken_0x4a6334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4a6334) {
            ctx->pc = 0x4A6338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6334u;
            // 0x4a6338: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A634Cu;
            goto label_4a634c;
        }
    }
    ctx->pc = 0x4A633Cu;
    // 0x4a633c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6340: 0xc1297f8  jal         func_4A5FE0
    ctx->pc = 0x4A6340u;
    SET_GPR_U32(ctx, 31, 0x4A6348u);
    ctx->pc = 0x4A6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6340u;
    // 0x4a6344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE0u;
    goto label_4a5fe0;
    ctx->pc = 0x4A6348u;
label_4a6348:
    // 0x4a6348: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a634c:
    // 0x4a634c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a634cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a6350: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a6350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a6354: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4A6354u;
    {
        const bool branch_taken_0x4a6354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6354) {
            ctx->pc = 0x4A6358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6354u;
            // 0x4a6358: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A62F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a62f8;
        }
    }
    ctx->pc = 0x4A635Cu;
label_4a635c:
    // 0x4a635c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4a635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a6360:
    // 0x4a6360: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4a6360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a6364: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4a6364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a6368: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4a6368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a636c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a636cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a6370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a6370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a6374: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6374u;
        // 0x4a6378: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A637Cu;
    // 0x4a637c: 0x0  nop
    ctx->pc = 0x4a637cu;
    // NOP
    ctx->pc = 0x4a6380u;
}
