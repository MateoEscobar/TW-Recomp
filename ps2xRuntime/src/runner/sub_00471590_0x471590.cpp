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

// Function: sub_00471590
// Address: 0x471590 - 0x4716e0
void sub_00471590_0x471590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471590_0x471590");
#endif

    switch (ctx->pc) {
        case 0x4715e0u: goto label_4715e0;
        default: break;
    }

    ctx->pc = 0x471590u;

    // 0x471590: 0x27bdf8e0  addiu       $sp, $sp, -0x720
    ctx->pc = 0x471590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965472));
    // 0x471594: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x471594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x471598: 0x68820057  ldl         $v0, 0x57($a0)
    ctx->pc = 0x471598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x47159c: 0x6c820050  ldr         $v0, 0x50($a0)
    ctx->pc = 0x47159cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4715a0: 0x6883005f  ldl         $v1, 0x5F($a0)
    ctx->pc = 0x4715a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4715a4: 0x6c830058  ldr         $v1, 0x58($a0)
    ctx->pc = 0x4715a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4715a8: 0x68860067  ldl         $a2, 0x67($a0)
    ctx->pc = 0x4715a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4715ac: 0x6c860060  ldr         $a2, 0x60($a0)
    ctx->pc = 0x4715acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4715b0: 0xb3a20107  sdl         $v0, 0x107($sp)
    ctx->pc = 0x4715b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715b4: 0xb7a20100  sdr         $v0, 0x100($sp)
    ctx->pc = 0x4715b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715b8: 0xb3a3010f  sdl         $v1, 0x10F($sp)
    ctx->pc = 0x4715b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715bc: 0xb7a30108  sdr         $v1, 0x108($sp)
    ctx->pc = 0x4715bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715c0: 0xb3a60117  sdl         $a2, 0x117($sp)
    ctx->pc = 0x4715c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715c4: 0xb7a60110  sdr         $a2, 0x110($sp)
    ctx->pc = 0x4715c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4715c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4715c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4715cc: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x4715ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4715d0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4715d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4715d4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x4715d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x4715d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4715d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4715dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4715dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4715e0:
    // 0x4715e0: 0x443001f  bgezl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4715E0u;
    {
        const bool branch_taken_0x4715e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4715e0) {
            ctx->pc = 0x4715E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4715E0u;
            // 0x4715e4: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471660u;
            goto label_471660;
        }
    }
    ctx->pc = 0x4715E8u;
    // 0x4715e8: 0x6bab0107  ldl         $t3, 0x107($sp)
    ctx->pc = 0x4715e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4715ec: 0x6fab0100  ldr         $t3, 0x100($sp)
    ctx->pc = 0x4715ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4715f0: 0x6bac010f  ldl         $t4, 0x10F($sp)
    ctx->pc = 0x4715f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4715f4: 0x6fac0108  ldr         $t4, 0x108($sp)
    ctx->pc = 0x4715f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4715f8: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x4715f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4715fc: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x4715fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x471600: 0xb0ab004f  sdl         $t3, 0x4F($a1)
    ctx->pc = 0x471600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471604: 0xb4ab0048  sdr         $t3, 0x48($a1)
    ctx->pc = 0x471604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471608: 0xb0ac0057  sdl         $t4, 0x57($a1)
    ctx->pc = 0x471608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47160c: 0xb4ac0050  sdr         $t4, 0x50($a1)
    ctx->pc = 0x47160cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471610: 0xb0a2005f  sdl         $v0, 0x5F($a1)
    ctx->pc = 0x471610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471614: 0xb4a20058  sdr         $v0, 0x58($a1)
    ctx->pc = 0x471614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471618: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x471618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
    // 0x47161c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x47161cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x471620: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x471620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x471624: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x471624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x471628: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x471628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x47162c: 0x68ec000f  ldl         $t4, 0xF($a3)
    ctx->pc = 0x47162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x471630: 0x6cec0008  ldr         $t4, 0x8($a3)
    ctx->pc = 0x471630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x471634: 0x68e20017  ldl         $v0, 0x17($a3)
    ctx->pc = 0x471634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x471638: 0x6ce20010  ldr         $v0, 0x10($a3)
    ctx->pc = 0x471638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x47163c: 0xb3ab0107  sdl         $t3, 0x107($sp)
    ctx->pc = 0x47163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471640: 0xb7ab0100  sdr         $t3, 0x100($sp)
    ctx->pc = 0x471640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471644: 0xb3ac010f  sdl         $t4, 0x10F($sp)
    ctx->pc = 0x471644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471648: 0xb7ac0108  sdr         $t4, 0x108($sp)
    ctx->pc = 0x471648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47164c: 0xb3a20117  sdl         $v0, 0x117($sp)
    ctx->pc = 0x47164cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471650: 0xb7a20110  sdr         $v0, 0x110($sp)
    ctx->pc = 0x471650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471654: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x471654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x471658: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x471658u;
    {
        const bool branch_taken_0x471658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471658u;
        // 0x47165c: 0x24e7ffe8  addiu       $a3, $a3, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471658) {
            ctx->pc = 0x4716C8u;
            goto label_4716c8;
        }
    }
    ctx->pc = 0x471660u;
label_471660:
    // 0x471660: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x471660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x471664: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x471664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x471668: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x471668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x47166c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x47166cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x471670: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x471670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x471674: 0x6bab0107  ldl         $t3, 0x107($sp)
    ctx->pc = 0x471674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x471678: 0x6fab0100  ldr         $t3, 0x100($sp)
    ctx->pc = 0x471678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x47167c: 0x6bac010f  ldl         $t4, 0x10F($sp)
    ctx->pc = 0x47167cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x471680: 0x6fac0108  ldr         $t4, 0x108($sp)
    ctx->pc = 0x471680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x471684: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x471684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x471688: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x471688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x47168c: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x47168cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471690: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x471690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471694: 0xb0ec000f  sdl         $t4, 0xF($a3)
    ctx->pc = 0x471694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x471698: 0xb4ec0008  sdr         $t4, 0x8($a3)
    ctx->pc = 0x471698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47169c: 0xb0e20017  sdl         $v0, 0x17($a3)
    ctx->pc = 0x47169cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4716a0: 0xb4e20010  sdr         $v0, 0x10($a3)
    ctx->pc = 0x4716a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4716a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4716a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4716a8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x4716a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4716ac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4716acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4716b0: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x4716b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x4716b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4716b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4716b8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x4716b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4716bc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x4716bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x4716c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4716c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4716c4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x4716c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4716c8:
    // 0x4716c8: 0x523ffc5  bgezl       $t1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x4716C8u;
    {
        const bool branch_taken_0x4716c8 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x4716c8) {
            ctx->pc = 0x4716CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4716C8u;
            // 0x4716cc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4715E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4715e0;
        }
    }
    ctx->pc = 0x4716D0u;
    // 0x4716d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4716d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4716d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4716D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4716D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4716D4u;
        // 0x4716d8: 0x27bd0720  addiu       $sp, $sp, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4716D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4716DCu;
    // 0x4716dc: 0x0  nop
    ctx->pc = 0x4716dcu;
    // NOP
    ctx->pc = 0x4716e0u;
}
