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

// Function: sub_00205B38
// Address: 0x205b38 - 0x2060e8
void sub_00205B38_0x205b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B38_0x205b38");
#endif

    switch (ctx->pc) {
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        case 0x205d58u: goto label_205d58;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d60u: goto label_205d60;
        case 0x205d64u: goto label_205d64;
        case 0x205d68u: goto label_205d68;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d70u: goto label_205d70;
        case 0x205d74u: goto label_205d74;
        case 0x205d78u: goto label_205d78;
        case 0x205d7cu: goto label_205d7c;
        case 0x205d80u: goto label_205d80;
        case 0x205d84u: goto label_205d84;
        case 0x205d88u: goto label_205d88;
        case 0x205d8cu: goto label_205d8c;
        case 0x205d90u: goto label_205d90;
        case 0x205d94u: goto label_205d94;
        case 0x205d98u: goto label_205d98;
        case 0x205d9cu: goto label_205d9c;
        case 0x205da0u: goto label_205da0;
        case 0x205da4u: goto label_205da4;
        case 0x205da8u: goto label_205da8;
        case 0x205dacu: goto label_205dac;
        case 0x205db0u: goto label_205db0;
        case 0x205db4u: goto label_205db4;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc0u: goto label_205dc0;
        case 0x205dc4u: goto label_205dc4;
        case 0x205dc8u: goto label_205dc8;
        case 0x205dccu: goto label_205dcc;
        case 0x205dd0u: goto label_205dd0;
        case 0x205dd4u: goto label_205dd4;
        case 0x205dd8u: goto label_205dd8;
        case 0x205ddcu: goto label_205ddc;
        case 0x205de0u: goto label_205de0;
        case 0x205de4u: goto label_205de4;
        case 0x205de8u: goto label_205de8;
        case 0x205decu: goto label_205dec;
        case 0x205df0u: goto label_205df0;
        case 0x205df4u: goto label_205df4;
        case 0x205df8u: goto label_205df8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e00u: goto label_205e00;
        case 0x205e04u: goto label_205e04;
        case 0x205e08u: goto label_205e08;
        case 0x205e0cu: goto label_205e0c;
        case 0x205e10u: goto label_205e10;
        case 0x205e14u: goto label_205e14;
        case 0x205e18u: goto label_205e18;
        case 0x205e1cu: goto label_205e1c;
        case 0x205e20u: goto label_205e20;
        case 0x205e24u: goto label_205e24;
        case 0x205e28u: goto label_205e28;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e30u: goto label_205e30;
        case 0x205e34u: goto label_205e34;
        case 0x205e38u: goto label_205e38;
        case 0x205e3cu: goto label_205e3c;
        case 0x205e40u: goto label_205e40;
        case 0x205e44u: goto label_205e44;
        case 0x205e48u: goto label_205e48;
        case 0x205e4cu: goto label_205e4c;
        case 0x205e50u: goto label_205e50;
        case 0x205e54u: goto label_205e54;
        case 0x205e58u: goto label_205e58;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e60u: goto label_205e60;
        case 0x205e64u: goto label_205e64;
        case 0x205e68u: goto label_205e68;
        case 0x205e6cu: goto label_205e6c;
        case 0x205e70u: goto label_205e70;
        case 0x205e74u: goto label_205e74;
        case 0x205e78u: goto label_205e78;
        case 0x205e7cu: goto label_205e7c;
        case 0x205e80u: goto label_205e80;
        case 0x205e84u: goto label_205e84;
        case 0x205e88u: goto label_205e88;
        case 0x205e8cu: goto label_205e8c;
        case 0x205e90u: goto label_205e90;
        case 0x205e94u: goto label_205e94;
        case 0x205e98u: goto label_205e98;
        case 0x205e9cu: goto label_205e9c;
        case 0x205ea0u: goto label_205ea0;
        case 0x205ea4u: goto label_205ea4;
        case 0x205ea8u: goto label_205ea8;
        case 0x205eacu: goto label_205eac;
        case 0x205eb0u: goto label_205eb0;
        case 0x205eb4u: goto label_205eb4;
        case 0x205eb8u: goto label_205eb8;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec0u: goto label_205ec0;
        case 0x205ec4u: goto label_205ec4;
        case 0x205ec8u: goto label_205ec8;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed0u: goto label_205ed0;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ed8u: goto label_205ed8;
        case 0x205edcu: goto label_205edc;
        case 0x205ee0u: goto label_205ee0;
        case 0x205ee4u: goto label_205ee4;
        case 0x205ee8u: goto label_205ee8;
        case 0x205eecu: goto label_205eec;
        case 0x205ef0u: goto label_205ef0;
        case 0x205ef4u: goto label_205ef4;
        case 0x205ef8u: goto label_205ef8;
        case 0x205efcu: goto label_205efc;
        case 0x205f00u: goto label_205f00;
        case 0x205f04u: goto label_205f04;
        case 0x205f08u: goto label_205f08;
        case 0x205f0cu: goto label_205f0c;
        case 0x205f10u: goto label_205f10;
        case 0x205f14u: goto label_205f14;
        case 0x205f18u: goto label_205f18;
        case 0x205f1cu: goto label_205f1c;
        case 0x205f20u: goto label_205f20;
        case 0x205f24u: goto label_205f24;
        case 0x205f28u: goto label_205f28;
        case 0x205f2cu: goto label_205f2c;
        case 0x205f30u: goto label_205f30;
        case 0x205f34u: goto label_205f34;
        case 0x205f38u: goto label_205f38;
        case 0x205f3cu: goto label_205f3c;
        case 0x205f40u: goto label_205f40;
        case 0x205f44u: goto label_205f44;
        case 0x205f48u: goto label_205f48;
        case 0x205f4cu: goto label_205f4c;
        case 0x205f50u: goto label_205f50;
        case 0x205f54u: goto label_205f54;
        case 0x205f58u: goto label_205f58;
        case 0x205f5cu: goto label_205f5c;
        case 0x205f60u: goto label_205f60;
        case 0x205f64u: goto label_205f64;
        case 0x205f68u: goto label_205f68;
        case 0x205f6cu: goto label_205f6c;
        case 0x205f70u: goto label_205f70;
        case 0x205f74u: goto label_205f74;
        case 0x205f78u: goto label_205f78;
        case 0x205f7cu: goto label_205f7c;
        case 0x205f80u: goto label_205f80;
        case 0x205f84u: goto label_205f84;
        case 0x205f88u: goto label_205f88;
        case 0x205f8cu: goto label_205f8c;
        case 0x205f90u: goto label_205f90;
        case 0x205f94u: goto label_205f94;
        case 0x205f98u: goto label_205f98;
        case 0x205f9cu: goto label_205f9c;
        case 0x205fa0u: goto label_205fa0;
        case 0x205fa4u: goto label_205fa4;
        case 0x205fa8u: goto label_205fa8;
        case 0x205facu: goto label_205fac;
        case 0x205fb0u: goto label_205fb0;
        case 0x205fb4u: goto label_205fb4;
        case 0x205fb8u: goto label_205fb8;
        case 0x205fbcu: goto label_205fbc;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fc4u: goto label_205fc4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205fccu: goto label_205fcc;
        case 0x205fd0u: goto label_205fd0;
        case 0x205fd4u: goto label_205fd4;
        case 0x205fd8u: goto label_205fd8;
        case 0x205fdcu: goto label_205fdc;
        case 0x205fe0u: goto label_205fe0;
        case 0x205fe4u: goto label_205fe4;
        case 0x205fe8u: goto label_205fe8;
        case 0x205fecu: goto label_205fec;
        case 0x205ff0u: goto label_205ff0;
        case 0x205ff4u: goto label_205ff4;
        case 0x205ff8u: goto label_205ff8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206000u: goto label_206000;
        case 0x206004u: goto label_206004;
        case 0x206008u: goto label_206008;
        case 0x20600cu: goto label_20600c;
        case 0x206010u: goto label_206010;
        case 0x206014u: goto label_206014;
        case 0x206018u: goto label_206018;
        case 0x20601cu: goto label_20601c;
        case 0x206020u: goto label_206020;
        case 0x206024u: goto label_206024;
        case 0x206028u: goto label_206028;
        case 0x20602cu: goto label_20602c;
        case 0x206030u: goto label_206030;
        case 0x206034u: goto label_206034;
        case 0x206038u: goto label_206038;
        case 0x20603cu: goto label_20603c;
        case 0x206040u: goto label_206040;
        case 0x206044u: goto label_206044;
        case 0x206048u: goto label_206048;
        case 0x20604cu: goto label_20604c;
        case 0x206050u: goto label_206050;
        case 0x206054u: goto label_206054;
        case 0x206058u: goto label_206058;
        case 0x20605cu: goto label_20605c;
        case 0x206060u: goto label_206060;
        case 0x206064u: goto label_206064;
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        default: break;
    }

    ctx->pc = 0x205b38u;

