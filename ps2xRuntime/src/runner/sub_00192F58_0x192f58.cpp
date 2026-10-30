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

// Function: sub_00192F58
// Address: 0x192f58 - 0x1931f8
void sub_00192F58_0x192f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192F58_0x192f58");
#endif

    switch (ctx->pc) {
        case 0x192f58u: goto label_192f58;
        case 0x192f5cu: goto label_192f5c;
        case 0x192f60u: goto label_192f60;
        case 0x192f64u: goto label_192f64;
        case 0x192f68u: goto label_192f68;
        case 0x192f6cu: goto label_192f6c;
        case 0x192f70u: goto label_192f70;
        case 0x192f74u: goto label_192f74;
        case 0x192f78u: goto label_192f78;
        case 0x192f7cu: goto label_192f7c;
        case 0x192f80u: goto label_192f80;
        case 0x192f84u: goto label_192f84;
        case 0x192f88u: goto label_192f88;
        case 0x192f8cu: goto label_192f8c;
        case 0x192f90u: goto label_192f90;
        case 0x192f94u: goto label_192f94;
        case 0x192f98u: goto label_192f98;
        case 0x192f9cu: goto label_192f9c;
        case 0x192fa0u: goto label_192fa0;
        case 0x192fa4u: goto label_192fa4;
        case 0x192fa8u: goto label_192fa8;
        case 0x192facu: goto label_192fac;
        case 0x192fb0u: goto label_192fb0;
        case 0x192fb4u: goto label_192fb4;
        case 0x192fb8u: goto label_192fb8;
        case 0x192fbcu: goto label_192fbc;
        case 0x192fc0u: goto label_192fc0;
        case 0x192fc4u: goto label_192fc4;
        case 0x192fc8u: goto label_192fc8;
        case 0x192fccu: goto label_192fcc;
        case 0x192fd0u: goto label_192fd0;
        case 0x192fd4u: goto label_192fd4;
        case 0x192fd8u: goto label_192fd8;
        case 0x192fdcu: goto label_192fdc;
        case 0x192fe0u: goto label_192fe0;
        case 0x192fe4u: goto label_192fe4;
        case 0x192fe8u: goto label_192fe8;
        case 0x192fecu: goto label_192fec;
        case 0x192ff0u: goto label_192ff0;
        case 0x192ff4u: goto label_192ff4;
        case 0x192ff8u: goto label_192ff8;
        case 0x192ffcu: goto label_192ffc;
        case 0x193000u: goto label_193000;
        case 0x193004u: goto label_193004;
        case 0x193008u: goto label_193008;
        case 0x19300cu: goto label_19300c;
        case 0x193010u: goto label_193010;
        case 0x193014u: goto label_193014;
        case 0x193018u: goto label_193018;
        case 0x19301cu: goto label_19301c;
        case 0x193020u: goto label_193020;
        case 0x193024u: goto label_193024;
        case 0x193028u: goto label_193028;
        case 0x19302cu: goto label_19302c;
        case 0x193030u: goto label_193030;
        case 0x193034u: goto label_193034;
        case 0x193038u: goto label_193038;
        case 0x19303cu: goto label_19303c;
        case 0x193040u: goto label_193040;
        case 0x193044u: goto label_193044;
        case 0x193048u: goto label_193048;
        case 0x19304cu: goto label_19304c;
        case 0x193050u: goto label_193050;
        case 0x193054u: goto label_193054;
        case 0x193058u: goto label_193058;
        case 0x19305cu: goto label_19305c;
        case 0x193060u: goto label_193060;
        case 0x193064u: goto label_193064;
        case 0x193068u: goto label_193068;
        case 0x19306cu: goto label_19306c;
        case 0x193070u: goto label_193070;
        case 0x193074u: goto label_193074;
        case 0x193078u: goto label_193078;
        case 0x19307cu: goto label_19307c;
        case 0x193080u: goto label_193080;
        case 0x193084u: goto label_193084;
        case 0x193088u: goto label_193088;
        case 0x19308cu: goto label_19308c;
        case 0x193090u: goto label_193090;
        case 0x193094u: goto label_193094;
        case 0x193098u: goto label_193098;
        case 0x19309cu: goto label_19309c;
        case 0x1930a0u: goto label_1930a0;
        case 0x1930a4u: goto label_1930a4;
        case 0x1930a8u: goto label_1930a8;
        case 0x1930acu: goto label_1930ac;
        case 0x1930b0u: goto label_1930b0;
        case 0x1930b4u: goto label_1930b4;
        case 0x1930b8u: goto label_1930b8;
        case 0x1930bcu: goto label_1930bc;
        case 0x1930c0u: goto label_1930c0;
        case 0x1930c4u: goto label_1930c4;
        case 0x1930c8u: goto label_1930c8;
        case 0x1930ccu: goto label_1930cc;
        case 0x1930d0u: goto label_1930d0;
        case 0x1930d4u: goto label_1930d4;
        case 0x1930d8u: goto label_1930d8;
        case 0x1930dcu: goto label_1930dc;
        case 0x1930e0u: goto label_1930e0;
        case 0x1930e4u: goto label_1930e4;
        case 0x1930e8u: goto label_1930e8;
        case 0x1930ecu: goto label_1930ec;
        case 0x1930f0u: goto label_1930f0;
        case 0x1930f4u: goto label_1930f4;
        case 0x1930f8u: goto label_1930f8;
        case 0x1930fcu: goto label_1930fc;
        case 0x193100u: goto label_193100;
        case 0x193104u: goto label_193104;
        case 0x193108u: goto label_193108;
        case 0x19310cu: goto label_19310c;
        case 0x193110u: goto label_193110;
        case 0x193114u: goto label_193114;
        case 0x193118u: goto label_193118;
        case 0x19311cu: goto label_19311c;
        case 0x193120u: goto label_193120;
        case 0x193124u: goto label_193124;
        case 0x193128u: goto label_193128;
        case 0x19312cu: goto label_19312c;
        case 0x193130u: goto label_193130;
        case 0x193134u: goto label_193134;
        case 0x193138u: goto label_193138;
        case 0x19313cu: goto label_19313c;
        case 0x193140u: goto label_193140;
        case 0x193144u: goto label_193144;
        case 0x193148u: goto label_193148;
        case 0x19314cu: goto label_19314c;
        case 0x193150u: goto label_193150;
        case 0x193154u: goto label_193154;
        case 0x193158u: goto label_193158;
        case 0x19315cu: goto label_19315c;
        case 0x193160u: goto label_193160;
        case 0x193164u: goto label_193164;
        case 0x193168u: goto label_193168;
        case 0x19316cu: goto label_19316c;
        case 0x193170u: goto label_193170;
        case 0x193174u: goto label_193174;
        case 0x193178u: goto label_193178;
        case 0x19317cu: goto label_19317c;
        case 0x193180u: goto label_193180;
        case 0x193184u: goto label_193184;
        case 0x193188u: goto label_193188;
        case 0x19318cu: goto label_19318c;
        case 0x193190u: goto label_193190;
        case 0x193194u: goto label_193194;
        case 0x193198u: goto label_193198;
        case 0x19319cu: goto label_19319c;
        case 0x1931a0u: goto label_1931a0;
        case 0x1931a4u: goto label_1931a4;
        case 0x1931a8u: goto label_1931a8;
        case 0x1931acu: goto label_1931ac;
        case 0x1931b0u: goto label_1931b0;
        case 0x1931b4u: goto label_1931b4;
        case 0x1931b8u: goto label_1931b8;
        case 0x1931bcu: goto label_1931bc;
        case 0x1931c0u: goto label_1931c0;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931c8u: goto label_1931c8;
        case 0x1931ccu: goto label_1931cc;
        case 0x1931d0u: goto label_1931d0;
        case 0x1931d4u: goto label_1931d4;
        case 0x1931d8u: goto label_1931d8;
        case 0x1931dcu: goto label_1931dc;
        case 0x1931e0u: goto label_1931e0;
        case 0x1931e4u: goto label_1931e4;
        case 0x1931e8u: goto label_1931e8;
        case 0x1931ecu: goto label_1931ec;
        case 0x1931f0u: goto label_1931f0;
        case 0x1931f4u: goto label_1931f4;
        default: break;
    }

    ctx->pc = 0x192f58u;

