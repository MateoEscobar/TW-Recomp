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

// Function: sub_00129F88
// Address: 0x129f88 - 0x12a400
void sub_00129F88_0x129f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129F88_0x129f88");
#endif

    switch (ctx->pc) {
        case 0x129f88u: goto label_129f88;
        case 0x129f8cu: goto label_129f8c;
        case 0x129f90u: goto label_129f90;
        case 0x129f94u: goto label_129f94;
        case 0x129f98u: goto label_129f98;
        case 0x129f9cu: goto label_129f9c;
        case 0x129fa0u: goto label_129fa0;
        case 0x129fa4u: goto label_129fa4;
        case 0x129fa8u: goto label_129fa8;
        case 0x129facu: goto label_129fac;
        case 0x129fb0u: goto label_129fb0;
        case 0x129fb4u: goto label_129fb4;
        case 0x129fb8u: goto label_129fb8;
        case 0x129fbcu: goto label_129fbc;
        case 0x129fc0u: goto label_129fc0;
        case 0x129fc4u: goto label_129fc4;
        case 0x129fc8u: goto label_129fc8;
        case 0x129fccu: goto label_129fcc;
        case 0x129fd0u: goto label_129fd0;
        case 0x129fd4u: goto label_129fd4;
        case 0x129fd8u: goto label_129fd8;
        case 0x129fdcu: goto label_129fdc;
        case 0x129fe0u: goto label_129fe0;
        case 0x129fe4u: goto label_129fe4;
        case 0x129fe8u: goto label_129fe8;
        case 0x129fecu: goto label_129fec;
        case 0x129ff0u: goto label_129ff0;
        case 0x129ff4u: goto label_129ff4;
        case 0x129ff8u: goto label_129ff8;
        case 0x129ffcu: goto label_129ffc;
        case 0x12a000u: goto label_12a000;
        case 0x12a004u: goto label_12a004;
        case 0x12a008u: goto label_12a008;
        case 0x12a00cu: goto label_12a00c;
        case 0x12a010u: goto label_12a010;
        case 0x12a014u: goto label_12a014;
        case 0x12a018u: goto label_12a018;
        case 0x12a01cu: goto label_12a01c;
        case 0x12a020u: goto label_12a020;
        case 0x12a024u: goto label_12a024;
        case 0x12a028u: goto label_12a028;
        case 0x12a02cu: goto label_12a02c;
        case 0x12a030u: goto label_12a030;
        case 0x12a034u: goto label_12a034;
        case 0x12a038u: goto label_12a038;
        case 0x12a03cu: goto label_12a03c;
        case 0x12a040u: goto label_12a040;
        case 0x12a044u: goto label_12a044;
        case 0x12a048u: goto label_12a048;
        case 0x12a04cu: goto label_12a04c;
        case 0x12a050u: goto label_12a050;
        case 0x12a054u: goto label_12a054;
        case 0x12a058u: goto label_12a058;
        case 0x12a05cu: goto label_12a05c;
        case 0x12a060u: goto label_12a060;
        case 0x12a064u: goto label_12a064;
        case 0x12a068u: goto label_12a068;
        case 0x12a06cu: goto label_12a06c;
        case 0x12a070u: goto label_12a070;
        case 0x12a074u: goto label_12a074;
        case 0x12a078u: goto label_12a078;
        case 0x12a07cu: goto label_12a07c;
        case 0x12a080u: goto label_12a080;
        case 0x12a084u: goto label_12a084;
        case 0x12a088u: goto label_12a088;
        case 0x12a08cu: goto label_12a08c;
        case 0x12a090u: goto label_12a090;
        case 0x12a094u: goto label_12a094;
        case 0x12a098u: goto label_12a098;
        case 0x12a09cu: goto label_12a09c;
        case 0x12a0a0u: goto label_12a0a0;
        case 0x12a0a4u: goto label_12a0a4;
        case 0x12a0a8u: goto label_12a0a8;
        case 0x12a0acu: goto label_12a0ac;
        case 0x12a0b0u: goto label_12a0b0;
        case 0x12a0b4u: goto label_12a0b4;
        case 0x12a0b8u: goto label_12a0b8;
        case 0x12a0bcu: goto label_12a0bc;
        case 0x12a0c0u: goto label_12a0c0;
        case 0x12a0c4u: goto label_12a0c4;
        case 0x12a0c8u: goto label_12a0c8;
        case 0x12a0ccu: goto label_12a0cc;
        case 0x12a0d0u: goto label_12a0d0;
        case 0x12a0d4u: goto label_12a0d4;
        case 0x12a0d8u: goto label_12a0d8;
        case 0x12a0dcu: goto label_12a0dc;
        case 0x12a0e0u: goto label_12a0e0;
        case 0x12a0e4u: goto label_12a0e4;
        case 0x12a0e8u: goto label_12a0e8;
        case 0x12a0ecu: goto label_12a0ec;
        case 0x12a0f0u: goto label_12a0f0;
        case 0x12a0f4u: goto label_12a0f4;
        case 0x12a0f8u: goto label_12a0f8;
        case 0x12a0fcu: goto label_12a0fc;
        case 0x12a100u: goto label_12a100;
        case 0x12a104u: goto label_12a104;
        case 0x12a108u: goto label_12a108;
        case 0x12a10cu: goto label_12a10c;
        case 0x12a110u: goto label_12a110;
        case 0x12a114u: goto label_12a114;
        case 0x12a118u: goto label_12a118;
        case 0x12a11cu: goto label_12a11c;
        case 0x12a120u: goto label_12a120;
        case 0x12a124u: goto label_12a124;
        case 0x12a128u: goto label_12a128;
        case 0x12a12cu: goto label_12a12c;
        case 0x12a130u: goto label_12a130;
        case 0x12a134u: goto label_12a134;
        case 0x12a138u: goto label_12a138;
        case 0x12a13cu: goto label_12a13c;
        case 0x12a140u: goto label_12a140;
        case 0x12a144u: goto label_12a144;
        case 0x12a148u: goto label_12a148;
        case 0x12a14cu: goto label_12a14c;
        case 0x12a150u: goto label_12a150;
        case 0x12a154u: goto label_12a154;
        case 0x12a158u: goto label_12a158;
        case 0x12a15cu: goto label_12a15c;
        case 0x12a160u: goto label_12a160;
        case 0x12a164u: goto label_12a164;
        case 0x12a168u: goto label_12a168;
        case 0x12a16cu: goto label_12a16c;
        case 0x12a170u: goto label_12a170;
        case 0x12a174u: goto label_12a174;
        case 0x12a178u: goto label_12a178;
        case 0x12a17cu: goto label_12a17c;
        case 0x12a180u: goto label_12a180;
        case 0x12a184u: goto label_12a184;
        case 0x12a188u: goto label_12a188;
        case 0x12a18cu: goto label_12a18c;
        case 0x12a190u: goto label_12a190;
        case 0x12a194u: goto label_12a194;
        case 0x12a198u: goto label_12a198;
        case 0x12a19cu: goto label_12a19c;
        case 0x12a1a0u: goto label_12a1a0;
        case 0x12a1a4u: goto label_12a1a4;
        case 0x12a1a8u: goto label_12a1a8;
        case 0x12a1acu: goto label_12a1ac;
        case 0x12a1b0u: goto label_12a1b0;
        case 0x12a1b4u: goto label_12a1b4;
        case 0x12a1b8u: goto label_12a1b8;
        case 0x12a1bcu: goto label_12a1bc;
        case 0x12a1c0u: goto label_12a1c0;
        case 0x12a1c4u: goto label_12a1c4;
        case 0x12a1c8u: goto label_12a1c8;
        case 0x12a1ccu: goto label_12a1cc;
        case 0x12a1d0u: goto label_12a1d0;
        case 0x12a1d4u: goto label_12a1d4;
        case 0x12a1d8u: goto label_12a1d8;
        case 0x12a1dcu: goto label_12a1dc;
        case 0x12a1e0u: goto label_12a1e0;
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a1e8u: goto label_12a1e8;
        case 0x12a1ecu: goto label_12a1ec;
        case 0x12a1f0u: goto label_12a1f0;
        case 0x12a1f4u: goto label_12a1f4;
        case 0x12a1f8u: goto label_12a1f8;
        case 0x12a1fcu: goto label_12a1fc;
        case 0x12a200u: goto label_12a200;
        case 0x12a204u: goto label_12a204;
        case 0x12a208u: goto label_12a208;
        case 0x12a20cu: goto label_12a20c;
        case 0x12a210u: goto label_12a210;
        case 0x12a214u: goto label_12a214;
        case 0x12a218u: goto label_12a218;
        case 0x12a21cu: goto label_12a21c;
        case 0x12a220u: goto label_12a220;
        case 0x12a224u: goto label_12a224;
        case 0x12a228u: goto label_12a228;
        case 0x12a22cu: goto label_12a22c;
        case 0x12a230u: goto label_12a230;
        case 0x12a234u: goto label_12a234;
        case 0x12a238u: goto label_12a238;
        case 0x12a23cu: goto label_12a23c;
        case 0x12a240u: goto label_12a240;
        case 0x12a244u: goto label_12a244;
        case 0x12a248u: goto label_12a248;
        case 0x12a24cu: goto label_12a24c;
        case 0x12a250u: goto label_12a250;
        case 0x12a254u: goto label_12a254;
        case 0x12a258u: goto label_12a258;
        case 0x12a25cu: goto label_12a25c;
        case 0x12a260u: goto label_12a260;
        case 0x12a264u: goto label_12a264;
        case 0x12a268u: goto label_12a268;
        case 0x12a26cu: goto label_12a26c;
        case 0x12a270u: goto label_12a270;
        case 0x12a274u: goto label_12a274;
        case 0x12a278u: goto label_12a278;
        case 0x12a27cu: goto label_12a27c;
        case 0x12a280u: goto label_12a280;
        case 0x12a284u: goto label_12a284;
        case 0x12a288u: goto label_12a288;
        case 0x12a28cu: goto label_12a28c;
        case 0x12a290u: goto label_12a290;
        case 0x12a294u: goto label_12a294;
        case 0x12a298u: goto label_12a298;
        case 0x12a29cu: goto label_12a29c;
        case 0x12a2a0u: goto label_12a2a0;
        case 0x12a2a4u: goto label_12a2a4;
        case 0x12a2a8u: goto label_12a2a8;
        case 0x12a2acu: goto label_12a2ac;
        case 0x12a2b0u: goto label_12a2b0;
        case 0x12a2b4u: goto label_12a2b4;
        case 0x12a2b8u: goto label_12a2b8;
        case 0x12a2bcu: goto label_12a2bc;
        case 0x12a2c0u: goto label_12a2c0;
        case 0x12a2c4u: goto label_12a2c4;
        case 0x12a2c8u: goto label_12a2c8;
        case 0x12a2ccu: goto label_12a2cc;
        case 0x12a2d0u: goto label_12a2d0;
        case 0x12a2d4u: goto label_12a2d4;
        case 0x12a2d8u: goto label_12a2d8;
        case 0x12a2dcu: goto label_12a2dc;
        case 0x12a2e0u: goto label_12a2e0;
        case 0x12a2e4u: goto label_12a2e4;
        case 0x12a2e8u: goto label_12a2e8;
        case 0x12a2ecu: goto label_12a2ec;
        case 0x12a2f0u: goto label_12a2f0;
        case 0x12a2f4u: goto label_12a2f4;
        case 0x12a2f8u: goto label_12a2f8;
        case 0x12a2fcu: goto label_12a2fc;
        case 0x12a300u: goto label_12a300;
        case 0x12a304u: goto label_12a304;
        case 0x12a308u: goto label_12a308;
        case 0x12a30cu: goto label_12a30c;
        case 0x12a310u: goto label_12a310;
        case 0x12a314u: goto label_12a314;
        case 0x12a318u: goto label_12a318;
        case 0x12a31cu: goto label_12a31c;
        case 0x12a320u: goto label_12a320;
        case 0x12a324u: goto label_12a324;
        case 0x12a328u: goto label_12a328;
        case 0x12a32cu: goto label_12a32c;
        case 0x12a330u: goto label_12a330;
        case 0x12a334u: goto label_12a334;
        case 0x12a338u: goto label_12a338;
        case 0x12a33cu: goto label_12a33c;
        case 0x12a340u: goto label_12a340;
        case 0x12a344u: goto label_12a344;
        case 0x12a348u: goto label_12a348;
        case 0x12a34cu: goto label_12a34c;
        case 0x12a350u: goto label_12a350;
        case 0x12a354u: goto label_12a354;
        case 0x12a358u: goto label_12a358;
        case 0x12a35cu: goto label_12a35c;
        case 0x12a360u: goto label_12a360;
        case 0x12a364u: goto label_12a364;
        case 0x12a368u: goto label_12a368;
        case 0x12a36cu: goto label_12a36c;
        case 0x12a370u: goto label_12a370;
        case 0x12a374u: goto label_12a374;
        case 0x12a378u: goto label_12a378;
        case 0x12a37cu: goto label_12a37c;
        case 0x12a380u: goto label_12a380;
        case 0x12a384u: goto label_12a384;
        case 0x12a388u: goto label_12a388;
        case 0x12a38cu: goto label_12a38c;
        case 0x12a390u: goto label_12a390;
        case 0x12a394u: goto label_12a394;
        case 0x12a398u: goto label_12a398;
        case 0x12a39cu: goto label_12a39c;
        case 0x12a3a0u: goto label_12a3a0;
        case 0x12a3a4u: goto label_12a3a4;
        case 0x12a3a8u: goto label_12a3a8;
        case 0x12a3acu: goto label_12a3ac;
        case 0x12a3b0u: goto label_12a3b0;
        case 0x12a3b4u: goto label_12a3b4;
        case 0x12a3b8u: goto label_12a3b8;
        case 0x12a3bcu: goto label_12a3bc;
        case 0x12a3c0u: goto label_12a3c0;
        case 0x12a3c4u: goto label_12a3c4;
        case 0x12a3c8u: goto label_12a3c8;
        case 0x12a3ccu: goto label_12a3cc;
        case 0x12a3d0u: goto label_12a3d0;
        case 0x12a3d4u: goto label_12a3d4;
        case 0x12a3d8u: goto label_12a3d8;
        case 0x12a3dcu: goto label_12a3dc;
        case 0x12a3e0u: goto label_12a3e0;
        case 0x12a3e4u: goto label_12a3e4;
        case 0x12a3e8u: goto label_12a3e8;
        case 0x12a3ecu: goto label_12a3ec;
        case 0x12a3f0u: goto label_12a3f0;
        case 0x12a3f4u: goto label_12a3f4;
        case 0x12a3f8u: goto label_12a3f8;
        case 0x12a3fcu: goto label_12a3fc;
        default: break;
    }

    ctx->pc = 0x129f88u;

