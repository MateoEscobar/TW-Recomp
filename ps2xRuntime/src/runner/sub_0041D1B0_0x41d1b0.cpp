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

// Function: sub_0041D1B0
// Address: 0x41d1b0 - 0x41d2ec
void sub_0041D1B0_0x41d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D1B0_0x41d1b0");
#endif

    switch (ctx->pc) {
        case 0x41d1b0u: goto label_41d1b0;
        case 0x41d1b4u: goto label_41d1b4;
        case 0x41d1b8u: goto label_41d1b8;
        case 0x41d1bcu: goto label_41d1bc;
        case 0x41d1c0u: goto label_41d1c0;
        case 0x41d1c4u: goto label_41d1c4;
        case 0x41d1c8u: goto label_41d1c8;
        case 0x41d1ccu: goto label_41d1cc;
        case 0x41d1d0u: goto label_41d1d0;
        case 0x41d1d4u: goto label_41d1d4;
        case 0x41d1d8u: goto label_41d1d8;
        case 0x41d1dcu: goto label_41d1dc;
        case 0x41d1e0u: goto label_41d1e0;
        case 0x41d1e4u: goto label_41d1e4;
        case 0x41d1e8u: goto label_41d1e8;
        case 0x41d1ecu: goto label_41d1ec;
        case 0x41d1f0u: goto label_41d1f0;
        case 0x41d1f4u: goto label_41d1f4;
        case 0x41d1f8u: goto label_41d1f8;
        case 0x41d1fcu: goto label_41d1fc;
        case 0x41d200u: goto label_41d200;
        case 0x41d204u: goto label_41d204;
        case 0x41d208u: goto label_41d208;
        case 0x41d20cu: goto label_41d20c;
        case 0x41d210u: goto label_41d210;
        case 0x41d214u: goto label_41d214;
        case 0x41d218u: goto label_41d218;
        case 0x41d21cu: goto label_41d21c;
        case 0x41d220u: goto label_41d220;
        case 0x41d224u: goto label_41d224;
        case 0x41d228u: goto label_41d228;
        case 0x41d22cu: goto label_41d22c;
        case 0x41d230u: goto label_41d230;
        case 0x41d234u: goto label_41d234;
        case 0x41d238u: goto label_41d238;
        case 0x41d23cu: goto label_41d23c;
        case 0x41d240u: goto label_41d240;
        case 0x41d244u: goto label_41d244;
        case 0x41d248u: goto label_41d248;
        case 0x41d24cu: goto label_41d24c;
        case 0x41d250u: goto label_41d250;
        case 0x41d254u: goto label_41d254;
        case 0x41d258u: goto label_41d258;
        case 0x41d25cu: goto label_41d25c;
        case 0x41d260u: goto label_41d260;
        case 0x41d264u: goto label_41d264;
        case 0x41d268u: goto label_41d268;
        case 0x41d26cu: goto label_41d26c;
        case 0x41d270u: goto label_41d270;
        case 0x41d274u: goto label_41d274;
        case 0x41d278u: goto label_41d278;
        case 0x41d27cu: goto label_41d27c;
        case 0x41d280u: goto label_41d280;
        case 0x41d284u: goto label_41d284;
        case 0x41d288u: goto label_41d288;
        case 0x41d28cu: goto label_41d28c;
        case 0x41d290u: goto label_41d290;
        case 0x41d294u: goto label_41d294;
        case 0x41d298u: goto label_41d298;
        case 0x41d29cu: goto label_41d29c;
        case 0x41d2a0u: goto label_41d2a0;
        case 0x41d2a4u: goto label_41d2a4;
        case 0x41d2a8u: goto label_41d2a8;
        case 0x41d2acu: goto label_41d2ac;
        case 0x41d2b0u: goto label_41d2b0;
        case 0x41d2b4u: goto label_41d2b4;
        case 0x41d2b8u: goto label_41d2b8;
        case 0x41d2bcu: goto label_41d2bc;
        case 0x41d2c0u: goto label_41d2c0;
        case 0x41d2c4u: goto label_41d2c4;
        case 0x41d2c8u: goto label_41d2c8;
        case 0x41d2ccu: goto label_41d2cc;
        case 0x41d2d0u: goto label_41d2d0;
        case 0x41d2d4u: goto label_41d2d4;
        case 0x41d2d8u: goto label_41d2d8;
        case 0x41d2dcu: goto label_41d2dc;
        case 0x41d2e0u: goto label_41d2e0;
        case 0x41d2e4u: goto label_41d2e4;
        case 0x41d2e8u: goto label_41d2e8;
        default: break;
    }

    ctx->pc = 0x41d1b0u;

