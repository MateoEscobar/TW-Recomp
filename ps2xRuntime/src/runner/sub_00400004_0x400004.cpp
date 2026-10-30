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

// Function: sub_00400004
// Address: 0x400004 - 0x400400
void sub_00400004_0x400004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400004_0x400004");
#endif

    switch (ctx->pc) {
        case 0x400004u: goto label_400004;
        case 0x400008u: goto label_400008;
        case 0x40000cu: goto label_40000c;
        case 0x400010u: goto label_400010;
        case 0x400014u: goto label_400014;
        case 0x400018u: goto label_400018;
        case 0x40001cu: goto label_40001c;
        case 0x400020u: goto label_400020;
        case 0x400024u: goto label_400024;
        case 0x400028u: goto label_400028;
        case 0x40002cu: goto label_40002c;
        case 0x400030u: goto label_400030;
        case 0x400034u: goto label_400034;
        case 0x400038u: goto label_400038;
        case 0x40003cu: goto label_40003c;
        case 0x400040u: goto label_400040;
        case 0x400044u: goto label_400044;
        case 0x400048u: goto label_400048;
        case 0x40004cu: goto label_40004c;
        case 0x400050u: goto label_400050;
        case 0x400054u: goto label_400054;
        case 0x400058u: goto label_400058;
        case 0x40005cu: goto label_40005c;
        case 0x400060u: goto label_400060;
        case 0x400064u: goto label_400064;
        case 0x400068u: goto label_400068;
        case 0x40006cu: goto label_40006c;
        case 0x400070u: goto label_400070;
        case 0x400074u: goto label_400074;
        case 0x400078u: goto label_400078;
        case 0x40007cu: goto label_40007c;
        case 0x400080u: goto label_400080;
        case 0x400084u: goto label_400084;
        case 0x400088u: goto label_400088;
        case 0x40008cu: goto label_40008c;
        case 0x400090u: goto label_400090;
        case 0x400094u: goto label_400094;
        case 0x400098u: goto label_400098;
        case 0x40009cu: goto label_40009c;
        case 0x4000a0u: goto label_4000a0;
        case 0x4000a4u: goto label_4000a4;
        case 0x4000a8u: goto label_4000a8;
        case 0x4000acu: goto label_4000ac;
        case 0x4000b0u: goto label_4000b0;
        case 0x4000b4u: goto label_4000b4;
        case 0x4000b8u: goto label_4000b8;
        case 0x4000bcu: goto label_4000bc;
        case 0x4000c0u: goto label_4000c0;
        case 0x4000c4u: goto label_4000c4;
        case 0x4000c8u: goto label_4000c8;
        case 0x4000ccu: goto label_4000cc;
        case 0x4000d0u: goto label_4000d0;
        case 0x4000d4u: goto label_4000d4;
        case 0x4000d8u: goto label_4000d8;
        case 0x4000dcu: goto label_4000dc;
        case 0x4000e0u: goto label_4000e0;
        case 0x4000e4u: goto label_4000e4;
        case 0x4000e8u: goto label_4000e8;
        case 0x4000ecu: goto label_4000ec;
        case 0x4000f0u: goto label_4000f0;
        case 0x4000f4u: goto label_4000f4;
        case 0x4000f8u: goto label_4000f8;
        case 0x4000fcu: goto label_4000fc;
        case 0x400100u: goto label_400100;
        case 0x400104u: goto label_400104;
        case 0x400108u: goto label_400108;
        case 0x40010cu: goto label_40010c;
        case 0x400110u: goto label_400110;
        case 0x400114u: goto label_400114;
        case 0x400118u: goto label_400118;
        case 0x40011cu: goto label_40011c;
        case 0x400120u: goto label_400120;
        case 0x400124u: goto label_400124;
        case 0x400128u: goto label_400128;
        case 0x40012cu: goto label_40012c;
        case 0x400130u: goto label_400130;
        case 0x400134u: goto label_400134;
        case 0x400138u: goto label_400138;
        case 0x40013cu: goto label_40013c;
        case 0x400140u: goto label_400140;
        case 0x400144u: goto label_400144;
        case 0x400148u: goto label_400148;
        case 0x40014cu: goto label_40014c;
        case 0x400150u: goto label_400150;
        case 0x400154u: goto label_400154;
        case 0x400158u: goto label_400158;
        case 0x40015cu: goto label_40015c;
        case 0x400160u: goto label_400160;
        case 0x400164u: goto label_400164;
        case 0x400168u: goto label_400168;
        case 0x40016cu: goto label_40016c;
        case 0x400170u: goto label_400170;
        case 0x400174u: goto label_400174;
        case 0x400178u: goto label_400178;
        case 0x40017cu: goto label_40017c;
        case 0x400180u: goto label_400180;
        case 0x400184u: goto label_400184;
        case 0x400188u: goto label_400188;
        case 0x40018cu: goto label_40018c;
        case 0x400190u: goto label_400190;
        case 0x400194u: goto label_400194;
        case 0x400198u: goto label_400198;
        case 0x40019cu: goto label_40019c;
        case 0x4001a0u: goto label_4001a0;
        case 0x4001a4u: goto label_4001a4;
        case 0x4001a8u: goto label_4001a8;
        case 0x4001acu: goto label_4001ac;
        case 0x4001b0u: goto label_4001b0;
        case 0x4001b4u: goto label_4001b4;
        case 0x4001b8u: goto label_4001b8;
        case 0x4001bcu: goto label_4001bc;
        case 0x4001c0u: goto label_4001c0;
        case 0x4001c4u: goto label_4001c4;
        case 0x4001c8u: goto label_4001c8;
        case 0x4001ccu: goto label_4001cc;
        case 0x4001d0u: goto label_4001d0;
        case 0x4001d4u: goto label_4001d4;
        case 0x4001d8u: goto label_4001d8;
        case 0x4001dcu: goto label_4001dc;
        case 0x4001e0u: goto label_4001e0;
        case 0x4001e4u: goto label_4001e4;
        case 0x4001e8u: goto label_4001e8;
        case 0x4001ecu: goto label_4001ec;
        case 0x4001f0u: goto label_4001f0;
        case 0x4001f4u: goto label_4001f4;
        case 0x4001f8u: goto label_4001f8;
        case 0x4001fcu: goto label_4001fc;
        case 0x400200u: goto label_400200;
        case 0x400204u: goto label_400204;
        case 0x400208u: goto label_400208;
        case 0x40020cu: goto label_40020c;
        case 0x400210u: goto label_400210;
        case 0x400214u: goto label_400214;
        case 0x400218u: goto label_400218;
        case 0x40021cu: goto label_40021c;
        case 0x400220u: goto label_400220;
        case 0x400224u: goto label_400224;
        case 0x400228u: goto label_400228;
        case 0x40022cu: goto label_40022c;
        case 0x400230u: goto label_400230;
        case 0x400234u: goto label_400234;
        case 0x400238u: goto label_400238;
        case 0x40023cu: goto label_40023c;
        case 0x400240u: goto label_400240;
        case 0x400244u: goto label_400244;
        case 0x400248u: goto label_400248;
        case 0x40024cu: goto label_40024c;
        case 0x400250u: goto label_400250;
        case 0x400254u: goto label_400254;
        case 0x400258u: goto label_400258;
        case 0x40025cu: goto label_40025c;
        case 0x400260u: goto label_400260;
        case 0x400264u: goto label_400264;
        case 0x400268u: goto label_400268;
        case 0x40026cu: goto label_40026c;
        case 0x400270u: goto label_400270;
        case 0x400274u: goto label_400274;
        case 0x400278u: goto label_400278;
        case 0x40027cu: goto label_40027c;
        case 0x400280u: goto label_400280;
        case 0x400284u: goto label_400284;
        case 0x400288u: goto label_400288;
        case 0x40028cu: goto label_40028c;
        case 0x400290u: goto label_400290;
        case 0x400294u: goto label_400294;
        case 0x400298u: goto label_400298;
        case 0x40029cu: goto label_40029c;
        case 0x4002a0u: goto label_4002a0;
        case 0x4002a4u: goto label_4002a4;
        case 0x4002a8u: goto label_4002a8;
        case 0x4002acu: goto label_4002ac;
        case 0x4002b0u: goto label_4002b0;
        case 0x4002b4u: goto label_4002b4;
        case 0x4002b8u: goto label_4002b8;
        case 0x4002bcu: goto label_4002bc;
        case 0x4002c0u: goto label_4002c0;
        case 0x4002c4u: goto label_4002c4;
        case 0x4002c8u: goto label_4002c8;
        case 0x4002ccu: goto label_4002cc;
        case 0x4002d0u: goto label_4002d0;
        case 0x4002d4u: goto label_4002d4;
        case 0x4002d8u: goto label_4002d8;
        case 0x4002dcu: goto label_4002dc;
        case 0x4002e0u: goto label_4002e0;
        case 0x4002e4u: goto label_4002e4;
        case 0x4002e8u: goto label_4002e8;
        case 0x4002ecu: goto label_4002ec;
        case 0x4002f0u: goto label_4002f0;
        case 0x4002f4u: goto label_4002f4;
        case 0x4002f8u: goto label_4002f8;
        case 0x4002fcu: goto label_4002fc;
        case 0x400300u: goto label_400300;
        case 0x400304u: goto label_400304;
        case 0x400308u: goto label_400308;
        case 0x40030cu: goto label_40030c;
        case 0x400310u: goto label_400310;
        case 0x400314u: goto label_400314;
        case 0x400318u: goto label_400318;
        case 0x40031cu: goto label_40031c;
        case 0x400320u: goto label_400320;
        case 0x400324u: goto label_400324;
        case 0x400328u: goto label_400328;
        case 0x40032cu: goto label_40032c;
        case 0x400330u: goto label_400330;
        case 0x400334u: goto label_400334;
        case 0x400338u: goto label_400338;
        case 0x40033cu: goto label_40033c;
        case 0x400340u: goto label_400340;
        case 0x400344u: goto label_400344;
        case 0x400348u: goto label_400348;
        case 0x40034cu: goto label_40034c;
        case 0x400350u: goto label_400350;
        case 0x400354u: goto label_400354;
        case 0x400358u: goto label_400358;
        case 0x40035cu: goto label_40035c;
        case 0x400360u: goto label_400360;
        case 0x400364u: goto label_400364;
        case 0x400368u: goto label_400368;
        case 0x40036cu: goto label_40036c;
        case 0x400370u: goto label_400370;
        case 0x400374u: goto label_400374;
        case 0x400378u: goto label_400378;
        case 0x40037cu: goto label_40037c;
        case 0x400380u: goto label_400380;
        case 0x400384u: goto label_400384;
        case 0x400388u: goto label_400388;
        case 0x40038cu: goto label_40038c;
        case 0x400390u: goto label_400390;
        case 0x400394u: goto label_400394;
        case 0x400398u: goto label_400398;
        case 0x40039cu: goto label_40039c;
        case 0x4003a0u: goto label_4003a0;
        case 0x4003a4u: goto label_4003a4;
        case 0x4003a8u: goto label_4003a8;
        case 0x4003acu: goto label_4003ac;
        case 0x4003b0u: goto label_4003b0;
        case 0x4003b4u: goto label_4003b4;
        case 0x4003b8u: goto label_4003b8;
        case 0x4003bcu: goto label_4003bc;
        case 0x4003c0u: goto label_4003c0;
        case 0x4003c4u: goto label_4003c4;
        case 0x4003c8u: goto label_4003c8;
        case 0x4003ccu: goto label_4003cc;
        case 0x4003d0u: goto label_4003d0;
        case 0x4003d4u: goto label_4003d4;
        case 0x4003d8u: goto label_4003d8;
        case 0x4003dcu: goto label_4003dc;
        case 0x4003e0u: goto label_4003e0;
        case 0x4003e4u: goto label_4003e4;
        case 0x4003e8u: goto label_4003e8;
        case 0x4003ecu: goto label_4003ec;
        case 0x4003f0u: goto label_4003f0;
        case 0x4003f4u: goto label_4003f4;
        case 0x4003f8u: goto label_4003f8;
        case 0x4003fcu: goto label_4003fc;
        default: break;
    }

    ctx->pc = 0x400004u;

