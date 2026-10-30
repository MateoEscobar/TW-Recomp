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

// Function: sub_00474878
// Address: 0x474878 - 0x474eb8
void sub_00474878_0x474878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474878_0x474878");
#endif

    switch (ctx->pc) {
        case 0x474928u: goto label_474928;
        case 0x474b98u: goto label_474b98;
        case 0x474e28u: goto label_474e28;
        default: break;
    }

    ctx->pc = 0x474878u;

    // 0x474878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x474878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47487c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x47487cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474880: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x474880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x474884: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x474884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474888: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x474888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x47488c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47488cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474890: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x474890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x474894: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x474894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474898: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x474898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x47489c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x47489cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4748a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4748a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4748a4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4748a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4748a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4748a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4748ac: 0x8f22000c  lw          $v0, 0xC($t9)
    ctx->pc = 0x4748acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x4748b0: 0x8f310004  lw          $s1, 0x4($t9)
    ctx->pc = 0x4748b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x4748b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4748b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4748b8: 0x262b0214  addiu       $t3, $s1, 0x214
    ctx->pc = 0x4748b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
    // 0x4748bc: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x4748bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x4748c0: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x4748c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x4748c4: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x4748c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x4748c8: 0x83580b  movn        $t3, $a0, $v1
    ctx->pc = 0x4748c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
    // 0x4748cc: 0x8d6e0008  lw          $t6, 0x8($t3)
    ctx->pc = 0x4748ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4748d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4748D0u;
    {
        const bool branch_taken_0x4748d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4748D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4748D0u;
        // 0x4748d4: 0x8d69000c  lw          $t1, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4748d0) {
            ctx->pc = 0x4748E0u;
            goto label_4748e0;
        }
    }
    ctx->pc = 0x4748D8u;
    // 0x4748d8: 0x8d6e0010  lw          $t6, 0x10($t3)
    ctx->pc = 0x4748d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x4748dc: 0x8d690014  lw          $t1, 0x14($t3)
    ctx->pc = 0x4748dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_4748e0:
    // 0x4748e0: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x4748e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x4748e4: 0x24a5000b  addiu       $a1, $a1, 0xB
    ctx->pc = 0x4748e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x4748e8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4748e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4748ec: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x4748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4748f0: 0x1c41823  subu        $v1, $t6, $a0
    ctx->pc = 0x4748f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x4748f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4748f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4748f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4748F8u;
    {
        const bool branch_taken_0x4748f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4748f8) {
            ctx->pc = 0x4748FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4748F8u;
            // 0x4748fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x474900u;
            goto label_474900;
        }
    }
    ctx->pc = 0x474900u;
label_474900:
    // 0x474900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x474900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x474904: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x474904u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x474908: 0x4012  mflo        $t0
    ctx->pc = 0x474908u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x47490c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x47490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x474910: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x474910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474914: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x474914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x474918: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x474918u;
    {
        const bool branch_taken_0x474918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474918u;
        // 0x47491c: 0x70c021  addu        $t8, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474918) {
            ctx->pc = 0x474974u;
            goto label_474974;
        }
    }
    ctx->pc = 0x474920u;
    // 0x474920: 0x25640018  addiu       $a0, $t3, 0x18
    ctx->pc = 0x474920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x474924: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x474924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_474928:
    // 0x474928: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x474928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x47492c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x47492cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x474930: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x474930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x474934: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x474934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x474938: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x474938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x47493c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x47493cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x474940: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x474940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x474944: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x474944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x474948: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x474948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47494c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x47494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x474950: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x474950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x474954: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474954u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474958: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x474958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47495c: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x47495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474960: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x474960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x474964: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x474964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x474968: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x474968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47496c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x47496Cu;
    {
        const bool branch_taken_0x47496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47496Cu;
        // 0x474970: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47496c) {
            ctx->pc = 0x474928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474928;
        }
    }
    ctx->pc = 0x474974u;
