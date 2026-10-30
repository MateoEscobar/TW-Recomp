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

// Function: sub_002BB010
// Address: 0x2bb010 - 0x2bb3d0
void sub_002BB010_0x2bb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB010_0x2bb010");
#endif

    switch (ctx->pc) {
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        default: break;
    }

    ctx->pc = 0x2bb010u;

label_2bb010:
    // 0x2bb010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bb010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2bb014:
    // 0x2bb014: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bb014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bb018:
    // 0x2bb018: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2bb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2bb01c:
    // 0x2bb01c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2bb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2bb020:
    // 0x2bb020: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb024:
    // 0x2bb024: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2bb024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2bb028:
    // 0x2bb028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb02c:
    // 0x2bb02c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bb02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2bb030:
    // 0x2bb030: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2bb030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2bb034:
    // 0x2bb034: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2bb034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2bb038:
    // 0x2bb038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bb03c:
    // 0x2bb03c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2bb03cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2bb040:
    // 0x2bb040: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2bb040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2bb044:
    // 0x2bb044: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2bb044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2bb048:
    // 0x2bb048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb04c:
    // 0x2bb04c: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x2bb04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2bb050:
    // 0x2bb050: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x2bb050u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bb054:
    // 0x2bb054: 0x10500016  beq         $v0, $s0, . + 4 + (0x16 << 2)
label_2bb058:
    if (ctx->pc == 0x2BB058u) {
        ctx->pc = 0x2BB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB054u;
        // 0x2bb058: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB05Cu;
        goto label_2bb05c;
    }
    ctx->pc = 0x2BB054u;
    {
        const bool branch_taken_0x2bb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB054u;
        // 0x2bb058: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb054) {
            ctx->pc = 0x2BB0B0u;
            goto label_2bb0b0;
        }
    }
    ctx->pc = 0x2BB05Cu;
label_2bb05c:
    // 0x2bb05c: 0xc0e4060  jal         func_390180
label_2bb060:
    if (ctx->pc == 0x2BB060u) {
        ctx->pc = 0x2BB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB05Cu;
        // 0x2bb060: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB064u;
        goto label_2bb064;
    }
    ctx->pc = 0x2BB05Cu;
    SET_GPR_U32(ctx, 31, 0x2BB064u);
    ctx->pc = 0x2BB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB05Cu;
    // 0x2bb060: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BB05Cu, 0x2BB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB064u;
label_2bb064:
    // 0x2bb064: 0xc0e57ce  jal         func_395F38
label_2bb068:
    if (ctx->pc == 0x2BB068u) {
        ctx->pc = 0x2BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB064u;
        // 0x2bb068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB06Cu;
        goto label_2bb06c;
    }
    ctx->pc = 0x2BB064u;
    SET_GPR_U32(ctx, 31, 0x2BB06Cu);
    ctx->pc = 0x2BB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB064u;
    // 0x2bb068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2BB064u, 0x2BB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB06Cu;
label_2bb06c:
    // 0x2bb06c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bb06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb070:
    // 0x2bb070: 0x126000cc  beqz        $s3, . + 4 + (0xCC << 2)
