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

// Function: sub_002B7E80
// Address: 0x2b7e80 - 0x2b8120
void sub_002B7E80_0x2b7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E80_0x2b7e80");
#endif

    switch (ctx->pc) {
        case 0x2b7e80u: goto label_2b7e80;
        case 0x2b7e84u: goto label_2b7e84;
        case 0x2b7e88u: goto label_2b7e88;
        case 0x2b7e8cu: goto label_2b7e8c;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7e94u: goto label_2b7e94;
        case 0x2b7e98u: goto label_2b7e98;
        case 0x2b7e9cu: goto label_2b7e9c;
        case 0x2b7ea0u: goto label_2b7ea0;
        case 0x2b7ea4u: goto label_2b7ea4;
        case 0x2b7ea8u: goto label_2b7ea8;
        case 0x2b7eacu: goto label_2b7eac;
        case 0x2b7eb0u: goto label_2b7eb0;
        case 0x2b7eb4u: goto label_2b7eb4;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ebcu: goto label_2b7ebc;
        case 0x2b7ec0u: goto label_2b7ec0;
        case 0x2b7ec4u: goto label_2b7ec4;
        case 0x2b7ec8u: goto label_2b7ec8;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b7ed0u: goto label_2b7ed0;
        case 0x2b7ed4u: goto label_2b7ed4;
        case 0x2b7ed8u: goto label_2b7ed8;
        case 0x2b7edcu: goto label_2b7edc;
        case 0x2b7ee0u: goto label_2b7ee0;
        case 0x2b7ee4u: goto label_2b7ee4;
        case 0x2b7ee8u: goto label_2b7ee8;
        case 0x2b7eecu: goto label_2b7eec;
        case 0x2b7ef0u: goto label_2b7ef0;
        case 0x2b7ef4u: goto label_2b7ef4;
        case 0x2b7ef8u: goto label_2b7ef8;
        case 0x2b7efcu: goto label_2b7efc;
        case 0x2b7f00u: goto label_2b7f00;
        case 0x2b7f04u: goto label_2b7f04;
        case 0x2b7f08u: goto label_2b7f08;
        case 0x2b7f0cu: goto label_2b7f0c;
        case 0x2b7f10u: goto label_2b7f10;
        case 0x2b7f14u: goto label_2b7f14;
        case 0x2b7f18u: goto label_2b7f18;
        case 0x2b7f1cu: goto label_2b7f1c;
        case 0x2b7f20u: goto label_2b7f20;
        case 0x2b7f24u: goto label_2b7f24;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7f2cu: goto label_2b7f2c;
        case 0x2b7f30u: goto label_2b7f30;
        case 0x2b7f34u: goto label_2b7f34;
        case 0x2b7f38u: goto label_2b7f38;
        case 0x2b7f3cu: goto label_2b7f3c;
        case 0x2b7f40u: goto label_2b7f40;
        case 0x2b7f44u: goto label_2b7f44;
        case 0x2b7f48u: goto label_2b7f48;
        case 0x2b7f4cu: goto label_2b7f4c;
        case 0x2b7f50u: goto label_2b7f50;
        case 0x2b7f54u: goto label_2b7f54;
        case 0x2b7f58u: goto label_2b7f58;
        case 0x2b7f5cu: goto label_2b7f5c;
        case 0x2b7f60u: goto label_2b7f60;
        case 0x2b7f64u: goto label_2b7f64;
        case 0x2b7f68u: goto label_2b7f68;
        case 0x2b7f6cu: goto label_2b7f6c;
        case 0x2b7f70u: goto label_2b7f70;
        case 0x2b7f74u: goto label_2b7f74;
        case 0x2b7f78u: goto label_2b7f78;
        case 0x2b7f7cu: goto label_2b7f7c;
        case 0x2b7f80u: goto label_2b7f80;
        case 0x2b7f84u: goto label_2b7f84;
        case 0x2b7f88u: goto label_2b7f88;
        case 0x2b7f8cu: goto label_2b7f8c;
        case 0x2b7f90u: goto label_2b7f90;
        case 0x2b7f94u: goto label_2b7f94;
        case 0x2b7f98u: goto label_2b7f98;
        case 0x2b7f9cu: goto label_2b7f9c;
        case 0x2b7fa0u: goto label_2b7fa0;
        case 0x2b7fa4u: goto label_2b7fa4;
        case 0x2b7fa8u: goto label_2b7fa8;
        case 0x2b7facu: goto label_2b7fac;
        case 0x2b7fb0u: goto label_2b7fb0;
        case 0x2b7fb4u: goto label_2b7fb4;
        case 0x2b7fb8u: goto label_2b7fb8;
        case 0x2b7fbcu: goto label_2b7fbc;
        case 0x2b7fc0u: goto label_2b7fc0;
        case 0x2b7fc4u: goto label_2b7fc4;
        case 0x2b7fc8u: goto label_2b7fc8;
        case 0x2b7fccu: goto label_2b7fcc;
        case 0x2b7fd0u: goto label_2b7fd0;
        case 0x2b7fd4u: goto label_2b7fd4;
        case 0x2b7fd8u: goto label_2b7fd8;
        case 0x2b7fdcu: goto label_2b7fdc;
        case 0x2b7fe0u: goto label_2b7fe0;
        case 0x2b7fe4u: goto label_2b7fe4;
        case 0x2b7fe8u: goto label_2b7fe8;
        case 0x2b7fecu: goto label_2b7fec;
        case 0x2b7ff0u: goto label_2b7ff0;
        case 0x2b7ff4u: goto label_2b7ff4;
        case 0x2b7ff8u: goto label_2b7ff8;
        case 0x2b7ffcu: goto label_2b7ffc;
        case 0x2b8000u: goto label_2b8000;
        case 0x2b8004u: goto label_2b8004;
        case 0x2b8008u: goto label_2b8008;
        case 0x2b800cu: goto label_2b800c;
        case 0x2b8010u: goto label_2b8010;
        case 0x2b8014u: goto label_2b8014;
        case 0x2b8018u: goto label_2b8018;
        case 0x2b801cu: goto label_2b801c;
        case 0x2b8020u: goto label_2b8020;
        case 0x2b8024u: goto label_2b8024;
        case 0x2b8028u: goto label_2b8028;
        case 0x2b802cu: goto label_2b802c;
        case 0x2b8030u: goto label_2b8030;
        case 0x2b8034u: goto label_2b8034;
        case 0x2b8038u: goto label_2b8038;
        case 0x2b803cu: goto label_2b803c;
        case 0x2b8040u: goto label_2b8040;
        case 0x2b8044u: goto label_2b8044;
        case 0x2b8048u: goto label_2b8048;
        case 0x2b804cu: goto label_2b804c;
        case 0x2b8050u: goto label_2b8050;
        case 0x2b8054u: goto label_2b8054;
        case 0x2b8058u: goto label_2b8058;
        case 0x2b805cu: goto label_2b805c;
        case 0x2b8060u: goto label_2b8060;
        case 0x2b8064u: goto label_2b8064;
        case 0x2b8068u: goto label_2b8068;
        case 0x2b806cu: goto label_2b806c;
        case 0x2b8070u: goto label_2b8070;
        case 0x2b8074u: goto label_2b8074;
        case 0x2b8078u: goto label_2b8078;
        case 0x2b807cu: goto label_2b807c;
        case 0x2b8080u: goto label_2b8080;
        case 0x2b8084u: goto label_2b8084;
        case 0x2b8088u: goto label_2b8088;
        case 0x2b808cu: goto label_2b808c;
        case 0x2b8090u: goto label_2b8090;
        case 0x2b8094u: goto label_2b8094;
        case 0x2b8098u: goto label_2b8098;
        case 0x2b809cu: goto label_2b809c;
        case 0x2b80a0u: goto label_2b80a0;
        case 0x2b80a4u: goto label_2b80a4;
        case 0x2b80a8u: goto label_2b80a8;
        case 0x2b80acu: goto label_2b80ac;
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80b4u: goto label_2b80b4;
        case 0x2b80b8u: goto label_2b80b8;
        case 0x2b80bcu: goto label_2b80bc;
        case 0x2b80c0u: goto label_2b80c0;
        case 0x2b80c4u: goto label_2b80c4;
        case 0x2b80c8u: goto label_2b80c8;
        case 0x2b80ccu: goto label_2b80cc;
        case 0x2b80d0u: goto label_2b80d0;
        case 0x2b80d4u: goto label_2b80d4;
        case 0x2b80d8u: goto label_2b80d8;
        case 0x2b80dcu: goto label_2b80dc;
        case 0x2b80e0u: goto label_2b80e0;
        case 0x2b80e4u: goto label_2b80e4;
        case 0x2b80e8u: goto label_2b80e8;
        case 0x2b80ecu: goto label_2b80ec;
        case 0x2b80f0u: goto label_2b80f0;
        case 0x2b80f4u: goto label_2b80f4;
        case 0x2b80f8u: goto label_2b80f8;
        case 0x2b80fcu: goto label_2b80fc;
        case 0x2b8100u: goto label_2b8100;
        case 0x2b8104u: goto label_2b8104;
        case 0x2b8108u: goto label_2b8108;
        case 0x2b810cu: goto label_2b810c;
        case 0x2b8110u: goto label_2b8110;
        case 0x2b8114u: goto label_2b8114;
        case 0x2b8118u: goto label_2b8118;
        case 0x2b811cu: goto label_2b811c;
        default: break;
    }

    ctx->pc = 0x2b7e80u;

