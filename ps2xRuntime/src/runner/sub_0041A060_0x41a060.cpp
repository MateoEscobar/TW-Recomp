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

// Function: sub_0041A060
// Address: 0x41a060 - 0x41a370
void sub_0041A060_0x41a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A060_0x41a060");
#endif

    switch (ctx->pc) {
        case 0x41a060u: goto label_41a060;
        case 0x41a064u: goto label_41a064;
        case 0x41a068u: goto label_41a068;
        case 0x41a06cu: goto label_41a06c;
        case 0x41a070u: goto label_41a070;
        case 0x41a074u: goto label_41a074;
        case 0x41a078u: goto label_41a078;
        case 0x41a07cu: goto label_41a07c;
        case 0x41a080u: goto label_41a080;
        case 0x41a084u: goto label_41a084;
        case 0x41a088u: goto label_41a088;
        case 0x41a08cu: goto label_41a08c;
        case 0x41a090u: goto label_41a090;
        case 0x41a094u: goto label_41a094;
        case 0x41a098u: goto label_41a098;
        case 0x41a09cu: goto label_41a09c;
        case 0x41a0a0u: goto label_41a0a0;
        case 0x41a0a4u: goto label_41a0a4;
        case 0x41a0a8u: goto label_41a0a8;
        case 0x41a0acu: goto label_41a0ac;
        case 0x41a0b0u: goto label_41a0b0;
        case 0x41a0b4u: goto label_41a0b4;
        case 0x41a0b8u: goto label_41a0b8;
        case 0x41a0bcu: goto label_41a0bc;
        case 0x41a0c0u: goto label_41a0c0;
        case 0x41a0c4u: goto label_41a0c4;
        case 0x41a0c8u: goto label_41a0c8;
        case 0x41a0ccu: goto label_41a0cc;
        case 0x41a0d0u: goto label_41a0d0;
        case 0x41a0d4u: goto label_41a0d4;
        case 0x41a0d8u: goto label_41a0d8;
        case 0x41a0dcu: goto label_41a0dc;
        case 0x41a0e0u: goto label_41a0e0;
        case 0x41a0e4u: goto label_41a0e4;
        case 0x41a0e8u: goto label_41a0e8;
        case 0x41a0ecu: goto label_41a0ec;
        case 0x41a0f0u: goto label_41a0f0;
        case 0x41a0f4u: goto label_41a0f4;
        case 0x41a0f8u: goto label_41a0f8;
        case 0x41a0fcu: goto label_41a0fc;
        case 0x41a100u: goto label_41a100;
        case 0x41a104u: goto label_41a104;
        case 0x41a108u: goto label_41a108;
        case 0x41a10cu: goto label_41a10c;
        case 0x41a110u: goto label_41a110;
        case 0x41a114u: goto label_41a114;
        case 0x41a118u: goto label_41a118;
        case 0x41a11cu: goto label_41a11c;
        case 0x41a120u: goto label_41a120;
        case 0x41a124u: goto label_41a124;
        case 0x41a128u: goto label_41a128;
        case 0x41a12cu: goto label_41a12c;
        case 0x41a130u: goto label_41a130;
        case 0x41a134u: goto label_41a134;
        case 0x41a138u: goto label_41a138;
        case 0x41a13cu: goto label_41a13c;
        case 0x41a140u: goto label_41a140;
        case 0x41a144u: goto label_41a144;
        case 0x41a148u: goto label_41a148;
        case 0x41a14cu: goto label_41a14c;
        case 0x41a150u: goto label_41a150;
        case 0x41a154u: goto label_41a154;
        case 0x41a158u: goto label_41a158;
        case 0x41a15cu: goto label_41a15c;
        case 0x41a160u: goto label_41a160;
        case 0x41a164u: goto label_41a164;
        case 0x41a168u: goto label_41a168;
        case 0x41a16cu: goto label_41a16c;
        case 0x41a170u: goto label_41a170;
        case 0x41a174u: goto label_41a174;
        case 0x41a178u: goto label_41a178;
        case 0x41a17cu: goto label_41a17c;
        case 0x41a180u: goto label_41a180;
        case 0x41a184u: goto label_41a184;
        case 0x41a188u: goto label_41a188;
        case 0x41a18cu: goto label_41a18c;
        case 0x41a190u: goto label_41a190;
        case 0x41a194u: goto label_41a194;
        case 0x41a198u: goto label_41a198;
        case 0x41a19cu: goto label_41a19c;
        case 0x41a1a0u: goto label_41a1a0;
        case 0x41a1a4u: goto label_41a1a4;
        case 0x41a1a8u: goto label_41a1a8;
        case 0x41a1acu: goto label_41a1ac;
        case 0x41a1b0u: goto label_41a1b0;
        case 0x41a1b4u: goto label_41a1b4;
        case 0x41a1b8u: goto label_41a1b8;
        case 0x41a1bcu: goto label_41a1bc;
        case 0x41a1c0u: goto label_41a1c0;
        case 0x41a1c4u: goto label_41a1c4;
        case 0x41a1c8u: goto label_41a1c8;
        case 0x41a1ccu: goto label_41a1cc;
        case 0x41a1d0u: goto label_41a1d0;
        case 0x41a1d4u: goto label_41a1d4;
        case 0x41a1d8u: goto label_41a1d8;
        case 0x41a1dcu: goto label_41a1dc;
        case 0x41a1e0u: goto label_41a1e0;
        case 0x41a1e4u: goto label_41a1e4;
        case 0x41a1e8u: goto label_41a1e8;
        case 0x41a1ecu: goto label_41a1ec;
        case 0x41a1f0u: goto label_41a1f0;
        case 0x41a1f4u: goto label_41a1f4;
        case 0x41a1f8u: goto label_41a1f8;
        case 0x41a1fcu: goto label_41a1fc;
        case 0x41a200u: goto label_41a200;
        case 0x41a204u: goto label_41a204;
        case 0x41a208u: goto label_41a208;
        case 0x41a20cu: goto label_41a20c;
        case 0x41a210u: goto label_41a210;
        case 0x41a214u: goto label_41a214;
        case 0x41a218u: goto label_41a218;
        case 0x41a21cu: goto label_41a21c;
        case 0x41a220u: goto label_41a220;
        case 0x41a224u: goto label_41a224;
        case 0x41a228u: goto label_41a228;
        case 0x41a22cu: goto label_41a22c;
        case 0x41a230u: goto label_41a230;
        case 0x41a234u: goto label_41a234;
        case 0x41a238u: goto label_41a238;
        case 0x41a23cu: goto label_41a23c;
        case 0x41a240u: goto label_41a240;
        case 0x41a244u: goto label_41a244;
        case 0x41a248u: goto label_41a248;
        case 0x41a24cu: goto label_41a24c;
        case 0x41a250u: goto label_41a250;
        case 0x41a254u: goto label_41a254;
        case 0x41a258u: goto label_41a258;
        case 0x41a25cu: goto label_41a25c;
        case 0x41a260u: goto label_41a260;
        case 0x41a264u: goto label_41a264;
        case 0x41a268u: goto label_41a268;
        case 0x41a26cu: goto label_41a26c;
        case 0x41a270u: goto label_41a270;
        case 0x41a274u: goto label_41a274;
        case 0x41a278u: goto label_41a278;
        case 0x41a27cu: goto label_41a27c;
        case 0x41a280u: goto label_41a280;
        case 0x41a284u: goto label_41a284;
        case 0x41a288u: goto label_41a288;
        case 0x41a28cu: goto label_41a28c;
        case 0x41a290u: goto label_41a290;
        case 0x41a294u: goto label_41a294;
        case 0x41a298u: goto label_41a298;
        case 0x41a29cu: goto label_41a29c;
        case 0x41a2a0u: goto label_41a2a0;
        case 0x41a2a4u: goto label_41a2a4;
        case 0x41a2a8u: goto label_41a2a8;
        case 0x41a2acu: goto label_41a2ac;
        case 0x41a2b0u: goto label_41a2b0;
        case 0x41a2b4u: goto label_41a2b4;
        case 0x41a2b8u: goto label_41a2b8;
        case 0x41a2bcu: goto label_41a2bc;
        case 0x41a2c0u: goto label_41a2c0;
        case 0x41a2c4u: goto label_41a2c4;
        case 0x41a2c8u: goto label_41a2c8;
        case 0x41a2ccu: goto label_41a2cc;
        case 0x41a2d0u: goto label_41a2d0;
        case 0x41a2d4u: goto label_41a2d4;
        case 0x41a2d8u: goto label_41a2d8;
        case 0x41a2dcu: goto label_41a2dc;
        case 0x41a2e0u: goto label_41a2e0;
        case 0x41a2e4u: goto label_41a2e4;
        case 0x41a2e8u: goto label_41a2e8;
        case 0x41a2ecu: goto label_41a2ec;
        case 0x41a2f0u: goto label_41a2f0;
        case 0x41a2f4u: goto label_41a2f4;
        case 0x41a2f8u: goto label_41a2f8;
        case 0x41a2fcu: goto label_41a2fc;
        case 0x41a300u: goto label_41a300;
        case 0x41a304u: goto label_41a304;
        case 0x41a308u: goto label_41a308;
        case 0x41a30cu: goto label_41a30c;
        case 0x41a310u: goto label_41a310;
        case 0x41a314u: goto label_41a314;
        case 0x41a318u: goto label_41a318;
        case 0x41a31cu: goto label_41a31c;
        case 0x41a320u: goto label_41a320;
        case 0x41a324u: goto label_41a324;
        case 0x41a328u: goto label_41a328;
        case 0x41a32cu: goto label_41a32c;
        case 0x41a330u: goto label_41a330;
        case 0x41a334u: goto label_41a334;
        case 0x41a338u: goto label_41a338;
        case 0x41a33cu: goto label_41a33c;
        case 0x41a340u: goto label_41a340;
        case 0x41a344u: goto label_41a344;
        case 0x41a348u: goto label_41a348;
        case 0x41a34cu: goto label_41a34c;
        case 0x41a350u: goto label_41a350;
        case 0x41a354u: goto label_41a354;
        case 0x41a358u: goto label_41a358;
        case 0x41a35cu: goto label_41a35c;
        case 0x41a360u: goto label_41a360;
        case 0x41a364u: goto label_41a364;
        case 0x41a368u: goto label_41a368;
        case 0x41a36cu: goto label_41a36c;
        default: break;
    }

    ctx->pc = 0x41a060u;

