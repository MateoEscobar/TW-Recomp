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

// Function: sub_00390F18
// Address: 0x390f18 - 0x3910f0
void sub_00390F18_0x390f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390F18_0x390f18");
#endif

    switch (ctx->pc) {
        case 0x390f9cu: goto label_390f9c;
        case 0x390facu: goto label_390fac;
        case 0x390fb8u: goto label_390fb8;
        case 0x390fccu: goto label_390fcc;
        case 0x39100cu: goto label_39100c;
        case 0x391060u: goto label_391060;
        case 0x39107cu: goto label_39107c;
        case 0x39108cu: goto label_39108c;
        case 0x3910a0u: goto label_3910a0;
        default: break;
    }

    ctx->pc = 0x390f18u;

    // 0x390f18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x390f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x390f1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x390f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x390f20: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x390f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x390f24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x390f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x390f28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x390f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x390f2c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x390f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x390f30: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x390f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x390f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x390f38: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x390f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x390f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x390f40: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x390f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f44: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x390f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x390f48: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x390f48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f4c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x390f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x390f50: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x390f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f54: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x390f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x390f58: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x390f58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f5c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x390f5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x390f60: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x390f60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f64: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x390f64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x390f68: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x390f68u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x390f6c: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x390f6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x390f70: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x390f70u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x390f74: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x390f74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x390f78: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x390f78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x390f7c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x390f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x390f80: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x390f80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x390f84: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x390f84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x390f88: 0x8fb100f0  lw          $s1, 0xF0($sp)
    ctx->pc = 0x390f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x390f8c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x390f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x390f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x390f94: 0xc0e44d0  jal         func_391340
    ctx->pc = 0x390F94u;
    SET_GPR_U32(ctx, 31, 0x390F9Cu);
    ctx->pc = 0x390F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F94u;
    // 0x390f98: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391340u, 0x390F94u, 0x390F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F9Cu;
label_390f9c:
    // 0x390f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fa0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x390fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390fa4: 0xc0e45de  jal         func_391778
    ctx->pc = 0x390FA4u;
    SET_GPR_U32(ctx, 31, 0x390FACu);
    ctx->pc = 0x390FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FA4u;
    // 0x390fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391778u, 0x390FA4u, 0x390FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FACu;
label_390fac:
    // 0x390fac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x390facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fb0: 0xc0e45e8  jal         func_3917A0
    ctx->pc = 0x390FB0u;
    SET_GPR_U32(ctx, 31, 0x390FB8u);
    ctx->pc = 0x390FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FB0u;
    // 0x390fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917A0u, 0x390FB0u, 0x390FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FB8u;
label_390fb8:
    // 0x390fb8: 0xa61e0058  sh          $fp, 0x58($s0)
    ctx->pc = 0x390fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 30));
    // 0x390fbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fc0: 0xa217005a  sb          $s7, 0x5A($s0)
    ctx->pc = 0x390fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 23));
    // 0x390fc4: 0xc0f157a  jal         func_3C55E8
    ctx->pc = 0x390FC4u;
    SET_GPR_U32(ctx, 31, 0x390FCCu);
    ctx->pc = 0x390FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FC4u;
    // 0x390fc8: 0xa216005b  sb          $s6, 0x5B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C55E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C55E8u, 0x390FC4u, 0x390FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FCCu;
