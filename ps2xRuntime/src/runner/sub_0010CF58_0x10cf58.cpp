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

// Function: sub_0010CF58
// Address: 0x10cf58 - 0x10d270
void sub_0010CF58_0x10cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF58_0x10cf58");
#endif

    switch (ctx->pc) {
        case 0x10cfc0u: goto label_10cfc0;
        case 0x10d01cu: goto label_10d01c;
        case 0x10d0b0u: goto label_10d0b0;
        case 0x10d0ccu: goto label_10d0cc;
        case 0x10d0ecu: goto label_10d0ec;
        case 0x10d0fcu: goto label_10d0fc;
        case 0x10d10cu: goto label_10d10c;
        case 0x10d140u: goto label_10d140;
        case 0x10d168u: goto label_10d168;
        case 0x10d198u: goto label_10d198;
        case 0x10d1a8u: goto label_10d1a8;
        case 0x10d1c0u: goto label_10d1c0;
        case 0x10d208u: goto label_10d208;
        default: break;
    }

    ctx->pc = 0x10cf58u;

    // 0x10cf58: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x10cf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x10cf5c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x10cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x10cf60: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x10cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x10cf64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10cf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf68: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x10cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x10cf6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10cf6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf70: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x10cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x10cf74: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10cf74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf78: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x10cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x10cf7c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10cf7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf80: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x10cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x10cf84: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10cf88: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x10cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x10cf8c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x10cf8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf90: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x10cf90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x10cf94: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf98: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x10cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x10cf9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10cf9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10cfa0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x10cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x10cfa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10cfac: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x10cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x10cfb0: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x10cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x10cfb4: 0x93be0110  lbu         $fp, 0x110($sp)
    ctx->pc = 0x10cfb4u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10cfb8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x10CFB8u;
    SET_GPR_U32(ctx, 31, 0x10CFC0u);
    ctx->pc = 0x10CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFB8u;
    // 0x10cfbc: 0x83b20118  lb          $s2, 0x118($sp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x10CFB8u, 0x10CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFC0u;
label_10cfc0:
    // 0x10cfc0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10cfc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cfc8: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CFC8u;
    {
        const bool branch_taken_0x10cfc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFC8u;
        // 0x10cfcc: 0x240300d0  addiu       $v1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfc8) {
            ctx->pc = 0x10CFE8u;
            goto label_10cfe8;
        }
    }
    ctx->pc = 0x10CFD0u;
    // 0x10cfd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfd4: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x10cfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10cfd8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x10cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10cfdc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfe0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x10CFE0u;
    {
        const bool branch_taken_0x10cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFE0u;
        // 0x10cfe4: 0xac64008c  sw          $a0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfe0) {
            ctx->pc = 0x10D238u;
            goto label_10d238;
        }
    }
    ctx->pc = 0x10CFE8u;
label_10cfe8:
    // 0x10cfe8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x10cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10cfec: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x10cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10cff0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x10cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x10cff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10cff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cff8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10cff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10cffc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x10cffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x10d000: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x10d000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x10d004: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x10d004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x10d008: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10d00c: 0x2638821  addu        $s1, $s3, $v1
    ctx->pc = 0x10d00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x10d010: 0xa22000cc  sb          $zero, 0xCC($s1)
    ctx->pc = 0x10d010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d014: 0xc10c4de  jal         func_431378
    ctx->pc = 0x10D014u;
    SET_GPR_U32(ctx, 31, 0x10D01Cu);
    ctx->pc = 0x10D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D014u;
    // 0x10d018: 0x262400ad  addiu       $a0, $s1, 0xAD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 173));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10D014u, 0x10D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D01Cu;
label_10d01c:
    // 0x10d01c: 0xa23e008d  sb          $fp, 0x8D($s1)
    ctx->pc = 0x10d01cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 30));
    // 0x10d020: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x10d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x10d024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d028: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10d028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10d02c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x10d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10d030: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x10d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d038: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x10d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d03c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x10d040: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d044: 0x24a56ce0  addiu       $a1, $a1, 0x6CE0
    ctx->pc = 0x10d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27872));
    // 0x10d048: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x10d048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x10d04c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d050: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x10d050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10d054: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x10d054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x10d058: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x10d058u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x10d05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d060: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x10d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d064: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x10d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d068: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x10d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d06c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x10d06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10d070: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x10d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x10d074: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x10d074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x10d078: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x10d078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x10d07c: 0xa2320090  sb          $s2, 0x90($s1)
    ctx->pc = 0x10d07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 144), (uint8_t)GPR_U32(ctx, 18));
    // 0x10d080: 0xa237008f  sb          $s7, 0x8F($s1)
    ctx->pc = 0x10d080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 23));
    // 0x10d084: 0xe6340074  swc1        $f20, 0x74($s1)
    ctx->pc = 0x10d084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x10d088: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x10d088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x10d08c: 0xa22000ac  sb          $zero, 0xAC($s1)
    ctx->pc = 0x10d08cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d090: 0xa226008e  sb          $a2, 0x8E($s1)
    ctx->pc = 0x10d090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 142), (uint8_t)GPR_U32(ctx, 6));
    // 0x10d094: 0xe6230078  swc1        $f3, 0x78($s1)
    ctx->pc = 0x10d094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x10d098: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x10d098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x10d09c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x10d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10d0a0: 0xa6220086  sh          $v0, 0x86($s1)
    ctx->pc = 0x10d0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x10d0a4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x10d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10d0a8: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x10D0A8u;
    SET_GPR_U32(ctx, 31, 0x10D0B0u);
    ctx->pc = 0x10D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0A8u;
    // 0x10d0ac: 0xa6220088  sh          $v0, 0x88($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x10D0A8u, 0x10D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0B0u;