label_2b7e80:
    // 0x2b7e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b7e84:
    // 0x2b7e84: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2b7e88:
    // 0x2b7e88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2b7e8c:
    // 0x2b7e8c: 0x24c61038  addiu       $a2, $a2, 0x1038
    ctx->pc = 0x2b7e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4152));
label_2b7e90:
    // 0x2b7e90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b7e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2b7e94:
    // 0x2b7e94: 0x3c100400  lui         $s0, 0x400
    ctx->pc = 0x2b7e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1024 << 16));
label_2b7e98:
    // 0x2b7e98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2b7e9c:
    // 0x2b7e9c: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x2b7e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
label_2b7ea0:
    // 0x2b7ea0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b7ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2b7ea4:
    // 0x2b7ea4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b7ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ea8:
    // 0x2b7ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b7eac:
    // 0x2b7eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7eb0:
    // 0x2b7eb0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b7eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2b7eb4:
    // 0x2b7eb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b7eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b7eb8:
    // 0x2b7eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b7eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7ebc:
    // 0x2b7ebc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b7ec0:
    // 0x2b7ec0: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x2b7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
label_2b7ec4:
    // 0x2b7ec4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b7ec8:
    // 0x2b7ec8: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x2b7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
label_2b7ecc:
    // 0x2b7ecc: 0xc480012c  lwc1        $f0, 0x12C($a0)
    ctx->pc = 0x2b7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b7ed0:
    // 0x2b7ed0: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x2b7ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_2b7ed4:
    // 0x2b7ed4: 0x90820265  lbu         $v0, 0x265($a0)
    ctx->pc = 0x2b7ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 613)));