label_205b38:
    // 0x205b38: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_205b3c:
    // 0x205b3c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x205b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_205b40:
    // 0x205b40: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x205b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_205b44:
    // 0x205b44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205b48:
    // 0x205b48: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x205b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_205b4c:
    // 0x205b4c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x205b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_205b50:
    // 0x205b50: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x205b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_205b54:
    // 0x205b54: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x205b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_205b58:
    // 0x205b58: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x205b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_205b5c:
    // 0x205b5c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x205b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_205b60:
    // 0x205b60: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x205b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_205b64:
    // 0x205b64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x205b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_205b68:
    // 0x205b68: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x205b68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_205b6c:
    // 0x205b6c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x205b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_205b70:
    // 0x205b70: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x205b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_205b74:
    // 0x205b74: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
label_205b78:
    if (ctx->pc == 0x205B78u) {
        ctx->pc = 0x205B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B74u;
        // 0x205b78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B7Cu;
        goto label_205b7c;
    }
    ctx->pc = 0x205B74u;
    {
        const bool branch_taken_0x205b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B74u;
        // 0x205b78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b74) {
            ctx->pc = 0x2060B0u;
            goto label_2060b0;
        }
    }
    ctx->pc = 0x205B7Cu;
label_205b7c:
    // 0x205b7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x205b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_205b80:
    // 0x205b80: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x205b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_205b84:
    // 0x205b84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205b88:
    // 0x205b88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x205b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_205b8c:
    // 0x205b8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_205b90:
    if (ctx->pc == 0x205B90u) {
        ctx->pc = 0x205B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B8Cu;
        // 0x205b90: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B94u;
        goto label_205b94;
    }
    ctx->pc = 0x205B8Cu;
    {
        const bool branch_taken_0x205b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B8Cu;
        // 0x205b90: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b8c) {
            ctx->pc = 0x205BECu;
            goto label_205bec;
        }
    }
    ctx->pc = 0x205B94u;
label_205b94:
    // 0x205b94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_205b98:
    if (ctx->pc == 0x205B98u) {
        ctx->pc = 0x205B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B94u;
        // 0x205b98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B9Cu;
        goto label_205b9c;
    }
    ctx->pc = 0x205B94u;
    {
        const bool branch_taken_0x205b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B94u;
        // 0x205b98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b94) {
            ctx->pc = 0x205BBCu;
            goto label_205bbc;
        }
    }
    ctx->pc = 0x205B9Cu;
label_205b9c:
    // 0x205b9c: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_205ba0:
    // 0x205ba0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x205ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_205ba4:
    // 0x205ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205ba8:
    // 0x205ba8: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x205ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_205bac:
    // 0x205bac: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x205bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_205bb0:
    // 0x205bb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205bb4:
    // 0x205bb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_205bb8:
    if (ctx->pc == 0x205BB8u) {
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB4u;
        // 0x205bb8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BBCu;
        goto label_205bbc;
    }
    ctx->pc = 0x205BB4u;
    {
        const bool branch_taken_0x205bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB4u;
        // 0x205bb8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bb4) {
            ctx->pc = 0x205BD8u;
            goto label_205bd8;
        }
    }
    ctx->pc = 0x205BBCu;
