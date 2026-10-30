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

// Function: sub_0030A150
// Address: 0x30a150 - 0x30a458
void sub_0030A150_0x30a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A150_0x30a150");
#endif

    switch (ctx->pc) {
        case 0x30a150u: goto label_30a150;
        case 0x30a154u: goto label_30a154;
        case 0x30a158u: goto label_30a158;
        case 0x30a15cu: goto label_30a15c;
        case 0x30a160u: goto label_30a160;
        case 0x30a164u: goto label_30a164;
        case 0x30a168u: goto label_30a168;
        case 0x30a16cu: goto label_30a16c;
        case 0x30a170u: goto label_30a170;
        case 0x30a174u: goto label_30a174;
        case 0x30a178u: goto label_30a178;
        case 0x30a17cu: goto label_30a17c;
        case 0x30a180u: goto label_30a180;
        case 0x30a184u: goto label_30a184;
        case 0x30a188u: goto label_30a188;
        case 0x30a18cu: goto label_30a18c;
        case 0x30a190u: goto label_30a190;
        case 0x30a194u: goto label_30a194;
        case 0x30a198u: goto label_30a198;
        case 0x30a19cu: goto label_30a19c;
        case 0x30a1a0u: goto label_30a1a0;
        case 0x30a1a4u: goto label_30a1a4;
        case 0x30a1a8u: goto label_30a1a8;
        case 0x30a1acu: goto label_30a1ac;
        case 0x30a1b0u: goto label_30a1b0;
        case 0x30a1b4u: goto label_30a1b4;
        case 0x30a1b8u: goto label_30a1b8;
        case 0x30a1bcu: goto label_30a1bc;
        case 0x30a1c0u: goto label_30a1c0;
        case 0x30a1c4u: goto label_30a1c4;
        case 0x30a1c8u: goto label_30a1c8;
        case 0x30a1ccu: goto label_30a1cc;
        case 0x30a1d0u: goto label_30a1d0;
        case 0x30a1d4u: goto label_30a1d4;
        case 0x30a1d8u: goto label_30a1d8;
        case 0x30a1dcu: goto label_30a1dc;
        case 0x30a1e0u: goto label_30a1e0;
        case 0x30a1e4u: goto label_30a1e4;
        case 0x30a1e8u: goto label_30a1e8;
        case 0x30a1ecu: goto label_30a1ec;
        case 0x30a1f0u: goto label_30a1f0;
        case 0x30a1f4u: goto label_30a1f4;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a1fcu: goto label_30a1fc;
        case 0x30a200u: goto label_30a200;
        case 0x30a204u: goto label_30a204;
        case 0x30a208u: goto label_30a208;
        case 0x30a20cu: goto label_30a20c;
        case 0x30a210u: goto label_30a210;
        case 0x30a214u: goto label_30a214;
        case 0x30a218u: goto label_30a218;
        case 0x30a21cu: goto label_30a21c;
        case 0x30a220u: goto label_30a220;
        case 0x30a224u: goto label_30a224;
        case 0x30a228u: goto label_30a228;
        case 0x30a22cu: goto label_30a22c;
        case 0x30a230u: goto label_30a230;
        case 0x30a234u: goto label_30a234;
        case 0x30a238u: goto label_30a238;
        case 0x30a23cu: goto label_30a23c;
        case 0x30a240u: goto label_30a240;
        case 0x30a244u: goto label_30a244;
        case 0x30a248u: goto label_30a248;
        case 0x30a24cu: goto label_30a24c;
        case 0x30a250u: goto label_30a250;
        case 0x30a254u: goto label_30a254;
        case 0x30a258u: goto label_30a258;
        case 0x30a25cu: goto label_30a25c;
        case 0x30a260u: goto label_30a260;
        case 0x30a264u: goto label_30a264;
        case 0x30a268u: goto label_30a268;
        case 0x30a26cu: goto label_30a26c;
        case 0x30a270u: goto label_30a270;
        case 0x30a274u: goto label_30a274;
        case 0x30a278u: goto label_30a278;
        case 0x30a27cu: goto label_30a27c;
        case 0x30a280u: goto label_30a280;
        case 0x30a284u: goto label_30a284;
        case 0x30a288u: goto label_30a288;
        case 0x30a28cu: goto label_30a28c;
        case 0x30a290u: goto label_30a290;
        case 0x30a294u: goto label_30a294;
        case 0x30a298u: goto label_30a298;
        case 0x30a29cu: goto label_30a29c;
        case 0x30a2a0u: goto label_30a2a0;
        case 0x30a2a4u: goto label_30a2a4;
        case 0x30a2a8u: goto label_30a2a8;
        case 0x30a2acu: goto label_30a2ac;
        case 0x30a2b0u: goto label_30a2b0;
        case 0x30a2b4u: goto label_30a2b4;
        case 0x30a2b8u: goto label_30a2b8;
        case 0x30a2bcu: goto label_30a2bc;
        case 0x30a2c0u: goto label_30a2c0;
        case 0x30a2c4u: goto label_30a2c4;
        case 0x30a2c8u: goto label_30a2c8;
        case 0x30a2ccu: goto label_30a2cc;
        case 0x30a2d0u: goto label_30a2d0;
        case 0x30a2d4u: goto label_30a2d4;
        case 0x30a2d8u: goto label_30a2d8;
        case 0x30a2dcu: goto label_30a2dc;
        case 0x30a2e0u: goto label_30a2e0;
        case 0x30a2e4u: goto label_30a2e4;
        case 0x30a2e8u: goto label_30a2e8;
        case 0x30a2ecu: goto label_30a2ec;
        case 0x30a2f0u: goto label_30a2f0;
        case 0x30a2f4u: goto label_30a2f4;
        case 0x30a2f8u: goto label_30a2f8;
        case 0x30a2fcu: goto label_30a2fc;
        case 0x30a300u: goto label_30a300;
        case 0x30a304u: goto label_30a304;
        case 0x30a308u: goto label_30a308;
        case 0x30a30cu: goto label_30a30c;
        case 0x30a310u: goto label_30a310;
        case 0x30a314u: goto label_30a314;
        case 0x30a318u: goto label_30a318;
        case 0x30a31cu: goto label_30a31c;
        case 0x30a320u: goto label_30a320;
        case 0x30a324u: goto label_30a324;
        case 0x30a328u: goto label_30a328;
        case 0x30a32cu: goto label_30a32c;
        case 0x30a330u: goto label_30a330;
        case 0x30a334u: goto label_30a334;
        case 0x30a338u: goto label_30a338;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a340u: goto label_30a340;
        case 0x30a344u: goto label_30a344;
        case 0x30a348u: goto label_30a348;
        case 0x30a34cu: goto label_30a34c;
        case 0x30a350u: goto label_30a350;
        case 0x30a354u: goto label_30a354;
        case 0x30a358u: goto label_30a358;
        case 0x30a35cu: goto label_30a35c;
        case 0x30a360u: goto label_30a360;
        case 0x30a364u: goto label_30a364;
        case 0x30a368u: goto label_30a368;
        case 0x30a36cu: goto label_30a36c;
        case 0x30a370u: goto label_30a370;
        case 0x30a374u: goto label_30a374;
        case 0x30a378u: goto label_30a378;
        case 0x30a37cu: goto label_30a37c;
        case 0x30a380u: goto label_30a380;
        case 0x30a384u: goto label_30a384;
        case 0x30a388u: goto label_30a388;
        case 0x30a38cu: goto label_30a38c;
        case 0x30a390u: goto label_30a390;
        case 0x30a394u: goto label_30a394;
        case 0x30a398u: goto label_30a398;
        case 0x30a39cu: goto label_30a39c;
        case 0x30a3a0u: goto label_30a3a0;
        case 0x30a3a4u: goto label_30a3a4;
        case 0x30a3a8u: goto label_30a3a8;
        case 0x30a3acu: goto label_30a3ac;
        case 0x30a3b0u: goto label_30a3b0;
        case 0x30a3b4u: goto label_30a3b4;
        case 0x30a3b8u: goto label_30a3b8;
        case 0x30a3bcu: goto label_30a3bc;
        case 0x30a3c0u: goto label_30a3c0;
        case 0x30a3c4u: goto label_30a3c4;
        case 0x30a3c8u: goto label_30a3c8;
        case 0x30a3ccu: goto label_30a3cc;
        case 0x30a3d0u: goto label_30a3d0;
        case 0x30a3d4u: goto label_30a3d4;
        case 0x30a3d8u: goto label_30a3d8;
        case 0x30a3dcu: goto label_30a3dc;
        case 0x30a3e0u: goto label_30a3e0;
        case 0x30a3e4u: goto label_30a3e4;
        case 0x30a3e8u: goto label_30a3e8;
        case 0x30a3ecu: goto label_30a3ec;
        case 0x30a3f0u: goto label_30a3f0;
        case 0x30a3f4u: goto label_30a3f4;
        case 0x30a3f8u: goto label_30a3f8;
        case 0x30a3fcu: goto label_30a3fc;
        case 0x30a400u: goto label_30a400;
        case 0x30a404u: goto label_30a404;
        case 0x30a408u: goto label_30a408;
        case 0x30a40cu: goto label_30a40c;
        case 0x30a410u: goto label_30a410;
        case 0x30a414u: goto label_30a414;
        case 0x30a418u: goto label_30a418;
        case 0x30a41cu: goto label_30a41c;
        case 0x30a420u: goto label_30a420;
        case 0x30a424u: goto label_30a424;
        case 0x30a428u: goto label_30a428;
        case 0x30a42cu: goto label_30a42c;
        case 0x30a430u: goto label_30a430;
        case 0x30a434u: goto label_30a434;
        case 0x30a438u: goto label_30a438;
        case 0x30a43cu: goto label_30a43c;
        case 0x30a440u: goto label_30a440;
        case 0x30a444u: goto label_30a444;
        case 0x30a448u: goto label_30a448;
        case 0x30a44cu: goto label_30a44c;
        case 0x30a450u: goto label_30a450;
        case 0x30a454u: goto label_30a454;
        default: break;
    }

    ctx->pc = 0x30a150u;

