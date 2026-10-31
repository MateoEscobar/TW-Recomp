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

// Function: sub_00199BA8
// Address: 0x199ba8 - 0x199e08
void sub_00199BA8_0x199ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199BA8_0x199ba8");
#endif

    switch (ctx->pc) {
        case 0x199bdcu: goto label_199bdc;
        case 0x199bf8u: goto label_199bf8;
        case 0x199c50u: goto label_199c50;
        case 0x199c80u: goto label_199c80;
        case 0x199cd4u: goto label_199cd4;
        case 0x199d14u: goto label_199d14;
        case 0x199d24u: goto label_199d24;
        case 0x199d28u: goto label_199d28;
        case 0x199d44u: goto label_199d44;
        case 0x199d70u: goto label_199d70;
        case 0x199d80u: goto label_199d80;
        case 0x199da0u: goto label_199da0;
        default: break;
    }

    ctx->pc = 0x199ba8u;

    // 0x199ba8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199bac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x199bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x199bb0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x199bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x199bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bb8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x199bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x199bbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x199bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x199bc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x199bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bc4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x199bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x199bc8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x199bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x199bcc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x199bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x199bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199bd4: 0xc066e9c  jal         func_19BA70
    ctx->pc = 0x199BD4u;
    SET_GPR_U32(ctx, 31, 0x199BDCu);
    ctx->pc = 0x199BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199BD4u;
    // 0x199bd8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA70u, 0x199BD4u, 0x199BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199BDCu;
label_199bdc:
    // 0x199bdc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x199be0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199be4: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x199be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199bec: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x199becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x199bf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x199bf4: 0x0  nop
    ctx->pc = 0x199bf4u;
    // NOP
label_199bf8:
    // 0x199bf8: 0x0  nop
    ctx->pc = 0x199bf8u;
    // NOP
    // 0x199bfc: 0x0  nop
    ctx->pc = 0x199bfcu;
    // NOP
    // 0x199c00: 0x0  nop
    ctx->pc = 0x199c00u;
    // NOP
    // 0x199c04: 0x0  nop
    ctx->pc = 0x199c04u;
    // NOP
    // 0x199c08: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x199C08u;
    {
        const bool branch_taken_0x199c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x199C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C08u;
        // 0x199c0c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c08) {
            ctx->pc = 0x199BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199bf8;
        }
    }
    ctx->pc = 0x199C10u;
    // 0x199c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x199c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199c18: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x199c1c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x199c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x199c20: 0x263600f4  addiu       $s6, $s1, 0xF4
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    // 0x199c24: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x199c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x199c28: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x199c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x199c2c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x199c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x199c30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x199c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x199c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x199c38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x199c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x199c40: 0x2634002c  addiu       $s4, $s1, 0x2C
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x199c44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x199c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x199c48: 0x26080060  addiu       $t0, $s0, 0x60
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x199c4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x199c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_199c50:
    // 0x199c50: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x199c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199c54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x199c58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x199c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199c5c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x199c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199c60: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x199c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x199c64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199C64u;
    {
        const bool branch_taken_0x199c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C64u;
        // 0x199c68: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c64) {
            ctx->pc = 0x199C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c50;
        }
    }
    ctx->pc = 0x199C6Cu;
    // 0x199c6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x199c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c70: 0xf41025  or          $v0, $a3, $s4
    ctx->pc = 0x199c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x199c74: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x199c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x199c78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x199C78u;
    {
        const bool branch_taken_0x199c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C78u;
        // 0x199c7c: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c78) {
            ctx->pc = 0x199CD4u;
            goto label_199cd4;
        }
    }
    ctx->pc = 0x199C80u;
label_199c80:
    // 0x199c80: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x199c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x199c84: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x199c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x199c88: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x199c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x199c8c: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x199c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x199c90: 0x68e50017  ldl         $a1, 0x17($a3)
    ctx->pc = 0x199c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x199c94: 0x6ce50010  ldr         $a1, 0x10($a3)
    ctx->pc = 0x199c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x199c98: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x199c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x199c9c: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x199c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x199ca0: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x199ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ca4: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x199ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199ca8: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x199ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cac: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x199cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cb0: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x199cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cb4: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x199cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cb8: 0xb066001f  sdl         $a2, 0x1F($v1)
    ctx->pc = 0x199cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cbc: 0xb4660018  sdr         $a2, 0x18($v1)
    ctx->pc = 0x199cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199cc0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x199cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x199cc4: 0x14e8ffee  bne         $a3, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x199CC4u;
    {
        const bool branch_taken_0x199cc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x199CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CC4u;
        // 0x199cc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cc4) {
            ctx->pc = 0x199C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c80;
        }
    }
    ctx->pc = 0x199CCCu;
    // 0x199ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x199CCCu;
    {
        const bool branch_taken_0x199ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ccc) {
            ctx->pc = 0x199D00u;
            goto label_199d00;
        }
    }
    ctx->pc = 0x199CD4u;
