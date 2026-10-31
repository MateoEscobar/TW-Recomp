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

// Function: sub_00428F30
// Address: 0x428f30 - 0x4290d8
void sub_00428F30_0x428f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428F30_0x428f30");
#endif

    switch (ctx->pc) {
        case 0x428f70u: goto label_428f70;
        case 0x4290b0u: goto label_4290b0;
        case 0x4290bcu: goto label_4290bc;
        default: break;
    }

    ctx->pc = 0x428f30u;

    // 0x428f30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x428f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x428f34: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x428f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x428f38: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x428f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x428f3c: 0x24451c30  addiu       $a1, $v0, 0x1C30
    ctx->pc = 0x428f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7216));
    // 0x428f40: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x428f40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x428f44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x428f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x428f48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x428f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x428f4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x428f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428f50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x428f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x428f54: 0x3c190070  lui         $t9, 0x70
    ctx->pc = 0x428f54u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)112 << 16));
    // 0x428f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x428f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x428f5c: 0x3c180070  lui         $t8, 0x70
    ctx->pc = 0x428f5cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)112 << 16));
    // 0x428f60: 0x3c0f0070  lui         $t7, 0x70
    ctx->pc = 0x428f60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)112 << 16));
    // 0x428f64: 0x3c0e0070  lui         $t6, 0x70
    ctx->pc = 0x428f64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)112 << 16));
    // 0x428f68: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x428f68u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x428f6c: 0x26035850  addiu       $v1, $s0, 0x5850
    ctx->pc = 0x428f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 22608));