label_30a150:
    // 0x30a150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_30a154:
    // 0x30a154: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30a158:
    // 0x30a158: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_30a15c:
    // 0x30a15c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30a15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a160:
    // 0x30a160: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30a164:
    // 0x30a164: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30a164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a168:
    // 0x30a168: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_30a16c:
    // 0x30a16c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30a16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a170:
    // 0x30a170: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x30a170u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_30a174:
    // 0x30a174: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x30a174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_30a178:
    // 0x30a178: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30a17c:
    // 0x30a17c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30a180:
    // 0x30a180: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30a184:
    // 0x30a184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30a188:
    // 0x30a188: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x30a188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_30a18c:
    // 0x30a18c: 0x3c014284  lui         $at, 0x4284
    ctx->pc = 0x30a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17028 << 16));
label_30a190:
    // 0x30a190: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x30a190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_30a194:
    // 0x30a194: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30a198:
    // 0x30a198: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x30a198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
label_30a19c:
    // 0x30a19c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x30a19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30a1a0:
    // 0x30a1a0: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x30a1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_30a1a4:
    // 0x30a1a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a1a8:
    // 0x30a1a8: 0xc137826  jal         func_4DE098
label_30a1ac:
    if (ctx->pc == 0x30A1ACu) {
        ctx->pc = 0x30A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1A8u;
        // 0x30a1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1B0u;
        goto label_30a1b0;
    }
    ctx->pc = 0x30A1A8u;
    SET_GPR_U32(ctx, 31, 0x30A1B0u);
    ctx->pc = 0x30A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1A8u;
    // 0x30a1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30A1A8u, 0x30A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1B0u;