label_400004:
    // 0x400004: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x400004u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_400008:
    // 0x400008: 0x4a0003bf  vwaitq
    ctx->pc = 0x400008u;
    // VWAITQ (Q already resolved in this runtime)
label_40000c:
    // 0x40000c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x40000cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_400010:
    // 0x400010: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x400010u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_400014:
    // 0x400014: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x400014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_400018:
    // 0x400018: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x400018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_40001c:
    // 0x40001c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x40001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_400020:
    // 0x400020: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x400020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400024:
    // 0x400024: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x400024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_400028:
    // 0x400028: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x400028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40002c:
    // 0x40002c: 0x40f809  jalr        $v0
label_400030:
    if (ctx->pc == 0x400030u) {
        ctx->pc = 0x400030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40002Cu;
        // 0x400030: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400034u;
        goto label_400034;
    }
    ctx->pc = 0x40002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x400034u);
        ctx->pc = 0x400030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40002Cu;
        // 0x400030: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40002Cu, 0x400034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x400034u;
label_400034:
    // 0x400034: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x400034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_400038:
    // 0x400038: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x400038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_40003c:
    // 0x40003c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_400040:
    if (ctx->pc == 0x400040u) {
        ctx->pc = 0x400040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40003Cu;
        // 0x400040: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400044u;
        goto label_400044;
    }
    ctx->pc = 0x40003Cu;
    {
        const bool branch_taken_0x40003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40003Cu;
        // 0x400040: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40003c) {
            ctx->pc = 0x400060u;
            goto label_400060;
        }
    }
    ctx->pc = 0x400044u;
