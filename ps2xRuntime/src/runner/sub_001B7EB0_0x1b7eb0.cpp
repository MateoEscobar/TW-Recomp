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

// Function: sub_001B7EB0
// Address: 0x1b7eb0 - 0x1b8278
void sub_001B7EB0_0x1b7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7EB0_0x1b7eb0");
#endif

    switch (ctx->pc) {
        case 0x1b7eb0u: goto label_1b7eb0;
        case 0x1b7eb4u: goto label_1b7eb4;
        case 0x1b7eb8u: goto label_1b7eb8;
        case 0x1b7ebcu: goto label_1b7ebc;
        case 0x1b7ec0u: goto label_1b7ec0;
        case 0x1b7ec4u: goto label_1b7ec4;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7eccu: goto label_1b7ecc;
        case 0x1b7ed0u: goto label_1b7ed0;
        case 0x1b7ed4u: goto label_1b7ed4;
        case 0x1b7ed8u: goto label_1b7ed8;
        case 0x1b7edcu: goto label_1b7edc;
        case 0x1b7ee0u: goto label_1b7ee0;
        case 0x1b7ee4u: goto label_1b7ee4;
        case 0x1b7ee8u: goto label_1b7ee8;
        case 0x1b7eecu: goto label_1b7eec;
        case 0x1b7ef0u: goto label_1b7ef0;
        case 0x1b7ef4u: goto label_1b7ef4;
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f04u: goto label_1b7f04;
        case 0x1b7f08u: goto label_1b7f08;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f10u: goto label_1b7f10;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f18u: goto label_1b7f18;
        case 0x1b7f1cu: goto label_1b7f1c;
        case 0x1b7f20u: goto label_1b7f20;
        case 0x1b7f24u: goto label_1b7f24;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f2cu: goto label_1b7f2c;
        case 0x1b7f30u: goto label_1b7f30;
        case 0x1b7f34u: goto label_1b7f34;
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f40u: goto label_1b7f40;
        case 0x1b7f44u: goto label_1b7f44;
        case 0x1b7f48u: goto label_1b7f48;
        case 0x1b7f4cu: goto label_1b7f4c;
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f58u: goto label_1b7f58;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7f60u: goto label_1b7f60;
        case 0x1b7f64u: goto label_1b7f64;
        case 0x1b7f68u: goto label_1b7f68;
        case 0x1b7f6cu: goto label_1b7f6c;
        case 0x1b7f70u: goto label_1b7f70;
        case 0x1b7f74u: goto label_1b7f74;
        case 0x1b7f78u: goto label_1b7f78;
        case 0x1b7f7cu: goto label_1b7f7c;
        case 0x1b7f80u: goto label_1b7f80;
        case 0x1b7f84u: goto label_1b7f84;
        case 0x1b7f88u: goto label_1b7f88;
        case 0x1b7f8cu: goto label_1b7f8c;
        case 0x1b7f90u: goto label_1b7f90;
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7f98u: goto label_1b7f98;
        case 0x1b7f9cu: goto label_1b7f9c;
        case 0x1b7fa0u: goto label_1b7fa0;
        case 0x1b7fa4u: goto label_1b7fa4;
        case 0x1b7fa8u: goto label_1b7fa8;
        case 0x1b7facu: goto label_1b7fac;
        case 0x1b7fb0u: goto label_1b7fb0;
        case 0x1b7fb4u: goto label_1b7fb4;
        case 0x1b7fb8u: goto label_1b7fb8;
        case 0x1b7fbcu: goto label_1b7fbc;
        case 0x1b7fc0u: goto label_1b7fc0;
        case 0x1b7fc4u: goto label_1b7fc4;
        case 0x1b7fc8u: goto label_1b7fc8;
        case 0x1b7fccu: goto label_1b7fcc;
        case 0x1b7fd0u: goto label_1b7fd0;
        case 0x1b7fd4u: goto label_1b7fd4;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b7fdcu: goto label_1b7fdc;
        case 0x1b7fe0u: goto label_1b7fe0;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fe8u: goto label_1b7fe8;
        case 0x1b7fecu: goto label_1b7fec;
        case 0x1b7ff0u: goto label_1b7ff0;
        case 0x1b7ff4u: goto label_1b7ff4;
        case 0x1b7ff8u: goto label_1b7ff8;
        case 0x1b7ffcu: goto label_1b7ffc;
        case 0x1b8000u: goto label_1b8000;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8008u: goto label_1b8008;
        case 0x1b800cu: goto label_1b800c;
        case 0x1b8010u: goto label_1b8010;
        case 0x1b8014u: goto label_1b8014;
        case 0x1b8018u: goto label_1b8018;
        case 0x1b801cu: goto label_1b801c;
        case 0x1b8020u: goto label_1b8020;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b8028u: goto label_1b8028;
        case 0x1b802cu: goto label_1b802c;
        case 0x1b8030u: goto label_1b8030;
        case 0x1b8034u: goto label_1b8034;
        case 0x1b8038u: goto label_1b8038;
        case 0x1b803cu: goto label_1b803c;
        case 0x1b8040u: goto label_1b8040;
        case 0x1b8044u: goto label_1b8044;
        case 0x1b8048u: goto label_1b8048;
        case 0x1b804cu: goto label_1b804c;
        case 0x1b8050u: goto label_1b8050;
        case 0x1b8054u: goto label_1b8054;
        case 0x1b8058u: goto label_1b8058;
        case 0x1b805cu: goto label_1b805c;
        case 0x1b8060u: goto label_1b8060;
        case 0x1b8064u: goto label_1b8064;
        case 0x1b8068u: goto label_1b8068;
        case 0x1b806cu: goto label_1b806c;
        case 0x1b8070u: goto label_1b8070;
        case 0x1b8074u: goto label_1b8074;
        case 0x1b8078u: goto label_1b8078;
        case 0x1b807cu: goto label_1b807c;
        case 0x1b8080u: goto label_1b8080;
        case 0x1b8084u: goto label_1b8084;
        case 0x1b8088u: goto label_1b8088;
        case 0x1b808cu: goto label_1b808c;
        case 0x1b8090u: goto label_1b8090;
        case 0x1b8094u: goto label_1b8094;
        case 0x1b8098u: goto label_1b8098;
        case 0x1b809cu: goto label_1b809c;
        case 0x1b80a0u: goto label_1b80a0;
        case 0x1b80a4u: goto label_1b80a4;
        case 0x1b80a8u: goto label_1b80a8;
        case 0x1b80acu: goto label_1b80ac;
        case 0x1b80b0u: goto label_1b80b0;
        case 0x1b80b4u: goto label_1b80b4;
        case 0x1b80b8u: goto label_1b80b8;
        case 0x1b80bcu: goto label_1b80bc;
        case 0x1b80c0u: goto label_1b80c0;
        case 0x1b80c4u: goto label_1b80c4;
        case 0x1b80c8u: goto label_1b80c8;
        case 0x1b80ccu: goto label_1b80cc;
        case 0x1b80d0u: goto label_1b80d0;
        case 0x1b80d4u: goto label_1b80d4;
        case 0x1b80d8u: goto label_1b80d8;
        case 0x1b80dcu: goto label_1b80dc;
        case 0x1b80e0u: goto label_1b80e0;
        case 0x1b80e4u: goto label_1b80e4;
        case 0x1b80e8u: goto label_1b80e8;
        case 0x1b80ecu: goto label_1b80ec;
        case 0x1b80f0u: goto label_1b80f0;
        case 0x1b80f4u: goto label_1b80f4;
        case 0x1b80f8u: goto label_1b80f8;
        case 0x1b80fcu: goto label_1b80fc;
        case 0x1b8100u: goto label_1b8100;
        case 0x1b8104u: goto label_1b8104;
        case 0x1b8108u: goto label_1b8108;
        case 0x1b810cu: goto label_1b810c;
        case 0x1b8110u: goto label_1b8110;
        case 0x1b8114u: goto label_1b8114;
        case 0x1b8118u: goto label_1b8118;
        case 0x1b811cu: goto label_1b811c;
        case 0x1b8120u: goto label_1b8120;
        case 0x1b8124u: goto label_1b8124;
        case 0x1b8128u: goto label_1b8128;
        case 0x1b812cu: goto label_1b812c;
        case 0x1b8130u: goto label_1b8130;
        case 0x1b8134u: goto label_1b8134;
        case 0x1b8138u: goto label_1b8138;
        case 0x1b813cu: goto label_1b813c;
        case 0x1b8140u: goto label_1b8140;
        case 0x1b8144u: goto label_1b8144;
        case 0x1b8148u: goto label_1b8148;
        case 0x1b814cu: goto label_1b814c;
        case 0x1b8150u: goto label_1b8150;
        case 0x1b8154u: goto label_1b8154;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b815cu: goto label_1b815c;
        case 0x1b8160u: goto label_1b8160;
        case 0x1b8164u: goto label_1b8164;
        case 0x1b8168u: goto label_1b8168;
        case 0x1b816cu: goto label_1b816c;
        case 0x1b8170u: goto label_1b8170;
        case 0x1b8174u: goto label_1b8174;
        case 0x1b8178u: goto label_1b8178;
        case 0x1b817cu: goto label_1b817c;
        case 0x1b8180u: goto label_1b8180;
        case 0x1b8184u: goto label_1b8184;
        case 0x1b8188u: goto label_1b8188;
        case 0x1b818cu: goto label_1b818c;
        case 0x1b8190u: goto label_1b8190;
        case 0x1b8194u: goto label_1b8194;
        case 0x1b8198u: goto label_1b8198;
        case 0x1b819cu: goto label_1b819c;
        case 0x1b81a0u: goto label_1b81a0;
        case 0x1b81a4u: goto label_1b81a4;
        case 0x1b81a8u: goto label_1b81a8;
        case 0x1b81acu: goto label_1b81ac;
        case 0x1b81b0u: goto label_1b81b0;
        case 0x1b81b4u: goto label_1b81b4;
        case 0x1b81b8u: goto label_1b81b8;
        case 0x1b81bcu: goto label_1b81bc;
        case 0x1b81c0u: goto label_1b81c0;
        case 0x1b81c4u: goto label_1b81c4;
        case 0x1b81c8u: goto label_1b81c8;
        case 0x1b81ccu: goto label_1b81cc;
        case 0x1b81d0u: goto label_1b81d0;
        case 0x1b81d4u: goto label_1b81d4;
        case 0x1b81d8u: goto label_1b81d8;
        case 0x1b81dcu: goto label_1b81dc;
        case 0x1b81e0u: goto label_1b81e0;
        case 0x1b81e4u: goto label_1b81e4;
        case 0x1b81e8u: goto label_1b81e8;
        case 0x1b81ecu: goto label_1b81ec;
        case 0x1b81f0u: goto label_1b81f0;
        case 0x1b81f4u: goto label_1b81f4;
        case 0x1b81f8u: goto label_1b81f8;
        case 0x1b81fcu: goto label_1b81fc;
        case 0x1b8200u: goto label_1b8200;
        case 0x1b8204u: goto label_1b8204;
        case 0x1b8208u: goto label_1b8208;
        case 0x1b820cu: goto label_1b820c;
        case 0x1b8210u: goto label_1b8210;
        case 0x1b8214u: goto label_1b8214;
        case 0x1b8218u: goto label_1b8218;
        case 0x1b821cu: goto label_1b821c;
        case 0x1b8220u: goto label_1b8220;
        case 0x1b8224u: goto label_1b8224;
        case 0x1b8228u: goto label_1b8228;
        case 0x1b822cu: goto label_1b822c;
        case 0x1b8230u: goto label_1b8230;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8238u: goto label_1b8238;
        case 0x1b823cu: goto label_1b823c;
        case 0x1b8240u: goto label_1b8240;
        case 0x1b8244u: goto label_1b8244;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b824cu: goto label_1b824c;
        case 0x1b8250u: goto label_1b8250;
        case 0x1b8254u: goto label_1b8254;
        case 0x1b8258u: goto label_1b8258;
        case 0x1b825cu: goto label_1b825c;
        case 0x1b8260u: goto label_1b8260;
        case 0x1b8264u: goto label_1b8264;
        case 0x1b8268u: goto label_1b8268;
        case 0x1b826cu: goto label_1b826c;
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8274u: goto label_1b8274;
        default: break;
    }

    ctx->pc = 0x1b7eb0u;

