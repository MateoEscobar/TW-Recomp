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

// Function: sub_001D2F10
// Address: 0x1d2f10 - 0x1d31e8
void sub_001D2F10_0x1d2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2F10_0x1d2f10");
#endif

    switch (ctx->pc) {
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d3044u: goto label_1d3044;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d31a0u: goto label_1d31a0;
        default: break;
    }

    ctx->pc = 0x1d2f10u;

    // 0x1d2f10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d2f14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2f18: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1d2f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1d2f1c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d2f20: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1d2f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1d2f24: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d2f28: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1d2f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1d2f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d2f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f30: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1d2f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1d2f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f38: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1d2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1d2f3c: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x1d2f40: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1d2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1d2f44: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1d2f44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f48: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d2f4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2f4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d2f54: 0x26330640  addiu       $s3, $s1, 0x640
    ctx->pc = 0x1d2f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1d2f58: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1d2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1d2f5c: 0x26370380  addiu       $s7, $s1, 0x380
    ctx->pc = 0x1d2f5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x1d2f60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d2f64: 0x263e0020  addiu       $fp, $s1, 0x20
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d2f68: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x1d2f68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1d2f6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f70: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x1d2f70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1d2f74: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x1d2f74u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x1d2f78: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1d2f78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d2f7c: 0x26350280  addiu       $s5, $s1, 0x280
    ctx->pc = 0x1d2f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x1d2f80: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1d2f80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1d2f84: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1d2f84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1d2f88: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1d2f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d2f8c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1d2f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2f90: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1d2f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d2f94: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1d2f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2f98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1d2f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2f9c: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1d2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1d2fa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2fa4: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x1d2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x1d2fa8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d2fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d2fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d2facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fb0: 0x3c0145ea  lui         $at, 0x45EA
    ctx->pc = 0x1d2fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17898 << 16));
    // 0x1d2fb4: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x1d2fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x1d2fb8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1d2fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1d2fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2fc0: 0x8e290170  lw          $t1, 0x170($s1)
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x1d2fc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d2fc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d2fcc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1d2fccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1d2fd0: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1d2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1d2fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2fd8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D2FD8u;
    SET_GPR_U32(ctx, 31, 0x1D2FE0u);
    ctx->pc = 0x1D2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2FD8u;
    // 0x1d2fdc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D2FD8u, 0x1D2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FE0u;
label_1d2fe0:
    // 0x1d2fe0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1d2fe4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d2fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d2fe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d2fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d2fec: 0xa3b20044  sb          $s2, 0x44($sp)
    ctx->pc = 0x1d2fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d2ff0: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1d2ff4: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1d2ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d2ff8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2ffc: 0xa0520001  sb          $s2, 0x1($v0)
    ctx->pc = 0x1d2ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d3000: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1d3000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3004: 0xa0520002  sb          $s2, 0x2($v0)
    ctx->pc = 0x1d3004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d3008: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d3008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d300c: 0x3c01460c  lui         $at, 0x460C
    ctx->pc = 0x1d300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17932 << 16));
    // 0x1d3010: 0x3421a399  ori         $at, $at, 0xA399
    ctx->pc = 0x1d3010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41881);
    // 0x1d3014: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d3014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d3018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d3018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d301c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3020: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3024: 0x8e290064  lw          $t1, 0x64($s1)
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1d3028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d3028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d302c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1d302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1d3030: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1d3034: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1d3034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1d3038: 0x26300450  addiu       $s0, $s1, 0x450
    ctx->pc = 0x1d3038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    // 0x1d303c: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D303Cu;
    SET_GPR_U32(ctx, 31, 0x1D3044u);
    ctx->pc = 0x1D3040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D303Cu;
    // 0x1d3040: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D303Cu, 0x1D3044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3044u;
label_1d3044:
    // 0x1d3044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3048: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d3048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d304c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3050: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D3050u;
    SET_GPR_U32(ctx, 31, 0x1D3058u);
    ctx->pc = 0x1D3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3050u;
    // 0x1d3054: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D3050u, 0x1D3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3058u;
label_1d3058:
    // 0x1d3058: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d305c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1d305cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d3060: 0x8c76d310  lw          $s6, -0x2CF0($v1)
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d3064: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1d3064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3068: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1d306c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d306cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d3070: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d3074: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d3074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d307c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d3080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3084: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3088: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d3088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d308c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d308cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d3090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3094: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D3094u;
    SET_GPR_U32(ctx, 31, 0x1D309Cu);
    ctx->pc = 0x1D3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3094u;
    // 0x1d3098: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D3094u, 0x1D309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D309Cu;