label_428f70:
    // 0x428f70: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x428f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x428f74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x428f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x428f78: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x428f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x428f7c: 0x0  nop
    ctx->pc = 0x428f7cu;
    // NOP
    // 0x428f80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x428F80u;
    {
        const bool branch_taken_0x428f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428F80u;
        // 0x428f84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428f80) {
            ctx->pc = 0x428F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428f70;
        }
    }
    ctx->pc = 0x428F88u;
    // 0x428f88: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x428f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x428f8c: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x428f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x428f90: 0x2453ea50  addiu       $s3, $v0, -0x15B0
    ctx->pc = 0x428f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x428f94: 0x2732ec30  addiu       $s2, $t9, -0x13D0
    ctx->pc = 0x428f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 25), 4294962224));
    // 0x428f98: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x428f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x428f9c: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x428f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x428fa0: 0x6a71000f  ldl         $s1, 0xF($s3)
    ctx->pc = 0x428fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x428fa4: 0x6e710008  ldr         $s1, 0x8($s3)
    ctx->pc = 0x428fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x428fa8: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x428fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fac: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x428facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fb0: 0xb251000f  sdl         $s1, 0xF($s2)
    ctx->pc = 0x428fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fb4: 0xb6510008  sdr         $s1, 0x8($s2)
    ctx->pc = 0x428fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fb8: 0x3c040050  lui         $a0, 0x50
    ctx->pc = 0x428fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)80 << 16));
    // 0x428fbc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x428fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428fc0: 0x25eaec50  addiu       $t2, $t7, -0x13B0
    ctx->pc = 0x428fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962256));
    // 0x428fc4: 0x2473ea60  addiu       $s3, $v1, -0x15A0
    ctx->pc = 0x428fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x428fc8: 0x2712ec40  addiu       $s2, $t8, -0x13C0
    ctx->pc = 0x428fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 4294962240));
    // 0x428fcc: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x428fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x428fd0: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x428fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x428fd4: 0x6a71000f  ldl         $s1, 0xF($s3)
    ctx->pc = 0x428fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x428fd8: 0x6e710008  ldr         $s1, 0x8($s3)
    ctx->pc = 0x428fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x428fdc: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x428fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fe0: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x428fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fe4: 0xb251000f  sdl         $s1, 0xF($s2)
    ctx->pc = 0x428fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fe8: 0xb6510008  sdr         $s1, 0x8($s2)
    ctx->pc = 0x428fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428fec: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x428fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
    // 0x428ff0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x428ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x428ff4: 0x272cec30  addiu       $t4, $t9, -0x13D0
    ctx->pc = 0x428ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), 4294962224));
    // 0x428ff8: 0x2453ea70  addiu       $s3, $v0, -0x1590
    ctx->pc = 0x428ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961776));
    // 0x428ffc: 0x25f2ec50  addiu       $s2, $t7, -0x13B0
    ctx->pc = 0x428ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962256));
    // 0x429000: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x429000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x429004: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x429004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x429008: 0x6a71000f  ldl         $s1, 0xF($s3)
    ctx->pc = 0x429008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x42900c: 0x6e710008  ldr         $s1, 0x8($s3)
    ctx->pc = 0x42900cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x429010: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x429010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429014: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x429014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429018: 0xb251000f  sdl         $s1, 0xF($s2)
    ctx->pc = 0x429018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42901c: 0xb6510008  sdr         $s1, 0x8($s2)
    ctx->pc = 0x42901cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429020: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x429020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x429024: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x429024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x429028: 0x3c066500  lui         $a2, 0x6500
    ctx->pc = 0x429028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25856 << 16));
    // 0x42902c: 0x2472ea80  addiu       $s2, $v1, -0x1580
    ctx->pc = 0x42902cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
    // 0x429030: 0x25d1ec60  addiu       $s1, $t6, -0x13A0
    ctx->pc = 0x429030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962272));
    // 0x429034: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x429034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x429038: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x429038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x42903c: 0x6a4f000f  ldl         $t7, 0xF($s2)
    ctx->pc = 0x42903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x429040: 0x6e4f0008  ldr         $t7, 0x8($s2)
    ctx->pc = 0x429040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x429044: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x429044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429048: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x429048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42904c: 0xb22f000f  sdl         $t7, 0xF($s1)
    ctx->pc = 0x42904cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429050: 0xb62f0008  sdr         $t7, 0x8($s1)
    ctx->pc = 0x429050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429054: 0x270bec40  addiu       $t3, $t8, -0x13C0
    ctx->pc = 0x429054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 4294962240));
    // 0x429058: 0xae045850  sw          $a0, 0x5850($s0)
    ctx->pc = 0x429058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22608), GPR_U32(ctx, 4));
    // 0x42905c: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x42905cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x429060: 0xad850008  sw          $a1, 0x8($t4)
    ctx->pc = 0x429060u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 5));
    // 0x429064: 0x3c076e00  lui         $a3, 0x6E00
    ctx->pc = 0x429064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28160 << 16));
    // 0x429068: 0xad660008  sw          $a2, 0x8($t3)
    ctx->pc = 0x429068u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 6));
    // 0x42906c: 0x34e7400d  ori         $a3, $a3, 0x400D
    ctx->pc = 0x42906cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16397);
    // 0x429070: 0x3c086e00  lui         $t0, 0x6E00
    ctx->pc = 0x429070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28160 << 16));
    // 0x429074: 0x25c9ec60  addiu       $t1, $t6, -0x13A0
    ctx->pc = 0x429074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962272));
    // 0x429078: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x429078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x42907c: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x42907cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x429080: 0xad280008  sw          $t0, 0x8($t1)
    ctx->pc = 0x429080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
    // 0x429084: 0x25a35328  addiu       $v1, $t5, 0x5328
    ctx->pc = 0x429084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 21288));
    // 0x429088: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x429088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x42908c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429090: 0x34420084  ori         $v0, $v0, 0x84
    ctx->pc = 0x429090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x429094: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x429094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x429098: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x429098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x42909c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4290a0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4290a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4290a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4290a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4290a8: 0xc118508  jal         func_461420
    ctx->pc = 0x4290A8u;
    SET_GPR_U32(ctx, 31, 0x4290B0u);
    ctx->pc = 0x4290ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4290A8u;
    // 0x4290ac: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x4290A8u, 0x4290B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4290B0u;
label_4290b0:
    // 0x4290b0: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x4290b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x4290b4: 0xc11851c  jal         func_461470
    ctx->pc = 0x4290B4u;
    SET_GPR_U32(ctx, 31, 0x4290BCu);
    ctx->pc = 0x4290B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4290B4u;
    // 0x4290b8: 0x34840084  ori         $a0, $a0, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x4290B4u, 0x4290BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4290BCu;
label_4290bc:
    // 0x4290bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4290bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4290c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4290c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4290c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4290c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4290c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4290c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4290cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4290ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4290d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4290D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4290D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4290D0u;
        // 0x4290d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4290D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4290D8u;
}