label_400044:
    // 0x400044: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x400044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_400048:
    // 0x400048: 0xc136b18  jal         func_4DAC60
label_40004c:
    if (ctx->pc == 0x40004Cu) {
        ctx->pc = 0x40004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400048u;
        // 0x40004c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400050u;
        goto label_400050;
    }
    ctx->pc = 0x400048u;
    SET_GPR_U32(ctx, 31, 0x400050u);
    ctx->pc = 0x40004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400048u;
    // 0x40004c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x400048u, 0x400050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400050u;
label_400050:
    // 0x400050: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x400050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_400054:
    // 0x400054: 0x8fa30530  lw          $v1, 0x530($sp)
    ctx->pc = 0x400054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400058:
    // 0x400058: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x400058u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_40005c:
    // 0x40005c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x40005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_400060:
    // 0x400060: 0x8fa40530  lw          $a0, 0x530($sp)
    ctx->pc = 0x400060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400064:
    // 0x400064: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x400064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_400068:
    // 0x400068: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x400068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_40006c:
    // 0x40006c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x40006cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_400070:
    // 0x400070: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x400070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_400074:
    // 0x400074: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x400074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_400078:
    // 0x400078: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x400078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_40007c:
    // 0x40007c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x40007cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400080:
    // 0x400080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x400080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_400084:
    // 0x400084: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x400084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_400088:
    // 0x400088: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x400088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_40008c:
    // 0x40008c: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x40008cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_400090:
    // 0x400090: 0x8fa30530  lw          $v1, 0x530($sp)
    ctx->pc = 0x400090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400094:
    // 0x400094: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x400094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_400098:
    // 0x400098: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x400098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40009c:
    // 0x40009c: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x40009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_4000a0:
    // 0x4000a0: 0xac6400cc  sw          $a0, 0xCC($v1)
    ctx->pc = 0x4000a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
label_4000a4:
    // 0x4000a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4000a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4000a8:
    // 0x4000a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4000a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4000ac:
    // 0x4000ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4000acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4000b0:
    // 0x4000b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4000b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4000b4:
    // 0x4000b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4000b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4000b8:
    // 0x4000b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x4000b8u;
    // VWAITQ (Q already resolved in this runtime)