label_1b7eb0:
    // 0x1b7eb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1b7eb4:
    // 0x1b7eb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b7eb8:
    // 0x1b7eb8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1b7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1b7ebc:
    // 0x1b7ebc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b7ec0:
    // 0x1b7ec0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b7ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ec4:
    // 0x1b7ec4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1b7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1b7ec8:
    // 0x1b7ec8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1b7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1b7ecc:
    // 0x1b7ecc: 0x2442d670  addiu       $v0, $v0, -0x2990
    ctx->pc = 0x1b7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
label_1b7ed0:
    // 0x1b7ed0: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1b7ed4:
    // 0x1b7ed4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1b7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1b7ed8:
    // 0x1b7ed8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_1b7edc:
    // 0x1b7edc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1b7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1b7ee0:
    // 0x1b7ee0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b7ee4:
    // 0x1b7ee4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b7ee8:
    // 0x1b7ee8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b7eec:
    // 0x1b7eec: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1b7eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1b7ef0:
    // 0x1b7ef0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1b7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1b7ef4:
    // 0x1b7ef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b7ef8:
    // 0x1b7ef8: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x1b7ef8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b7efc:
    // 0x1b7efc: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1b7efcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1b7f00:
    // 0x1b7f00: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1b7f00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1b7f04:
    // 0x1b7f04: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1b7f04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1b7f08:
    // 0x1b7f08: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b7f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1b7f0c:
    // 0x1b7f0c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b7f10:
    // 0x1b7f10: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1b7f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_1b7f14:
    // 0x1b7f14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1b7f18:
    if (ctx->pc == 0x1B7F18u) {
        ctx->pc = 0x1B7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F14u;
        // 0x1b7f18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F1Cu;
        goto label_1b7f1c;
    }
    ctx->pc = 0x1B7F14u;
    {
        const bool branch_taken_0x1b7f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F14u;
        // 0x1b7f18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f14) {
            ctx->pc = 0x1B7FB8u;
            goto label_1b7fb8;
        }
    }
    ctx->pc = 0x1B7F1Cu;