label_205bbc:
    // 0x205bbc: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x205bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_205bc0:
    // 0x205bc0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_205bc4:
    // 0x205bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205bc8:
    // 0x205bc8: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
label_205bcc:
    // 0x205bcc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x205bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_205bd0:
    // 0x205bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205bd4:
    // 0x205bd4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x205bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_205bd8:
    // 0x205bd8: 0xe440f608  swc1        $f0, -0x9F8($v0)
    ctx->pc = 0x205bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964744), bits); }
label_205bdc:
    // 0x205bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205be0:
    // 0x205be0: 0xe461f604  swc1        $f1, -0x9FC($v1)
    ctx->pc = 0x205be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964740), bits); }
label_205be4:
    // 0x205be4: 0x10000013  b           . + 4 + (0x13 << 2)
label_205be8:
    if (ctx->pc == 0x205BE8u) {
        ctx->pc = 0x205BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BE4u;
        // 0x205be8: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BECu;
        goto label_205bec;
    }
    ctx->pc = 0x205BE4u;
    {
        const bool branch_taken_0x205be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BE4u;
        // 0x205be8: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205be4) {
            ctx->pc = 0x205C34u;
            goto label_205c34;
        }
    }
    ctx->pc = 0x205BECu;
label_205bec:
    // 0x205bec: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x205becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_205bf0:
    // 0x205bf0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_205bf4:
    // 0x205bf4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_205bf8:
    if (ctx->pc == 0x205BF8u) {
        ctx->pc = 0x205BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF4u;
        // 0x205bf8: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BFCu;
        goto label_205bfc;
    }
    ctx->pc = 0x205BF4u;
    {
        const bool branch_taken_0x205bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF4u;
        // 0x205bf8: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bf4) {
            ctx->pc = 0x205C34u;
            goto label_205c34;
        }
    }
    ctx->pc = 0x205BFCu;
label_205bfc:
    // 0x205bfc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x205bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_205c00:
    // 0x205c00: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_205c04:
    // 0x205c04: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x205c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_205c08:
    // 0x205c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205c0c:
    // 0x205c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_205c10:
    if (ctx->pc == 0x205C10u) {
        ctx->pc = 0x205C14u;
        goto label_205c14;
    }
    ctx->pc = 0x205C0Cu;
    {
        const bool branch_taken_0x205c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c0c) {
            ctx->pc = 0x205C20u;
            goto label_205c20;
        }
    }
    ctx->pc = 0x205C14u;
label_205c14:
    // 0x205c14: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_205c18:
    // 0x205c18: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x205c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_205c1c:
    // 0x205c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205c20:
    // 0x205c20: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x205c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_205c24:
    // 0x205c24: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x205c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_205c28:
    // 0x205c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205c2c:
    // 0x205c2c: 0xe600f608  swc1        $f0, -0x9F8($s0)
    ctx->pc = 0x205c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964744), bits); }
label_205c30:
    // 0x205c30: 0xe6e1f604  swc1        $f1, -0x9FC($s7)
    ctx->pc = 0x205c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294964740), bits); }
label_205c34:
    // 0x205c34: 0xc080ebe  jal         func_203AF8
label_205c38:
    if (ctx->pc == 0x205C38u) {
        ctx->pc = 0x205C3Cu;
        goto label_205c3c;
    }
    ctx->pc = 0x205C34u;
    SET_GPR_U32(ctx, 31, 0x205C3Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x205C34u, 0x205C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C3Cu;
label_205c3c:
    // 0x205c3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_205c40:
    // 0x205c40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x205c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_205c44:
    // 0x205c44: 0xc601f608  lwc1        $f1, -0x9F8($s0)
    ctx->pc = 0x205c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205c48:
    // 0x205c48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x205c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_205c4c:
    // 0x205c4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x205c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_205c50:
    // 0x205c50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x205c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_205c54:
    // 0x205c54: 0x8c8a27e4  lw          $t2, 0x27E4($a0)
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_205c58:
    // 0x205c58: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x205c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_205c5c:
    // 0x205c5c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x205c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_205c60:
    // 0x205c60: 0x24748840  addiu       $s4, $v1, -0x77C0
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936640));
label_205c64:
    // 0x205c64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x205c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_205c68:
    // 0x205c68: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x205c68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_205c6c:
    // 0x205c6c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x205c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_205c70:
    // 0x205c70: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x205c70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205c74:
    // 0x205c74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205c78:
    // 0x205c78: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_205c7c:
    // 0x205c7c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_205c80:
    // 0x205c80: 0x24a58830  addiu       $a1, $a1, -0x77D0
    ctx->pc = 0x205c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936624));
label_205c84:
    // 0x205c84: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x205c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_205c88:
    // 0x205c88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205c8c:
    // 0x205c8c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x205c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_205c90:
    // 0x205c90: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x205c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205c94:
    // 0x205c94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x205c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_205c98:
    // 0x205c98: 0x2409005b  addiu       $t1, $zero, 0x5B
    ctx->pc = 0x205c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_205c9c:
    // 0x205c9c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_205ca0:
    // 0x205ca0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x205ca0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205ca4:
    // 0x205ca4: 0x40f809  jalr        $v0
label_205ca8:
    if (ctx->pc == 0x205CA8u) {
        ctx->pc = 0x205CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA4u;
        // 0x205ca8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CACu;
        goto label_205cac;
    }
    ctx->pc = 0x205CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205CACu);
        ctx->pc = 0x205CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA4u;
        // 0x205ca8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CA4u, 0x205CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205CACu;