label_129f88:
    // 0x129f88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x129f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_129f8c:
    // 0x129f8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x129f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_129f90:
    // 0x129f90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x129f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_129f94:
    // 0x129f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129f98:
    // 0x129f98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x129f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_129f9c:
    // 0x129f9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_129fa0:
    // 0x129fa0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x129fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_129fa4:
    // 0x129fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x129fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129fa8:
    // 0x129fa8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x129fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_129fac:
    // 0x129fac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x129facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_129fb0:
    // 0x129fb0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x129fb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_129fb4:
    // 0x129fb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x129fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129fb8:
    // 0x129fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_129fbc:
    // 0x129fbc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x129fbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_129fc0:
    // 0x129fc0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x129fc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_129fc4:
    // 0x129fc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_129fc8:
    // 0x129fc8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x129fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_129fcc:
    // 0x129fcc: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x129fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_129fd0:
    // 0x129fd0: 0x40f809  jalr        $v0
label_129fd4:
    if (ctx->pc == 0x129FD4u) {
        ctx->pc = 0x129FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FD0u;
        // 0x129fd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129FD8u;
        goto label_129fd8;
    }
    ctx->pc = 0x129FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129FD8u);
        ctx->pc = 0x129FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FD0u;
        // 0x129fd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129FD0u, 0x129FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129fdc:
    // 0x129fdc: 0xc0cd8ec  jal         func_3363B0