label_1b7f1c:
    // 0x1b7f1c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1b7f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1b7f20:
    // 0x1b7f20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1b7f24:
    if (ctx->pc == 0x1B7F24u) {
        ctx->pc = 0x1B7F28u;
        goto label_1b7f28;
    }
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F70u;
            goto label_1b7f70;
        }
    }
    ctx->pc = 0x1B7F28u;
label_1b7f28:
    // 0x1b7f28: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_1b7f2c:
    if (ctx->pc == 0x1B7F2Cu) {
        ctx->pc = 0x1B7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F28u;
        // 0x1b7f2c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F30u;
        goto label_1b7f30;
    }
    ctx->pc = 0x1B7F28u;
    {
        const bool branch_taken_0x1b7f28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F28u;
        // 0x1b7f2c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f28) {
            ctx->pc = 0x1B7F50u;
            goto label_1b7f50;
        }
    }
    ctx->pc = 0x1B7F30u;
label_1b7f30:
    // 0x1b7f30: 0x3c01bf14  lui         $at, 0xBF14
    ctx->pc = 0x1b7f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48916 << 16));
label_1b7f34:
    // 0x1b7f34: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b7f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1b7f38:
    // 0x1b7f38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7f3c:
    // 0x1b7f3c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b7f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_1b7f40:
    // 0x1b7f40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b7f44:
    // 0x1b7f44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7f48:
    // 0x1b7f48: 0x10000042  b           . + 4 + (0x42 << 2)