label_2b7ed8:
    // 0x2b7ed8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b7ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b7edc:
    // 0x2b7edc: 0xa2620031  sb          $v0, 0x31($s3)
    ctx->pc = 0x2b7edcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 49), (uint8_t)GPR_U32(ctx, 2));
label_2b7ee0:
    // 0x2b7ee0: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x2b7ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_2b7ee4:
    // 0x2b7ee4: 0xa263003b  sb          $v1, 0x3B($s3)
    ctx->pc = 0x2b7ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 59), (uint8_t)GPR_U32(ctx, 3));
label_2b7ee8:
    // 0x2b7ee8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b7ee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7eec:
    // 0x2b7eec: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2b7eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_2b7ef0:
    // 0x2b7ef0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b7ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b7ef4:
    // 0x2b7ef4: 0xa2620032  sb          $v0, 0x32($s3)
    ctx->pc = 0x2b7ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 2));
label_2b7ef8:
    // 0x2b7ef8: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2b7ef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7efc:
    // 0x2b7efc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2b7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2b7f00:
    // 0x2b7f00: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b7f00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b7f04:
    // 0x2b7f04: 0xa2630033  sb          $v1, 0x33($s3)
    ctx->pc = 0x2b7f04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 51), (uint8_t)GPR_U32(ctx, 3));