label_474974:
    // 0x474974: 0x922200c0  lbu         $v0, 0xC0($s1)
    ctx->pc = 0x474974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x474978: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x474978u;
    {
        const bool branch_taken_0x474978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474978u;
        // 0x47497c: 0x1d21018  mult        $v0, $t6, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x474978) {
            ctx->pc = 0x474B64u;
            goto label_474b64;
        }
    }
    ctx->pc = 0x474980u;
    // 0x474980: 0x85430010  lh          $v1, 0x10($t2)
    ctx->pc = 0x474980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x474984: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x474984u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474988: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x474988u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47498c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47498cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474990: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x474990u;
    {
        const bool branch_taken_0x474990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474990u;
        // 0x474994: 0x586023  subu        $t4, $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474990) {
            ctx->pc = 0x4749ACu;
            goto label_4749ac;
        }
    }
    ctx->pc = 0x474998u;
    // 0x474998: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x474998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x47499c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x47499cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4749a0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x4749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x4749a4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4749a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4749a8: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x4749a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4749ac:
    // 0x4749ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4749ACu;
    {
        const bool branch_taken_0x4749ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4749B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4749ACu;
        // 0x4749b0: 0xa5400014  sh          $zero, 0x14($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4749ac) {
            ctx->pc = 0x4749C0u;
            goto label_4749c0;
        }
    }
    ctx->pc = 0x4749B4u;
    // 0x4749b4: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x4749b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x4749b8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4749b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4749bc: 0x25883  sra         $t3, $v0, 2
    ctx->pc = 0x4749bcu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
