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

// Function: sub_00394920
// Address: 0x394920 - 0x394da8
void sub_00394920_0x394920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394920_0x394920");
#endif

    switch (ctx->pc) {
        case 0x394920u: goto label_394920;
        case 0x394924u: goto label_394924;
        case 0x394928u: goto label_394928;
        case 0x39492cu: goto label_39492c;
        case 0x394930u: goto label_394930;
        case 0x394934u: goto label_394934;
        case 0x394938u: goto label_394938;
        case 0x39493cu: goto label_39493c;
        case 0x394940u: goto label_394940;
        case 0x394944u: goto label_394944;
        case 0x394948u: goto label_394948;
        case 0x39494cu: goto label_39494c;
        case 0x394950u: goto label_394950;
        case 0x394954u: goto label_394954;
        case 0x394958u: goto label_394958;
        case 0x39495cu: goto label_39495c;
        case 0x394960u: goto label_394960;
        case 0x394964u: goto label_394964;
        case 0x394968u: goto label_394968;
        case 0x39496cu: goto label_39496c;
        case 0x394970u: goto label_394970;
        case 0x394974u: goto label_394974;
        case 0x394978u: goto label_394978;
        case 0x39497cu: goto label_39497c;
        case 0x394980u: goto label_394980;
        case 0x394984u: goto label_394984;
        case 0x394988u: goto label_394988;
        case 0x39498cu: goto label_39498c;
        case 0x394990u: goto label_394990;
        case 0x394994u: goto label_394994;
        case 0x394998u: goto label_394998;
        case 0x39499cu: goto label_39499c;
        case 0x3949a0u: goto label_3949a0;
        case 0x3949a4u: goto label_3949a4;
        case 0x3949a8u: goto label_3949a8;
        case 0x3949acu: goto label_3949ac;
        case 0x3949b0u: goto label_3949b0;
        case 0x3949b4u: goto label_3949b4;
        case 0x3949b8u: goto label_3949b8;
        case 0x3949bcu: goto label_3949bc;
        case 0x3949c0u: goto label_3949c0;
        case 0x3949c4u: goto label_3949c4;
        case 0x3949c8u: goto label_3949c8;
        case 0x3949ccu: goto label_3949cc;
        case 0x3949d0u: goto label_3949d0;
        case 0x3949d4u: goto label_3949d4;
        case 0x3949d8u: goto label_3949d8;
        case 0x3949dcu: goto label_3949dc;
        case 0x3949e0u: goto label_3949e0;
        case 0x3949e4u: goto label_3949e4;
        case 0x3949e8u: goto label_3949e8;
        case 0x3949ecu: goto label_3949ec;
        case 0x3949f0u: goto label_3949f0;
        case 0x3949f4u: goto label_3949f4;
        case 0x3949f8u: goto label_3949f8;
        case 0x3949fcu: goto label_3949fc;
        case 0x394a00u: goto label_394a00;
        case 0x394a04u: goto label_394a04;
        case 0x394a08u: goto label_394a08;
        case 0x394a0cu: goto label_394a0c;
        case 0x394a10u: goto label_394a10;
        case 0x394a14u: goto label_394a14;
        case 0x394a18u: goto label_394a18;
        case 0x394a1cu: goto label_394a1c;
        case 0x394a20u: goto label_394a20;
        case 0x394a24u: goto label_394a24;
        case 0x394a28u: goto label_394a28;
        case 0x394a2cu: goto label_394a2c;
        case 0x394a30u: goto label_394a30;
        case 0x394a34u: goto label_394a34;
        case 0x394a38u: goto label_394a38;
        case 0x394a3cu: goto label_394a3c;
        case 0x394a40u: goto label_394a40;
        case 0x394a44u: goto label_394a44;
        case 0x394a48u: goto label_394a48;
        case 0x394a4cu: goto label_394a4c;
        case 0x394a50u: goto label_394a50;
        case 0x394a54u: goto label_394a54;
        case 0x394a58u: goto label_394a58;
        case 0x394a5cu: goto label_394a5c;
        case 0x394a60u: goto label_394a60;
        case 0x394a64u: goto label_394a64;
        case 0x394a68u: goto label_394a68;
        case 0x394a6cu: goto label_394a6c;
        case 0x394a70u: goto label_394a70;
        case 0x394a74u: goto label_394a74;
        case 0x394a78u: goto label_394a78;
        case 0x394a7cu: goto label_394a7c;
        case 0x394a80u: goto label_394a80;
        case 0x394a84u: goto label_394a84;
        case 0x394a88u: goto label_394a88;
        case 0x394a8cu: goto label_394a8c;
        case 0x394a90u: goto label_394a90;
        case 0x394a94u: goto label_394a94;
        case 0x394a98u: goto label_394a98;
        case 0x394a9cu: goto label_394a9c;
        case 0x394aa0u: goto label_394aa0;
        case 0x394aa4u: goto label_394aa4;
        case 0x394aa8u: goto label_394aa8;
        case 0x394aacu: goto label_394aac;
        case 0x394ab0u: goto label_394ab0;
        case 0x394ab4u: goto label_394ab4;
        case 0x394ab8u: goto label_394ab8;
        case 0x394abcu: goto label_394abc;
        case 0x394ac0u: goto label_394ac0;
        case 0x394ac4u: goto label_394ac4;
        case 0x394ac8u: goto label_394ac8;
        case 0x394accu: goto label_394acc;
        case 0x394ad0u: goto label_394ad0;
        case 0x394ad4u: goto label_394ad4;
        case 0x394ad8u: goto label_394ad8;
        case 0x394adcu: goto label_394adc;
        case 0x394ae0u: goto label_394ae0;
        case 0x394ae4u: goto label_394ae4;
        case 0x394ae8u: goto label_394ae8;
        case 0x394aecu: goto label_394aec;
        case 0x394af0u: goto label_394af0;
        case 0x394af4u: goto label_394af4;
        case 0x394af8u: goto label_394af8;
        case 0x394afcu: goto label_394afc;
        case 0x394b00u: goto label_394b00;
        case 0x394b04u: goto label_394b04;
        case 0x394b08u: goto label_394b08;
        case 0x394b0cu: goto label_394b0c;
        case 0x394b10u: goto label_394b10;
        case 0x394b14u: goto label_394b14;
        case 0x394b18u: goto label_394b18;
        case 0x394b1cu: goto label_394b1c;
        case 0x394b20u: goto label_394b20;
        case 0x394b24u: goto label_394b24;
        case 0x394b28u: goto label_394b28;
        case 0x394b2cu: goto label_394b2c;
        case 0x394b30u: goto label_394b30;
        case 0x394b34u: goto label_394b34;
        case 0x394b38u: goto label_394b38;
        case 0x394b3cu: goto label_394b3c;
        case 0x394b40u: goto label_394b40;
        case 0x394b44u: goto label_394b44;
        case 0x394b48u: goto label_394b48;
        case 0x394b4cu: goto label_394b4c;
        case 0x394b50u: goto label_394b50;
        case 0x394b54u: goto label_394b54;
        case 0x394b58u: goto label_394b58;
        case 0x394b5cu: goto label_394b5c;
        case 0x394b60u: goto label_394b60;
        case 0x394b64u: goto label_394b64;
        case 0x394b68u: goto label_394b68;
        case 0x394b6cu: goto label_394b6c;
        case 0x394b70u: goto label_394b70;
        case 0x394b74u: goto label_394b74;
        case 0x394b78u: goto label_394b78;
        case 0x394b7cu: goto label_394b7c;
        case 0x394b80u: goto label_394b80;
        case 0x394b84u: goto label_394b84;
        case 0x394b88u: goto label_394b88;
        case 0x394b8cu: goto label_394b8c;
        case 0x394b90u: goto label_394b90;
        case 0x394b94u: goto label_394b94;
        case 0x394b98u: goto label_394b98;
        case 0x394b9cu: goto label_394b9c;
        case 0x394ba0u: goto label_394ba0;
        case 0x394ba4u: goto label_394ba4;
        case 0x394ba8u: goto label_394ba8;
        case 0x394bacu: goto label_394bac;
        case 0x394bb0u: goto label_394bb0;
        case 0x394bb4u: goto label_394bb4;
        case 0x394bb8u: goto label_394bb8;
        case 0x394bbcu: goto label_394bbc;
        case 0x394bc0u: goto label_394bc0;
        case 0x394bc4u: goto label_394bc4;
        case 0x394bc8u: goto label_394bc8;
        case 0x394bccu: goto label_394bcc;
        case 0x394bd0u: goto label_394bd0;
        case 0x394bd4u: goto label_394bd4;
        case 0x394bd8u: goto label_394bd8;
        case 0x394bdcu: goto label_394bdc;
        case 0x394be0u: goto label_394be0;
        case 0x394be4u: goto label_394be4;
        case 0x394be8u: goto label_394be8;
        case 0x394becu: goto label_394bec;
        case 0x394bf0u: goto label_394bf0;
        case 0x394bf4u: goto label_394bf4;
        case 0x394bf8u: goto label_394bf8;
        case 0x394bfcu: goto label_394bfc;
        case 0x394c00u: goto label_394c00;
        case 0x394c04u: goto label_394c04;
        case 0x394c08u: goto label_394c08;
        case 0x394c0cu: goto label_394c0c;
        case 0x394c10u: goto label_394c10;
        case 0x394c14u: goto label_394c14;
        case 0x394c18u: goto label_394c18;
        case 0x394c1cu: goto label_394c1c;
        case 0x394c20u: goto label_394c20;
        case 0x394c24u: goto label_394c24;
        case 0x394c28u: goto label_394c28;
        case 0x394c2cu: goto label_394c2c;
        case 0x394c30u: goto label_394c30;
        case 0x394c34u: goto label_394c34;
        case 0x394c38u: goto label_394c38;
        case 0x394c3cu: goto label_394c3c;
        case 0x394c40u: goto label_394c40;
        case 0x394c44u: goto label_394c44;
        case 0x394c48u: goto label_394c48;
        case 0x394c4cu: goto label_394c4c;
        case 0x394c50u: goto label_394c50;
        case 0x394c54u: goto label_394c54;
        case 0x394c58u: goto label_394c58;
        case 0x394c5cu: goto label_394c5c;
        case 0x394c60u: goto label_394c60;
        case 0x394c64u: goto label_394c64;
        case 0x394c68u: goto label_394c68;
        case 0x394c6cu: goto label_394c6c;
        case 0x394c70u: goto label_394c70;
        case 0x394c74u: goto label_394c74;
        case 0x394c78u: goto label_394c78;
        case 0x394c7cu: goto label_394c7c;
        case 0x394c80u: goto label_394c80;
        case 0x394c84u: goto label_394c84;
        case 0x394c88u: goto label_394c88;
        case 0x394c8cu: goto label_394c8c;
        case 0x394c90u: goto label_394c90;
        case 0x394c94u: goto label_394c94;
        case 0x394c98u: goto label_394c98;
        case 0x394c9cu: goto label_394c9c;
        case 0x394ca0u: goto label_394ca0;
        case 0x394ca4u: goto label_394ca4;
        case 0x394ca8u: goto label_394ca8;
        case 0x394cacu: goto label_394cac;
        case 0x394cb0u: goto label_394cb0;
        case 0x394cb4u: goto label_394cb4;
        case 0x394cb8u: goto label_394cb8;
        case 0x394cbcu: goto label_394cbc;
        case 0x394cc0u: goto label_394cc0;
        case 0x394cc4u: goto label_394cc4;
        case 0x394cc8u: goto label_394cc8;
        case 0x394cccu: goto label_394ccc;
        case 0x394cd0u: goto label_394cd0;
        case 0x394cd4u: goto label_394cd4;
        case 0x394cd8u: goto label_394cd8;
        case 0x394cdcu: goto label_394cdc;
        case 0x394ce0u: goto label_394ce0;
        case 0x394ce4u: goto label_394ce4;
        case 0x394ce8u: goto label_394ce8;
        case 0x394cecu: goto label_394cec;
        case 0x394cf0u: goto label_394cf0;
        case 0x394cf4u: goto label_394cf4;
        case 0x394cf8u: goto label_394cf8;
        case 0x394cfcu: goto label_394cfc;
        case 0x394d00u: goto label_394d00;
        case 0x394d04u: goto label_394d04;
        case 0x394d08u: goto label_394d08;
        case 0x394d0cu: goto label_394d0c;
        case 0x394d10u: goto label_394d10;
        case 0x394d14u: goto label_394d14;
        case 0x394d18u: goto label_394d18;
        case 0x394d1cu: goto label_394d1c;
        case 0x394d20u: goto label_394d20;
        case 0x394d24u: goto label_394d24;
        case 0x394d28u: goto label_394d28;
        case 0x394d2cu: goto label_394d2c;
        case 0x394d30u: goto label_394d30;
        case 0x394d34u: goto label_394d34;
        case 0x394d38u: goto label_394d38;
        case 0x394d3cu: goto label_394d3c;
        case 0x394d40u: goto label_394d40;
        case 0x394d44u: goto label_394d44;
        case 0x394d48u: goto label_394d48;
        case 0x394d4cu: goto label_394d4c;
        case 0x394d50u: goto label_394d50;
        case 0x394d54u: goto label_394d54;
        case 0x394d58u: goto label_394d58;
        case 0x394d5cu: goto label_394d5c;
        case 0x394d60u: goto label_394d60;
        case 0x394d64u: goto label_394d64;
        case 0x394d68u: goto label_394d68;
        case 0x394d6cu: goto label_394d6c;
        case 0x394d70u: goto label_394d70;
        case 0x394d74u: goto label_394d74;
        case 0x394d78u: goto label_394d78;
        case 0x394d7cu: goto label_394d7c;
        case 0x394d80u: goto label_394d80;
        case 0x394d84u: goto label_394d84;
        case 0x394d88u: goto label_394d88;
        case 0x394d8cu: goto label_394d8c;
        case 0x394d90u: goto label_394d90;
        case 0x394d94u: goto label_394d94;
        case 0x394d98u: goto label_394d98;
        case 0x394d9cu: goto label_394d9c;
        case 0x394da0u: goto label_394da0;
        case 0x394da4u: goto label_394da4;
        default: break;
    }

    ctx->pc = 0x394920u;

