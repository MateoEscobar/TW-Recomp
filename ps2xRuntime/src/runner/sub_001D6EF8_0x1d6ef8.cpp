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

// Function: sub_001D6EF8
// Address: 0x1d6ef8 - 0x1d7218
void sub_001D6EF8_0x1d6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6EF8_0x1d6ef8");
#endif

    switch (ctx->pc) {
        case 0x1d6f5cu: goto label_1d6f5c;
        case 0x1d702cu: goto label_1d702c;
        case 0x1d7040u: goto label_1d7040;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7160u: goto label_1d7160;
        default: break;
    }

    ctx->pc = 0x1d6ef8u;

    // 0x1d6ef8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d6ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d6efc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d6f00: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1d6f00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d6f04: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1d6f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1d6f08: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d6f08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d6f0c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1d6f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x1d6f10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d6f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f14: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1d6f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1d6f18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d6f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f1c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1d6f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1d6f20: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1d6f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1d6f24: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1d6f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6f28: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1d6f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x1d6f2c: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x1d6f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d6f30: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1d6f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x1d6f34: 0x26910330  addiu       $s1, $s4, 0x330
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
    // 0x1d6f38: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1d6f38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1d6f3c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1d6f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1d6f40: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1d6f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1d6f44: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x1d6f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f48: 0xc44cecf4  lwc1        $f12, -0x130C($v0)
    ctx->pc = 0x1d6f48u;
    { uint32_t bits = FAST_READ32(0x50ECF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6f4c: 0x3c150054  lui         $s5, 0x54
    ctx->pc = 0x1d6f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)84 << 16));
    // 0x1d6f50: 0xe68d0630  swc1        $f13, 0x630($s4)
    ctx->pc = 0x1d6f50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1584), bits); }
    // 0x1d6f54: 0xc07592c  jal         func_1D64B0
    ctx->pc = 0x1D6F54u;
    SET_GPR_U32(ctx, 31, 0x1D6F5Cu);
    ctx->pc = 0x1D6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F54u;
    // 0x1d6f58: 0xae880638  sw          $t0, 0x638($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1592), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D64B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D64B0u, 0x1D6F54u, 0x1D6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F5Cu;
label_1d6f5c:
    // 0x1d6f5c: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1d6f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
    // 0x1d6f60: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d6f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1d6f64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d6f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d6f68: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x1d6f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d6f6c: 0x26860430  addiu       $a2, $s4, 0x430
    ctx->pc = 0x1d6f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1072));
    // 0x1d6f70: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1d6f74: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d6f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d6f78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d6f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6f7c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1d6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d6f80: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1d6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1d6f84: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6f88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d6f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d6f8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d6f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d6f90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d6f94: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d6f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d6f98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f9c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6fa0: 0x4603a102  mul.s       $f4, $f20, $f3
    ctx->pc = 0x1d6fa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d6fa4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d6fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d6fa8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d6fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1d6fac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d6facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d6fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d6fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6fb4: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1d6fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1d6fb8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1d6fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1d6fbc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d6fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6fc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d6fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6fc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d6fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6fc8: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x1d6fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
    // 0x1d6fcc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d6fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d6fd0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1d6fd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1d6fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fd8: 0xc4c00090  lwc1        $f0, 0x90($a2)
    ctx->pc = 0x1d6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fdc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1d6fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1d6fe0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d6fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6fe4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d6fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d6fe8: 0xc4c00090  lwc1        $f0, 0x90($a2)
    ctx->pc = 0x1d6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fec: 0xa3b000c0  sb          $s0, 0xC0($sp)
    ctx->pc = 0x1d6fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d6ff0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1d6ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1d6ff4: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1d6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1d6ff8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d6ffc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d7000: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d7000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7004: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d7004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d7008: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1d7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1d700c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7010: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1d7010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1d7014: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d7014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d7018: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1d7018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d701c: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1d701cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d7020: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1d7020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d7024: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D7024u;
    SET_GPR_U32(ctx, 31, 0x1D702Cu);
    ctx->pc = 0x1D7028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7024u;
    // 0x1d7028: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D7024u, 0x1D702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D702Cu;