label_129fe0:
    if (ctx->pc == 0x129FE0u) {
        ctx->pc = 0x129FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FDCu;
        // 0x129fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129FE4u;
        goto label_129fe4;
    }
    ctx->pc = 0x129FDCu;
    SET_GPR_U32(ctx, 31, 0x129FE4u);
    ctx->pc = 0x129FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FDCu;
    // 0x129fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x129FDCu, 0x129FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FE4u;
label_129fe4:
    // 0x129fe4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x129fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129fe8:
    // 0x129fe8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_129fec:
    // 0x129fec: 0x8e060314  lw          $a2, 0x314($s0)
    ctx->pc = 0x129fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_129ff0:
    // 0x129ff0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x129ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129ff4:
    // 0x129ff4: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x129ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_129ff8:
    // 0x129ff8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x129ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_129ffc:
    // 0x129ffc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x129ffcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12a000:
    // 0x12a000: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12a000u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12a004:
    // 0x12a004: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a004u;
    // VWAITQ (Q already resolved in this runtime)
label_12a008:
    // 0x12a008: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12a008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12a00c:
    // 0x12a00c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12a00cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12a010:
    // 0x12a010: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12a014:
    // 0x12a014: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x12a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_12a018:
    // 0x12a018: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12a01c:
    // 0x12a01c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12a020:
    // 0x12a020: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x12a020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_12a024:
    // 0x12a024: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x12a024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12a028:
    // 0x12a028: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_12a02c:
    // 0x12a02c: 0xc0cd8ec  jal         func_3363B0
