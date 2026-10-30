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

// Function: sub_00240898
// Address: 0x240898 - 0x240e38
void sub_00240898_0x240898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240898_0x240898");
#endif

    switch (ctx->pc) {
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408d4u: goto label_2408d4;
        case 0x2408d8u: goto label_2408d8;
        case 0x2408dcu: goto label_2408dc;
        case 0x2408e0u: goto label_2408e0;
        case 0x2408e4u: goto label_2408e4;
        case 0x2408e8u: goto label_2408e8;
        case 0x2408ecu: goto label_2408ec;
        case 0x2408f0u: goto label_2408f0;
        case 0x2408f4u: goto label_2408f4;
        case 0x2408f8u: goto label_2408f8;
        case 0x2408fcu: goto label_2408fc;
        case 0x240900u: goto label_240900;
        case 0x240904u: goto label_240904;
        case 0x240908u: goto label_240908;
        case 0x24090cu: goto label_24090c;
        case 0x240910u: goto label_240910;
        case 0x240914u: goto label_240914;
        case 0x240918u: goto label_240918;
        case 0x24091cu: goto label_24091c;
        case 0x240920u: goto label_240920;
        case 0x240924u: goto label_240924;
        case 0x240928u: goto label_240928;
        case 0x24092cu: goto label_24092c;
        case 0x240930u: goto label_240930;
        case 0x240934u: goto label_240934;
        case 0x240938u: goto label_240938;
        case 0x24093cu: goto label_24093c;
        case 0x240940u: goto label_240940;
        case 0x240944u: goto label_240944;
        case 0x240948u: goto label_240948;
        case 0x24094cu: goto label_24094c;
        case 0x240950u: goto label_240950;
        case 0x240954u: goto label_240954;
        case 0x240958u: goto label_240958;
        case 0x24095cu: goto label_24095c;
        case 0x240960u: goto label_240960;
        case 0x240964u: goto label_240964;
        case 0x240968u: goto label_240968;
        case 0x24096cu: goto label_24096c;
        case 0x240970u: goto label_240970;
        case 0x240974u: goto label_240974;
        case 0x240978u: goto label_240978;
        case 0x24097cu: goto label_24097c;
        case 0x240980u: goto label_240980;
        case 0x240984u: goto label_240984;
        case 0x240988u: goto label_240988;
        case 0x24098cu: goto label_24098c;
        case 0x240990u: goto label_240990;
        case 0x240994u: goto label_240994;
        case 0x240998u: goto label_240998;
        case 0x24099cu: goto label_24099c;
        case 0x2409a0u: goto label_2409a0;
        case 0x2409a4u: goto label_2409a4;
        case 0x2409a8u: goto label_2409a8;
        case 0x2409acu: goto label_2409ac;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        case 0x240ab0u: goto label_240ab0;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ab8u: goto label_240ab8;
        case 0x240abcu: goto label_240abc;
        case 0x240ac0u: goto label_240ac0;
        case 0x240ac4u: goto label_240ac4;
        case 0x240ac8u: goto label_240ac8;
        case 0x240accu: goto label_240acc;
        case 0x240ad0u: goto label_240ad0;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ad8u: goto label_240ad8;
        case 0x240adcu: goto label_240adc;
        case 0x240ae0u: goto label_240ae0;
        case 0x240ae4u: goto label_240ae4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240aecu: goto label_240aec;
        case 0x240af0u: goto label_240af0;
        case 0x240af4u: goto label_240af4;
        case 0x240af8u: goto label_240af8;
        case 0x240afcu: goto label_240afc;
        case 0x240b00u: goto label_240b00;
        case 0x240b04u: goto label_240b04;
        case 0x240b08u: goto label_240b08;
        case 0x240b0cu: goto label_240b0c;
        case 0x240b10u: goto label_240b10;
        case 0x240b14u: goto label_240b14;
        case 0x240b18u: goto label_240b18;
        case 0x240b1cu: goto label_240b1c;
        case 0x240b20u: goto label_240b20;
        case 0x240b24u: goto label_240b24;
        case 0x240b28u: goto label_240b28;
        case 0x240b2cu: goto label_240b2c;
        case 0x240b30u: goto label_240b30;
        case 0x240b34u: goto label_240b34;
        case 0x240b38u: goto label_240b38;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b40u: goto label_240b40;
        case 0x240b44u: goto label_240b44;
        case 0x240b48u: goto label_240b48;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b50u: goto label_240b50;
        case 0x240b54u: goto label_240b54;
        case 0x240b58u: goto label_240b58;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b60u: goto label_240b60;
        case 0x240b64u: goto label_240b64;
        case 0x240b68u: goto label_240b68;
        case 0x240b6cu: goto label_240b6c;
        case 0x240b70u: goto label_240b70;
        case 0x240b74u: goto label_240b74;
        case 0x240b78u: goto label_240b78;
        case 0x240b7cu: goto label_240b7c;
        case 0x240b80u: goto label_240b80;
        case 0x240b84u: goto label_240b84;
        case 0x240b88u: goto label_240b88;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b90u: goto label_240b90;
        case 0x240b94u: goto label_240b94;
        case 0x240b98u: goto label_240b98;
        case 0x240b9cu: goto label_240b9c;
        case 0x240ba0u: goto label_240ba0;
        case 0x240ba4u: goto label_240ba4;
        case 0x240ba8u: goto label_240ba8;
        case 0x240bacu: goto label_240bac;
        case 0x240bb0u: goto label_240bb0;
        case 0x240bb4u: goto label_240bb4;
        case 0x240bb8u: goto label_240bb8;
        case 0x240bbcu: goto label_240bbc;
        case 0x240bc0u: goto label_240bc0;
        case 0x240bc4u: goto label_240bc4;
        case 0x240bc8u: goto label_240bc8;
        case 0x240bccu: goto label_240bcc;
        case 0x240bd0u: goto label_240bd0;
        case 0x240bd4u: goto label_240bd4;
        case 0x240bd8u: goto label_240bd8;
        case 0x240bdcu: goto label_240bdc;
        case 0x240be0u: goto label_240be0;
        case 0x240be4u: goto label_240be4;
        case 0x240be8u: goto label_240be8;
        case 0x240becu: goto label_240bec;
        case 0x240bf0u: goto label_240bf0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bf8u: goto label_240bf8;
        case 0x240bfcu: goto label_240bfc;
        case 0x240c00u: goto label_240c00;
        case 0x240c04u: goto label_240c04;
        case 0x240c08u: goto label_240c08;
        case 0x240c0cu: goto label_240c0c;
        case 0x240c10u: goto label_240c10;
        case 0x240c14u: goto label_240c14;
        case 0x240c18u: goto label_240c18;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c20u: goto label_240c20;
        case 0x240c24u: goto label_240c24;
        case 0x240c28u: goto label_240c28;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c30u: goto label_240c30;
        case 0x240c34u: goto label_240c34;
        case 0x240c38u: goto label_240c38;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c40u: goto label_240c40;
        case 0x240c44u: goto label_240c44;
        case 0x240c48u: goto label_240c48;
        case 0x240c4cu: goto label_240c4c;
        case 0x240c50u: goto label_240c50;
        case 0x240c54u: goto label_240c54;
        case 0x240c58u: goto label_240c58;
        case 0x240c5cu: goto label_240c5c;
        case 0x240c60u: goto label_240c60;
        case 0x240c64u: goto label_240c64;
        case 0x240c68u: goto label_240c68;
        case 0x240c6cu: goto label_240c6c;
        case 0x240c70u: goto label_240c70;
        case 0x240c74u: goto label_240c74;
        case 0x240c78u: goto label_240c78;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c80u: goto label_240c80;
        case 0x240c84u: goto label_240c84;
        case 0x240c88u: goto label_240c88;
        case 0x240c8cu: goto label_240c8c;
        case 0x240c90u: goto label_240c90;
        case 0x240c94u: goto label_240c94;
        case 0x240c98u: goto label_240c98;
        case 0x240c9cu: goto label_240c9c;
        case 0x240ca0u: goto label_240ca0;
        case 0x240ca4u: goto label_240ca4;
        case 0x240ca8u: goto label_240ca8;
        case 0x240cacu: goto label_240cac;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cb4u: goto label_240cb4;
        case 0x240cb8u: goto label_240cb8;
        case 0x240cbcu: goto label_240cbc;
        case 0x240cc0u: goto label_240cc0;
        case 0x240cc4u: goto label_240cc4;
        case 0x240cc8u: goto label_240cc8;
        case 0x240cccu: goto label_240ccc;
        case 0x240cd0u: goto label_240cd0;
        case 0x240cd4u: goto label_240cd4;
        case 0x240cd8u: goto label_240cd8;
        case 0x240cdcu: goto label_240cdc;
        case 0x240ce0u: goto label_240ce0;
        case 0x240ce4u: goto label_240ce4;
        case 0x240ce8u: goto label_240ce8;
        case 0x240cecu: goto label_240cec;
        case 0x240cf0u: goto label_240cf0;
        case 0x240cf4u: goto label_240cf4;
        case 0x240cf8u: goto label_240cf8;
        case 0x240cfcu: goto label_240cfc;
        case 0x240d00u: goto label_240d00;
        case 0x240d04u: goto label_240d04;
        case 0x240d08u: goto label_240d08;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d10u: goto label_240d10;
        case 0x240d14u: goto label_240d14;
        case 0x240d18u: goto label_240d18;
        case 0x240d1cu: goto label_240d1c;
        case 0x240d20u: goto label_240d20;
        case 0x240d24u: goto label_240d24;
        case 0x240d28u: goto label_240d28;
        case 0x240d2cu: goto label_240d2c;
        case 0x240d30u: goto label_240d30;
        case 0x240d34u: goto label_240d34;
        case 0x240d38u: goto label_240d38;
        case 0x240d3cu: goto label_240d3c;
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        default: break;
    }

    ctx->pc = 0x240898u;