label_2b7f08:
    // 0x2b7f08: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b7f08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7f0c:
    // 0x2b7f0c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2b7f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_2b7f10:
    // 0x2b7f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b7f14:
    // 0x2b7f14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b7f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b7f18:
    // 0x2b7f18: 0xa2620034  sb          $v0, 0x34($s3)
    ctx->pc = 0x2b7f18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 2));
label_2b7f1c:
    // 0x2b7f1c: 0x924300e0  lbu         $v1, 0xE0($s2)
    ctx->pc = 0x2b7f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7f20:
    // 0x2b7f20: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x2b7f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
label_2b7f24:
    // 0x2b7f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b7f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2b7f28:
    // 0x2b7f28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b7f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2b7f2c:
    // 0x2b7f2c: 0xa2630035  sb          $v1, 0x35($s3)
    ctx->pc = 0x2b7f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 3));
label_2b7f30:
    // 0x2b7f30: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b7f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7f34:
    // 0x2b7f34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2b7f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_2b7f38:
    // 0x2b7f38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b7f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b7f3c:
    // 0x2b7f3c: 0xa2620036  sb          $v0, 0x36($s3)
    ctx->pc = 0x2b7f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 2));
label_2b7f40:
    // 0x2b7f40: 0x924300e1  lbu         $v1, 0xE1($s2)
    ctx->pc = 0x2b7f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
label_2b7f44:
    // 0x2b7f44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b7f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2b7f48:
    // 0x2b7f48: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b7f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2b7f4c:
    // 0x2b7f4c: 0xa2630037  sb          $v1, 0x37($s3)
    ctx->pc = 0x2b7f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
label_2b7f50:
    // 0x2b7f50: 0xac860208  sw          $a2, 0x208($a0)
    ctx->pc = 0x2b7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 6));
label_2b7f54:
    // 0x2b7f54: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b7f58:
    // 0x2b7f58: 0xe441012c  swc1        $f1, 0x12C($v0)
    ctx->pc = 0x2b7f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2b7f5c:
    // 0x2b7f5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b7f60:
    // 0x2b7f60: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2b7f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
label_2b7f64:
    // 0x2b7f64: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b7f68:
    // 0x2b7f68: 0xc0a22c6  jal         func_288B18
label_2b7f6c:
    if (ctx->pc == 0x2B7F6Cu) {
        ctx->pc = 0x2B7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F68u;
        // 0x2b7f6c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F70u;
        goto label_2b7f70;
    }
    ctx->pc = 0x2B7F68u;
    SET_GPR_U32(ctx, 31, 0x2B7F70u);
    ctx->pc = 0x2B7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F68u;
    // 0x2b7f6c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2B7F68u, 0x2B7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F70u;
label_2b7f70:
    // 0x2b7f70: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b7f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b7f74:
    // 0x2b7f74: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2b7f78:
    // 0x2b7f78: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2b7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2b7f7c:
    // 0x2b7f7c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b7f80:
    // 0x2b7f80: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x2b7f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2b7f84:
    // 0x2b7f84: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2b7f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2b7f88:
    // 0x2b7f88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b7f8c:
    // 0x2b7f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b7f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f90:
    // 0x2b7f90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b7f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2b7f94:
    // 0x2b7f94: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b7f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b7f98:
    // 0x2b7f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f9c:
    // 0x2b7f9c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2b7f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2b7fa0:
    // 0x2b7fa0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2b7fa4:
    // 0x2b7fa4: 0xc087612  jal         func_21D848
label_2b7fa8:
    if (ctx->pc == 0x2B7FA8u) {
        ctx->pc = 0x2B7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FA4u;
        // 0x2b7fa8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FACu;
        goto label_2b7fac;
    }
    ctx->pc = 0x2B7FA4u;
    SET_GPR_U32(ctx, 31, 0x2B7FACu);
    ctx->pc = 0x2B7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FA4u;
    // 0x2b7fa8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2B7FA4u, 0x2B7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FACu;
label_2b7fac:
    // 0x2b7fac: 0xc089bdc  jal         func_226F70