label_199cd4:
    // 0x199cd4: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x199cd4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199cd8: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x199cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x199cdc: 0xdce40010  ld          $a0, 0x10($a3)
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x199ce0: 0xdce50018  ld          $a1, 0x18($a3)
    ctx->pc = 0x199ce0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x199ce4: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x199ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x199ce8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x199ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x199cec: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x199cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x199cf0: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x199cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x199cf4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x199cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x199cf8: 0x14e8fff6  bne         $a3, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x199CF8u;
    {
        const bool branch_taken_0x199cf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x199CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CF8u;
        // 0x199cfc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cf8) {
            ctx->pc = 0x199CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cd4;
        }
    }
    ctx->pc = 0x199D00u;
label_199d00:
    // 0x199d00: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x199d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d0c: 0xc066794  jal         func_199E50
    ctx->pc = 0x199D0Cu;
    SET_GPR_U32(ctx, 31, 0x199D14u);
    ctx->pc = 0x199D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D0Cu;
    // 0x199d10: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199E50u, 0x199D0Cu, 0x199D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D14u;
label_199d14:
    // 0x199d14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d18: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x199d1c: 0xc066812  jal         func_19A048
    ctx->pc = 0x199D1Cu;
    SET_GPR_U32(ctx, 31, 0x199D24u);
    ctx->pc = 0x199D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D1Cu;
    // 0x199d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A048u, 0x199D1Cu, 0x199D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D24u;
label_199d24:
    // 0x199d24: 0x2122818  mult        $a1, $s0, $s2
    ctx->pc = 0x199d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_199d28:
    // 0x199d28: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x199d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x199d38: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x199d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x199d3c: 0xc06686e  jal         func_19A1B8
    ctx->pc = 0x199D3Cu;
    SET_GPR_U32(ctx, 31, 0x199D44u);
    ctx->pc = 0x199D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D3Cu;
    // 0x199d40: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A1B8u, 0x199D3Cu, 0x199D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D44u;
label_199d44:
    // 0x199d44: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x199d48: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x199d48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199d4c: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x199d4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x199d50: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x199D50u;
    {
        const bool branch_taken_0x199d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d50) {
            ctx->pc = 0x199D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D50u;
            // 0x199d54: 0x2122818  mult        $a1, $s0, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d28;
        }
    }
    ctx->pc = 0x199D58u;
    // 0x199d58: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x199d5c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x199D5Cu;
    {
        const bool branch_taken_0x199d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D5Cu;
        // 0x199d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d5c) {
            ctx->pc = 0x199DD4u;
            goto label_199dd4;
        }
    }
    ctx->pc = 0x199D64u;
    // 0x199d64: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x199d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x199d68: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x199d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x199d6c: 0x0  nop
    ctx->pc = 0x199d6cu;
    // NOP
label_199d70:
    // 0x199d70: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199d74: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x199d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d7c: 0x2152818  mult        $a1, $s0, $s5
    ctx->pc = 0x199d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_199d80:
    // 0x199d80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x199d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x199d84: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x199d88: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199d8c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x199d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d94: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x199d98: 0xc06686e  jal         func_19A1B8
    ctx->pc = 0x199D98u;
    SET_GPR_U32(ctx, 31, 0x199DA0u);
    ctx->pc = 0x199D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D98u;
    // 0x199d9c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A1B8u, 0x199D98u, 0x199DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DA0u;
label_199da0:
    // 0x199da0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x199da4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x199da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199da8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x199da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x199dac: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x199DACu;
    {
        const bool branch_taken_0x199dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199dac) {
            ctx->pc = 0x199DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DACu;
            // 0x199db0: 0x2152818  mult        $a1, $s0, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d80;
        }
    }
    ctx->pc = 0x199DB4u;
    // 0x199db4: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x199db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x199db8: 0x2c820019  sltiu       $v0, $a0, 0x19
    ctx->pc = 0x199db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x199dbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199DBCu;
    {
        const bool branch_taken_0x199dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DBCu;
        // 0x199dc0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dbc) {
            ctx->pc = 0x199DD4u;
            goto label_199dd4;
        }
    }
    ctx->pc = 0x199DC4u;
    // 0x199dc4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x199dc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199dcc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x199DCCu;
    {
        const bool branch_taken_0x199dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DCCu;
        // 0x199dd0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dcc) {
            ctx->pc = 0x199D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d70;
        }
    }
    ctx->pc = 0x199DD4u;
label_199dd4:
    // 0x199dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199dd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x199dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ddc: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x199ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x199de0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x199de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199de4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x199de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199de8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x199de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199dec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x199decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199df0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x199df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199df4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x199df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199df8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x199df8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199e00: 0x3e00008  jr          $ra
    ctx->pc = 0x199E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E00u;
        // 0x199e04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199E08u;
}