label_205cac:
    // 0x205cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_205cb0:
    if (ctx->pc == 0x205CB0u) {
        ctx->pc = 0x205CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CACu;
        // 0x205cb0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CB4u;
        goto label_205cb4;
    }
    ctx->pc = 0x205CACu;
    {
        const bool branch_taken_0x205cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CACu;
        // 0x205cb0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cac) {
            ctx->pc = 0x205CC0u;
            goto label_205cc0;
        }
    }
    ctx->pc = 0x205CB4u;
label_205cb4:
    // 0x205cb4: 0xc0733e2  jal         func_1CCF88
label_205cb8:
    if (ctx->pc == 0x205CB8u) {
        ctx->pc = 0x205CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CB4u;
        // 0x205cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CBCu;
        goto label_205cbc;
    }
    ctx->pc = 0x205CB4u;
    SET_GPR_U32(ctx, 31, 0x205CBCu);
    ctx->pc = 0x205CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CB4u;
    // 0x205cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x205CB4u, 0x205CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CBCu;
label_205cbc:
    // 0x205cbc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x205cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_205cc0:
    // 0x205cc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x205cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_205cc4:
    // 0x205cc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205cc8:
    // 0x205cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205ccc:
    // 0x205ccc: 0xc05e602  jal         func_179808
label_205cd0:
    if (ctx->pc == 0x205CD0u) {
        ctx->pc = 0x205CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CCCu;
        // 0x205cd0: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CD4u;
        goto label_205cd4;
    }
    ctx->pc = 0x205CCCu;
    SET_GPR_U32(ctx, 31, 0x205CD4u);
    ctx->pc = 0x205CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CCCu;
    // 0x205cd0: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x205CCCu, 0x205CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CD4u;
label_205cd4:
    // 0x205cd4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x205cd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_205cd8:
    // 0x205cd8: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x205cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_205cdc:
    // 0x205cdc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x205cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205ce0:
    // 0x205ce0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_205ce4:
    // 0x205ce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205ce8:
    // 0x205ce8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x205ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205cec:
    // 0x205cec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x205cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205cf0:
    // 0x205cf0: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_205cf4:
    // 0x205cf4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205cf8:
    // 0x205cf8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_205cfc:
    // 0x205cfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d00:
    // 0x205d00: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x205d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_205d04:
    // 0x205d04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_205d08:
    // 0x205d08: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205d0c:
    // 0x205d0c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_205d10:
    // 0x205d10: 0x40f809  jalr        $v0
label_205d14:
    if (ctx->pc == 0x205D14u) {
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D18u;
        goto label_205d18;
    }
    ctx->pc = 0x205D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205D18u);
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D10u, 0x205D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205D18u;
label_205d18:
    // 0x205d18: 0x8eb15024  lw          $s1, 0x5024($s5)
    ctx->pc = 0x205d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20516)));
label_205d1c:
    // 0x205d1c: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x205d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_205d20:
    // 0x205d20: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_205d24:
    // 0x205d24: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x205d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_205d28:
    // 0x205d28: 0xc081022  jal         func_204088
label_205d2c:
    if (ctx->pc == 0x205D2Cu) {
        ctx->pc = 0x205D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D28u;
        // 0x205d2c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D30u;
        goto label_205d30;
    }
    ctx->pc = 0x205D28u;
    SET_GPR_U32(ctx, 31, 0x205D30u);
    ctx->pc = 0x205D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D28u;
    // 0x205d2c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x205D28u, 0x205D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D30u;
label_205d30:
    // 0x205d30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205d34:
    // 0x205d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205d38:
    // 0x205d38: 0x60f809  jalr        $v1
label_205d3c:
    if (ctx->pc == 0x205D3Cu) {
        ctx->pc = 0x205D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D38u;
        // 0x205d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D40u;
        goto label_205d40;
    }
    ctx->pc = 0x205D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205D40u);
        ctx->pc = 0x205D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D38u;
        // 0x205d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D38u, 0x205D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205D40u;
label_205d40:
    // 0x205d40: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_205d44:
    // 0x205d44: 0xc073478  jal         func_1CD1E0
label_205d48:
    if (ctx->pc == 0x205D48u) {
        ctx->pc = 0x205D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D44u;
        // 0x205d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D4Cu;
        goto label_205d4c;
    }
    ctx->pc = 0x205D44u;
    SET_GPR_U32(ctx, 31, 0x205D4Cu);
    ctx->pc = 0x205D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D44u;
    // 0x205d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x205D44u, 0x205D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D4Cu;
label_205d4c:
    // 0x205d4c: 0xc080ebe  jal         func_203AF8
label_205d50:
    if (ctx->pc == 0x205D50u) {
        ctx->pc = 0x205D54u;
        goto label_205d54;
    }
    ctx->pc = 0x205D4Cu;
    SET_GPR_U32(ctx, 31, 0x205D54u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x205D4Cu, 0x205D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D54u;
label_205d54:
    // 0x205d54: 0xc6e1f604  lwc1        $f1, -0x9FC($s7)
    ctx->pc = 0x205d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294964740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205d58:
    // 0x205d58: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x205d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_205d5c:
    // 0x205d5c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x205d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_205d60:
    // 0x205d60: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_205d64:
    // 0x205d64: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x205d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_205d68:
    // 0x205d68: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_205d6c:
    // 0x205d6c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x205d6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_205d70:
    // 0x205d70: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x205d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205d74:
    // 0x205d74: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x205d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_205d78:
    // 0x205d78: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x205d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_205d7c:
    // 0x205d7c: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_205d80:
    // 0x205d80: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x205d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205d84:
    // 0x205d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d88:
    // 0x205d88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x205d88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d8c:
    // 0x205d8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_205d90:
    // 0x205d90: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_205d94:
    // 0x205d94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x205d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_205d98:
    // 0x205d98: 0x40f809  jalr        $v0
label_205d9c:
    if (ctx->pc == 0x205D9Cu) {
        ctx->pc = 0x205D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D98u;
        // 0x205d9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DA0u;
        goto label_205da0;
    }
    ctx->pc = 0x205D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205DA0u);
        ctx->pc = 0x205D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D98u;
        // 0x205d9c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D98u, 0x205DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205DA0u;