label_12a030:
    if (ctx->pc == 0x12A030u) {
        ctx->pc = 0x12A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A02Cu;
        // 0x12a030: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A034u;
        goto label_12a034;
    }
    ctx->pc = 0x12A02Cu;
    SET_GPR_U32(ctx, 31, 0x12A034u);
    ctx->pc = 0x12A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A02Cu;
    // 0x12a030: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12A02Cu, 0x12A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A034u;
label_12a034:
    // 0x12a034: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x12a034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12a038:
    // 0x12a038: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12a038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a03c:
    // 0x12a03c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12a03cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12a040:
    // 0x12a040: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12a040u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12a044:
    // 0x12a044: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12a044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12a048:
    // 0x12a048: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12a048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12a04c:
    // 0x12a04c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12a04cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12a050:
    // 0x12a050: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x12a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_12a054:
    // 0x12a054: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a058:
    // 0x12a058: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a05c:
    // 0x12a05c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x12a05cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12a060:
    // 0x12a060: 0xc12e29c  jal         func_4B8A70
label_12a064:
    if (ctx->pc == 0x12A064u) {
        ctx->pc = 0x12A068u;
        goto label_12a068;
    }
    ctx->pc = 0x12A060u;
    SET_GPR_U32(ctx, 31, 0x12A068u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A060u, 0x12A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A068u;
label_12a068:
    // 0x12a068: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a06c:
    // 0x12a06c: 0x0  nop
    ctx->pc = 0x12a06cu;
    // NOP
label_12a070:
    // 0x12a070: 0x450200d9  bc1fl       . + 4 + (0xD9 << 2)
label_12a074:
    if (ctx->pc == 0x12A074u) {
        ctx->pc = 0x12A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A070u;
        // 0x12a074: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A078u;
        goto label_12a078;
    }
    ctx->pc = 0x12A070u;
    {
        const bool branch_taken_0x12a070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a070) {
            ctx->pc = 0x12A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A070u;
            // 0x12a074: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A3D8u;
            goto label_12a3d8;
        }
    }
    ctx->pc = 0x12A078u;
label_12a078:
    // 0x12a078: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_12a07c:
    if (ctx->pc == 0x12A07Cu) {
        ctx->pc = 0x12A080u;
        goto label_12a080;
    }
    ctx->pc = 0x12A078u;
    {
        const bool branch_taken_0x12a078 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a078) {
            ctx->pc = 0x12A0A4u;
            goto label_12a0a4;
        }
    }
    ctx->pc = 0x12A080u;
label_12a080:
    // 0x12a080: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x12a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_12a084:
    // 0x12a084: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x12a084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_12a088:
    // 0x12a088: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a08c:
    // 0x12a08c: 0xc12e29c  jal         func_4B8A70
label_12a090:
    if (ctx->pc == 0x12A090u) {
        ctx->pc = 0x12A094u;
        goto label_12a094;
    }
    ctx->pc = 0x12A08Cu;
    SET_GPR_U32(ctx, 31, 0x12A094u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A08Cu, 0x12A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A094u;
label_12a094:
    // 0x12a094: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a098:
    // 0x12a098: 0x0  nop
    ctx->pc = 0x12a098u;
    // NOP
label_12a09c:
    // 0x12a09c: 0x450200ce  bc1fl       . + 4 + (0xCE << 2)
label_12a0a0:
    if (ctx->pc == 0x12A0A0u) {
        ctx->pc = 0x12A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A09Cu;
        // 0x12a0a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A0A4u;
        goto label_12a0a4;
    }
    ctx->pc = 0x12A09Cu;
    {
        const bool branch_taken_0x12a09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a09c) {
            ctx->pc = 0x12A0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A09Cu;
            // 0x12a0a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A3D8u;
            goto label_12a3d8;
        }
    }
    ctx->pc = 0x12A0A4u;
label_12a0a4:
    // 0x12a0a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12a0a8:
    // 0x12a0a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a0ac:
    // 0x12a0ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12a0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12a0b0:
    // 0x12a0b0: 0x3c01405f  lui         $at, 0x405F
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16479 << 16));
label_12a0b4:
    // 0x12a0b4: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x12a0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_12a0b8:
    // 0x12a0b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12a0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12a0bc:
    // 0x12a0bc: 0xc12e29c  jal         func_4B8A70
label_12a0c0:
    if (ctx->pc == 0x12A0C0u) {
        ctx->pc = 0x12A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0BCu;
        // 0x12a0c0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A0C4u;
        goto label_12a0c4;
    }
    ctx->pc = 0x12A0BCu;
    SET_GPR_U32(ctx, 31, 0x12A0C4u);
    ctx->pc = 0x12A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A0BCu;
    // 0x12a0c0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A0BCu, 0x12A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0C4u;
