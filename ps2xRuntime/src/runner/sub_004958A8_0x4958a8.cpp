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

// Function: sub_004958A8
// Address: 0x4958a8 - 0x4959e0
void sub_004958A8_0x4958a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004958A8_0x4958a8");
#endif

    ctx->pc = 0x4958a8u;

    // 0x4958a8: 0x8f828a48  lw          $v0, -0x75B8($gp)
    ctx->pc = 0x4958a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x4958ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4958ACu;
    {
        const bool branch_taken_0x4958ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4958B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4958ACu;
        // 0x4958b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4958ac) {
            ctx->pc = 0x4958C4u;
            goto label_4958c4;
        }
    }
    ctx->pc = 0x4958B4u;
    // 0x4958b4: 0x2882005a  slti        $v0, $a0, 0x5A
    ctx->pc = 0x4958b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x4958b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4958B8u;
    {
        const bool branch_taken_0x4958b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4958BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4958B8u;
        // 0x4958bc: 0x2882ffff  slti        $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4958b8) {
            ctx->pc = 0x4958C4u;
            goto label_4958c4;
        }
    }
    ctx->pc = 0x4958C0u;
    // 0x4958c0: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x4958c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4958c4:
    // 0x4958c4: 0x10e00043  beqz        $a3, . + 4 + (0x43 << 2)
    ctx->pc = 0x4958C4u;
    {
        const bool branch_taken_0x4958c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4958C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4958C4u;
        // 0x4958c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4958c4) {
            ctx->pc = 0x4959D4u;
            goto label_4959d4;
        }
    }
    ctx->pc = 0x4958CCu;
    // 0x4958cc: 0xaf848a40  sw          $a0, -0x75C0($gp)
    ctx->pc = 0x4958ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937152), GPR_U32(ctx, 4));
    // 0x4958d0: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4958D0u;
    {
        const bool branch_taken_0x4958d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4958D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4958D0u;
        // 0x4958d4: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4958d0) {
            ctx->pc = 0x4959B8u;
            goto label_4959b8;
        }
    }
    ctx->pc = 0x4958D8u;
    // 0x4958d8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4958d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4958dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4958dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4958e0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4958e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4958e4: 0x2463ec38  addiu       $v1, $v1, -0x13C8
    ctx->pc = 0x4958e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962232));
    // 0x4958e8: 0x24c50050  addiu       $a1, $a2, 0x50
    ctx->pc = 0x4958e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4958ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4958ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4958f0: 0x24c90050  addiu       $t1, $a2, 0x50
    ctx->pc = 0x4958f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4958f4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4958f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4958f8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4958f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4958fc: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4958fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x495900: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x495900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x495904: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x495904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x495908: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x495908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x49590c: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x49590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495910: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x495910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495914: 0xb124000f  sdl         $a0, 0xF($t1)
    ctx->pc = 0x495914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495918: 0xb5240008  sdr         $a0, 0x8($t1)
    ctx->pc = 0x495918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49591c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x49591cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495920: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x495920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495924: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x495924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x495928: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x495928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x49592c: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x49592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x495930: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x495930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x495934: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x495934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x495938: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x495938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x49593c: 0xb0a3001f  sdl         $v1, 0x1F($a1)
    ctx->pc = 0x49593cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495940: 0xb4a30018  sdr         $v1, 0x18($a1)
    ctx->pc = 0x495940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495944: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x495944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495948: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x495948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49594c: 0xb0a8002f  sdl         $t0, 0x2F($a1)
    ctx->pc = 0x49594cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495950: 0xb4a80028  sdr         $t0, 0x28($a1)
    ctx->pc = 0x495950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x495954: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x495954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x495958: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x495958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x49595c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x49595Cu;
    {
        const bool branch_taken_0x49595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49595Cu;
        // 0x495960: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49595c) {
            ctx->pc = 0x49599Cu;
            goto label_49599c;
        }
    }
    ctx->pc = 0x495964u;
    // 0x495964: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x495964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x495968: 0x8f848760  lw          $a0, -0x78A0($gp)
    ctx->pc = 0x495968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x49596c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49596cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x495970: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x495970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x495974: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x495974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x495978: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x495978u;
    {
        const bool branch_taken_0x495978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495978u;
        // 0x49597c: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495978) {
            ctx->pc = 0x495988u;
            goto label_495988;
        }
    }
    ctx->pc = 0x495980u;
    // 0x495980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x495980u;
    {
        const bool branch_taken_0x495980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495980u;
        // 0x495984: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495980) {
            ctx->pc = 0x495990u;
            goto label_495990;
        }
    }
    ctx->pc = 0x495988u;
label_495988:
    // 0x495988: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x495988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49598c: 0xaf828760  sw          $v0, -0x78A0($gp)
    ctx->pc = 0x49598cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
label_495990:
    // 0x495990: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x495990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x495994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x495994u;
    {
        const bool branch_taken_0x495994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495994u;
        // 0x495998: 0xa0400033  sb          $zero, 0x33($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495994) {
            ctx->pc = 0x4959B4u;
            goto label_4959b4;
        }
    }
    ctx->pc = 0x49599Cu;
label_49599c:
    // 0x49599c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4959a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4959a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4959a4: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x4959a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x4959a8: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x4959a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x4959ac: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x4959acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x4959b0: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4959b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_4959b4:
    // 0x4959b4: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x4959b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
label_4959b8:
    // 0x4959b8: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4959bc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4959bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4959c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4959c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4959c4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4959C4u;
    {
        const bool branch_taken_0x4959c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4959C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4959C4u;
        // 0x4959c8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4959c4) {
            ctx->pc = 0x4959D0u;
            goto label_4959d0;
        }
    }
    ctx->pc = 0x4959CCu;
    // 0x4959cc: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x4959ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_4959d0:
    // 0x4959d0: 0xaf828a44  sw          $v0, -0x75BC($gp)
    ctx->pc = 0x4959d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 2));
label_4959d4:
    // 0x4959d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4959D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4959D4u;
        // 0x4959d8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4959D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4959DCu;
    // 0x4959dc: 0x0  nop
    ctx->pc = 0x4959dcu;
    // NOP
    ctx->pc = 0x4959e0u;
}