label_1d702c:
    // 0x1d702c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d702cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7034: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d7034u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d7038: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D7038u;
    SET_GPR_U32(ctx, 31, 0x1D7040u);
    ctx->pc = 0x1D703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7038u;
    // 0x1d703c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D7038u, 0x1D7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7040u;
label_1d7040:
    // 0x1d7040: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x1d7040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d7044: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7048: 0xc442ed28  lwc1        $f2, -0x12D8($v0)
    ctx->pc = 0x1d7048u;
    { uint32_t bits = FAST_READ32(0x50ED28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d704c: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1d7050: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1d7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1d7054: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d7058: 0x7a230090  lq          $v1, 0x90($s1)
    ctx->pc = 0x1d7058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1d705c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1d7060: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d7060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7068: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d706c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d7070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d7074: 0x8e8202b8  lw          $v0, 0x2B8($s4)
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
    // 0x1d7078: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x1d7078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1d707c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1d707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1d7080: 0xa3b000c4  sb          $s0, 0xC4($sp)
    ctx->pc = 0x1d7080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d7084: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d7084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d7088: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1d7088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1d708c: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x1d708cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
    // 0x1d7090: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d7090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d7094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7098: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1d7098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d709c: 0xa0d00003  sb          $s0, 0x3($a2)
    ctx->pc = 0x1d709cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d70a0: 0xa0d00001  sb          $s0, 0x1($a2)
    ctx->pc = 0x1d70a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d70a4: 0xa0d00002  sb          $s0, 0x2($a2)
    ctx->pc = 0x1d70a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d70a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d70a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d70ac: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d70acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b0: 0xc66ded2c  lwc1        $f13, -0x12D4($s3)
    ctx->pc = 0x1d70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294962476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d70b4: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d70b8: 0xc0683f4  jal         func_1A0FD0
    ctx->pc = 0x1D70B8u;
    SET_GPR_U32(ctx, 31, 0x1D70C0u);
    ctx->pc = 0x1D70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70B8u;
    // 0x1d70bc: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1D70B8u, 0x1D70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C0u;
label_1d70c0:
    // 0x1d70c0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d70c4: 0x27a900c8  addiu       $t1, $sp, 0xC8
    ctx->pc = 0x1d70c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1d70c8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d70c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70cc: 0x26820250  addiu       $v0, $s4, 0x250
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1d70d0:
    // 0x1d70d0: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x1d70d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d70d4: 0x7a450010  lq          $a1, 0x10($s2)
    ctx->pc = 0x1d70d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d70d8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1d70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1d70dc: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x1d70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x1d70e0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1d70e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d70e4: 0x1643fffa  bne         $s2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D70E4u;
    {
        const bool branch_taken_0x1d70e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E4u;
        // 0x1d70e8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e4) {
            ctx->pc = 0x1D70D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70d0;
        }
    }
    ctx->pc = 0x1D70ECu;
    // 0x1d70ec: 0x7a480000  lq          $t0, 0x0($s2)
    ctx->pc = 0x1d70ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d70f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d70f4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x1d70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x1d70f8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1d70f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1d70fc: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x1d70fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7100: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d7100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d7104: 0x8e840328  lw          $a0, 0x328($s4)
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
    // 0x1d7108: 0x26a294a0  addiu       $v0, $s5, -0x6B60
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939808));
    // 0x1d710c: 0xa3a300c8  sb          $v1, 0xC8($sp)
    ctx->pc = 0x1d710cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7110: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d7114: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d7114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d7118: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x1d7118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
    // 0x1d711c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1d711cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1d7120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7124: 0xa1260003  sb          $a2, 0x3($t1)
    ctx->pc = 0x1d7124u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d7128: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d712c: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x1d712cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7130: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x1d7130u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7134: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d7134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d7138: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d713c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1d713cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7140: 0xc6cded2c  lwc1        $f13, -0x12D4($s6)
    ctx->pc = 0x1d7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294962476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7144: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d7144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7148: 0xc0683f4  jal         func_1A0FD0
    ctx->pc = 0x1D7148u;
    SET_GPR_U32(ctx, 31, 0x1D7150u);
    ctx->pc = 0x1D714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7148u;
    // 0x1d714c: 0xae8a02b8  sw          $t2, 0x2B8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 696), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1D7148u, 0x1D7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7150u;
