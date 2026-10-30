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

// Function: sub_004273F8
// Address: 0x4273f8 - 0x4275d0
void sub_004273F8_0x4273f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004273F8_0x4273f8");
#endif

    switch (ctx->pc) {
        case 0x427598u: goto label_427598;
        case 0x4275a4u: goto label_4275a4;
        default: break;
    }

    ctx->pc = 0x4273f8u;

    // 0x4273f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4273f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4273fc: 0x3c0a0070  lui         $t2, 0x70
    ctx->pc = 0x4273fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)112 << 16));
    // 0x427400: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x427400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x427404: 0x3c0f0053  lui         $t7, 0x53
    ctx->pc = 0x427404u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)83 << 16));
    // 0x427408: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x427408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x42740c: 0x254eeb70  addiu       $t6, $t2, -0x1490
    ctx->pc = 0x42740cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962032));
    // 0x427410: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x427410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x427414: 0x3c0b0070  lui         $t3, 0x70
    ctx->pc = 0x427414u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)112 << 16));
    // 0x427418: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x427418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x42741c: 0x3c0c0070  lui         $t4, 0x70
    ctx->pc = 0x42741cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)112 << 16));
    // 0x427420: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x427420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x427424: 0x2568eb80  addiu       $t0, $t3, -0x1480
    ctx->pc = 0x427424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962048));
    // 0x427428: 0x25f7ea50  addiu       $s7, $t7, -0x15B0
    ctx->pc = 0x427428u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961744));
    // 0x42742c: 0x2556eb70  addiu       $s6, $t2, -0x1490
    ctx->pc = 0x42742cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962032));
    // 0x427430: 0x6af40007  ldl         $s4, 0x7($s7)
    ctx->pc = 0x427430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x427434: 0x6ef40000  ldr         $s4, 0x0($s7)
    ctx->pc = 0x427434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x427438: 0x6af5000f  ldl         $s5, 0xF($s7)
    ctx->pc = 0x427438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x42743c: 0x6ef50008  ldr         $s5, 0x8($s7)
    ctx->pc = 0x42743cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x427440: 0xb2d40007  sdl         $s4, 0x7($s6)
    ctx->pc = 0x427440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427444: 0xb6d40000  sdr         $s4, 0x0($s6)
    ctx->pc = 0x427444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427448: 0xb2d5000f  sdl         $s5, 0xF($s6)
    ctx->pc = 0x427448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42744c: 0xb6d50008  sdr         $s5, 0x8($s6)
    ctx->pc = 0x42744cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427450: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x427450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x427454: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x427454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x427458: 0x3c040050  lui         $a0, 0x50
    ctx->pc = 0x427458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)80 << 16));
    // 0x42745c: 0x2615ea60  addiu       $s5, $s0, -0x15A0
    ctx->pc = 0x42745cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x427460: 0x2574eb80  addiu       $s4, $t3, -0x1480
    ctx->pc = 0x427460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962048));
    // 0x427464: 0x6aaa0007  ldl         $t2, 0x7($s5)
    ctx->pc = 0x427464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x427468: 0x6eaa0000  ldr         $t2, 0x0($s5)
    ctx->pc = 0x427468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x42746c: 0x6aaf000f  ldl         $t7, 0xF($s5)
    ctx->pc = 0x42746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x427470: 0x6eaf0008  ldr         $t7, 0x8($s5)
    ctx->pc = 0x427470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x427474: 0xb28a0007  sdl         $t2, 0x7($s4)
    ctx->pc = 0x427474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427478: 0xb68a0000  sdr         $t2, 0x0($s4)
    ctx->pc = 0x427478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42747c: 0xb28f000f  sdl         $t7, 0xF($s4)
    ctx->pc = 0x42747cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427480: 0xb68f0008  sdr         $t7, 0x8($s4)
    ctx->pc = 0x427480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x427484: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x427484u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x427488: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x427488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x42748c: 0x2484c870  addiu       $a0, $a0, -0x3790
    ctx->pc = 0x42748cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    // 0x427490: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x427490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x427494: 0x2589eb90  addiu       $t1, $t4, -0x1470
    ctx->pc = 0x427494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962064));
    // 0x427498: 0x262bea70  addiu       $t3, $s1, -0x1590
    ctx->pc = 0x427498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961776));
    // 0x42749c: 0x258aeb90  addiu       $t2, $t4, -0x1470
    ctx->pc = 0x42749cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962064));
    // 0x4274a0: 0x69760007  ldl         $s6, 0x7($t3)
    ctx->pc = 0x4274a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x4274a4: 0x6d760000  ldr         $s6, 0x0($t3)
    ctx->pc = 0x4274a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x4274a8: 0x6977000f  ldl         $s7, 0xF($t3)
    ctx->pc = 0x4274a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4274ac: 0x6d770008  ldr         $s7, 0x8($t3)
    ctx->pc = 0x4274acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x4274b0: 0xb1560007  sdl         $s6, 0x7($t2)
    ctx->pc = 0x4274b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274b4: 0xb5560000  sdr         $s6, 0x0($t2)
    ctx->pc = 0x4274b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274b8: 0xb157000f  sdl         $s7, 0xF($t2)
    ctx->pc = 0x4274b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274bc: 0xb5570008  sdr         $s7, 0x8($t2)
    ctx->pc = 0x4274bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274c0: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x4274c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
    // 0x4274c4: 0x3c0d0070  lui         $t5, 0x70
    ctx->pc = 0x4274c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)112 << 16));
    // 0x4274c8: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4274c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4274cc: 0x3c026d00  lui         $v0, 0x6D00
    ctx->pc = 0x4274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
    // 0x4274d0: 0x2654ea80  addiu       $s4, $s2, -0x1580
    ctx->pc = 0x4274d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961792));
    // 0x4274d4: 0x25b0eba0  addiu       $s0, $t5, -0x1460
    ctx->pc = 0x4274d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962080));
    // 0x4274d8: 0x6a8c0007  ldl         $t4, 0x7($s4)
    ctx->pc = 0x4274d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4274dc: 0x6e8c0000  ldr         $t4, 0x0($s4)
    ctx->pc = 0x4274dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4274e0: 0x6a8f000f  ldl         $t7, 0xF($s4)
    ctx->pc = 0x4274e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x4274e4: 0x6e8f0008  ldr         $t7, 0x8($s4)
    ctx->pc = 0x4274e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4274e8: 0xb20c0007  sdl         $t4, 0x7($s0)
    ctx->pc = 0x4274e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274ec: 0xb60c0000  sdr         $t4, 0x0($s0)
    ctx->pc = 0x4274ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274f0: 0xb20f000f  sdl         $t7, 0xF($s0)
    ctx->pc = 0x4274f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274f4: 0xb60f0008  sdr         $t7, 0x8($s0)
    ctx->pc = 0x4274f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4274f8: 0xae6458d0  sw          $a0, 0x58D0($s3)
    ctx->pc = 0x4274f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158D0u, _value); } while (0);
    // 0x4274fc: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x4274fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x427500: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x427500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x427504: 0x3c056e00  lui         $a1, 0x6E00
    ctx->pc = 0x427504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28160 << 16));
    // 0x427508: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x427508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FEB88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEB88u, _value); } while (0);
    // 0x42750c: 0x34a5400d  ori         $a1, $a1, 0x400D
    ctx->pc = 0x42750cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16397);
    // 0x427510: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x427510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x427514: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x427514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6FEB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEB98u, _value); } while (0);
    // 0x427518: 0x25a7eba0  addiu       $a3, $t5, -0x1460
    ctx->pc = 0x427518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962080));
    // 0x42751c: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x42751cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x427520: 0x266358d0  addiu       $v1, $s3, 0x58D0
    ctx->pc = 0x427520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 22736));
    // 0x427524: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x427524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6FEBA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEBA8u, _value); } while (0);
    // 0x427528: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x427528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158FCu, _value); } while (0);
    // 0x42752c: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x42752cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6FEB78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FEB78u, _value); } while (0);
    // 0x427530: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x427530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158E0u, _value); } while (0);
    // 0x427534: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x427534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158E4u, _value); } while (0);
    // 0x427538: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x427538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158D4u, _value); } while (0);
    // 0x42753c: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x42753cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158E8u, _value); } while (0);
    // 0x427540: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x427540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158ECu, _value); } while (0);
    // 0x427544: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x427544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158D8u, _value); } while (0);
    // 0x427548: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x427548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158DCu, _value); } while (0);
    // 0x42754c: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x42754cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715900u, _value); } while (0);
    // 0x427550: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x427550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715904u, _value); } while (0);
    // 0x427554: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x427554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158F0u, _value); } while (0);
    // 0x427558: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x427558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158F4u, _value); } while (0);
    // 0x42755c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x42755cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x715908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715908u, _value); } while (0);
    // 0x427560: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x427560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x71590Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71590Cu, _value); } while (0);
    // 0x427564: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x427564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7158F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7158F8u, _value); } while (0);
    // 0x427568: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x427568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x42756c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x42756cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x427570: 0x244251d8  addiu       $v0, $v0, 0x51D8
    ctx->pc = 0x427570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20952));
    // 0x427574: 0x34630086  ori         $v1, $v1, 0x86
    ctx->pc = 0x427574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)134);
    // 0x427578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x427578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42757c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42757cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x427580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x427580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427584: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x427584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x427588: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x427588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x42758c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x42758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x427590: 0xc118508  jal         func_461420
    ctx->pc = 0x427590u;
    SET_GPR_U32(ctx, 31, 0x427598u);
    ctx->pc = 0x427594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427590u;
    // 0x427594: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x427590u, 0x427598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427598u;
label_427598:
    // 0x427598: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x427598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x42759c: 0xc11851c  jal         func_461470
    ctx->pc = 0x42759Cu;
    SET_GPR_U32(ctx, 31, 0x4275A4u);
    ctx->pc = 0x4275A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42759Cu;
    // 0x4275a0: 0x34840086  ori         $a0, $a0, 0x86 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)134);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x42759Cu, 0x4275A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4275A4u;
label_4275a4:
    // 0x4275a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4275a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4275a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4275a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4275ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4275acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4275b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4275b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4275b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4275b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4275b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4275b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4275bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4275bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4275c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4275c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4275c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4275c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4275c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4275C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275C8u;
        // 0x4275cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4275C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4275D0u;
}