label_41a060:
    // 0x41a060: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x41a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_41a064:
    // 0x41a064: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x41a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_41a068:
    // 0x41a068: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x41a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_41a06c:
    // 0x41a06c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x41a06cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a070:
    // 0x41a070: 0x26f10228  addiu       $s1, $s7, 0x228
    ctx->pc = 0x41a070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 552));
label_41a074:
    // 0x41a074: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x41a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_41a078:
    // 0x41a078: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x41a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_41a07c:
    // 0x41a07c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x41a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_41a080:
    // 0x41a080: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x41a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_41a084:
    // 0x41a084: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_41a088:
    // 0x41a088: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x41a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_41a08c:
    // 0x41a08c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x41a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_41a090:
    // 0x41a090: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41a094:
    // 0x41a094: 0xc0e409a  jal         func_390268
label_41a098:
    if (ctx->pc == 0x41A098u) {
        ctx->pc = 0x41A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A094u;
        // 0x41a098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A09Cu;
        goto label_41a09c;
    }
    ctx->pc = 0x41A094u;
    SET_GPR_U32(ctx, 31, 0x41A09Cu);
    ctx->pc = 0x41A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A094u;
    // 0x41a098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A094u, 0x41A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A09Cu;
label_41a09c:
    // 0x41a09c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a0a0:
    // 0x41a0a0: 0x520000a7  beql        $s0, $zero, . + 4 + (0xA7 << 2)
