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

// Function: sub_002F8138
// Address: 0x2f8138 - 0x2f8240
void sub_002F8138_0x2f8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8138_0x2f8138");
#endif

    switch (ctx->pc) {
        case 0x2f81e0u: goto label_2f81e0;
        case 0x2f81e8u: goto label_2f81e8;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f8208u: goto label_2f8208;
        case 0x2f8210u: goto label_2f8210;
        case 0x2f821cu: goto label_2f821c;
        default: break;
    }

    ctx->pc = 0x2f8138u;

    // 0x2f8138: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f8138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f813c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f8140: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f8140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f8144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f8144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8148: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f814c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f8150: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f8150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8154: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f8154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8158: 0x684301ab  ldl         $v1, 0x1AB($v0)
    ctx->pc = 0x2f8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f815c: 0x6c4301a4  ldr         $v1, 0x1A4($v0)
    ctx->pc = 0x2f815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f8160: 0x684401b3  ldl         $a0, 0x1B3($v0)
    ctx->pc = 0x2f8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8164: 0x6c4401ac  ldr         $a0, 0x1AC($v0)
    ctx->pc = 0x2f8164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f8168: 0x684501bb  ldl         $a1, 0x1BB($v0)
    ctx->pc = 0x2f8168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f816c: 0x6c4501b4  ldr         $a1, 0x1B4($v0)
    ctx->pc = 0x2f816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f8170: 0x684601c3  ldl         $a2, 0x1C3($v0)
    ctx->pc = 0x2f8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f8174: 0x6c4601bc  ldr         $a2, 0x1BC($v0)
    ctx->pc = 0x2f8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f8178: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2f8178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f817c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2f817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8180: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2f8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8184: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2f8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8188: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2f8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f818c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2f818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8190: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x2f8190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8194: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x2f8194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8198: 0x684301cb  ldl         $v1, 0x1CB($v0)
    ctx->pc = 0x2f8198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f819c: 0x6c4301c4  ldr         $v1, 0x1C4($v0)
    ctx->pc = 0x2f819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 452); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f81a0: 0x684401d3  ldl         $a0, 0x1D3($v0)
    ctx->pc = 0x2f81a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 467); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f81a4: 0x6c4401cc  ldr         $a0, 0x1CC($v0)
    ctx->pc = 0x2f81a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f81a8: 0x684501db  ldl         $a1, 0x1DB($v0)
    ctx->pc = 0x2f81a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 475); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f81ac: 0x6c4501d4  ldr         $a1, 0x1D4($v0)
    ctx->pc = 0x2f81acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 468); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f81b0: 0x684601e3  ldl         $a2, 0x1E3($v0)
    ctx->pc = 0x2f81b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f81b4: 0x6c4601dc  ldr         $a2, 0x1DC($v0)
    ctx->pc = 0x2f81b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 476); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f81b8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2f81b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81bc: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2f81bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81c0: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2f81c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81c4: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2f81c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81c8: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x2f81c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81cc: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x2f81ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d0: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x2f81d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d4: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x2f81d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f81d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f81dc: 0x0  nop
    ctx->pc = 0x2f81dcu;
    // NOP
label_2f81e0:
    // 0x2f81e0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2F81E0u;
    SET_GPR_U32(ctx, 31, 0x2F81E8u);
    ctx->pc = 0x2F81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F81E0u;
    // 0x2f81e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2F81E0u, 0x2F81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F81E8u;
label_2f81e8:
    // 0x2f81e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f81ec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F81ECu;
    SET_GPR_U32(ctx, 31, 0x2F81F4u);
    ctx->pc = 0x2F81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F81ECu;
    // 0x2f81f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F81ECu, 0x2F81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F81F4u;
label_2f81f4:
    // 0x2f81f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f81f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f81f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F81F8u;
    {
        const bool branch_taken_0x2f81f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81F8u;
        // 0x2f81fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81f8) {
            ctx->pc = 0x2F821Cu;
            goto label_2f821c;
        }
    }
    ctx->pc = 0x2F8200u;
    // 0x2f8200: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2F8200u;
    SET_GPR_U32(ctx, 31, 0x2F8208u);
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2F8200u, 0x2F8208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8208u;
label_2f8208:
    // 0x2f8208: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F8208u;
    SET_GPR_U32(ctx, 31, 0x2F8210u);
    ctx->pc = 0x2F820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8208u;
    // 0x2f820c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F8208u, 0x2F8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8210u;
label_2f8210:
    // 0x2f8210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8214: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x2F8214u;
    SET_GPR_U32(ctx, 31, 0x2F821Cu);
    ctx->pc = 0x2F8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8214u;
    // 0x2f8218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2F8214u, 0x2F821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F821Cu;
label_2f821c:
    // 0x2f821c: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2f821cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f8220: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F8220u;
    {
        const bool branch_taken_0x2f8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8220) {
            ctx->pc = 0x2F8224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8220u;
            // 0x2f8224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F81E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f81e0;
        }
    }
    ctx->pc = 0x2F8228u;
    // 0x2f8228: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f8228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f822c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f822cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8230: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f8230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8238: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8238u;
        // 0x2f823c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8240u;
}