label_192f58:
    // 0x192f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_192f5c:
    // 0x192f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_192f60:
    // 0x192f60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x192f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192f64:
    // 0x192f64: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x192f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_192f68:
    // 0x192f68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x192f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_192f6c:
    // 0x192f6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x192f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_192f70:
    // 0x192f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192f74:
    // 0x192f74: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x192f74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_192f78:
    // 0x192f78: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x192f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_192f7c:
    // 0x192f7c: 0x2631df30  addiu       $s1, $s1, -0x20D0
    ctx->pc = 0x192f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958896));
label_192f80:
    // 0x192f80: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x192f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_192f84:
    // 0x192f84: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x192f84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_192f88:
    // 0x192f88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x192f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_192f8c:
    // 0x192f8c: 0x0  nop
    ctx->pc = 0x192f8cu;
    // NOP
label_192f90:
    // 0x192f90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x192f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_192f94:
    // 0x192f94: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x192f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_192f98:
    // 0x192f98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x192f98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192f9c:
    // 0x192f9c: 0x0  nop
    ctx->pc = 0x192f9cu;
    // NOP
label_192fa0:
    // 0x192fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192fa4:
    // 0x192fa4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x192fa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192fa8:
    // 0x192fa8: 0x0  nop
    ctx->pc = 0x192fa8u;
    // NOP