label_41a0a4:
    if (ctx->pc == 0x41A0A4u) {
        ctx->pc = 0x41A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0A0u;
        // 0x41a0a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0A8u;
        goto label_41a0a8;
    }
    ctx->pc = 0x41A0A0u;
    {
        const bool branch_taken_0x41a0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a0a0) {
            ctx->pc = 0x41A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A0A0u;
            // 0x41a0a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A340u;
            goto label_41a340;
        }
    }
    ctx->pc = 0x41A0A8u;
label_41a0a8:
    // 0x41a0a8: 0x8ee203f8  lw          $v0, 0x3F8($s7)
    ctx->pc = 0x41a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1016)));
label_41a0ac:
    // 0x41a0ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_41a0b0:
    if (ctx->pc == 0x41A0B0u) {
        ctx->pc = 0x41A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0ACu;
        // 0x41a0b0: 0x8ee3040c  lw          $v1, 0x40C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0B4u;
        goto label_41a0b4;
    }
    ctx->pc = 0x41A0ACu;
    {
        const bool branch_taken_0x41a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a0ac) {
            ctx->pc = 0x41A0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A0ACu;
            // 0x41a0b0: 0x8ee3040c  lw          $v1, 0x40C($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A0D0u;
            goto label_41a0d0;
        }
    }
    ctx->pc = 0x41A0B4u;
label_41a0b4:
    // 0x41a0b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41a0b8:
    // 0x41a0b8: 0xc044122  jal         func_110488
label_41a0bc:
    if (ctx->pc == 0x41A0BCu) {
        ctx->pc = 0x41A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0B8u;
        // 0x41a0bc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0C0u;
        goto label_41a0c0;
    }
    ctx->pc = 0x41A0B8u;
    SET_GPR_U32(ctx, 31, 0x41A0C0u);
    ctx->pc = 0x41A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A0B8u;
    // 0x41a0bc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110488u, 0x41A0B8u, 0x41A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A0C0u;
label_41a0c0:
    // 0x41a0c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x41a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41a0c4:
    // 0x41a0c4: 0xc1067f2  jal         func_419FC8
label_41a0c8:
    if (ctx->pc == 0x41A0C8u) {
        ctx->pc = 0x41A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0C4u;
        // 0x41a0c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0CCu;
        goto label_41a0cc;
    }
    ctx->pc = 0x41A0C4u;
    SET_GPR_U32(ctx, 31, 0x41A0CCu);
    ctx->pc = 0x41A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A0C4u;
    // 0x41a0c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FC8u, 0x41A0C4u, 0x41A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A0CCu;
label_41a0cc:
    // 0x41a0cc: 0x8ee3040c  lw          $v1, 0x40C($s7)
    ctx->pc = 0x41a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1036)));
label_41a0d0:
    // 0x41a0d0: 0x8ee203f4  lw          $v0, 0x3F4($s7)
    ctx->pc = 0x41a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1012)));
label_41a0d4:
    // 0x41a0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41a0d8:
    if (ctx->pc == 0x41A0D8u) {
        ctx->pc = 0x41A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0D4u;
        // 0x41a0d8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0DCu;
        goto label_41a0dc;
    }
    ctx->pc = 0x41A0D4u;
    {
        const bool branch_taken_0x41a0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0D4u;
        // 0x41a0d8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a0d4) {
            ctx->pc = 0x41A0E8u;
            goto label_41a0e8;
        }
    }
    ctx->pc = 0x41A0DCu;
label_41a0dc:
    // 0x41a0dc: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x41a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_41a0e0:
    // 0x41a0e0: 0x54400097  bnel        $v0, $zero, . + 4 + (0x97 << 2)
label_41a0e4:
    if (ctx->pc == 0x41A0E4u) {
        ctx->pc = 0x41A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0E0u;
        // 0x41a0e4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0E8u;
        goto label_41a0e8;
    }
    ctx->pc = 0x41A0E0u;
    {
        const bool branch_taken_0x41a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a0e0) {
            ctx->pc = 0x41A0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A0E0u;
            // 0x41a0e4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A340u;
            goto label_41a340;
        }
    }
    ctx->pc = 0x41A0E8u;
label_41a0e8:
    // 0x41a0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a0ec:
    // 0x41a0ec: 0xc087502  jal         func_21D408