label_2b7fb0:
    if (ctx->pc == 0x2B7FB0u) {
        ctx->pc = 0x2B7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FACu;
        // 0x2b7fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FB4u;
        goto label_2b7fb4;
    }
    ctx->pc = 0x2B7FACu;
    SET_GPR_U32(ctx, 31, 0x2B7FB4u);
    ctx->pc = 0x2B7FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FACu;
    // 0x2b7fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B7FACu, 0x2B7FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FB4u;
label_2b7fb4:
    // 0x2b7fb4: 0xc089000  jal         func_224000
label_2b7fb8:
    if (ctx->pc == 0x2B7FB8u) {
        ctx->pc = 0x2B7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FB4u;
        // 0x2b7fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FBCu;
        goto label_2b7fbc;
    }
    ctx->pc = 0x2B7FB4u;
    SET_GPR_U32(ctx, 31, 0x2B7FBCu);
    ctx->pc = 0x2B7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FB4u;
    // 0x2b7fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2B7FB4u, 0x2B7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FBCu;
label_2b7fbc:
    // 0x2b7fbc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b7fc0:
    if (ctx->pc == 0x2B7FC0u) {
        ctx->pc = 0x2B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FBCu;
        // 0x2b7fc0: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FC4u;
        goto label_2b7fc4;
    }
    ctx->pc = 0x2B7FBCu;
    {
        const bool branch_taken_0x2b7fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fbc) {
            ctx->pc = 0x2B7FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7FBCu;
            // 0x2b7fc0: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7FD0u;
            goto label_2b7fd0;
        }
    }
    ctx->pc = 0x2B7FC4u;
label_2b7fc4:
    // 0x2b7fc4: 0xc095fce  jal         func_257F38
label_2b7fc8:
    if (ctx->pc == 0x2B7FC8u) {
        ctx->pc = 0x2B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FC4u;
        // 0x2b7fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FCCu;
        goto label_2b7fcc;
    }
    ctx->pc = 0x2B7FC4u;
    SET_GPR_U32(ctx, 31, 0x2B7FCCu);
    ctx->pc = 0x2B7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FC4u;
    // 0x2b7fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2B7FC4u, 0x2B7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FCCu;
label_2b7fcc:
    // 0x2b7fcc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2b7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2b7fd0:
    // 0x2b7fd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fd4:
    // 0x2b7fd4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b7fd8:
    // 0x2b7fd8: 0xc0e409a  jal         func_390268
label_2b7fdc:
    if (ctx->pc == 0x2B7FDCu) {
        ctx->pc = 0x2B7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FD8u;
        // 0x2b7fdc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FE0u;
        goto label_2b7fe0;
    }
    ctx->pc = 0x2B7FD8u;
    SET_GPR_U32(ctx, 31, 0x2B7FE0u);
    ctx->pc = 0x2B7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FD8u;
    // 0x2b7fdc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B7FD8u, 0x2B7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FE0u;
label_2b7fe0:
    // 0x2b7fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fe4:
    // 0x2b7fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fe8:
    // 0x2b7fe8: 0xc0a352c  jal         func_28D4B0
label_2b7fec:
    if (ctx->pc == 0x2B7FECu) {
        ctx->pc = 0x2B7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FE8u;
        // 0x2b7fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FF0u;
        goto label_2b7ff0;
    }
    ctx->pc = 0x2B7FE8u;
    SET_GPR_U32(ctx, 31, 0x2B7FF0u);
    ctx->pc = 0x2B7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FE8u;
    // 0x2b7fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B7FE8u, 0x2B7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FF0u;
label_2b7ff0:
    // 0x2b7ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ff4:
    // 0x2b7ff4: 0x5200003e  beql        $s0, $zero, . + 4 + (0x3E << 2)
label_2b7ff8:
    if (ctx->pc == 0x2B7FF8u) {
        ctx->pc = 0x2B7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FF4u;
        // 0x2b7ff8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FFCu;
        goto label_2b7ffc;
    }
    ctx->pc = 0x2B7FF4u;
    {
        const bool branch_taken_0x2b7ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ff4) {
            ctx->pc = 0x2B7FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7FF4u;
            // 0x2b7ff8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B7FFCu;
label_2b7ffc:
    // 0x2b7ffc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2b7ffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2b8000:
    // 0x2b8000: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b8000u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2b8004:
    // 0x2b8004: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2b8008:
    if (ctx->pc == 0x2B8008u) {
        ctx->pc = 0x2B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8004u;
        // 0x2b8008: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B800Cu;
        goto label_2b800c;
    }
    ctx->pc = 0x2B8004u;
    {
        const bool branch_taken_0x2b8004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8004u;
        // 0x2b8008: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8004) {
            ctx->pc = 0x2B80ECu;
            goto label_2b80ec;
        }
    }
    ctx->pc = 0x2B800Cu;
