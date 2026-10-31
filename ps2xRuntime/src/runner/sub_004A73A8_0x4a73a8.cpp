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

// Function: sub_004A73A8
// Address: 0x4a73a8 - 0x4a75c8
void sub_004A73A8_0x4a73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A73A8_0x4a73a8");
#endif

    switch (ctx->pc) {
        case 0x4a7408u: goto label_4a7408;
        case 0x4a74e0u: goto label_4a74e0;
        case 0x4a7520u: goto label_4a7520;
        case 0x4a7588u: goto label_4a7588;
        default: break;
    }

    ctx->pc = 0x4a73a8u;

label_4a73a8:
    // 0x4a73a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a73a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4a73ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a73acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4a73b0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a73b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4a73b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a73b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a73b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4a73bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a73bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a73c0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4a73c4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a73c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4a73c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4a73cc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4a73d0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x4a73d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a73d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4a73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4a73dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a73e0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4a73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a73e4: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x4a73e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4a73e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a73ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A73ECu;
    {
        const bool branch_taken_0x4a73ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73ECu;
        // 0x4a73f0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73ec) {
            ctx->pc = 0x4A7428u;
            goto label_4a7428;
        }
    }
    ctx->pc = 0x4A73F4u;
    // 0x4a73f4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4a73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a73f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A73F8u;
    {
        const bool branch_taken_0x4a73f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73F8u;
        // 0x4a73fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73f8) {
            ctx->pc = 0x4A7428u;
            goto label_4a7428;
        }
    }
    ctx->pc = 0x4A7400u;
    // 0x4a7400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a7400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7404: 0x0  nop
    ctx->pc = 0x4a7404u;
    // NOP
label_4a7408:
    // 0x4a7408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a740c: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A740Cu;
    {
        const bool branch_taken_0x4a740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4a740c) {
            ctx->pc = 0x4A7410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A740Cu;
            // 0x4a7410: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A741Cu;
            goto label_4a741c;
        }
    }
    ctx->pc = 0x4A7414u;
    // 0x4a7414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7414u;
    {
        const bool branch_taken_0x4a7414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7414u;
        // 0x4a7418: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7414) {
            ctx->pc = 0x4A742Cu;
            goto label_4a742c;
        }
    }
    ctx->pc = 0x4A741Cu;
label_4a741c:
    // 0x4a741c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x4a741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4a7420: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A7420u;
    {
        const bool branch_taken_0x4a7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7420u;
        // 0x4a7424: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7420) {
            ctx->pc = 0x4A7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7408;
        }
    }
    ctx->pc = 0x4A7428u;
label_4a7428:
    // 0x4a7428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a742c:
    // 0x4a742c: 0x50a0005c  beql        $a1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x4A742Cu;
    {
        const bool branch_taken_0x4a742c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a742c) {
            ctx->pc = 0x4A7430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A742Cu;
            // 0x4a7430: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A75A0u;
            goto label_4a75a0;
        }
    }
    ctx->pc = 0x4A7434u;
    // 0x4a7434: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a7438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a7438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a743c: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x4A743Cu;
    {
        const bool branch_taken_0x4a743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A743Cu;
        // 0x4a7440: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a743c) {
            ctx->pc = 0x4A759Cu;
            goto label_4a759c;
        }
    }
    ctx->pc = 0x4A7444u;
    // 0x4a7444: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4a7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4a7448: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a744c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x4a744cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7450: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7454: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4a7454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a7458: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4a7458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a745c: 0x2462ffdc  addiu       $v0, $v1, -0x24
    ctx->pc = 0x4a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
    // 0x4a7460: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a7464: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7464u;
    {
        const bool branch_taken_0x4a7464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7464u;
        // 0x4a7468: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7464) {
            ctx->pc = 0x4A74B4u;
            goto label_4a74b4;
        }
    }
    ctx->pc = 0x4A746Cu;
    // 0x4a746c: 0x6843ffe3  ldl         $v1, -0x1D($v0)
    ctx->pc = 0x4a746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a7470: 0x6c43ffdc  ldr         $v1, -0x24($v0)
    ctx->pc = 0x4a7470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a7474: 0x6844ffeb  ldl         $a0, -0x15($v0)
    ctx->pc = 0x4a7474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a7478: 0x6c44ffe4  ldr         $a0, -0x1C($v0)
    ctx->pc = 0x4a7478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a747c: 0x6847fff3  ldl         $a3, -0xD($v0)
    ctx->pc = 0x4a747cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4a7480: 0x6c47ffec  ldr         $a3, -0x14($v0)
    ctx->pc = 0x4a7480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4a7484: 0x6848fffb  ldl         $t0, -0x5($v0)
    ctx->pc = 0x4a7484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4a7488: 0x6c48fff4  ldr         $t0, -0xC($v0)
    ctx->pc = 0x4a7488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4a748c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x4a748cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a7490: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x4a7490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a7494: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x4a7494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a7498: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x4a7498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a749c: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x4a749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a74a0: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x4a74a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a74a4: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x4a74a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a74a8: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x4a74a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a74ac: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x4a74acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4a74b0: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x4a74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_4a74b4:
    // 0x4a74b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a74b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a74bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a74c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4a74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a74c4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x4A74C4u;
    {
        const bool branch_taken_0x4a74c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A74C4u;
        // 0x4a74c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a74c4) {
            ctx->pc = 0x4A759Cu;
            goto label_4a759c;
        }
    }
    ctx->pc = 0x4A74CCu;
    // 0x4a74cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a74ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a74d0: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x4a74d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a74d4: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4a74d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a74d8: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x4a74d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a74dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a74e0:
    // 0x4a74e0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a74e4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x4a74e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74e8: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x4a74e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a74ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a74f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a74f4: 0x10510024  beq         $v0, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A74F4u;
    {
        const bool branch_taken_0x4a74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4A74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A74F4u;
        // 0x4a74f8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a74f4) {
            ctx->pc = 0x4A7588u;
            goto label_4a7588;
        }
    }
    ctx->pc = 0x4A74FCu;
    // 0x4a74fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7500: 0xb72018  mult        $a0, $a1, $s7
    ctx->pc = 0x4a7500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a7504: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4a7504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a7508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a7508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a750c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x4a750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4a7510: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x4A7510u;
    {
        const bool branch_taken_0x4a7510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7510u;
        // 0x4a7514: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7510) {
            ctx->pc = 0x4A753Cu;
            goto label_4a753c;
        }
    }
    ctx->pc = 0x4A7518u;
    // 0x4a7518: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a751c: 0x0  nop
    ctx->pc = 0x4a751cu;
    // NOP