label_1d309c:
    // 0x1d309c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d30a0: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1D30A0u;
    SET_GPR_U32(ctx, 31, 0x1D30A8u);
    ctx->pc = 0x1D30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D30A0u;
    // 0x1d30a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D30A0u, 0x1D30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30A8u;
label_1d30a8:
    // 0x1d30a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d30a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30ac: 0xc06e4a2  jal         func_1B9288
    ctx->pc = 0x1D30ACu;
    SET_GPR_U32(ctx, 31, 0x1D30B4u);
    ctx->pc = 0x1D30B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D30ACu;
    // 0x1d30b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1D30ACu, 0x1D30B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30B4u;
label_1d30b4:
    // 0x1d30b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d30b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d30b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d30bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d30bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d30c0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d30c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d30c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d30c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d30cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d30ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30d0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d30d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d30d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d30d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30dc: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D30DCu;
    SET_GPR_U32(ctx, 31, 0x1D30E4u);
    ctx->pc = 0x1D30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D30DCu;
    // 0x1d30e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D30DCu, 0x1D30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30E4u;
label_1d30e4:
    // 0x1d30e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d30e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d30e8: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1D30E8u;
    SET_GPR_U32(ctx, 31, 0x1D30F0u);
    ctx->pc = 0x1D30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D30E8u;
    // 0x1d30ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D30E8u, 0x1D30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30F0u;
label_1d30f0:
    // 0x1d30f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d30f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d30f4: 0xc06e4a2  jal         func_1B9288
    ctx->pc = 0x1D30F4u;
    SET_GPR_U32(ctx, 31, 0x1D30FCu);
    ctx->pc = 0x1D30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D30F4u;
    // 0x1d30f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1D30F4u, 0x1D30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30FCu;
label_1d30fc:
    // 0x1d30fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d3100: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1d3104: 0x8c47d260  lw          $a3, -0x2DA0($v0)
    ctx->pc = 0x1d3104u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5FD260u));
    // 0x1d3108: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1d310c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3110: 0xe498a190  swc1        $f24, -0x5E70($a0)
    ctx->pc = 0x1d3110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62A190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62A190u, _value); } while (0); }
    // 0x1d3114: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d3114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d3118: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d311c: 0xe476a18c  swc1        $f22, -0x5E74($v1)
    ctx->pc = 0x1d311cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62A18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62A18Cu, _value); } while (0); }
    // 0x1d3120: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3124: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3128: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d312c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d312cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3130: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3130u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3134: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D3134u;
    SET_GPR_U32(ctx, 31, 0x1D313Cu);
    ctx->pc = 0x1D3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3134u;
    // 0x1d3138: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D3134u, 0x1D313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D313Cu;
label_1d313c:
    // 0x1d313c: 0xa2e000c4  sb          $zero, 0xC4($s7)
    ctx->pc = 0x1d313cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d3140: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d3140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d3144: 0x8c46d328  lw          $a2, -0x2CD8($v0)
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD328u));
    // 0x1d3148: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1d3148u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1d314c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3150: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1d3150u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3154: 0x8faa004c  lw          $t2, 0x4C($sp)
    ctx->pc = 0x1d3154u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3158: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d3158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d315c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1d315cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1d3160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3164: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1d3164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1d3168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d316c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d3170: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d3170u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3174: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d3174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3178: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D3178u;
    SET_GPR_U32(ctx, 31, 0x1D3180u);
    ctx->pc = 0x1D317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3178u;
    // 0x1d317c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D3178u, 0x1D3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3180u;
label_1d3180:
    // 0x1d3180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3184: 0xc0687f2  jal         func_1A1FC8
    ctx->pc = 0x1D3184u;
    SET_GPR_U32(ctx, 31, 0x1D318Cu);
    ctx->pc = 0x1D3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3184u;
    // 0x1d3188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1FC8u, 0x1D3184u, 0x1D318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D318Cu;
label_1d318c:
    // 0x1d318c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3190: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d3190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d3194: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1d3194u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1d3198: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D3198u;
    SET_GPR_U32(ctx, 31, 0x1D31A0u);
    ctx->pc = 0x1D319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3198u;
    // 0x1d319c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D3198u, 0x1D31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D31A0u;
label_1d31a0:
    // 0x1d31a0: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x1d31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x1d31a4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1d31a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d31a8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1d31a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d31ac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1d31acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d31b0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1d31b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d31b4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1d31b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d31b8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1d31b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d31bc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d31bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d31c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d31c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d31c4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1d31c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d31c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d31c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d31cc: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x1d31ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d31d0: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x1d31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d31d4: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1d31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d31d8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1d31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d31dc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1d31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d31e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D31E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E0u;
        // 0x1d31e4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D31E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D31E8u;
}