label_205da0:
    // 0x205da0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x205da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205da4:
    // 0x205da4: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_205da8:
    if (ctx->pc == 0x205DA8u) {
        ctx->pc = 0x205DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DA4u;
        // 0x205da8: 0xae490098  sw          $t1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DACu;
        goto label_205dac;
    }
    ctx->pc = 0x205DA4u;
    {
        const bool branch_taken_0x205da4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x205da4) {
            ctx->pc = 0x205DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205DA4u;
            // 0x205da8: 0xae490098  sw          $t1, 0x98($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205DBCu;
            goto label_205dbc;
        }
    }
    ctx->pc = 0x205DACu;
label_205dac:
    // 0x205dac: 0xc0705aa  jal         func_1C16A8
label_205db0:
    if (ctx->pc == 0x205DB0u) {
        ctx->pc = 0x205DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DACu;
        // 0x205db0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DB4u;
        goto label_205db4;
    }
    ctx->pc = 0x205DACu;
    SET_GPR_U32(ctx, 31, 0x205DB4u);
    ctx->pc = 0x205DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DACu;
    // 0x205db0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x205DACu, 0x205DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DB4u;
label_205db4:
    // 0x205db4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x205db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205db8:
    // 0x205db8: 0xae490098  sw          $t1, 0x98($s2)
    ctx->pc = 0x205db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 9));
label_205dbc:
    // 0x205dbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_205dc0:
    // 0x205dc0: 0x8c46d328  lw          $a2, -0x2CD8($v0)
    ctx->pc = 0x205dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_205dc4:
    // 0x205dc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x205dc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205dc8:
    // 0x205dc8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_205dcc:
    // 0x205dcc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205dd0:
    // 0x205dd0: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_205dd4:
    // 0x205dd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x205dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_205dd8:
    // 0x205dd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205ddc:
    // 0x205ddc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x205ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205de0:
    // 0x205de0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x205de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_205de4:
    // 0x205de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x205de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205de8:
    // 0x205de8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x205de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_205dec:
    // 0x205dec: 0x40f809  jalr        $v0
label_205df0:
    if (ctx->pc == 0x205DF0u) {
        ctx->pc = 0x205DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DECu;
        // 0x205df0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205DF4u;
        goto label_205df4;
    }
    ctx->pc = 0x205DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205DF4u);
        ctx->pc = 0x205DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DECu;
        // 0x205df0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DECu, 0x205DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205DF4u;
label_205df4:
    // 0x205df4: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_205df8:
    // 0x205df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205dfc:
    // 0x205dfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x205dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_205e00:
    // 0x205e00: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x205e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_205e04:
    // 0x205e04: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_205e08:
    // 0x205e08: 0x60f809  jalr        $v1
label_205e0c:
    if (ctx->pc == 0x205E0Cu) {
        ctx->pc = 0x205E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E08u;
        // 0x205e0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E10u;
        goto label_205e10;
    }
    ctx->pc = 0x205E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205E10u);
        ctx->pc = 0x205E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E08u;
        // 0x205e0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E08u, 0x205E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205E10u;
label_205e10:
    // 0x205e10: 0x8eb15024  lw          $s1, 0x5024($s5)
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20516)));
label_205e14:
    // 0x205e14: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x205e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_205e18:
    // 0x205e18: 0x86020078  lh          $v0, 0x78($s0)
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_205e1c:
    // 0x205e1c: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_205e20:
    // 0x205e20: 0xc081022  jal         func_204088
label_205e24:
    if (ctx->pc == 0x205E24u) {
        ctx->pc = 0x205E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E20u;
        // 0x205e24: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E28u;
        goto label_205e28;
    }
    ctx->pc = 0x205E20u;
    SET_GPR_U32(ctx, 31, 0x205E28u);
    ctx->pc = 0x205E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E20u;
    // 0x205e24: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x205E20u, 0x205E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E28u;
label_205e28:
    // 0x205e28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205e2c:
    // 0x205e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205e30:
    // 0x205e30: 0x60f809  jalr        $v1
label_205e34:
    if (ctx->pc == 0x205E34u) {
        ctx->pc = 0x205E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E30u;
        // 0x205e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E38u;
        goto label_205e38;
    }
    ctx->pc = 0x205E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205E38u);
        ctx->pc = 0x205E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E30u;
        // 0x205e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E30u, 0x205E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205E38u;
label_205e38:
    // 0x205e38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_205e3c:
    if (ctx->pc == 0x205E3Cu) {
        ctx->pc = 0x205E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E38u;
        // 0x205e3c: 0x24040083  addiu       $a0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E40u;
        goto label_205e40;
    }
    ctx->pc = 0x205E38u;
    {
        const bool branch_taken_0x205e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E38u;
        // 0x205e3c: 0x24040083  addiu       $a0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e38) {
            ctx->pc = 0x205E80u;
            goto label_205e80;
        }
    }
    ctx->pc = 0x205E40u;
label_205e40:
    // 0x205e40: 0x8e510098  lw          $s1, 0x98($s2)
    ctx->pc = 0x205e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_205e44:
    // 0x205e44: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x205e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_205e48:
    // 0x205e48: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_205e4c:
    // 0x205e4c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_205e50:
    // 0x205e50: 0xc067b9c  jal         func_19EE70
label_205e54:
    if (ctx->pc == 0x205E54u) {
        ctx->pc = 0x205E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E50u;
        // 0x205e54: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E58u;
        goto label_205e58;
    }
    ctx->pc = 0x205E50u;
    SET_GPR_U32(ctx, 31, 0x205E58u);
    ctx->pc = 0x205E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E50u;
    // 0x205e54: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x205E50u, 0x205E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E58u;