label_4749c0:
    // 0x4749c0: 0x85430028  lh          $v1, 0x28($t2)
    ctx->pc = 0x4749c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x4749c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4749C4u;
    {
        const bool branch_taken_0x4749c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4749C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4749C4u;
        // 0x4749c8: 0xa54b002c  sh          $t3, 0x2C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4749c4) {
            ctx->pc = 0x4749D4u;
            goto label_4749d4;
        }
    }
    ctx->pc = 0x4749CCu;
    // 0x4749cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4749ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4749d0: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x4749d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_4749d4:
    // 0x4749d4: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x4749d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x4749d8: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x4749d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x4749dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4749DCu;
    {
        const bool branch_taken_0x4749dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4749E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4749DCu;
        // 0x4749e0: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4749dc) {
            ctx->pc = 0x4749F8u;
            goto label_4749f8;
        }
    }
    ctx->pc = 0x4749E4u;
    // 0x4749e4: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x4749e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x4749e8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4749e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4749ec: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4749ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4749f0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4749f4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4749f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4749f8:
    // 0x4749f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4749F8u;
    {
        const bool branch_taken_0x4749f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4749FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4749F8u;
        // 0x4749fc: 0xa54b0044  sh          $t3, 0x44($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4749f8) {
            ctx->pc = 0x474A08u;
            goto label_474a08;
        }
    }
    ctx->pc = 0x474A00u;
    // 0x474a00: 0xc1043  sra         $v0, $t4, 1
    ctx->pc = 0x474a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 1));
    // 0x474a04: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x474a04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_474a08:
    // 0x474a08: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x474a08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x474a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474A0Cu;
    {
        const bool branch_taken_0x474a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474A0Cu;
        // 0x474a10: 0xa54b005c  sh          $t3, 0x5C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a0c) {
            ctx->pc = 0x474A1Cu;
            goto label_474a1c;
        }
    }
    ctx->pc = 0x474A14u;
    // 0x474a14: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474a14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474a18: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x474a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_474a1c:
    // 0x474a1c: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x474a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x474a20: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x474a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x474a24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x474A24u;
    {
        const bool branch_taken_0x474a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x474A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474A24u;
        // 0x474a28: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a24) {
            ctx->pc = 0x474A3Cu;
            goto label_474a3c;
        }
    }
    ctx->pc = 0x474A2Cu;
    // 0x474a2c: 0x27020003  addiu       $v0, $t8, 0x3
    ctx->pc = 0x474a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x474a30: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474a30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474a34: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x474a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x474a38: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x474a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_474a3c:
    // 0x474a3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x474A3Cu;
    {
        const bool branch_taken_0x474a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x474A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474A3Cu;
        // 0x474a40: 0xa54b0074  sh          $t3, 0x74($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a3c) {
            ctx->pc = 0x474A4Cu;
            goto label_474a4c;
        }
    }
    ctx->pc = 0x474A44u;
    // 0x474a44: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x474a44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x474a48: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x474a48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_474a4c:
    // 0x474a4c: 0x85460088  lh          $a2, 0x88($t2)
    ctx->pc = 0x474a4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x474a50: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x474A50u;
    {
        const bool branch_taken_0x474a50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x474A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474A50u;
        // 0x474a54: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a50) {
            ctx->pc = 0x474A90u;
            goto label_474a90;
        }
    }
    ctx->pc = 0x474A58u;
    // 0x474a58: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x474a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x474a5c: 0x1c22018  mult        $a0, $t6, $v0
    ctx->pc = 0x474a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x474a60: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x474a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x474a64: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x474a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x474a68: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474a68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474a6c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x474a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x474a70: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x474a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x474a74: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x474a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x474a78: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x474a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x474a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x474a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x474a80: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474a84: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x474a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x474a88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474a8c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x474a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_474a90:
    // 0x474a90: 0xa54b008c  sh          $t3, 0x8C($t2)
    ctx->pc = 0x474a90u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 11));
    // 0x474a94: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x474a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474a98: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x474A98u;
    {
        const bool branch_taken_0x474a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474A98u;
        // 0x474a9c: 0xe2840  sll         $a1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a98) {
            ctx->pc = 0x474B34u;
            goto label_474b34;
        }
    }
    ctx->pc = 0x474AA0u;
    // 0x474aa0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x474AA0u;
    {
        const bool branch_taken_0x474aa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x474AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474AA0u;
        // 0x474aa4: 0x250fffff  addiu       $t7, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474aa0) {
            ctx->pc = 0x474AD4u;
            goto label_474ad4;
        }
    }
    ctx->pc = 0x474AA8u;
    // 0x474aa8: 0x1cf2018  mult        $a0, $t6, $t7
    ctx->pc = 0x474aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x474aac: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x474aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x474ab0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x474ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x474ab4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x474ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x474ab8: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x474ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x474abc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x474abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x474ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x474ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x474ac4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474ac8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x474ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x474acc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x474accu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474ad0: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x474ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_474ad4:
    // 0x474ad4: 0x1cf3018  mult        $a2, $t6, $t7
    ctx->pc = 0x474ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x474ad8: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x474ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x474adc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x474adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x474ae0: 0x182040  sll         $a0, $t8, 1
    ctx->pc = 0x474ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x474ae4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x474ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x474ae8: 0xc2840  sll         $a1, $t4, 1
    ctx->pc = 0x474ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x474aec: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x474aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x474af0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x474af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x474af4: 0x3063023  subu        $a2, $t8, $a2
    ctx->pc = 0x474af4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x474af8: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x474af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x474afc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x474afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x474b00: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x474b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x474b04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x474b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474b08: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x474b08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x474b0c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474b10: 0xa54b011c  sh          $t3, 0x11C($t2)
    ctx->pc = 0x474b10u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 11));
    // 0x474b14: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x474b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x474b18: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x474b18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x474b1c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x474b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x474b20: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x474b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x474b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474b28: 0xa54b0134  sh          $t3, 0x134($t2)
    ctx->pc = 0x474b28u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 308), (uint16_t)GPR_U32(ctx, 11));
    // 0x474b2c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x474b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x474b30: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x474b30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_474b34:
    // 0x474b34: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x474b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x474b38: 0x1b21818  mult        $v1, $t5, $s2
    ctx->pc = 0x474b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x474b3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x474b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x474b40: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x474B40u;
    {
        const bool branch_taken_0x474b40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x474b40) {
            ctx->pc = 0x474B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474B40u;
            // 0x474b44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x474B48u;
            goto label_474b48;
        }
    }
    ctx->pc = 0x474B48u;