label_41a0f0:
    if (ctx->pc == 0x41A0F0u) {
        ctx->pc = 0x41A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A0ECu;
        // 0x41a0f0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A0F4u;
        goto label_41a0f4;
    }
    ctx->pc = 0x41A0ECu;
    SET_GPR_U32(ctx, 31, 0x41A0F4u);
    ctx->pc = 0x41A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A0ECu;
    // 0x41a0f0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A0ECu, 0x41A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A0F4u;
label_41a0f4:
    // 0x41a0f4: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x41a0f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_41a0f8:
    // 0x41a0f8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x41a0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_41a0fc:
    // 0x41a0fc: 0x24c6bf78  addiu       $a2, $a2, -0x4088
    ctx->pc = 0x41a0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950776));
label_41a100:
    // 0x41a100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41a100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41a104:
    // 0x41a104: 0xc05b202  jal         func_16C808
label_41a108:
    if (ctx->pc == 0x41A108u) {
        ctx->pc = 0x41A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A104u;
        // 0x41a108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A10Cu;
        goto label_41a10c;
    }
    ctx->pc = 0x41A104u;
    SET_GPR_U32(ctx, 31, 0x41A10Cu);
    ctx->pc = 0x41A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A104u;
    // 0x41a108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C808u, 0x41A104u, 0x41A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A10Cu;
label_41a10c:
    // 0x41a10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a110:
    // 0x41a110: 0x1200007d  beqz        $s0, . + 4 + (0x7D << 2)
label_41a114:
    if (ctx->pc == 0x41A114u) {
        ctx->pc = 0x41A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A110u;
        // 0x41a114: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A118u;
        goto label_41a118;
    }
    ctx->pc = 0x41A110u;
    {
        const bool branch_taken_0x41a110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A110u;
        // 0x41a114: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a110) {
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A118u;
label_41a118:
    // 0x41a118: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x41a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41a11c:
    // 0x41a11c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x41a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41a120:
    // 0x41a120: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x41a120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_41a124:
    // 0x41a124: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x41a124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41a128:
    // 0x41a128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41a128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41a12c:
    // 0x41a12c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x41a12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_41a130:
    // 0x41a130: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x41a130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_41a134:
    // 0x41a134: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x41a134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41a138:
    // 0x41a138: 0x0  nop
    ctx->pc = 0x41a138u;
    // NOP
label_41a13c:
    // 0x41a13c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_41a140:
    if (ctx->pc == 0x41A140u) {
        ctx->pc = 0x41A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A13Cu;
        // 0x41a140: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A144u;
        goto label_41a144;
    }
    ctx->pc = 0x41A13Cu;
    {
        const bool branch_taken_0x41a13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A13Cu;
        // 0x41a140: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a13c) {
            ctx->pc = 0x41A240u;
            goto label_41a240;
        }
    }
    ctx->pc = 0x41A144u;
label_41a144:
    // 0x41a144: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x41a144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_41a148:
    // 0x41a148: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x41a148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_41a14c:
    // 0x41a14c: 0xc136d6c  jal         func_4DB5B0
label_41a150:
    if (ctx->pc == 0x41A150u) {
        ctx->pc = 0x41A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A14Cu;
        // 0x41a150: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A154u;
        goto label_41a154;
    }
    ctx->pc = 0x41A14Cu;
    SET_GPR_U32(ctx, 31, 0x41A154u);
    ctx->pc = 0x41A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A14Cu;
    // 0x41a150: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x41A14Cu, 0x41A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A154u;
label_41a154:
    // 0x41a154: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x41a154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_41a158:
    // 0x41a158: 0xc0e409a  jal         func_390268
label_41a15c:
    if (ctx->pc == 0x41A15Cu) {
        ctx->pc = 0x41A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A158u;
        // 0x41a15c: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A160u;
        goto label_41a160;
    }
    ctx->pc = 0x41A158u;
    SET_GPR_U32(ctx, 31, 0x41A160u);
    ctx->pc = 0x41A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A158u;
    // 0x41a15c: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A158u, 0x41A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A160u;
label_41a160:
    // 0x41a160: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x41a160u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a164:
    // 0x41a164: 0x13c00068  beqz        $fp, . + 4 + (0x68 << 2)
label_41a168:
    if (ctx->pc == 0x41A168u) {
        ctx->pc = 0x41A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A164u;
        // 0x41a168: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A16Cu;
        goto label_41a16c;
    }
    ctx->pc = 0x41A164u;
    {
        const bool branch_taken_0x41a164 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A164u;
        // 0x41a168: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a164) {
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A16Cu;
label_41a16c:
    // 0x41a16c: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x41a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_41a170:
    // 0x41a170: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_41a174:
    if (ctx->pc == 0x41A174u) {
        ctx->pc = 0x41A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A170u;
        // 0x41a174: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A178u;
        goto label_41a178;
    }
    ctx->pc = 0x41A170u;
    {
        const bool branch_taken_0x41a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A170u;
        // 0x41a174: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a170) {
            ctx->pc = 0x41A210u;
            goto label_41a210;
        }
    }
    ctx->pc = 0x41A178u;
label_41a178:
    // 0x41a178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a17c:
    // 0x41a17c: 0xc059856  jal         func_166158
label_41a180:
    if (ctx->pc == 0x41A180u) {
        ctx->pc = 0x41A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A17Cu;
        // 0x41a180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A184u;
        goto label_41a184;
    }
    ctx->pc = 0x41A17Cu;
    SET_GPR_U32(ctx, 31, 0x41A184u);
    ctx->pc = 0x41A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A17Cu;
    // 0x41a180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x41A17Cu, 0x41A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A184u;
