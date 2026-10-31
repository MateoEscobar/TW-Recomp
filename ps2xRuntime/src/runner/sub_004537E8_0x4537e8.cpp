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

// Function: sub_004537E8
// Address: 0x4537e8 - 0x453990
void sub_004537E8_0x4537e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004537E8_0x4537e8");
#endif

    switch (ctx->pc) {
        case 0x453824u: goto label_453824;
        case 0x453854u: goto label_453854;
        case 0x453864u: goto label_453864;
        case 0x453898u: goto label_453898;
        case 0x4538d8u: goto label_4538d8;
        case 0x453928u: goto label_453928;
        case 0x453930u: goto label_453930;
        case 0x453940u: goto label_453940;
        case 0x45395cu: goto label_45395c;
        default: break;
    }

    ctx->pc = 0x4537e8u;

    // 0x4537e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4537e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4537ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4537ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4537f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4537f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4537f4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4537f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4537f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4537f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4537fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4537fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453800: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x453800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x453804: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x453804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x453808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x453808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45380c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x45380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x453810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453814: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x453814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x453818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x453818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45381c: 0xc11ac5c  jal         func_46B170
    ctx->pc = 0x45381Cu;
    SET_GPR_U32(ctx, 31, 0x453824u);
    ctx->pc = 0x453820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45381Cu;
    // 0x453820: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x45381Cu, 0x453824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453824u;
label_453824:
    // 0x453824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x453824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453828: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x453828u;
    {
        const bool branch_taken_0x453828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453828u;
        // 0x45382c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453828) {
            ctx->pc = 0x453968u;
            goto label_453968;
        }
    }
    ctx->pc = 0x453830u;
    // 0x453830: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x453830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x453834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x453838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45383c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x45383cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x453840: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x453840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x453844: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x453844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x453848: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x453848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x45384c: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x45384Cu;
    SET_GPR_U32(ctx, 31, 0x453854u);
    ctx->pc = 0x453850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45384Cu;
    // 0x453850: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x45384Cu, 0x453854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453854u;
label_453854:
    // 0x453854: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x453854u;
    {
        const bool branch_taken_0x453854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x453858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453854u;
        // 0x453858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453854) {
            ctx->pc = 0x453968u;
            goto label_453968;
        }
    }
    ctx->pc = 0x45385Cu;
    // 0x45385c: 0xc11b3b6  jal         func_46CED8
    ctx->pc = 0x45385Cu;
    SET_GPR_U32(ctx, 31, 0x453864u);
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x45385Cu, 0x453864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453864u;
label_453864:
    // 0x453864: 0xc780802c  lwc1        $f0, -0x7FD4($gp)
    ctx->pc = 0x453864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x453868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45386c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x45386cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x453870: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x453870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x453874: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x453874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x453878: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x453878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x45387c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x45387cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x453880: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x453880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x453884: 0xb2420013  sdl         $v0, 0x13($s2)
    ctx->pc = 0x453884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453888: 0xb642000c  sdr         $v0, 0xC($s2)
    ctx->pc = 0x453888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45388c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x45388cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x453890: 0xc11b850  jal         func_46E140
    ctx->pc = 0x453890u;
    SET_GPR_U32(ctx, 31, 0x453898u);
    ctx->pc = 0x453894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453890u;
    // 0x453894: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E140u, 0x453890u, 0x453898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453898u;
label_453898:
    // 0x453898: 0x8f8588e8  lw          $a1, -0x7718($gp)
    ctx->pc = 0x453898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x45389c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x45389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4538a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4538a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4538a4: 0x2473ad18  addiu       $s3, $v1, -0x52E8
    ctx->pc = 0x4538a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4538a8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x4538a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4538ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4538acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4538b0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4538b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4538b4: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x4538b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x4538b8: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x4538b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x4538bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4538bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4538c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4538c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4538c4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x4538c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4538c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4538c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4538cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4538ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4538d0: 0xc11b720  jal         func_46DC80
    ctx->pc = 0x4538D0u;
    SET_GPR_U32(ctx, 31, 0x4538D8u);
    ctx->pc = 0x4538D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4538D0u;
    // 0x4538d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DC80u, 0x4538D0u, 0x4538D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4538D8u;
label_4538d8:
    // 0x4538d8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4538d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x4538dc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4538dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4538e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4538e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4538e4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x4538e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4538e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4538e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4538ec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4538ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4538f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4538f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4538f4: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x4538f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x4538f8: 0x8f82841c  lw          $v0, -0x7BE4($gp)
    ctx->pc = 0x4538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
    // 0x4538fc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x4538fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x453900: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x453900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x453904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x453904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453908: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x453908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x45390c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x45390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x453910: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x453910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x453914: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x453914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x453918: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x453918u;
    {
        const bool branch_taken_0x453918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453918u;
        // 0x45391c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453918) {
            ctx->pc = 0x453964u;
            goto label_453964;
        }
    }
    ctx->pc = 0x453920u;
    // 0x453920: 0xc11b448  jal         func_46D120
    ctx->pc = 0x453920u;
    SET_GPR_U32(ctx, 31, 0x453928u);
    ctx->pc = 0x453924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453920u;
    // 0x453924: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x453920u, 0x453928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453928u;
label_453928:
    // 0x453928: 0xc11b3e4  jal         func_46CF90
    ctx->pc = 0x453928u;
    SET_GPR_U32(ctx, 31, 0x453930u);
    ctx->pc = 0x45392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453928u;
    // 0x45392c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x453928u, 0x453930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453930u;
label_453930:
    // 0x453930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x453930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x453934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453938: 0xc11a984  jal         func_46A610
    ctx->pc = 0x453938u;
    SET_GPR_U32(ctx, 31, 0x453940u);
    ctx->pc = 0x45393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453938u;
    // 0x45393c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x453938u, 0x453940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453940u;
label_453940:
    // 0x453940: 0x8f83841c  lw          $v1, -0x7BE4($gp)
    ctx->pc = 0x453940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
    // 0x453944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453948: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x453948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x45394c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x453950: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x453950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x453954: 0xc11b010  jal         func_46C040
    ctx->pc = 0x453954u;
    SET_GPR_U32(ctx, 31, 0x45395Cu);
    ctx->pc = 0x453958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453954u;
    // 0x453958: 0xaea5006c  sw          $a1, 0x6C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x453954u, 0x45395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45395Cu;
label_45395c:
    // 0x45395c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45395Cu;
    {
        const bool branch_taken_0x45395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45395Cu;
        // 0x453960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45395c) {
            ctx->pc = 0x453968u;
            goto label_453968;
        }
    }
    ctx->pc = 0x453964u;
label_453964:
    // 0x453964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x453964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453968:
    // 0x453968: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x453968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45396c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x45396cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x453970: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x453970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x453974: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x453974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453978: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x453978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45397c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x45397cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x453980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453984: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x453984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x453988: 0x3e00008  jr          $ra
    ctx->pc = 0x453988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453988u;
        // 0x45398c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453990u;
}