label_474b48:
    // 0x474b48: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x474b48u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x474b4c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x474b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x474b50: 0x1012  mflo        $v0
    ctx->pc = 0x474b50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x474b54: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x474b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x474b58: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x474b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x474b5c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x474B5Cu;
    {
        const bool branch_taken_0x474b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474B5Cu;
        // 0x474b60: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474b5c) {
            ctx->pc = 0x474E84u;
            goto label_474e84;
        }
    }
    ctx->pc = 0x474B64u;
label_474b64:
    // 0x474b64: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x474b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x474b68: 0x922200c1  lbu         $v0, 0xC1($s1)
    ctx->pc = 0x474b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 193)));
    // 0x474b6c: 0x1c32818  mult        $a1, $t6, $v1
    ctx->pc = 0x474b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x474b70: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x474b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x474b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x474b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x474b78: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x474b78u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474b7c: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x474b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x474b80: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x474b80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474b84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x474b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474b88: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x474b88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474b8c: 0x3055823  subu        $t3, $t8, $a1
    ctx->pc = 0x474b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x474b90: 0x26380020  addiu       $t8, $s1, 0x20
    ctx->pc = 0x474b90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x474b94: 0xd20c0  sll         $a0, $t5, 3
    ctx->pc = 0x474b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_474b98:
    // 0x474b98: 0x3041021  addu        $v0, $t8, $a0
    ctx->pc = 0x474b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x474b9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x474b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x474ba0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x474ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x474ba4: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x474BA4u;
    {
        const bool branch_taken_0x474ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474BA4u;
        // 0x474ba8: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474ba4) {
            ctx->pc = 0x474D84u;
            goto label_474d84;
        }
    }
    ctx->pc = 0x474BACu;
    // 0x474bac: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x474BACu;
    {
        const bool branch_taken_0x474bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474BACu;
        // 0x474bb0: 0x2da20006  sltiu       $v0, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474bac) {
            ctx->pc = 0x474D54u;
            goto label_474d54;
        }
    }
    ctx->pc = 0x474BB4u;
    // 0x474bb4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x474BB4u;
    {
        const bool branch_taken_0x474bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474BB4u;
        // 0x474bb8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474bb4) {
            ctx->pc = 0x474D84u;
            goto label_474d84;
        }
    }
    ctx->pc = 0x474BBCu;
    // 0x474bbc: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x474bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x474bc0: 0x2442ea40  addiu       $v0, $v0, -0x15C0
    ctx->pc = 0x474bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x474bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x474bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x474bc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x474bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x474bcc: 0x800008  jr          $a0
    ctx->pc = 0x474BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x474BD4u: goto label_474bd4;
            case 0x474C18u: goto label_474c18;
            case 0x474C48u: goto label_474c48;
            case 0x474C84u: goto label_474c84;
            case 0x474CB4u: goto label_474cb4;
            case 0x474CFCu: goto label_474cfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x474BD4u;
label_474bd4:
    // 0x474bd4: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x474bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x474bd8: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x474bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474bdc: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x474bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x474be0: 0x85440010  lh          $a0, 0x10($t2)
    ctx->pc = 0x474be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x474be4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474be8: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x474be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x474bec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474BECu;
    {
        const bool branch_taken_0x474bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474BECu;
        // 0x474bf0: 0x22882  srl         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474bec) {
            ctx->pc = 0x474BFCu;
            goto label_474bfc;
        }
    }
    ctx->pc = 0x474BF4u;
    // 0x474bf4: 0x85440012  lh          $a0, 0x12($t2)
    ctx->pc = 0x474bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x474bf8: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x474bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_474bfc:
    // 0x474bfc: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x474bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x474c00: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x474c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x474c04: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x474c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x474c08: 0xa54c0014  sh          $t4, 0x14($t2)
    ctx->pc = 0x474c08u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x474c0c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474c10: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x474C10u;
    {
        const bool branch_taken_0x474c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C10u;
        // 0x474c14: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c10) {
            ctx->pc = 0x474D3Cu;
            goto label_474d3c;
        }
    }
    ctx->pc = 0x474C18u;
