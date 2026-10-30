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

// Function: sub_0045EB30
// Address: 0x45eb30 - 0x45eeb0
void sub_0045EB30_0x45eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EB30_0x45eb30");
#endif

    switch (ctx->pc) {
        case 0x45eb9cu: goto label_45eb9c;
        case 0x45eba4u: goto label_45eba4;
        case 0x45ec20u: goto label_45ec20;
        case 0x45ed9cu: goto label_45ed9c;
        case 0x45edb4u: goto label_45edb4;
        case 0x45edd8u: goto label_45edd8;
        case 0x45edf8u: goto label_45edf8;
        case 0x45ee1cu: goto label_45ee1c;
        case 0x45ee54u: goto label_45ee54;
        case 0x45ee64u: goto label_45ee64;
        case 0x45ee6cu: goto label_45ee6c;
        case 0x45ee74u: goto label_45ee74;
        case 0x45ee7cu: goto label_45ee7c;
        default: break;
    }

    ctx->pc = 0x45eb30u;

    // 0x45eb30: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x45eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x45eb34: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x45eb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x45eb38: 0x30c80010  andi        $t0, $a2, 0x10
    ctx->pc = 0x45eb38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x45eb3c: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x45eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x45eb40: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x45eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x45eb44: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x45eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x45eb48: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x45eb48u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x45eb4c: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x45eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x45eb50: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x45eb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x45eb54: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45eb58: 0x34e20008  ori         $v0, $a3, 0x8
    ctx->pc = 0x45eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x45eb5c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x45eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x45eb60: 0xe6100a  movz        $v0, $a3, $a2
    ctx->pc = 0x45eb60u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x45eb64: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x45eb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x45eb68: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x45eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x45eb6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45eb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eb70: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x45eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x45eb74: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x45eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x45eb78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x45eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x45eb7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x45eb80: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x45eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x45eb84: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x45eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x45eb88: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x45eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x45eb8c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x45eb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x45eb90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45eb94: 0xc11ac5c  jal         func_46B170
    ctx->pc = 0x45EB94u;
    SET_GPR_U32(ctx, 31, 0x45EB9Cu);
    ctx->pc = 0x45EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EB94u;
    // 0x45eb98: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x45EB94u, 0x45EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EB9Cu;
label_45eb9c:
    // 0x45eb9c: 0xc11b3b6  jal         func_46CED8
    ctx->pc = 0x45EB9Cu;
    SET_GPR_U32(ctx, 31, 0x45EBA4u);
    ctx->pc = 0x45EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EB9Cu;
    // 0x45eba0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x45EB9Cu, 0x45EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EBA4u;
label_45eba4:
    // 0x45eba4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x45eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x45eba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45eba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45ebac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x45ebacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x45ebb0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x45ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45ebb4: 0xc780803c  lwc1        $f0, -0x7FC4($gp)
    ctx->pc = 0x45ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ebb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x45ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x45ebbc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x45ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x45ebc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45ebc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45ebc4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45ebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45ebc8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x45ebc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45ebcc: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x45ebccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x45ebd0: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x45ebd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x45ebd4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x45ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x45ebd8: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x45ebd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ebdc: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x45ebdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ebe0: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x45ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x45ebe4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x45ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x45ebe8: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x45ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
    // 0x45ebec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x45ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x45ebf0: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x45ebf0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x45ebf4: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x45ebf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x45ebf8: 0x8c530018  lw          $s3, 0x18($v0)
    ctx->pc = 0x45ebf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x45ebfc: 0x8ef20030  lw          $s2, 0x30($s7)
    ctx->pc = 0x45ebfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x45ec00: 0x18600083  blez        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x45EC00u;
    {
        const bool branch_taken_0x45ec00 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x45EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EC00u;
        // 0x45ec04: 0x8ef6002c  lw          $s6, 0x2C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ec00) {
            ctx->pc = 0x45EE10u;
            goto label_45ee10;
        }
    }
    ctx->pc = 0x45EC08u;
    // 0x45ec08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45ec0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ec10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45ec14: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x45ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x45ec18: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x45ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x45ec1c: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x45ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