label_4a7520:
    // 0x4a7520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7524: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7524u;
    {
        const bool branch_taken_0x4a7524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7524u;
        // 0x4a7528: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7524) {
            ctx->pc = 0x4A7544u;
            goto label_4a7544;
        }
    }
    ctx->pc = 0x4A752Cu;
    // 0x4a752c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a7530: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4a7530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4a7534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A7534u;
    {
        const bool branch_taken_0x4a7534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7534u;
        // 0x4a7538: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7534) {
            ctx->pc = 0x4A7520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7520;
        }
    }
    ctx->pc = 0x4A753Cu;
label_4a753c:
    // 0x4a753c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a7544:
    // 0x4a7544: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A7544u;
    {
        const bool branch_taken_0x4a7544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a7544) {
            ctx->pc = 0x4A7548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7544u;
            // 0x4a7548: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7554u;
            goto label_4a7554;
        }
    }
    ctx->pc = 0x4A754Cu;
    // 0x4a754c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A754Cu;
    {
        const bool branch_taken_0x4a754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A754Cu;
        // 0x4a7550: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a754c) {
            ctx->pc = 0x4A7560u;
            goto label_4a7560;
        }
    }
    ctx->pc = 0x4A7554u;
label_4a7554:
    // 0x4a7554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a7554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a7558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a755c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a7560:
    // 0x4a7560: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A7560u;
    {
        const bool branch_taken_0x4a7560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7560) {
            ctx->pc = 0x4A7564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7560u;
            // 0x4a7564: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A758Cu;
            goto label_4a758c;
        }
    }
    ctx->pc = 0x4A7568u;
    // 0x4a7568: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x4a7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x4a756c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4a756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4a7570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a7570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a7574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7578: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a757c: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x4a757cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a7580: 0xc129cea  jal         func_4A73A8
    ctx->pc = 0x4A7580u;
    SET_GPR_U32(ctx, 31, 0x4A7588u);
    ctx->pc = 0x4A7584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7580u;
    // 0x4a7584: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A73A8u;
    goto label_4a73a8;
    ctx->pc = 0x4A7588u;
label_4a7588:
    // 0x4a7588: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a758c:
    // 0x4a758c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7590: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a7590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7594: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4A7594u;
    {
        const bool branch_taken_0x4a7594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7594) {
            ctx->pc = 0x4A7598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7594u;
            // 0x4a7598: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A74E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a74e0;
        }
    }
    ctx->pc = 0x4A759Cu;
label_4a759c:
    // 0x4a759c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a759cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a75a0:
    // 0x4a75a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a75a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a75a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a75a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a75a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a75a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a75ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a75acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a75b0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a75b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a75b4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a75b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a75b8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a75b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a75bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a75bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a75c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A75C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A75C0u;
        // 0x4a75c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A75C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A75C8u;
}