label_240898:
    // 0x240898: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_24089c:
    // 0x24089c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x24089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2408a0:
    // 0x2408a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2408a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2408a4:
    // 0x2408a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2408a8:
    // 0x2408a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2408a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2408ac:
    // 0x2408ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2408acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2408b0:
    // 0x2408b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2408b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2408b4:
    // 0x2408b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2408b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2408b8:
    // 0x2408b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2408b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2408bc:
    // 0x2408bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2408bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2408c0:
    // 0x2408c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2408c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2408c4:
    // 0x2408c4: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2408c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2408c8:
    // 0x2408c8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2408c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2408cc:
    // 0x2408cc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2408ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2408d0:
    // 0x2408d0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2408d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2408d4:
    // 0x2408d4: 0xc0874fa  jal         func_21D3E8
label_2408d8:
    if (ctx->pc == 0x2408D8u) {
        ctx->pc = 0x2408D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408D4u;
        // 0x2408d8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408DCu;
        goto label_2408dc;
    }
    ctx->pc = 0x2408D4u;
    SET_GPR_U32(ctx, 31, 0x2408DCu);
    ctx->pc = 0x2408D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408D4u;
    // 0x2408d8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2408D4u, 0x2408DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408DCu;
label_2408dc:
    // 0x2408dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2408dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2408e0:
    // 0x2408e0: 0xc0874fa  jal         func_21D3E8
label_2408e4:
    if (ctx->pc == 0x2408E4u) {
        ctx->pc = 0x2408E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408E0u;
        // 0x2408e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408E8u;
        goto label_2408e8;
    }
    ctx->pc = 0x2408E0u;
    SET_GPR_U32(ctx, 31, 0x2408E8u);
    ctx->pc = 0x2408E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408E0u;
    // 0x2408e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2408E0u, 0x2408E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408E8u;
label_2408e8:
    // 0x2408e8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2408e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2408ec:
    // 0x2408ec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_2408f0:
    if (ctx->pc == 0x2408F0u) {
        ctx->pc = 0x2408F4u;
        goto label_2408f4;
    }
    ctx->pc = 0x2408ECu;
    {
        const bool branch_taken_0x2408ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2408ec) {
            ctx->pc = 0x240954u;
            goto label_240954;
        }
    }
    ctx->pc = 0x2408F4u;
label_2408f4:
    // 0x2408f4: 0x862201c6  lh          $v0, 0x1C6($s1)
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
label_2408f8:
    // 0x2408f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2408fc:
    if (ctx->pc == 0x2408FCu) {
        ctx->pc = 0x240900u;
        goto label_240900;
    }
    ctx->pc = 0x2408F8u;
    {
        const bool branch_taken_0x2408f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2408f8) {
            ctx->pc = 0x240908u;
            goto label_240908;
        }
    }
    ctx->pc = 0x240900u;
label_240900:
    // 0x240900: 0xc088420  jal         func_221080
label_240904:
    if (ctx->pc == 0x240904u) {
        ctx->pc = 0x240904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240900u;
        // 0x240904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240908u;
        goto label_240908;
    }
    ctx->pc = 0x240900u;
    SET_GPR_U32(ctx, 31, 0x240908u);
    ctx->pc = 0x240904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240900u;
    // 0x240904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x240900u, 0x240908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240908u;
label_240908:
    // 0x240908: 0xc089f12  jal         func_227C48