label_41a184:
    // 0x41a184: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41a184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41a188:
    // 0x41a188: 0x8c6448a8  lw          $a0, 0x48A8($v1)
    ctx->pc = 0x41a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18600)));
label_41a18c:
    // 0x41a18c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x41a18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_41a190:
    // 0x41a190: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_41a194:
    if (ctx->pc == 0x41A194u) {
        ctx->pc = 0x41A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A190u;
        // 0x41a194: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A198u;
        goto label_41a198;
    }
    ctx->pc = 0x41A190u;
    {
        const bool branch_taken_0x41a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A190u;
        // 0x41a194: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a190) {
            ctx->pc = 0x41A210u;
            goto label_41a210;
        }
    }
    ctx->pc = 0x41A198u;
label_41a198:
    // 0x41a198: 0x86e20224  lh          $v0, 0x224($s7)
    ctx->pc = 0x41a198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 548)));
label_41a19c:
    // 0x41a19c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_41a1a0:
    if (ctx->pc == 0x41A1A0u) {
        ctx->pc = 0x41A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A19Cu;
        // 0x41a1a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1A4u;
        goto label_41a1a4;
    }
    ctx->pc = 0x41A19Cu;
    {
        const bool branch_taken_0x41a19c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A19Cu;
        // 0x41a1a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a19c) {
            ctx->pc = 0x41A210u;
            goto label_41a210;
        }
    }
    ctx->pc = 0x41A1A4u;
label_41a1a4:
    // 0x41a1a4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x41a1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a1a8:
    // 0x41a1a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41a1ac:
    // 0x41a1ac: 0xc0e409a  jal         func_390268
label_41a1b0:
    if (ctx->pc == 0x41A1B0u) {
        ctx->pc = 0x41A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1ACu;
        // 0x41a1b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1B4u;
        goto label_41a1b4;
    }
    ctx->pc = 0x41A1ACu;
    SET_GPR_U32(ctx, 31, 0x41A1B4u);
    ctx->pc = 0x41A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A1ACu;
    // 0x41a1b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A1ACu, 0x41A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1B4u;
label_41a1b4:
    // 0x41a1b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a1b8:
    // 0x41a1b8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_41a1bc:
    if (ctx->pc == 0x41A1BCu) {
        ctx->pc = 0x41A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1B8u;
        // 0x41a1bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1C0u;
        goto label_41a1c0;
    }
    ctx->pc = 0x41A1B8u;
    {
        const bool branch_taken_0x41a1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1B8u;
        // 0x41a1bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a1b8) {
            ctx->pc = 0x41A1F0u;
            goto label_41a1f0;
        }
    }
    ctx->pc = 0x41A1C0u;
label_41a1c0:
    // 0x41a1c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x41a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_41a1c4:
    // 0x41a1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41a1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a1c8:
    // 0x41a1c8: 0xc0888a2  jal         func_222288
label_41a1cc:
    if (ctx->pc == 0x41A1CCu) {
        ctx->pc = 0x41A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1C8u;
        // 0x41a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1D0u;
        goto label_41a1d0;
    }
    ctx->pc = 0x41A1C8u;
    SET_GPR_U32(ctx, 31, 0x41A1D0u);
    ctx->pc = 0x41A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A1C8u;
    // 0x41a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x41A1C8u, 0x41A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1D0u;
label_41a1d0:
    // 0x41a1d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41a1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a1d4:
    // 0x41a1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a1d8:
    // 0x41a1d8: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_41a1dc:
    if (ctx->pc == 0x41A1DCu) {
        ctx->pc = 0x41A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1D8u;
        // 0x41a1dc: 0x86e20224  lh          $v0, 0x224($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1E0u;
        goto label_41a1e0;
    }
    ctx->pc = 0x41A1D8u;
    {
        const bool branch_taken_0x41a1d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x41a1d8) {
            ctx->pc = 0x41A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A1D8u;
            // 0x41a1dc: 0x86e20224  lh          $v0, 0x224($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A1F4u;
            goto label_41a1f4;
        }
    }
    ctx->pc = 0x41A1E0u;
label_41a1e0:
    // 0x41a1e0: 0xc087502  jal         func_21D408
label_41a1e4:
    if (ctx->pc == 0x41A1E4u) {
        ctx->pc = 0x41A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A1E0u;
        // 0x41a1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A1E8u;
        goto label_41a1e8;
    }
    ctx->pc = 0x41A1E0u;
    SET_GPR_U32(ctx, 31, 0x41A1E8u);
    ctx->pc = 0x41A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A1E0u;
    // 0x41a1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A1E0u, 0x41A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A1E8u;
label_41a1e8:
    // 0x41a1e8: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x41a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_41a1ec:
    // 0x41a1ec: 0x223980a  movz        $s3, $s1, $v1
    ctx->pc = 0x41a1ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_41a1f0:
    // 0x41a1f0: 0x86e20224  lh          $v0, 0x224($s7)
    ctx->pc = 0x41a1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 548)));
label_41a1f4:
    // 0x41a1f4: 0x293a025  or          $s4, $s4, $s3
    ctx->pc = 0x41a1f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