label_45ec20:
    // 0x45ec20: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x45ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x45ec24: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x45ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x45ec28: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x45ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x45ec2c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x45ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x45ec30: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x45ec30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x45ec34: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x45ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x45ec38: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x45EC38u;
    {
        const bool branch_taken_0x45ec38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EC38u;
        // 0x45ec3c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ec38) {
            ctx->pc = 0x45EC58u;
            goto label_45ec58;
        }
    }
    ctx->pc = 0x45EC40u;
    // 0x45ec40: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x45ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x45ec44: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x45ec44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ec48: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x45ec48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ec4c: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x45ec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ec50: 0xa2470003  sb          $a3, 0x3($s2)
    ctx->pc = 0x45ec50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x45ec54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x45ec54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_45ec58:
    // 0x45ec58: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x45EC58u;
    {
        const bool branch_taken_0x45ec58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ec58) {
            ctx->pc = 0x45EC78u;
            goto label_45ec78;
        }
    }
    ctx->pc = 0x45EC60u;
    // 0x45ec60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45ec60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45ec64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x45ec64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45ec68: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x45ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x45ec6c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x45ec6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x45ec70: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x45ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x45ec74: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x45ec74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_45ec78:
    // 0x45ec78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45ec78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45ec7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x45ec7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45ec80: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x45ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x45ec84: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x45ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x45ec88: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x45ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x45ec8c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x45ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x45ec90: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x45ec90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x45ec94: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x45ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x45ec98: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x45EC98u;
    {
        const bool branch_taken_0x45ec98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EC98u;
        // 0x45ec9c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ec98) {
            ctx->pc = 0x45ECB8u;
            goto label_45ecb8;
        }
    }
    ctx->pc = 0x45ECA0u;
    // 0x45eca0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x45eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x45eca4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x45eca4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x45eca8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x45eca8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ecac: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x45ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ecb0: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x45ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x45ecb4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x45ecb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_45ecb8:
    // 0x45ecb8: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x45ECB8u;
    {
        const bool branch_taken_0x45ecb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ecb8) {
            ctx->pc = 0x45ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45ECB8u;
            // 0x45ecbc: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45ECD4u;
            goto label_45ecd4;
        }
    }
    ctx->pc = 0x45ECC0u;
    // 0x45ecc0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x45ecc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x45ecc4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x45ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x45ecc8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x45ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x45eccc: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x45ecccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x45ecd0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x45ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_45ecd4:
    // 0x45ecd4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x45ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x45ecd8: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x45ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x45ecdc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x45ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x45ece0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x45ece0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x45ece4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x45ece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x45ece8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x45ECE8u;
    {
        const bool branch_taken_0x45ece8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45ECE8u;
        // 0x45ecec: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ece8) {
            ctx->pc = 0x45ED08u;
            goto label_45ed08;
        }
    }
    ctx->pc = 0x45ECF0u;
    // 0x45ecf0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x45ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x45ecf4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x45ecf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ecf8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x45ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ecfc: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x45ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ed00: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x45ed00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x45ed04: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x45ed04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_45ed08:
    // 0x45ed08: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x45ED08u;
    {
        const bool branch_taken_0x45ed08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ed08) {
            ctx->pc = 0x45ED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45ED08u;
            // 0x45ed0c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45ED24u;
            goto label_45ed24;
        }
    }
    ctx->pc = 0x45ED10u;
    // 0x45ed10: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x45ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x45ed14: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x45ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x45ed18: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x45ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x45ed1c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x45ed1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x45ed20: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x45ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_45ed24:
    // 0x45ed24: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x45ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x45ed28: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x45ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x45ed2c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x45ed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x45ed30: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x45ed30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x45ed34: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x45ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x45ed38: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x45ED38u;
    {
        const bool branch_taken_0x45ed38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45ED38u;
        // 0x45ed3c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ed38) {
            ctx->pc = 0x45ED58u;
            goto label_45ed58;
        }
    }
    ctx->pc = 0x45ED40u;
    // 0x45ed40: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x45ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x45ed44: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x45ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ed48: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x45ed48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ed4c: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x45ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x45ed50: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x45ed50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x45ed54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x45ed54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_45ed58:
    // 0x45ed58: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x45ED58u;
    {
        const bool branch_taken_0x45ed58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45ED58u;
        // 0x45ed5c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ed58) {
            ctx->pc = 0x45ED74u;
            goto label_45ed74;
        }
    }
    ctx->pc = 0x45ED60u;
    // 0x45ed60: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x45ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x45ed64: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x45ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x45ed68: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x45ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x45ed6c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x45ed6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x45ed70: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x45ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_45ed74:
    // 0x45ed74: 0x1e8080  sll         $s0, $fp, 2
    ctx->pc = 0x45ed74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x45ed78: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x45ed78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x45ed7c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x45ed7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x45ed80: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x45ed80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x45ed84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x45ed84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ed88: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x45ed88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x45ed8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45ed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ed90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ed94: 0xc11afb0  jal         func_46BEC0
    ctx->pc = 0x45ED94u;
    SET_GPR_U32(ctx, 31, 0x45ED9Cu);
    ctx->pc = 0x45ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45ED94u;
    // 0x45ed98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x45ED94u, 0x45ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ED9Cu;
label_45ed9c:
    // 0x45ed9c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x45ed9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x45eda0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x45eda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x45eda4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45eda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eda8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edac: 0xc11afb6  jal         func_46BED8
    ctx->pc = 0x45EDACu;
    SET_GPR_U32(ctx, 31, 0x45EDB4u);
    ctx->pc = 0x45EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EDACu;
    // 0x45edb0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x45EDACu, 0x45EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EDB4u;