label_41d1b0:
    // 0x41d1b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41d1b4:
    // 0x41d1b4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41d1b8:
    // 0x41d1b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41d1bc:
    // 0x41d1bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41d1c0:
    // 0x41d1c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41d1c4:
    // 0x41d1c4: 0x2447afd0  addiu       $a3, $v0, -0x5030
    ctx->pc = 0x41d1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946768));
label_41d1c8:
    // 0x41d1c8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x41d1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_41d1cc:
    // 0x41d1cc: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x41d1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_41d1d0:
    // 0x41d1d0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x41d1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_41d1d4:
    // 0x41d1d4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x41d1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_41d1d8:
    // 0x41d1d8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x41d1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_41d1dc:
    // 0x41d1dc: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x41d1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_41d1e0:
    // 0x41d1e0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x41d1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1e4:
    // 0x41d1e4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x41d1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1e8:
    // 0x41d1e8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x41d1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1ec:
    // 0x41d1ec: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x41d1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1f0:
    // 0x41d1f0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x41d1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1f4:
    // 0x41d1f4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x41d1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d1f8:
    // 0x41d1f8: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x41d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_41d1fc:
    // 0x41d1fc: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x41d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_41d200:
    // 0x41d200: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x41d200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_41d204:
    // 0x41d204: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x41d204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_41d208:
    // 0x41d208: 0x68e6002f  ldl         $a2, 0x2F($a3)
    ctx->pc = 0x41d208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_41d20c:
    // 0x41d20c: 0x6ce60028  ldr         $a2, 0x28($a3)
    ctx->pc = 0x41d20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_41d210:
    // 0x41d210: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x41d210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d214:
    // 0x41d214: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x41d214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d218:
    // 0x41d218: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x41d218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d21c:
    // 0x41d21c: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x41d21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d220:
    // 0x41d220: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x41d220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d224:
    // 0x41d224: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x41d224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d228:
    // 0x41d228: 0x68e30037  ldl         $v1, 0x37($a3)
    ctx->pc = 0x41d228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_41d22c:
    // 0x41d22c: 0x6ce30030  ldr         $v1, 0x30($a3)
    ctx->pc = 0x41d22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_41d230:
    // 0x41d230: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x41d230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_41d234:
    // 0x41d234: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x41d234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d238:
    // 0x41d238: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x41d238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41d23c:
    // 0x41d23c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x41d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_41d240:
    // 0x41d240: 0xc136ad6  jal         func_4DAB58
label_41d244:
    if (ctx->pc == 0x41D244u) {
        ctx->pc = 0x41D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D240u;
        // 0x41d244: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D248u;
        goto label_41d248;
    }
    ctx->pc = 0x41D240u;
    SET_GPR_U32(ctx, 31, 0x41D248u);
    ctx->pc = 0x41D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D240u;
    // 0x41d244: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x41D240u, 0x41D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D248u;
label_41d248:
    // 0x41d248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d24c:
    // 0x41d24c: 0xc136ad4  jal         func_4DAB50
label_41d250:
    if (ctx->pc == 0x41D250u) {
        ctx->pc = 0x41D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D24Cu;
        // 0x41d250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D254u;
        goto label_41d254;
    }
    ctx->pc = 0x41D24Cu;
    SET_GPR_U32(ctx, 31, 0x41D254u);
    ctx->pc = 0x41D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D24Cu;
    // 0x41d250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x41D24Cu, 0x41D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D254u;
label_41d254:
    // 0x41d254: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x41d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_41d258:
    // 0x41d258: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41d258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_41d25c:
    // 0x41d25c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41d25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41d260:
    // 0x41d260: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x41d260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_41d264:
    // 0x41d264: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41d264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41d268:
    // 0x41d268: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x41d268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41d26c:
    // 0x41d26c: 0xc109076  jal         func_4241D8
label_41d270:
    if (ctx->pc == 0x41D270u) {
        ctx->pc = 0x41D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D26Cu;
        // 0x41d270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D274u;
        goto label_41d274;
    }
    ctx->pc = 0x41D26Cu;
    SET_GPR_U32(ctx, 31, 0x41D274u);
    ctx->pc = 0x41D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D26Cu;
    // 0x41d270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x41D26Cu, 0x41D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D274u;