label_192fac:
    // 0x192fac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_192fb0:
    // 0x192fb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x192fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_192fb4:
    // 0x192fb4: 0x0  nop
    ctx->pc = 0x192fb4u;
    // NOP
label_192fb8:
    // 0x192fb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192fbc:
    // 0x192fbc: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x192fbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_192fc0:
    // 0x192fc0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x192fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_192fc4:
    // 0x192fc4: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x192fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_192fc8:
    // 0x192fc8: 0xe622002c  swc1        $f2, 0x2C($s1)
    ctx->pc = 0x192fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_192fcc:
    // 0x192fcc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x192fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_192fd0:
    // 0x192fd0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x192fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_192fd4:
    // 0x192fd4: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x192fd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_192fd8:
    // 0x192fd8: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x192fd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_192fdc:
    // 0x192fdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x192fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_192fe0:
    // 0x192fe0: 0x0  nop
    ctx->pc = 0x192fe0u;
    // NOP
label_192fe4:
    // 0x192fe4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x192fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_192fe8:
    // 0x192fe8: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x192fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_192fec:
    // 0x192fec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x192fecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ff0:
    // 0x192ff0: 0x0  nop
    ctx->pc = 0x192ff0u;
    // NOP
label_192ff4:
    // 0x192ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192ff8:
    // 0x192ff8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x192ff8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192ffc:
    // 0x192ffc: 0x0  nop
    ctx->pc = 0x192ffcu;
    // NOP
label_193000:
    // 0x193000: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193004:
    // 0x193004: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x193004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193008:
    // 0x193008: 0x0  nop
    ctx->pc = 0x193008u;
    // NOP
label_19300c:
    // 0x19300c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19300cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_193010:
    // 0x193010: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x193010u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_193014:
    // 0x193014: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x193014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_193018:
    // 0x193018: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x193018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_19301c:
    // 0x19301c: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x19301cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_193020:
    // 0x193020: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_193024:
    // 0x193024: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x193024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_193028:
    // 0x193028: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x193028u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_19302c:
    // 0x19302c: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x19302cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_193030:
    // 0x193030: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x193030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193034:
    // 0x193034: 0x0  nop
    ctx->pc = 0x193034u;
    // NOP
label_193038:
    // 0x193038: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_19303c:
    // 0x19303c: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x19303cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_193040:
    // 0x193040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x193040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193044:
    // 0x193044: 0x0  nop
    ctx->pc = 0x193044u;
    // NOP
label_193048:
    // 0x193048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19304c:
    // 0x19304c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x19304cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193050:
    // 0x193050: 0x0  nop
    ctx->pc = 0x193050u;
    // NOP
label_193054:
    // 0x193054: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193058:
    // 0x193058: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x193058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19305c:
    // 0x19305c: 0x0  nop
    ctx->pc = 0x19305cu;
    // NOP
label_193060:
    // 0x193060: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_193064:
    // 0x193064: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x193064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_193068:
    // 0x193068: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x193068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_19306c:
    // 0x19306c: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x19306cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_193070:
    // 0x193070: 0xe4a2002c  swc1        $f2, 0x2C($a1)
    ctx->pc = 0x193070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_193074:
    // 0x193074: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x193074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_193078:
    // 0x193078: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x193078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_19307c:
    // 0x19307c: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x19307cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_193080:
    // 0x193080: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x193080u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_193084:
    // 0x193084: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x193084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193088:
    // 0x193088: 0x0  nop
    ctx->pc = 0x193088u;
    // NOP
label_19308c:
    // 0x19308c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_193090:
    // 0x193090: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x193090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_193094:
    // 0x193094: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x193094u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193098:
    // 0x193098: 0x0  nop
    ctx->pc = 0x193098u;
    // NOP
label_19309c:
    // 0x19309c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1930a0:
    // 0x1930a0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1930a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1930a4:
    // 0x1930a4: 0x0  nop
    ctx->pc = 0x1930a4u;
    // NOP