label_4000bc:
    // 0x4000bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4000bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4000c0:
    // 0x4000c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x4000c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_4000c4:
    // 0x4000c4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x4000c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_4000c8:
    // 0x4000c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4000c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4000cc:
    // 0x4000cc: 0xac660054  sw          $a2, 0x54($v1)
    ctx->pc = 0x4000ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 6));
label_4000d0:
    // 0x4000d0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x4000d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_4000d4:
    // 0x4000d4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x4000d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_4000d8:
    // 0x4000d8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x4000d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_4000dc:
    // 0x4000dc: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x4000dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_4000e0:
    // 0x4000e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4000e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_4000e4:
    // 0x4000e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4000e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4000e8:
    // 0x4000e8: 0xc136b24  jal         func_4DAC90
label_4000ec:
    if (ctx->pc == 0x4000ECu) {
        ctx->pc = 0x4000ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4000E8u;
        // 0x4000ec: 0x8c7e00c4  lw          $fp, 0xC4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4000F0u;
        goto label_4000f0;
    }
    ctx->pc = 0x4000E8u;
    SET_GPR_U32(ctx, 31, 0x4000F0u);
    ctx->pc = 0x4000ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4000E8u;
    // 0x4000ec: 0x8c7e00c4  lw          $fp, 0xC4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4000E8u, 0x4000F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4000F0u;
label_4000f0:
    // 0x4000f0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x4000f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4000f4:
    // 0x4000f4: 0x3c0210ca  lui         $v0, 0x10CA
    ctx->pc = 0x4000f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4298 << 16));
label_4000f8:
    // 0x4000f8: 0x344224ac  ori         $v0, $v0, 0x24AC
    ctx->pc = 0x4000f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9388);
label_4000fc:
    // 0x4000fc: 0x17c20014  bne         $fp, $v0, . + 4 + (0x14 << 2)
label_400100:
    if (ctx->pc == 0x400100u) {
        ctx->pc = 0x400100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4000FCu;
        // 0x400100: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400104u;
        goto label_400104;
    }
    ctx->pc = 0x4000FCu;
    {
        const bool branch_taken_0x4000fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4000FCu;
        // 0x400100: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4000fc) {
            ctx->pc = 0x400150u;
            goto label_400150;
        }
    }
    ctx->pc = 0x400104u;
label_400104:
    // 0x400104: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x400104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_400108:
    // 0x400108: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x400108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_40010c:
    // 0x40010c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x40010cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_400110:
    // 0x400110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400114:
    // 0x400114: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x400114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_400118:
    // 0x400118: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40011c:
    // 0x40011c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40011cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400120:
    // 0x400120: 0x34c68090  ori         $a2, $a2, 0x8090
    ctx->pc = 0x400120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32912);
label_400124:
    // 0x400124: 0xc0f1658  jal         func_3C5960
label_400128:
    if (ctx->pc == 0x400128u) {
        ctx->pc = 0x400128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400124u;
        // 0x400128: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40012Cu;
        goto label_40012c;
    }
    ctx->pc = 0x400124u;
    SET_GPR_U32(ctx, 31, 0x40012Cu);
    ctx->pc = 0x400128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400124u;
    // 0x400128: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x400124u, 0x40012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40012Cu;
label_40012c:
    // 0x40012c: 0x3c069090  lui         $a2, 0x9090
    ctx->pc = 0x40012cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37008 << 16));
label_400130:
    // 0x400130: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x400130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_400134:
    // 0x400134: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x400134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_400138:
    // 0x400138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40013c:
    // 0x40013c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400140:
    // 0x400140: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400144:
    // 0x400144: 0x34c69090  ori         $a2, $a2, 0x9090
    ctx->pc = 0x400144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37008);
label_400148:
    // 0x400148: 0xc0f1658  jal         func_3C5960
label_40014c:
    if (ctx->pc == 0x40014Cu) {
        ctx->pc = 0x40014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400148u;
        // 0x40014c: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400150u;
        goto label_400150;
    }
    ctx->pc = 0x400148u;
    SET_GPR_U32(ctx, 31, 0x400150u);
    ctx->pc = 0x40014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400148u;
    // 0x40014c: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x400148u, 0x400150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400150u;
label_400150:
    // 0x400150: 0x3c024763  lui         $v0, 0x4763
    ctx->pc = 0x400150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18275 << 16));
label_400154:
    // 0x400154: 0x3442527e  ori         $v0, $v0, 0x527E
    ctx->pc = 0x400154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21118);
label_400158:
    // 0x400158: 0x17c20006  bne         $fp, $v0, . + 4 + (0x6 << 2)
label_40015c:
    if (ctx->pc == 0x40015Cu) {
        ctx->pc = 0x40015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400158u;
        // 0x40015c: 0x3c02523a  lui         $v0, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21050 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400160u;
        goto label_400160;
    }
    ctx->pc = 0x400158u;
    {
        const bool branch_taken_0x400158 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x40015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400158u;
        // 0x40015c: 0x3c02523a  lui         $v0, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21050 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400158) {
            ctx->pc = 0x400174u;
            goto label_400174;
        }
    }
    ctx->pc = 0x400160u;
label_400160:
    // 0x400160: 0x8fa60530  lw          $a2, 0x530($sp)
    ctx->pc = 0x400160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_400164:
    // 0x400164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400168:
    // 0x400168: 0xc0e9bda  jal         func_3A6F68