label_2bb074:
    if (ctx->pc == 0x2BB074u) {
        ctx->pc = 0x2BB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB070u;
        // 0x2bb074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB078u;
        goto label_2bb078;
    }
    ctx->pc = 0x2BB070u;
    {
        const bool branch_taken_0x2bb070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB070u;
        // 0x2bb074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb070) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB078u;
label_2bb078:
    // 0x2bb078: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bb078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb07c:
    // 0x2bb07c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2bb07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2bb080:
    // 0x2bb080: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2bb080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bb084:
    // 0x2bb084: 0x105000c7  beq         $v0, $s0, . + 4 + (0xC7 << 2)
label_2bb088:
    if (ctx->pc == 0x2BB088u) {
        ctx->pc = 0x2BB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB084u;
        // 0x2bb088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB08Cu;
        goto label_2bb08c;
    }
    ctx->pc = 0x2BB084u;
    {
        const bool branch_taken_0x2bb084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB084u;
        // 0x2bb088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb084) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB08Cu;
label_2bb08c:
    // 0x2bb08c: 0xc08a1a8  jal         func_2286A0
label_2bb090:
    if (ctx->pc == 0x2BB090u) {
        ctx->pc = 0x2BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB08Cu;
        // 0x2bb090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB094u;
        goto label_2bb094;
    }
    ctx->pc = 0x2BB08Cu;
    SET_GPR_U32(ctx, 31, 0x2BB094u);
    ctx->pc = 0x2BB090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB08Cu;
    // 0x2bb090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2BB08Cu, 0x2BB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB094u;
label_2bb094:
    // 0x2bb094: 0x105000c3  beq         $v0, $s0, . + 4 + (0xC3 << 2)
label_2bb098:
    if (ctx->pc == 0x2BB098u) {
        ctx->pc = 0x2BB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB094u;
        // 0x2bb098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB09Cu;
        goto label_2bb09c;
    }
    ctx->pc = 0x2BB094u;
    {
        const bool branch_taken_0x2bb094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB094u;
        // 0x2bb098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb094) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB09Cu;
label_2bb09c:
    // 0x2bb09c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2bb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2bb0a0:
    // 0x2bb0a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bb0a4:
    if (ctx->pc == 0x2BB0A4u) {
        ctx->pc = 0x2BB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A0u;
        // 0x2bb0a4: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0A8u;
        goto label_2bb0a8;
    }
    ctx->pc = 0x2BB0A0u;
    {
        const bool branch_taken_0x2bb0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A0u;
        // 0x2bb0a4: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0a0) {
            ctx->pc = 0x2BB0B8u;
            goto label_2bb0b8;
        }
    }
    ctx->pc = 0x2BB0A8u;
label_2bb0a8:
    // 0x2bb0a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bb0ac:
    if (ctx->pc == 0x2BB0ACu) {
        ctx->pc = 0x2BB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A8u;
        // 0x2bb0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0B0u;
        goto label_2bb0b0;
    }
    ctx->pc = 0x2BB0A8u;
    {
        const bool branch_taken_0x2bb0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A8u;
        // 0x2bb0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0a8) {
            ctx->pc = 0x2BB0BCu;
            goto label_2bb0bc;
        }
    }
    ctx->pc = 0x2BB0B0u;
label_2bb0b0:
    // 0x2bb0b0: 0x100000bc  b           . + 4 + (0xBC << 2)
label_2bb0b4:
    if (ctx->pc == 0x2BB0B4u) {
        ctx->pc = 0x2BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0B0u;
        // 0x2bb0b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0B8u;
        goto label_2bb0b8;
    }
    ctx->pc = 0x2BB0B0u;
    {
        const bool branch_taken_0x2bb0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0B0u;
        // 0x2bb0b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0b0) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB0B8u;
label_2bb0b8:
    // 0x2bb0b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0bc:
    // 0x2bb0bc: 0xc088fa8  jal         func_223EA0
label_2bb0c0:
    if (ctx->pc == 0x2BB0C0u) {
        ctx->pc = 0x2BB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0BCu;
        // 0x2bb0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0C4u;
        goto label_2bb0c4;
    }
    ctx->pc = 0x2BB0BCu;
    SET_GPR_U32(ctx, 31, 0x2BB0C4u);
    ctx->pc = 0x2BB0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0BCu;
    // 0x2bb0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BB0BCu, 0x2BB0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0C4u;
label_2bb0c4:
    // 0x2bb0c4: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_2bb0c8:
    if (ctx->pc == 0x2BB0C8u) {
        ctx->pc = 0x2BB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0C4u;
        // 0x2bb0c8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0CCu;
        goto label_2bb0cc;
    }
    ctx->pc = 0x2BB0C4u;
    {
        const bool branch_taken_0x2bb0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0c4) {
            ctx->pc = 0x2BB0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB0C4u;
            // 0x2bb0c8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB1C8u;
            goto label_2bb1c8;
        }
    }
    ctx->pc = 0x2BB0CCu;
label_2bb0cc:
    // 0x2bb0cc: 0xc089000  jal         func_224000
label_2bb0d0:
    if (ctx->pc == 0x2BB0D0u) {
        ctx->pc = 0x2BB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0CCu;
        // 0x2bb0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0D4u;
        goto label_2bb0d4;
    }
    ctx->pc = 0x2BB0CCu;
    SET_GPR_U32(ctx, 31, 0x2BB0D4u);
    ctx->pc = 0x2BB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0CCu;
    // 0x2bb0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BB0CCu, 0x2BB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0D4u;
label_2bb0d4:
    // 0x2bb0d4: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
label_2bb0d8:
    if (ctx->pc == 0x2BB0D8u) {
        ctx->pc = 0x2BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D4u;
        // 0x2bb0d8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0DCu;
        goto label_2bb0dc;
    }
    ctx->pc = 0x2BB0D4u;
    {
        const bool branch_taken_0x2bb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0d4) {
            ctx->pc = 0x2BB0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB0D4u;
            // 0x2bb0d8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB1C8u;
            goto label_2bb1c8;
        }
    }
    ctx->pc = 0x2BB0DCu;
label_2bb0dc:
    // 0x2bb0dc: 0xc089bfc  jal         func_226FF0
label_2bb0e0:
    if (ctx->pc == 0x2BB0E0u) {
        ctx->pc = 0x2BB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0DCu;
        // 0x2bb0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0E4u;
        goto label_2bb0e4;
    }
    ctx->pc = 0x2BB0DCu;
    SET_GPR_U32(ctx, 31, 0x2BB0E4u);
    ctx->pc = 0x2BB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0DCu;
    // 0x2bb0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2BB0DCu, 0x2BB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0E4u;