label_24090c:
    if (ctx->pc == 0x24090Cu) {
        ctx->pc = 0x24090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240908u;
        // 0x24090c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240910u;
        goto label_240910;
    }
    ctx->pc = 0x240908u;
    SET_GPR_U32(ctx, 31, 0x240910u);
    ctx->pc = 0x24090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240908u;
    // 0x24090c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x240908u, 0x240910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240910u;
label_240910:
    // 0x240910: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x240910u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_240914:
    // 0x240914: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_240918:
    if (ctx->pc == 0x240918u) {
        ctx->pc = 0x240918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240914u;
        // 0x240918: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24091Cu;
        goto label_24091c;
    }
    ctx->pc = 0x240914u;
    {
        const bool branch_taken_0x240914 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240914u;
        // 0x240918: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240914) {
            ctx->pc = 0x24093Cu;
            goto label_24093c;
        }
    }
    ctx->pc = 0x24091Cu;
label_24091c:
    // 0x24091c: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x24091cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_240920:
    // 0x240920: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240924:
    // 0x240924: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240928:
    // 0x240928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24092c:
    // 0x24092c: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x24092cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_240930:
    // 0x240930: 0x12383f  dsra32      $a3, $s2, 0
    ctx->pc = 0x240930u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 18) >> (32 + 0));
label_240934:
    // 0x240934: 0x10000003  b           . + 4 + (0x3 << 2)
label_240938:
    if (ctx->pc == 0x240938u) {
        ctx->pc = 0x240938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240934u;
        // 0x240938: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24093Cu;
        goto label_24093c;
    }
    ctx->pc = 0x240934u;
    {
        const bool branch_taken_0x240934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240934u;
        // 0x240938: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240934) {
            ctx->pc = 0x240944u;
            goto label_240944;
        }
    }
    ctx->pc = 0x24093Cu;
label_24093c:
    // 0x24093c: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x24093cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_240940:
    // 0x240940: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_240944:
    // 0x240944: 0x4a00029  bltz        $a1, . + 4 + (0x29 << 2)
label_240948:
    if (ctx->pc == 0x240948u) {
        ctx->pc = 0x240948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240944u;
        // 0x240948: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24094Cu;
        goto label_24094c;
    }
    ctx->pc = 0x240944u;
    {
        const bool branch_taken_0x240944 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240944u;
        // 0x240948: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240944) {
            ctx->pc = 0x2409ECu;
            goto label_2409ec;
        }
    }
    ctx->pc = 0x24094Cu;
label_24094c:
    // 0x24094c: 0x10000024  b           . + 4 + (0x24 << 2)
label_240950:
    if (ctx->pc == 0x240950u) {
        ctx->pc = 0x240950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24094Cu;
        // 0x240950: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240954u;
        goto label_240954;
    }
    ctx->pc = 0x24094Cu;
    {
        const bool branch_taken_0x24094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24094Cu;
        // 0x240950: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24094c) {
            ctx->pc = 0x2409E0u;
            goto label_2409e0;
        }
    }
    ctx->pc = 0x240954u;
label_240954:
    // 0x240954: 0xc089fda  jal         func_227F68
label_240958:
    if (ctx->pc == 0x240958u) {
        ctx->pc = 0x240958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240954u;
        // 0x240958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24095Cu;
        goto label_24095c;
    }
    ctx->pc = 0x240954u;
    SET_GPR_U32(ctx, 31, 0x24095Cu);
    ctx->pc = 0x240958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240954u;
    // 0x240958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x240954u, 0x24095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24095Cu;
label_24095c:
    // 0x24095c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_240960:
    if (ctx->pc == 0x240960u) {
        ctx->pc = 0x240960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24095Cu;
        // 0x240960: 0x862201c6  lh          $v0, 0x1C6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240964u;
        goto label_240964;
    }
    ctx->pc = 0x24095Cu;
    {
        const bool branch_taken_0x24095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24095c) {
            ctx->pc = 0x240960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24095Cu;
            // 0x240960: 0x862201c6  lh          $v0, 0x1C6($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240978u;
            goto label_240978;
        }
    }
    ctx->pc = 0x240964u;
label_240964:
    // 0x240964: 0xc089f4a  jal         func_227D28
label_240968:
    if (ctx->pc == 0x240968u) {
        ctx->pc = 0x240968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240964u;
        // 0x240968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24096Cu;
        goto label_24096c;
    }
    ctx->pc = 0x240964u;
    SET_GPR_U32(ctx, 31, 0x24096Cu);
    ctx->pc = 0x240968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240964u;
    // 0x240968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x240964u, 0x24096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24096Cu;
label_24096c:
    // 0x24096c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_240970:
    if (ctx->pc == 0x240970u) {
        ctx->pc = 0x240970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24096Cu;
        // 0x240970: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240974u;
        goto label_240974;
    }
    ctx->pc = 0x24096Cu;
    {
        const bool branch_taken_0x24096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24096Cu;
        // 0x240970: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24096c) {
            ctx->pc = 0x240A08u;
            goto label_240a08;
        }
    }
    ctx->pc = 0x240974u;
label_240974:
    // 0x240974: 0x862201c6  lh          $v0, 0x1C6($s1)
    ctx->pc = 0x240974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
label_240978:
    // 0x240978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24097c:
    if (ctx->pc == 0x24097Cu) {
        ctx->pc = 0x24097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240978u;
        // 0x24097c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240980u;
        goto label_240980;
    }
    ctx->pc = 0x240978u;
    {
        const bool branch_taken_0x240978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240978u;
        // 0x24097c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240978) {
            ctx->pc = 0x24098Cu;
            goto label_24098c;
        }
    }
    ctx->pc = 0x240980u;
label_240980:
    // 0x240980: 0xc088420  jal         func_221080
label_240984:
    if (ctx->pc == 0x240984u) {
        ctx->pc = 0x240984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240980u;
        // 0x240984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240988u;
        goto label_240988;
    }
    ctx->pc = 0x240980u;
    SET_GPR_U32(ctx, 31, 0x240988u);
    ctx->pc = 0x240984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240980u;
    // 0x240984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x240980u, 0x240988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240988u;
label_240988:
    // 0x240988: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x240988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_24098c:
    // 0x24098c: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x24098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_240990:
    // 0x240990: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x240990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_240994:
    // 0x240994: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x240994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_240998:
    // 0x240998: 0xb22301c3  sdl         $v1, 0x1C3($s1)
    ctx->pc = 0x240998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24099c:
    // 0x24099c: 0xb62301bc  sdr         $v1, 0x1BC($s1)
    ctx->pc = 0x24099cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2409a0:
    // 0x2409a0: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_2409a4:
    // 0x2409a4: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_2409a8:
    if (ctx->pc == 0x2409A8u) {
        ctx->pc = 0x2409A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409A4u;
        // 0x2409a8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409ACu;
        goto label_2409ac;
    }
    ctx->pc = 0x2409A4u;
    {
        const bool branch_taken_0x2409a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2409A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409A4u;
        // 0x2409a8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409a4) {
            ctx->pc = 0x2409CCu;
            goto label_2409cc;
        }
    }
    ctx->pc = 0x2409ACu;
