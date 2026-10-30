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

// Function: sub_001DB928
// Address: 0x1db928 - 0x1dbb78
void sub_001DB928_0x1db928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB928_0x1db928");
#endif

    switch (ctx->pc) {
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbb10u: goto label_1dbb10;
        default: break;
    }

    ctx->pc = 0x1db928u;

    // 0x1db928: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1db92c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1db930: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1db934: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1db934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x1db938: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1db938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1db93c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1db93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db940: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1db940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1db944: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db948: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1db948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1db94c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1db94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db950: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1db950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1db954: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x1db954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1db958: 0x24486428  addiu       $t0, $v0, 0x6428
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25640));
    // 0x1db95c: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1db95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1db960: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x1db960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1db964: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1db964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1db968: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1db968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1db96c: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x556438u));
    // 0x1db970: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1db970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db974: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1db974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db978: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1db978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db97c: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1db97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db980: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1db980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1db984: 0x24676440  addiu       $a3, $v1, 0x6440
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25664));
    // 0x1db988: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1db988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1db98c: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1db98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1db990: 0x68e2000f  ldl         $v0, 0xF($a3)
    ctx->pc = 0x1db990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1db994: 0x6ce20008  ldr         $v0, 0x8($a3)
    ctx->pc = 0x1db994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1db998: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x556450u));
    // 0x1db99c: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x1db99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9a0: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x1db9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9a4: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x1db9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9a8: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x1db9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9ac: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1db9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1db9b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1db9b4: 0x24856458  addiu       $a1, $a0, 0x6458
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 25688));
    // 0x1db9b8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x1db9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1db9bc: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x1db9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1db9c0: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x1db9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1db9c4: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x1db9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1db9c8: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x1db9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1db9cc: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x1db9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1db9d0: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x1db9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9d4: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x1db9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9d8: 0xb3a9004f  sdl         $t1, 0x4F($sp)
    ctx->pc = 0x1db9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9dc: 0xb7a90048  sdr         $t1, 0x48($sp)
    ctx->pc = 0x1db9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9e0: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1db9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9e4: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1db9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1db9e8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1db9ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1db9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1db9f4: 0x24436470  addiu       $v1, $v0, 0x6470
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
    // 0x1db9f8: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1db9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1db9fc: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1db9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dba00: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1dba00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dba04: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1dba04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dba08: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x1dba08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1dba0c: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x1dba0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1dba10: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x1dba10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba14: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x1dba14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba18: 0xb3a8006f  sdl         $t0, 0x6F($sp)
    ctx->pc = 0x1dba18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba1c: 0xb7a80068  sdr         $t0, 0x68($sp)
    ctx->pc = 0x1dba1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba20: 0xb3a90077  sdl         $t1, 0x77($sp)
    ctx->pc = 0x1dba20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba24: 0xb7a90070  sdr         $t1, 0x70($sp)
    ctx->pc = 0x1dba24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba28: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x1dba28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dba2c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x1dba2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dba30: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x1dba30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dba34: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x1dba34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dba38: 0xb3a7007f  sdl         $a3, 0x7F($sp)
    ctx->pc = 0x1dba38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba3c: 0xb7a70078  sdr         $a3, 0x78($sp)
    ctx->pc = 0x1dba3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba40: 0xb3a80087  sdl         $t0, 0x87($sp)
    ctx->pc = 0x1dba40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba44: 0xb7a80080  sdr         $t0, 0x80($sp)
    ctx->pc = 0x1dba44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dba48: 0xc076e3a  jal         func_1DB8E8
    ctx->pc = 0x1DBA48u;
    SET_GPR_U32(ctx, 31, 0x1DBA50u);
    ctx->pc = 0x1DBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA48u;
    // 0x1dba4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E8u, 0x1DBA48u, 0x1DBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA50u;
label_1dba50:
    // 0x1dba50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBA50u;
    {
        const bool branch_taken_0x1dba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA50u;
        // 0x1dba54: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba50) {
            ctx->pc = 0x1DBA80u;
            goto label_1dba80;
        }
    }
    ctx->pc = 0x1DBA58u;
    // 0x1dba58: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1dba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dba5c: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x1dba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dba60: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dba64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dba68: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dba6c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dba70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1dba70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1dba74: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1dba74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dba78: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DBA78u;
    {
        const bool branch_taken_0x1dba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA78u;
        // 0x1dba7c: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba78) {
            ctx->pc = 0x1DBB5Cu;
            goto label_1dbb5c;
        }
    }
    ctx->pc = 0x1DBA80u;