label_2bb0e4:
    // 0x2bb0e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bb0e8:
    if (ctx->pc == 0x2BB0E8u) {
        ctx->pc = 0x2BB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0E4u;
        // 0x2bb0e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0ECu;
        goto label_2bb0ec;
    }
    ctx->pc = 0x2BB0E4u;
    {
        const bool branch_taken_0x2bb0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0e4) {
            ctx->pc = 0x2BB0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB0E4u;
            // 0x2bb0e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB0F8u;
            goto label_2bb0f8;
        }
    }
    ctx->pc = 0x2BB0ECu;
label_2bb0ec:
    // 0x2bb0ec: 0xc095fce  jal         func_257F38
label_2bb0f0:
    if (ctx->pc == 0x2BB0F0u) {
        ctx->pc = 0x2BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0ECu;
        // 0x2bb0f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0F4u;
        goto label_2bb0f4;
    }
    ctx->pc = 0x2BB0ECu;
    SET_GPR_U32(ctx, 31, 0x2BB0F4u);
    ctx->pc = 0x2BB0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0ECu;
    // 0x2bb0f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2BB0ECu, 0x2BB0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0F4u;
label_2bb0f4:
    // 0x2bb0f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb0f8:
    // 0x2bb0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0fc:
    // 0x2bb0fc: 0xc0a33f8  jal         func_28CFE0
label_2bb100:
    if (ctx->pc == 0x2BB100u) {
        ctx->pc = 0x2BB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0FCu;
        // 0x2bb100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB104u;
        goto label_2bb104;
    }
    ctx->pc = 0x2BB0FCu;
    SET_GPR_U32(ctx, 31, 0x2BB104u);
    ctx->pc = 0x2BB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0FCu;
    // 0x2bb100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BB0FCu, 0x2BB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB104u;
label_2bb104:
    // 0x2bb104: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2bb104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bb108:
    // 0x2bb108: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2bb108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2bb10c:
    // 0x2bb10c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2bb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2bb110:
    // 0x2bb110: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x2bb110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2bb114:
    // 0x2bb114: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bb114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bb118:
    // 0x2bb118: 0xc0cdb38  jal         func_336CE0
label_2bb11c:
    if (ctx->pc == 0x2BB11Cu) {
        ctx->pc = 0x2BB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB118u;
        // 0x2bb11c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB120u;
        goto label_2bb120;
    }
    ctx->pc = 0x2BB118u;
    SET_GPR_U32(ctx, 31, 0x2BB120u);
    ctx->pc = 0x2BB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB118u;
    // 0x2bb11c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BB118u, 0x2BB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB120u;
label_2bb120:
    // 0x2bb120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bb124:
    // 0x2bb124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bb128:
    // 0x2bb128: 0x0  nop
    ctx->pc = 0x2bb128u;
    // NOP
label_2bb12c:
    // 0x2bb12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bb130:
    // 0x2bb130: 0x0  nop
    ctx->pc = 0x2bb130u;
    // NOP
label_2bb134:
    // 0x2bb134: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2bb138:
    if (ctx->pc == 0x2BB138u) {
        ctx->pc = 0x2BB13Cu;
        goto label_2bb13c;
    }
    ctx->pc = 0x2BB134u;
    {
        const bool branch_taken_0x2bb134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb134) {
            ctx->pc = 0x2BB1A0u;
            goto label_2bb1a0;
        }
    }
    ctx->pc = 0x2BB13Cu;
label_2bb13c:
    // 0x2bb13c: 0xc08bfbc  jal         func_22FEF0
label_2bb140:
    if (ctx->pc == 0x2BB140u) {
        ctx->pc = 0x2BB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB13Cu;
        // 0x2bb140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB144u;
        goto label_2bb144;
    }
    ctx->pc = 0x2BB13Cu;
    SET_GPR_U32(ctx, 31, 0x2BB144u);
    ctx->pc = 0x2BB140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB13Cu;
    // 0x2bb140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BB13Cu, 0x2BB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB144u;
label_2bb144:
    // 0x2bb144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb148:
    // 0x2bb148: 0xc0a4e54  jal         func_293950
label_2bb14c:
    if (ctx->pc == 0x2BB14Cu) {
        ctx->pc = 0x2BB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB148u;
        // 0x2bb14c: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB150u;
        goto label_2bb150;
    }
    ctx->pc = 0x2BB148u;
    SET_GPR_U32(ctx, 31, 0x2BB150u);
    ctx->pc = 0x2BB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB148u;
    // 0x2bb14c: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BB148u, 0x2BB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB150u;
label_2bb150:
    // 0x2bb150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb154:
    // 0x2bb154: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2bb158:
    if (ctx->pc == 0x2BB158u) {
        ctx->pc = 0x2BB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB154u;
        // 0x2bb158: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB15Cu;
        goto label_2bb15c;
    }
    ctx->pc = 0x2BB154u;
    {
        const bool branch_taken_0x2bb154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb154) {
            ctx->pc = 0x2BB158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB154u;
            // 0x2bb158: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB190u;
            goto label_2bb190;
        }
    }
    ctx->pc = 0x2BB15Cu;