label_2409ac:
    // 0x2409ac: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_2409b0:
    // 0x2409b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2409b4:
    // 0x2409b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2409b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2409b8:
    // 0x2409b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2409b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2409bc:
    // 0x2409bc: 0xdc74fff8  ld          $s4, -0x8($v1)
    ctx->pc = 0x2409bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2409c0:
    // 0x2409c0: 0x14383f  dsra32      $a3, $s4, 0
    ctx->pc = 0x2409c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 20) >> (32 + 0));
label_2409c4:
    // 0x2409c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2409c8:
    if (ctx->pc == 0x2409C8u) {
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409CCu;
        goto label_2409cc;
    }
    ctx->pc = 0x2409C4u;
    {
        const bool branch_taken_0x2409c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409c4) {
            ctx->pc = 0x2409D4u;
            goto label_2409d4;
        }
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x2409ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_2409d0:
    // 0x2409d0: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x2409d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_2409d4:
    // 0x2409d4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_2409d8:
    if (ctx->pc == 0x2409D8u) {
        ctx->pc = 0x2409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409D4u;
        // 0x2409d8: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409DCu;
        goto label_2409dc;
    }
    ctx->pc = 0x2409D4u;
    {
        const bool branch_taken_0x2409d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409D4u;
        // 0x2409d8: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409d4) {
            ctx->pc = 0x2409ECu;
            goto label_2409ec;
        }
    }
    ctx->pc = 0x2409DCu;
label_2409dc:
    // 0x2409dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2409e0:
    // 0x2409e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2409e4:
    // 0x2409e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2409e8:
    if (ctx->pc == 0x2409E8u) {
        ctx->pc = 0x2409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E4u;
        // 0x2409e8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409ECu;
        goto label_2409ec;
    }
    ctx->pc = 0x2409E4u;
    {
        const bool branch_taken_0x2409e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E4u;
        // 0x2409e8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409e4) {
            ctx->pc = 0x2409F0u;
            goto label_2409f0;
        }
    }
    ctx->pc = 0x2409ECu;
label_2409ec:
    // 0x2409ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2409ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2409f0:
    // 0x2409f0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2409f4:
    // 0x2409f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2409f8:
    // 0x2409f8: 0xe0f809  jalr        $a3
label_2409fc:
    if (ctx->pc == 0x2409FCu) {
        ctx->pc = 0x2409FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409F8u;
        // 0x2409fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A00u;
        goto label_240a00;
    }
    ctx->pc = 0x2409F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x240A00u);
        ctx->pc = 0x2409FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409F8u;
        // 0x2409fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2409F8u, 0x240A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240A00u;
label_240a00:
    // 0x240a00: 0x100000ff  b           . + 4 + (0xFF << 2)
label_240a04:
    if (ctx->pc == 0x240A04u) {
        ctx->pc = 0x240A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A00u;
        // 0x240a04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A08u;
        goto label_240a08;
    }
    ctx->pc = 0x240A00u;
    {
        const bool branch_taken_0x240a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A00u;
        // 0x240a04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a00) {
            ctx->pc = 0x240E00u;
            goto label_240e00;
        }
    }
    ctx->pc = 0x240A08u;
label_240a08:
    // 0x240a08: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_240a0c:
    // 0x240a0c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_240a10:
    // 0x240a10: 0x24464b00  addiu       $a2, $v0, 0x4B00
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_240a14:
    // 0x240a14: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x240a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_240a18:
    // 0x240a18: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x240a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_240a1c:
    // 0x240a1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240a20:
    // 0x240a20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x240a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_240a24:
    // 0x240a24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x240a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_240a28:
    // 0x240a28: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x240a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_240a2c:
    // 0x240a2c: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x240a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_240a30:
    // 0x240a30: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x240a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_240a34:
    // 0x240a34: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x240a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_240a38:
    // 0x240a38: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x240a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_240a3c:
    // 0x240a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_240a40:
    // 0x240a40: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x240a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_240a44:
    // 0x240a44: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x240a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240a48:
    // 0x240a48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x240a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_240a4c:
    // 0x240a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x240a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240a50:
    // 0x240a50: 0x0  nop
    ctx->pc = 0x240a50u;
    // NOP
label_240a54:
    // 0x240a54: 0x450000e5  bc1f        . + 4 + (0xE5 << 2)
label_240a58:
    if (ctx->pc == 0x240A58u) {
        ctx->pc = 0x240A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A54u;
        // 0x240a58: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A5Cu;
        goto label_240a5c;
    }
    ctx->pc = 0x240A54u;
    {
        const bool branch_taken_0x240a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A54u;
        // 0x240a58: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a54) {
            ctx->pc = 0x240DECu;
            goto label_240dec;
        }
    }
    ctx->pc = 0x240A5Cu;
label_240a5c:
    // 0x240a5c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x240a5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_240a60:
    // 0x240a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x240a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240a64:
    // 0x240a64: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_240a68:
    // 0x240a68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_240a6c:
    // 0x240a6c: 0xc0cd8ec  jal         func_3363B0
label_240a70:
    if (ctx->pc == 0x240A70u) {
        ctx->pc = 0x240A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A6Cu;
        // 0x240a70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A74u;
        goto label_240a74;
    }
    ctx->pc = 0x240A6Cu;
    SET_GPR_U32(ctx, 31, 0x240A74u);
    ctx->pc = 0x240A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A6Cu;
    // 0x240a70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x240A6Cu, 0x240A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A74u;
label_240a74:
    // 0x240a74: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x240a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_240a78:
    // 0x240a78: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x240a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_240a7c:
    // 0x240a7c: 0xc0cd5ea  jal         func_3357A8
label_240a80:
    if (ctx->pc == 0x240A80u) {
        ctx->pc = 0x240A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A7Cu;
        // 0x240a80: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A84u;
        goto label_240a84;
    }
    ctx->pc = 0x240A7Cu;
    SET_GPR_U32(ctx, 31, 0x240A84u);
    ctx->pc = 0x240A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A7Cu;
    // 0x240a80: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x240A7Cu, 0x240A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A84u;
label_240a84:
    // 0x240a84: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x240a84u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_240a88:
    // 0x240a88: 0xc0884f6  jal         func_2213D8