label_30a1b0:
    // 0x30a1b0: 0xc0e409a  jal         func_390268
label_30a1b4:
    if (ctx->pc == 0x30A1B4u) {
        ctx->pc = 0x30A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1B0u;
        // 0x30a1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1B8u;
        goto label_30a1b8;
    }
    ctx->pc = 0x30A1B0u;
    SET_GPR_U32(ctx, 31, 0x30A1B8u);
    ctx->pc = 0x30A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1B0u;
    // 0x30a1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30A1B0u, 0x30A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1B8u;
label_30a1b8:
    // 0x30a1b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30a1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a1bc:
    // 0x30a1bc: 0x52400095  beql        $s2, $zero, . + 4 + (0x95 << 2)
label_30a1c0:
    if (ctx->pc == 0x30A1C0u) {
        ctx->pc = 0x30A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1BCu;
        // 0x30a1c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1C4u;
        goto label_30a1c4;
    }
    ctx->pc = 0x30A1BCu;
    {
        const bool branch_taken_0x30a1bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1bc) {
            ctx->pc = 0x30A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A1BCu;
            // 0x30a1c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A1C4u;
label_30a1c4:
    // 0x30a1c4: 0x8e5100cc  lw          $s1, 0xCC($s2)
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_30a1c8:
    // 0x30a1c8: 0x2622ff89  addiu       $v0, $s1, -0x77
    ctx->pc = 0x30a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967177));
label_30a1cc:
    // 0x30a1cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30a1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_30a1d0:
    // 0x30a1d0: 0x50400090  beql        $v0, $zero, . + 4 + (0x90 << 2)
label_30a1d4:
    if (ctx->pc == 0x30A1D4u) {
        ctx->pc = 0x30A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1D0u;
        // 0x30a1d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1D8u;
        goto label_30a1d8;
    }
    ctx->pc = 0x30A1D0u;
    {
        const bool branch_taken_0x30a1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1d0) {
            ctx->pc = 0x30A1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A1D0u;
            // 0x30a1d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A1D8u;
label_30a1d8:
    // 0x30a1d8: 0xc088bbc  jal         func_222EF0
label_30a1dc:
    if (ctx->pc == 0x30A1DCu) {
        ctx->pc = 0x30A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1D8u;
        // 0x30a1dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1E0u;
        goto label_30a1e0;
    }
    ctx->pc = 0x30A1D8u;
    SET_GPR_U32(ctx, 31, 0x30A1E0u);
    ctx->pc = 0x30A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1D8u;
    // 0x30a1dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30A1D8u, 0x30A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1E0u;
label_30a1e0:
    // 0x30a1e0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_30a1e4:
    // 0x30a1e4: 0x1622004c  bne         $s1, $v0, . + 4 + (0x4C << 2)
label_30a1e8:
    if (ctx->pc == 0x30A1E8u) {
        ctx->pc = 0x30A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E4u;
        // 0x30a1e8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1ECu;
        goto label_30a1ec;
    }
    ctx->pc = 0x30A1E4u;
    {
        const bool branch_taken_0x30a1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E4u;
        // 0x30a1e8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1e4) {
            ctx->pc = 0x30A318u;
            goto label_30a318;
        }
    }
    ctx->pc = 0x30A1ECu;
label_30a1ec:
    // 0x30a1ec: 0x92630068  lbu         $v1, 0x68($s3)
    ctx->pc = 0x30a1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
label_30a1f0:
    // 0x30a1f0: 0x14740005  bne         $v1, $s4, . + 4 + (0x5 << 2)
label_30a1f4:
    if (ctx->pc == 0x30A1F4u) {
        ctx->pc = 0x30A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1F0u;
        // 0x30a1f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1F8u;
        goto label_30a1f8;
    }
    ctx->pc = 0x30A1F0u;
    {
        const bool branch_taken_0x30a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x30A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1F0u;
        // 0x30a1f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1f0) {
            ctx->pc = 0x30A208u;
            goto label_30a208;
        }
    }
    ctx->pc = 0x30A1F8u;