label_474c18:
    // 0x474c18: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x474c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474c1c: 0x85440028  lh          $a0, 0x28($t2)
    ctx->pc = 0x474c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x474c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x474C20u;
    {
        const bool branch_taken_0x474c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C20u;
        // 0x474c24: 0x8d460020  lw          $a2, 0x20($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c20) {
            ctx->pc = 0x474C30u;
            goto label_474c30;
        }
    }
    ctx->pc = 0x474C28u;
    // 0x474c28: 0x8544002a  lh          $a0, 0x2A($t2)
    ctx->pc = 0x474c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x474c2c: 0x8d460024  lw          $a2, 0x24($t2)
    ctx->pc = 0x474c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
label_474c30:
    // 0x474c30: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x474c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474c34: 0xa54c002c  sh          $t4, 0x2C($t2)
    ctx->pc = 0x474c34u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 12));
    // 0x474c38: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x474c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474c3c: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x474c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x474c40: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x474C40u;
    {
        const bool branch_taken_0x474c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C40u;
        // 0x474c44: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c40) {
            ctx->pc = 0x474D48u;
            goto label_474d48;
        }
    }
    ctx->pc = 0x474C48u;
label_474c48:
    // 0x474c48: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x474c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x474c4c: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x474c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474c50: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x474c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x474c54: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x474c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x474c58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474C58u;
    {
        const bool branch_taken_0x474c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C58u;
        // 0x474c5c: 0x8d460038  lw          $a2, 0x38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c58) {
            ctx->pc = 0x474C68u;
            goto label_474c68;
        }
    }
    ctx->pc = 0x474C60u;
    // 0x474c60: 0x85440042  lh          $a0, 0x42($t2)
    ctx->pc = 0x474c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x474c64: 0x8d46003c  lw          $a2, 0x3C($t2)
    ctx->pc = 0x474c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
label_474c68:
    // 0x474c68: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x474c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474c6c: 0xa54c0044  sh          $t4, 0x44($t2)
    ctx->pc = 0x474c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 12));
    // 0x474c70: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x474c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474c74: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x474c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x474c78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x474c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x474c7c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x474C7Cu;
    {
        const bool branch_taken_0x474c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C7Cu;
        // 0x474c80: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c7c) {
            ctx->pc = 0x474CECu;
            goto label_474cec;
        }
    }
    ctx->pc = 0x474C84u;
label_474c84:
    // 0x474c84: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x474c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474c88: 0x85440058  lh          $a0, 0x58($t2)
    ctx->pc = 0x474c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x474c8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x474C8Cu;
    {
        const bool branch_taken_0x474c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474C8Cu;
        // 0x474c90: 0x8d460050  lw          $a2, 0x50($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474c8c) {
            ctx->pc = 0x474C9Cu;
            goto label_474c9c;
        }
    }
    ctx->pc = 0x474C94u;
    // 0x474c94: 0x8544005a  lh          $a0, 0x5A($t2)
    ctx->pc = 0x474c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x474c98: 0x8d460054  lw          $a2, 0x54($t2)
    ctx->pc = 0x474c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_474c9c:
    // 0x474c9c: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x474c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474ca0: 0xa54c005c  sh          $t4, 0x5C($t2)
    ctx->pc = 0x474ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 12));
    // 0x474ca4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x474ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474ca8: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x474ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x474cac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x474CACu;
    {
        const bool branch_taken_0x474cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474CACu;
        // 0x474cb0: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474cac) {
            ctx->pc = 0x474D48u;
            goto label_474d48;
        }
    }
    ctx->pc = 0x474CB4u;
label_474cb4:
    // 0x474cb4: 0x25c20003  addiu       $v0, $t6, 0x3
    ctx->pc = 0x474cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x474cb8: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x474cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474cbc: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x474cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x474cc0: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x474cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x474cc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474CC4u;
    {
        const bool branch_taken_0x474cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474CC4u;
        // 0x474cc8: 0x8d460068  lw          $a2, 0x68($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474cc4) {
            ctx->pc = 0x474CD4u;
            goto label_474cd4;
        }
    }
    ctx->pc = 0x474CCCu;
    // 0x474ccc: 0x85440072  lh          $a0, 0x72($t2)
    ctx->pc = 0x474cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 114)));
    // 0x474cd0: 0x8d46006c  lw          $a2, 0x6C($t2)
    ctx->pc = 0x474cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 108)));