label_240a8c:
    if (ctx->pc == 0x240A8Cu) {
        ctx->pc = 0x240A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A88u;
        // 0x240a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A90u;
        goto label_240a90;
    }
    ctx->pc = 0x240A88u;
    SET_GPR_U32(ctx, 31, 0x240A90u);
    ctx->pc = 0x240A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A88u;
    // 0x240a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x240A88u, 0x240A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A90u;
label_240a90:
    // 0x240a90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x240a90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_240a94:
    // 0x240a94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_240a98:
    // 0x240a98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240a9c:
    // 0x240a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_240aa0:
    // 0x240aa0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x240aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_240aa4:
    // 0x240aa4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240aa8:
    // 0x240aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240aac:
    // 0x240aac: 0x0  nop
    ctx->pc = 0x240aacu;
    // NOP
label_240ab0:
    // 0x240ab0: 0x4600ad81  sub.s       $f22, $f21, $f0
    ctx->pc = 0x240ab0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_240ab4:
    // 0x240ab4: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x240ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240ab8:
    // 0x240ab8: 0x0  nop
    ctx->pc = 0x240ab8u;
    // NOP
label_240abc:
    // 0x240abc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_240ac0:
    if (ctx->pc == 0x240AC0u) {
        ctx->pc = 0x240AC4u;
        goto label_240ac4;
    }
    ctx->pc = 0x240ABCu;
    {
        const bool branch_taken_0x240abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240abc) {
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x240AC4u;
label_240ac4:
    // 0x240ac4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_240ac8:
    // 0x240ac8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240acc:
    // 0x240acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240ad0:
    // 0x240ad0: 0x0  nop
    ctx->pc = 0x240ad0u;
    // NOP
label_240ad4:
    // 0x240ad4: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x240ad4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_240ad8:
    // 0x240ad8: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_240adc:
    // 0x240adc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240ae0:
    // 0x240ae0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240ae4:
    // 0x240ae4: 0x0  nop
    ctx->pc = 0x240ae4u;
    // NOP
label_240ae8:
    // 0x240ae8: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x240ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240aec:
    // 0x240aec: 0x0  nop
    ctx->pc = 0x240aecu;
    // NOP
label_240af0:
    // 0x240af0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_240af4:
    if (ctx->pc == 0x240AF4u) {
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x4618b541  sub.s       $f21, $f22, $f24 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AF8u;
        goto label_240af8;
    }
    ctx->pc = 0x240AF0u;
    {
        const bool branch_taken_0x240af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240af0) {
            ctx->pc = 0x240AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240AF0u;
            // 0x240af4: 0x4618b541  sub.s       $f21, $f22, $f24 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240B10u;
            goto label_240b10;
        }
    }
    ctx->pc = 0x240AF8u;
label_240af8:
    // 0x240af8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x240af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_240afc:
    // 0x240afc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240b00:
    // 0x240b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240b04:
    // 0x240b04: 0x0  nop
    ctx->pc = 0x240b04u;
    // NOP
label_240b08:
    // 0x240b08: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x240b08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_240b0c:
    // 0x240b0c: 0x4618b541  sub.s       $f21, $f22, $f24
    ctx->pc = 0x240b0cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
label_240b10:
    // 0x240b10: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x240b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240b14:
    // 0x240b14: 0x0  nop
    ctx->pc = 0x240b14u;
    // NOP
label_240b18:
    // 0x240b18: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_240b1c:
    if (ctx->pc == 0x240B1Cu) {
        ctx->pc = 0x240B20u;
        goto label_240b20;
    }
    ctx->pc = 0x240B18u;
    {
        const bool branch_taken_0x240b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240b18) {
            ctx->pc = 0x240B34u;
            goto label_240b34;
        }
    }
    ctx->pc = 0x240B20u;
label_240b20:
    // 0x240b20: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_240b24:
    // 0x240b24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240b28:
    // 0x240b28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240b2c:
    // 0x240b2c: 0x0  nop
    ctx->pc = 0x240b2cu;
    // NOP
label_240b30:
    // 0x240b30: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x240b30u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_240b34:
    // 0x240b34: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x240b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240b38:
    // 0x240b38: 0x0  nop
    ctx->pc = 0x240b38u;
    // NOP
label_240b3c:
    // 0x240b3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_240b40:
    if (ctx->pc == 0x240B40u) {
        ctx->pc = 0x240B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B3Cu;
        // 0x240b40: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B44u;
        goto label_240b44;
    }
    ctx->pc = 0x240B3Cu;
    {
        const bool branch_taken_0x240b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B3Cu;
        // 0x240b40: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b3c) {
            ctx->pc = 0x240B58u;
            goto label_240b58;
        }
    }
    ctx->pc = 0x240B44u;
label_240b44:
    // 0x240b44: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x240b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_240b48:
    // 0x240b48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240b4c:
    // 0x240b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240b50:
    // 0x240b50: 0x0  nop
    ctx->pc = 0x240b50u;
    // NOP
label_240b54:
    // 0x240b54: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x240b54u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_240b58:
    // 0x240b58: 0x4600adc5  abs.s       $f23, $f21
    ctx->pc = 0x240b58u;
    ctx->f[23] = FPU_ABS_S(ctx->f[21]);
label_240b5c:
    // 0x240b5c: 0x8c620308  lw          $v0, 0x308($v1)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 776)));
label_240b60:
    // 0x240b60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240b64:
    if (ctx->pc == 0x240B64u) {
        ctx->pc = 0x240B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B60u;
        // 0x240b64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B68u;
        goto label_240b68;
    }
    ctx->pc = 0x240B60u;
    {
        const bool branch_taken_0x240b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B60u;
        // 0x240b64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b60) {
            ctx->pc = 0x240B78u;
            goto label_240b78;
        }
    }
    ctx->pc = 0x240B68u;
label_240b68:
    // 0x240b68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_240b6c:
    // 0x240b6c: 0x8c430304  lw          $v1, 0x304($v0)
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_240b70:
    // 0x240b70: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_240b74:
    if (ctx->pc == 0x240B74u) {
        ctx->pc = 0x240B78u;
        goto label_240b78;
    }
    ctx->pc = 0x240B70u;
    {
        const bool branch_taken_0x240b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b70) {
            ctx->pc = 0x240CD4u;
            goto label_240cd4;
        }
    }
    ctx->pc = 0x240B78u;
label_240b78:
    // 0x240b78: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_240b7c:
    // 0x240b7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240b80:
    // 0x240b80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240b84:
    // 0x240b84: 0x0  nop
    ctx->pc = 0x240b84u;
    // NOP
label_240b88:
    // 0x240b88: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x240b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240b8c:
    // 0x240b8c: 0x0  nop
    ctx->pc = 0x240b8cu;
    // NOP