label_30a1f8:
    // 0x30a1f8: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x30a1f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a1fc:
    // 0x30a1fc: 0x0  nop
    ctx->pc = 0x30a1fcu;
    // NOP
label_30a200:
    // 0x30a200: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_30a204:
    if (ctx->pc == 0x30A204u) {
        ctx->pc = 0x30A208u;
        goto label_30a208;
    }
    ctx->pc = 0x30A200u;
    {
        const bool branch_taken_0x30a200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a200) {
            ctx->pc = 0x30A220u;
            goto label_30a220;
        }
    }
    ctx->pc = 0x30A208u;
label_30a208:
    // 0x30a208: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_30a20c:
    if (ctx->pc == 0x30A20Cu) {
        ctx->pc = 0x30A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A208u;
        // 0x30a20c: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A210u;
        goto label_30a210;
    }
    ctx->pc = 0x30A208u;
    {
        const bool branch_taken_0x30a208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A208u;
        // 0x30a20c: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a208) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A210u;
label_30a210:
    // 0x30a210: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x30a210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a214:
    // 0x30a214: 0x0  nop
    ctx->pc = 0x30a214u;
    // NOP
label_30a218:
    // 0x30a218: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_30a21c:
    if (ctx->pc == 0x30A21Cu) {
        ctx->pc = 0x30A220u;
        goto label_30a220;
    }
    ctx->pc = 0x30A218u;
    {
        const bool branch_taken_0x30a218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a218) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A220u;
label_30a220:
    // 0x30a220: 0xc087502  jal         func_21D408
label_30a224:
    if (ctx->pc == 0x30A224u) {
        ctx->pc = 0x30A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A220u;
        // 0x30a224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A228u;
        goto label_30a228;
    }
    ctx->pc = 0x30A220u;
    SET_GPR_U32(ctx, 31, 0x30A228u);
    ctx->pc = 0x30A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A220u;
    // 0x30a224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30A220u, 0x30A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A228u;
label_30a228:
    // 0x30a228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a22c:
    // 0x30a22c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30a22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30a230:
    // 0x30a230: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30a234:
    if (ctx->pc == 0x30A234u) {
        ctx->pc = 0x30A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A230u;
        // 0x30a234: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A238u;
        goto label_30a238;
    }
    ctx->pc = 0x30A230u;
    {
        const bool branch_taken_0x30a230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A230u;
        // 0x30a234: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a230) {
            ctx->pc = 0x30A244u;
            goto label_30a244;
        }
    }
    ctx->pc = 0x30A238u;
label_30a238:
    // 0x30a238: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a23c:
    // 0x30a23c: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a240:
    if (ctx->pc == 0x30A240u) {
        ctx->pc = 0x30A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A23Cu;
        // 0x30a240: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A244u;
        goto label_30a244;
    }
    ctx->pc = 0x30A23Cu;
    {
        const bool branch_taken_0x30a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A23Cu;
        // 0x30a240: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a23c) {
            ctx->pc = 0x30A248u;
            goto label_30a248;
        }
    }
    ctx->pc = 0x30A244u;
label_30a244:
    // 0x30a244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30a244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a248:
    // 0x30a248: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_30a24c:
    if (ctx->pc == 0x30A24Cu) {
        ctx->pc = 0x30A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A248u;
        // 0x30a24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A250u;
        goto label_30a250;
    }
    ctx->pc = 0x30A248u;
    {
        const bool branch_taken_0x30a248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A248u;
        // 0x30a24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a248) {
            ctx->pc = 0x30A270u;
            goto label_30a270;
        }
    }
    ctx->pc = 0x30A250u;
label_30a250:
    // 0x30a250: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30a254:
    // 0x30a254: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30a254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30a258:
    // 0x30a258: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30a25c:
    // 0x30a25c: 0x40f809  jalr        $v0
label_30a260:
    if (ctx->pc == 0x30A260u) {
        ctx->pc = 0x30A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A25Cu;
        // 0x30a260: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A264u;
        goto label_30a264;
    }
    ctx->pc = 0x30A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30A264u);
        ctx->pc = 0x30A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A25Cu;
        // 0x30a260: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A25Cu, 0x30A264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30A264u;
label_30a264:
    // 0x30a264: 0x38420090  xori        $v0, $v0, 0x90
    ctx->pc = 0x30a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)144);
label_30a268:
    // 0x30a268: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a26c:
    // 0x30a26c: 0x202200a  movz        $a0, $s0, $v0
    ctx->pc = 0x30a26cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_30a270:
    // 0x30a270: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
label_30a274:
    if (ctx->pc == 0x30A274u) {
        ctx->pc = 0x30A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A270u;
        // 0x30a274: 0x92620068  lbu         $v0, 0x68($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A278u;
        goto label_30a278;
    }
    ctx->pc = 0x30A270u;
    {
        const bool branch_taken_0x30a270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a270) {
            ctx->pc = 0x30A274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A270u;
            // 0x30a274: 0x92620068  lbu         $v0, 0x68($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A2F8u;
            goto label_30a2f8;
        }
    }
    ctx->pc = 0x30A278u;