label_41d274:
    // 0x41d274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d278:
    // 0x41d278: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_41d27c:
    if (ctx->pc == 0x41D27Cu) {
        ctx->pc = 0x41D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D278u;
        // 0x41d27c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D280u;
        goto label_41d280;
    }
    ctx->pc = 0x41D278u;
    {
        const bool branch_taken_0x41d278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D278u;
        // 0x41d27c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d278) {
            ctx->pc = 0x41D288u;
            goto label_41d288;
        }
    }
    ctx->pc = 0x41D280u;
label_41d280:
    // 0x41d280: 0x1000000a  b           . + 4 + (0xA << 2)
label_41d284:
    if (ctx->pc == 0x41D284u) {
        ctx->pc = 0x41D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D280u;
        // 0x41d284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D288u;
        goto label_41d288;
    }
    ctx->pc = 0x41D280u;
    {
        const bool branch_taken_0x41d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D280u;
        // 0x41d284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d280) {
            ctx->pc = 0x41D2ACu;
            goto label_41d2ac;
        }
    }
    ctx->pc = 0x41D288u;
label_41d288:
    // 0x41d288: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x41d288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d28c:
    // 0x41d28c: 0x0  nop
    ctx->pc = 0x41d28cu;
    // NOP
label_41d290:
    // 0x41d290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x41d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41d294:
    // 0x41d294: 0x1202fffa  beq         $s0, $v0, . + 4 + (-0x6 << 2)
label_41d298:
    if (ctx->pc == 0x41D298u) {
        ctx->pc = 0x41D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D294u;
        // 0x41d298: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D29Cu;
        goto label_41d29c;
    }
    ctx->pc = 0x41D294u;
    {
        const bool branch_taken_0x41d294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x41D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D294u;
        // 0x41d298: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d294) {
            ctx->pc = 0x41D280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41d280;
        }
    }
    ctx->pc = 0x41D29Cu;
label_41d29c:
    // 0x41d29c: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x41d29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_41d2a0:
    // 0x41d2a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_41d2a4:
    if (ctx->pc == 0x41D2A4u) {
        ctx->pc = 0x41D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2A0u;
        // 0x41d2a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2A8u;
        goto label_41d2a8;
    }
    ctx->pc = 0x41D2A0u;
    {
        const bool branch_taken_0x41d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2A0u;
        // 0x41d2a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d2a0) {
            ctx->pc = 0x41D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41d290;
        }
    }
    ctx->pc = 0x41D2A8u;
label_41d2a8:
    // 0x41d2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d2ac:
    // 0x41d2ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41d2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41d2b0:
    // 0x41d2b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41d2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41d2b4:
    // 0x41d2b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41d2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41d2b8:
    // 0x41d2b8: 0x3e00008  jr          $ra
label_41d2bc:
    if (ctx->pc == 0x41D2BCu) {
        ctx->pc = 0x41D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2B8u;
        // 0x41d2bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2C0u;
        goto label_41d2c0;
    }
    ctx->pc = 0x41D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2B8u;
        // 0x41d2bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D2C0u;
label_41d2c0:
    // 0x41d2c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_41d2c4:
    // 0x41d2c4: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x41d2c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
label_41d2c8:
    // 0x41d2c8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x41d2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_41d2cc:
    // 0x41d2cc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_41d2d0:
    if (ctx->pc == 0x41D2D0u) {
        ctx->pc = 0x41D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2CCu;
        // 0x41d2d0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2D4u;
        goto label_41d2d4;
    }
    ctx->pc = 0x41D2CCu;
    {
        const bool branch_taken_0x41d2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2CCu;
        // 0x41d2d0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d2cc) {
            ctx->pc = 0x41D3A0u;
            return;
        }
    }
    ctx->pc = 0x41D2D4u;
label_41d2d4:
    // 0x41d2d4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41d2d8:
    // 0x41d2d8: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x41d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_41d2dc:
    // 0x41d2dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41d2e0:
    // 0x41d2e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41d2e4:
    // 0x41d2e4: 0x800008  jr          $a0
label_41d2e8:
    if (ctx->pc == 0x41D2E8u) {
        ctx->pc = 0x41D2ECu;
        goto label_fallthrough_0x41d2e4;
    }
    ctx->pc = 0x41D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D2E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x41d2e4:
    ctx->pc = 0x41D2ECu;
}