label_2b800c:
    // 0x2b800c: 0xc089f76  jal         func_227DD8
label_2b8010:
    if (ctx->pc == 0x2B8010u) {
        ctx->pc = 0x2B8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B800Cu;
        // 0x2b8010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8014u;
        goto label_2b8014;
    }
    ctx->pc = 0x2B800Cu;
    SET_GPR_U32(ctx, 31, 0x2B8014u);
    ctx->pc = 0x2B8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B800Cu;
    // 0x2b8010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2B800Cu, 0x2B8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8014u;
label_2b8014:
    // 0x2b8014: 0x5451001b  bnel        $v0, $s1, . + 4 + (0x1B << 2)
label_2b8018:
    if (ctx->pc == 0x2B8018u) {
        ctx->pc = 0x2B8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8014u;
        // 0x2b8018: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B801Cu;
        goto label_2b801c;
    }
    ctx->pc = 0x2B8014u;
    {
        const bool branch_taken_0x2b8014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b8014) {
            ctx->pc = 0x2B8018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8014u;
            // 0x2b8018: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8084u;
            goto label_2b8084;
        }
    }
    ctx->pc = 0x2B801Cu;
label_2b801c:
    // 0x2b801c: 0xa2710038  sb          $s1, 0x38($s3)
    ctx->pc = 0x2b801cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 17));
label_2b8020:
    // 0x2b8020: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2b8020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2b8024:
    // 0x2b8024: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2b8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2b8028:
    // 0x2b8028: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2b8028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_2b802c:
    // 0x2b802c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8030:
    if (ctx->pc == 0x2B8030u) {
        ctx->pc = 0x2B8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B802Cu;
        // 0x2b8030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8034u;
        goto label_2b8034;
    }
    ctx->pc = 0x2B802Cu;
    {
        const bool branch_taken_0x2b802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B802Cu;
        // 0x2b8030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b802c) {
            ctx->pc = 0x2B8044u;
            goto label_2b8044;
        }
    }
    ctx->pc = 0x2B8034u;
label_2b8034:
    // 0x2b8034: 0xc107444  jal         func_41D110