label_30a278:
    // 0x30a278: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x30a278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_30a27c:
    // 0x30a27c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x30a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_30a280:
    // 0x30a280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30a284:
    // 0x30a284: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_30a288:
    if (ctx->pc == 0x30A288u) {
        ctx->pc = 0x30A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A284u;
        // 0x30a288: 0x90820021  lbu         $v0, 0x21($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A28Cu;
        goto label_30a28c;
    }
    ctx->pc = 0x30A284u;
    {
        const bool branch_taken_0x30a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a284) {
            ctx->pc = 0x30A288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A284u;
            // 0x30a288: 0x90820021  lbu         $v0, 0x21($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A2D4u;
            goto label_30a2d4;
        }
    }
    ctx->pc = 0x30A28Cu;
label_30a28c:
    // 0x30a28c: 0xc0b9f06  jal         func_2E7C18
label_30a290:
    if (ctx->pc == 0x30A290u) {
        ctx->pc = 0x30A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A28Cu;
        // 0x30a290: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A294u;
        goto label_30a294;
    }
    ctx->pc = 0x30A28Cu;
    SET_GPR_U32(ctx, 31, 0x30A294u);
    ctx->pc = 0x30A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A28Cu;
    // 0x30a290: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7C18u, 0x30A28Cu, 0x30A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A294u;
label_30a294:
    // 0x30a294: 0x92620068  lbu         $v0, 0x68($s3)
    ctx->pc = 0x30a294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
label_30a298:
    // 0x30a298: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x30a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
label_30a29c:
    // 0x30a29c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a2a0:
    // 0x30a2a0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_30a2a4:
    if (ctx->pc == 0x30A2A4u) {
        ctx->pc = 0x30A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2A0u;
        // 0x30a2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2A8u;
        goto label_30a2a8;
    }
    ctx->pc = 0x30A2A0u;
    {
        const bool branch_taken_0x30a2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2A0u;
        // 0x30a2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2a0) {
            ctx->pc = 0x30A2B0u;
            goto label_30a2b0;
        }
    }
    ctx->pc = 0x30A2A8u;
label_30a2a8:
    // 0x30a2a8: 0x3c014284  lui         $at, 0x4284
    ctx->pc = 0x30a2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17028 << 16));
label_30a2ac:
    // 0x30a2ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a2b0:
    // 0x30a2b0: 0xc088ba0  jal         func_222E80
label_30a2b4:
    if (ctx->pc == 0x30A2B4u) {
        ctx->pc = 0x30A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2B0u;
        // 0x30a2b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2B8u;
        goto label_30a2b8;
    }
    ctx->pc = 0x30A2B0u;
    SET_GPR_U32(ctx, 31, 0x30A2B8u);
    ctx->pc = 0x30A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2B0u;
    // 0x30a2b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30A2B0u, 0x30A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2B8u;
label_30a2b8:
    // 0x30a2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a2bc:
    // 0x30a2bc: 0xc089998  jal         func_226660
label_30a2c0:
    if (ctx->pc == 0x30A2C0u) {
        ctx->pc = 0x30A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2BCu;
        // 0x30a2c0: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2C4u;
        goto label_30a2c4;
    }
    ctx->pc = 0x30A2BCu;
    SET_GPR_U32(ctx, 31, 0x30A2C4u);
    ctx->pc = 0x30A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2BCu;
    // 0x30a2c0: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x30A2BCu, 0x30A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2C4u;