label_1b7f4c:
    if (ctx->pc == 0x1B7F4Cu) {
        ctx->pc = 0x1B7F50u;
        goto label_1b7f50;
    }
    ctx->pc = 0x1B7F48u;
    {
        const bool branch_taken_0x1b7f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f48) {
            ctx->pc = 0x1B8054u;
            goto label_1b8054;
        }
    }
    ctx->pc = 0x1B7F50u;
label_1b7f50:
    // 0x1b7f50: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1b7f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1b7f54:
    // 0x1b7f54: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b7f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1b7f58:
    // 0x1b7f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7f5c:
    // 0x1b7f5c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b7f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_1b7f60:
    // 0x1b7f60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b7f64:
    // 0x1b7f64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7f68:
    // 0x1b7f68: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1b7f6c:
    if (ctx->pc == 0x1B7F6Cu) {
        ctx->pc = 0x1B7F70u;
        goto label_1b7f70;
    }
    ctx->pc = 0x1B7F68u;
    {
        const bool branch_taken_0x1b7f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f68) {
            ctx->pc = 0x1B8054u;
            goto label_1b8054;
        }
    }
    ctx->pc = 0x1B7F70u;
label_1b7f70:
    // 0x1b7f70: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_1b7f74:
    if (ctx->pc == 0x1B7F74u) {
        ctx->pc = 0x1B7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F70u;
        // 0x1b7f74: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F78u;
        goto label_1b7f78;
    }
    ctx->pc = 0x1B7F70u;
    {
        const bool branch_taken_0x1b7f70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F70u;
        // 0x1b7f74: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f70) {
            ctx->pc = 0x1B7F98u;
            goto label_1b7f98;
        }
    }
    ctx->pc = 0x1B7F78u;
label_1b7f78:
    // 0x1b7f78: 0x3c01bec5  lui         $at, 0xBEC5
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48837 << 16));
label_1b7f7c:
    // 0x1b7f7c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b7f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1b7f80:
    // 0x1b7f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7f84:
    // 0x1b7f84: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x1b7f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
label_1b7f88:
    // 0x1b7f88: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b7f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b7f8c:
    // 0x1b7f8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7f90:
    // 0x1b7f90: 0x10000030  b           . + 4 + (0x30 << 2)
label_1b7f94:
    if (ctx->pc == 0x1B7F94u) {
        ctx->pc = 0x1B7F98u;
        goto label_1b7f98;
    }
    ctx->pc = 0x1B7F90u;
    {
        const bool branch_taken_0x1b7f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f90) {
            ctx->pc = 0x1B8054u;
            goto label_1b8054;
        }
    }
    ctx->pc = 0x1B7F98u;