label_1930a8:
    // 0x1930a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1930a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1930ac:
    // 0x1930ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1930acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1930b0:
    // 0x1930b0: 0x0  nop
    ctx->pc = 0x1930b0u;
    // NOP
label_1930b4:
    // 0x1930b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1930b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1930b8:
    // 0x1930b8: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1930b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1930bc:
    // 0x1930bc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1930bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1930c0:
    // 0x1930c0: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1930c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1930c4:
    // 0x1930c4: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x1930c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1930c8:
    // 0x1930c8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1930c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_1930cc:
    // 0x1930cc: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x1930ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_1930d0:
    // 0x1930d0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1930d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1930d4:
    // 0x1930d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1930d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1930d8:
    // 0x1930d8: 0x40f809  jalr        $v0
label_1930dc:
    if (ctx->pc == 0x1930DCu) {
        ctx->pc = 0x1930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D8u;
        // 0x1930dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930E0u;
        goto label_1930e0;
    }
    ctx->pc = 0x1930D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1930E0u);
        ctx->pc = 0x1930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D8u;
        // 0x1930dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930D8u, 0x1930E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930E0u;
label_1930e0:
    // 0x1930e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1930e4:
    // 0x1930e4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1930e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1930e8:
    // 0x1930e8: 0x40f809  jalr        $v0
label_1930ec:
    if (ctx->pc == 0x1930ECu) {
        ctx->pc = 0x1930ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E8u;
        // 0x1930ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930F0u;
        goto label_1930f0;
    }
    ctx->pc = 0x1930E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1930F0u);
        ctx->pc = 0x1930ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E8u;
        // 0x1930ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930E8u, 0x1930F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930F0u;
label_1930f0:
    // 0x1930f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1930f4:
    // 0x1930f4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1930f8:
    // 0x1930f8: 0x40f809  jalr        $v0
label_1930fc:
    if (ctx->pc == 0x1930FCu) {
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193100u;
        goto label_193100;
    }
    ctx->pc = 0x1930F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193100u);
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930F8u, 0x193100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193100u;
label_193100:
    // 0x193100: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193104:
    // 0x193104: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_193108:
    // 0x193108: 0x40f809  jalr        $v0
label_19310c:
    if (ctx->pc == 0x19310Cu) {
        ctx->pc = 0x19310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193108u;
        // 0x19310c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193110u;
        goto label_193110;
    }
    ctx->pc = 0x193108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193110u);
        ctx->pc = 0x19310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193108u;
        // 0x19310c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193108u, 0x193110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193110u;
label_193110:
    // 0x193110: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193114:
    // 0x193114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_193118:
    // 0x193118: 0x40f809  jalr        $v0
label_19311c:
    if (ctx->pc == 0x19311Cu) {
        ctx->pc = 0x19311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193118u;
        // 0x19311c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193120u;
        goto label_193120;
    }
    ctx->pc = 0x193118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193120u);
        ctx->pc = 0x19311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193118u;
        // 0x19311c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193118u, 0x193120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193120u;
label_193120:
    // 0x193120: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193124:
    // 0x193124: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_193128:
    // 0x193128: 0x40f809  jalr        $v0
label_19312c:
    if (ctx->pc == 0x19312Cu) {
        ctx->pc = 0x19312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193128u;
        // 0x19312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193130u;
        goto label_193130;
    }
    ctx->pc = 0x193128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193130u);
        ctx->pc = 0x19312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193128u;
        // 0x19312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193128u, 0x193130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193130u;
label_193130:
    // 0x193130: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193134:
    // 0x193134: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_193138:
    // 0x193138: 0x40f809  jalr        $v0
label_19313c:
    if (ctx->pc == 0x19313Cu) {
        ctx->pc = 0x19313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193138u;
        // 0x19313c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193140u;
        goto label_193140;
    }
    ctx->pc = 0x193138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193140u);
        ctx->pc = 0x19313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193138u;
        // 0x19313c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193138u, 0x193140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193140u;
label_193140:
    // 0x193140: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193144:
    // 0x193144: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_193148:
    // 0x193148: 0x40f809  jalr        $v0
label_19314c:
    if (ctx->pc == 0x19314Cu) {
        ctx->pc = 0x19314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193148u;
        // 0x19314c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193150u;
        goto label_193150;
    }
    ctx->pc = 0x193148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193150u);
        ctx->pc = 0x19314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193148u;
        // 0x19314c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193148u, 0x193150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193150u;