label_12a0c4:
    // 0x12a0c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a0c8:
    // 0x12a0c8: 0x0  nop
    ctx->pc = 0x12a0c8u;
    // NOP
label_12a0cc:
    // 0x12a0cc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_12a0d0:
    if (ctx->pc == 0x12A0D0u) {
        ctx->pc = 0x12A0D4u;
        goto label_12a0d4;
    }
    ctx->pc = 0x12A0CCu;
    {
        const bool branch_taken_0x12a0cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0cc) {
            ctx->pc = 0x12A170u;
            goto label_12a170;
        }
    }
    ctx->pc = 0x12A0D4u;
label_12a0d4:
    // 0x12a0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a0d8:
    // 0x12a0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a0dc:
    // 0x12a0dc: 0x0  nop
    ctx->pc = 0x12a0dcu;
    // NOP
label_12a0e0:
    // 0x12a0e0: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12a0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a0e4:
    // 0x12a0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a0e8:
    // 0x12a0e8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_12a0ec:
    if (ctx->pc == 0x12A0ECu) {
        ctx->pc = 0x12A0F0u;
        goto label_12a0f0;
    }
    ctx->pc = 0x12A0E8u;
    {
        const bool branch_taken_0x12a0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0e8) {
            ctx->pc = 0x12A148u;
            goto label_12a148;
        }
    }
    ctx->pc = 0x12A0F0u;
label_12a0f0:
    // 0x12a0f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a0f4:
    // 0x12a0f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a0f8:
    // 0x12a0f8: 0x0  nop
    ctx->pc = 0x12a0f8u;
    // NOP
label_12a0fc:
    // 0x12a0fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a100:
    // 0x12a100: 0x0  nop
    ctx->pc = 0x12a100u;
    // NOP
label_12a104:
    // 0x12a104: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12a108:
    if (ctx->pc == 0x12A108u) {
        ctx->pc = 0x12A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A104u;
        // 0x12a108: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A10Cu;
        goto label_12a10c;
    }
    ctx->pc = 0x12A104u;
    {
        const bool branch_taken_0x12a104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a104) {
            ctx->pc = 0x12A108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A104u;
            // 0x12a108: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A120u;
            goto label_12a120;
        }
    }
    ctx->pc = 0x12A10Cu;
label_12a10c:
    // 0x12a10c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a110:
    // 0x12a110: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a114:
    // 0x12a114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a118:
    // 0x12a118: 0x1000000b  b           . + 4 + (0xB << 2)
label_12a11c:
    if (ctx->pc == 0x12A11Cu) {
        ctx->pc = 0x12A120u;
        goto label_12a120;
    }
    ctx->pc = 0x12A118u;
    {
        const bool branch_taken_0x12a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a118) {
            ctx->pc = 0x12A148u;
            goto label_12a148;
        }
    }
    ctx->pc = 0x12A120u;
label_12a120:
    // 0x12a120: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12a120u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12a124:
    // 0x12a124: 0x0  nop
    ctx->pc = 0x12a124u;
    // NOP
label_12a128:
    // 0x12a128: 0x0  nop
    ctx->pc = 0x12a128u;
    // NOP
label_12a12c:
    // 0x12a12c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a12cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a130:
    // 0x12a130: 0x0  nop
    ctx->pc = 0x12a130u;
    // NOP
label_12a134:
    // 0x12a134: 0x0  nop
    ctx->pc = 0x12a134u;
    // NOP
label_12a138:
    // 0x12a138: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a138u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a13c:
    // 0x12a13c: 0xc0cd5a8  jal         func_3356A0
label_12a140:
    if (ctx->pc == 0x12A140u) {
        ctx->pc = 0x12A144u;
        goto label_12a144;
    }
    ctx->pc = 0x12A13Cu;
    SET_GPR_U32(ctx, 31, 0x12A144u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A13Cu, 0x12A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A144u;
label_12a144:
    // 0x12a144: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x12a144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_12a148:
    // 0x12a148: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x12a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_12a14c:
    // 0x12a14c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a150:
    // 0x12a150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a154:
    // 0x12a154: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x12a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
label_12a158:
    // 0x12a158: 0x342171c8  ori         $at, $at, 0x71C8
    ctx->pc = 0x12a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29128);
label_12a15c:
    // 0x12a15c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a160:
    // 0x12a160: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12a160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_12a164:
    // 0x12a164: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12a164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12a168:
    // 0x12a168: 0x10000065  b           . + 4 + (0x65 << 2)
label_12a16c:
    if (ctx->pc == 0x12A16Cu) {
        ctx->pc = 0x12A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A168u;
        // 0x12a16c: 0x46020540  add.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A170u;
        goto label_12a170;
    }
    ctx->pc = 0x12A168u;
    {
        const bool branch_taken_0x12a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A168u;
        // 0x12a16c: 0x46020540  add.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a168) {
            ctx->pc = 0x12A300u;
            goto label_12a300;
        }
    }
    ctx->pc = 0x12A170u;
label_12a170:
    // 0x12a170: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x12a170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_12a174:
    // 0x12a174: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a178:
    // 0x12a178: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a17c:
    // 0x12a17c: 0xc12e29c  jal         func_4B8A70