label_474cd4:
    // 0x474cd4: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x474cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474cd8: 0xa54c0074  sh          $t4, 0x74($t2)
    ctx->pc = 0x474cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 12));
    // 0x474cdc: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x474cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x474ce0: 0x25620003  addiu       $v0, $t3, 0x3
    ctx->pc = 0x474ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x474ce4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x474ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x474ce8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x474ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_474cec:
    // 0x474cec: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x474cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x474cf0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x474cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x474cf4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x474CF4u;
    {
        const bool branch_taken_0x474cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474CF4u;
        // 0x474cf8: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474cf4) {
            ctx->pc = 0x474D84u;
            goto label_474d84;
        }
    }
    ctx->pc = 0x474CFCu;
label_474cfc:
    // 0x474cfc: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x474cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x474d00: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x474d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474d04: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x474d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x474d08: 0x85440088  lh          $a0, 0x88($t2)
    ctx->pc = 0x474d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x474d0c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474d10: 0x8d460080  lw          $a2, 0x80($t2)
    ctx->pc = 0x474d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x474d14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x474D14u;
    {
        const bool branch_taken_0x474d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x474D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474D14u;
        // 0x474d18: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d14) {
            ctx->pc = 0x474D24u;
            goto label_474d24;
        }
    }
    ctx->pc = 0x474D1Cu;
    // 0x474d1c: 0x8544008a  lh          $a0, 0x8A($t2)
    ctx->pc = 0x474d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 138)));
    // 0x474d20: 0x8d460084  lw          $a2, 0x84($t2)
    ctx->pc = 0x474d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_474d24:
    // 0x474d24: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x474d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x474d28: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x474d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x474d2c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x474d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x474d30: 0xa54c008c  sh          $t4, 0x8C($t2)
    ctx->pc = 0x474d30u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 12));
    // 0x474d34: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474d38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x474d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_474d3c:
    // 0x474d3c: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x474d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x474d40: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x474d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x474d44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x474d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_474d48:
    // 0x474d48: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x474d48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x474d4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x474D4Cu;
    {
        const bool branch_taken_0x474d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474D4Cu;
        // 0x474d50: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d4c) {
            ctx->pc = 0x474D84u;
            goto label_474d84;
        }
    }
    ctx->pc = 0x474D54u;