label_240b90:
    // 0x240b90: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_240b94:
    if (ctx->pc == 0x240B94u) {
        ctx->pc = 0x240B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B90u;
        // 0x240b94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B98u;
        goto label_240b98;
    }
    ctx->pc = 0x240B90u;
    {
        const bool branch_taken_0x240b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B90u;
        // 0x240b94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b90) {
            ctx->pc = 0x240BF8u;
            goto label_240bf8;
        }
    }
    ctx->pc = 0x240B98u;
label_240b98:
    // 0x240b98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x240b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240b9c:
    // 0x240b9c: 0x0  nop
    ctx->pc = 0x240b9cu;
    // NOP
label_240ba0:
    // 0x240ba0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x240ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240ba4:
    // 0x240ba4: 0x0  nop
    ctx->pc = 0x240ba4u;
    // NOP
label_240ba8:
    // 0x240ba8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_240bac:
    if (ctx->pc == 0x240BACu) {
        ctx->pc = 0x240BB0u;
        goto label_240bb0;
    }
    ctx->pc = 0x240BA8u;
    {
        const bool branch_taken_0x240ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240ba8) {
            ctx->pc = 0x240BC4u;
            goto label_240bc4;
        }
    }
    ctx->pc = 0x240BB0u;
label_240bb0:
    // 0x240bb0: 0xc62005e4  lwc1        $f0, 0x5E4($s1)
    ctx->pc = 0x240bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240bb4:
    // 0x240bb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x240bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240bb8:
    // 0x240bb8: 0x0  nop
    ctx->pc = 0x240bb8u;
    // NOP
label_240bbc:
    // 0x240bbc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_240bc0:
    if (ctx->pc == 0x240BC0u) {
        ctx->pc = 0x240BC4u;
        goto label_240bc4;
    }
    ctx->pc = 0x240BBCu;
    {
        const bool branch_taken_0x240bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240bbc) {
            ctx->pc = 0x240BE8u;
            goto label_240be8;
        }
    }
    ctx->pc = 0x240BC4u;
label_240bc4:
    // 0x240bc4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x240bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240bc8:
    // 0x240bc8: 0x0  nop
    ctx->pc = 0x240bc8u;
    // NOP
label_240bcc:
    // 0x240bcc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_240bd0:
    if (ctx->pc == 0x240BD0u) {
        ctx->pc = 0x240BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BCCu;
        // 0x240bd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BD4u;
        goto label_240bd4;
    }
    ctx->pc = 0x240BCCu;
    {
        const bool branch_taken_0x240bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BCCu;
        // 0x240bd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bcc) {
            ctx->pc = 0x240BF8u;
            goto label_240bf8;
        }
    }
    ctx->pc = 0x240BD4u;
label_240bd4:
    // 0x240bd4: 0xc62005e4  lwc1        $f0, 0x5E4($s1)
    ctx->pc = 0x240bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240bd8:
    // 0x240bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x240bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240bdc:
    // 0x240bdc: 0x0  nop
    ctx->pc = 0x240bdcu;
    // NOP
label_240be0:
    // 0x240be0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_240be4:
    if (ctx->pc == 0x240BE4u) {
        ctx->pc = 0x240BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BE0u;
        // 0x240be4: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BE8u;
        goto label_240be8;
    }
    ctx->pc = 0x240BE0u;
    {
        const bool branch_taken_0x240be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240be0) {
            ctx->pc = 0x240BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240BE0u;
            // 0x240be4: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240BFCu;
            goto label_240bfc;
        }
    }
    ctx->pc = 0x240BE8u;
label_240be8:
    // 0x240be8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x240be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_240bec:
    // 0x240bec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240bf0:
    // 0x240bf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_240bf4:
    if (ctx->pc == 0x240BF4u) {
        ctx->pc = 0x240BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BF0u;
        // 0x240bf4: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BF8u;
        goto label_240bf8;
    }
    ctx->pc = 0x240BF0u;
    {
        const bool branch_taken_0x240bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BF0u;
        // 0x240bf4: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bf0) {
            ctx->pc = 0x240C00u;
            goto label_240c00;
        }
    }
    ctx->pc = 0x240BF8u;
label_240bf8:
    // 0x240bf8: 0xc62005e0  lwc1        $f0, 0x5E0($s1)
    ctx->pc = 0x240bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240bfc:
    // 0x240bfc: 0xc441030c  lwc1        $f1, 0x30C($v0)
    ctx->pc = 0x240bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_240c00:
    // 0x240c00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x240c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_240c04:
    // 0x240c04: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x240c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
label_240c08:
    // 0x240c08: 0x8c820308  lw          $v0, 0x308($a0)
    ctx->pc = 0x240c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 776)));
label_240c0c:
    // 0x240c0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_240c10:
    if (ctx->pc == 0x240C10u) {
        ctx->pc = 0x240C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C0Cu;
        // 0x240c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C14u;
        goto label_240c14;
    }
    ctx->pc = 0x240C0Cu;
    {
        const bool branch_taken_0x240c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C0Cu;
        // 0x240c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c0c) {
            ctx->pc = 0x240C78u;
            goto label_240c78;
        }
    }
    ctx->pc = 0x240C14u;
label_240c14:
    // 0x240c14: 0xc4400310  lwc1        $f0, 0x310($v0)
    ctx->pc = 0x240c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240c18:
    // 0x240c18: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x240c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240c1c:
    // 0x240c1c: 0x0  nop
    ctx->pc = 0x240c1cu;
    // NOP
label_240c20:
    // 0x240c20: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_240c24:
    if (ctx->pc == 0x240C24u) {
        ctx->pc = 0x240C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C20u;
        // 0x240c24: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C28u;
        goto label_240c28;
    }
    ctx->pc = 0x240C20u;
    {
        const bool branch_taken_0x240c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240c20) {
            ctx->pc = 0x240C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240C20u;
            // 0x240c24: 0xc62005e0  lwc1        $f0, 0x5E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240C94u;
            goto label_240c94;
        }
    }
    ctx->pc = 0x240C28u;
label_240c28:
    // 0x240c28: 0x0  nop
    ctx->pc = 0x240c28u;
    // NOP
label_240c2c:
    // 0x240c2c: 0x0  nop
    ctx->pc = 0x240c2cu;
    // NOP
label_240c30:
    // 0x240c30: 0x4600bb03  div.s       $f12, $f23, $f0
    ctx->pc = 0x240c30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
label_240c34:
    // 0x240c34: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_240c38:
    // 0x240c38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240c3c:
    // 0x240c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240c40:
    // 0x240c40: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_240c44:
    // 0x240c44: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x240c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_240c48:
    // 0x240c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240c4c:
    // 0x240c4c: 0x0  nop
    ctx->pc = 0x240c4cu;
    // NOP