label_1b7f98:
    // 0x1b7f98: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
label_1b7f9c:
    // 0x1b7f9c: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1b7f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1b7fa0:
    // 0x1b7fa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7fa4:
    // 0x1b7fa4: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x1b7fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
label_1b7fa8:
    // 0x1b7fa8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b7fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b7fac:
    // 0x1b7fac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7fb0:
    // 0x1b7fb0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b7fb4:
    if (ctx->pc == 0x1B7FB4u) {
        ctx->pc = 0x1B7FB8u;
        goto label_1b7fb8;
    }
    ctx->pc = 0x1B7FB0u;
    {
        const bool branch_taken_0x1b7fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fb0) {
            ctx->pc = 0x1B8054u;
            goto label_1b8054;
        }
    }
    ctx->pc = 0x1B7FB8u;
label_1b7fb8:
    // 0x1b7fb8: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1b7fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1b7fbc:
    // 0x1b7fbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b7fc0:
    if (ctx->pc == 0x1B7FC0u) {
        ctx->pc = 0x1B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FBCu;
        // 0x1b7fc0: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FC4u;
        goto label_1b7fc4;
    }
    ctx->pc = 0x1B7FBCu;
    {
        const bool branch_taken_0x1b7fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FBCu;
        // 0x1b7fc0: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fbc) {
            ctx->pc = 0x1B7FF4u;
            goto label_1b7ff4;
        }
    }
    ctx->pc = 0x1B7FC4u;
label_1b7fc4:
    // 0x1b7fc4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1b7fc8:
    if (ctx->pc == 0x1B7FC8u) {
        ctx->pc = 0x1B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC4u;
        // 0x1b7fc8: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FCCu;
        goto label_1b7fcc;
    }
    ctx->pc = 0x1B7FC4u;
    {
        const bool branch_taken_0x1b7fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC4u;
        // 0x1b7fc8: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fc4) {
            ctx->pc = 0x1B8078u;
            goto label_1b8078;
        }
    }
    ctx->pc = 0x1B7FCCu;
label_1b7fcc:
    // 0x1b7fcc: 0x3c01bf1e  lui         $at, 0xBF1E
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48926 << 16));
label_1b7fd0:
    // 0x1b7fd0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1b7fd4:
    // 0x1b7fd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7fd8:
    // 0x1b7fd8: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
label_1b7fdc:
    if (ctx->pc == 0x1B7FDCu) {
        ctx->pc = 0x1B7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FD8u;
        // 0x1b7fdc: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FE0u;
        goto label_1b7fe0;
    }
    ctx->pc = 0x1B7FD8u;
    {
        const bool branch_taken_0x1b7fd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FD8u;
        // 0x1b7fdc: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fd8) {
            ctx->pc = 0x1B8044u;
            goto label_1b8044;
        }
    }
    ctx->pc = 0x1B7FE0u;
label_1b7fe0:
    // 0x1b7fe0: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1b7fe4:
    // 0x1b7fe4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1b7fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1b7fe8:
    // 0x1b7fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7fec:
    // 0x1b7fec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b7ff0:
    if (ctx->pc == 0x1B7FF0u) {
        ctx->pc = 0x1B7FF4u;
        goto label_1b7ff4;
    }
    ctx->pc = 0x1B7FECu;
    {
        const bool branch_taken_0x1b7fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fec) {
            ctx->pc = 0x1B8048u;
            goto label_1b8048;
        }
    }
    ctx->pc = 0x1B7FF4u;
label_1b7ff4:
    // 0x1b7ff4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b7ff8:
    if (ctx->pc == 0x1B7FF8u) {
        ctx->pc = 0x1B7FFCu;
        goto label_1b7ffc;
    }
    ctx->pc = 0x1B7FF4u;
    {
        const bool branch_taken_0x1b7ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ff4) {
            ctx->pc = 0x1B8024u;
            goto label_1b8024;
        }
    }
    ctx->pc = 0x1B7FFCu;
label_1b7ffc:
    // 0x1b7ffc: 0x3c01bf3d  lui         $at, 0xBF3D
    ctx->pc = 0x1b7ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48957 << 16));
label_1b8000:
    // 0x1b8000: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1b8004:
    // 0x1b8004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8008:
    // 0x1b8008: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_1b800c:
    if (ctx->pc == 0x1B800Cu) {
        ctx->pc = 0x1B800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8008u;
        // 0x1b800c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8010u;
        goto label_1b8010;
    }
    ctx->pc = 0x1B8008u;
    {
        const bool branch_taken_0x1b8008 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8008u;
        // 0x1b800c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8008) {
            ctx->pc = 0x1B8044u;
            goto label_1b8044;
        }
    }
    ctx->pc = 0x1B8010u;