label_10d0b0:
    // 0x10d0b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D0B0u;
    {
        const bool branch_taken_0x10d0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0B0u;
        // 0x10d0b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0b0) {
            ctx->pc = 0x10D0BCu;
            goto label_10d0bc;
        }
    }
    ctx->pc = 0x10D0B8u;
    // 0x10d0b8: 0xa22400ac  sb          $a0, 0xAC($s1)
    ctx->pc = 0x10d0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
label_10d0bc:
    // 0x10d0bc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x10d0c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c4: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x10D0C4u;
    SET_GPR_U32(ctx, 31, 0x10D0CCu);
    ctx->pc = 0x10D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0C4u;
    // 0x10d0c8: 0x24a56ce8  addiu       $a1, $a1, 0x6CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x10D0C4u, 0x10D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0CCu;
label_10d0cc:
    // 0x10d0cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D0CCu;
    {
        const bool branch_taken_0x10d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0CCu;
        // 0x10d0d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0cc) {
            ctx->pc = 0x10D0D8u;
            goto label_10d0d8;
        }
    }
    ctx->pc = 0x10D0D4u;
    // 0x10d0d4: 0xa22200ac  sb          $v0, 0xAC($s1)
    ctx->pc = 0x10d0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 2));
label_10d0d8:
    // 0x10d0d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10d0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0e0: 0xa3a0003f  sb          $zero, 0x3F($sp)
    ctx->pc = 0x10d0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d0e4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x10D0E4u;
    SET_GPR_U32(ctx, 31, 0x10D0ECu);
    ctx->pc = 0x10D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0E4u;
    // 0x10d0e8: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10D0E4u, 0x10D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0ECu;
label_10d0ec:
    // 0x10d0ec: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10d0f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0f4: 0xc050ff6  jal         func_143FD8
    ctx->pc = 0x10D0F4u;
    SET_GPR_U32(ctx, 31, 0x10D0FCu);
    ctx->pc = 0x10D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0F4u;
    // 0x10d0f8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FD8u, 0x10D0F4u, 0x10D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0FCu;
label_10d0fc:
    // 0x10d0fc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x10d100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d104: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x10D104u;
    SET_GPR_U32(ctx, 31, 0x10D10Cu);
    ctx->pc = 0x10D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D104u;
    // 0x10d108: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x10D104u, 0x10D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D10Cu;
label_10d10c:
    // 0x10d10c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D10Cu;
    {
        const bool branch_taken_0x10d10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D10Cu;
        // 0x10d110: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d10c) {
            ctx->pc = 0x10D118u;
            goto label_10d118;
        }
    }
    ctx->pc = 0x10D114u;
    // 0x10d114: 0xa22200ac  sb          $v0, 0xAC($s1)
    ctx->pc = 0x10d114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 2));
label_10d118:
    // 0x10d118: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10d118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10d11c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10d120: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10d120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x10d124: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x10d124u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d128: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x10d128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10d12c: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x10d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    // 0x10d130: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x10d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10d134: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x10d134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10d138: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x10D138u;
    SET_GPR_U32(ctx, 31, 0x10D140u);
    ctx->pc = 0x10D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D138u;
    // 0x10d13c: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x10D138u, 0x10D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D140u;
label_10d140:
    // 0x10d140: 0xa6220084  sh          $v0, 0x84($s1)
    ctx->pc = 0x10d140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x10d144: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d148: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D148u;
    {
        const bool branch_taken_0x10d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x10D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D148u;
        // 0x10d14c: 0xa622008a  sh          $v0, 0x8A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d148) {
            ctx->pc = 0x10D170u;
            goto label_10d170;
        }
    }
    ctx->pc = 0x10D150u;
    // 0x10d150: 0x8fb00044  lw          $s0, 0x44($sp)
    ctx->pc = 0x10d150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10d154: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10d158: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x10d158u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10d15c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x10d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x10d160: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x10D160u;
    SET_GPR_U32(ctx, 31, 0x10D168u);
    ctx->pc = 0x10D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D160u;
    // 0x10d164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x10D160u, 0x10D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D168u;