label_394920:
    // 0x394920: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x394920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_394924:
    // 0x394924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394928:
    // 0x394928: 0x7fb002f0  sq          $s0, 0x2F0($sp)
    ctx->pc = 0x394928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 16));
label_39492c:
    // 0x39492c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394930:
    // 0x394930: 0x7fb302c0  sq          $s3, 0x2C0($sp)
    ctx->pc = 0x394930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 19));
label_394934:
    // 0x394934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x394934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394938:
    // 0x394938: 0x7fb102e0  sq          $s1, 0x2E0($sp)
    ctx->pc = 0x394938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 17));
label_39493c:
    // 0x39493c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39493cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394940:
    // 0x394940: 0x7fb202d0  sq          $s2, 0x2D0($sp)
    ctx->pc = 0x394940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 18));
label_394944:
    // 0x394944: 0x7fb402b0  sq          $s4, 0x2B0($sp)
    ctx->pc = 0x394944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 20));
label_394948:
    // 0x394948: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x394948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
label_39494c:
    // 0x39494c: 0xe7b60310  swc1        $f22, 0x310($sp)
    ctx->pc = 0x39494cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_394950:
    // 0x394950: 0xe7b50308  swc1        $f21, 0x308($sp)
    ctx->pc = 0x394950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_394954:
    // 0x394954: 0xe7b40300  swc1        $f20, 0x300($sp)
    ctx->pc = 0x394954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_394958:
    // 0x394958: 0x8e680118  lw          $t0, 0x118($s3)
    ctx->pc = 0x394958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_39495c:
    // 0x39495c: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x39495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_394960:
    // 0x394960: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x394960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_394964:
    // 0x394964: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x394964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_394968:
    // 0x394968: 0x40f809  jalr        $v0