label_12a180:
    if (ctx->pc == 0x12A180u) {
        ctx->pc = 0x12A184u;
        goto label_12a184;
    }
    ctx->pc = 0x12A17Cu;
    SET_GPR_U32(ctx, 31, 0x12A184u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A17Cu, 0x12A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A184u;
label_12a184:
    // 0x12a184: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a188:
    // 0x12a188: 0x0  nop
    ctx->pc = 0x12a188u;
    // NOP
label_12a18c:
    // 0x12a18c: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_12a190:
    if (ctx->pc == 0x12A190u) {
        ctx->pc = 0x12A194u;
        goto label_12a194;
    }
    ctx->pc = 0x12A18Cu;
    {
        const bool branch_taken_0x12a18c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a18c) {
            ctx->pc = 0x12A22Cu;
            goto label_12a22c;
        }
    }
    ctx->pc = 0x12A194u;
label_12a194:
    // 0x12a194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a198:
    // 0x12a198: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a19c:
    // 0x12a19c: 0x0  nop
    ctx->pc = 0x12a19cu;
    // NOP
label_12a1a0:
    // 0x12a1a0: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12a1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a1a4:
    // 0x12a1a4: 0x0  nop
    ctx->pc = 0x12a1a4u;
    // NOP
label_12a1a8:
    // 0x12a1a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a1ac:
    if (ctx->pc == 0x12A1ACu) {
        ctx->pc = 0x12A1B0u;
        goto label_12a1b0;
    }
    ctx->pc = 0x12A1A8u;
    {
        const bool branch_taken_0x12a1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a1a8) {
            ctx->pc = 0x12A1BCu;
            goto label_12a1bc;
        }
    }
    ctx->pc = 0x12A1B0u;
label_12a1b0:
    // 0x12a1b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a1b4:
    // 0x12a1b4: 0x10000015  b           . + 4 + (0x15 << 2)
label_12a1b8:
    if (ctx->pc == 0x12A1B8u) {
        ctx->pc = 0x12A1BCu;
        goto label_12a1bc;
    }
    ctx->pc = 0x12A1B4u;
    {
        const bool branch_taken_0x12a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1b4) {
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A1BCu;
label_12a1bc:
    // 0x12a1bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a1c0:
    // 0x12a1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a1c4:
    // 0x12a1c4: 0x0  nop
    ctx->pc = 0x12a1c4u;
    // NOP
label_12a1c8:
    // 0x12a1c8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a1c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a1cc:
    // 0x12a1cc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a1d0:
    // 0x12a1d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a1d4:
    // 0x12a1d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a1d8:
    // 0x12a1d8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_12a1dc:
    if (ctx->pc == 0x12A1DCu) {
        ctx->pc = 0x12A1E0u;
        goto label_12a1e0;
    }
    ctx->pc = 0x12A1D8u;
    {
        const bool branch_taken_0x12a1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a1d8) {
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A1E0u;
label_12a1e0:
    // 0x12a1e0: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x12a1e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_12a1e4:
    // 0x12a1e4: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12a1e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12a1e8:
    // 0x12a1e8: 0x0  nop
    ctx->pc = 0x12a1e8u;
    // NOP
label_12a1ec:
    // 0x12a1ec: 0x0  nop
    ctx->pc = 0x12a1ecu;
    // NOP
label_12a1f0:
    // 0x12a1f0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a1f0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a1f4:
    // 0x12a1f4: 0x0  nop
    ctx->pc = 0x12a1f4u;
    // NOP
label_12a1f8:
    // 0x12a1f8: 0x0  nop
    ctx->pc = 0x12a1f8u;
    // NOP
label_12a1fc:
    // 0x12a1fc: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a1fcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a200:
    // 0x12a200: 0xc0cd5a8  jal         func_3356A0
label_12a204:
    if (ctx->pc == 0x12A204u) {
        ctx->pc = 0x12A208u;
        goto label_12a208;
    }
    ctx->pc = 0x12A200u;
    SET_GPR_U32(ctx, 31, 0x12A208u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A200u, 0x12A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A208u;
label_12a208:
    // 0x12a208: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x12a208u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_12a20c:
    // 0x12a20c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_12a210:
    // 0x12a210: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a214:
    // 0x12a214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a218:
    // 0x12a218: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_12a21c:
    // 0x12a21c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x12a21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_12a220:
    // 0x12a220: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a224:
    // 0x12a224: 0x10000031  b           . + 4 + (0x31 << 2)
label_12a228:
    if (ctx->pc == 0x12A228u) {
        ctx->pc = 0x12A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A224u;
        // 0x12a228: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A22Cu;
        goto label_12a22c;
    }
    ctx->pc = 0x12A224u;
    {
        const bool branch_taken_0x12a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A224u;
        // 0x12a228: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a224) {
            ctx->pc = 0x12A2ECu;
            goto label_12a2ec;
        }
    }
    ctx->pc = 0x12A22Cu;
label_12a22c:
    // 0x12a22c: 0x16600035  bnez        $s3, . + 4 + (0x35 << 2)
label_12a230:
    if (ctx->pc == 0x12A230u) {
        ctx->pc = 0x12A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A22Cu;
        // 0x12a230: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A234u;
        goto label_12a234;
    }
    ctx->pc = 0x12A22Cu;
    {
        const bool branch_taken_0x12a22c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A22Cu;
        // 0x12a230: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a22c) {
            ctx->pc = 0x12A304u;
            goto label_12a304;
        }
    }
    ctx->pc = 0x12A234u;
label_12a234:
    // 0x12a234: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
label_12a238:
    // 0x12a238: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x12a238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
label_12a23c:
    // 0x12a23c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a240:
    // 0x12a240: 0xc12e29c  jal         func_4B8A70
label_12a244:
    if (ctx->pc == 0x12A244u) {
        ctx->pc = 0x12A248u;
        goto label_12a248;
    }
    ctx->pc = 0x12A240u;
    SET_GPR_U32(ctx, 31, 0x12A248u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A240u, 0x12A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A248u;
label_12a248:
    // 0x12a248: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a24c:
    // 0x12a24c: 0x0  nop
    ctx->pc = 0x12a24cu;
    // NOP
label_12a250:
    // 0x12a250: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_12a254:
    if (ctx->pc == 0x12A254u) {
        ctx->pc = 0x12A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A250u;
        // 0x12a254: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A258u;
        goto label_12a258;
    }
    ctx->pc = 0x12A250u;
    {
        const bool branch_taken_0x12a250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A250u;
        // 0x12a254: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a250) {
            ctx->pc = 0x12A304u;
            goto label_12a304;
        }
    }
    ctx->pc = 0x12A258u;
label_12a258:
    // 0x12a258: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a25c:
    // 0x12a25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a260:
    // 0x12a260: 0x0  nop
    ctx->pc = 0x12a260u;
    // NOP
label_12a264:
    // 0x12a264: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12a264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a268:
    // 0x12a268: 0x0  nop
    ctx->pc = 0x12a268u;
    // NOP
label_12a26c:
    // 0x12a26c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a270:
    if (ctx->pc == 0x12A270u) {
        ctx->pc = 0x12A274u;
        goto label_12a274;
    }
    ctx->pc = 0x12A26Cu;
    {
        const bool branch_taken_0x12a26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a26c) {
            ctx->pc = 0x12A280u;
            goto label_12a280;
        }
    }
    ctx->pc = 0x12A274u;