label_1b8010:
    // 0x1b8010: 0x3c013f39  lui         $at, 0x3F39
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16185 << 16));
label_1b8014:
    // 0x1b8014: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b8014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8018:
    // 0x1b8018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b801c:
    // 0x1b801c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b8020:
    if (ctx->pc == 0x1B8020u) {
        ctx->pc = 0x1B8024u;
        goto label_1b8024;
    }
    ctx->pc = 0x1B801Cu;
    {
        const bool branch_taken_0x1b801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b801c) {
            ctx->pc = 0x1B8048u;
            goto label_1b8048;
        }
    }
    ctx->pc = 0x1B8024u;
label_1b8024:
    // 0x1b8024: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x1b8024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_1b8028:
    // 0x1b8028: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b8028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1b802c:
    // 0x1b802c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8030:
    // 0x1b8030: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_1b8034:
    if (ctx->pc == 0x1B8034u) {
        ctx->pc = 0x1B8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8030u;
        // 0x1b8034: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8038u;
        goto label_1b8038;
    }
    ctx->pc = 0x1B8030u;
    {
        const bool branch_taken_0x1b8030 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8030u;
        // 0x1b8034: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8030) {
            ctx->pc = 0x1B8048u;
            goto label_1b8048;
        }
    }
    ctx->pc = 0x1B8038u;
label_1b8038:
    // 0x1b8038: 0x3c01bf0f  lui         $at, 0xBF0F
    ctx->pc = 0x1b8038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48911 << 16));
label_1b803c:
    // 0x1b803c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b8040:
    // 0x1b8040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8044:
    // 0x1b8044: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1b8048:
    // 0x1b8048: 0x3c01bd99  lui         $at, 0xBD99
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48537 << 16));
label_1b804c:
    // 0x1b804c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b804cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8050:
    // 0x1b8050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8054:
    // 0x1b8054: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b8058:
    // 0x1b8058: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b8058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b805c:
    // 0x1b805c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b805cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8060:
    // 0x1b8060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8064:
    // 0x1b8064: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1b8064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1b8068:
    // 0x1b8068: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b8068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b806c:
    // 0x1b806c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b806cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b8070:
    // 0x1b8070: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1b8070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b8074:
    // 0x1b8074: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_1b8078:
    // 0x1b8078: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b8078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b807c:
    // 0x1b807c: 0x2483d670  addiu       $v1, $a0, -0x2990
    ctx->pc = 0x1b807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
label_1b8080:
    // 0x1b8080: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1b8080u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8084:
    // 0x1b8084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8088:
    // 0x1b8088: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b8088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1b808c:
    // 0x1b808c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b808cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b8090:
    // 0x1b8090: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b8090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b8094:
    // 0x1b8094: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1b8094u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8098:
    // 0x1b8098: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b8098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b809c:
    // 0x1b809c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1b80a0:
    // 0x1b80a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b80a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b80a4:
    // 0x1b80a4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1b80a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1b80a8:
    // 0x1b80a8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1b80a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b80ac:
    // 0x1b80ac: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1b80acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_1b80b0:
    // 0x1b80b0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1b80b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b80b4:
    // 0x1b80b4: 0x7e440440  sq          $a0, 0x440($s2)
    ctx->pc = 0x1b80b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1088), GPR_VEC(ctx, 4));
label_1b80b8:
    // 0x1b80b8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1b80b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b80bc:
    // 0x1b80bc: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1b80bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1b80c0:
    // 0x1b80c0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1b80c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1b80c4:
    // 0x1b80c4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b80c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b80c8:
    // 0x1b80c8: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1b80c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b80cc:
    // 0x1b80cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b80d0:
    // 0x1b80d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b80d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b80d4:
    // 0x1b80d4: 0x0  nop
    ctx->pc = 0x1b80d4u;
    // NOP
label_1b80d8:
    // 0x1b80d8: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x1b80d8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b80dc:
    // 0x1b80dc: 0x0  nop
    ctx->pc = 0x1b80dcu;
    // NOP
label_1b80e0:
    // 0x1b80e0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1b80e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1b80e4:
    // 0x1b80e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b80e8:
    // 0x1b80e8: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1b80e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1b80ec:
    // 0x1b80ec: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1b80f0:
    // 0x1b80f0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b80f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b80f4:
    // 0x1b80f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b80f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b80f8:
    // 0x1b80f8: 0x4615a342  mul.s       $f13, $f20, $f21
    ctx->pc = 0x1b80f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_1b80fc:
    // 0x1b80fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b8100:
    // 0x1b8100: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1b8100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