label_39496c:
    if (ctx->pc == 0x39496Cu) {
        ctx->pc = 0x39496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394968u;
        // 0x39496c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394970u;
        goto label_394970;
    }
    ctx->pc = 0x394968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394970u);
        ctx->pc = 0x39496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394968u;
        // 0x39496c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394968u, 0x394970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394970u;
label_394970:
    // 0x394970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x394970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394974:
    // 0x394974: 0xc0e5476  jal         func_3951D8
label_394978:
    if (ctx->pc == 0x394978u) {
        ctx->pc = 0x394978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394974u;
        // 0x394978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39497Cu;
        goto label_39497c;
    }
    ctx->pc = 0x394974u;
    SET_GPR_U32(ctx, 31, 0x39497Cu);
    ctx->pc = 0x394978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394974u;
    // 0x394978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x394974u, 0x39497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39497Cu;
label_39497c:
    // 0x39497c: 0x54400100  bnel        $v0, $zero, . + 4 + (0x100 << 2)
label_394980:
    if (ctx->pc == 0x394980u) {
        ctx->pc = 0x394980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39497Cu;
        // 0x394980: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394984u;
        goto label_394984;
    }
    ctx->pc = 0x39497Cu;
    {
        const bool branch_taken_0x39497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39497c) {
            ctx->pc = 0x394980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39497Cu;
            // 0x394980: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394D80u;
            goto label_394d80;
        }
    }
    ctx->pc = 0x394984u;