label_240c50:
    // 0x240c50: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x240c50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_240c54:
    // 0x240c54: 0xc12e310  jal         func_4B8C40
label_240c58:
    if (ctx->pc == 0x240C58u) {
        ctx->pc = 0x240C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C54u;
        // 0x240c58: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C5Cu;
        goto label_240c5c;
    }
    ctx->pc = 0x240C54u;
    SET_GPR_U32(ctx, 31, 0x240C5Cu);
    ctx->pc = 0x240C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C54u;
    // 0x240c58: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x240C54u, 0x240C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C5Cu;
label_240c5c:
    // 0x240c5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_240c60:
    // 0x240c60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240c64:
    // 0x240c64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x240c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_240c68:
    // 0x240c68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_240c6c:
    // 0x240c6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_240c70:
    // 0x240c70: 0x10000006  b           . + 4 + (0x6 << 2)
label_240c74:
    if (ctx->pc == 0x240C74u) {
        ctx->pc = 0x240C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C70u;
        // 0x240c74: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C78u;
        goto label_240c78;
    }
    ctx->pc = 0x240C70u;
    {
        const bool branch_taken_0x240c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C70u;
        // 0x240c74: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c70) {
            ctx->pc = 0x240C8Cu;
            goto label_240c8c;
        }
    }
    ctx->pc = 0x240C78u;
label_240c78:
    // 0x240c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_240c7c:
    // 0x240c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240c80:
    // 0x240c80: 0xc4400310  lwc1        $f0, 0x310($v0)
    ctx->pc = 0x240c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240c84:
    // 0x240c84: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x240c84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
label_240c88:
    // 0x240c88: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x240c88u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_240c8c:
    // 0x240c8c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x240c8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_240c90:
    // 0x240c90: 0xc62005e0  lwc1        $f0, 0x5E0($s1)
    ctx->pc = 0x240c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240c94:
    // 0x240c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240c98:
    // 0x240c98: 0xc0884f6  jal         func_2213D8
label_240c9c:
    if (ctx->pc == 0x240C9Cu) {
        ctx->pc = 0x240C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C98u;
        // 0x240c9c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CA0u;
        goto label_240ca0;
    }
    ctx->pc = 0x240C98u;
    SET_GPR_U32(ctx, 31, 0x240CA0u);
    ctx->pc = 0x240C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C98u;
    // 0x240c9c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x240C98u, 0x240CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CA0u;
label_240ca0:
    // 0x240ca0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x240ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240ca4:
    // 0x240ca4: 0x0  nop
    ctx->pc = 0x240ca4u;
    // NOP
label_240ca8:
    // 0x240ca8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_240cac:
    if (ctx->pc == 0x240CACu) {
        ctx->pc = 0x240CB0u;
        goto label_240cb0;
    }
    ctx->pc = 0x240CA8u;
    {
        const bool branch_taken_0x240ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240ca8) {
            ctx->pc = 0x240CBCu;
            goto label_240cbc;
        }
    }
    ctx->pc = 0x240CB0u;
label_240cb0:
    // 0x240cb0: 0xc0884f6  jal         func_2213D8
label_240cb4:
    if (ctx->pc == 0x240CB4u) {
        ctx->pc = 0x240CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CB0u;
        // 0x240cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CB8u;
        goto label_240cb8;
    }
    ctx->pc = 0x240CB0u;
    SET_GPR_U32(ctx, 31, 0x240CB8u);
    ctx->pc = 0x240CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240CB0u;
    // 0x240cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x240CB0u, 0x240CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CB8u;
label_240cb8:
    // 0x240cb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x240cb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_240cbc:
    // 0x240cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x240cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240cc0:
    // 0x240cc0: 0x0  nop
    ctx->pc = 0x240cc0u;
    // NOP
label_240cc4:
    // 0x240cc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x240cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240cc8:
    // 0x240cc8: 0x0  nop
    ctx->pc = 0x240cc8u;
    // NOP
label_240ccc:
    // 0x240ccc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_240cd0:
    if (ctx->pc == 0x240CD0u) {
        ctx->pc = 0x240CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CCCu;
        // 0x240cd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CD4u;
        goto label_240cd4;
    }
    ctx->pc = 0x240CCCu;
    {
        const bool branch_taken_0x240ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240ccc) {
            ctx->pc = 0x240CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240CCCu;
            // 0x240cd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240CD4u;
            goto label_240cd4;
        }
    }
    ctx->pc = 0x240CD4u;
label_240cd4:
    // 0x240cd4: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x240cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240cd8:
    // 0x240cd8: 0xe63505e4  swc1        $f21, 0x5E4($s1)
    ctx->pc = 0x240cd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1508), bits); }
label_240cdc:
    // 0x240cdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_240ce0:
    if (ctx->pc == 0x240CE0u) {
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0xe63405e0  swc1        $f20, 0x5E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CE4u;
        goto label_240ce4;
    }
    ctx->pc = 0x240CDCu;
    {
        const bool branch_taken_0x240cdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0xe63405e0  swc1        $f20, 0x5E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cdc) {
            ctx->pc = 0x240CECu;
            goto label_240cec;
        }
    }
    ctx->pc = 0x240CE4u;
label_240ce4:
    // 0x240ce4: 0x10000008  b           . + 4 + (0x8 << 2)
label_240ce8:
    if (ctx->pc == 0x240CE8u) {
        ctx->pc = 0x240CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CE4u;
        // 0x240ce8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CECu;
        goto label_240cec;
    }
    ctx->pc = 0x240CE4u;
    {
        const bool branch_taken_0x240ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CE4u;
        // 0x240ce8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ce4) {
            ctx->pc = 0x240D08u;
            goto label_240d08;
        }
    }
    ctx->pc = 0x240CECu;
label_240cec:
    // 0x240cec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x240cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240cf0:
    // 0x240cf0: 0x0  nop
    ctx->pc = 0x240cf0u;
    // NOP
label_240cf4:
    // 0x240cf4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x240cf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240cf8:
    // 0x240cf8: 0x0  nop
    ctx->pc = 0x240cf8u;
    // NOP
label_240cfc:
    // 0x240cfc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_240d00:
    if (ctx->pc == 0x240D00u) {
        ctx->pc = 0x240D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CFCu;
        // 0x240d00: 0x4614c000  add.s       $f0, $f24, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D04u;
        goto label_240d04;
    }
    ctx->pc = 0x240CFCu;
    {
        const bool branch_taken_0x240cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240cfc) {
            ctx->pc = 0x240D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240CFCu;
            // 0x240d00: 0x4614c000  add.s       $f0, $f24, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D08u;
            goto label_240d08;
        }
    }
    ctx->pc = 0x240D04u;