label_2bb15c:
    // 0x2bb15c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2bb15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bb160:
    // 0x2bb160: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bb160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bb164:
    // 0x2bb164: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bb168:
    // 0x2bb168: 0x40f809  jalr        $v0
label_2bb16c:
    if (ctx->pc == 0x2BB16Cu) {
        ctx->pc = 0x2BB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB168u;
        // 0x2bb16c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB170u;
        goto label_2bb170;
    }
    ctx->pc = 0x2BB168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BB170u);
        ctx->pc = 0x2BB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB168u;
        // 0x2bb16c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB168u, 0x2BB170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB170u;
label_2bb170:
    // 0x2bb170: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2bb170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2bb174:
    // 0x2bb174: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb178:
    // 0x2bb178: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb17c:
    // 0x2bb17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb180:
    // 0x2bb180: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bb180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bb184:
    // 0x2bb184: 0xc0b71e8  jal         func_2DC7A0
label_2bb188:
    if (ctx->pc == 0x2BB188u) {
        ctx->pc = 0x2BB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB184u;
        // 0x2bb188: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB18Cu;
        goto label_2bb18c;
    }
    ctx->pc = 0x2BB184u;
    SET_GPR_U32(ctx, 31, 0x2BB18Cu);
    ctx->pc = 0x2BB188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB184u;
    // 0x2bb188: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7A0u, 0x2BB184u, 0x2BB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB18Cu;
label_2bb18c:
    // 0x2bb18c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb190:
    // 0x2bb190: 0xc0a35d6  jal         func_28D758
label_2bb194:
    if (ctx->pc == 0x2BB194u) {
        ctx->pc = 0x2BB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB190u;
        // 0x2bb194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB198u;
        goto label_2bb198;
    }
    ctx->pc = 0x2BB190u;
    SET_GPR_U32(ctx, 31, 0x2BB198u);
    ctx->pc = 0x2BB194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB190u;
    // 0x2bb194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BB190u, 0x2BB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB198u;
label_2bb198:
    // 0x2bb198: 0x10000082  b           . + 4 + (0x82 << 2)
label_2bb19c:
    if (ctx->pc == 0x2BB19Cu) {
        ctx->pc = 0x2BB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB198u;
        // 0x2bb19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1A0u;
        goto label_2bb1a0;
    }
    ctx->pc = 0x2BB198u;
    {
        const bool branch_taken_0x2bb198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB198u;
        // 0x2bb19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb198) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB1A0u;
label_2bb1a0:
    // 0x2bb1a0: 0xc0a367c  jal         func_28D9F0
label_2bb1a4:
    if (ctx->pc == 0x2BB1A4u) {
        ctx->pc = 0x2BB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1A0u;
        // 0x2bb1a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1A8u;
        goto label_2bb1a8;
    }
    ctx->pc = 0x2BB1A0u;
    SET_GPR_U32(ctx, 31, 0x2BB1A8u);
    ctx->pc = 0x2BB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1A0u;
    // 0x2bb1a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BB1A0u, 0x2BB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1A8u;
label_2bb1a8:
    // 0x2bb1a8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_2bb1ac:
    if (ctx->pc == 0x2BB1ACu) {
        ctx->pc = 0x2BB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1A8u;
        // 0x2bb1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1B0u;
        goto label_2bb1b0;
    }
    ctx->pc = 0x2BB1A8u;
    {
        const bool branch_taken_0x2bb1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1A8u;
        // 0x2bb1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1a8) {
            ctx->pc = 0x2BB3A0u;
            goto label_2bb3a0;
        }
    }
    ctx->pc = 0x2BB1B0u;
label_2bb1b0:
    // 0x2bb1b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb1b4:
    // 0x2bb1b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bb1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1b8:
    // 0x2bb1b8: 0xc0bebe6  jal         func_2FAF98
label_2bb1bc:
    if (ctx->pc == 0x2BB1BCu) {
        ctx->pc = 0x2BB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1B8u;
        // 0x2bb1bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1C0u;
        goto label_2bb1c0;
    }
    ctx->pc = 0x2BB1B8u;
    SET_GPR_U32(ctx, 31, 0x2BB1C0u);
    ctx->pc = 0x2BB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1B8u;
    // 0x2bb1bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x2BB1B8u, 0x2BB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1C0u;
label_2bb1c0:
    // 0x2bb1c0: 0x10000078  b           . + 4 + (0x78 << 2)