label_394984:
    // 0x394984: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x394984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_394988:
    // 0x394988: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x394988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39498c:
    // 0x39498c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_394990:
    // 0x394990: 0x40f809  jalr        $v0
label_394994:
    if (ctx->pc == 0x394994u) {
        ctx->pc = 0x394994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394990u;
        // 0x394994: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394998u;
        goto label_394998;
    }
    ctx->pc = 0x394990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394998u);
        ctx->pc = 0x394994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394990u;
        // 0x394994: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394990u, 0x394998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394998u;
label_394998:
    // 0x394998: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_39499c:
    // 0x39499c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3949a0:
    // 0x3949a0: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
label_3949a4:
    if (ctx->pc == 0x3949A4u) {
        ctx->pc = 0x3949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949A0u;
        // 0x3949a4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3949A8u;
        goto label_3949a8;
    }
    ctx->pc = 0x3949A0u;
    {
        const bool branch_taken_0x3949a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949A0u;
        // 0x3949a4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949a0) {
            ctx->pc = 0x394D7Cu;
            goto label_394d7c;
        }
    }
    ctx->pc = 0x3949A8u;
label_3949a8:
    // 0x3949a8: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x3949a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_3949ac:
    // 0x3949ac: 0x105400f3  beq         $v0, $s4, . + 4 + (0xF3 << 2)
label_3949b0:
    if (ctx->pc == 0x3949B0u) {
        ctx->pc = 0x3949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949ACu;
        // 0x3949b0: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3949B4u;
        goto label_3949b4;
    }
    ctx->pc = 0x3949ACu;
    {
        const bool branch_taken_0x3949ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949ACu;
        // 0x3949b0: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949ac) {
            ctx->pc = 0x394D7Cu;
            goto label_394d7c;
        }
    }
    ctx->pc = 0x3949B4u;
label_3949b4:
    // 0x3949b4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3949b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3949b8:
    // 0x3949b8: 0xc0d0aa8  jal         func_342AA0
label_3949bc:
    if (ctx->pc == 0x3949BCu) {
        ctx->pc = 0x3949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949B8u;
        // 0x3949bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3949C0u;
        goto label_3949c0;
    }
    ctx->pc = 0x3949B8u;
    SET_GPR_U32(ctx, 31, 0x3949C0u);
    ctx->pc = 0x3949BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3949B8u;
    // 0x3949bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x3949B8u, 0x3949C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3949C0u;
label_3949c0:
    // 0x3949c0: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x3949c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_3949c4:
    // 0x3949c4: 0x27b10270  addiu       $s1, $sp, 0x270
    ctx->pc = 0x3949c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_3949c8:
    // 0x3949c8: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x3949c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_3949cc:
    // 0x3949cc: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x3949ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
label_3949d0:
    // 0x3949d0: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x3949d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
label_3949d4:
    // 0x3949d4: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x3949d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
label_3949d8:
    // 0x3949d8: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x3949d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
label_3949dc:
    // 0x3949dc: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x3949dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_3949e0:
    // 0x3949e0: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x3949e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_3949e4:
    // 0x3949e4: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x3949e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
label_3949e8:
    // 0x3949e8: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x3949e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
label_3949ec:
    // 0x3949ec: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x3949ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_3949f0:
    // 0x3949f0: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x3949f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_3949f4:
    // 0x3949f4: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x3949f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_3949f8:
    // 0x3949f8: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x3949f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
label_3949fc:
    // 0x3949fc: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x3949fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_394a00:
    // 0x394a00: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x394a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_394a04:
    // 0x394a04: 0xc0e44cc  jal         func_391330
label_394a08:
    if (ctx->pc == 0x394A08u) {
        ctx->pc = 0x394A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A04u;
        // 0x394a08: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394A0Cu;
        goto label_394a0c;
    }
    ctx->pc = 0x394A04u;
    SET_GPR_U32(ctx, 31, 0x394A0Cu);
    ctx->pc = 0x394A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A04u;
    // 0x394a08: 0xafa00268  sw          $zero, 0x268($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394A04u, 0x394A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A0Cu;
label_394a0c:
    // 0x394a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x394a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394a10:
    // 0x394a10: 0xc0e45f6  jal         func_3917D8
label_394a14:
    if (ctx->pc == 0x394A14u) {
        ctx->pc = 0x394A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A10u;
        // 0x394a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394A18u;
        goto label_394a18;
    }
    ctx->pc = 0x394A10u;
    SET_GPR_U32(ctx, 31, 0x394A18u);
    ctx->pc = 0x394A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A10u;
    // 0x394a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x394A10u, 0x394A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A18u;
label_394a18:
    // 0x394a18: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x394a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_394a1c:
    // 0x394a1c: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x394a1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394a20:
    // 0x394a20: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x394a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_394a24:
    // 0x394a24: 0xc0e44cc  jal         func_391330
label_394a28:
    if (ctx->pc == 0x394A28u) {
        ctx->pc = 0x394A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A24u;
        // 0x394a28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394A2Cu;
        goto label_394a2c;
    }
    ctx->pc = 0x394A24u;
    SET_GPR_U32(ctx, 31, 0x394A2Cu);
    ctx->pc = 0x394A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A24u;
    // 0x394a28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394A24u, 0x394A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A2Cu;