label_12a274:
    // 0x12a274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a278:
    // 0x12a278: 0x10000015  b           . + 4 + (0x15 << 2)
label_12a27c:
    if (ctx->pc == 0x12A27Cu) {
        ctx->pc = 0x12A280u;
        goto label_12a280;
    }
    ctx->pc = 0x12A278u;
    {
        const bool branch_taken_0x12a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a278) {
            ctx->pc = 0x12A2D0u;
            goto label_12a2d0;
        }
    }
    ctx->pc = 0x12A280u;
label_12a280:
    // 0x12a280: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a284:
    // 0x12a284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a288:
    // 0x12a288: 0x0  nop
    ctx->pc = 0x12a288u;
    // NOP
label_12a28c:
    // 0x12a28c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a290:
    // 0x12a290: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a294:
    // 0x12a294: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a298:
    // 0x12a298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a29c:
    // 0x12a29c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_12a2a0:
    if (ctx->pc == 0x12A2A0u) {
        ctx->pc = 0x12A2A4u;
        goto label_12a2a4;
    }
    ctx->pc = 0x12A29Cu;
    {
        const bool branch_taken_0x12a29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a29c) {
            ctx->pc = 0x12A2D0u;
            goto label_12a2d0;
        }
    }
    ctx->pc = 0x12A2A4u;
label_12a2a4:
    // 0x12a2a4: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x12a2a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_12a2a8:
    // 0x12a2a8: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12a2a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12a2ac:
    // 0x12a2ac: 0x0  nop
    ctx->pc = 0x12a2acu;
    // NOP
label_12a2b0:
    // 0x12a2b0: 0x0  nop
    ctx->pc = 0x12a2b0u;
    // NOP
label_12a2b4:
    // 0x12a2b4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a2b4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a2b8:
    // 0x12a2b8: 0x0  nop
    ctx->pc = 0x12a2b8u;
    // NOP
label_12a2bc:
    // 0x12a2bc: 0x0  nop
    ctx->pc = 0x12a2bcu;
    // NOP
label_12a2c0:
    // 0x12a2c0: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a2c0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a2c4:
    // 0x12a2c4: 0xc0cd5a8  jal         func_3356A0
label_12a2c8:
    if (ctx->pc == 0x12A2C8u) {
        ctx->pc = 0x12A2CCu;
        goto label_12a2cc;
    }
    ctx->pc = 0x12A2C4u;
    SET_GPR_U32(ctx, 31, 0x12A2CCu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A2C4u, 0x12A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2CCu;
label_12a2cc:
    // 0x12a2cc: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x12a2ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_12a2d0:
    // 0x12a2d0: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_12a2d4:
    // 0x12a2d4: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x12a2d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_12a2d8:
    // 0x12a2d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a2dc:
    // 0x12a2dc: 0x3c01401b  lui         $at, 0x401B
    ctx->pc = 0x12a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16411 << 16));
label_12a2e0:
    // 0x12a2e0: 0x3421d37a  ori         $at, $at, 0xD37A
    ctx->pc = 0x12a2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54138);
label_12a2e4:
    // 0x12a2e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a2e8:
    // 0x12a2e8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x12a2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_12a2ec:
    // 0x12a2ec: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x12a2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_12a2f0:
    // 0x12a2f0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12a2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_12a2f4:
    // 0x12a2f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a2f8:
    // 0x12a2f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12a2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12a2fc:
    // 0x12a2fc: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x12a2fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12a300:
    // 0x12a300: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a304:
    // 0x12a304: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x12a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a308:
    // 0x12a308: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x12a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a30c:
    // 0x12a30c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12a30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12a310:
    // 0x12a310: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x12a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a314:
    // 0x12a314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a318:
    // 0x12a318: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a31c:
    // 0x12a31c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12a31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12a320:
    // 0x12a320: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x12a320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a324:
    // 0x12a324: 0x0  nop
    ctx->pc = 0x12a324u;
    // NOP