label_193150:
    // 0x193150: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x193150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_193154:
    // 0x193154: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_193158:
    // 0x193158: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19315c:
    // 0x19315c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x19315cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_193160:
    // 0x193160: 0x24e7cdd8  addiu       $a3, $a3, -0x3228
    ctx->pc = 0x193160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954456));
label_193164:
    // 0x193164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193168:
    // 0x193168: 0x40f809  jalr        $v0
label_19316c:
    if (ctx->pc == 0x19316Cu) {
        ctx->pc = 0x19316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193168u;
        // 0x19316c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193170u;
        goto label_193170;
    }
    ctx->pc = 0x193168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193170u);
        ctx->pc = 0x19316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193168u;
        // 0x19316c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193168u, 0x193170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193170u;
label_193170:
    // 0x193170: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193174:
    // 0x193174: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_193178:
    // 0x193178: 0x40f809  jalr        $v0
label_19317c:
    if (ctx->pc == 0x19317Cu) {
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193180u;
        goto label_193180;
    }
    ctx->pc = 0x193178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193180u);
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193178u, 0x193180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193180u;
label_193180:
    // 0x193180: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193184:
    // 0x193184: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_193188:
    // 0x193188: 0x40f809  jalr        $v0
label_19318c:
    if (ctx->pc == 0x19318Cu) {
        ctx->pc = 0x19318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193188u;
        // 0x19318c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193190u;
        goto label_193190;
    }
    ctx->pc = 0x193188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193190u);
        ctx->pc = 0x19318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193188u;
        // 0x19318c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193188u, 0x193190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193190u;
label_193190:
    // 0x193190: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193194:
    // 0x193194: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_193198:
    // 0x193198: 0x40f809  jalr        $v0
label_19319c:
    if (ctx->pc == 0x19319Cu) {
        ctx->pc = 0x19319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193198u;
        // 0x19319c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931A0u;
        goto label_1931a0;
    }
    ctx->pc = 0x193198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1931A0u);
        ctx->pc = 0x19319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193198u;
        // 0x19319c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193198u, 0x1931A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931A0u;
label_1931a0:
    // 0x1931a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1931a4:
    // 0x1931a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1931a8:
    // 0x1931a8: 0x40f809  jalr        $v0
label_1931ac:
    if (ctx->pc == 0x1931ACu) {
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931B0u;
        goto label_1931b0;
    }
    ctx->pc = 0x1931A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1931B0u);
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931A8u, 0x1931B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931B0u;
label_1931b0:
    // 0x1931b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1931b4:
    // 0x1931b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1931b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1931b8:
    // 0x1931b8: 0x40f809  jalr        $v0
label_1931bc:
    if (ctx->pc == 0x1931BCu) {
        ctx->pc = 0x1931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931B8u;
        // 0x1931bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931C0u;
        goto label_1931c0;
    }
    ctx->pc = 0x1931B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1931C0u);
        ctx->pc = 0x1931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931B8u;
        // 0x1931bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931B8u, 0x1931C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931C0u;
label_1931c0:
    // 0x1931c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1931c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1931c4:
    // 0x1931c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1931c8:
    // 0x1931c8: 0x40f809  jalr        $v0
label_1931cc:
    if (ctx->pc == 0x1931CCu) {
        ctx->pc = 0x1931CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C8u;
        // 0x1931cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931D0u;
        goto label_1931d0;
    }
    ctx->pc = 0x1931C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1931D0u);
        ctx->pc = 0x1931CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C8u;
        // 0x1931cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931C8u, 0x1931D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931D0u;
label_1931d0:
    // 0x1931d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1931d4:
    // 0x1931d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1931d8:
    // 0x1931d8: 0x40f809  jalr        $v0
label_1931dc:
    if (ctx->pc == 0x1931DCu) {
        ctx->pc = 0x1931DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931D8u;
        // 0x1931dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931E0u;
        goto label_1931e0;
    }
    ctx->pc = 0x1931D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1931E0u);
        ctx->pc = 0x1931DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931D8u;
        // 0x1931dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931D8u, 0x1931E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931E0u;
label_1931e0:
    // 0x1931e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1931e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1931e4:
    // 0x1931e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1931e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1931e8:
    // 0x1931e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1931e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1931ec:
    // 0x1931ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1931ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1931f0:
    // 0x1931f0: 0x3e00008  jr          $ra
label_1931f4:
    if (ctx->pc == 0x1931F4u) {
        ctx->pc = 0x1931F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931F0u;
        // 0x1931f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931F8u;
        goto label_fallthrough_0x1931f0;
    }
    ctx->pc = 0x1931F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1931F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931F0u;
        // 0x1931f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1931f0:
    ctx->pc = 0x1931F8u;
}