label_394a2c:
    // 0x394a2c: 0xc455007c  lwc1        $f21, 0x7C($v0)
    ctx->pc = 0x394a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394a30:
    // 0x394a30: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x394a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_394a34:
    // 0x394a34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x394a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_394a38:
    // 0x394a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x394a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394a3c:
    // 0x394a3c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x394a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394a40:
    // 0x394a40: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x394a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_394a44:
    // 0x394a44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x394a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_394a48:
    // 0x394a48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x394a48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_394a4c:
    // 0x394a4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x394a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_394a50:
    // 0x394a50: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x394a50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_394a54:
    // 0x394a54: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x394a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_394a58:
    // 0x394a58: 0x40f809  jalr        $v0
label_394a5c:
    if (ctx->pc == 0x394A5Cu) {
        ctx->pc = 0x394A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A58u;
        // 0x394a5c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394A60u;
        goto label_394a60;
    }
    ctx->pc = 0x394A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394A60u);
        ctx->pc = 0x394A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A58u;
        // 0x394a5c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394A58u, 0x394A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394A60u;
label_394a60:
    // 0x394a60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x394a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_394a64:
    // 0x394a64: 0x7ba70280  lq          $a3, 0x280($sp)
    ctx->pc = 0x394a64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_394a68:
    // 0x394a68: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x394a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_394a6c:
    // 0x394a6c: 0x7ba60290  lq          $a2, 0x290($sp)
    ctx->pc = 0x394a6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_394a70:
    // 0x394a70: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x394a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_394a74:
    // 0x394a74: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x394a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_394a78:
    // 0x394a78: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x394a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_394a7c:
    // 0x394a7c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x394a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_394a80:
    // 0x394a80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x394a80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394a84:
    // 0x394a84: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x394a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394a88:
    // 0x394a88: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x394a88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_394a8c:
    // 0x394a8c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x394a8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_394a90:
    // 0x394a90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x394a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394a94:
    // 0x394a94: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x394a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394a98:
    // 0x394a98: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x394a98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_394a9c:
    // 0x394a9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x394a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394aa0:
    // 0x394aa0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x394aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_394aa4:
    // 0x394aa4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x394aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394aa8:
    // 0x394aa8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x394aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394aac:
    // 0x394aac: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x394aacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_394ab0:
    // 0x394ab0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x394ab0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394ab4:
    // 0x394ab4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x394ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394ab8:
    // 0x394ab8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x394ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394abc:
    // 0x394abc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x394abcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_394ac0:
    // 0x394ac0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x394ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_394ac4:
    // 0x394ac4: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x394ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_394ac8:
    // 0x394ac8: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x394ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_394acc:
    // 0x394acc: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x394accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_394ad0:
    // 0x394ad0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x394ad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394ad4:
    // 0x394ad4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x394ad4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_394ad8:
    // 0x394ad8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x394ad8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_394adc:
    // 0x394adc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x394adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394ae0:
    // 0x394ae0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x394ae0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_394ae4:
    // 0x394ae4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x394ae4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_394ae8:
    // 0x394ae8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x394ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394aec:
    // 0x394aec: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x394aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394af0:
    // 0x394af0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x394af0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_394af4:
    // 0x394af4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x394af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394af8:
    // 0x394af8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x394af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_394afc:
    // 0x394afc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x394afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394b00:
    // 0x394b00: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x394b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394b04:
    // 0x394b04: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x394b04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_394b08:
    // 0x394b08: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x394b08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394b0c:
    // 0x394b0c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x394b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394b10:
    // 0x394b10: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x394b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_394b14:
    // 0x394b14: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x394b14u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_394b18:
    // 0x394b18: 0x7fa60270  sq          $a2, 0x270($sp)
    ctx->pc = 0x394b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
label_394b1c:
    // 0x394b1c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x394b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_394b20:
    // 0x394b20: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x394b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_394b24:
    // 0x394b24: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x394b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394b28:
    // 0x394b28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x394b28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_394b2c:
    // 0x394b2c: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x394b2cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_394b30:
    // 0x394b30: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x394b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
label_394b34:
    // 0x394b34: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x394b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_394b38:
    // 0x394b38: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x394b38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394b3c:
    // 0x394b3c: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x394b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_394b40:
    // 0x394b40: 0x7fa60290  sq          $a2, 0x290($sp)
    ctx->pc = 0x394b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 6));
label_394b44:
    // 0x394b44: 0x7fa60280  sq          $a2, 0x280($sp)
    ctx->pc = 0x394b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 6));
label_394b48:
    // 0x394b48: 0x7fa70270  sq          $a3, 0x270($sp)
    ctx->pc = 0x394b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 7));
label_394b4c:
    // 0x394b4c: 0xc0e44cc  jal         func_391330
label_394b50:
    if (ctx->pc == 0x394B50u) {
        ctx->pc = 0x394B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B4Cu;
        // 0x394b50: 0x7fa700a0  sq          $a3, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394B54u;
        goto label_394b54;
    }
    ctx->pc = 0x394B4Cu;
    SET_GPR_U32(ctx, 31, 0x394B54u);
    ctx->pc = 0x394B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B4Cu;
    // 0x394b50: 0x7fa700a0  sq          $a3, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394B4Cu, 0x394B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B54u;
label_394b54:
    // 0x394b54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x394b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_394b58:
    // 0x394b58: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x394b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_394b5c:
    // 0x394b5c: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x394b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_394b60:
    // 0x394b60: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x394b60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394b64:
    // 0x394b64: 0xc0e44cc  jal         func_391330
label_394b68:
    if (ctx->pc == 0x394B68u) {
        ctx->pc = 0x394B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B64u;
        // 0x394b68: 0xc4540078  lwc1        $f20, 0x78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x394B6Cu;
        goto label_394b6c;
    }
    ctx->pc = 0x394B64u;
    SET_GPR_U32(ctx, 31, 0x394B6Cu);
    ctx->pc = 0x394B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B64u;
    // 0x394b68: 0xc4540078  lwc1        $f20, 0x78($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394B64u, 0x394B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B6Cu;