label_12a328:
    // 0x12a328: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a32c:
    if (ctx->pc == 0x12A32Cu) {
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A328u;
        // 0x12a32c: 0x46000d81  sub.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A330u;
        goto label_12a330;
    }
    ctx->pc = 0x12A328u;
    {
        const bool branch_taken_0x12a328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A328u;
        // 0x12a32c: 0x46000d81  sub.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a328) {
            ctx->pc = 0x12A33Cu;
            goto label_12a33c;
        }
    }
    ctx->pc = 0x12A330u;
label_12a330:
    // 0x12a330: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a334:
    // 0x12a334: 0x1000001a  b           . + 4 + (0x1A << 2)
label_12a338:
    if (ctx->pc == 0x12A338u) {
        ctx->pc = 0x12A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A334u;
        // 0x12a338: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A33Cu;
        goto label_12a33c;
    }
    ctx->pc = 0x12A334u;
    {
        const bool branch_taken_0x12a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A334u;
        // 0x12a338: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a334) {
            ctx->pc = 0x12A3A0u;
            goto label_12a3a0;
        }
    }
    ctx->pc = 0x12A33Cu;
label_12a33c:
    // 0x12a33c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a340:
    // 0x12a340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a344:
    // 0x12a344: 0x0  nop
    ctx->pc = 0x12a344u;
    // NOP
label_12a348:
    // 0x12a348: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a34c:
    // 0x12a34c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a350:
    // 0x12a350: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a354:
    // 0x12a354: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a358:
    // 0x12a358: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
label_12a35c:
    if (ctx->pc == 0x12A35Cu) {
        ctx->pc = 0x12A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A358u;
        // 0x12a35c: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A360u;
        goto label_12a360;
    }
    ctx->pc = 0x12A358u;
    {
        const bool branch_taken_0x12a358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a358) {
            ctx->pc = 0x12A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A358u;
            // 0x12a35c: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A3A0u;
            goto label_12a3a0;
        }
    }
    ctx->pc = 0x12A360u;
label_12a360:
    // 0x12a360: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x12a360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_12a364:
    // 0x12a364: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12a364u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12a368:
    // 0x12a368: 0x0  nop
    ctx->pc = 0x12a368u;
    // NOP
label_12a36c:
    // 0x12a36c: 0x0  nop
    ctx->pc = 0x12a36cu;
    // NOP
label_12a370:
    // 0x12a370: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a370u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a374:
    // 0x12a374: 0x0  nop
    ctx->pc = 0x12a374u;
    // NOP
label_12a378:
    // 0x12a378: 0x0  nop
    ctx->pc = 0x12a378u;
    // NOP
label_12a37c:
    // 0x12a37c: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a37cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a380:
    // 0x12a380: 0xc0cd5a8  jal         func_3356A0
label_12a384:
    if (ctx->pc == 0x12A384u) {
        ctx->pc = 0x12A388u;
        goto label_12a388;
    }
    ctx->pc = 0x12A380u;
    SET_GPR_U32(ctx, 31, 0x12A388u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A380u, 0x12A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A388u;
label_12a388:
    // 0x12a388: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12a38c:
    // 0x12a38c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a390:
    // 0x12a390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a394:
    // 0x12a394: 0x0  nop
    ctx->pc = 0x12a394u;
    // NOP
label_12a398:
    // 0x12a398: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x12a398u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a39c:
    // 0x12a39c: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x12a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a3a0:
    // 0x12a3a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a3a4:
    // 0x12a3a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x12a3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_12a3a8:
    // 0x12a3a8: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x12a3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a3ac:
    // 0x12a3ac: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x12a3acu;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
label_12a3b0:
    // 0x12a3b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12a3b4:
    if (ctx->pc == 0x12A3B4u) {
        ctx->pc = 0x12A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B0u;
        // 0x12a3b4: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A3B8u;
        goto label_12a3b8;
    }
    ctx->pc = 0x12A3B0u;
    {
        const bool branch_taken_0x12a3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B0u;
        // 0x12a3b4: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3b0) {
            ctx->pc = 0x12A3C0u;
            goto label_12a3c0;
        }
    }
    ctx->pc = 0x12A3B8u;
label_12a3b8:
    // 0x12a3b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a3b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12a3bc:
    // 0x12a3bc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x12a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_12a3c0:
    // 0x12a3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a3c4:
    // 0x12a3c4: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x12a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12a3c8:
    // 0x12a3c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12a3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12a3cc:
    // 0x12a3cc: 0xc04b5a2  jal         func_12D688
label_12a3d0:
    if (ctx->pc == 0x12A3D0u) {
        ctx->pc = 0x12A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3CCu;
        // 0x12a3d0: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A3D4u;
        goto label_12a3d4;
    }
    ctx->pc = 0x12A3CCu;
    SET_GPR_U32(ctx, 31, 0x12A3D4u);
    ctx->pc = 0x12A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A3CCu;
    // 0x12a3d0: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12A3CCu, 0x12A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3D4u;
label_12a3d4:
    // 0x12a3d4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12a3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12a3d8:
    // 0x12a3d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12a3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12a3dc:
    // 0x12a3dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12a3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12a3e0:
    // 0x12a3e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12a3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12a3e4:
    // 0x12a3e4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x12a3e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12a3e8:
    // 0x12a3e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12a3ec:
    // 0x12a3ec: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x12a3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12a3f0:
    // 0x12a3f0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12a3f4:
    // 0x12a3f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12a3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12a3f8:
    // 0x12a3f8: 0x3e00008  jr          $ra
label_12a3fc:
    if (ctx->pc == 0x12A3FCu) {
        ctx->pc = 0x12A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3F8u;
        // 0x12a3fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A400u;
        goto label_fallthrough_0x12a3f8;
    }
    ctx->pc = 0x12A3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3F8u;
        // 0x12a3fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12a3f8:
    ctx->pc = 0x12A400u;
}
