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

// Function: sub_00100200
// Address: 0x100200 - 0x100408
void sub_00100200_0x100200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100200_0x100200");
#endif

    ctx->pc = 0x100200u;

    // 0x100200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x100200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x100204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10020c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x10020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x100210: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x100210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x100214: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x100214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x100218: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x100218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10021c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x10021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x100220: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x100220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x100224: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x100224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x100228: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x100228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x10022c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x10022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x100230: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x100234: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x100234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x100238: 0x24880060  addiu       $t0, $a0, 0x60
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x10023c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x10023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x100240: 0x24890070  addiu       $t1, $a0, 0x70
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x100244: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x100244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x100248: 0x248a0080  addiu       $t2, $a0, 0x80
    ctx->pc = 0x100248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x10024c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x10024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x100250: 0x248b0090  addiu       $t3, $a0, 0x90
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x100254: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x100254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x100258: 0x342136e7  ori         $at, $at, 0x36E7
    ctx->pc = 0x100258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14055);
    // 0x10025c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10025cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100260: 0x249e01a0  addiu       $fp, $a0, 0x1A0
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x100264: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x100264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x100268: 0x248c00a0  addiu       $t4, $a0, 0xA0
    ctx->pc = 0x100268u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x10026c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x10026cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x100270: 0x248d00b0  addiu       $t5, $a0, 0xB0
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x100274: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x100274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x100278: 0x248e00c0  addiu       $t6, $a0, 0xC0
    ctx->pc = 0x100278u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x10027c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10027cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x100280: 0x248f00d0  addiu       $t7, $a0, 0xD0
    ctx->pc = 0x100280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x100284: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x100284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x100288: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x100288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x10028c: 0x3c01befb  lui         $at, 0xBEFB
    ctx->pc = 0x10028cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48891 << 16));
    // 0x100290: 0x34217e3b  ori         $at, $at, 0x7E3B
    ctx->pc = 0x100290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32315);
    // 0x100294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100298: 0x24910100  addiu       $s1, $a0, 0x100
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x10029c: 0x3c01bf02  lui         $at, 0xBF02
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48898 << 16));
    // 0x1002a0: 0x342136e7  ori         $at, $at, 0x36E7
    ctx->pc = 0x1002a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14055);
    // 0x1002a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1002a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1002a8: 0x24920110  addiu       $s2, $a0, 0x110
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1002ac: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1002acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1002b0: 0x24930120  addiu       $s3, $a0, 0x120
    ctx->pc = 0x1002b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1002b4: 0x3c013efb  lui         $at, 0x3EFB
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16123 << 16));
    // 0x1002b8: 0x34217e3b  ori         $at, $at, 0x7E3B
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32315);
    // 0x1002bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1002bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1002c0: 0x24940130  addiu       $s4, $a0, 0x130
    ctx->pc = 0x1002c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x1002c4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1002c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1002c8: 0x24950140  addiu       $s5, $a0, 0x140
    ctx->pc = 0x1002c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x1002cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1002ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1002d0: 0x3421000b  ori         $at, $at, 0xB
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11);
    // 0x1002d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1002d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1002d8: 0x24960150  addiu       $s6, $a0, 0x150
    ctx->pc = 0x1002d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1002dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1002dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1002e0: 0x24970170  addiu       $s7, $a0, 0x170
    ctx->pc = 0x1002e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x1002e4: 0x3c01beff  lui         $at, 0xBEFF
    ctx->pc = 0x1002e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48895 << 16));
    // 0x1002e8: 0x3421ffe9  ori         $at, $at, 0xFFE9
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65513);
    // 0x1002ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1002ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1002f0: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1002f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1002f4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1002f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1002f8: 0x24980180  addiu       $t8, $a0, 0x180
    ctx->pc = 0x1002f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1002fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1002fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x100300: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100304: 0x24990190  addiu       $t9, $a0, 0x190
    ctx->pc = 0x100304u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x100308: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x100308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x10030c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10030cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100310: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x100310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x100314: 0x3c01bef5  lui         $at, 0xBEF5
    ctx->pc = 0x100314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48885 << 16));
    // 0x100318: 0x34216581  ori         $at, $at, 0x6581
    ctx->pc = 0x100318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25985);
    // 0x10031c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10031cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100320: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x100320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x100324: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x100324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x100328: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x100328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
    // 0x10032c: 0x342165ae  ori         $at, $at, 0x65AE
    ctx->pc = 0x10032cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26030);
    // 0x100330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100334: 0x24830160  addiu       $v1, $a0, 0x160
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x100338: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x100338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x10033c: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x10033cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x100340: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x100340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x100344: 0x249e01b0  addiu       $fp, $a0, 0x1B0
    ctx->pc = 0x100344u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x100348: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x100348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x10034c: 0x34211722  ori         $at, $at, 0x1722
    ctx->pc = 0x10034cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5922);
    // 0x100350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100354: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x100354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x100358: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x100358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x10035c: 0x249e01c0  addiu       $fp, $a0, 0x1C0
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x100360: 0x3c01bf05  lui         $at, 0xBF05
    ctx->pc = 0x100360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48901 << 16));
    // 0x100364: 0x3421173b  ori         $at, $at, 0x173B
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5947);
    // 0x100368: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10036c: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x10036cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x100370: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x100370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x100374: 0x3421e2fb  ori         $at, $at, 0xE2FB
    ctx->pc = 0x100374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58107);
    // 0x100378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10037c: 0x249e01e0  addiu       $fp, $a0, 0x1E0
    ctx->pc = 0x10037cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x100380: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x100380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x100384: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x100384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x100388: 0x248501d0  addiu       $a1, $a0, 0x1D0
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x10038c: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x10038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x100390: 0x249e01f0  addiu       $fp, $a0, 0x1F0
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x100394: 0x3c01bcf3  lui         $at, 0xBCF3
    ctx->pc = 0x100394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48371 << 16));
    // 0x100398: 0x3421c432  ori         $at, $at, 0xC432
    ctx->pc = 0x100398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50226);
    // 0x10039c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10039cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1003a0: 0xafbe000c  sw          $fp, 0xC($sp)
    ctx->pc = 0x1003a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 30));
    // 0x1003a4: 0x249e0200  addiu       $fp, $a0, 0x200
    ctx->pc = 0x1003a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1003a8: 0x3c01b3d6  lui         $at, 0xB3D6
    ctx->pc = 0x1003a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46038 << 16));
    // 0x1003ac: 0x3421bf95  ori         $at, $at, 0xBF95
    ctx->pc = 0x1003acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49045);
    // 0x1003b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1003b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1003b4: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1003b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x1003b8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1003b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1003bc: 0x249e0210  addiu       $fp, $a0, 0x210
    ctx->pc = 0x1003bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x1003c0: 0xafbe0014  sw          $fp, 0x14($sp)
    ctx->pc = 0x1003c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 30));
    // 0x1003c4: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x1003c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x1003c8: 0x342104ad  ori         $at, $at, 0x4AD
    ctx->pc = 0x1003c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1197);
    // 0x1003cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1003ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1003d0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1003d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1003d4: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1003d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1003d8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1003d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1003dc: 0x3c01be33  lui         $at, 0xBE33
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48691 << 16));
    // 0x1003e0: 0x3421e6e7  ori         $at, $at, 0xE6E7
    ctx->pc = 0x1003e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59111);
    // 0x1003e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1003e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1003e8: 0x3c01b500  lui         $at, 0xB500
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46336 << 16));
    // 0x1003ec: 0x3421d959  ori         $at, $at, 0xD959
    ctx->pc = 0x1003ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55641);
    // 0x1003f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1003f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1003f4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1003f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1003f8: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x1003fc: 0x34213c95  ori         $at, $at, 0x3C95
    ctx->pc = 0x1003fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15509);
    // 0x100400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100404: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x100404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->pc = 0x100408u;
}
