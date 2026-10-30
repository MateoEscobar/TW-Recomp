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

// Function: sub_004298C0
// Address: 0x4298c0 - 0x429a60
void sub_004298C0_0x4298c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004298C0_0x4298c0");
#endif

    switch (ctx->pc) {
        case 0x429900u: goto label_429900;
        case 0x429a38u: goto label_429a38;
        case 0x429a44u: goto label_429a44;
        default: break;
    }

    ctx->pc = 0x4298c0u;

    // 0x4298c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4298c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4298c4: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x4298c4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
    // 0x4298c8: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x4298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x4298cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4298ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4298d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4298d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4298d4: 0x24451c30  addiu       $a1, $v0, 0x1C30
    ctx->pc = 0x4298d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7216));
    // 0x4298d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4298d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4298dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4298dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4298e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4298e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4298e4: 0x3c180070  lui         $t8, 0x70
    ctx->pc = 0x4298e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)112 << 16));
    // 0x4298e8: 0x3c0f0070  lui         $t7, 0x70
    ctx->pc = 0x4298e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)112 << 16));
    // 0x4298ec: 0x3c0e0070  lui         $t6, 0x70
    ctx->pc = 0x4298ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)112 << 16));
    // 0x4298f0: 0x3c0d0070  lui         $t5, 0x70
    ctx->pc = 0x4298f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)112 << 16));
    // 0x4298f4: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x4298f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x4298f8: 0x27235850  addiu       $v1, $t9, 0x5850
    ctx->pc = 0x4298f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 22608));
    // 0x4298fc: 0x0  nop
    ctx->pc = 0x4298fcu;
    // NOP