label_40016c:
    if (ctx->pc == 0x40016Cu) {
        ctx->pc = 0x40016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400168u;
        // 0x40016c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400170u;
        goto label_400170;
    }
    ctx->pc = 0x400168u;
    SET_GPR_U32(ctx, 31, 0x400170u);
    ctx->pc = 0x40016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400168u;
    // 0x40016c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6F68u, 0x400168u, 0x400170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400170u;
label_400170:
    // 0x400170: 0x3c02523a  lui         $v0, 0x523A
    ctx->pc = 0x400170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21050 << 16));
label_400174:
    // 0x400174: 0x3442136e  ori         $v0, $v0, 0x136E
    ctx->pc = 0x400174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4974);
label_400178:
    // 0x400178: 0x17c20063  bne         $fp, $v0, . + 4 + (0x63 << 2)
label_40017c:
    if (ctx->pc == 0x40017Cu) {
        ctx->pc = 0x40017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400178u;
        // 0x40017c: 0x3c02232e  lui         $v0, 0x232E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9006 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400180u;
        goto label_400180;
    }
    ctx->pc = 0x400178u;
    {
        const bool branch_taken_0x400178 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x40017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400178u;
        // 0x40017c: 0x3c02232e  lui         $v0, 0x232E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9006 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400178) {
            ctx->pc = 0x400308u;
            goto label_400308;
        }
    }
    ctx->pc = 0x400180u;
label_400180:
    // 0x400180: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x400180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_400184:
    // 0x400184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x400184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_400188:
    // 0x400188: 0x8c4471a0  lw          $a0, 0x71A0($v0)
    ctx->pc = 0x400188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
label_40018c:
    // 0x40018c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x40018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400190:
    // 0x400190: 0xc05c2ca  jal         func_170B28
label_400194:
    if (ctx->pc == 0x400194u) {
        ctx->pc = 0x400194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400190u;
        // 0x400194: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400198u;
        goto label_400198;
    }
    ctx->pc = 0x400190u;
    SET_GPR_U32(ctx, 31, 0x400198u);
    ctx->pc = 0x400194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400190u;
    // 0x400194: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B28u, 0x400190u, 0x400198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400198u;
label_400198:
    // 0x400198: 0x10000051  b           . + 4 + (0x51 << 2)
label_40019c:
    if (ctx->pc == 0x40019Cu) {
        ctx->pc = 0x40019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400198u;
        // 0x40019c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4001A0u;
        goto label_4001a0;
    }
    ctx->pc = 0x400198u;
    {
        const bool branch_taken_0x400198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400198u;
        // 0x40019c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400198) {
            ctx->pc = 0x4002E0u;
            goto label_4002e0;
        }
    }
    ctx->pc = 0x4001A0u;
label_4001a0:
    // 0x4001a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4001a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4001a4:
    // 0x4001a4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x4001a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_4001a8:
    // 0x4001a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4001a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4001ac:
    // 0x4001ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4001acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_4001b0:
    // 0x4001b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4001b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4001b4:
    // 0x4001b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4001b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4001b8:
    // 0x4001b8: 0xafa50540  sw          $a1, 0x540($sp)
    ctx->pc = 0x4001b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 5));
label_4001bc:
    // 0x4001bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4001bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4001c0:
    // 0x4001c0: 0xc0cd518  jal         func_335460
label_4001c4:
    if (ctx->pc == 0x4001C4u) {
        ctx->pc = 0x4001C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4001C0u;
        // 0x4001c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4001C8u;
        goto label_4001c8;
    }
    ctx->pc = 0x4001C0u;
    SET_GPR_U32(ctx, 31, 0x4001C8u);
    ctx->pc = 0x4001C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4001C0u;
    // 0x4001c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4001C0u, 0x4001C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4001C8u;
label_4001c8:
    // 0x4001c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4001c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4001cc:
    // 0x4001cc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4001ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_4001d0:
    // 0x4001d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4001d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4001d4:
    // 0x4001d4: 0xc0cd518  jal         func_335460
label_4001d8:
    if (ctx->pc == 0x4001D8u) {
        ctx->pc = 0x4001D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4001D4u;
        // 0x4001d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4001DCu;
        goto label_4001dc;
    }
    ctx->pc = 0x4001D4u;
    SET_GPR_U32(ctx, 31, 0x4001DCu);
    ctx->pc = 0x4001D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4001D4u;
    // 0x4001d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4001D4u, 0x4001DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4001DCu;
label_4001dc:
    // 0x4001dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4001dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4001e0:
    // 0x4001e0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4001e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4001e4:
    // 0x4001e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4001e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4001e8:
    // 0x4001e8: 0xc0cd518  jal         func_335460
label_4001ec:
    if (ctx->pc == 0x4001ECu) {
        ctx->pc = 0x4001ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4001E8u;
        // 0x4001ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4001F0u;
        goto label_4001f0;
    }
    ctx->pc = 0x4001E8u;
    SET_GPR_U32(ctx, 31, 0x4001F0u);
    ctx->pc = 0x4001ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4001E8u;
    // 0x4001ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4001E8u, 0x4001F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4001F0u;