label_394b6c:
    // 0x394b6c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x394b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394b70:
    // 0x394b70: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x394b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_394b74:
    // 0x394b74: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x394b74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394b78:
    // 0x394b78: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x394b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_394b7c:
    // 0x394b7c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x394b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_394b80:
    // 0x394b80: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x394b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_394b84:
    // 0x394b84: 0x8e690118  lw          $t1, 0x118($s3)
    ctx->pc = 0x394b84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_394b88:
    // 0x394b88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x394b88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_394b8c:
    // 0x394b8c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x394b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_394b90:
    // 0x394b90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x394b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_394b94:
    // 0x394b94: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x394b94u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_394b98:
    // 0x394b98: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x394b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_394b9c:
    // 0x394b9c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x394b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_394ba0:
    // 0x394ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x394ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_394ba4:
    // 0x394ba4: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x394ba4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_394ba8:
    // 0x394ba8: 0x8ca47198  lw          $a0, 0x7198($a1)
    ctx->pc = 0x394ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29080)));
label_394bac:
    // 0x394bac: 0x3442004d  ori         $v0, $v0, 0x4D
    ctx->pc = 0x394bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)77);
label_394bb0:
    // 0x394bb0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x394bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_394bb4:
    // 0x394bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394bb8:
    // 0x394bb8: 0x7fa800a0  sq          $t0, 0xA0($sp)
    ctx->pc = 0x394bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 8));
label_394bbc:
    // 0x394bbc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x394bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_394bc0:
    // 0x394bc0: 0xafa90230  sw          $t1, 0x230($sp)
    ctx->pc = 0x394bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 9));
label_394bc4:
    // 0x394bc4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x394bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_394bc8:
    // 0x394bc8: 0x7fa80270  sq          $t0, 0x270($sp)
    ctx->pc = 0x394bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 8));
label_394bcc:
    // 0x394bcc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x394bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_394bd0:
    // 0x394bd0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x394bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_394bd4:
    // 0x394bd4: 0xafb40248  sw          $s4, 0x248($sp)
    ctx->pc = 0x394bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 20));
label_394bd8:
    // 0x394bd8: 0xe7a1025c  swc1        $f1, 0x25C($sp)
    ctx->pc = 0x394bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_394bdc:
    // 0x394bdc: 0xafb20234  sw          $s2, 0x234($sp)
    ctx->pc = 0x394bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 18));
label_394be0:
    // 0x394be0: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x394be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_394be4:
    // 0x394be4: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x394be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_394be8:
    // 0x394be8: 0xc0cf9fc  jal         func_33E7F0
label_394bec:
    if (ctx->pc == 0x394BECu) {
        ctx->pc = 0x394BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BE8u;
        // 0x394bec: 0xe7b60264  swc1        $f22, 0x264($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x394BF0u;
        goto label_394bf0;
    }
    ctx->pc = 0x394BE8u;
    SET_GPR_U32(ctx, 31, 0x394BF0u);
    ctx->pc = 0x394BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394BE8u;
    // 0x394bec: 0xe7b60264  swc1        $f22, 0x264($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x394BE8u, 0x394BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394BF0u;
label_394bf0:
    // 0x394bf0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x394bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394bf4:
    // 0x394bf4: 0x1120005e  beqz        $t1, . + 4 + (0x5E << 2)
label_394bf8:
    if (ctx->pc == 0x394BF8u) {
        ctx->pc = 0x394BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BF4u;
        // 0x394bf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394BFCu;
        goto label_394bfc;
    }
    ctx->pc = 0x394BF4u;
    {
        const bool branch_taken_0x394bf4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x394BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BF4u;
        // 0x394bf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bf4) {
            ctx->pc = 0x394D70u;
            goto label_394d70;
        }
    }
    ctx->pc = 0x394BFCu;
label_394bfc:
    // 0x394bfc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x394bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_394c00:
    // 0x394c00: 0x4600b086  mov.s       $f2, $f22
    ctx->pc = 0x394c00u;
    ctx->f[2] = FPU_MOV_S(ctx->f[22]);
label_394c04:
    // 0x394c04: 0x7ba60290  lq          $a2, 0x290($sp)
    ctx->pc = 0x394c04u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_394c08:
    // 0x394c08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x394c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394c0c:
    // 0x394c0c: 0x0  nop
    ctx->pc = 0x394c0cu;
    // NOP
label_394c10:
    // 0x394c10: 0xc4e00080  lwc1        $f0, 0x80($a3)
    ctx->pc = 0x394c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394c14:
    // 0x394c14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x394c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_394c18:
    // 0x394c18: 0x0  nop
    ctx->pc = 0x394c18u;
    // NOP
label_394c1c:
    // 0x394c1c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_394c20:
    if (ctx->pc == 0x394C20u) {
        ctx->pc = 0x394C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C1Cu;
        // 0x394c20: 0x8ce300b0  lw          $v1, 0xB0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C24u;
        goto label_394c24;
    }
    ctx->pc = 0x394C1Cu;
    {
        const bool branch_taken_0x394c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x394C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C1Cu;
        // 0x394c20: 0x8ce300b0  lw          $v1, 0xB0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c1c) {
            ctx->pc = 0x394C90u;
            goto label_394c90;
        }
    }
    ctx->pc = 0x394C24u;
label_394c24:
    // 0x394c24: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x394c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_394c28:
    // 0x394c28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_394c2c:
    if (ctx->pc == 0x394C2Cu) {
        ctx->pc = 0x394C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C28u;
        // 0x394c2c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C30u;
        goto label_394c30;
    }
    ctx->pc = 0x394C28u;
    {
        const bool branch_taken_0x394c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C28u;
        // 0x394c2c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c28) {
            ctx->pc = 0x394C64u;
            goto label_394c64;
        }
    }
    ctx->pc = 0x394C30u;