label_2bb1c4:
    if (ctx->pc == 0x2BB1C4u) {
        ctx->pc = 0x2BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C0u;
        // 0x2bb1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1C8u;
        goto label_2bb1c8;
    }
    ctx->pc = 0x2BB1C0u;
    {
        const bool branch_taken_0x2bb1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C0u;
        // 0x2bb1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1c0) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB1C8u;
label_2bb1c8:
    // 0x2bb1c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1cc:
    // 0x2bb1cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bb1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb1d0:
    // 0x2bb1d0: 0xc0e409a  jal         func_390268
label_2bb1d4:
    if (ctx->pc == 0x2BB1D4u) {
        ctx->pc = 0x2BB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D0u;
        // 0x2bb1d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1D8u;
        goto label_2bb1d8;
    }
    ctx->pc = 0x2BB1D0u;
    SET_GPR_U32(ctx, 31, 0x2BB1D8u);
    ctx->pc = 0x2BB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1D0u;
    // 0x2bb1d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB1D0u, 0x2BB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1D8u;
label_2bb1d8:
    // 0x2bb1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1dc:
    // 0x2bb1dc: 0xc0a34d6  jal         func_28D358
label_2bb1e0:
    if (ctx->pc == 0x2BB1E0u) {
        ctx->pc = 0x2BB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1DCu;
        // 0x2bb1e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1E4u;
        goto label_2bb1e4;
    }
    ctx->pc = 0x2BB1DCu;
    SET_GPR_U32(ctx, 31, 0x2BB1E4u);
    ctx->pc = 0x2BB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1DCu;
    // 0x2bb1e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BB1DCu, 0x2BB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1E4u;
label_2bb1e4:
    // 0x2bb1e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bb1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1e8:
    // 0x2bb1e8: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_2bb1ec:
    if (ctx->pc == 0x2BB1ECu) {
        ctx->pc = 0x2BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E8u;
        // 0x2bb1ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1F0u;
        goto label_2bb1f0;
    }
    ctx->pc = 0x2BB1E8u;
    {
        const bool branch_taken_0x2bb1e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E8u;
        // 0x2bb1ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1e8) {
            ctx->pc = 0x2BB224u;
            goto label_2bb224;
        }
    }
    ctx->pc = 0x2BB1F0u;
label_2bb1f0:
    // 0x2bb1f0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2bb1f4:
    // 0x2bb1f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb1f8:
    // 0x2bb1f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bb1fc:
    if (ctx->pc == 0x2BB1FCu) {
        ctx->pc = 0x2BB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F8u;
        // 0x2bb1fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB200u;
        goto label_2bb200;
    }
    ctx->pc = 0x2BB1F8u;
    {
        const bool branch_taken_0x2bb1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1f8) {
            ctx->pc = 0x2BB1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1F8u;
            // 0x2bb1fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB200u;
            goto label_2bb200;
        }
    }
    ctx->pc = 0x2BB200u;
label_2bb200:
    // 0x2bb200: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2bb200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2bb204:
    // 0x2bb204: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bb204u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bb208:
    // 0x2bb208: 0x2010  mfhi        $a0
    ctx->pc = 0x2bb208u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bb20c:
    // 0x2bb20c: 0x14800065  bnez        $a0, . + 4 + (0x65 << 2)