label_4001f0:
    // 0x4001f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4001f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4001f4:
    // 0x4001f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4001f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4001f8:
    // 0x4001f8: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x4001f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4001fc:
    // 0x4001fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4001fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_400200:
    // 0x400200: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x400200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_400204:
    // 0x400204: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x400204u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_400208:
    // 0x400208: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x400208u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_40020c:
    // 0x40020c: 0xe7b60094  swc1        $f22, 0x94($sp)
    ctx->pc = 0x40020cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_400210:
    // 0x400210: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x400210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400214:
    // 0x400214: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x400214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_400218:
    // 0x400218: 0x27b704b0  addiu       $s7, $sp, 0x4B0
    ctx->pc = 0x400218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_40021c:
    // 0x40021c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x40021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_400220:
    // 0x400220: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x400220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_400224:
    // 0x400224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x400224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_400228:
    // 0x400228: 0x27b504c0  addiu       $s5, $sp, 0x4C0
    ctx->pc = 0x400228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_40022c:
    // 0x40022c: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x40022cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_400230:
    // 0x400230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400234:
    // 0x400234: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x400234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_400238:
    // 0x400238: 0x26737620  addiu       $s3, $s3, 0x7620
    ctx->pc = 0x400238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 30240));
label_40023c:
    // 0x40023c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x40023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_400240:
    // 0x400240: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x400240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_400244:
    // 0x400244: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400248:
    // 0x400248: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x400248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_40024c:
    // 0x40024c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x40024cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_400250:
    // 0x400250: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_400254:
    // 0x400254: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x400254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_400258:
    // 0x400258: 0xafa504c0  sw          $a1, 0x4C0($sp)
    ctx->pc = 0x400258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 5));
label_40025c:
    // 0x40025c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x40025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_400260:
    // 0x400260: 0xc0cd518  jal         func_335460
label_400264:
    if (ctx->pc == 0x400264u) {
        ctx->pc = 0x400264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400260u;
        // 0x400264: 0xe7a004b0  swc1        $f0, 0x4B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x400268u;
        goto label_400268;
    }
    ctx->pc = 0x400260u;
    SET_GPR_U32(ctx, 31, 0x400268u);
    ctx->pc = 0x400264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400260u;
    // 0x400264: 0xe7a004b0  swc1        $f0, 0x4B0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400260u, 0x400268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400268u;
label_400268:
    // 0x400268: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x400268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_40026c:
    // 0x40026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400270:
    // 0x400270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x400270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_400274:
    // 0x400274: 0x27b104d0  addiu       $s1, $sp, 0x4D0
    ctx->pc = 0x400274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_400278:
    // 0x400278: 0x27b204e0  addiu       $s2, $sp, 0x4E0
    ctx->pc = 0x400278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_40027c:
    // 0x40027c: 0xe7a004d0  swc1        $f0, 0x4D0($sp)
    ctx->pc = 0x40027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_400280:
    // 0x400280: 0xafa204e0  sw          $v0, 0x4E0($sp)
    ctx->pc = 0x400280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 2));
label_400284:
    // 0x400284: 0xc0cd4ee  jal         func_3353B8
label_400288:
    if (ctx->pc == 0x400288u) {
        ctx->pc = 0x400288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400284u;
        // 0x400288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40028Cu;
        goto label_40028c;
    }
    ctx->pc = 0x400284u;
    SET_GPR_U32(ctx, 31, 0x40028Cu);
    ctx->pc = 0x400288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400284u;
    // 0x400288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x400284u, 0x40028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40028Cu;
label_40028c:
    // 0x40028c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x40028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_400290:
    // 0x400290: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x400290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_400294:
    // 0x400294: 0x34630036  ori         $v1, $v1, 0x36
    ctx->pc = 0x400294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54);
label_400298:
    // 0x400298: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x400298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40029c:
    // 0x40029c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4002a0:
    // 0x4002a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4002a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_4002a4:
    // 0x4002a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4002a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4002a8:
    // 0x4002a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4002a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4002ac:
    // 0x4002ac: 0xafa204f0  sw          $v0, 0x4F0($sp)
    ctx->pc = 0x4002acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 2));
label_4002b0:
    // 0x4002b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4002b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4002b4:
    // 0x4002b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4002b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4002b8:
    // 0x4002b8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4002b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4002bc:
    // 0x4002bc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4002bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4002c0:
    // 0x4002c0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x4002c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4002c4:
    // 0x4002c4: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x4002c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_4002c8:
    // 0x4002c8: 0xc0ea0d0  jal         func_3A8340
label_4002cc:
    if (ctx->pc == 0x4002CCu) {
        ctx->pc = 0x4002CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002C8u;
        // 0x4002cc: 0x27ab04f0  addiu       $t3, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4002D0u;
        goto label_4002d0;
    }
    ctx->pc = 0x4002C8u;
    SET_GPR_U32(ctx, 31, 0x4002D0u);
    ctx->pc = 0x4002CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4002C8u;
    // 0x4002cc: 0x27ab04f0  addiu       $t3, $sp, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x4002C8u, 0x4002D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4002D0u;
label_4002d0:
    // 0x4002d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4002d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4002d4:
    // 0x4002d4: 0xc0f15bc  jal         func_3C56F0
label_4002d8:
    if (ctx->pc == 0x4002D8u) {
        ctx->pc = 0x4002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002D4u;
        // 0x4002d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4002DCu;
        goto label_4002dc;
    }
    ctx->pc = 0x4002D4u;
    SET_GPR_U32(ctx, 31, 0x4002DCu);
    ctx->pc = 0x4002D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4002D4u;
    // 0x4002d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x4002D4u, 0x4002DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4002DCu;