label_1b8104:
    // 0x1b8104: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1b8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1b8108:
    // 0x1b8108: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x1b8108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_1b810c:
    // 0x1b810c: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1b810cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1b8110:
    // 0x1b8110: 0x46186b40  add.s       $f13, $f13, $f24
    ctx->pc = 0x1b8110u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[24]);
label_1b8114:
    // 0x1b8114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b8114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8118:
    // 0x1b8118: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b811c:
    // 0x1b811c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b811cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8120:
    // 0x1b8120: 0x3529000b  ori         $t1, $t1, 0xB
    ctx->pc = 0x1b8120u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
label_1b8124:
    // 0x1b8124: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b8128:
    // 0x1b8128: 0x46176b42  mul.s       $f13, $f13, $f23
    ctx->pc = 0x1b8128u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[23]);
label_1b812c:
    // 0x1b812c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b812cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8130:
    // 0x1b8130: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b8130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1b8134:
    // 0x1b8134: 0x40f809  jalr        $v0
label_1b8138:
    if (ctx->pc == 0x1B8138u) {
        ctx->pc = 0x1B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8134u;
        // 0x1b8138: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B813Cu;
        goto label_1b813c;
    }
    ctx->pc = 0x1B8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B813Cu);
        ctx->pc = 0x1B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8134u;
        // 0x1b8138: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8134u, 0x1B813Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B813Cu;
label_1b813c:
    // 0x1b813c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8140:
    // 0x1b8140: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8144:
    // 0x1b8144: 0xc440d6dc  lwc1        $f0, -0x2924($v0)
    ctx->pc = 0x1b8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8148:
    // 0x1b8148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b814c:
    // 0x1b814c: 0xc46cd6d8  lwc1        $f12, -0x2928($v1)
    ctx->pc = 0x1b814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8150:
    // 0x1b8150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8154:
    // 0x1b8154: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b8154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b8158:
    // 0x1b8158: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1b8158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_1b815c:
    // 0x1b815c: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1b815cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_1b8160:
    // 0x1b8160: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x1b8160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_1b8164:
    // 0x1b8164: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b8164u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b8168:
    // 0x1b8168: 0xc068848  jal         func_1A2120
label_1b816c:
    if (ctx->pc == 0x1B816Cu) {
        ctx->pc = 0x1B816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8168u;
        // 0x1b816c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8170u;
        goto label_1b8170;
    }
    ctx->pc = 0x1B8168u;
    SET_GPR_U32(ctx, 31, 0x1B8170u);
    ctx->pc = 0x1B816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8168u;
    // 0x1b816c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B8168u, 0x1B8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8170u;
label_1b8170:
    // 0x1b8170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8174:
    // 0x1b8174: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b8174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b8178:
    // 0x1b8178: 0xc48cd6e4  lwc1        $f12, -0x291C($a0)
    ctx->pc = 0x1b8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b817c:
    // 0x1b817c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1b8180:
    // 0x1b8180: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1b8180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1b8184:
    // 0x1b8184: 0x60f809  jalr        $v1
label_1b8188:
    if (ctx->pc == 0x1B8188u) {
        ctx->pc = 0x1B8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8184u;
        // 0x1b8188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B818Cu;
        goto label_1b818c;
    }
    ctx->pc = 0x1B8184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B818Cu);
        ctx->pc = 0x1B8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8184u;
        // 0x1b8188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8184u, 0x1B818Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B818Cu;
label_1b818c:
    // 0x1b818c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1b818cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b8190:
    // 0x1b8190: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1b8194:
    if (ctx->pc == 0x1B8194u) {
        ctx->pc = 0x1B8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8190u;
        // 0x1b8194: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8198u;
        goto label_1b8198;
    }
    ctx->pc = 0x1B8190u;
    {
        const bool branch_taken_0x1b8190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8190u;
        // 0x1b8194: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8190) {
            ctx->pc = 0x1B80D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b80d8;
        }
    }
    ctx->pc = 0x1B8198u;
label_1b8198:
    // 0x1b8198: 0xc06dee2  jal         func_1B7B88
label_1b819c:
    if (ctx->pc == 0x1B819Cu) {
        ctx->pc = 0x1B819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8198u;
        // 0x1b819c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B81A0u;
        goto label_1b81a0;
    }
    ctx->pc = 0x1B8198u;
    SET_GPR_U32(ctx, 31, 0x1B81A0u);
    ctx->pc = 0x1B819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8198u;
    // 0x1b819c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B88u, 0x1B8198u, 0x1B81A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81A0u;
