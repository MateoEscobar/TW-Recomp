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

// Function: sub_00426240
// Address: 0x426240 - 0x426430
void sub_00426240_0x426240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426240_0x426240");
#endif

    switch (ctx->pc) {
        case 0x426298u: goto label_426298;
        case 0x4263fcu: goto label_4263fc;
        case 0x426408u: goto label_426408;
        default: break;
    }

    ctx->pc = 0x426240u;

    // 0x426240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x426240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x426244: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x426244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x426248: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x426248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x42624c: 0x244e9d10  addiu       $t6, $v0, -0x62F0
    ctx->pc = 0x42624cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x426250: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x426250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x426254: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x426254u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x426258: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x426258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x42625c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426260: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x426260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x426264: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x426264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x426268: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x426268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x42626c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x42626cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x426270: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x426270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x426274: 0x3c190070  lui         $t9, 0x70
    ctx->pc = 0x426274u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)112 << 16));
    // 0x426278: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x426278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x42627c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x42627cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x426280: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x426280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x426284: 0x3c180053  lui         $t8, 0x53
    ctx->pc = 0x426284u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)83 << 16));
    // 0x426288: 0x3c0f0070  lui         $t7, 0x70
    ctx->pc = 0x426288u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)112 << 16));
    // 0x42628c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x42628cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x426290: 0x2663ead8  addiu       $v1, $s3, -0x1528
    ctx->pc = 0x426290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961880));
    // 0x426294: 0x0  nop
    ctx->pc = 0x426294u;
    // NOP