label_474d54:
    // 0x474d54: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x474d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x474d58: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x474d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x474d5c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x474d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x474d60: 0x1a32018  mult        $a0, $t5, $v1
    ctx->pc = 0x474d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x474d64: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x474d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474d68: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x474d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x474d6c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474d70: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x474d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x474d74: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x474d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x474d78: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x474d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x474d7c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x474d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x474d80: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x474d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_474d84:
    // 0x474d84: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474d84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474d88: 0x2da2000b  sltiu       $v0, $t5, 0xB
    ctx->pc = 0x474d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x474d8c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x474D8Cu;
    {
        const bool branch_taken_0x474d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474D8Cu;
        // 0x474d90: 0xd20c0  sll         $a0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d8c) {
            ctx->pc = 0x474B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474b98;
        }
    }
    ctx->pc = 0x474D94u;
    // 0x474d94: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x474d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474d98: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x474D98u;
    {
        const bool branch_taken_0x474d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474D98u;
        // 0x474d9c: 0xe2840  sll         $a1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d98) {
            ctx->pc = 0x474DFCu;
            goto label_474dfc;
        }
    }
    ctx->pc = 0x474DA0u;
    // 0x474da0: 0x85440132  lh          $a0, 0x132($t2)
    ctx->pc = 0x474da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 306)));
    // 0x474da4: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x474da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x474da8: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x474da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x474dac: 0x8f3018  mult        $a2, $a0, $t7
    ctx->pc = 0x474dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x474db0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x474db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x474db4: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x474db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x474db8: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x474db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474dbc: 0x45882  srl         $t3, $a0, 2
    ctx->pc = 0x474dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x474dc0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x474dc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x474dc4: 0x8d44012c  lw          $a0, 0x12C($t2)
    ctx->pc = 0x474dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 300)));
    // 0x474dc8: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x474dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x474dcc: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x474dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x474dd0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x474dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x474dd4: 0xa54c011c  sh          $t4, 0x11C($t2)
    ctx->pc = 0x474dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 12));
    // 0x474dd8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x474dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x474ddc: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x474ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x474de0: 0x55902  srl         $t3, $a1, 4
    ctx->pc = 0x474de0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x474de4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x474de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x474de8: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x474de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x474dec: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x474decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x474df0: 0xa54c0134  sh          $t4, 0x134($t2)
    ctx->pc = 0x474df0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 308), (uint16_t)GPR_U32(ctx, 12));
    // 0x474df4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x474df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x474df8: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x474df8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_474dfc:
    // 0x474dfc: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x474dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474e00: 0xcc3023  subu        $a2, $a2, $t4
    ctx->pc = 0x474e00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x474e04: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x474e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x474e08: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x474e08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474e0c: 0x24a2000b  addiu       $v0, $a1, 0xB
    ctx->pc = 0x474e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x474e10: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x474E10u;
    {
        const bool branch_taken_0x474e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474E10u;
        // 0x474e14: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474e10) {
            ctx->pc = 0x474E84u;
            goto label_474e84;
        }
    }
    ctx->pc = 0x474E18u;
    // 0x474e18: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x474e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x474e1c: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x474e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x474e20: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x474e20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474e24: 0x0  nop
    ctx->pc = 0x474e24u;
    // NOP
label_474e28:
    // 0x474e28: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x474e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x474e2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x474e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x474e30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x474E30u;
    {
        const bool branch_taken_0x474e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474E30u;
        // 0x474e34: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x474e30) {
            ctx->pc = 0x474E64u;
            goto label_474e64;
        }
    }
    ctx->pc = 0x474E38u;
    // 0x474e38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x474E38u;
    {
        const bool branch_taken_0x474e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474e38) {
            ctx->pc = 0x474E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474E38u;
            // 0x474e3c: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x474E68u;
            goto label_474e68;
        }
    }
    ctx->pc = 0x474E40u;
    // 0x474e40: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x474E40u;
    {
        const bool branch_taken_0x474e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e40) {
            ctx->pc = 0x474E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474E40u;
            // 0x474e44: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x474E4Cu;
            goto label_474e4c;
        }
    }
    ctx->pc = 0x474E48u;
    // 0x474e48: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x474e48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
label_474e4c:
    // 0x474e4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x474e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x474e50: 0x8f2c0024  lw          $t4, 0x24($t9)
    ctx->pc = 0x474e50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x474e54: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x474e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474e58: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x474e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x474e5c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x474e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x474e60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x474e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_474e64:
    // 0x474e64: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x474e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_474e68:
    // 0x474e68: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x474e68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x474e6c: 0x24a2000b  addiu       $v0, $a1, 0xB
    ctx->pc = 0x474e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x474e70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x474e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x474e74: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x474e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x474e78: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x474e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x474e7c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x474E7Cu;
    {
        const bool branch_taken_0x474e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474E7Cu;
        // 0x474e80: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474e7c) {
            ctx->pc = 0x474E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474e28;
        }
    }
    ctx->pc = 0x474E84u;
label_474e84:
    // 0x474e84: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x474e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
    // 0x474e88: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x474e88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x474e8c: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x474e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x474e90: 0x24e2024f  addiu       $v0, $a3, 0x24F
    ctx->pc = 0x474e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 591));
    // 0x474e94: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x474e94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x474e98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x474e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x474e9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x474e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x474ea0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x474ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x474ea4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x474ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x474ea8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x474ea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x474eac: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x474eacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x474EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474EB0u;
        // 0x474eb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474EB8u;
}