label_2bb210:
    if (ctx->pc == 0x2BB210u) {
        ctx->pc = 0x2BB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB20Cu;
        // 0x2bb210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB214u;
        goto label_2bb214;
    }
    ctx->pc = 0x2BB20Cu;
    {
        const bool branch_taken_0x2bb20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB20Cu;
        // 0x2bb210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb20c) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB214u;
label_2bb214:
    // 0x2bb214: 0xc0aebc8  jal         func_2BAF20
label_2bb218:
    if (ctx->pc == 0x2BB218u) {
        ctx->pc = 0x2BB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB214u;
        // 0x2bb218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB21Cu;
        goto label_2bb21c;
    }
    ctx->pc = 0x2BB214u;
    SET_GPR_U32(ctx, 31, 0x2BB21Cu);
    ctx->pc = 0x2BB218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB214u;
    // 0x2bb218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF20u, 0x2BB214u, 0x2BB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB21Cu;
label_2bb21c:
    // 0x2bb21c: 0x10000061  b           . + 4 + (0x61 << 2)
label_2bb220:
    if (ctx->pc == 0x2BB220u) {
        ctx->pc = 0x2BB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB21Cu;
        // 0x2bb220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB224u;
        goto label_2bb224;
    }
    ctx->pc = 0x2BB21Cu;
    {
        const bool branch_taken_0x2bb21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB21Cu;
        // 0x2bb220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb21c) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB224u;
label_2bb224:
    // 0x2bb224: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bb224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb228:
    // 0x2bb228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb22c:
    // 0x2bb22c: 0xc0888a2  jal         func_222288
label_2bb230:
    if (ctx->pc == 0x2BB230u) {
        ctx->pc = 0x2BB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB22Cu;
        // 0x2bb230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB234u;
        goto label_2bb234;
    }
    ctx->pc = 0x2BB22Cu;
    SET_GPR_U32(ctx, 31, 0x2BB234u);
    ctx->pc = 0x2BB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB22Cu;
    // 0x2bb230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BB22Cu, 0x2BB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB234u;
label_2bb234:
    // 0x2bb234: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2bb238:
    if (ctx->pc == 0x2BB238u) {
        ctx->pc = 0x2BB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB234u;
        // 0x2bb238: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB23Cu;
        goto label_2bb23c;
    }
    ctx->pc = 0x2BB234u;
    {
        const bool branch_taken_0x2bb234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB234u;
        // 0x2bb238: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb234) {
            ctx->pc = 0x2BB250u;
            goto label_2bb250;
        }
    }
    ctx->pc = 0x2BB23Cu;
label_2bb23c:
    // 0x2bb23c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bb240:
    // 0x2bb240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb244:
    // 0x2bb244: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x2bb244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2bb248:
    // 0x2bb248: 0x10000056  b           . + 4 + (0x56 << 2)
label_2bb24c:
    if (ctx->pc == 0x2BB24Cu) {
        ctx->pc = 0x2BB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB248u;
        // 0x2bb24c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB250u;
        goto label_2bb250;
    }
    ctx->pc = 0x2BB248u;
    {
        const bool branch_taken_0x2bb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB248u;
        // 0x2bb24c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb248) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB250u;
label_2bb250:
    // 0x2bb250: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2bb250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bb254:
    // 0x2bb254: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2bb254u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2bb258:
    // 0x2bb258: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2bb258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2bb25c:
    // 0x2bb25c: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2bb25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2bb260:
    // 0x2bb260: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bb264:
    // 0x2bb264: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bb268:
    // 0x2bb268: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2bb268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2bb26c:
    // 0x2bb26c: 0xc0cdb38  jal         func_336CE0
label_2bb270:
    if (ctx->pc == 0x2BB270u) {
        ctx->pc = 0x2BB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB26Cu;
        // 0x2bb270: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB274u;
        goto label_2bb274;
    }
    ctx->pc = 0x2BB26Cu;
    SET_GPR_U32(ctx, 31, 0x2BB274u);
    ctx->pc = 0x2BB270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB26Cu;
    // 0x2bb270: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BB26Cu, 0x2BB274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB274u;
label_2bb274:
    // 0x2bb274: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bb274u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bb278:
    // 0x2bb278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb27c:
    // 0x2bb27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb280:
    // 0x2bb280: 0xc08c340  jal         func_230D00
label_2bb284:
    if (ctx->pc == 0x2BB284u) {
        ctx->pc = 0x2BB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB280u;
        // 0x2bb284: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB288u;
        goto label_2bb288;
    }
    ctx->pc = 0x2BB280u;
    SET_GPR_U32(ctx, 31, 0x2BB288u);
    ctx->pc = 0x2BB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB280u;
    // 0x2bb284: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2BB280u, 0x2BB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB288u;
label_2bb288:
    // 0x2bb288: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bb288u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2bb28c:
    // 0x2bb28c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2bb28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bb290:
    // 0x2bb290: 0x0  nop
    ctx->pc = 0x2bb290u;
    // NOP
label_2bb294:
    // 0x2bb294: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2bb298:
    if (ctx->pc == 0x2BB298u) {
        ctx->pc = 0x2BB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB294u;
        // 0x2bb298: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB29Cu;
        goto label_2bb29c;
    }
    ctx->pc = 0x2BB294u;
    {
        const bool branch_taken_0x2bb294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB294u;
        // 0x2bb298: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb294) {
            ctx->pc = 0x2BB304u;
            goto label_2bb304;
        }
    }
    ctx->pc = 0x2BB29Cu;
label_2bb29c:
    // 0x2bb29c: 0xc086618  jal         func_219860
label_2bb2a0:
    if (ctx->pc == 0x2BB2A0u) {
        ctx->pc = 0x2BB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB29Cu;
        // 0x2bb2a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2A4u;
        goto label_2bb2a4;
    }
    ctx->pc = 0x2BB29Cu;
    SET_GPR_U32(ctx, 31, 0x2BB2A4u);
    ctx->pc = 0x2BB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB29Cu;
    // 0x2bb2a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2BB29Cu, 0x2BB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2A4u;
label_2bb2a4:
    // 0x2bb2a4: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2bb2a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2bb2a8:
    // 0x2bb2a8: 0x0  nop
    ctx->pc = 0x2bb2a8u;
    // NOP
label_2bb2ac:
    // 0x2bb2ac: 0x0  nop
    ctx->pc = 0x2bb2acu;
    // NOP
label_2bb2b0:
    // 0x2bb2b0: 0x46150044  c1          0x150044
    ctx->pc = 0x2bb2b0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2bb2b4:
    // 0x2bb2b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bb2b8:
    // 0x2bb2b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bb2bc:
    // 0x2bb2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2c0:
    // 0x2bb2c0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2bb2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2bb2c4:
    // 0x2bb2c4: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2bb2c4u;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
label_2bb2c8:
    // 0x2bb2c8: 0xc08bfa0  jal         func_22FE80
label_2bb2cc:
    if (ctx->pc == 0x2BB2CCu) {
        ctx->pc = 0x2BB2D0u;
        goto label_2bb2d0;
    }
    ctx->pc = 0x2BB2C8u;
    SET_GPR_U32(ctx, 31, 0x2BB2D0u);
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BB2C8u, 0x2BB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2D0u;
label_2bb2d0:
    // 0x2bb2d0: 0xc0a367c  jal         func_28D9F0
label_2bb2d4:
    if (ctx->pc == 0x2BB2D4u) {
        ctx->pc = 0x2BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D0u;
        // 0x2bb2d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2D8u;
        goto label_2bb2d8;
    }
    ctx->pc = 0x2BB2D0u;
    SET_GPR_U32(ctx, 31, 0x2BB2D8u);
    ctx->pc = 0x2BB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2D0u;
    // 0x2bb2d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BB2D0u, 0x2BB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2D8u;
label_2bb2d8:
    // 0x2bb2d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2bb2dc:
    if (ctx->pc == 0x2BB2DCu) {
        ctx->pc = 0x2BB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D8u;
        // 0x2bb2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2E0u;
        goto label_2bb2e0;
    }
    ctx->pc = 0x2BB2D8u;
    {
        const bool branch_taken_0x2bb2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D8u;
        // 0x2bb2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2d8) {
            ctx->pc = 0x2BB3A0u;
            goto label_2bb3a0;
        }
    }
    ctx->pc = 0x2BB2E0u;