label_10d168:
    // 0x10d168: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x10D168u;
    {
        const bool branch_taken_0x10d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d168) {
            ctx->pc = 0x10D1E0u;
            goto label_10d1e0;
        }
    }
    ctx->pc = 0x10D170u;
label_10d170:
    // 0x10d170: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d174: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d178: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x10D178u;
    {
        const bool branch_taken_0x10d178 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D178u;
        // 0x10d17c: 0x4a880  sll         $s5, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d178) {
            ctx->pc = 0x10D1B4u;
            goto label_10d1b4;
        }
    }
    ctx->pc = 0x10D180u;
    // 0x10d180: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d184: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x10d184u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x10d188: 0x3442a014  ori         $v0, $v0, 0xA014
    ctx->pc = 0x10d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40980);
    // 0x10d18c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10d190: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x10d194: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10d194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10d198:
    // 0x10d198: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10d198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10d19c: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x10d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
    // 0x10d1a0: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x10D1A0u;
    SET_GPR_U32(ctx, 31, 0x10D1A8u);
    ctx->pc = 0x10D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1A0u;
    // 0x10d1a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x10D1A0u, 0x10D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1A8u;
label_10d1a8:
    // 0x10d1a8: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x10d1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x10d1ac: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D1ACu;
    {
        const bool branch_taken_0x10d1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d1ac) {
            ctx->pc = 0x10D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D1ACu;
            // 0x10d1b0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d198;
        }
    }
    ctx->pc = 0x10D1B4u;
label_10d1b4:
    // 0x10d1b4: 0x27c4b8b0  addiu       $a0, $fp, -0x4750
    ctx->pc = 0x10d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949040));
    // 0x10d1b8: 0xc0cd526  jal         func_335498
    ctx->pc = 0x10D1B8u;
    SET_GPR_U32(ctx, 31, 0x10D1C0u);
    ctx->pc = 0x10D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1B8u;
    // 0x10d1bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x10D1B8u, 0x10D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1C0u;
label_10d1c0:
    // 0x10d1c0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d1c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10d1c8: 0x3463a014  ori         $v1, $v1, 0xA014
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40980);
    // 0x10d1cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d1d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x10d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x10d1d4: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x10d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x10d1d8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x10d1dc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x10d1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10d1e0:
    // 0x10d1e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x10d1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x10d1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d1e8: 0x0  nop
    ctx->pc = 0x10d1e8u;
    // NOP
    // 0x10d1ec: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x10d1ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d1f0: 0x0  nop
    ctx->pc = 0x10d1f0u;
    // NOP
    // 0x10d1f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x10D1F4u;
    {
        const bool branch_taken_0x10d1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1F4u;
        // 0x10d1f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1f4) {
            ctx->pc = 0x10D220u;
            goto label_10d220;
        }
    }
    ctx->pc = 0x10D1FCu;
    // 0x10d1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d200: 0xc044382  jal         func_110E08
    ctx->pc = 0x10D200u;
    SET_GPR_U32(ctx, 31, 0x10D208u);
    ctx->pc = 0x10D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D200u;
    // 0x10d204: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E08u, 0x10D200u, 0x10D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D208u;
label_10d208:
    // 0x10d208: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10d208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x10d20c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d210: 0x0  nop
    ctx->pc = 0x10d210u;
    // NOP
    // 0x10d214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10d214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10d218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D218u;
    {
        const bool branch_taken_0x10d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D218u;
        // 0x10d21c: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d218) {
            ctx->pc = 0x10D224u;
            goto label_10d224;
        }
    }
    ctx->pc = 0x10D220u;
label_10d220:
    // 0x10d220: 0xe6340074  swc1        $f20, 0x74($s1)
    ctx->pc = 0x10d220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_10d224:
    // 0x10d224: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x10d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10d228: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x10d228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x10d22c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10d230: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x10d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10d234: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x10d234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_10d238:
    // 0x10d238: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x10d238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10d23c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x10d23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10d240: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x10d240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10d244: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x10d244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10d248: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x10d248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10d24c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x10d24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10d250: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x10d250u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d254: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10d254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d258: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x10d258u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d25c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d260: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x10d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d264: 0x3e00008  jr          $ra
    ctx->pc = 0x10D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D264u;
        // 0x10d268: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D26Cu;
    // 0x10d26c: 0x0  nop
    ctx->pc = 0x10d26cu;
    // NOP
    ctx->pc = 0x10d270u;
}