label_426298:
    // 0x426298: 0xac6e0000  sw          $t6, 0x0($v1)
    ctx->pc = 0x426298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 14));
    // 0x42629c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4262a0: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x4262a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x4262a4: 0x0  nop
    ctx->pc = 0x4262a4u;
    // NOP
    // 0x4262a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4262A8u;
    {
        const bool branch_taken_0x4262a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4262A8u;
        // 0x4262ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4262a8) {
            ctx->pc = 0x426298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426298;
        }
    }
    ctx->pc = 0x4262B0u;
    // 0x4262b0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4262b4: 0x264cea88  addiu       $t4, $s2, -0x1578
    ctx->pc = 0x4262b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961800));
    // 0x4262b8: 0x2456ea50  addiu       $s6, $v0, -0x15B0
    ctx->pc = 0x4262b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x4262bc: 0x2655ea88  addiu       $s5, $s2, -0x1578
    ctx->pc = 0x4262bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961800));
    // 0x4262c0: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x4262c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4262c4: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x4262c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4262c8: 0x6ad4000f  ldl         $s4, 0xF($s6)
    ctx->pc = 0x4262c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4262cc: 0x6ed40008  ldr         $s4, 0x8($s6)
    ctx->pc = 0x4262ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x4262d0: 0xb2a30007  sdl         $v1, 0x7($s5)
    ctx->pc = 0x4262d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4262d4: 0xb6a30000  sdr         $v1, 0x0($s5)
    ctx->pc = 0x4262d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4262d8: 0xb2b4000f  sdl         $s4, 0xF($s5)
    ctx->pc = 0x4262d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4262dc: 0xb6b40008  sdr         $s4, 0x8($s5)
    ctx->pc = 0x4262dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4262e0: 0x262aea98  addiu       $t2, $s1, -0x1568
    ctx->pc = 0x4262e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961816));
    // 0x4262e4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4262e8: 0x25e8eac8  addiu       $t0, $t7, -0x1538
    ctx->pc = 0x4262e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961864));
    // 0x4262ec: 0x2475ea60  addiu       $s5, $v1, -0x15A0
    ctx->pc = 0x4262ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x4262f0: 0x2634ea98  addiu       $s4, $s1, -0x1568
    ctx->pc = 0x4262f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961816));
    // 0x4262f4: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x4262f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4262f8: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x4262f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4262fc: 0x6ab2000f  ldl         $s2, 0xF($s5)
    ctx->pc = 0x4262fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x426300: 0x6eb20008  ldr         $s2, 0x8($s5)
    ctx->pc = 0x426300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x426304: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x426304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426308: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x426308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42630c: 0xb292000f  sdl         $s2, 0xF($s4)
    ctx->pc = 0x42630cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426310: 0xb6920008  sdr         $s2, 0x8($s4)
    ctx->pc = 0x426310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426314: 0x3c046d00  lui         $a0, 0x6D00
    ctx->pc = 0x426314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27904 << 16));
    // 0x426318: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x426318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x42631c: 0xae6eead8  sw          $t6, -0x1528($s3)
    ctx->pc = 0x42631cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294961880), GPR_U32(ctx, 14));
    // 0x426320: 0x2452ea70  addiu       $s2, $v0, -0x1590
    ctx->pc = 0x426320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961776));
    // 0x426324: 0x2731eaa8  addiu       $s1, $t9, -0x1558
    ctx->pc = 0x426324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), 4294961832));
    // 0x426328: 0x6a560007  ldl         $s6, 0x7($s2)
    ctx->pc = 0x426328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x42632c: 0x6e560000  ldr         $s6, 0x0($s2)
    ctx->pc = 0x42632cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x426330: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x426330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x426334: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x426334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x426338: 0xb2360007  sdl         $s6, 0x7($s1)
    ctx->pc = 0x426338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42633c: 0xb6360000  sdr         $s6, 0x0($s1)
    ctx->pc = 0x42633cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426340: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x426340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426344: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x426344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426348: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x426348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x42634c: 0x2702ea80  addiu       $v0, $t8, -0x1580
    ctx->pc = 0x42634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 4294961792));
    // 0x426350: 0x25f6eac8  addiu       $s6, $t7, -0x1538
    ctx->pc = 0x426350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961864));
    // 0x426354: 0x68540007  ldl         $s4, 0x7($v0)
    ctx->pc = 0x426354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x426358: 0x6c540000  ldr         $s4, 0x0($v0)
    ctx->pc = 0x426358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x42635c: 0x6855000f  ldl         $s5, 0xF($v0)
    ctx->pc = 0x42635cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x426360: 0x6c550008  ldr         $s5, 0x8($v0)
    ctx->pc = 0x426360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x426364: 0xb2d40007  sdl         $s4, 0x7($s6)
    ctx->pc = 0x426364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426368: 0xb6d40000  sdr         $s4, 0x0($s6)
    ctx->pc = 0x426368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42636c: 0xb2d5000f  sdl         $s5, 0xF($s6)
    ctx->pc = 0x42636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426370: 0xb6d50008  sdr         $s5, 0x8($s6)
    ctx->pc = 0x426370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426374: 0x3c056e00  lui         $a1, 0x6E00
    ctx->pc = 0x426374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28160 << 16));
    // 0x426378: 0x2712ea80  addiu       $s2, $t8, -0x1580
    ctx->pc = 0x426378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 4294961792));
    // 0x42637c: 0x2611eab8  addiu       $s1, $s0, -0x1548
    ctx->pc = 0x42637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961848));
    // 0x426380: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x426380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x426384: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x426384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x426388: 0x6a4f000f  ldl         $t7, 0xF($s2)
    ctx->pc = 0x426388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x42638c: 0x6e4f0008  ldr         $t7, 0x8($s2)
    ctx->pc = 0x42638cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x426390: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x426390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426394: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x426394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x426398: 0xb22f000f  sdl         $t7, 0xF($s1)
    ctx->pc = 0x426398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42639c: 0xb62f0008  sdr         $t7, 0x8($s1)
    ctx->pc = 0x42639cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4263a0: 0x272beaa8  addiu       $t3, $t9, -0x1558
    ctx->pc = 0x4263a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 4294961832));
    // 0x4263a4: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x4263a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x4263a8: 0x34a5400d  ori         $a1, $a1, 0x400D
    ctx->pc = 0x4263a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16397);
    // 0x4263ac: 0x3c066e00  lui         $a2, 0x6E00
    ctx->pc = 0x4263acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28160 << 16));
    // 0x4263b0: 0xad650008  sw          $a1, 0x8($t3)
    ctx->pc = 0x4263b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 5));
    // 0x4263b4: 0x2609eab8  addiu       $t1, $s0, -0x1548
    ctx->pc = 0x4263b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961848));
    // 0x4263b8: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x4263b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x4263bc: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x4263bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x4263c0: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x4263c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x4263c4: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x4263c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x4263c8: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x4263c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x4263cc: 0xad840008  sw          $a0, 0x8($t4)
    ctx->pc = 0x4263ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 4));
    // 0x4263d0: 0x25a35120  addiu       $v1, $t5, 0x5120
    ctx->pc = 0x4263d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 20768));
    // 0x4263d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4263d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4263d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4263d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4263dc: 0x34420082  ori         $v0, $v0, 0x82
    ctx->pc = 0x4263dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)130);
    // 0x4263e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4263e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4263e4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4263e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4263e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4263e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263ec: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4263ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4263f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4263f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4263f4: 0xc118508  jal         func_461420
    ctx->pc = 0x4263F4u;
    SET_GPR_U32(ctx, 31, 0x4263FCu);
    ctx->pc = 0x4263F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4263F4u;
    // 0x4263f8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x4263F4u, 0x4263FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4263FCu;
label_4263fc:
    // 0x4263fc: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x4263fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x426400: 0xc11851c  jal         func_461470
    ctx->pc = 0x426400u;
    SET_GPR_U32(ctx, 31, 0x426408u);
    ctx->pc = 0x426404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426400u;
    // 0x426404: 0x34840082  ori         $a0, $a0, 0x82 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)130);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x426400u, 0x426408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426408u;
label_426408:
    // 0x426408: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x426408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42640c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x42640cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x426410: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x426410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x426414: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x426414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426418: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x426418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42641c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x42641cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x426420: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x426420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x426424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426428: 0x3e00008  jr          $ra
    ctx->pc = 0x426428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426428u;
        // 0x42642c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426430u;
}
