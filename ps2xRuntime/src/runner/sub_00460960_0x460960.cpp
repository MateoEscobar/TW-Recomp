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

// Function: sub_00460960
// Address: 0x460960 - 0x460cf0
void sub_00460960_0x460960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460960_0x460960");
#endif

    switch (ctx->pc) {
        case 0x4609fcu: goto label_4609fc;
        case 0x460a20u: goto label_460a20;
        case 0x460a9cu: goto label_460a9c;
        case 0x460b34u: goto label_460b34;
        case 0x460b40u: goto label_460b40;
        case 0x460c48u: goto label_460c48;
        case 0x460c68u: goto label_460c68;
        case 0x460c8cu: goto label_460c8c;
        case 0x460cb0u: goto label_460cb0;
        default: break;
    }

    ctx->pc = 0x460960u;

    // 0x460960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x460960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x460964: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x460964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460968: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x460968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x46096c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x46096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x460970: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x460970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x460974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x460974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460978: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x460978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x46097c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x46097cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460980: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x460980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x460984: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x460984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x460988: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x460988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x46098c: 0x2635003c  addiu       $s5, $s1, 0x3C
    ctx->pc = 0x46098cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x460990: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x460990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x460994: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x460994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460998: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x460998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x46099c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x46099cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4609a0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4609a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4609a4: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x4609a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x4609a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4609a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4609ac: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x4609acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4609b0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4609b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4609b4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4609B4u;
    {
        const bool branch_taken_0x4609b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4609B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4609B4u;
        // 0x4609b8: 0x8d360018  lw          $s6, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4609b4) {
            ctx->pc = 0x460A8Cu;
            goto label_460a8c;
        }
    }
    ctx->pc = 0x4609BCu;
    // 0x4609bc: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x4609bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x4609c0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4609c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4609c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4609c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4609c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4609c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4609cc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4609ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4609d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4609d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4609d4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4609d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4609d8: 0x24c8e810  addiu       $t0, $a2, -0x17F0
    ctx->pc = 0x4609d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961168));
    // 0x4609dc: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x4609dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4609e0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x4609e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4609e4: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4609e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58E818u));
    // 0x4609e8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4609e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4609ec: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4609ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4609f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4609f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4609f4: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x4609F4u;
    SET_GPR_U32(ctx, 31, 0x4609FCu);
    ctx->pc = 0x4609F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4609F4u;
    // 0x4609f8: 0x8ed0005c  lw          $s0, 0x5C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x4609F4u, 0x4609FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4609FCu;
label_4609fc:
    // 0x4609fc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4609fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460a00: 0xf3102a  slt         $v0, $a3, $s3
    ctx->pc = 0x460a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x460a04: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x460A04u;
    {
        const bool branch_taken_0x460a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460A04u;
        // 0x460a08: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460a04) {
            ctx->pc = 0x460A8Cu;
            goto label_460a8c;
        }
    }
    ctx->pc = 0x460A0Cu;
    // 0x460a0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x460a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x460a10: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x460a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x460a14: 0x2673823  subu        $a3, $s3, $a3
    ctx->pc = 0x460a14u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x460a18: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x460a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460a1c: 0x0  nop
    ctx->pc = 0x460a1cu;
    // NOP
label_460a20:
    // 0x460a20: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x460a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x460a24: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x460a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x460a28: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x460a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x460a2c: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x460a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a30: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x460a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a34: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x460a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x460a38: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x460a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x460a3c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x460a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x460a40: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x460a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x460a44: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x460a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x460a48: 0xb0440013  sdl         $a0, 0x13($v0)
    ctx->pc = 0x460a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a4c: 0xb444000c  sdr         $a0, 0xC($v0)
    ctx->pc = 0x460a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a50: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x460a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x460a54: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x460a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x460a58: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x460a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x460a5c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x460a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x460a60: 0xb043001f  sdl         $v1, 0x1F($v0)
    ctx->pc = 0x460a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a64: 0xb4430018  sdr         $v1, 0x18($v0)
    ctx->pc = 0x460a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a68: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x460a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x460a6c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x460a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x460a70: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x460a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x460a74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x460a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x460a78: 0xb048002b  sdl         $t0, 0x2B($v0)
    ctx->pc = 0x460a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a7c: 0xb4480024  sdr         $t0, 0x24($v0)
    ctx->pc = 0x460a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460a80: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x460a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x460a84: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x460A84u;
    {
        const bool branch_taken_0x460a84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x460A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460A84u;
        // 0x460a88: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460a84) {
            ctx->pc = 0x460A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460a20;
        }
    }
    ctx->pc = 0x460A8Cu;