label_2b8038:
    if (ctx->pc == 0x2B8038u) {
        ctx->pc = 0x2B803Cu;
        goto label_2b803c;
    }
    ctx->pc = 0x2B8034u;
    SET_GPR_U32(ctx, 31, 0x2B803Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2B8034u, 0x2B803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B803Cu;
label_2b803c:
    // 0x2b803c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b803cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8040:
    // 0x2b8040: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x2b8040u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_2b8044:
    // 0x2b8044: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_2b8048:
    if (ctx->pc == 0x2B8048u) {
        ctx->pc = 0x2B8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8044u;
        // 0x2b8048: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B804Cu;
        goto label_2b804c;
    }
    ctx->pc = 0x2B8044u;
    {
        const bool branch_taken_0x2b8044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8044) {
            ctx->pc = 0x2B8048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8044u;
            // 0x2b8048: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B804Cu;
label_2b804c:
    // 0x2b804c: 0xc073a8e  jal         func_1CEA38
label_2b8050:
    if (ctx->pc == 0x2B8050u) {
        ctx->pc = 0x2B8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B804Cu;
        // 0x2b8050: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8054u;
        goto label_2b8054;
    }
    ctx->pc = 0x2B804Cu;
    SET_GPR_U32(ctx, 31, 0x2B8054u);
    ctx->pc = 0x2B8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B804Cu;
    // 0x2b8050: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2B804Cu, 0x2B8054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8054u;
label_2b8054:
    // 0x2b8054: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2b8058:
    if (ctx->pc == 0x2B8058u) {
        ctx->pc = 0x2B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8054u;
        // 0x2b8058: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B805Cu;
        goto label_2b805c;
    }
    ctx->pc = 0x2B8054u;
    {
        const bool branch_taken_0x2b8054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8054u;
        // 0x2b8058: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8054) {
            ctx->pc = 0x2B80ECu;
            goto label_2b80ec;
        }
    }
    ctx->pc = 0x2B805Cu;
label_2b805c:
    // 0x2b805c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b805cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8060:
    // 0x2b8060: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b8060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2b8064:
    // 0x2b8064: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2b8068:
    if (ctx->pc == 0x2B8068u) {
        ctx->pc = 0x2B8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8064u;
        // 0x2b8068: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B806Cu;
        goto label_2b806c;
    }
    ctx->pc = 0x2B8064u;
    {
        const bool branch_taken_0x2b8064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8064) {
            ctx->pc = 0x2B8068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8064u;
            // 0x2b8068: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B806Cu;
label_2b806c:
    // 0x2b806c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b806cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2b8070:
    // 0x2b8070: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8074:
    // 0x2b8074: 0xc07387a  jal         func_1CE1E8
label_2b8078:
    if (ctx->pc == 0x2B8078u) {
        ctx->pc = 0x2B8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8074u;
        // 0x2b8078: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B807Cu;
        goto label_2b807c;
    }
    ctx->pc = 0x2B8074u;
    SET_GPR_U32(ctx, 31, 0x2B807Cu);
    ctx->pc = 0x2B8078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8074u;
    // 0x2b8078: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x2B8074u, 0x2B807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B807Cu;
label_2b807c:
    // 0x2b807c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2b8080:
    if (ctx->pc == 0x2B8080u) {
        ctx->pc = 0x2B8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B807Cu;
        // 0x2b8080: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8084u;
        goto label_2b8084;
    }
    ctx->pc = 0x2B807Cu;
    {
        const bool branch_taken_0x2b807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B807Cu;
        // 0x2b8080: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b807c) {
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B8084u;
label_2b8084:
    // 0x2b8084: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2b8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2b8088:
    // 0x2b8088: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2b8088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_2b808c:
    // 0x2b808c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8090:
    if (ctx->pc == 0x2B8090u) {
        ctx->pc = 0x2B8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B808Cu;
        // 0x2b8090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8094u;
        goto label_2b8094;
    }
    ctx->pc = 0x2B808Cu;
    {
        const bool branch_taken_0x2b808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B808Cu;
        // 0x2b8090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b808c) {
            ctx->pc = 0x2B80A4u;
            goto label_2b80a4;
        }
    }
    ctx->pc = 0x2B8094u;
label_2b8094:
    // 0x2b8094: 0xc107444  jal         func_41D110
label_2b8098:
    if (ctx->pc == 0x2B8098u) {
        ctx->pc = 0x2B809Cu;
        goto label_2b809c;
    }
    ctx->pc = 0x2B8094u;
    SET_GPR_U32(ctx, 31, 0x2B809Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2B8094u, 0x2B809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B809Cu;
label_2b809c:
    // 0x2b809c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b809cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b80a0:
    // 0x2b80a0: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x2b80a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_2b80a4:
    // 0x2b80a4: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_2b80a8:
    if (ctx->pc == 0x2B80A8u) {
        ctx->pc = 0x2B80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80A4u;
        // 0x2b80a8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80ACu;
        goto label_2b80ac;
    }
    ctx->pc = 0x2B80A4u;
    {
        const bool branch_taken_0x2b80a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b80a4) {
            ctx->pc = 0x2B80A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80A4u;
            // 0x2b80a8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B80ACu;
label_2b80ac:
    // 0x2b80ac: 0xc073a8e  jal         func_1CEA38
label_2b80b0:
    if (ctx->pc == 0x2B80B0u) {
        ctx->pc = 0x2B80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80ACu;
        // 0x2b80b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80B4u;
        goto label_2b80b4;
    }
    ctx->pc = 0x2B80ACu;
    SET_GPR_U32(ctx, 31, 0x2B80B4u);
    ctx->pc = 0x2B80B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80ACu;
    // 0x2b80b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2B80ACu, 0x2B80B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80B4u;
label_2b80b4:
    // 0x2b80b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b80b8:
    if (ctx->pc == 0x2B80B8u) {
        ctx->pc = 0x2B80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80B4u;
        // 0x2b80b8: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80BCu;
        goto label_2b80bc;
    }
    ctx->pc = 0x2B80B4u;
    {
        const bool branch_taken_0x2b80b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80B4u;
        // 0x2b80b8: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80b4) {
            ctx->pc = 0x2B80ECu;
            goto label_2b80ec;
        }
    }
    ctx->pc = 0x2B80BCu;
label_2b80bc:
    // 0x2b80bc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b80bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b80c0:
    // 0x2b80c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2b80c4:
    // 0x2b80c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2b80c8:
    if (ctx->pc == 0x2B80C8u) {
        ctx->pc = 0x2B80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80C4u;
        // 0x2b80c8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80CCu;
        goto label_2b80cc;
    }
    ctx->pc = 0x2B80C4u;
    {
        const bool branch_taken_0x2b80c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b80c4) {
            ctx->pc = 0x2B80C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80C4u;
            // 0x2b80c8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B80CCu;
label_2b80cc:
    // 0x2b80cc: 0xc088edc  jal         func_223B70
label_2b80d0:
    if (ctx->pc == 0x2B80D0u) {
        ctx->pc = 0x2B80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80CCu;
        // 0x2b80d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80D4u;
        goto label_2b80d4;
    }
    ctx->pc = 0x2B80CCu;
    SET_GPR_U32(ctx, 31, 0x2B80D4u);
    ctx->pc = 0x2B80D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80CCu;
    // 0x2b80d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2B80CCu, 0x2B80D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80D4u;
label_2b80d4:
    // 0x2b80d4: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_2b80d8:
    if (ctx->pc == 0x2B80D8u) {
        ctx->pc = 0x2B80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80D4u;
        // 0x2b80d8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80DCu;
        goto label_2b80dc;
    }
    ctx->pc = 0x2B80D4u;
    {
        const bool branch_taken_0x2b80d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b80d4) {
            ctx->pc = 0x2B80D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B80D4u;
            // 0x2b80d8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B80F0u;
            goto label_2b80f0;
        }
    }
    ctx->pc = 0x2B80DCu;
label_2b80dc:
    // 0x2b80dc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2b80e0:
    // 0x2b80e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b80e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b80e4:
    // 0x2b80e4: 0xc07387a  jal         func_1CE1E8
label_2b80e8:
    if (ctx->pc == 0x2B80E8u) {
        ctx->pc = 0x2B80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80E4u;
        // 0x2b80e8: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80ECu;
        goto label_2b80ec;
    }
    ctx->pc = 0x2B80E4u;
    SET_GPR_U32(ctx, 31, 0x2B80ECu);
    ctx->pc = 0x2B80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80E4u;
    // 0x2b80e8: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x2B80E4u, 0x2B80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80ECu;
label_2b80ec:
    // 0x2b80ec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2b80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2b80f0:
    // 0x2b80f0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2b80f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b80f4:
    // 0x2b80f4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b80f8:
    // 0x2b80f8: 0x60f809  jalr        $v1
label_2b80fc:
    if (ctx->pc == 0x2B80FCu) {
        ctx->pc = 0x2B80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80F8u;
        // 0x2b80fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8100u;
        goto label_2b8100;
    }
    ctx->pc = 0x2B80F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B8100u);
        ctx->pc = 0x2B80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80F8u;
        // 0x2b80fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B80F8u, 0x2B8100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8100u;
label_2b8100:
    // 0x2b8100: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b8100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8104:
    // 0x2b8104: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b8104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8108:
    // 0x2b8108: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b8108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b810c:
    // 0x2b810c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b810cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8110:
    // 0x2b8110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8114:
    // 0x2b8114: 0x3e00008  jr          $ra
label_2b8118:
    if (ctx->pc == 0x2B8118u) {
        ctx->pc = 0x2B8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8114u;
        // 0x2b8118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B811Cu;
        goto label_2b811c;
    }
    ctx->pc = 0x2B8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8114u;
        // 0x2b8118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B811Cu;
label_2b811c:
    // 0x2b811c: 0x0  nop
    ctx->pc = 0x2b811cu;
    // NOP
    ctx->pc = 0x2b8120u;
}