label_429900:
    // 0x429900: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x429900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x429904: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x429904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x429908: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x429908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x42990c: 0x0  nop
    ctx->pc = 0x42990cu;
    // NOP
    // 0x429910: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x429910u;
    {
        const bool branch_taken_0x429910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429910u;
        // 0x429914: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429910) {
            ctx->pc = 0x429900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429900;
        }
    }
    ctx->pc = 0x429918u;
    // 0x429918: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x429918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x42991c: 0x25e9ec80  addiu       $t1, $t7, -0x1380
    ctx->pc = 0x42991cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962304));
    // 0x429920: 0x2452ea50  addiu       $s2, $v0, -0x15B0
    ctx->pc = 0x429920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x429924: 0x2711ec70  addiu       $s1, $t8, -0x1390
    ctx->pc = 0x429924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), 4294962288));
    // 0x429928: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x429928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x42992c: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x42992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x429930: 0x6a50000f  ldl         $s0, 0xF($s2)
    ctx->pc = 0x429930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x429934: 0x6e500008  ldr         $s0, 0x8($s2)
    ctx->pc = 0x429934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x429938: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x429938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42993c: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x42993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429940: 0xb230000f  sdl         $s0, 0xF($s1)
    ctx->pc = 0x429940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429944: 0xb6300008  sdr         $s0, 0x8($s1)
    ctx->pc = 0x429944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429948: 0x3c040050  lui         $a0, 0x50
    ctx->pc = 0x429948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)80 << 16));
    // 0x42994c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x42994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x429950: 0x25caec90  addiu       $t2, $t6, -0x1370
    ctx->pc = 0x429950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962320));
    // 0x429954: 0x2472ea60  addiu       $s2, $v1, -0x15A0
    ctx->pc = 0x429954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x429958: 0x25f1ec80  addiu       $s1, $t7, -0x1380
    ctx->pc = 0x429958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962304));
    // 0x42995c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x42995cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x429960: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x429960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x429964: 0x6a50000f  ldl         $s0, 0xF($s2)
    ctx->pc = 0x429964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x429968: 0x6e500008  ldr         $s0, 0x8($s2)
    ctx->pc = 0x429968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x42996c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x42996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429970: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x429970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429974: 0xb230000f  sdl         $s0, 0xF($s1)
    ctx->pc = 0x429974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x429978: 0xb6300008  sdr         $s0, 0x8($s1)
    ctx->pc = 0x429978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42997c: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x42997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
    // 0x429980: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x429980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x429984: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x429984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x429988: 0x2451ea70  addiu       $s1, $v0, -0x1590
    ctx->pc = 0x429988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961776));
    // 0x42998c: 0x25d0ec90  addiu       $s0, $t6, -0x1370
    ctx->pc = 0x42998cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962320));
    // 0x429990: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x429990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x429994: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x429994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x429998: 0x6a2f000f  ldl         $t7, 0xF($s1)
    ctx->pc = 0x429998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x42999c: 0x6e2f0008  ldr         $t7, 0x8($s1)
    ctx->pc = 0x42999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4299a0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x4299a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299a4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x4299a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299a8: 0xb20f000f  sdl         $t7, 0xF($s0)
    ctx->pc = 0x4299a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299ac: 0xb60f0008  sdr         $t7, 0x8($s0)
    ctx->pc = 0x4299acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299b0: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x4299b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x4299b4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4299b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4299b8: 0xaf245850  sw          $a0, 0x5850($t9)
    ctx->pc = 0x4299b8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 22608), GPR_U32(ctx, 4));
    // 0x4299bc: 0x246fea80  addiu       $t7, $v1, -0x1580
    ctx->pc = 0x4299bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
    // 0x4299c0: 0x25aeeca0  addiu       $t6, $t5, -0x1360
    ctx->pc = 0x4299c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962336));
    // 0x4299c4: 0x69f20007  ldl         $s2, 0x7($t7)
    ctx->pc = 0x4299c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4299c8: 0x6df20000  ldr         $s2, 0x0($t7)
    ctx->pc = 0x4299c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4299cc: 0x69e2000f  ldl         $v0, 0xF($t7)
    ctx->pc = 0x4299ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4299d0: 0x6de20008  ldr         $v0, 0x8($t7)
    ctx->pc = 0x4299d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4299d4: 0xb1d20007  sdl         $s2, 0x7($t6)
    ctx->pc = 0x4299d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299d8: 0xb5d20000  sdr         $s2, 0x0($t6)
    ctx->pc = 0x4299d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299dc: 0xb1c2000f  sdl         $v0, 0xF($t6)
    ctx->pc = 0x4299dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299e0: 0xb5c20008  sdr         $v0, 0x8($t6)
    ctx->pc = 0x4299e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4299e4: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x4299e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x4299e8: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x4299e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x4299ec: 0x34c6400d  ori         $a2, $a2, 0x400D
    ctx->pc = 0x4299ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16397);
    // 0x4299f0: 0x3c076e00  lui         $a3, 0x6E00
    ctx->pc = 0x4299f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28160 << 16));
    // 0x4299f4: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x4299f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x4299f8: 0x25a8eca0  addiu       $t0, $t5, -0x1360
    ctx->pc = 0x4299f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962336));
    // 0x4299fc: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x4299fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x429a00: 0x270bec70  addiu       $t3, $t8, -0x1390
    ctx->pc = 0x429a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 4294962288));
    // 0x429a04: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x429a04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x429a08: 0xad650008  sw          $a1, 0x8($t3)
    ctx->pc = 0x429a08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 5));
    // 0x429a0c: 0x258353c8  addiu       $v1, $t4, 0x53C8
    ctx->pc = 0x429a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 21448));
    // 0x429a10: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x429a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x429a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x429a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x429a18: 0x34420088  ori         $v0, $v0, 0x88
    ctx->pc = 0x429a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)136);
    // 0x429a1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x429a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x429a20: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x429a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x429a24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x429a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429a28: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x429a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x429a2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x429a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x429a30: 0xc118508  jal         func_461420
    ctx->pc = 0x429A30u;
    SET_GPR_U32(ctx, 31, 0x429A38u);
    ctx->pc = 0x429A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429A30u;
    // 0x429a34: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x429A30u, 0x429A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429A38u;
label_429a38:
    // 0x429a38: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x429a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x429a3c: 0xc11851c  jal         func_461470
    ctx->pc = 0x429A3Cu;
    SET_GPR_U32(ctx, 31, 0x429A44u);
    ctx->pc = 0x429A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429A3Cu;
    // 0x429a40: 0x34840088  ori         $a0, $a0, 0x88 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)136);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x429A3Cu, 0x429A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429A44u;
label_429a44:
    // 0x429a44: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x429a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x429a48: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x429a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x429a4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x429a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x429a50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x429a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x429a54: 0x3e00008  jr          $ra
    ctx->pc = 0x429A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A54u;
        // 0x429a58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429A5Cu;
    // 0x429a5c: 0x0  nop
    ctx->pc = 0x429a5cu;
    // NOP
    ctx->pc = 0x429a60u;
}