label_41a1f8:
    // 0x41a1f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x41a1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_41a1fc:
    // 0x41a1fc: 0x14a02b  sltu        $s4, $zero, $s4
    ctx->pc = 0x41a1fcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_41a200:
    // 0x41a200: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x41a200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a204:
    // 0x41a204: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_41a208:
    if (ctx->pc == 0x41A208u) {
        ctx->pc = 0x41A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A204u;
        // 0x41a208: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A20Cu;
        goto label_41a20c;
    }
    ctx->pc = 0x41A204u;
    {
        const bool branch_taken_0x41a204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A204u;
        // 0x41a208: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a204) {
            ctx->pc = 0x41A1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a1a8;
        }
    }
    ctx->pc = 0x41A20Cu;
label_41a20c:
    // 0x41a20c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x41a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_41a210:
    // 0x41a210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a214:
    // 0x41a214: 0x5062003c  beql        $v1, $v0, . + 4 + (0x3C << 2)
label_41a218:
    if (ctx->pc == 0x41A218u) {
        ctx->pc = 0x41A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A214u;
        // 0x41a218: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A21Cu;
        goto label_41a21c;
    }
    ctx->pc = 0x41A214u;
    {
        const bool branch_taken_0x41a214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x41a214) {
            ctx->pc = 0x41A218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A214u;
            // 0x41a218: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A21Cu;
label_41a21c:
    // 0x41a21c: 0x1682003b  bne         $s4, $v0, . + 4 + (0x3B << 2)
label_41a220:
    if (ctx->pc == 0x41A220u) {
        ctx->pc = 0x41A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A21Cu;
        // 0x41a220: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A224u;
        goto label_41a224;
    }
    ctx->pc = 0x41A21Cu;
    {
        const bool branch_taken_0x41a21c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x41A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A21Cu;
        // 0x41a220: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a21c) {
            ctx->pc = 0x41A30Cu;
            goto label_41a30c;
        }
    }
    ctx->pc = 0x41A224u;
label_41a224:
    // 0x41a224: 0x10000038  b           . + 4 + (0x38 << 2)
label_41a228:
    if (ctx->pc == 0x41A228u) {
        ctx->pc = 0x41A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A224u;
        // 0x41a228: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A22Cu;
        goto label_41a22c;
    }
    ctx->pc = 0x41A224u;
    {
        const bool branch_taken_0x41a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A224u;
        // 0x41a228: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a224) {
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A22Cu;
label_41a22c:
    // 0x41a22c: 0x10000036  b           . + 4 + (0x36 << 2)
label_41a230:
    if (ctx->pc == 0x41A230u) {
        ctx->pc = 0x41A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A22Cu;
        // 0x41a230: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A234u;
        goto label_41a234;
    }
    ctx->pc = 0x41A22Cu;
    {
        const bool branch_taken_0x41a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A22Cu;
        // 0x41a230: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a22c) {
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A234u;
label_41a234:
    // 0x41a234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a238:
    // 0x41a238: 0x10000033  b           . + 4 + (0x33 << 2)
label_41a23c:
    if (ctx->pc == 0x41A23Cu) {
        ctx->pc = 0x41A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A238u;
        // 0x41a23c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A240u;
        goto label_41a240;
    }
    ctx->pc = 0x41A238u;
    {
        const bool branch_taken_0x41a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A238u;
        // 0x41a23c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a238) {
            ctx->pc = 0x41A308u;
            goto label_41a308;
        }
    }
    ctx->pc = 0x41A240u;
label_41a240:
    // 0x41a240: 0x26120048  addiu       $s2, $s0, 0x48
    ctx->pc = 0x41a240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_41a244:
    // 0x41a244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41a244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a248:
    // 0x41a248: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x41a248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_41a24c:
    // 0x41a24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41a250:
    // 0x41a250: 0xc137826  jal         func_4DE098
label_41a254:
    if (ctx->pc == 0x41A254u) {
        ctx->pc = 0x41A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A250u;
        // 0x41a254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A258u;
        goto label_41a258;
    }
    ctx->pc = 0x41A250u;
    SET_GPR_U32(ctx, 31, 0x41A258u);
    ctx->pc = 0x41A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A250u;
    // 0x41a254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x41A250u, 0x41A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A258u;
label_41a258:
    // 0x41a258: 0xc0e409a  jal         func_390268
label_41a25c:
    if (ctx->pc == 0x41A25Cu) {
        ctx->pc = 0x41A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A258u;
        // 0x41a25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A260u;
        goto label_41a260;
    }
    ctx->pc = 0x41A258u;
    SET_GPR_U32(ctx, 31, 0x41A260u);
    ctx->pc = 0x41A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A258u;
    // 0x41a25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A258u, 0x41A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A260u;
label_41a260:
    // 0x41a260: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_41a264:
    if (ctx->pc == 0x41A264u) {
        ctx->pc = 0x41A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A260u;
        // 0x41a264: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A268u;
        goto label_41a268;
    }
    ctx->pc = 0x41A260u;
    {
        const bool branch_taken_0x41a260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a260) {
            ctx->pc = 0x41A264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A260u;
            // 0x41a264: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A2FCu;
            goto label_41a2fc;
        }
    }
    ctx->pc = 0x41A268u;
label_41a268:
    // 0x41a268: 0xc087502  jal         func_21D408
label_41a26c:
    if (ctx->pc == 0x41A26Cu) {
        ctx->pc = 0x41A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A268u;
        // 0x41a26c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A270u;
        goto label_41a270;
    }
    ctx->pc = 0x41A268u;
    SET_GPR_U32(ctx, 31, 0x41A270u);
    ctx->pc = 0x41A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A268u;
    // 0x41a26c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A268u, 0x41A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A270u;
