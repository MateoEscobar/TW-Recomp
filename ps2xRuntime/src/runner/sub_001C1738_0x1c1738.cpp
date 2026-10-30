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

// Function: sub_001C1738
// Address: 0x1c1738 - 0x1c1800
void sub_001C1738_0x1c1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1738_0x1c1738");
#endif

    switch (ctx->pc) {
        case 0x1c1788u: goto label_1c1788;
        default: break;
    }

    ctx->pc = 0x1c1738u;

    // 0x1c1738: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c173c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1c173cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1c1740: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c1740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c1744: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c1744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c1748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c174c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1750: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c1750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1754: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c1754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1c1758: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1760: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c1760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1764: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1764u;
    {
        const bool branch_taken_0x1c1764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1764u;
        // 0x1c1768: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1764) {
            ctx->pc = 0x1C17E0u;
            goto label_1c17e0;
        }
    }
    ctx->pc = 0x1C176Cu;
    // 0x1c176c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1c176cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1c1770: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x1c1770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1774: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1778: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1c1778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c177c: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1c177cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1c1780: 0xc05e602  jal         func_179808
    ctx->pc = 0x1C1780u;
    SET_GPR_U32(ctx, 31, 0x1C1788u);
    ctx->pc = 0x1C1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1780u;
    // 0x1c1784: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1C1780u, 0x1C1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1788u;
label_1c1788:
    // 0x1c1788: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1c1788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x1c178c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1c1790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1794: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1798: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1c1798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c179c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1c179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c17a0: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x1c17a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c17a4: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x1c17a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c17a8: 0xb20400a7  sdl         $a0, 0xA7($s0)
    ctx->pc = 0x1c17a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c17ac: 0xb60400a0  sdr         $a0, 0xA0($s0)
    ctx->pc = 0x1c17acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c17b0: 0xb20500af  sdl         $a1, 0xAF($s0)
    ctx->pc = 0x1c17b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c17b4: 0xb60500a8  sdr         $a1, 0xA8($s0)
    ctx->pc = 0x1c17b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c17b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c17bc: 0xae1300b4  sw          $s3, 0xB4($s0)
    ctx->pc = 0x1c17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 19));
    // 0x1c17c0: 0xae1100b8  sw          $s1, 0xB8($s0)
    ctx->pc = 0x1c17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 17));
    // 0x1c17c4: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1c17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1c17c8: 0xa20200c0  sb          $v0, 0xC0($s0)
    ctx->pc = 0x1c17c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c17cc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1c17ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1c17d0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c17d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1c17d8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1c17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1c17dc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1c17e0:
    // 0x1c17e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c17e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c17e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c17e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c17e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c17e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c17ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c17ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c17f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c17f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c17f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C17F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17F4u;
        // 0x1c17f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C17F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C17FCu;
    // 0x1c17fc: 0x0  nop
    ctx->pc = 0x1c17fcu;
    // NOP
    ctx->pc = 0x1c1800u;
}
