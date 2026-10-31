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

// Function: sub_00428080
// Address: 0x428080 - 0x428260
void sub_00428080_0x428080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428080_0x428080");
#endif

    switch (ctx->pc) {
        case 0x428228u: goto label_428228;
        case 0x428234u: goto label_428234;
        default: break;
    }

    ctx->pc = 0x428080u;

    // 0x428080: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x428080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x428084: 0x3c0c0070  lui         $t4, 0x70
    ctx->pc = 0x428084u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)112 << 16));
    // 0x428088: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x428088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x42808c: 0x258bebb0  addiu       $t3, $t4, -0x1450
    ctx->pc = 0x42808cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962096));
    // 0x428090: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x428090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x428094: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x428094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x428098: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x428098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x42809c: 0x3c0d0070  lui         $t5, 0x70
    ctx->pc = 0x42809cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)112 << 16));
    // 0x4280a0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4280a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4280a4: 0x3c0e0070  lui         $t6, 0x70
    ctx->pc = 0x4280a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)112 << 16));
    // 0x4280a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4280a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4280ac: 0x25aaebc0  addiu       $t2, $t5, -0x1440
    ctx->pc = 0x4280acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962112));
    // 0x4280b0: 0x2618ea50  addiu       $t8, $s0, -0x15B0
    ctx->pc = 0x4280b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961744));
    // 0x4280b4: 0x2597ebb0  addiu       $s7, $t4, -0x1450
    ctx->pc = 0x4280b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962096));
    // 0x4280b8: 0x6b150007  ldl         $s5, 0x7($t8)
    ctx->pc = 0x4280b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x4280bc: 0x6f150000  ldr         $s5, 0x0($t8)
    ctx->pc = 0x4280bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4280c0: 0x6b16000f  ldl         $s6, 0xF($t8)
    ctx->pc = 0x4280c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x4280c4: 0x6f160008  ldr         $s6, 0x8($t8)
    ctx->pc = 0x4280c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x4280c8: 0xb2f50007  sdl         $s5, 0x7($s7)
    ctx->pc = 0x4280c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4280cc: 0xb6f50000  sdr         $s5, 0x0($s7)
    ctx->pc = 0x4280ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4280d0: 0xb2f6000f  sdl         $s6, 0xF($s7)
    ctx->pc = 0x4280d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4280d4: 0xb6f60008  sdr         $s6, 0x8($s7)
    ctx->pc = 0x4280d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4280d8: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4280d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4280dc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4280dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4280e0: 0x3c040050  lui         $a0, 0x50
    ctx->pc = 0x4280e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)80 << 16));
    // 0x4280e4: 0x2636ea60  addiu       $s6, $s1, -0x15A0
    ctx->pc = 0x4280e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x4280e8: 0x25b5ebc0  addiu       $s5, $t5, -0x1440
    ctx->pc = 0x4280e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962112));
    // 0x4280ec: 0x6acc0007  ldl         $t4, 0x7($s6)
    ctx->pc = 0x4280ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4280f0: 0x6ecc0000  ldr         $t4, 0x0($s6)
    ctx->pc = 0x4280f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4280f4: 0x6ad0000f  ldl         $s0, 0xF($s6)
    ctx->pc = 0x4280f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x4280f8: 0x6ed00008  ldr         $s0, 0x8($s6)
    ctx->pc = 0x4280f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4280fc: 0xb2ac0007  sdl         $t4, 0x7($s5)
    ctx->pc = 0x4280fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428100: 0xb6ac0000  sdr         $t4, 0x0($s5)
    ctx->pc = 0x428100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428104: 0xb2b0000f  sdl         $s0, 0xF($s5)
    ctx->pc = 0x428104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428108: 0xb6b00008  sdr         $s0, 0x8($s5)
    ctx->pc = 0x428108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42810c: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x42810cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x428110: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x428110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x428114: 0x2484f1c0  addiu       $a0, $a0, -0xE40
    ctx->pc = 0x428114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963648));
    // 0x428118: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x428118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x42811c: 0x25c9ebd0  addiu       $t1, $t6, -0x1430
    ctx->pc = 0x42811cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962128));
    // 0x428120: 0x264dea70  addiu       $t5, $s2, -0x1590
    ctx->pc = 0x428120u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961776));
    // 0x428124: 0x25ccebd0  addiu       $t4, $t6, -0x1430
    ctx->pc = 0x428124u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962128));
    // 0x428128: 0x69b70007  ldl         $s7, 0x7($t5)
    ctx->pc = 0x428128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x42812c: 0x6db70000  ldr         $s7, 0x0($t5)
    ctx->pc = 0x42812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x428130: 0x69b8000f  ldl         $t8, 0xF($t5)
    ctx->pc = 0x428130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x428134: 0x6db80008  ldr         $t8, 0x8($t5)
    ctx->pc = 0x428134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x428138: 0xb1970007  sdl         $s7, 0x7($t4)
    ctx->pc = 0x428138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42813c: 0xb5970000  sdr         $s7, 0x0($t4)
    ctx->pc = 0x42813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428140: 0xb198000f  sdl         $t8, 0xF($t4)
    ctx->pc = 0x428140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428144: 0xb5980008  sdr         $t8, 0x8($t4)
    ctx->pc = 0x428144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428148: 0x3c140071  lui         $s4, 0x71
    ctx->pc = 0x428148u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
    // 0x42814c: 0x3c0f0070  lui         $t7, 0x70
    ctx->pc = 0x42814cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)112 << 16));
    // 0x428150: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x428150u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x428154: 0x3c026d00  lui         $v0, 0x6D00
    ctx->pc = 0x428154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
    // 0x428158: 0x2675ea80  addiu       $s5, $s3, -0x1580
    ctx->pc = 0x428158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961792));
    // 0x42815c: 0x25f1ebe0  addiu       $s1, $t7, -0x1420
    ctx->pc = 0x42815cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962144));
    // 0x428160: 0x6aae0007  ldl         $t6, 0x7($s5)
    ctx->pc = 0x428160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x428164: 0x6eae0000  ldr         $t6, 0x0($s5)
    ctx->pc = 0x428164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x428168: 0x6ab0000f  ldl         $s0, 0xF($s5)
    ctx->pc = 0x428168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x42816c: 0x6eb00008  ldr         $s0, 0x8($s5)
    ctx->pc = 0x42816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x428170: 0xb22e0007  sdl         $t6, 0x7($s1)
    ctx->pc = 0x428170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428174: 0xb62e0000  sdr         $t6, 0x0($s1)
    ctx->pc = 0x428174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428178: 0xb230000f  sdl         $s0, 0xF($s1)
    ctx->pc = 0x428178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42817c: 0xb6300008  sdr         $s0, 0x8($s1)
    ctx->pc = 0x42817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428180: 0xae845950  sw          $a0, 0x5950($s4)
    ctx->pc = 0x428180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715950u, _value); } while (0);
    // 0x428184: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x428184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x428188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x428188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42818c: 0x3c056500  lui         $a1, 0x6500
    ctx->pc = 0x42818cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25856 << 16));
    // 0x428190: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x428190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FEBB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEBB8u, _value); } while (0);
    // 0x428194: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x428194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x428198: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x428198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x42819c: 0xad450008  sw          $a1, 0x8($t2)
    ctx->pc = 0x42819cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6FEBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEBC8u, _value); } while (0);
    // 0x4281a0: 0x34c6400d  ori         $a2, $a2, 0x400D
    ctx->pc = 0x4281a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16397);
    // 0x4281a4: 0x3c076e00  lui         $a3, 0x6E00
    ctx->pc = 0x4281a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28160 << 16));
    // 0x4281a8: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x4281a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6FEBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEBD8u, _value); } while (0);
    // 0x4281ac: 0x25e8ebe0  addiu       $t0, $t7, -0x1420
    ctx->pc = 0x4281acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962144));
    // 0x4281b0: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x4281b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x4281b4: 0x26835950  addiu       $v1, $s4, 0x5950
    ctx->pc = 0x4281b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 22864));
    // 0x4281b8: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x4281b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6FEBE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEBE8u, _value); } while (0);
    // 0x4281bc: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x4281bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x71597Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71597Cu, _value); } while (0);
    // 0x4281c0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x4281c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715960u, _value); } while (0);
    // 0x4281c4: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x4281c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715964u, _value); } while (0);
    // 0x4281c8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4281c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715954u, _value); } while (0);
    // 0x4281cc: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x4281ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715968u, _value); } while (0);
    // 0x4281d0: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x4281d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x71596Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71596Cu, _value); } while (0);
    // 0x4281d4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4281d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715958u, _value); } while (0);
    // 0x4281d8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4281d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x71595Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71595Cu, _value); } while (0);
    // 0x4281dc: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x4281dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715980u, _value); } while (0);
    // 0x4281e0: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x4281e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715984u, _value); } while (0);
    // 0x4281e4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x4281e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715970u, _value); } while (0);
    // 0x4281e8: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x4281e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715974u, _value); } while (0);
    // 0x4281ec: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x4281ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715988u, _value); } while (0);
    // 0x4281f0: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x4281f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x71598Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71598Cu, _value); } while (0);
    // 0x4281f4: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x4281f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715978u, _value); } while (0);
    // 0x4281f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4281fc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4281fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x428200: 0x24425278  addiu       $v0, $v0, 0x5278
    ctx->pc = 0x428200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21112));
    // 0x428204: 0x34630087  ori         $v1, $v1, 0x87
    ctx->pc = 0x428204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)135);
    // 0x428208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x428208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42820c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x428210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x428210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428214: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x428214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x428218: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x428218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x42821c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x42821cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x428220: 0xc118508  jal         func_461420
    ctx->pc = 0x428220u;
    SET_GPR_U32(ctx, 31, 0x428228u);
    ctx->pc = 0x428224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428220u;
    // 0x428224: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x428220u, 0x428228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428228u;
label_428228:
    // 0x428228: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x428228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x42822c: 0xc11851c  jal         func_461470
    ctx->pc = 0x42822Cu;
    SET_GPR_U32(ctx, 31, 0x428234u);
    ctx->pc = 0x428230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42822Cu;
    // 0x428230: 0x34840087  ori         $a0, $a0, 0x87 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)135);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x42822Cu, 0x428234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428234u;
label_428234:
    // 0x428234: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x428234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x428238: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x428238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42823c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x42823cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x428240: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x428240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x428244: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x428244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x428248: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x428248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42824c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x42824cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x428250: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x428250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x428254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x428254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x428258: 0x3e00008  jr          $ra
    ctx->pc = 0x428258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428258u;
        // 0x42825c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x428260u;
}