label_205e58:
    // 0x205e58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205e5c:
    // 0x205e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205e60:
    // 0x205e60: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_205e64:
    // 0x205e64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_205e68:
    // 0x205e68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205e6c:
    // 0x205e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205e70:
    // 0x205e70: 0x60f809  jalr        $v1
label_205e74:
    if (ctx->pc == 0x205E74u) {
        ctx->pc = 0x205E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E70u;
        // 0x205e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E78u;
        goto label_205e78;
    }
    ctx->pc = 0x205E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205E78u);
        ctx->pc = 0x205E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E70u;
        // 0x205e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E70u, 0x205E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205E78u;
label_205e78:
    // 0x205e78: 0x10000011  b           . + 4 + (0x11 << 2)
label_205e7c:
    if (ctx->pc == 0x205E7Cu) {
        ctx->pc = 0x205E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E78u;
        // 0x205e7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E80u;
        goto label_205e80;
    }
    ctx->pc = 0x205E78u;
    {
        const bool branch_taken_0x205e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E78u;
        // 0x205e7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e78) {
            ctx->pc = 0x205EC0u;
            goto label_205ec0;
        }
    }
    ctx->pc = 0x205E80u;
label_205e80:
    // 0x205e80: 0x8e510098  lw          $s1, 0x98($s2)
    ctx->pc = 0x205e80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_205e84:
    // 0x205e84: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x205e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_205e88:
    // 0x205e88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_205e8c:
    // 0x205e8c: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x205e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_205e90:
    // 0x205e90: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x205e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_205e94:
    // 0x205e94: 0xc067b9c  jal         func_19EE70
label_205e98:
    if (ctx->pc == 0x205E98u) {
        ctx->pc = 0x205E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E94u;
        // 0x205e98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205E9Cu;
        goto label_205e9c;
    }
    ctx->pc = 0x205E94u;
    SET_GPR_U32(ctx, 31, 0x205E9Cu);
    ctx->pc = 0x205E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E94u;
    // 0x205e98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x205E94u, 0x205E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E9Cu;
label_205e9c:
    // 0x205e9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205ea0:
    // 0x205ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205ea4:
    // 0x205ea4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x205ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_205ea8:
    // 0x205ea8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x205ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_205eac:
    // 0x205eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205eb0:
    // 0x205eb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205eb4:
    // 0x205eb4: 0x60f809  jalr        $v1
label_205eb8:
    if (ctx->pc == 0x205EB8u) {
        ctx->pc = 0x205EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EB4u;
        // 0x205eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205EBCu;
        goto label_205ebc;
    }
    ctx->pc = 0x205EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205EBCu);
        ctx->pc = 0x205EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EB4u;
        // 0x205eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EB4u, 0x205EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205EBCu;
label_205ebc:
    // 0x205ebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205ec0:
    // 0x205ec0: 0x8ecb27e4  lw          $t3, 0x27E4($s6)
    ctx->pc = 0x205ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_205ec4:
    // 0x205ec4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x205ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_205ec8:
    // 0x205ec8: 0x27d48840  addiu       $s4, $fp, -0x77C0
    ctx->pc = 0x205ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936640));
label_205ecc:
    // 0x205ecc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x205eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_205ed0:
    // 0x205ed0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x205ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_205ed4:
    // 0x205ed4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x205ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_205ed8:
    // 0x205ed8: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x205ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
label_205edc:
    // 0x205edc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x205edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205ee0:
    // 0x205ee0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x205ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205ee4:
    // 0x205ee4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_205ee8:
    // 0x205ee8: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_205eec:
    // 0x205eec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x205eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_205ef0:
    // 0x205ef0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205ef0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205ef4:
    // 0x205ef4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_205ef8:
    // 0x205ef8: 0x40f809  jalr        $v0
label_205efc:
    if (ctx->pc == 0x205EFCu) {
        ctx->pc = 0x205EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EF8u;
        // 0x205efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F00u;
        goto label_205f00;
    }
    ctx->pc = 0x205EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205F00u);
        ctx->pc = 0x205EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EF8u;
        // 0x205efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EF8u, 0x205F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205F00u;
label_205f00:
    // 0x205f00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_205f04:
    if (ctx->pc == 0x205F04u) {
        ctx->pc = 0x205F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F00u;
        // 0x205f04: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F08u;
        goto label_205f08;
    }
    ctx->pc = 0x205F00u;
    {
        const bool branch_taken_0x205f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f00) {
            ctx->pc = 0x205F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F00u;
            // 0x205f04: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F14u;
            goto label_205f14;
        }
    }
    ctx->pc = 0x205F08u;
label_205f08:
    // 0x205f08: 0xc074fbc  jal         func_1D3EF0
label_205f0c:
    if (ctx->pc == 0x205F0Cu) {
        ctx->pc = 0x205F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F08u;
        // 0x205f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F10u;
        goto label_205f10;
    }
    ctx->pc = 0x205F08u;
    SET_GPR_U32(ctx, 31, 0x205F10u);
    ctx->pc = 0x205F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F08u;
    // 0x205f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x205F08u, 0x205F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F10u;
label_205f10:
    // 0x205f10: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x205f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_205f14:
    // 0x205f14: 0xc080ec6  jal         func_203B18
label_205f18:
    if (ctx->pc == 0x205F18u) {
        ctx->pc = 0x205F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F14u;
        // 0x205f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F1Cu;
        goto label_205f1c;
    }
    ctx->pc = 0x205F14u;
    SET_GPR_U32(ctx, 31, 0x205F1Cu);
    ctx->pc = 0x205F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F14u;
    // 0x205f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x205F14u, 0x205F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F1Cu;
label_205f1c:
    // 0x205f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_205f20:
    // 0x205f20: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x205f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_205f24:
    // 0x205f24: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x205f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_205f28:
    // 0x205f28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_205f2c:
    // 0x205f2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_205f30:
    // 0x205f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205f34:
    // 0x205f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205f38:
    // 0x205f38: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x205f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205f3c:
    // 0x205f3c: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_205f40:
    // 0x205f40: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x205f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_205f44:
    // 0x205f44: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x205f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_205f48:
    // 0x205f48: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x205f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_205f4c:
    // 0x205f4c: 0xc075044  jal         func_1D4110