label_394c30:
    // 0x394c30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_394c34:
    if (ctx->pc == 0x394C34u) {
        ctx->pc = 0x394C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C30u;
        // 0x394c34: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C38u;
        goto label_394c38;
    }
    ctx->pc = 0x394C30u;
    {
        const bool branch_taken_0x394c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C30u;
        // 0x394c34: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c30) {
            ctx->pc = 0x394C50u;
            goto label_394c50;
        }
    }
    ctx->pc = 0x394C38u;
label_394c38:
    // 0x394c38: 0x78e20050  lq          $v0, 0x50($a3)
    ctx->pc = 0x394c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_394c3c:
    // 0x394c3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x394c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_394c40:
    // 0x394c40: 0xc4e00088  lwc1        $f0, 0x88($a3)
    ctx->pc = 0x394c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394c44:
    // 0x394c44: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x394c44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_394c48:
    // 0x394c48: 0x1000001d  b           . + 4 + (0x1D << 2)
label_394c4c:
    if (ctx->pc == 0x394C4Cu) {
        ctx->pc = 0x394C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C48u;
        // 0x394c4c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C50u;
        goto label_394c50;
    }
    ctx->pc = 0x394C48u;
    {
        const bool branch_taken_0x394c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C48u;
        // 0x394c4c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c48) {
            ctx->pc = 0x394CC0u;
            goto label_394cc0;
        }
    }
    ctx->pc = 0x394C50u;
label_394c50:
    // 0x394c50: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x394c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_394c54:
    // 0x394c54: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x394c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394c58:
    // 0x394c58: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x394c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394c5c:
    // 0x394c5c: 0x10000022  b           . + 4 + (0x22 << 2)
label_394c60:
    if (ctx->pc == 0x394C60u) {
        ctx->pc = 0x394C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C5Cu;
        // 0x394c60: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C64u;
        goto label_394c64;
    }
    ctx->pc = 0x394C5Cu;
    {
        const bool branch_taken_0x394c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C5Cu;
        // 0x394c60: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c5c) {
            ctx->pc = 0x394CE8u;
            goto label_394ce8;
        }
    }
    ctx->pc = 0x394C64u;
label_394c64:
    // 0x394c64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_394c68:
    if (ctx->pc == 0x394C68u) {
        ctx->pc = 0x394C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C64u;
        // 0x394c68: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C6Cu;
        goto label_394c6c;
    }
    ctx->pc = 0x394C64u;
    {
        const bool branch_taken_0x394c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C64u;
        // 0x394c68: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c64) {
            ctx->pc = 0x394C80u;
            goto label_394c80;
        }
    }
    ctx->pc = 0x394C6Cu;
label_394c6c:
    // 0x394c6c: 0x78e20050  lq          $v0, 0x50($a3)
    ctx->pc = 0x394c6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_394c70:
    // 0x394c70: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x394c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_394c74:
    // 0x394c74: 0xc4e00088  lwc1        $f0, 0x88($a3)
    ctx->pc = 0x394c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394c78:
    // 0x394c78: 0x10000011  b           . + 4 + (0x11 << 2)
label_394c7c:
    if (ctx->pc == 0x394C7Cu) {
        ctx->pc = 0x394C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C78u;
        // 0x394c7c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C80u;
        goto label_394c80;
    }
    ctx->pc = 0x394C78u;
    {
        const bool branch_taken_0x394c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C78u;
        // 0x394c7c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c78) {
            ctx->pc = 0x394CC0u;
            goto label_394cc0;
        }
    }
    ctx->pc = 0x394C80u;
label_394c80:
    // 0x394c80: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x394c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_394c84:
    // 0x394c84: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x394c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394c88:
    // 0x394c88: 0x10000016  b           . + 4 + (0x16 << 2)
label_394c8c:
    if (ctx->pc == 0x394C8Cu) {
        ctx->pc = 0x394C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C88u;
        // 0x394c8c: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C90u;
        goto label_394c90;
    }
    ctx->pc = 0x394C88u;
    {
        const bool branch_taken_0x394c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C88u;
        // 0x394c8c: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c88) {
            ctx->pc = 0x394CE4u;
            goto label_394ce4;
        }
    }
    ctx->pc = 0x394C90u;
label_394c90:
    // 0x394c90: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x394c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_394c94:
    // 0x394c94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_394c98:
    if (ctx->pc == 0x394C98u) {
        ctx->pc = 0x394C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C94u;
        // 0x394c98: 0x78e20050  lq          $v0, 0x50($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394C9Cu;
        goto label_394c9c;
    }
    ctx->pc = 0x394C94u;
    {
        const bool branch_taken_0x394c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394c94) {
            ctx->pc = 0x394C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394C94u;
            // 0x394c98: 0x78e20050  lq          $v0, 0x50($a3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394CACu;
            goto label_394cac;
        }
    }
    ctx->pc = 0x394C9Cu;
label_394c9c:
    // 0x394c9c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x394c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_394ca0:
    // 0x394ca0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_394ca4:
    if (ctx->pc == 0x394CA4u) {
        ctx->pc = 0x394CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CA0u;
        // 0x394ca4: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x394CA8u;
        goto label_394ca8;
    }
    ctx->pc = 0x394CA0u;
    {
        const bool branch_taken_0x394ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CA0u;
        // 0x394ca4: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ca0) {
            ctx->pc = 0x394CDCu;
            goto label_394cdc;
        }
    }
    ctx->pc = 0x394CA8u;