label_4002dc:
    // 0x4002dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4002dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4002e0:
    // 0x4002e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4002e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4002e4:
    // 0x4002e4: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x4002e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_4002e8:
    // 0x4002e8: 0xc0cd4ee  jal         func_3353B8
label_4002ec:
    if (ctx->pc == 0x4002ECu) {
        ctx->pc = 0x4002ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002E8u;
        // 0x4002ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4002F0u;
        goto label_4002f0;
    }
    ctx->pc = 0x4002E8u;
    SET_GPR_U32(ctx, 31, 0x4002F0u);
    ctx->pc = 0x4002ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4002E8u;
    // 0x4002ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4002E8u, 0x4002F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4002F0u;
label_4002f0:
    // 0x4002f0: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x4002f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4002f4:
    // 0x4002f4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4002f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4002f8:
    // 0x4002f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4002f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4002fc:
    // 0x4002fc: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_400300:
    if (ctx->pc == 0x400300u) {
        ctx->pc = 0x400300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002FCu;
        // 0x400300: 0x8fa50540  lw          $a1, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400304u;
        goto label_400304;
    }
    ctx->pc = 0x4002FCu;
    {
        const bool branch_taken_0x4002fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4002FCu;
        // 0x400300: 0x8fa50540  lw          $a1, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4002fc) {
            ctx->pc = 0x4001A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4001a0;
        }
    }
    ctx->pc = 0x400304u;
label_400304:
    // 0x400304: 0x3c02232e  lui         $v0, 0x232E
    ctx->pc = 0x400304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9006 << 16));
label_400308:
    // 0x400308: 0x34429f88  ori         $v0, $v0, 0x9F88
    ctx->pc = 0x400308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40840);
label_40030c:
    // 0x40030c: 0x17c2001c  bne         $fp, $v0, . + 4 + (0x1C << 2)
label_400310:
    if (ctx->pc == 0x400310u) {
        ctx->pc = 0x400310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40030Cu;
        // 0x400310: 0x3c020b3f  lui         $v0, 0xB3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2879 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400314u;
        goto label_400314;
    }
    ctx->pc = 0x40030Cu;
    {
        const bool branch_taken_0x40030c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40030Cu;
        // 0x400310: 0x3c020b3f  lui         $v0, 0xB3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2879 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40030c) {
            ctx->pc = 0x400380u;
            goto label_400380;
        }
    }
    ctx->pc = 0x400314u;
label_400314:
    // 0x400314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x400314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_400318:
    // 0x400318: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40031c:
    // 0x40031c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_400320:
    // 0x400320: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x400320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_400324:
    // 0x400324: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_400328:
    // 0x400328: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x400328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40032c:
    // 0x40032c: 0xc0cd518  jal         func_335460
label_400330:
    if (ctx->pc == 0x400330u) {
        ctx->pc = 0x400330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40032Cu;
        // 0x400330: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400334u;
        goto label_400334;
    }
    ctx->pc = 0x40032Cu;
    SET_GPR_U32(ctx, 31, 0x400334u);
    ctx->pc = 0x400330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40032Cu;
    // 0x400330: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40032Cu, 0x400334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400334u;
label_400334:
    // 0x400334: 0x3c06cc42  lui         $a2, 0xCC42
    ctx->pc = 0x400334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52290 << 16));
label_400338:
    // 0x400338: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40033c:
    // 0x40033c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_400340:
    // 0x400340: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x400340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_400344:
    // 0x400344: 0xc0f1794  jal         func_3C5E50
label_400348:
    if (ctx->pc == 0x400348u) {
        ctx->pc = 0x400348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400344u;
        // 0x400348: 0x34c60040  ori         $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40034Cu;
        goto label_40034c;
    }
    ctx->pc = 0x400344u;
    SET_GPR_U32(ctx, 31, 0x40034Cu);
    ctx->pc = 0x400348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400344u;
    // 0x400348: 0x34c60040  ori         $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5E50u, 0x400344u, 0x40034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40034Cu;
label_40034c:
    // 0x40034c: 0x3c068041  lui         $a2, 0x8041
    ctx->pc = 0x40034cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32833 << 16));
label_400350:
    // 0x400350: 0x3c07ca41  lui         $a3, 0xCA41
    ctx->pc = 0x400350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51777 << 16));
label_400354:
    // 0x400354: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400358:
    // 0x400358: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40035c:
    // 0x40035c: 0x34c639ff  ori         $a2, $a2, 0x39FF
    ctx->pc = 0x40035cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14847);
label_400360:
    // 0x400360: 0x34e730ff  ori         $a3, $a3, 0x30FF
    ctx->pc = 0x400360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12543);
label_400364:
    // 0x400364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x400364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400368:
    // 0x400368: 0xc0e9978  jal         func_3A65E0
label_40036c:
    if (ctx->pc == 0x40036Cu) {
        ctx->pc = 0x40036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400368u;
        // 0x40036c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x400370u;
        goto label_400370;
    }
    ctx->pc = 0x400368u;
    SET_GPR_U32(ctx, 31, 0x400370u);
    ctx->pc = 0x40036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400368u;
    // 0x40036c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400368u, 0x400370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400370u;
label_400370:
    // 0x400370: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x400370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400374:
    // 0x400374: 0xc0f175c  jal         func_3C5D70
label_400378:
    if (ctx->pc == 0x400378u) {
        ctx->pc = 0x400378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400374u;
        // 0x400378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40037Cu;
        goto label_40037c;
    }
    ctx->pc = 0x400374u;
    SET_GPR_U32(ctx, 31, 0x40037Cu);
    ctx->pc = 0x400378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400374u;
    // 0x400378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5D70u, 0x400374u, 0x40037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40037Cu;