label_1dba80:
    // 0x1dba80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dba88: 0xc076e3a  jal         func_1DB8E8
    ctx->pc = 0x1DBA88u;
    SET_GPR_U32(ctx, 31, 0x1DBA90u);
    ctx->pc = 0x1DBA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA88u;
    // 0x1dba8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E8u, 0x1DBA88u, 0x1DBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA90u;
label_1dba90:
    // 0x1dba90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBA90u;
    {
        const bool branch_taken_0x1dba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA90u;
        // 0x1dba94: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba90) {
            ctx->pc = 0x1DBAC0u;
            goto label_1dbac0;
        }
    }
    ctx->pc = 0x1DBA98u;
    // 0x1dba98: 0x27a30094  addiu       $v1, $sp, 0x94
    ctx->pc = 0x1dba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1dba9c: 0xa3a20094  sb          $v0, 0x94($sp)
    ctx->pc = 0x1dba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbaa0: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1dbaa4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbaa8: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1dbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1dbaac: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dbaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbab0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1dbab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1dbab4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1dbab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dbab8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DBAB8u;
    {
        const bool branch_taken_0x1dbab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAB8u;
        // 0x1dbabc: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbab8) {
            ctx->pc = 0x1DBB5Cu;
            goto label_1dbb5c;
        }
    }
    ctx->pc = 0x1DBAC0u;
label_1dbac0:
    // 0x1dbac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dbac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbac4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbac8: 0xc076e3a  jal         func_1DB8E8
    ctx->pc = 0x1DBAC8u;
    SET_GPR_U32(ctx, 31, 0x1DBAD0u);
    ctx->pc = 0x1DBACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBAC8u;
    // 0x1dbacc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E8u, 0x1DBAC8u, 0x1DBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBAD0u;
label_1dbad0:
    // 0x1dbad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBAD0u;
    {
        const bool branch_taken_0x1dbad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAD0u;
        // 0x1dbad4: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbad0) {
            ctx->pc = 0x1DBB00u;
            goto label_1dbb00;
        }
    }
    ctx->pc = 0x1DBAD8u;
    // 0x1dbad8: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x1dbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dbadc: 0xa3a20098  sb          $v0, 0x98($sp)
    ctx->pc = 0x1dbadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbae0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1dbae4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbae8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1dbaec: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dbaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbaf0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1dbaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1dbaf4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1dbaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dbaf8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DBAF8u;
    {
        const bool branch_taken_0x1dbaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF8u;
        // 0x1dbafc: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaf8) {
            ctx->pc = 0x1DBB5Cu;
            goto label_1dbb5c;
        }
    }
    ctx->pc = 0x1DBB00u;
label_1dbb00:
    // 0x1dbb00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dbb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb08: 0xc076e3a  jal         func_1DB8E8
    ctx->pc = 0x1DBB08u;
    SET_GPR_U32(ctx, 31, 0x1DBB10u);
    ctx->pc = 0x1DBB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB08u;
    // 0x1dbb0c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E8u, 0x1DBB08u, 0x1DBB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB10u;
label_1dbb10:
    // 0x1dbb10: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBB10u;
    {
        const bool branch_taken_0x1dbb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb10) {
            ctx->pc = 0x1DBB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBB10u;
            // 0x1dbb14: 0x240200ba  addiu       $v0, $zero, 0xBA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB38u;
            goto label_1dbb38;
        }
    }
    ctx->pc = 0x1DBB18u;
    // 0x1dbb18: 0xa3a0009c  sb          $zero, 0x9C($sp)
    ctx->pc = 0x1dbb18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbb1c: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1dbb20: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbb24: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1dbb24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbb28: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1dbb28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbb2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1dbb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbb30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DBB30u;
    {
        const bool branch_taken_0x1dbb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB30u;
        // 0x1dbb34: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb30) {
            ctx->pc = 0x1DBB5Cu;
            goto label_1dbb5c;
        }
    }
    ctx->pc = 0x1DBB38u;
label_1dbb38:
    // 0x1dbb38: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1dbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dbb3c: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x1dbb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbb40: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x1dbb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1dbb44: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dbb48: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1dbb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1dbb4c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dbb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbb50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1dbb50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1dbb54: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1dbb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dbb58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1dbb5c:
    // 0x1dbb5c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1dbb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dbb60: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1dbb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dbb64: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1dbb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dbb68: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1dbb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dbb6c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB70u;
        // 0x1dbb74: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB78u;
}