label_205f50:
    if (ctx->pc == 0x205F50u) {
        ctx->pc = 0x205F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F4Cu;
        // 0x205f50: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F54u;
        goto label_205f54;
    }
    ctx->pc = 0x205F4Cu;
    SET_GPR_U32(ctx, 31, 0x205F54u);
    ctx->pc = 0x205F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F4Cu;
    // 0x205f50: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x205F4Cu, 0x205F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F54u;
label_205f54:
    // 0x205f54: 0xc080ebe  jal         func_203AF8
label_205f58:
    if (ctx->pc == 0x205F58u) {
        ctx->pc = 0x205F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F54u;
        // 0x205f58: 0x8ef0d328  lw          $s0, -0x2CD8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F5Cu;
        goto label_205f5c;
    }
    ctx->pc = 0x205F54u;
    SET_GPR_U32(ctx, 31, 0x205F5Cu);
    ctx->pc = 0x205F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F54u;
    // 0x205f58: 0x8ef0d328  lw          $s0, -0x2CD8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x205F54u, 0x205F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F5Cu;
label_205f5c:
    // 0x205f5c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x205f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205f60:
    // 0x205f60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205f64:
    // 0x205f64: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_205f68:
    // 0x205f68: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x205f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_205f6c:
    // 0x205f6c: 0xac710088  sw          $s1, 0x88($v1)
    ctx->pc = 0x205f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 17));
label_205f70:
    // 0x205f70: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x205f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205f74:
    // 0x205f74: 0xc067b9c  jal         func_19EE70
label_205f78:
    if (ctx->pc == 0x205F78u) {
        ctx->pc = 0x205F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F74u;
        // 0x205f78: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205F7Cu;
        goto label_205f7c;
    }
    ctx->pc = 0x205F74u;
    SET_GPR_U32(ctx, 31, 0x205F7Cu);
    ctx->pc = 0x205F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F74u;
    // 0x205f78: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x205F74u, 0x205F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F7Cu;
label_205f7c:
    // 0x205f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205f80:
    // 0x205f80: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x205f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_205f84:
    // 0x205f84: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x205f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_205f88:
    // 0x205f88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205f8c:
    // 0x205f8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205f90:
    // 0x205f90: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x205f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205f94:
    // 0x205f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205f98:
    // 0x205f98: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x205f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_205f9c:
    // 0x205f9c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205fa0:
    // 0x205fa0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x205fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205fa4:
    // 0x205fa4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x205fa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205fa8:
    // 0x205fa8: 0xc07508c  jal         func_1D4230
label_205fac:
    if (ctx->pc == 0x205FACu) {
        ctx->pc = 0x205FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FA8u;
        // 0x205fac: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205FB0u;
        goto label_205fb0;
    }
    ctx->pc = 0x205FA8u;
    SET_GPR_U32(ctx, 31, 0x205FB0u);
    ctx->pc = 0x205FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FA8u;
    // 0x205fac: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x205FA8u, 0x205FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FB0u;
label_205fb0:
    // 0x205fb0: 0xc067b9c  jal         func_19EE70
label_205fb4:
    if (ctx->pc == 0x205FB4u) {
        ctx->pc = 0x205FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FB0u;
        // 0x205fb4: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205FB8u;
        goto label_205fb8;
    }
    ctx->pc = 0x205FB0u;
    SET_GPR_U32(ctx, 31, 0x205FB8u);
    ctx->pc = 0x205FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FB0u;
    // 0x205fb4: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x205FB0u, 0x205FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FB8u;
label_205fb8:
    // 0x205fb8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_205fbc:
    // 0x205fbc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x205fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_205fc0:
    // 0x205fc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205fc4:
    // 0x205fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205fc8:
    // 0x205fc8: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205fcc:
    // 0x205fcc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x205fccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205fd0:
    // 0x205fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205fd4:
    // 0x205fd4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205fd8:
    // 0x205fd8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x205fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205fdc:
    // 0x205fdc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x205fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205fe0:
    // 0x205fe0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x205fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_205fe4:
    // 0x205fe4: 0xc07508c  jal         func_1D4230
label_205fe8:
    if (ctx->pc == 0x205FE8u) {
        ctx->pc = 0x205FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FE4u;
        // 0x205fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205FECu;
        goto label_205fec;
    }
    ctx->pc = 0x205FE4u;
    SET_GPR_U32(ctx, 31, 0x205FECu);
    ctx->pc = 0x205FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FE4u;
    // 0x205fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x205FE4u, 0x205FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FECu;
label_205fec:
    // 0x205fec: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x205fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205ff0:
    // 0x205ff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205ff4:
    // 0x205ff4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_205ff8:
    // 0x205ff8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_205ffc:
    // 0x205ffc: 0x60f809  jalr        $v1
label_206000:
    if (ctx->pc == 0x206000u) {
        ctx->pc = 0x206000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FFCu;
        // 0x206000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206004u;
        goto label_206004;
    }
    ctx->pc = 0x205FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206004u);
        ctx->pc = 0x206000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FFCu;
        // 0x206000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FFCu, 0x206004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206004u;
label_206004:
    // 0x206004: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206008:
    // 0x206008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20600c:
    // 0x20600c: 0xc0752e2  jal         func_1D4B88
label_206010:
    if (ctx->pc == 0x206010u) {
        ctx->pc = 0x206010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20600Cu;
        // 0x206010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206014u;
        goto label_206014;
    }
    ctx->pc = 0x20600Cu;
    SET_GPR_U32(ctx, 31, 0x206014u);
    ctx->pc = 0x206010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20600Cu;
    // 0x206010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x20600Cu, 0x206014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206014u;