label_45edb4:
    // 0x45edb4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x45edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x45edb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45edb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x45edbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edc0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x45edc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edc4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x45edc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x45edc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45edcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x45edccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45edd0: 0xc11afb0  jal         func_46BEC0
    ctx->pc = 0x45EDD0u;
    SET_GPR_U32(ctx, 31, 0x45EDD8u);
    ctx->pc = 0x45EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EDD0u;
    // 0x45edd4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x45EDD0u, 0x45EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EDD8u;
label_45edd8:
    // 0x45edd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x45edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x45eddc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x45eddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ede0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x45ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x45ede4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x45ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ede8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x45ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x45edec: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x45edecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x45edf0: 0xc11afb6  jal         func_46BED8
    ctx->pc = 0x45EDF0u;
    SET_GPR_U32(ctx, 31, 0x45EDF8u);
    ctx->pc = 0x45EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EDF0u;
    // 0x45edf4: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x45EDF0u, 0x45EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EDF8u;
label_45edf8:
    // 0x45edf8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x45edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x45edfc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x45edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x45ee00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x45ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x45ee04: 0x3c5102a  slt         $v0, $fp, $a1
    ctx->pc = 0x45ee04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x45ee08: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x45EE08u;
    {
        const bool branch_taken_0x45ee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EE08u;
        // 0x45ee0c: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ee08) {
            ctx->pc = 0x45EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ec20;
        }
    }
    ctx->pc = 0x45EE10u;
label_45ee10:
    // 0x45ee10: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ee14: 0xc11aabe  jal         func_46AAF8
    ctx->pc = 0x45EE14u;
    SET_GPR_U32(ctx, 31, 0x45EE1Cu);
    ctx->pc = 0x45EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE14u;
    // 0x45ee18: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AAF8u, 0x45EE14u, 0x45EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE1Cu;
label_45ee1c:
    // 0x45ee1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45ee20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x45ee20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45ee24: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x45ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x45ee28: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x45ee28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x45ee2c: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x45ee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x45ee30: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x45ee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x45ee34: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x45ee34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x45ee38: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x45ee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x45ee3c: 0xb0c7000b  sdl         $a3, 0xB($a2)
    ctx->pc = 0x45ee3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ee40: 0xb4c70004  sdr         $a3, 0x4($a2)
    ctx->pc = 0x45ee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ee44: 0xb0c20013  sdl         $v0, 0x13($a2)
    ctx->pc = 0x45ee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ee48: 0xb4c2000c  sdr         $v0, 0xC($a2)
    ctx->pc = 0x45ee48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45ee4c: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x45EE4Cu;
    SET_GPR_U32(ctx, 31, 0x45EE54u);
    ctx->pc = 0x45EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE4Cu;
    // 0x45ee50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x45EE4Cu, 0x45EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE54u;
label_45ee54:
    // 0x45ee54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ee58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x45ee58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ee5c: 0xc11a984  jal         func_46A610
    ctx->pc = 0x45EE5Cu;
    SET_GPR_U32(ctx, 31, 0x45EE64u);
    ctx->pc = 0x45EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE5Cu;
    // 0x45ee60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x45EE5Cu, 0x45EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE64u;
label_45ee64:
    // 0x45ee64: 0xc11b010  jal         func_46C040
    ctx->pc = 0x45EE64u;
    SET_GPR_U32(ctx, 31, 0x45EE6Cu);
    ctx->pc = 0x45EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE64u;
    // 0x45ee68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x45EE64u, 0x45EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE6Cu;
label_45ee6c:
    // 0x45ee6c: 0xc11b3e4  jal         func_46CF90
    ctx->pc = 0x45EE6Cu;
    SET_GPR_U32(ctx, 31, 0x45EE74u);
    ctx->pc = 0x45EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE6Cu;
    // 0x45ee70: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x45EE6Cu, 0x45EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE74u;
label_45ee74:
    // 0x45ee74: 0xc117bac  jal         func_45EEB0
    ctx->pc = 0x45EE74u;
    SET_GPR_U32(ctx, 31, 0x45EE7Cu);
    ctx->pc = 0x45EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EE74u;
    // 0x45ee78: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x45EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EEB0u, 0x45EE74u, 0x45EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EE7Cu;
label_45ee7c:
    // 0x45ee7c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x45ee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x45ee80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ee84: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x45ee84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45ee88: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x45ee88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45ee8c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x45ee8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45ee90: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x45ee90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45ee94: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x45ee94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45ee98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45ee98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45ee9c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x45ee9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45eea0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x45eea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45eea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45eea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45eea8: 0x3e00008  jr          $ra
    ctx->pc = 0x45EEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EEA8u;
        // 0x45eeac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EEB0u;
}
