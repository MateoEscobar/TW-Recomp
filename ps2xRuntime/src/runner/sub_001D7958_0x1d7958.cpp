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

// Function: sub_001D7958
// Address: 0x1d7958 - 0x1d7c70
void sub_001D7958_0x1d7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7958_0x1d7958");
#endif

    switch (ctx->pc) {
        case 0x1d7a80u: goto label_1d7a80;
        case 0x1d7b04u: goto label_1d7b04;
        case 0x1d7b2cu: goto label_1d7b2c;
        case 0x1d7b98u: goto label_1d7b98;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7c18u: goto label_1d7c18;
        case 0x1d7c20u: goto label_1d7c20;
        case 0x1d7c2cu: goto label_1d7c2c;
        default: break;
    }

    ctx->pc = 0x1d7958u;

    // 0x1d7958: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d795c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1d795cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7960: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1d7964: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d7964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d7968: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d7968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d796c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d7970: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d7970u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7974: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d7974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1d7978: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d797c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1d7980: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d7980u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7984: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1d7988: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1d7988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d798c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1d7990: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d7990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1d7994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d7998: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x1d7998u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d799c: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x1d799cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1d79a0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1d79a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d79a4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1d79a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d79a8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d79a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d79ac: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D79ACu;
    {
        const bool branch_taken_0x1d79ac = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0xaed20640  sw          $s2, 0x640($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1600), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79ac) {
            ctx->pc = 0x1D79C8u;
            goto label_1d79c8;
        }
    }
    ctx->pc = 0x1D79B4u;
    // 0x1d79b4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d79b4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d79b8: 0x0  nop
    ctx->pc = 0x1d79b8u;
    // NOP
    // 0x1d79bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d79bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d79c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D79C0u;
    {
        const bool branch_taken_0x1d79c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79C0u;
        // 0x1d79c4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79c0) {
            ctx->pc = 0x1D79E8u;
            goto label_1d79e8;
        }
    }
    ctx->pc = 0x1D79C8u;
label_1d79c8:
    // 0x1d79c8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1d79cc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d79d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d79d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d79d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d79d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d79d8: 0x0  nop
    ctx->pc = 0x1d79d8u;
    // NOP
    // 0x1d79dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d79dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d79e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d79e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1d79e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d79e8:
    // 0x1d79e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d79ec: 0x8c65ecf8  lw          $a1, -0x1308($v1)
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962424)));
    // 0x1d79f0: 0x8c82ed00  lw          $v0, -0x1300($a0)
    ctx->pc = 0x1d79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50ED00u));
    // 0x1d79f4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d79f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D79F8u;
    {
        const bool branch_taken_0x1d79f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F8u;
        // 0x1d79fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79f8) {
            ctx->pc = 0x1D7A14u;
            goto label_1d7a14;
        }
    }
    ctx->pc = 0x1D7A00u;
    // 0x1d7a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7a04: 0x0  nop
    ctx->pc = 0x1d7a04u;
    // NOP
    // 0x1d7a08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7a0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7A0Cu;
    {
        const bool branch_taken_0x1d7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a0c) {
            ctx->pc = 0x1D7A2Cu;
            goto label_1d7a2c;
        }
    }
    ctx->pc = 0x1D7A14u;
label_1d7a14:
    // 0x1d7a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7a18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d7a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7a20: 0x0  nop
    ctx->pc = 0x1d7a20u;
    // NOP
    // 0x1d7a24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7a28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d7a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d7a2c:
    // 0x1d7a2c: 0x0  nop
    ctx->pc = 0x1d7a2cu;
    // NOP
    // 0x1d7a30: 0x0  nop
    ctx->pc = 0x1d7a30u;
    // NOP
    // 0x1d7a34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d7a34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d7a38: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1d7a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d7a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a40: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d7a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d7a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a48: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d7a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7a50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d7a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7a54: 0x26d30650  addiu       $s3, $s6, 0x650
    ctx->pc = 0x1d7a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1616));
    // 0x1d7a58: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1d7a5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d7a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d7a60: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1d7a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1d7a64: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x1d7a68: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1d7a6c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1d7a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1d7a70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1d7a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1d7a74: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1d7a74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7a78: 0xc075bbe  jal         func_1D6EF8
    ctx->pc = 0x1D7A78u;
    SET_GPR_U32(ctx, 31, 0x1D7A80u);
    ctx->pc = 0x1D7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A78u;
    // 0x1d7a7c: 0xe6c00630  swc1        $f0, 0x630($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EF8u, 0x1D7A78u, 0x1D7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A80u;