label_1d7150:
    // 0x1d7150: 0x268502c0  addiu       $a1, $s4, 0x2C0
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x1d7154: 0x26860250  addiu       $a2, $s4, 0x250
    ctx->pc = 0x1d7154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
    // 0x1d7158: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d7158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d715c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7160:
    // 0x1d7160: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x1d7160u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7164: 0x78890010  lq          $t1, 0x10($a0)
    ctx->pc = 0x1d7164u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7168: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x1d7168u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x1d716c: 0x7ca90010  sq          $t1, 0x10($a1)
    ctx->pc = 0x1d716cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 9));
    // 0x1d7170: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1d7170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d7174: 0x1491fffa  bne         $a0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7174u;
    {
        const bool branch_taken_0x1d7174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x1D7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7174u;
        // 0x1d7178: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7174) {
            ctx->pc = 0x1D7160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D717Cu;
    // 0x1d717c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7180: 0x26a394a0  addiu       $v1, $s5, -0x6B60
    ctx->pc = 0x1d7180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939808));
    // 0x1d7184: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x1d7184u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7188: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x1d7188u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x1d718c: 0xae820328  sw          $v0, 0x328($s4)
    ctx->pc = 0x1d718cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 2));
    // 0x1d7190: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x1d7190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x1d7194: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x1d7194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x1d7198: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1d7198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d719c: 0xc6800630  lwc1        $f0, 0x630($s4)
    ctx->pc = 0x1d719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d71a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d71a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d71a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d71a8: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1d71a8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1d71ac: 0xc6c4ed2c  lwc1        $f4, -0x12D4($s6)
    ctx->pc = 0x1d71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294962476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d71b0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1d71b0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1d71b4: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1d71b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1d71b8: 0x460308a8  max.s       $f2, $f1, $f3
    ctx->pc = 0x1d71b8u;
    ctx->f[2] = std::max(ctx->f[1], ctx->f[3]);
    // 0x1d71bc: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x1d71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x1d71c0: 0x460110a9  min.s       $f2, $f2, $f1
    ctx->pc = 0x1d71c0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[1]);
    // 0x1d71c4: 0xe6840254  swc1        $f4, 0x254($s4)
    ctx->pc = 0x1d71c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 596), bits); }
    // 0x1d71c8: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x1d71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x1d71cc: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x1d71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x1d71d0: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1d71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x1d71d4: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x1d71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x1d71d8: 0xe4e20038  swc1        $f2, 0x38($a3)
    ctx->pc = 0x1d71d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x1d71dc: 0xe68402c4  swc1        $f4, 0x2C4($s4)
    ctx->pc = 0x1d71dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 708), bits); }
    // 0x1d71e0: 0xae80063c  sw          $zero, 0x63C($s4)
    ctx->pc = 0x1d71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1596), GPR_U32(ctx, 0));
    // 0x1d71e4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1d71e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d71e8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1d71e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d71ec: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1d71ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d71f0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1d71f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d71f4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1d71f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d71f8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1d71f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d71fc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1d71fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d7200: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1d7200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7204: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1d7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d7208: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1d7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d720c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D720Cu;
        // 0x1d7210: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7214u;
    // 0x1d7214: 0x0  nop
    ctx->pc = 0x1d7214u;
    // NOP
    ctx->pc = 0x1d7218u;
}