label_41a270:
    // 0x41a270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a274:
    // 0x41a274: 0x86c30030  lh          $v1, 0x30($s6)
    ctx->pc = 0x41a274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
label_41a278:
    // 0x41a278: 0x80820264  lb          $v0, 0x264($a0)
    ctx->pc = 0x41a278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 612)));
label_41a27c:
    // 0x41a27c: 0x5043ffeb  beql        $v0, $v1, . + 4 + (-0x15 << 2)
label_41a280:
    if (ctx->pc == 0x41A280u) {
        ctx->pc = 0x41A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A27Cu;
        // 0x41a280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A284u;
        goto label_41a284;
    }
    ctx->pc = 0x41A27Cu;
    {
        const bool branch_taken_0x41a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x41a27c) {
            ctx->pc = 0x41A280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A27Cu;
            // 0x41a280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A22Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a22c;
        }
    }
    ctx->pc = 0x41A284u;
label_41a284:
    // 0x41a284: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x41a284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_41a288:
    // 0x41a288: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_41a28c:
    if (ctx->pc == 0x41A28Cu) {
        ctx->pc = 0x41A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A288u;
        // 0x41a28c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A290u;
        goto label_41a290;
    }
    ctx->pc = 0x41A288u;
    {
        const bool branch_taken_0x41a288 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x41A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A288u;
        // 0x41a28c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a288) {
            ctx->pc = 0x41A29Cu;
            goto label_41a29c;
        }
    }
    ctx->pc = 0x41A290u;
label_41a290:
    // 0x41a290: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x41a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_41a294:
    // 0x41a294: 0x10000002  b           . + 4 + (0x2 << 2)
label_41a298:
    if (ctx->pc == 0x41A298u) {
        ctx->pc = 0x41A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A294u;
        // 0x41a298: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A29Cu;
        goto label_41a29c;
    }
    ctx->pc = 0x41A294u;
    {
        const bool branch_taken_0x41a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A294u;
        // 0x41a298: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a294) {
            ctx->pc = 0x41A2A0u;
            goto label_41a2a0;
        }
    }
    ctx->pc = 0x41A29Cu;
label_41a29c:
    // 0x41a29c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x41a29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a2a0:
    // 0x41a2a0: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_41a2a4:
    if (ctx->pc == 0x41A2A4u) {
        ctx->pc = 0x41A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2A0u;
        // 0x41a2a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2A8u;
        goto label_41a2a8;
    }
    ctx->pc = 0x41A2A0u;
    {
        const bool branch_taken_0x41a2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a2a0) {
            ctx->pc = 0x41A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A2A0u;
            // 0x41a2a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A2FCu;
            goto label_41a2fc;
        }
    }
    ctx->pc = 0x41A2A8u;
label_41a2a8:
    // 0x41a2a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x41a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41a2ac:
    // 0x41a2ac: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x41a2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_41a2b0:
    // 0x41a2b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x41a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_41a2b4:
    // 0x41a2b4: 0x40f809  jalr        $v0
label_41a2b8:
    if (ctx->pc == 0x41A2B8u) {
        ctx->pc = 0x41A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2B4u;
        // 0x41a2b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2BCu;
        goto label_41a2bc;
    }
    ctx->pc = 0x41A2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A2BCu);
        ctx->pc = 0x41A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2B4u;
        // 0x41a2b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A2B4u, 0x41A2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A2BCu;
label_41a2bc:
    // 0x41a2bc: 0x5453000f  bnel        $v0, $s3, . + 4 + (0xF << 2)
label_41a2c0:
    if (ctx->pc == 0x41A2C0u) {
        ctx->pc = 0x41A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2BCu;
        // 0x41a2c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2C4u;
        goto label_41a2c4;
    }
    ctx->pc = 0x41A2BCu;
    {
        const bool branch_taken_0x41a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x41a2bc) {
            ctx->pc = 0x41A2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A2BCu;
            // 0x41a2c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A2FCu;
            goto label_41a2fc;
        }
    }
    ctx->pc = 0x41A2C4u;
label_41a2c4:
    // 0x41a2c4: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x41a2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_41a2c8:
    // 0x41a2c8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_41a2cc:
    if (ctx->pc == 0x41A2CCu) {
        ctx->pc = 0x41A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2C8u;
        // 0x41a2cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2D0u;
        goto label_41a2d0;
    }
    ctx->pc = 0x41A2C8u;
    {
        const bool branch_taken_0x41a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a2c8) {
            ctx->pc = 0x41A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A2C8u;
            // 0x41a2cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A2FCu;
            goto label_41a2fc;
        }
    }
    ctx->pc = 0x41A2D0u;
label_41a2d0:
    // 0x41a2d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x41a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_41a2d4:
    // 0x41a2d4: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x41a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_41a2d8:
    // 0x41a2d8: 0xc0e409a  jal         func_390268
label_41a2dc:
    if (ctx->pc == 0x41A2DCu) {
        ctx->pc = 0x41A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2D8u;
        // 0x41a2dc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2E0u;
        goto label_41a2e0;
    }
    ctx->pc = 0x41A2D8u;
    SET_GPR_U32(ctx, 31, 0x41A2E0u);
    ctx->pc = 0x41A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A2D8u;
    // 0x41a2dc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A2D8u, 0x41A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A2E0u;