label_1b81a0:
    // 0x1b81a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b81a4:
    // 0x1b81a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b81a8:
    // 0x1b81a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b81a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b81ac:
    // 0x1b81ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b81acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b81b0:
    // 0x1b81b0: 0xc441d6e0  lwc1        $f1, -0x2920($v0)
    ctx->pc = 0x1b81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b81b4:
    // 0x1b81b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1b81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b81b8:
    // 0x1b81b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b81bc:
    // 0x1b81bc: 0xe64004a4  swc1        $f0, 0x4A4($s2)
    ctx->pc = 0x1b81bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
label_1b81c0:
    // 0x1b81c0: 0xe64004a0  swc1        $f0, 0x4A0($s2)
    ctx->pc = 0x1b81c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
label_1b81c4:
    // 0x1b81c4: 0x2443d670  addiu       $v1, $v0, -0x2990
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
label_1b81c8:
    // 0x1b81c8: 0xe641049c  swc1        $f1, 0x49C($s2)
    ctx->pc = 0x1b81c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
label_1b81cc:
    // 0x1b81cc: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_1b81d0:
    // 0x1b81d0: 0xe6410498  swc1        $f1, 0x498($s2)
    ctx->pc = 0x1b81d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1176), bits); }
label_1b81d4:
    // 0x1b81d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b81d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b81d8:
    // 0x1b81d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b81d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b81dc:
    // 0x1b81dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b81dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b81e0:
    // 0x1b81e0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1b81e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b81e4:
    // 0x1b81e4: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b81e8:
    // 0x1b81e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b81e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b81ec:
    // 0x1b81ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b81ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b81f0:
    // 0x1b81f0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1b81f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b81f4:
    // 0x1b81f4: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1b81f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1b81f8:
    // 0x1b81f8: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x1b81f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1b81fc:
    // 0x1b81fc: 0xe6a30008  swc1        $f3, 0x8($s5)
    ctx->pc = 0x1b81fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1b8200:
    // 0x1b8200: 0xa24404ac  sb          $a0, 0x4AC($s2)
    ctx->pc = 0x1b8200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1196), (uint8_t)GPR_U32(ctx, 4));
label_1b8204:
    // 0x1b8204: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1b8204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b8208:
    // 0x1b8208: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1b8208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b820c:
    // 0x1b820c: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x1b820cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_1b8210:
    // 0x1b8210: 0x7e420480  sq          $v0, 0x480($s2)
    ctx->pc = 0x1b8210u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1152), GPR_VEC(ctx, 2));
label_1b8214:
    // 0x1b8214: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1b8214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1b8218:
    // 0x1b8218: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_1b821c:
    // 0x1b821c: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x1b821cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
label_1b8220:
    // 0x1b8220: 0xae400470  sw          $zero, 0x470($s2)
    ctx->pc = 0x1b8220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1136), GPR_U32(ctx, 0));
label_1b8224:
    // 0x1b8224: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1b8224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b8228:
    // 0x1b8228: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x1b8228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_1b822c:
    // 0x1b822c: 0xae540474  sw          $s4, 0x474($s2)
    ctx->pc = 0x1b822cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 20));
label_1b8230:
    // 0x1b8230: 0xae430450  sw          $v1, 0x450($s2)
    ctx->pc = 0x1b8230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1104), GPR_U32(ctx, 3));
label_1b8234:
    // 0x1b8234: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x1b8234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
label_1b8238:
    // 0x1b8238: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1b8238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b823c:
    // 0x1b823c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1b823cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b8240:
    // 0x1b8240: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1b8240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b8244:
    // 0x1b8244: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b8244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b8248:
    // 0x1b8248: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b8248u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b824c:
    // 0x1b824c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1b824cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8250:
    // 0x1b8250: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1b8250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8254:
    // 0x1b8254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8258:
    // 0x1b8258: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x1b8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1b825c:
    // 0x1b825c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1b825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b8260:
    // 0x1b8260: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1b8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b8264:
    // 0x1b8264: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1b8264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b8268:
    // 0x1b8268: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b826c:
    // 0x1b826c: 0x3e00008  jr          $ra
label_1b8270:
    if (ctx->pc == 0x1B8270u) {
        ctx->pc = 0x1B8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B826Cu;
        // 0x1b8270: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8274u;
        goto label_1b8274;
    }
    ctx->pc = 0x1B826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B826Cu;
        // 0x1b8270: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8274u;
label_1b8274:
    // 0x1b8274: 0x0  nop
    ctx->pc = 0x1b8274u;
    // NOP
    ctx->pc = 0x1b8278u;
}