label_30a2c4:
    // 0x30a2c4: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_30a2c8:
    if (ctx->pc == 0x30A2C8u) {
        ctx->pc = 0x30A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2C4u;
        // 0x30a2c8: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2CCu;
        goto label_30a2cc;
    }
    ctx->pc = 0x30A2C4u;
    {
        const bool branch_taken_0x30a2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2C4u;
        // 0x30a2c8: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2c4) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A2CCu;
label_30a2cc:
    // 0x30a2cc: 0x10000055  b           . + 4 + (0x55 << 2)
label_30a2d0:
    if (ctx->pc == 0x30A2D0u) {
        ctx->pc = 0x30A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2CCu;
        // 0x30a2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2D4u;
        goto label_30a2d4;
    }
    ctx->pc = 0x30A2CCu;
    {
        const bool branch_taken_0x30a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2CCu;
        // 0x30a2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2cc) {
            ctx->pc = 0x30A424u;
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A2D4u;
label_30a2d4:
    // 0x30a2d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30a2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30a2d8:
    // 0x30a2d8: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
label_30a2dc:
    if (ctx->pc == 0x30A2DCu) {
        ctx->pc = 0x30A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2D8u;
        // 0x30a2dc: 0x92620068  lbu         $v0, 0x68($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2E0u;
        goto label_30a2e0;
    }
    ctx->pc = 0x30A2D8u;
    {
        const bool branch_taken_0x30a2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30a2d8) {
            ctx->pc = 0x30A2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A2D8u;
            // 0x30a2dc: 0x92620068  lbu         $v0, 0x68($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A2F8u;
            goto label_30a2f8;
        }
    }
    ctx->pc = 0x30A2E0u;
label_30a2e0:
    // 0x30a2e0: 0xc0b9f9a  jal         func_2E7E68
label_30a2e4:
    if (ctx->pc == 0x30A2E4u) {
        ctx->pc = 0x30A2E8u;
        goto label_30a2e8;
    }
    ctx->pc = 0x30A2E0u;
    SET_GPR_U32(ctx, 31, 0x30A2E8u);
    ctx->pc = 0x2E7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7E68u, 0x30A2E0u, 0x30A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2E8u;
label_30a2e8:
    // 0x30a2e8: 0x1454000c  bne         $v0, $s4, . + 4 + (0xC << 2)
label_30a2ec:
    if (ctx->pc == 0x30A2ECu) {
        ctx->pc = 0x30A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2E8u;
        // 0x30a2ec: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2F0u;
        goto label_30a2f0;
    }
    ctx->pc = 0x30A2E8u;
    {
        const bool branch_taken_0x30a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2E8u;
        // 0x30a2ec: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2e8) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A2F0u;
label_30a2f0:
    // 0x30a2f0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_30a2f4:
    if (ctx->pc == 0x30A2F4u) {
        ctx->pc = 0x30A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F0u;
        // 0x30a2f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2F8u;
        goto label_30a2f8;
    }
    ctx->pc = 0x30A2F0u;
    {
        const bool branch_taken_0x30a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F0u;
        // 0x30a2f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f0) {
            ctx->pc = 0x30A424u;
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A2F8u;
label_30a2f8:
    // 0x30a2f8: 0x3c014208  lui         $at, 0x4208
    ctx->pc = 0x30a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16904 << 16));
label_30a2fc:
    // 0x30a2fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a300:
    // 0x30a300: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_30a304:
    if (ctx->pc == 0x30A304u) {
        ctx->pc = 0x30A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A300u;
        // 0x30a304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A308u;
        goto label_30a308;
    }
    ctx->pc = 0x30A300u;
    {
        const bool branch_taken_0x30a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A300u;
        // 0x30a304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a300) {
            ctx->pc = 0x30A310u;
            goto label_30a310;
        }
    }
    ctx->pc = 0x30A308u;
label_30a308:
    // 0x30a308: 0x3c014286  lui         $at, 0x4286
    ctx->pc = 0x30a308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17030 << 16));
label_30a30c:
    // 0x30a30c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30a310:
    // 0x30a310: 0xc088ba0  jal         func_222E80
label_30a314:
    if (ctx->pc == 0x30A314u) {
        ctx->pc = 0x30A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A310u;
        // 0x30a314: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A318u;
        goto label_30a318;
    }
    ctx->pc = 0x30A310u;
    SET_GPR_U32(ctx, 31, 0x30A318u);
    ctx->pc = 0x30A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A310u;
    // 0x30a314: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30A310u, 0x30A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A318u;
label_30a318:
    // 0x30a318: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x30a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_30a31c:
    // 0x30a31c: 0x5622003d  bnel        $s1, $v0, . + 4 + (0x3D << 2)
label_30a320:
    if (ctx->pc == 0x30A320u) {
        ctx->pc = 0x30A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A31Cu;
        // 0x30a320: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A324u;
        goto label_30a324;
    }
    ctx->pc = 0x30A31Cu;
    {
        const bool branch_taken_0x30a31c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a31c) {
            ctx->pc = 0x30A320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A31Cu;
            // 0x30a320: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A324u;
label_30a324:
    // 0x30a324: 0x92630068  lbu         $v1, 0x68($s3)
    ctx->pc = 0x30a324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
label_30a328:
    // 0x30a328: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30a32c:
    // 0x30a32c: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
label_30a330:
    if (ctx->pc == 0x30A330u) {
        ctx->pc = 0x30A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A32Cu;
        // 0x30a330: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A334u;
        goto label_30a334;
    }
    ctx->pc = 0x30A32Cu;
    {
        const bool branch_taken_0x30a32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a32c) {
            ctx->pc = 0x30A330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A32Cu;
            // 0x30a330: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A334u;
label_30a334:
    // 0x30a334: 0x92620069  lbu         $v0, 0x69($s3)
    ctx->pc = 0x30a334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
label_30a338:
    // 0x30a338: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30a33c:
    if (ctx->pc == 0x30A33Cu) {
        ctx->pc = 0x30A340u;
        goto label_30a340;
    }
    ctx->pc = 0x30A338u;
    {
        const bool branch_taken_0x30a338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a338) {
            ctx->pc = 0x30A350u;
            goto label_30a350;
        }
    }
    ctx->pc = 0x30A340u;
label_30a340:
    // 0x30a340: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x30a340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a344:
    // 0x30a344: 0x0  nop
    ctx->pc = 0x30a344u;
    // NOP
label_30a348:
    // 0x30a348: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_30a34c:
    if (ctx->pc == 0x30A34Cu) {
        ctx->pc = 0x30A350u;
        goto label_30a350;
    }
    ctx->pc = 0x30A348u;
    {
        const bool branch_taken_0x30a348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a348) {
            ctx->pc = 0x30A368u;
            goto label_30a368;
        }
    }
    ctx->pc = 0x30A350u;
label_30a350:
    // 0x30a350: 0x54540030  bnel        $v0, $s4, . + 4 + (0x30 << 2)
