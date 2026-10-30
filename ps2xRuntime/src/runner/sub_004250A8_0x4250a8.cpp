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

// Function: sub_004250A8
// Address: 0x4250a8 - 0x4252c8
void sub_004250A8_0x4250a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004250A8_0x4250a8");
#endif

    switch (ctx->pc) {
        case 0x425288u: goto label_425288;
        case 0x425294u: goto label_425294;
        default: break;
    }

    ctx->pc = 0x4250a8u;

    // 0x4250a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4250a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4250ac: 0x3c0d0070  lui         $t5, 0x70
    ctx->pc = 0x4250acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)112 << 16));
    // 0x4250b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4250b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4250b4: 0x3c0e0070  lui         $t6, 0x70
    ctx->pc = 0x4250b4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)112 << 16));
    // 0x4250b8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4250b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4250bc: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4250bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4250c0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4250c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4250c4: 0x3c0f0070  lui         $t7, 0x70
    ctx->pc = 0x4250c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)112 << 16));
    // 0x4250c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4250c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4250cc: 0x25cae9c8  addiu       $t2, $t6, -0x1638
    ctx->pc = 0x4250ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961608));
    // 0x4250d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4250d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4250d4: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4250d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4250d8: 0x265eea50  addiu       $fp, $s2, -0x15B0
    ctx->pc = 0x4250d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961744));
    // 0x4250dc: 0x25b9e9b8  addiu       $t9, $t5, -0x1648
    ctx->pc = 0x4250dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 13), 4294961592));
    // 0x4250e0: 0x6bd70007  ldl         $s7, 0x7($fp)
    ctx->pc = 0x4250e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4250e4: 0x6fd70000  ldr         $s7, 0x0($fp)
    ctx->pc = 0x4250e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x4250e8: 0x6bd8000f  ldl         $t8, 0xF($fp)
    ctx->pc = 0x4250e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x4250ec: 0x6fd80008  ldr         $t8, 0x8($fp)
    ctx->pc = 0x4250ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x4250f0: 0xb3370007  sdl         $s7, 0x7($t9)
    ctx->pc = 0x4250f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4250f4: 0xb7370000  sdr         $s7, 0x0($t9)
    ctx->pc = 0x4250f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4250f8: 0xb338000f  sdl         $t8, 0xF($t9)
    ctx->pc = 0x4250f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4250fc: 0xb7380008  sdr         $t8, 0x8($t9)
    ctx->pc = 0x4250fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425100: 0x25b5e9b8  addiu       $s5, $t5, -0x1648
    ctx->pc = 0x425100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 4294961592));
    // 0x425104: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x425104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x425108: 0x3c0c0070  lui         $t4, 0x70
    ctx->pc = 0x425108u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)112 << 16));
    // 0x42510c: 0x2678ea60  addiu       $t8, $s3, -0x15A0
    ctx->pc = 0x42510cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x425110: 0x25d7e9c8  addiu       $s7, $t6, -0x1638
    ctx->pc = 0x425110u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961608));
    // 0x425114: 0x6b0d0007  ldl         $t5, 0x7($t8)
    ctx->pc = 0x425114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x425118: 0x6f0d0000  ldr         $t5, 0x0($t8)
    ctx->pc = 0x425118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x42511c: 0x6b12000f  ldl         $s2, 0xF($t8)
    ctx->pc = 0x42511cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x425120: 0x6f120008  ldr         $s2, 0x8($t8)
    ctx->pc = 0x425120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x425124: 0xb2ed0007  sdl         $t5, 0x7($s7)
    ctx->pc = 0x425124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425128: 0xb6ed0000  sdr         $t5, 0x0($s7)
    ctx->pc = 0x425128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42512c: 0xb2f2000f  sdl         $s2, 0xF($s7)
    ctx->pc = 0x42512cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425130: 0xb6f20008  sdr         $s2, 0x8($s7)
    ctx->pc = 0x425130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425134: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x425134u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x425138: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x425138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x42513c: 0x25ebe9d8  addiu       $t3, $t7, -0x1628
    ctx->pc = 0x42513cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961624));
    // 0x425140: 0x268eea70  addiu       $t6, $s4, -0x1590
    ctx->pc = 0x425140u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961776));
    // 0x425144: 0x25ede9d8  addiu       $t5, $t7, -0x1628
    ctx->pc = 0x425144u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961624));
    // 0x425148: 0x69d90007  ldl         $t9, 0x7($t6)
    ctx->pc = 0x425148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x42514c: 0x6dd90000  ldr         $t9, 0x0($t6)
    ctx->pc = 0x42514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x425150: 0x69de000f  ldl         $fp, 0xF($t6)
    ctx->pc = 0x425150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem << shift)); }
    // 0x425154: 0x6dde0008  ldr         $fp, 0x8($t6)
    ctx->pc = 0x425154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem >> shift)); }
    // 0x425158: 0xb1b90007  sdl         $t9, 0x7($t5)
    ctx->pc = 0x425158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42515c: 0xb5b90000  sdr         $t9, 0x0($t5)
    ctx->pc = 0x42515cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425160: 0xb1be000f  sdl         $fp, 0xF($t5)
    ctx->pc = 0x425160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425164: 0xb5be0008  sdr         $fp, 0x8($t5)
    ctx->pc = 0x425164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425168: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x425168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x42516c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x42516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x425170: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x425170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x425174: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x425174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x425178: 0x24847080  addiu       $a0, $a0, 0x7080
    ctx->pc = 0x425178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28800));
    // 0x42517c: 0x2617ea80  addiu       $s7, $s0, -0x1580
    ctx->pc = 0x42517cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961792));
    // 0x425180: 0x2593e9f8  addiu       $s3, $t4, -0x1608
    ctx->pc = 0x425180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), 4294961656));
    // 0x425184: 0x6aef0007  ldl         $t7, 0x7($s7)
    ctx->pc = 0x425184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x425188: 0x6eef0000  ldr         $t7, 0x0($s7)
    ctx->pc = 0x425188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x42518c: 0x6af2000f  ldl         $s2, 0xF($s7)
    ctx->pc = 0x42518cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x425190: 0x6ef20008  ldr         $s2, 0x8($s7)
    ctx->pc = 0x425190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x425194: 0xb26f0007  sdl         $t7, 0x7($s3)
    ctx->pc = 0x425194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425198: 0xb66f0000  sdr         $t7, 0x0($s3)
    ctx->pc = 0x425198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42519c: 0xb272000f  sdl         $s2, 0xF($s3)
    ctx->pc = 0x42519cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251a0: 0xb6720008  sdr         $s2, 0x8($s3)
    ctx->pc = 0x4251a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251a4: 0x2588e9f8  addiu       $t0, $t4, -0x1608
    ctx->pc = 0x4251a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294961656));
    // 0x4251a8: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x4251a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
    // 0x4251ac: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x4251acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x4251b0: 0x3c026d00  lui         $v0, 0x6D00
    ctx->pc = 0x4251b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
    // 0x4251b4: 0x260cea80  addiu       $t4, $s0, -0x1580
    ctx->pc = 0x4251b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961792));
    // 0x4251b8: 0x263ee9e8  addiu       $fp, $s1, -0x1618
    ctx->pc = 0x4251b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961640));
    // 0x4251bc: 0x69980007  ldl         $t8, 0x7($t4)
    ctx->pc = 0x4251bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x4251c0: 0x6d980000  ldr         $t8, 0x0($t4)
    ctx->pc = 0x4251c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x4251c4: 0x6999000f  ldl         $t9, 0xF($t4)
    ctx->pc = 0x4251c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x4251c8: 0x6d990008  ldr         $t9, 0x8($t4)
    ctx->pc = 0x4251c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4251cc: 0xb3d80007  sdl         $t8, 0x7($fp)
    ctx->pc = 0x4251ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251d0: 0xb7d80000  sdr         $t8, 0x0($fp)
    ctx->pc = 0x4251d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251d4: 0xb3d9000f  sdl         $t9, 0xF($fp)
    ctx->pc = 0x4251d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251d8: 0xb7d90008  sdr         $t9, 0x8($fp)
    ctx->pc = 0x4251d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4251dc: 0xaec4ea08  sw          $a0, -0x15F8($s6)
    ctx->pc = 0x4251dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA08u, _value); } while (0);
    // 0x4251e0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x4251e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x4251e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4251e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4251e8: 0x3c056e00  lui         $a1, 0x6E00
    ctx->pc = 0x4251e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28160 << 16));
    // 0x4251ec: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x4251ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FE9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FE9D0u, _value); } while (0);
    // 0x4251f0: 0x34a5400d  ori         $a1, $a1, 0x400D
    ctx->pc = 0x4251f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16397);
    // 0x4251f4: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x4251f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x4251f8: 0xad650008  sw          $a1, 0x8($t3)
    ctx->pc = 0x4251f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6FE9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FE9E0u, _value); } while (0);
    // 0x4251fc: 0x2629e9e8  addiu       $t1, $s1, -0x1618
    ctx->pc = 0x4251fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961640));
    // 0x425200: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x425200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x425204: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x425204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x425208: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x425208u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6FE9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FE9F0u, _value); } while (0);
    // 0x42520c: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x42520cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x425210: 0x26c3ea08  addiu       $v1, $s6, -0x15F8
    ctx->pc = 0x425210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961672));
    // 0x425214: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x425214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6FEA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA00u, _value); } while (0);
    // 0x425218: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x425218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA34u, _value); } while (0);
    // 0x42521c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x42521cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FE9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FE9C0u, _value); } while (0);
    // 0x425220: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x425220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA18u, _value); } while (0);
    // 0x425224: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x425224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA1Cu, _value); } while (0);
    // 0x425228: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x425228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA0Cu, _value); } while (0);
    // 0x42522c: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x42522cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA20u, _value); } while (0);
    // 0x425230: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x425230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA24u, _value); } while (0);
    // 0x425234: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x425234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA10u, _value); } while (0);
    // 0x425238: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x425238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA14u, _value); } while (0);
    // 0x42523c: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x42523cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA38u, _value); } while (0);
    // 0x425240: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x425240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA3Cu, _value); } while (0);
    // 0x425244: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x425244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA28u, _value); } while (0);
    // 0x425248: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x425248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA2Cu, _value); } while (0);
    // 0x42524c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x42524cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA40u, _value); } while (0);
    // 0x425250: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x425250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA44u, _value); } while (0);
    // 0x425254: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x425254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FEA30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEA30u, _value); } while (0);
    // 0x425258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x425258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x42525c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x42525cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x425260: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x425260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x425264: 0x34630081  ori         $v1, $v1, 0x81
    ctx->pc = 0x425264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)129);
    // 0x425268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x425268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42526c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x425270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x425270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425274: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x425274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x425278: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x425278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x42527c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x42527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x425280: 0xc118508  jal         func_461420
    ctx->pc = 0x425280u;
    SET_GPR_U32(ctx, 31, 0x425288u);
    ctx->pc = 0x425284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425280u;
    // 0x425284: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x425280u, 0x425288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425288u;
label_425288:
    // 0x425288: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x425288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x42528c: 0xc11851c  jal         func_461470
    ctx->pc = 0x42528Cu;
    SET_GPR_U32(ctx, 31, 0x425294u);
    ctx->pc = 0x425290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42528Cu;
    // 0x425290: 0x34840081  ori         $a0, $a0, 0x81 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)129);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x42528Cu, 0x425294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425294u;
label_425294:
    // 0x425294: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x425294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x425298: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x425298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x42529c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x42529cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4252a0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4252a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4252a4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4252a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4252a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4252a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4252ac: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4252acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4252b0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4252b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4252b4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4252b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4252b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4252b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4252bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4252BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4252C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4252BCu;
        // 0x4252c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4252BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4252C4u;
    // 0x4252c4: 0x0  nop
    ctx->pc = 0x4252c4u;
    // NOP
    ctx->pc = 0x4252c8u;
}