label_206014:
    // 0x206014: 0xc080ebe  jal         func_203AF8
label_206018:
    if (ctx->pc == 0x206018u) {
        ctx->pc = 0x20601Cu;
        goto label_20601c;
    }
    ctx->pc = 0x206014u;
    SET_GPR_U32(ctx, 31, 0x20601Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x206014u, 0x20601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20601Cu;
label_20601c:
    // 0x20601c: 0xc080ec2  jal         func_203B08
label_206020:
    if (ctx->pc == 0x206020u) {
        ctx->pc = 0x206020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20601Cu;
        // 0x206020: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206024u;
        goto label_206024;
    }
    ctx->pc = 0x20601Cu;
    SET_GPR_U32(ctx, 31, 0x206024u);
    ctx->pc = 0x206020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20601Cu;
    // 0x206020: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20601Cu, 0x206024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206024u;
label_206024:
    // 0x206024: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x206024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_206028:
    // 0x206028: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x206028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20602c:
    // 0x20602c: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x20602cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_206030:
    // 0x206030: 0x24a588a8  addiu       $a1, $a1, -0x7758
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936744));
label_206034:
    // 0x206034: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x206034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_206038:
    // 0x206038: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x206038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20603c:
    // 0x20603c: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x20603cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_206040:
    // 0x206040: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_206044:
    // 0x206044: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x206044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_206048:
    // 0x206048: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x206048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20604c:
    // 0x20604c: 0x2409007b  addiu       $t1, $zero, 0x7B
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_206050:
    // 0x206050: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x206050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206054:
    // 0x206054: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x206054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_206058:
    // 0x206058: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x206058u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20605c:
    // 0x20605c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_206060:
    // 0x206060: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x206060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_206064:
    // 0x206064: 0x40f809  jalr        $v0
label_206068:
    if (ctx->pc == 0x206068u) {
        ctx->pc = 0x206068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206064u;
        // 0x206068: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20606Cu;
        goto label_20606c;
    }
    ctx->pc = 0x206064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20606Cu);
        ctx->pc = 0x206068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206064u;
        // 0x206068: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206064u, 0x20606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20606Cu;
label_20606c:
    // 0x20606c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_206070:
    if (ctx->pc == 0x206070u) {
        ctx->pc = 0x206070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20606Cu;
        // 0x206070: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206074u;
        goto label_206074;
    }
    ctx->pc = 0x20606Cu;
    {
        const bool branch_taken_0x20606c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20606c) {
            ctx->pc = 0x206070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20606Cu;
            // 0x206070: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206080u;
            goto label_206080;
        }
    }
    ctx->pc = 0x206074u;
label_206074:
    // 0x206074: 0xc073a9c  jal         func_1CEA70
label_206078:
    if (ctx->pc == 0x206078u) {
        ctx->pc = 0x206078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206074u;
        // 0x206078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20607Cu;
        goto label_20607c;
    }
    ctx->pc = 0x206074u;
    SET_GPR_U32(ctx, 31, 0x20607Cu);
    ctx->pc = 0x206078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206074u;
    // 0x206078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x206074u, 0x20607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20607Cu;
label_20607c:
    // 0x20607c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20607cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206080:
    // 0x206080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206084:
    // 0x206084: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206088:
    // 0x206088: 0xc073ad0  jal         func_1CEB40
label_20608c:
    if (ctx->pc == 0x20608Cu) {
        ctx->pc = 0x20608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206088u;
        // 0x20608c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206090u;
        goto label_206090;
    }
    ctx->pc = 0x206088u;
    SET_GPR_U32(ctx, 31, 0x206090u);
    ctx->pc = 0x20608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206088u;
    // 0x20608c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x206088u, 0x206090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206090u;
label_206090:
    // 0x206090: 0xc067b9c  jal         func_19EE70
label_206094:
    if (ctx->pc == 0x206094u) {
        ctx->pc = 0x206094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206090u;
        // 0x206094: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206098u;
        goto label_206098;
    }
    ctx->pc = 0x206090u;
    SET_GPR_U32(ctx, 31, 0x206098u);
    ctx->pc = 0x206094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206090u;
    // 0x206094: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206090u, 0x206098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206098u;
label_206098:
    // 0x206098: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20609c:
    // 0x20609c: 0xc073b0a  jal         func_1CEC28
label_2060a0:
    if (ctx->pc == 0x2060A0u) {
        ctx->pc = 0x2060A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20609Cu;
        // 0x2060a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060A4u;
        goto label_2060a4;
    }
    ctx->pc = 0x20609Cu;
    SET_GPR_U32(ctx, 31, 0x2060A4u);
    ctx->pc = 0x2060A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20609Cu;
    // 0x2060a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20609Cu, 0x2060A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060A4u;
label_2060a4:
    // 0x2060a4: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x2060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_2060a8:
    // 0x2060a8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2060a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2060ac:
    // 0x2060ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2060acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2060b0:
    // 0x2060b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2060b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2060b4:
    // 0x2060b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2060b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2060b8:
    // 0x2060b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2060b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2060bc:
    // 0x2060bc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2060bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2060c0:
    // 0x2060c0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2060c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2060c4:
    // 0x2060c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2060c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2060c8:
    // 0x2060c8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2060c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2060cc:
    // 0x2060cc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2060ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2060d0:
    // 0x2060d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2060d4:
    // 0x2060d4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2060d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2060d8:
    // 0x2060d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2060d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2060dc:
    // 0x2060dc: 0x3e00008  jr          $ra
label_2060e0:
    if (ctx->pc == 0x2060E0u) {
        ctx->pc = 0x2060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060DCu;
        // 0x2060e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060E4u;
        goto label_2060e4;
    }
    ctx->pc = 0x2060DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060DCu;
        // 0x2060e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2060E4u;
label_2060e4:
    // 0x2060e4: 0x0  nop
    ctx->pc = 0x2060e4u;
    // NOP
    ctx->pc = 0x2060e8u;
}