label_30a354:
    if (ctx->pc == 0x30A354u) {
        ctx->pc = 0x30A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A350u;
        // 0x30a354: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A358u;
        goto label_30a358;
    }
    ctx->pc = 0x30A350u;
    {
        const bool branch_taken_0x30a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30a350) {
            ctx->pc = 0x30A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A350u;
            // 0x30a354: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A358u;
label_30a358:
    // 0x30a358: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x30a358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30a35c:
    // 0x30a35c: 0x0  nop
    ctx->pc = 0x30a35cu;
    // NOP
label_30a360:
    // 0x30a360: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
label_30a364:
    if (ctx->pc == 0x30A364u) {
        ctx->pc = 0x30A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A360u;
        // 0x30a364: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A368u;
        goto label_30a368;
    }
    ctx->pc = 0x30A360u;
    {
        const bool branch_taken_0x30a360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a360) {
            ctx->pc = 0x30A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A360u;
            // 0x30a364: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A368u;
label_30a368:
    // 0x30a368: 0xc087502  jal         func_21D408
label_30a36c:
    if (ctx->pc == 0x30A36Cu) {
        ctx->pc = 0x30A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A368u;
        // 0x30a36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A370u;
        goto label_30a370;
    }
    ctx->pc = 0x30A368u;
    SET_GPR_U32(ctx, 31, 0x30A370u);
    ctx->pc = 0x30A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A368u;
    // 0x30a36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30A368u, 0x30A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A370u;
label_30a370:
    // 0x30a370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a374:
    // 0x30a374: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30a374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30a378:
    // 0x30a378: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30a37c:
    if (ctx->pc == 0x30A37Cu) {
        ctx->pc = 0x30A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A378u;
        // 0x30a37c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A380u;
        goto label_30a380;
    }
    ctx->pc = 0x30A378u;
    {
        const bool branch_taken_0x30a378 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A378u;
        // 0x30a37c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a378) {
            ctx->pc = 0x30A38Cu;
            goto label_30a38c;
        }
    }
    ctx->pc = 0x30A380u;
label_30a380:
    // 0x30a380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a384:
    // 0x30a384: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a388:
    if (ctx->pc == 0x30A388u) {
        ctx->pc = 0x30A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A384u;
        // 0x30a388: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A38Cu;
        goto label_30a38c;
    }
    ctx->pc = 0x30A384u;
    {
        const bool branch_taken_0x30a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A384u;
        // 0x30a388: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a384) {
            ctx->pc = 0x30A390u;
            goto label_30a390;
        }
    }
    ctx->pc = 0x30A38Cu;
label_30a38c:
    // 0x30a38c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30a38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a390:
    // 0x30a390: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_30a394:
    if (ctx->pc == 0x30A394u) {
        ctx->pc = 0x30A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A390u;
        // 0x30a394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A398u;
        goto label_30a398;
    }
    ctx->pc = 0x30A390u;
    {
        const bool branch_taken_0x30a390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A390u;
        // 0x30a394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a390) {
            ctx->pc = 0x30A3B4u;
            goto label_30a3b4;
        }
    }
    ctx->pc = 0x30A398u;
label_30a398:
    // 0x30a398: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30a39c:
    // 0x30a39c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30a39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30a3a0:
    // 0x30a3a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30a3a4:
    // 0x30a3a4: 0x40f809  jalr        $v0
label_30a3a8:
    if (ctx->pc == 0x30A3A8u) {
        ctx->pc = 0x30A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A4u;
        // 0x30a3a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3ACu;
        goto label_30a3ac;
    }
    ctx->pc = 0x30A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30A3ACu);
        ctx->pc = 0x30A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A4u;
        // 0x30a3a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A3A4u, 0x30A3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30A3ACu;
label_30a3ac:
    // 0x30a3ac: 0x38420090  xori        $v0, $v0, 0x90
    ctx->pc = 0x30a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)144);
label_30a3b0:
    // 0x30a3b0: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x30a3b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_30a3b4:
    // 0x30a3b4: 0x52200017  beql        $s1, $zero, . + 4 + (0x17 << 2)
label_30a3b8:
    if (ctx->pc == 0x30A3B8u) {
        ctx->pc = 0x30A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3B4u;
        // 0x30a3b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3BCu;
        goto label_30a3bc;
    }
    ctx->pc = 0x30A3B4u;
    {
        const bool branch_taken_0x30a3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a3b4) {
            ctx->pc = 0x30A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A3B4u;
            // 0x30a3b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A3BCu;
label_30a3bc:
    // 0x30a3bc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x30a3bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_30a3c0:
    // 0x30a3c0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x30a3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_30a3c4:
    // 0x30a3c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30a3c8:
    // 0x30a3c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_30a3cc:
    if (ctx->pc == 0x30A3CCu) {
        ctx->pc = 0x30A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3C8u;
        // 0x30a3cc: 0x92220021  lbu         $v0, 0x21($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3D0u;
        goto label_30a3d0;
    }
    ctx->pc = 0x30A3C8u;
    {
        const bool branch_taken_0x30a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3c8) {
            ctx->pc = 0x30A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A3C8u;
            // 0x30a3cc: 0x92220021  lbu         $v0, 0x21($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A3E0u;
            goto label_30a3e0;
        }
    }
    ctx->pc = 0x30A3D0u;