label_41a2e0:
    // 0x41a2e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_41a2e4:
    if (ctx->pc == 0x41A2E4u) {
        ctx->pc = 0x41A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2E0u;
        // 0x41a2e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2E8u;
        goto label_41a2e8;
    }
    ctx->pc = 0x41A2E0u;
    {
        const bool branch_taken_0x41a2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a2e0) {
            ctx->pc = 0x41A2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A2E0u;
            // 0x41a2e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A2FCu;
            goto label_41a2fc;
        }
    }
    ctx->pc = 0x41A2E8u;
label_41a2e8:
    // 0x41a2e8: 0xc087502  jal         func_21D408
label_41a2ec:
    if (ctx->pc == 0x41A2ECu) {
        ctx->pc = 0x41A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2E8u;
        // 0x41a2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2F0u;
        goto label_41a2f0;
    }
    ctx->pc = 0x41A2E8u;
    SET_GPR_U32(ctx, 31, 0x41A2F0u);
    ctx->pc = 0x41A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A2E8u;
    // 0x41a2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A2E8u, 0x41A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A2F0u;
label_41a2f0:
    // 0x41a2f0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x41a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_41a2f4:
    // 0x41a2f4: 0x1076ffcf  beq         $v1, $s6, . + 4 + (-0x31 << 2)
label_41a2f8:
    if (ctx->pc == 0x41A2F8u) {
        ctx->pc = 0x41A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2F4u;
        // 0x41a2f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A2FCu;
        goto label_41a2fc;
    }
    ctx->pc = 0x41A2F4u;
    {
        const bool branch_taken_0x41a2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x41A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A2F4u;
        // 0x41a2f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a2f4) {
            ctx->pc = 0x41A234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a234;
        }
    }
    ctx->pc = 0x41A2FCu;
label_41a2fc:
    // 0x41a2fc: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x41a2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_41a300:
    // 0x41a300: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_41a304:
    if (ctx->pc == 0x41A304u) {
        ctx->pc = 0x41A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A300u;
        // 0x41a304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A308u;
        goto label_41a308;
    }
    ctx->pc = 0x41A300u;
    {
        const bool branch_taken_0x41a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A300u;
        // 0x41a304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a300) {
            ctx->pc = 0x41A250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a250;
        }
    }
    ctx->pc = 0x41A308u;
label_41a308:
    // 0x41a308: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x41a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41a30c:
    // 0x41a30c: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x41a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_41a310:
    // 0x41a310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_41a314:
    if (ctx->pc == 0x41A314u) {
        ctx->pc = 0x41A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A310u;
        // 0x41a314: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A318u;
        goto label_41a318;
    }
    ctx->pc = 0x41A310u;
    {
        const bool branch_taken_0x41a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A310u;
        // 0x41a314: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a310) {
            ctx->pc = 0x41A330u;
            goto label_41a330;
        }
    }
    ctx->pc = 0x41A318u;
label_41a318:
    // 0x41a318: 0xc05a5b8  jal         func_1696E0
label_41a31c:
    if (ctx->pc == 0x41A31Cu) {
        ctx->pc = 0x41A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A318u;
        // 0x41a31c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A320u;
        goto label_41a320;
    }
    ctx->pc = 0x41A318u;
    SET_GPR_U32(ctx, 31, 0x41A320u);
    ctx->pc = 0x41A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A318u;
    // 0x41a31c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1696E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1696E0u, 0x41A318u, 0x41A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A320u;
label_41a320:
    // 0x41a320: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_41a324:
    if (ctx->pc == 0x41A324u) {
        ctx->pc = 0x41A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A320u;
        // 0x41a324: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A328u;
        goto label_41a328;
    }
    ctx->pc = 0x41A320u;
    {
        const bool branch_taken_0x41a320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x41A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A320u;
        // 0x41a324: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a320) {
            ctx->pc = 0x41A334u;
            goto label_41a334;
        }
    }
    ctx->pc = 0x41A328u;
label_41a328:
    // 0x41a328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41a32c:
    // 0x41a32c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_41a330:
    // 0x41a330: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x41a330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41a334:
    // 0x41a334: 0xc1067f2  jal         func_419FC8
label_41a338:
    if (ctx->pc == 0x41A338u) {
        ctx->pc = 0x41A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A334u;
        // 0x41a338: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A33Cu;
        goto label_41a33c;
    }
    ctx->pc = 0x41A334u;
    SET_GPR_U32(ctx, 31, 0x41A33Cu);
    ctx->pc = 0x41A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A334u;
    // 0x41a338: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FC8u, 0x41A334u, 0x41A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A33Cu;
label_41a33c:
    // 0x41a33c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41a33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41a340:
    // 0x41a340: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x41a340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41a344:
    // 0x41a344: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x41a344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41a348:
    // 0x41a348: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x41a348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41a34c:
    // 0x41a34c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x41a34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41a350:
    // 0x41a350: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41a350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41a354:
    // 0x41a354: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x41a354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41a358:
    // 0x41a358: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x41a358u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41a35c:
    // 0x41a35c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x41a35cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a360:
    // 0x41a360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41a364:
    // 0x41a364: 0x3e00008  jr          $ra
label_41a368:
    if (ctx->pc == 0x41A368u) {
        ctx->pc = 0x41A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A364u;
        // 0x41a368: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A36Cu;
        goto label_41a36c;
    }
    ctx->pc = 0x41A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A364u;
        // 0x41a368: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A36Cu;
label_41a36c:
    // 0x41a36c: 0x0  nop
    ctx->pc = 0x41a36cu;
    // NOP
    ctx->pc = 0x41a370u;
}