label_390fcc:
    // 0x390fcc: 0xa611005e  sh          $s1, 0x5E($s0)
    ctx->pc = 0x390fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 17));
    // 0x390fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fd4: 0xa602005c  sh          $v0, 0x5C($s0)
    ctx->pc = 0x390fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x390fd8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x390fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x390fdc: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x390fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x390fe0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x390fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x390fe4: 0xa6130062  sh          $s3, 0x62($s0)
    ctx->pc = 0x390fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 19));
    // 0x390fe8: 0xa2020065  sb          $v0, 0x65($s0)
    ctx->pc = 0x390fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 2));
    // 0x390fec: 0xe6140068  swc1        $f20, 0x68($s0)
    ctx->pc = 0x390fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x390ff0: 0xe615006c  swc1        $f21, 0x6C($s0)
    ctx->pc = 0x390ff0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x390ff4: 0xe6160070  swc1        $f22, 0x70($s0)
    ctx->pc = 0x390ff4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x390ff8: 0xe6170074  swc1        $f23, 0x74($s0)
    ctx->pc = 0x390ff8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x390ffc: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x390ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x391000: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x391000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x391004: 0xc0e45f2  jal         func_3917C8
    ctx->pc = 0x391004u;
    SET_GPR_U32(ctx, 31, 0x39100Cu);
    ctx->pc = 0x391008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391004u;
    // 0x391008: 0xc64d0004  lwc1        $f13, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917C8u, 0x391004u, 0x39100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39100Cu;
label_39100c:
    // 0x39100c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x39100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x391010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391014: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x391014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x391018: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x391018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39101c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x39101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391020: 0xa2030084  sb          $v1, 0x84($s0)
    ctx->pc = 0x391020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x391024: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x391024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x391028: 0xa2020086  sb          $v0, 0x86($s0)
    ctx->pc = 0x391028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 134), (uint8_t)GPR_U32(ctx, 2));
    // 0x39102c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x39102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x391030: 0xa2030087  sb          $v1, 0x87($s0)
    ctx->pc = 0x391030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 3));
    // 0x391034: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x391034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x391038: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x391038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x39103c: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x39103cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x391040: 0xe601007c  swc1        $f1, 0x7C($s0)
    ctx->pc = 0x391040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x391044: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x391044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x391048: 0xe6180088  swc1        $f24, 0x88($s0)
    ctx->pc = 0x391048u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x39104c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x39104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x391050: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x391050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x391054: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x391054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x391058: 0xc0e4606  jal         func_391818
    ctx->pc = 0x391058u;
    SET_GPR_U32(ctx, 31, 0x391060u);
    ctx->pc = 0x39105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391058u;
    // 0x39105c: 0xc46d0004  lwc1        $f13, 0x4($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391818u, 0x391058u, 0x391060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391060u;
label_391060:
    // 0x391060: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x391060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x391064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391068: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x391068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x39106c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x39106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x391070: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x391070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x391074: 0xc0e461a  jal         func_391868
    ctx->pc = 0x391074u;
    SET_GPR_U32(ctx, 31, 0x39107Cu);
    ctx->pc = 0x391078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391074u;
    // 0x391078: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391868u, 0x391074u, 0x39107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39107Cu;
label_39107c:
    // 0x39107c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391080: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x391080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x391084: 0xc050fda  jal         func_143F68
    ctx->pc = 0x391084u;
    SET_GPR_U32(ctx, 31, 0x39108Cu);
    ctx->pc = 0x391088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391084u;
    // 0x391088: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x391084u, 0x39108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39108Cu;
label_39108c:
    // 0x39108c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x391090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391094: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x391094u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x391098: 0xc0e44de  jal         func_391378
    ctx->pc = 0x391098u;
    SET_GPR_U32(ctx, 31, 0x3910A0u);
    ctx->pc = 0x39109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391098u;
    // 0x39109c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391378u, 0x391098u, 0x3910A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910A0u;
label_3910a0:
    // 0x3910a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3910a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3910a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3910a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3910a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3910a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3910ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3910acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3910b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3910b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3910b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3910b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3910b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3910b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3910bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3910bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3910c0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3910c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3910c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3910c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3910c8: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x3910c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3910cc: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x3910ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3910d0: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x3910d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3910d4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3910d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3910d8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3910d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3910dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3910DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3910E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910DCu;
        // 0x3910e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3910DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3910E4u;
    // 0x3910e4: 0x0  nop
    ctx->pc = 0x3910e4u;
    // NOP
    // 0x3910e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3910e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3910ec: 0x0  nop
    ctx->pc = 0x3910ecu;
    // NOP
    ctx->pc = 0x3910f0u;
}