label_30a3d0:
    // 0x30a3d0: 0xc0b9f06  jal         func_2E7C18
label_30a3d4:
    if (ctx->pc == 0x30A3D4u) {
        ctx->pc = 0x30A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D0u;
        // 0x30a3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3D8u;
        goto label_30a3d8;
    }
    ctx->pc = 0x30A3D0u;
    SET_GPR_U32(ctx, 31, 0x30A3D8u);
    ctx->pc = 0x30A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3D0u;
    // 0x30a3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7C18u, 0x30A3D0u, 0x30A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3D8u;
label_30a3d8:
    // 0x30a3d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_30a3dc:
    if (ctx->pc == 0x30A3DCu) {
        ctx->pc = 0x30A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D8u;
        // 0x30a3dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3E0u;
        goto label_30a3e0;
    }
    ctx->pc = 0x30A3D8u;
    {
        const bool branch_taken_0x30a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D8u;
        // 0x30a3dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3d8) {
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A3E0u;
label_30a3e0:
    // 0x30a3e0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x30a3e0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30a3e4:
    // 0x30a3e4: 0x5614000b  bnel        $s0, $s4, . + 4 + (0xB << 2)
label_30a3e8:
    if (ctx->pc == 0x30A3E8u) {
        ctx->pc = 0x30A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3E4u;
        // 0x30a3e8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3ECu;
        goto label_30a3ec;
    }
    ctx->pc = 0x30A3E4u;
    {
        const bool branch_taken_0x30a3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x30a3e4) {
            ctx->pc = 0x30A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A3E4u;
            // 0x30a3e8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A3ECu;
label_30a3ec:
    // 0x30a3ec: 0xc0b9f9a  jal         func_2E7E68
label_30a3f0:
    if (ctx->pc == 0x30A3F0u) {
        ctx->pc = 0x30A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3ECu;
        // 0x30a3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3F4u;
        goto label_30a3f4;
    }
    ctx->pc = 0x30A3ECu;
    SET_GPR_U32(ctx, 31, 0x30A3F4u);
    ctx->pc = 0x30A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3ECu;
    // 0x30a3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7E68u, 0x30A3ECu, 0x30A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3F4u;
label_30a3f4:
    // 0x30a3f4: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_30a3f8:
    if (ctx->pc == 0x30A3F8u) {
        ctx->pc = 0x30A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3F4u;
        // 0x30a3f8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3FCu;
        goto label_30a3fc;
    }
    ctx->pc = 0x30A3F4u;
    {
        const bool branch_taken_0x30a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x30a3f4) {
            ctx->pc = 0x30A3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A3F4u;
            // 0x30a3f8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A414u;
            goto label_30a414;
        }
    }
    ctx->pc = 0x30A3FCu;
label_30a3fc:
    // 0x30a3fc: 0xc0b9f6a  jal         func_2E7DA8
label_30a400:
    if (ctx->pc == 0x30A400u) {
        ctx->pc = 0x30A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3FCu;
        // 0x30a400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A404u;
        goto label_30a404;
    }
    ctx->pc = 0x30A3FCu;
    SET_GPR_U32(ctx, 31, 0x30A404u);
    ctx->pc = 0x30A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3FCu;
    // 0x30a400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DA8u, 0x30A3FCu, 0x30A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A404u;
label_30a404:
    // 0x30a404: 0x92620069  lbu         $v0, 0x69($s3)
    ctx->pc = 0x30a404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
label_30a408:
    // 0x30a408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30a40c:
    // 0x30a40c: 0xa2620069  sb          $v0, 0x69($s3)
    ctx->pc = 0x30a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 2));
label_30a410:
    // 0x30a410: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30a410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_30a414:
    // 0x30a414: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x30a414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30a418:
    // 0x30a418: 0x5440ff63  bnel        $v0, $zero, . + 4 + (-0x9D << 2)
label_30a41c:
    if (ctx->pc == 0x30A41Cu) {
        ctx->pc = 0x30A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A418u;
        // 0x30a41c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A420u;
        goto label_30a420;
    }
    ctx->pc = 0x30A418u;
    {
        const bool branch_taken_0x30a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a418) {
            ctx->pc = 0x30A41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A418u;
            // 0x30a41c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a1a8;
        }
    }
    ctx->pc = 0x30A420u;
label_30a420:
    // 0x30a420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a424:
    // 0x30a424: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30a424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30a428:
    // 0x30a428: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30a428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30a42c:
    // 0x30a42c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30a42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30a430:
    // 0x30a430: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30a430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30a434:
    // 0x30a434: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30a434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30a438:
    // 0x30a438: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30a438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30a43c:
    // 0x30a43c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30a43cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30a440:
    // 0x30a440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a444:
    // 0x30a444: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x30a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_30a448:
    // 0x30a448: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x30a448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30a44c:
    // 0x30a44c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x30a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30a450:
    // 0x30a450: 0x3e00008  jr          $ra
label_30a454:
    if (ctx->pc == 0x30A454u) {
        ctx->pc = 0x30A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A450u;
        // 0x30a454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A458u;
        goto label_fallthrough_0x30a450;
    }
    ctx->pc = 0x30A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A450u;
        // 0x30a454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30a450:
    ctx->pc = 0x30A458u;
}
