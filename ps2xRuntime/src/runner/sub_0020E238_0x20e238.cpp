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

// Function: sub_0020E238
// Address: 0x20e238 - 0x20e5b8
void sub_0020E238_0x20e238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E238_0x20e238");
#endif

    switch (ctx->pc) {
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e3d4u: goto label_20e3d4;
        case 0x20e450u: goto label_20e450;
        case 0x20e4ecu: goto label_20e4ec;
        case 0x20e528u: goto label_20e528;
        default: break;
    }

    ctx->pc = 0x20e238u;

    // 0x20e238: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x20e238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x20e23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e240: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x20e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x20e244: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20e244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20e248: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x20e248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x20e24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e250: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x20e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x20e254: 0x2463f6a0  addiu       $v1, $v1, -0x960
    ctx->pc = 0x20e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964896));
    // 0x20e258: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x20e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x20e25c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e260: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x20e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x20e264: 0x24130d00  addiu       $s3, $zero, 0xD00
    ctx->pc = 0x20e264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    // 0x20e268: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x20e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x20e26c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x20e26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20e270: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x20e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x20e274: 0x27b60058  addiu       $s6, $sp, 0x58
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x20e278: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x20e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x20e27c: 0x27b70054  addiu       $s7, $sp, 0x54
    ctx->pc = 0x20e27cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x20e280: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x20e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x20e284: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20e288: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x20e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x20e28c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20e290: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x20e290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20e294: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20e298: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x20e298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x20e29c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20e2a0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x20e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e2a8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20e2a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e2ac: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x20e2b0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x20e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x20e2b4: 0x2475f240  addiu       $s5, $v1, -0xDC0
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x20e2b8: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x20e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x20e2bc: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x20e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x20e2c0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e2c4: 0x0  nop
    ctx->pc = 0x20e2c4u;
    // NOP
label_20e2c8:
    // 0x20e2c8: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x20e2cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e2d0: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x20e2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x20e2d4: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x20e2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e2d8: 0xa3b40050  sb          $s4, 0x50($sp)
    ctx->pc = 0x20e2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e2dc: 0x829018  mult        $s2, $a0, $v0
    ctx->pc = 0x20e2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x20e2e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20e2e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x20e2e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x20e2ec: 0x7bac0020  lq          $t4, 0x20($sp)
    ctx->pc = 0x20e2ecu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e2f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x20e2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x20e2f4: 0x8c46bd30  lw          $a2, -0x42D0($v0)
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x20e2f8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x20e2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x20e2fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x20e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20e300: 0x2558821  addu        $s1, $s2, $s5
    ctx->pc = 0x20e300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x20e304: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x20e304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20e308: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x20e308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x20e30c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x20e30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x20e310: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20e310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20e314: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20e314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20e318: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e31c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20e320: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20e320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x20e324: 0x2484f248  addiu       $a0, $a0, -0xDB8
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963784));
    // 0x20e328: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e32c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e330: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20e330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e334: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x20e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x20e338: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x20e338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
    // 0x20e33c: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x20e33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e340: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x20e340u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x20e344: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20e344u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e348: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x20e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20e34c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x20e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20e350: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20e354: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e358: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20e358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e35c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x20e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20e360: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e364: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x20e364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x20e368: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20e36c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e370: 0x2442f6b0  addiu       $v0, $v0, -0x950
    ctx->pc = 0x20e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964912));
    // 0x20e374: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x20e374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x20e378: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x20e378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e37c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x20e37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20e380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20e384: 0x2442f6a0  addiu       $v0, $v0, -0x960
    ctx->pc = 0x20e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964896));
    // 0x20e388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e38c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x20e38cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e390: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x20e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x20e394: 0xc46c0020  lwc1        $f12, 0x20($v1)
    ctx->pc = 0x20e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e398: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20e398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20e39c: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x20e39cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x20e3a0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20e3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20e3a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20e3a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x20e3a8: 0x482c1000  qmfc2.ni    $t4, $vf2
    ctx->pc = 0x20e3a8u;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20e3ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x20e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x20e3b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20e3b4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x20e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x20e3b8: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x20e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    // 0x20e3bc: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x20e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    // 0x20e3c0: 0xa0740001  sb          $s4, 0x1($v1)
    ctx->pc = 0x20e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e3c4: 0xa0740002  sb          $s4, 0x2($v1)
    ctx->pc = 0x20e3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e3c8: 0xa0740003  sb          $s4, 0x3($v1)
    ctx->pc = 0x20e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e3cc: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x20E3CCu;
    SET_GPR_U32(ctx, 31, 0x20E3D4u);
    ctx->pc = 0x20E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3CCu;
    // 0x20e3d0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x20E3CCu, 0x20E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3D4u;
label_20e3d4:
    // 0x20e3d4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e3d8: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x20e3dc: 0xa3a40054  sb          $a0, 0x54($sp)
    ctx->pc = 0x20e3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e3e0: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x20e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x20e3e4: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20e3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e3e8: 0xa2e60001  sb          $a2, 0x1($s7)
    ctx->pc = 0x20e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x20e3ec: 0x2406ffbc  addiu       $a2, $zero, -0x44
    ctx->pc = 0x20e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x20e3f0: 0xa2f40003  sb          $s4, 0x3($s7)
    ctx->pc = 0x20e3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e3f4: 0xa2e60002  sb          $a2, 0x2($s7)
    ctx->pc = 0x20e3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x20e3f8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x20e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x20e3fc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x20e3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x20e400: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20e400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20e404: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x20e408: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20e40c: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x20e40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20e410: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20e410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20e414: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x20e414u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x20e418: 0x2463f6a0  addiu       $v1, $v1, -0x960
    ctx->pc = 0x20e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964896));
    // 0x20e41c: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x20e420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e424: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x20e424u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x20e428: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x20e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e42c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20e42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e434: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20e434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20e438: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20e438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20e43c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e440: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x20e440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x20e444: 0x3529001f  ori         $t1, $t1, 0x1F
    ctx->pc = 0x20e444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)31);
    // 0x20e448: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x20E448u;
    SET_GPR_U32(ctx, 31, 0x20E450u);
    ctx->pc = 0x20E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E448u;
    // 0x20e44c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x20E448u, 0x20E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E450u;