label_1d7a80:
    // 0x1d7a80: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1d7a84: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1d7a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1d7a88: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d7a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d7a8c: 0xa3b20040  sb          $s2, 0x40($sp)
    ctx->pc = 0x1d7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d7a90: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d7a94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1d7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d7a98: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x1d7a98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
    // 0x1d7a9c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1d7a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7aa0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1d7aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1d7aa4: 0xa0520002  sb          $s2, 0x2($v0)
    ctx->pc = 0x1d7aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d7aa8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1d7aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1d7aac: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x1d7aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d7ab0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ab4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ab8: 0x35290006  ori         $t1, $t1, 0x6
    ctx->pc = 0x1d7ab8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    // 0x1d7abc: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1d7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ac0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1d7ac0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1d7ac4: 0xa0520001  sb          $s2, 0x1($v0)
    ctx->pc = 0x1d7ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x1d7ac8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d7ac8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ad4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1d7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ad8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1d7ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1d7adc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d7adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d7ae0: 0x26d20750  addiu       $s2, $s6, 0x750
    ctx->pc = 0x1d7ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1872));
    // 0x1d7ae4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d7ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d7ae8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1d7ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d7aec: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d7aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d7af0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1d7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1d7af4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7af8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d7afc: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D7AFCu;
    SET_GPR_U32(ctx, 31, 0x1D7B04u);
    ctx->pc = 0x1D7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AFCu;
    // 0x1d7b00: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D7AFCu, 0x1D7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B04u;
label_1d7b04:
    // 0x1d7b04: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1d7b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1d7b08: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d7b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1d7b0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d7b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d7b10: 0xc68ded44  lwc1        $f13, -0x12BC($s4)
    ctx->pc = 0x1d7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7b14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b1c: 0x26d30850  addiu       $s3, $s6, 0x850
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 2128));
    // 0x1d7b20: 0x46166b02  mul.s       $f12, $f13, $f22
    ctx->pc = 0x1d7b20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x1d7b24: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D7B24u;
    SET_GPR_U32(ctx, 31, 0x1D7B2Cu);
    ctx->pc = 0x1D7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B24u;
    // 0x1d7b28: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D7B24u, 0x1D7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B2Cu;
label_1d7b2c:
    // 0x1d7b2c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d7b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7b30: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
    // 0x1d7b34: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1d7b38: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d7b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d7b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7b40: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1d7b44: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1d7b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d7b48: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1d7b48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1d7b4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d7b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d7b50: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1d7b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7b54: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1d7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1d7b58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d7b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d7b60: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1d7b60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1d7b64: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d7b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d7b68: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1d7b6c: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x1d7b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d7b70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b74: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1d7b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d7b78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d7b80: 0x35290006  ori         $t1, $t1, 0x6
    ctx->pc = 0x1d7b80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    // 0x1d7b84: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1d7b84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1d7b88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d7b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b90: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D7B90u;
    SET_GPR_U32(ctx, 31, 0x1D7B98u);
    ctx->pc = 0x1D7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B90u;
    // 0x1d7b94: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D7B90u, 0x1D7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B98u;
label_1d7b98:
    // 0x1d7b98: 0xc68ced44  lwc1        $f12, -0x12BC($s4)
    ctx->pc = 0x1d7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294962500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ba4: 0x46156342  mul.s       $f13, $f12, $f21
    ctx->pc = 0x1d7ba4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d7ba8: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D7BA8u;
    SET_GPR_U32(ctx, 31, 0x1D7BB0u);
    ctx->pc = 0x1D7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BA8u;
    // 0x1d7bac: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D7BA8u, 0x1D7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BB0u;
label_1d7bb0:
    // 0x1d7bb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d7bb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7bb8: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x1d7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7bbc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7bc0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1d7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7bc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7bc8: 0xc443ed3c  lwc1        $f3, -0x12C4($v0)
    ctx->pc = 0x1d7bc8u;
    { uint32_t bits = FAST_READ32(0x50ED3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d7bcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7bd0: 0xc462ed40  lwc1        $f2, -0x12C0($v1)
    ctx->pc = 0x1d7bd0u;
    { uint32_t bits = FAST_READ32(0x50ED40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7bd4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7bd8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1d7bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d7bdc: 0x8c86d320  lw          $a2, -0x2CE0($a0)
    ctx->pc = 0x1d7bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD320u));
    // 0x1d7be0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7be0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d7be4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d7be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1d7be8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d7bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d7bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1d7bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d7bfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c04: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1d7c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7c08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d7c08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d7c0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d7c10: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1D7C10u;
    SET_GPR_U32(ctx, 31, 0x1D7C18u);
    ctx->pc = 0x1D7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C10u;
    // 0x1d7c14: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1D7C10u, 0x1D7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C18u;
label_1d7c18:
    // 0x1d7c18: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D7C18u;
    SET_GPR_U32(ctx, 31, 0x1D7C20u);
    ctx->pc = 0x1D7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C18u;
    // 0x1d7c1c: 0x24040118  addiu       $a0, $zero, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D7C18u, 0x1D7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C20u;
label_1d7c20:
    // 0x1d7c20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c24: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D7C24u;
    SET_GPR_U32(ctx, 31, 0x1D7C2Cu);
    ctx->pc = 0x1D7C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C24u;
    // 0x1d7c28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D7C24u, 0x1D7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C2Cu;
label_1d7c2c:
    // 0x1d7c2c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d7c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7c30: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d7c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7c34: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d7c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7c38: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d7c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d7c3c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d7c3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7c40: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d7c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7c44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d7c44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7c48: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d7c48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d7c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7c50: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x1d7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d7c54: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x1d7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d7c58: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1d7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d7c5c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1d7c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d7c60: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C64u;
        // 0x1d7c68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C6Cu;
    // 0x1d7c6c: 0x0  nop
    ctx->pc = 0x1d7c6cu;
    // NOP
    ctx->pc = 0x1d7c70u;
}