label_460a8c:
    // 0x460a8c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x460a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x460a90: 0x8cc2ad18  lw          $v0, -0x52E8($a2)
    ctx->pc = 0x460a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70AD18u));
    // 0x460a94: 0xc12104a  jal         func_484128
    ctx->pc = 0x460A94u;
    SET_GPR_U32(ctx, 31, 0x460A9Cu);
    ctx->pc = 0x460A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460A94u;
    // 0x460a98: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x460A94u, 0x460A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460A9Cu;
label_460a9c:
    // 0x460a9c: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x460a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x460aa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x460aa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460aa4: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x460aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x460aa8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x460AA8u;
    {
        const bool branch_taken_0x460aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460AA8u;
        // 0x460aac: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460aa8) {
            ctx->pc = 0x460AE8u;
            goto label_460ae8;
        }
    }
    ctx->pc = 0x460AB0u;
    // 0x460ab0: 0x6a4700b7  ldl         $a3, 0xB7($s2)
    ctx->pc = 0x460ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x460ab4: 0x6e4700b0  ldr         $a3, 0xB0($s2)
    ctx->pc = 0x460ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x460ab8: 0x8e4800b8  lw          $t0, 0xB8($s2)
    ctx->pc = 0x460ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x460abc: 0xb2870007  sdl         $a3, 0x7($s4)
    ctx->pc = 0x460abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460ac0: 0xb6870000  sdr         $a3, 0x0($s4)
    ctx->pc = 0x460ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460ac4: 0xae880008  sw          $t0, 0x8($s4)
    ctx->pc = 0x460ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 8));
    // 0x460ac8: 0x6a4400c7  ldl         $a0, 0xC7($s2)
    ctx->pc = 0x460ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x460acc: 0x6e4400c0  ldr         $a0, 0xC0($s2)
    ctx->pc = 0x460accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x460ad0: 0x8e4500c8  lw          $a1, 0xC8($s2)
    ctx->pc = 0x460ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x460ad4: 0xb2a40007  sdl         $a0, 0x7($s5)
    ctx->pc = 0x460ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460ad8: 0xb6a40000  sdr         $a0, 0x0($s5)
    ctx->pc = 0x460ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x460adc: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x460adcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x460ae0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x460AE0u;
    {
        const bool branch_taken_0x460ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460AE0u;
        // 0x460ae4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460ae0) {
            ctx->pc = 0x460BFCu;
            goto label_460bfc;
        }
    }
    ctx->pc = 0x460AE8u;
label_460ae8:
    // 0x460ae8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x460ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x460aec: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x460AECu;
    {
        const bool branch_taken_0x460aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460AECu;
        // 0x460af0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x460aec) {
            ctx->pc = 0x460BC0u;
            goto label_460bc0;
        }
    }
    ctx->pc = 0x460AF4u;
    // 0x460af4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x460af4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x460af8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x460af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x460afc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x460afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460b00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460b00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x460b04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x460b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x460b08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x460b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460b0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x460b0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x460b10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x460b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x460b14: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x460b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460b18: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x460b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x460b1c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x460b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460b20: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x460b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x460b24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x460b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460b28: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x460b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x460b2c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x460B2Cu;
    SET_GPR_U32(ctx, 31, 0x460B34u);
    ctx->pc = 0x460B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460B2Cu;
    // 0x460b30: 0xc64c0078  lwc1        $f12, 0x78($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x460B2Cu, 0x460B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460B34u;
label_460b34:
    // 0x460b34: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x460b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x460b38: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x460B38u;
    SET_GPR_U32(ctx, 31, 0x460B40u);
    ctx->pc = 0x460B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460B38u;
    // 0x460b3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x460B38u, 0x460B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460B40u;
label_460b40:
    // 0x460b40: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x460b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x460b44: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x460b44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x460b48: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x460b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x460b4c: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x460b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x460b50: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x460b50u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x460b54: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x460b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460b58: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x460b58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x460b5c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x460b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460b60: 0x46071302  mul.s       $f12, $f2, $f7
    ctx->pc = 0x460b60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x460b64: 0xc7ab0004  lwc1        $f11, 0x4($sp)
    ctx->pc = 0x460b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x460b68: 0x46091282  mul.s       $f10, $f2, $f9
    ctx->pc = 0x460b68u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x460b6c: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x460b6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x460b70: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x460b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x460b74: 0x460b0142  mul.s       $f5, $f0, $f11
    ctx->pc = 0x460b74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x460b78: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x460b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x460b7c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x460b7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x460b80: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x460b80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x460b84: 0x460ba502  mul.s       $f20, $f20, $f11
    ctx->pc = 0x460b84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x460b88: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x460b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x460b8c: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x460b8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x460b90: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x460b90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x460b94: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x460b94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x460b98: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x460b98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x460b9c: 0xe6880000  swc1        $f8, 0x0($s4)
    ctx->pc = 0x460b9cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x460ba0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x460ba0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x460ba4: 0xe6850004  swc1        $f5, 0x4($s4)
    ctx->pc = 0x460ba4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x460ba8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460bac: 0xe6840008  swc1        $f4, 0x8($s4)
    ctx->pc = 0x460bacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x460bb0: 0xe6a60000  swc1        $f6, 0x0($s5)
    ctx->pc = 0x460bb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x460bb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x460BB4u;
    {
        const bool branch_taken_0x460bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460BB4u;
        // 0x460bb8: 0xe6b40004  swc1        $f20, 0x4($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x460bb4) {
            ctx->pc = 0x460BF4u;
            goto label_460bf4;
        }
    }
    ctx->pc = 0x460BBCu;
    // 0x460bbc: 0x0  nop
    ctx->pc = 0x460bbcu;
    // NOP