label_20e450:
    // 0x20e450: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e454: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x20e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20e458: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x20e458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e45c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x20e460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20e464: 0x451c0  sll         $t2, $a0, 7
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x20e468: 0x24c796d8  addiu       $a3, $a2, -0x6928
    ctx->pc = 0x20e468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940376));
    // 0x20e46c: 0x2442f6e0  addiu       $v0, $v0, -0x920
    ctx->pc = 0x20e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
    // 0x20e470: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x20e470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20e474: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x20e474u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e478: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x20e478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20e480: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x20e480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20e484: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x20e484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x20e488: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20e488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e48c: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x20e48cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
    // 0x20e490: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20e490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e494: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20e498: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x20e498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e49c: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x20e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x20e4a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x20e4a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20e4a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20e4a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x20e4a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20e4ac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20e4acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20e4b0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20e4b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x20e4b4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20e4b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20e4b8: 0x24c6f6a0  addiu       $a2, $a2, -0x960
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964896));
    // 0x20e4bc: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x20e4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x20e4c0: 0xc54d0054  lwc1        $f13, 0x54($t2)
    ctx->pc = 0x20e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20e4c4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x20e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x20e4c8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x20e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x20e4cc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x20e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20e4d0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x20e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x20e4d4: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x20e4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e4d8: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x20e4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e4dc: 0xa2d40003  sb          $s4, 0x3($s6)
    ctx->pc = 0x20e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x20e4e0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x20e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4e4: 0xc0707e0  jal         func_1C1F80
    ctx->pc = 0x20E4E4u;
    SET_GPR_U32(ctx, 31, 0x20E4ECu);
    ctx->pc = 0x20E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4E4u;
    // 0x20e4e8: 0xc54c0050  lwc1        $f12, 0x50($t2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x20E4E4u, 0x20E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4ECu;
label_20e4ec:
    // 0x20e4ec: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e4f0: 0x26a302d0  addiu       $v1, $s5, 0x2D0
    ctx->pc = 0x20e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
    // 0x20e4f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e4f8: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x20e4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20e4fc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x20e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20e500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e504: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x20e504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x20e508: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x20e50c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x20e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20e510: 0x8c46f208  lw          $a2, -0xDF8($v0)
    ctx->pc = 0x20e510u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x63F208u));
    // 0x20e514: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x20e514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20e518: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20e518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e51c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20e520: 0xc0686fa  jal         func_1A1BE8
    ctx->pc = 0x20E520u;
    SET_GPR_U32(ctx, 31, 0x20E528u);
    ctx->pc = 0x20E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E520u;
    // 0x20e524: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x20E520u, 0x20E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E528u;
label_20e528:
    // 0x20e528: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20e52c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E52Cu;
    {
        const bool branch_taken_0x20e52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E52Cu;
        // 0x20e530: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e52c) {
            ctx->pc = 0x20E550u;
            goto label_20e550;
        }
    }
    ctx->pc = 0x20E534u;
    // 0x20e534: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20e534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x20e538: 0x2484f4d0  addiu       $a0, $a0, -0xB30
    ctx->pc = 0x20e538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964432));
    // 0x20e53c: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20e53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e540: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x20e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20e544: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E548u;
    {
        const bool branch_taken_0x20e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E548u;
        // 0x20e54c: 0xa040009c  sb          $zero, 0x9C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e548) {
            ctx->pc = 0x20E56Cu;
            goto label_20e56c;
        }
    }
    ctx->pc = 0x20E550u;
label_20e550:
    // 0x20e550: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x20e554: 0x2484f4d0  addiu       $a0, $a0, -0xB30
    ctx->pc = 0x20e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964432));
    // 0x20e558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e55c: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20e55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20e560: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x20e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20e564: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e568: 0xa046009c  sb          $a2, 0x9C($v0)
    ctx->pc = 0x20e568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 6));
label_20e56c:
    // 0x20e56c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e574: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x20e574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x20e578: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20e578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e57c: 0x5440ff52  bnel        $v0, $zero, . + 4 + (-0xAE << 2)
    ctx->pc = 0x20E57Cu;
    {
        const bool branch_taken_0x20e57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e57c) {
            ctx->pc = 0x20E580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E57Cu;
            // 0x20e580: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e2c8;
        }
    }
    ctx->pc = 0x20E584u;
    // 0x20e584: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x20e584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20e588: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x20e588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20e58c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x20e58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20e590: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x20e590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20e594: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x20e594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20e598: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x20e598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20e59c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x20e59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20e5a0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x20e5a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20e5a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x20e5a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20e5a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x20E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5ACu;
        // 0x20e5b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E5B4u;
    // 0x20e5b4: 0x0  nop
    ctx->pc = 0x20e5b4u;
    // NOP
    ctx->pc = 0x20e5b8u;
}