label_240d04:
    // 0x240d04: 0x4614c001  sub.s       $f0, $f24, $f20
    ctx->pc = 0x240d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
label_240d08:
    // 0x240d08: 0x922203bb  lbu         $v0, 0x3BB($s1)
    ctx->pc = 0x240d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 955)));
label_240d0c:
    // 0x240d0c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_240d10:
    if (ctx->pc == 0x240D10u) {
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D14u;
        goto label_240d14;
    }
    ctx->pc = 0x240D0Cu;
    {
        const bool branch_taken_0x240d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d0c) {
            ctx->pc = 0x240D7Cu;
            goto label_240d7c;
        }
    }
    ctx->pc = 0x240D14u;
label_240d14:
    // 0x240d14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_240d18:
    // 0x240d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_240d1c:
    // 0x240d1c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x240d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_240d20:
    // 0x240d20: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x240d20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_240d24:
    // 0x240d24: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x240d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_240d28:
    // 0x240d28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x240d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_240d2c:
    // 0x240d2c: 0xc12e310  jal         func_4B8C40
label_240d30:
    if (ctx->pc == 0x240D30u) {
        ctx->pc = 0x240D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D2Cu;
        // 0x240d30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D34u;
        goto label_240d34;
    }
    ctx->pc = 0x240D2Cu;
    SET_GPR_U32(ctx, 31, 0x240D34u);
    ctx->pc = 0x240D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D2Cu;
    // 0x240d30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x240D2Cu, 0x240D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D34u;
label_240d34:
    // 0x240d34: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x240d34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_240d38:
    // 0x240d38: 0xc12e29c  jal         func_4B8A70
label_240d3c:
    if (ctx->pc == 0x240D3Cu) {
        ctx->pc = 0x240D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D38u;
        // 0x240d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D40u;
        goto label_240d40;
    }
    ctx->pc = 0x240D38u;
    SET_GPR_U32(ctx, 31, 0x240D40u);
    ctx->pc = 0x240D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D38u;
    // 0x240d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x240D38u, 0x240D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D40u;
label_240d40:
    // 0x240d40: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x240d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_240d44:
    // 0x240d44: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x240d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_240d48:
    // 0x240d48: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x240d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_240d4c:
    // 0x240d4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x240d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_240d50:
    // 0x240d50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x240d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_240d54:
    // 0x240d54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x240d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_240d58:
    // 0x240d58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x240d58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_240d5c:
    // 0x240d5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x240d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_240d60:
    // 0x240d60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x240d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_240d64:
    // 0x240d64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x240d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240d68:
    // 0x240d68: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x240d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_240d6c:
    // 0x240d6c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x240d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_240d70:
    // 0x240d70: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x240d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_240d74:
    // 0x240d74: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x240d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_240d78:
    // 0x240d78: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x240d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_240d7c:
    // 0x240d7c: 0xc0e87c0  jal         func_3A1F00
label_240d80:
    if (ctx->pc == 0x240D80u) {
        ctx->pc = 0x240D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D7Cu;
        // 0x240d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D84u;
        goto label_240d84;
    }
    ctx->pc = 0x240D7Cu;
    SET_GPR_U32(ctx, 31, 0x240D84u);
    ctx->pc = 0x240D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D7Cu;
    // 0x240d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x240D7Cu, 0x240D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D84u;
label_240d84:
    // 0x240d84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_240d88:
    // 0x240d88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_240d8c:
    // 0x240d8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x240d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_240d90:
    // 0x240d90: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x240d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240d94:
    // 0x240d94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x240d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240d98:
    // 0x240d98: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x240d98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_240d9c:
    // 0x240d9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x240d9cu;
    // VWAITQ (Q already resolved in this runtime)
label_240da0:
    // 0x240da0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x240da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240da4:
    // 0x240da4: 0x48301800  qmfc2.ni    $s0, $vf3
    ctx->pc = 0x240da4u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[3]));
label_240da8:
    // 0x240da8: 0xc0cd8ec  jal         func_3363B0
label_240dac:
    if (ctx->pc == 0x240DACu) {
        ctx->pc = 0x240DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA8u;
        // 0x240dac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DB0u;
        goto label_240db0;
    }
    ctx->pc = 0x240DA8u;
    SET_GPR_U32(ctx, 31, 0x240DB0u);
    ctx->pc = 0x240DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DA8u;
    // 0x240dac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x240DA8u, 0x240DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DB0u;
label_240db0:
    // 0x240db0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x240db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_240db4:
    // 0x240db4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x240db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240db8:
    // 0x240db8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x240db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_240dbc:
    // 0x240dbc: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x240dbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
label_240dc0:
    // 0x240dc0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x240dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_240dc4:
    // 0x240dc4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x240dc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_240dc8:
    // 0x240dc8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x240dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_240dcc:
    // 0x240dcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x240dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_240dd0:
    // 0x240dd0: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x240dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240dd4:
    // 0x240dd4: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x240dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_240dd8:
    // 0x240dd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x240dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240ddc:
    // 0x240ddc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_240de0:
    // 0x240de0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_240de4:
    // 0x240de4: 0x60f809  jalr        $v1
label_240de8:
    if (ctx->pc == 0x240DE8u) {
        ctx->pc = 0x240DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE4u;
        // 0x240de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DECu;
        goto label_240dec;
    }
    ctx->pc = 0x240DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x240DECu);
        ctx->pc = 0x240DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE4u;
        // 0x240de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240DE4u, 0x240DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240DECu;
label_240dec:
    // 0x240dec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x240decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_240df0:
    // 0x240df0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_240df4:
    // 0x240df4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240df4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_240df8:
    // 0x240df8: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x240df8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
label_240dfc:
    // 0x240dfc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x240dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_240e00:
    // 0x240e00: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x240e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_240e04:
    // 0x240e04: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x240e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_240e08:
    // 0x240e08: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x240e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_240e0c:
    // 0x240e0c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x240e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_240e10:
    // 0x240e10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x240e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_240e14:
    // 0x240e14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x240e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_240e18:
    // 0x240e18: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x240e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_240e1c:
    // 0x240e1c: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x240e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_240e20:
    // 0x240e20: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x240e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_240e24:
    // 0x240e24: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x240e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_240e28:
    // 0x240e28: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x240e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240e2c:
    // 0x240e2c: 0x3e00008  jr          $ra
label_240e30:
    if (ctx->pc == 0x240E30u) {
        ctx->pc = 0x240E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E2Cu;
        // 0x240e30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E34u;
        goto label_240e34;
    }
    ctx->pc = 0x240E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E2Cu;
        // 0x240e30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E34u;
label_240e34:
    // 0x240e34: 0x0  nop
    ctx->pc = 0x240e34u;
    // NOP
    ctx->pc = 0x240e38u;
}