label_40037c:
    // 0x40037c: 0x3c020b3f  lui         $v0, 0xB3F
    ctx->pc = 0x40037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2879 << 16));
label_400380:
    // 0x400380: 0x3442cc03  ori         $v0, $v0, 0xCC03
    ctx->pc = 0x400380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52227);
label_400384:
    // 0x400384: 0x17c20009  bne         $fp, $v0, . + 4 + (0x9 << 2)
label_400388:
    if (ctx->pc == 0x400388u) {
        ctx->pc = 0x400388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400384u;
        // 0x400388: 0x3c066265  lui         $a2, 0x6265 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25189 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40038Cu;
        goto label_40038c;
    }
    ctx->pc = 0x400384u;
    {
        const bool branch_taken_0x400384 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400384u;
        // 0x400388: 0x3c066265  lui         $a2, 0x6265 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25189 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400384) {
            ctx->pc = 0x4003ACu;
            goto label_4003ac;
        }
    }
    ctx->pc = 0x40038Cu;
label_40038c:
    // 0x40038c: 0x3c079eb3  lui         $a3, 0x9EB3
    ctx->pc = 0x40038cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40627 << 16));
label_400390:
    // 0x400390: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x400390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_400394:
    // 0x400394: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_400398:
    // 0x400398: 0x34c662ff  ori         $a2, $a2, 0x62FF
    ctx->pc = 0x400398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25343);
label_40039c:
    // 0x40039c: 0x34e7b3ff  ori         $a3, $a3, 0xB3FF
    ctx->pc = 0x40039cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)46079);
label_4003a0:
    // 0x4003a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4003a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4003a4:
    // 0x4003a4: 0xc0e9978  jal         func_3A65E0
label_4003a8:
    if (ctx->pc == 0x4003A8u) {
        ctx->pc = 0x4003A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4003A4u;
        // 0x4003a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4003ACu;
        goto label_4003ac;
    }
    ctx->pc = 0x4003A4u;
    SET_GPR_U32(ctx, 31, 0x4003ACu);
    ctx->pc = 0x4003A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4003A4u;
    // 0x4003a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4003A4u, 0x4003ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4003ACu;
label_4003ac:
    // 0x4003ac: 0x3c02948f  lui         $v0, 0x948F
    ctx->pc = 0x4003acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38031 << 16));
label_4003b0:
    // 0x4003b0: 0x3442c58d  ori         $v0, $v0, 0xC58D
    ctx->pc = 0x4003b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50573);
label_4003b4:
    // 0x4003b4: 0x17c2007c  bne         $fp, $v0, . + 4 + (0x7C << 2)
label_4003b8:
    if (ctx->pc == 0x4003B8u) {
        ctx->pc = 0x4003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4003B4u;
        // 0x4003b8: 0x3c020d77  lui         $v0, 0xD77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3447 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4003BCu;
        goto label_4003bc;
    }
    ctx->pc = 0x4003B4u;
    {
        const bool branch_taken_0x4003b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4003B4u;
        // 0x4003b8: 0x3c020d77  lui         $v0, 0xD77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4003b4) {
            ctx->pc = 0x4005A8u;
            return;
        }
    }
    ctx->pc = 0x4003BCu;
label_4003bc:
    // 0x4003bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4003bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4003c0:
    // 0x4003c0: 0x3c068041  lui         $a2, 0x8041
    ctx->pc = 0x4003c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32833 << 16));
label_4003c4:
    // 0x4003c4: 0x3c07ca41  lui         $a3, 0xCA41
    ctx->pc = 0x4003c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51777 << 16));
label_4003c8:
    // 0x4003c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4003c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4003cc:
    // 0x4003cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4003ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4003d0:
    // 0x4003d0: 0x34c639ff  ori         $a2, $a2, 0x39FF
    ctx->pc = 0x4003d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14847);
label_4003d4:
    // 0x4003d4: 0x34e730ff  ori         $a3, $a3, 0x30FF
    ctx->pc = 0x4003d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12543);
label_4003d8:
    // 0x4003d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4003d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4003dc:
    // 0x4003dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4003dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4003e0:
    // 0x4003e0: 0xc0e9978  jal         func_3A65E0
label_4003e4:
    if (ctx->pc == 0x4003E4u) {
        ctx->pc = 0x4003E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4003E0u;
        // 0x4003e4: 0x3c121010  lui         $s2, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4003E8u;
        goto label_4003e8;
    }
    ctx->pc = 0x4003E0u;
    SET_GPR_U32(ctx, 31, 0x4003E8u);
    ctx->pc = 0x4003E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4003E0u;
    // 0x4003e4: 0x3c121010  lui         $s2, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4003E0u, 0x4003E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4003E8u;
label_4003e8:
    // 0x4003e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4003e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4003ec:
    // 0x4003ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4003ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4003f0:
    // 0x4003f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4003f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4003f4:
    // 0x4003f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4003f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4003f8:
    // 0x4003f8: 0x2451b8b8  addiu       $s1, $v0, -0x4748
    ctx->pc = 0x4003f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_4003fc:
    // 0x4003fc: 0x27a50490  addiu       $a1, $sp, 0x490
    ctx->pc = 0x4003fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    ctx->pc = 0x400400u;
}