label_394ca8:
    // 0x394ca8: 0x78e20050  lq          $v0, 0x50($a3)
    ctx->pc = 0x394ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_394cac:
    // 0x394cac: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x394cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394cb0:
    // 0x394cb0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x394cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_394cb4:
    // 0x394cb4: 0xc4e00088  lwc1        $f0, 0x88($a3)
    ctx->pc = 0x394cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394cb8:
    // 0x394cb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x394cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_394cbc:
    // 0x394cbc: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x394cbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_394cc0:
    // 0x394cc0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x394cc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_394cc4:
    // 0x394cc4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394cc8:
    // 0x394cc8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x394cc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_394ccc:
    // 0x394ccc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x394cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_394cd0:
    // 0x394cd0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x394cd0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_394cd4:
    // 0x394cd4: 0x10000017  b           . + 4 + (0x17 << 2)
label_394cd8:
    if (ctx->pc == 0x394CD8u) {
        ctx->pc = 0x394CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CD4u;
        // 0x394cd8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394CDCu;
        goto label_394cdc;
    }
    ctx->pc = 0x394CD4u;
    {
        const bool branch_taken_0x394cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CD4u;
        // 0x394cd8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cd4) {
            ctx->pc = 0x394D34u;
            goto label_394d34;
        }
    }
    ctx->pc = 0x394CDCu;
label_394cdc:
    // 0x394cdc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x394cdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394ce0:
    // 0x394ce0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x394ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_394ce4:
    // 0x394ce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x394ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_394ce8:
    // 0x394ce8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x394ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_394cec:
    // 0x394cec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394cf0:
    // 0x394cf0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x394cf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_394cf4:
    // 0x394cf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x394cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_394cf8:
    // 0x394cf8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x394cf8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_394cfc:
    // 0x394cfc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x394cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_394d00:
    // 0x394d00: 0x78e20050  lq          $v0, 0x50($a3)
    ctx->pc = 0x394d00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_394d04:
    // 0x394d04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x394d04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_394d08:
    // 0x394d08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x394d08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394d0c:
    // 0x394d0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x394d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394d10:
    // 0x394d10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x394d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394d14:
    // 0x394d14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x394d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_394d18:
    // 0x394d18: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x394d18u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_394d1c:
    // 0x394d1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394d20:
    // 0x394d20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x394d20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_394d24:
    // 0x394d24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x394d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_394d28:
    // 0x394d28: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x394d28u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_394d2c:
    // 0x394d2c: 0x7fa60280  sq          $a2, 0x280($sp)
    ctx->pc = 0x394d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 6));
label_394d30:
    // 0x394d30: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x394d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_394d34:
    // 0x394d34: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x394d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_394d38:
    // 0x394d38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x394d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_394d3c:
    // 0x394d3c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x394d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394d40:
    // 0x394d40: 0x24e700c0  addiu       $a3, $a3, 0xC0
    ctx->pc = 0x394d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
label_394d44:
    // 0x394d44: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x394d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_394d48:
    // 0x394d48: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x394d48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_394d4c:
    // 0x394d4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394d50:
    // 0x394d50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x394d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_394d54:
    // 0x394d54: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x394d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394d58:
    // 0x394d58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x394d58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_394d5c:
    // 0x394d5c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x394d5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_394d60:
    // 0x394d60: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
label_394d64:
    if (ctx->pc == 0x394D64u) {
        ctx->pc = 0x394D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D60u;
        // 0x394d64: 0x7ca30050  sq          $v1, 0x50($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394D68u;
        goto label_394d68;
    }
    ctx->pc = 0x394D60u;
    {
        const bool branch_taken_0x394d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x394D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D60u;
        // 0x394d64: 0x7ca30050  sq          $v1, 0x50($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d60) {
            ctx->pc = 0x394C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394c10;
        }
    }
    ctx->pc = 0x394D68u;
label_394d68:
    // 0x394d68: 0x7fa60290  sq          $a2, 0x290($sp)
    ctx->pc = 0x394d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 6));
label_394d6c:
    // 0x394d6c: 0x7fa30270  sq          $v1, 0x270($sp)
    ctx->pc = 0x394d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 3));
label_394d70:
    // 0x394d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394d74:
    // 0x394d74: 0xc0d0ab8  jal         func_342AE0
label_394d78:
    if (ctx->pc == 0x394D78u) {
        ctx->pc = 0x394D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D74u;
        // 0x394d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394D7Cu;
        goto label_394d7c;
    }
    ctx->pc = 0x394D74u;
    SET_GPR_U32(ctx, 31, 0x394D7Cu);
    ctx->pc = 0x394D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394D74u;
    // 0x394d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AE0u, 0x394D74u, 0x394D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394D7Cu;
label_394d7c:
    // 0x394d7c: 0x7bb002f0  lq          $s0, 0x2F0($sp)
    ctx->pc = 0x394d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_394d80:
    // 0x394d80: 0x7bb102e0  lq          $s1, 0x2E0($sp)
    ctx->pc = 0x394d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_394d84:
    // 0x394d84: 0x7bb202d0  lq          $s2, 0x2D0($sp)
    ctx->pc = 0x394d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_394d88:
    // 0x394d88: 0x7bb302c0  lq          $s3, 0x2C0($sp)
    ctx->pc = 0x394d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_394d8c:
    // 0x394d8c: 0x7bb402b0  lq          $s4, 0x2B0($sp)
    ctx->pc = 0x394d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_394d90:
    // 0x394d90: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x394d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_394d94:
    // 0x394d94: 0xc7b60310  lwc1        $f22, 0x310($sp)
    ctx->pc = 0x394d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_394d98:
    // 0x394d98: 0xc7b50308  lwc1        $f21, 0x308($sp)
    ctx->pc = 0x394d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394d9c:
    // 0x394d9c: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x394d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394da0:
    // 0x394da0: 0x3e00008  jr          $ra
label_394da4:
    if (ctx->pc == 0x394DA4u) {
        ctx->pc = 0x394DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DA0u;
        // 0x394da4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394DA8u;
        goto label_fallthrough_0x394da0;
    }
    ctx->pc = 0x394DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DA0u;
        // 0x394da4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394da0:
    ctx->pc = 0x394DA8u;
}