label_2bb2e0:
    // 0x2bb2e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb2e4:
    // 0x2bb2e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bb2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2e8:
    // 0x2bb2e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bb2e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bb2ec:
    // 0x2bb2ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bb2ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2bb2f0:
    // 0x2bb2f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2f4:
    // 0x2bb2f4: 0xc0bf3d4  jal         func_2FCF50
label_2bb2f8:
    if (ctx->pc == 0x2BB2F8u) {
        ctx->pc = 0x2BB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F4u;
        // 0x2bb2f8: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2FCu;
        goto label_2bb2fc;
    }
    ctx->pc = 0x2BB2F4u;
    SET_GPR_U32(ctx, 31, 0x2BB2FCu);
    ctx->pc = 0x2BB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2F4u;
    // 0x2bb2f8: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BB2F4u, 0x2BB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2FCu;
label_2bb2fc:
    // 0x2bb2fc: 0x10000029  b           . + 4 + (0x29 << 2)
label_2bb300:
    if (ctx->pc == 0x2BB300u) {
        ctx->pc = 0x2BB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2FCu;
        // 0x2bb300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB304u;
        goto label_2bb304;
    }
    ctx->pc = 0x2BB2FCu;
    {
        const bool branch_taken_0x2bb2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2FCu;
        // 0x2bb300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2fc) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB304u;
label_2bb304:
    // 0x2bb304: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb308:
    // 0x2bb308: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bb30c:
    if (ctx->pc == 0x2BB30Cu) {
        ctx->pc = 0x2BB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB308u;
        // 0x2bb30c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB310u;
        goto label_2bb310;
    }
    ctx->pc = 0x2BB308u;
    {
        const bool branch_taken_0x2bb308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb308) {
            ctx->pc = 0x2BB30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB308u;
            // 0x2bb30c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB310u;
            goto label_2bb310;
        }
    }
    ctx->pc = 0x2BB310u;
label_2bb310:
    // 0x2bb310: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2bb314:
    // 0x2bb314: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bb314u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bb318:
    // 0x2bb318: 0x2010  mfhi        $a0
    ctx->pc = 0x2bb318u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bb31c:
    // 0x2bb31c: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
label_2bb320:
    if (ctx->pc == 0x2BB320u) {
        ctx->pc = 0x2BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB31Cu;
        // 0x2bb320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB324u;
        goto label_2bb324;
    }
    ctx->pc = 0x2BB31Cu;
    {
        const bool branch_taken_0x2bb31c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB31Cu;
        // 0x2bb320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb31c) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB324u;
label_2bb324:
    // 0x2bb324: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb328:
    // 0x2bb328: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bb328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb32c:
    // 0x2bb32c: 0xc0a33f8  jal         func_28CFE0
label_2bb330:
    if (ctx->pc == 0x2BB330u) {
        ctx->pc = 0x2BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB32Cu;
        // 0x2bb330: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB334u;
        goto label_2bb334;
    }
    ctx->pc = 0x2BB32Cu;
    SET_GPR_U32(ctx, 31, 0x2BB334u);
    ctx->pc = 0x2BB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB32Cu;
    // 0x2bb330: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BB32Cu, 0x2BB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB334u;
label_2bb334:
    // 0x2bb334: 0xc0a41a6  jal         func_290698
label_2bb338:
    if (ctx->pc == 0x2BB338u) {
        ctx->pc = 0x2BB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB334u;
        // 0x2bb338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB33Cu;
        goto label_2bb33c;
    }
    ctx->pc = 0x2BB334u;
    SET_GPR_U32(ctx, 31, 0x2BB33Cu);
    ctx->pc = 0x2BB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB334u;
    // 0x2bb338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290698u, 0x2BB334u, 0x2BB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB33Cu;
label_2bb33c:
    // 0x2bb33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb340:
    // 0x2bb340: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_2bb344:
    if (ctx->pc == 0x2BB344u) {
        ctx->pc = 0x2BB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB340u;
        // 0x2bb344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB348u;
        goto label_2bb348;
    }
    ctx->pc = 0x2BB340u;
    {
        const bool branch_taken_0x2bb340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB340u;
        // 0x2bb344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb340) {
            ctx->pc = 0x2BB3A4u;
            goto label_2bb3a4;
        }
    }
    ctx->pc = 0x2BB348u;