label_460bc0:
    // 0x460bc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x460bc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x460bc4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x460bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x460bc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x460bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460bcc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460bccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x460bd0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x460bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x460bd4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x460bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460bd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x460bd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x460bdc: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x460bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x460be0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x460be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460be4: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x460be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x460be8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x460be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460bec: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x460becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x460bf0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x460bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_460bf4:
    // 0x460bf4: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x460bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x460bf8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x460bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_460bfc:
    // 0x460bfc: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x460bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x460c00: 0x34422042  ori         $v0, $v0, 0x2042
    ctx->pc = 0x460c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8258);
    // 0x460c04: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x460c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x460c08: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x460c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x460c0c: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x460c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x460c10: 0x1e3103  sra         $a2, $fp, 4
    ctx->pc = 0x460c10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 4));
    // 0x460c14: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x460c14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x460c18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x460c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x460c1c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x460c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x460c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x460c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x460c24: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x460c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x460c28: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x460c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x460c2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x460c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460c30: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x460c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x460c34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x460c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x460c38: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x460c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x460c3c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x460c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x460c40: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x460C40u;
    SET_GPR_U32(ctx, 31, 0x460C48u);
    ctx->pc = 0x460C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460C40u;
    // 0x460c44: 0x8ed0005c  lw          $s0, 0x5C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x460C40u, 0x460C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C48u;
label_460c48:
    // 0x460c48: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x460c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x460c4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x460c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x460c50: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x460c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x460c54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x460C54u;
    {
        const bool branch_taken_0x460c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460C54u;
        // 0x460c58: 0xae320014  sw          $s2, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460c54) {
            ctx->pc = 0x460C78u;
            goto label_460c78;
        }
    }
    ctx->pc = 0x460C5Cu;
    // 0x460c5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x460c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460c60: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x460C60u;
    SET_GPR_U32(ctx, 31, 0x460C68u);
    ctx->pc = 0x460C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460C60u;
    // 0x460c64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x460C60u, 0x460C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C68u;
label_460c68:
    // 0x460c68: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x460c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x460c6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x460c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x460c70: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x460c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x460c74: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x460c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_460c78:
    // 0x460c78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x460c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x460c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x460C7Cu;
    {
        const bool branch_taken_0x460c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460C7Cu;
        // 0x460c80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460c7c) {
            ctx->pc = 0x460C9Cu;
            goto label_460c9c;
        }
    }
    ctx->pc = 0x460C84u;
    // 0x460c84: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x460C84u;
    SET_GPR_U32(ctx, 31, 0x460C8Cu);
    ctx->pc = 0x460C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460C84u;
    // 0x460c88: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x460C84u, 0x460C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C8Cu;
label_460c8c:
    // 0x460c8c: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x460c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x460c90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x460c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x460c94: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x460c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x460c98: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x460c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_460c9c:
    // 0x460c9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x460c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x460ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x460CA0u;
    {
        const bool branch_taken_0x460ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460CA0u;
        // 0x460ca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460ca0) {
            ctx->pc = 0x460CBCu;
            goto label_460cbc;
        }
    }
    ctx->pc = 0x460CA8u;
    // 0x460ca8: 0xc11affa  jal         func_46BFE8
    ctx->pc = 0x460CA8u;
    SET_GPR_U32(ctx, 31, 0x460CB0u);
    ctx->pc = 0x460CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460CA8u;
    // 0x460cac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x460CA8u, 0x460CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460CB0u;
label_460cb0:
    // 0x460cb0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x460cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x460cb4: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x460cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x460cb8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x460cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_460cbc:
    // 0x460cbc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x460cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x460cc0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x460cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x460cc4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x460cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x460cc8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x460cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x460ccc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x460cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x460cd0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x460cd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x460cd4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x460cd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x460cd8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x460cd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x460cdc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x460cdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x460ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x460ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x460ce4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x460ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x460ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x460CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460CE8u;
        // 0x460cec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460CF0u;
}
