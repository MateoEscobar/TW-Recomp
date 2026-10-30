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

// Function: sub_001A4050
// Address: 0x1a4050 - 0x1a41b0
void sub_001A4050_0x1a4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4050_0x1a4050");
#endif

    switch (ctx->pc) {
        case 0x1a416cu: goto label_1a416c;
        default: break;
    }

    ctx->pc = 0x1a4050u;

    // 0x1a4050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4054: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a405c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1a405cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4064: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4064u;
    {
        const bool branch_taken_0x1a4064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4064u;
        // 0x1a4068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4064) {
            ctx->pc = 0x1A40B4u;
            goto label_1a40b4;
        }
    }
    ctx->pc = 0x1A406Cu;
    // 0x1a406c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1a4070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4074: 0x0  nop
    ctx->pc = 0x1a4074u;
    // NOP
    // 0x1a4078: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1a4078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a407c: 0x0  nop
    ctx->pc = 0x1a407cu;
    // NOP
    // 0x1a4080: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1A4080u;
    {
        const bool branch_taken_0x1a4080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4080u;
        // 0x1a4084: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4080) {
            ctx->pc = 0x1A40B4u;
            goto label_1a40b4;
        }
    }
    ctx->pc = 0x1A4088u;
    // 0x1a4088: 0x2446d198  addiu       $a2, $v0, -0x2E68
    ctx->pc = 0x1a4088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955416));
    // 0x1a408c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1a408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a4090: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1a4090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a4094: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1a4094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a4098: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1a4098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a409c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1a409cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a40a0: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1a40a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a40a4: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x1a40a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a40a8: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x1a40a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a40ac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A40ACu;
    {
        const bool branch_taken_0x1a40ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40ACu;
        // 0x1a40b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40ac) {
            ctx->pc = 0x1A419Cu;
            goto label_1a419c;
        }
    }
    ctx->pc = 0x1A40B4u;
label_1a40b4:
    // 0x1a40b4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1a40b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1a40b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a40b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a40bc: 0x0  nop
    ctx->pc = 0x1a40bcu;
    // NOP
    // 0x1a40c0: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1a40c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a40c4: 0x0  nop
    ctx->pc = 0x1a40c4u;
    // NOP
    // 0x1a40c8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A40C8u;
    {
        const bool branch_taken_0x1a40c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a40c8) {
            ctx->pc = 0x1A410Cu;
            goto label_1a410c;
        }
    }
    ctx->pc = 0x1A40D0u;
    // 0x1a40d0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1a40d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a40d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a40d8: 0x0  nop
    ctx->pc = 0x1a40d8u;
    // NOP
    // 0x1a40dc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1a40dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a40e0: 0x0  nop
    ctx->pc = 0x1a40e0u;
    // NOP
    // 0x1a40e4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A40E4u;
    {
        const bool branch_taken_0x1a40e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40E4u;
        // 0x1a40e8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40e4) {
            ctx->pc = 0x1A410Cu;
            goto label_1a410c;
        }
    }
    ctx->pc = 0x1A40ECu;
    // 0x1a40ec: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1a40ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1a40f0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a40f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a40f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a40f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a40f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a40fc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a40fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1a4100: 0x24a5d198  addiu       $a1, $a1, -0x2E68
    ctx->pc = 0x1a4100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955416));
    // 0x1a4104: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4104u;
    {
        const bool branch_taken_0x1a4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4104u;
        // 0x1a4108: 0x24c6d1a8  addiu       $a2, $a2, -0x2E58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4104) {
            ctx->pc = 0x1A4160u;
            goto label_1a4160;
        }
    }
    ctx->pc = 0x1A410Cu;
label_1a410c:
    // 0x1a410c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1a410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1a4110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4114: 0x0  nop
    ctx->pc = 0x1a4114u;
    // NOP
    // 0x1a4118: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1a4118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a411c: 0x0  nop
    ctx->pc = 0x1a411cu;
    // NOP
    // 0x1a4120: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1A4120u;
    {
        const bool branch_taken_0x1a4120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4120u;
        // 0x1a4124: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4120) {
            ctx->pc = 0x1A4174u;
            goto label_1a4174;
        }
    }
    ctx->pc = 0x1A4128u;
    // 0x1a4128: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1a4128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1a412c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a412cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4130: 0x0  nop
    ctx->pc = 0x1a4130u;
    // NOP
    // 0x1a4134: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1a4134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4138: 0x0  nop
    ctx->pc = 0x1a4138u;
    // NOP
    // 0x1a413c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A413Cu;
    {
        const bool branch_taken_0x1a413c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A413Cu;
        // 0x1a4140: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a413c) {
            ctx->pc = 0x1A4174u;
            goto label_1a4174;
        }
    }
    ctx->pc = 0x1A4144u;
    // 0x1a4144: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1a4144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1a4148: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a414c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a414cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a4150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a4154: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a4154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1a4158: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x1a415c: 0x24c6d1b8  addiu       $a2, $a2, -0x2E48
    ctx->pc = 0x1a415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955448));
label_1a4160:
    // 0x1a4160: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1a4160u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1a4164: 0xc05e8f0  jal         func_17A3C0
    ctx->pc = 0x1A4164u;
    SET_GPR_U32(ctx, 31, 0x1A416Cu);
    ctx->pc = 0x1A4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4164u;
    // 0x1a4168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3C0u, 0x1A4164u, 0x1A416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A416Cu;
label_1a416c:
    // 0x1a416c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A416Cu;
    {
        const bool branch_taken_0x1a416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A416Cu;
        // 0x1a4170: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a416c) {
            ctx->pc = 0x1A419Cu;
            goto label_1a419c;
        }
    }
    ctx->pc = 0x1A4174u;
label_1a4174:
    // 0x1a4174: 0x2446d1b8  addiu       $a2, $v0, -0x2E48
    ctx->pc = 0x1a4174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955448));
    // 0x1a4178: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1a4178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a417c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1a417cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a4180: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1a4180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a4184: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1a4184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a4188: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1a4188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a418c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1a418cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4190: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x1a4190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4194: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x1a4194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a419c:
    // 0x1a419c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a41a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a41a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a41a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A41A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41A4u;
        // 0x1a41a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A41A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A41ACu;
    // 0x1a41ac: 0x0  nop
    ctx->pc = 0x1a41acu;
    // NOP
    ctx->pc = 0x1a41b0u;
}