label_2bb348:
    // 0x2bb348: 0xc0a367c  jal         func_28D9F0
label_2bb34c:
    if (ctx->pc == 0x2BB34Cu) {
        ctx->pc = 0x2BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB348u;
        // 0x2bb34c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB350u;
        goto label_2bb350;
    }
    ctx->pc = 0x2BB348u;
    SET_GPR_U32(ctx, 31, 0x2BB350u);
    ctx->pc = 0x2BB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB348u;
    // 0x2bb34c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BB348u, 0x2BB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB350u;
label_2bb350:
    // 0x2bb350: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bb350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb354:
    // 0x2bb354: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_2bb358:
    if (ctx->pc == 0x2BB358u) {
        ctx->pc = 0x2BB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB354u;
        // 0x2bb358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB35Cu;
        goto label_2bb35c;
    }
    ctx->pc = 0x2BB354u;
    {
        const bool branch_taken_0x2bb354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB354u;
        // 0x2bb358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb354) {
            ctx->pc = 0x2BB384u;
            goto label_2bb384;
        }
    }
    ctx->pc = 0x2BB35Cu;
label_2bb35c:
    // 0x2bb35c: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x2bb35cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2bb360:
    // 0x2bb360: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2bb364:
    // 0x2bb364: 0xc0884f6  jal         func_2213D8
label_2bb368:
    if (ctx->pc == 0x2BB368u) {
        ctx->pc = 0x2BB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB364u;
        // 0x2bb368: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB36Cu;
        goto label_2bb36c;
    }
    ctx->pc = 0x2BB364u;
    SET_GPR_U32(ctx, 31, 0x2BB36Cu);
    ctx->pc = 0x2BB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB364u;
    // 0x2bb368: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BB364u, 0x2BB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB36Cu;
label_2bb36c:
    // 0x2bb36c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bb36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb370:
    // 0x2bb370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bb370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb374:
    // 0x2bb374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb378:
    // 0x2bb378: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bb378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bb37c:
    // 0x2bb37c: 0xc0bf800  jal         func_2FE000
label_2bb380:
    if (ctx->pc == 0x2BB380u) {
        ctx->pc = 0x2BB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB37Cu;
        // 0x2bb380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB384u;
        goto label_2bb384;
    }
    ctx->pc = 0x2BB37Cu;
    SET_GPR_U32(ctx, 31, 0x2BB384u);
    ctx->pc = 0x2BB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB37Cu;
    // 0x2bb380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BB37Cu, 0x2BB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB384u;
label_2bb384:
    // 0x2bb384: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb388:
    // 0x2bb388: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bb388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb38c:
    // 0x2bb38c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bb38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2bb390:
    // 0x2bb390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bb390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bb394:
    // 0x2bb394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb398:
    // 0x2bb398: 0xc0a3892  jal         func_28E248
label_2bb39c:
    if (ctx->pc == 0x2BB39Cu) {
        ctx->pc = 0x2BB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB398u;
        // 0x2bb39c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3A0u;
        goto label_2bb3a0;
    }
    ctx->pc = 0x2BB398u;
    SET_GPR_U32(ctx, 31, 0x2BB3A0u);
    ctx->pc = 0x2BB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB398u;
    // 0x2bb39c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2BB398u, 0x2BB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3A0u;
label_2bb3a0:
    // 0x2bb3a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3a4:
    // 0x2bb3a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2bb3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bb3a8:
    // 0x2bb3a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2bb3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bb3ac:
    // 0x2bb3ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2bb3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bb3b0:
    // 0x2bb3b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bb3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb3b4:
    // 0x2bb3b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2bb3b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb3b8:
    // 0x2bb3b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2bb3b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb3bc:
    // 0x2bb3bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb3c0:
    // 0x2bb3c0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2bb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bb3c4:
    // 0x2bb3c4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2bb3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bb3c8:
    // 0x2bb3c8: 0x3e00008  jr          $ra
label_2bb3cc:
    if (ctx->pc == 0x2BB3CCu) {
        ctx->pc = 0x2BB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C8u;
        // 0x2bb3cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3D0u;
        goto label_fallthrough_0x2bb3c8;
    }
    ctx->pc = 0x2BB3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C8u;
        // 0x2bb3cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bb3c8:
    ctx->pc = 0x2BB3D0u;
}
