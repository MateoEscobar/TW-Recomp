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

// Function: sub_00274EE0
// Address: 0x274ee0 - 0x2752a0
void sub_00274EE0_0x274ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274EE0_0x274ee0");
#endif

    switch (ctx->pc) {
        case 0x274ee0u: goto label_274ee0;
        case 0x274ee4u: goto label_274ee4;
        case 0x274ee8u: goto label_274ee8;
        case 0x274eecu: goto label_274eec;
        case 0x274ef0u: goto label_274ef0;
        case 0x274ef4u: goto label_274ef4;
        case 0x274ef8u: goto label_274ef8;
        case 0x274efcu: goto label_274efc;
        case 0x274f00u: goto label_274f00;
        case 0x274f04u: goto label_274f04;
        case 0x274f08u: goto label_274f08;
        case 0x274f0cu: goto label_274f0c;
        case 0x274f10u: goto label_274f10;
        case 0x274f14u: goto label_274f14;
        case 0x274f18u: goto label_274f18;
        case 0x274f1cu: goto label_274f1c;
        case 0x274f20u: goto label_274f20;
        case 0x274f24u: goto label_274f24;
        case 0x274f28u: goto label_274f28;
        case 0x274f2cu: goto label_274f2c;
        case 0x274f30u: goto label_274f30;
        case 0x274f34u: goto label_274f34;
        case 0x274f38u: goto label_274f38;
        case 0x274f3cu: goto label_274f3c;
        case 0x274f40u: goto label_274f40;
        case 0x274f44u: goto label_274f44;
        case 0x274f48u: goto label_274f48;
        case 0x274f4cu: goto label_274f4c;
        case 0x274f50u: goto label_274f50;
        case 0x274f54u: goto label_274f54;
        case 0x274f58u: goto label_274f58;
        case 0x274f5cu: goto label_274f5c;
        case 0x274f60u: goto label_274f60;
        case 0x274f64u: goto label_274f64;
        case 0x274f68u: goto label_274f68;
        case 0x274f6cu: goto label_274f6c;
        case 0x274f70u: goto label_274f70;
        case 0x274f74u: goto label_274f74;
        case 0x274f78u: goto label_274f78;
        case 0x274f7cu: goto label_274f7c;
        case 0x274f80u: goto label_274f80;
        case 0x274f84u: goto label_274f84;
        case 0x274f88u: goto label_274f88;
        case 0x274f8cu: goto label_274f8c;
        case 0x274f90u: goto label_274f90;
        case 0x274f94u: goto label_274f94;
        case 0x274f98u: goto label_274f98;
        case 0x274f9cu: goto label_274f9c;
        case 0x274fa0u: goto label_274fa0;
        case 0x274fa4u: goto label_274fa4;
        case 0x274fa8u: goto label_274fa8;
        case 0x274facu: goto label_274fac;
        case 0x274fb0u: goto label_274fb0;
        case 0x274fb4u: goto label_274fb4;
        case 0x274fb8u: goto label_274fb8;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fc0u: goto label_274fc0;
        case 0x274fc4u: goto label_274fc4;
        case 0x274fc8u: goto label_274fc8;
        case 0x274fccu: goto label_274fcc;
        case 0x274fd0u: goto label_274fd0;
        case 0x274fd4u: goto label_274fd4;
        case 0x274fd8u: goto label_274fd8;
        case 0x274fdcu: goto label_274fdc;
        case 0x274fe0u: goto label_274fe0;
        case 0x274fe4u: goto label_274fe4;
        case 0x274fe8u: goto label_274fe8;
        case 0x274fecu: goto label_274fec;
        case 0x274ff0u: goto label_274ff0;
        case 0x274ff4u: goto label_274ff4;
        case 0x274ff8u: goto label_274ff8;
        case 0x274ffcu: goto label_274ffc;
        case 0x275000u: goto label_275000;
        case 0x275004u: goto label_275004;
        case 0x275008u: goto label_275008;
        case 0x27500cu: goto label_27500c;
        case 0x275010u: goto label_275010;
        case 0x275014u: goto label_275014;
        case 0x275018u: goto label_275018;
        case 0x27501cu: goto label_27501c;
        case 0x275020u: goto label_275020;
        case 0x275024u: goto label_275024;
        case 0x275028u: goto label_275028;
        case 0x27502cu: goto label_27502c;
        case 0x275030u: goto label_275030;
        case 0x275034u: goto label_275034;
        case 0x275038u: goto label_275038;
        case 0x27503cu: goto label_27503c;
        case 0x275040u: goto label_275040;
        case 0x275044u: goto label_275044;
        case 0x275048u: goto label_275048;
        case 0x27504cu: goto label_27504c;
        case 0x275050u: goto label_275050;
        case 0x275054u: goto label_275054;
        case 0x275058u: goto label_275058;
        case 0x27505cu: goto label_27505c;
        case 0x275060u: goto label_275060;
        case 0x275064u: goto label_275064;
        case 0x275068u: goto label_275068;
        case 0x27506cu: goto label_27506c;
        case 0x275070u: goto label_275070;
        case 0x275074u: goto label_275074;
        case 0x275078u: goto label_275078;
        case 0x27507cu: goto label_27507c;
        case 0x275080u: goto label_275080;
        case 0x275084u: goto label_275084;
        case 0x275088u: goto label_275088;
        case 0x27508cu: goto label_27508c;
        case 0x275090u: goto label_275090;
        case 0x275094u: goto label_275094;
        case 0x275098u: goto label_275098;
        case 0x27509cu: goto label_27509c;
        case 0x2750a0u: goto label_2750a0;
        case 0x2750a4u: goto label_2750a4;
        case 0x2750a8u: goto label_2750a8;
        case 0x2750acu: goto label_2750ac;
        case 0x2750b0u: goto label_2750b0;
        case 0x2750b4u: goto label_2750b4;
        case 0x2750b8u: goto label_2750b8;
        case 0x2750bcu: goto label_2750bc;
        case 0x2750c0u: goto label_2750c0;
        case 0x2750c4u: goto label_2750c4;
        case 0x2750c8u: goto label_2750c8;
        case 0x2750ccu: goto label_2750cc;
        case 0x2750d0u: goto label_2750d0;
        case 0x2750d4u: goto label_2750d4;
        case 0x2750d8u: goto label_2750d8;
        case 0x2750dcu: goto label_2750dc;
        case 0x2750e0u: goto label_2750e0;
        case 0x2750e4u: goto label_2750e4;
        case 0x2750e8u: goto label_2750e8;
        case 0x2750ecu: goto label_2750ec;
        case 0x2750f0u: goto label_2750f0;
        case 0x2750f4u: goto label_2750f4;
        case 0x2750f8u: goto label_2750f8;
        case 0x2750fcu: goto label_2750fc;
        case 0x275100u: goto label_275100;
        case 0x275104u: goto label_275104;
        case 0x275108u: goto label_275108;
        case 0x27510cu: goto label_27510c;
        case 0x275110u: goto label_275110;
        case 0x275114u: goto label_275114;
        case 0x275118u: goto label_275118;
        case 0x27511cu: goto label_27511c;
        case 0x275120u: goto label_275120;
        case 0x275124u: goto label_275124;
        case 0x275128u: goto label_275128;
        case 0x27512cu: goto label_27512c;
        case 0x275130u: goto label_275130;
        case 0x275134u: goto label_275134;
        case 0x275138u: goto label_275138;
        case 0x27513cu: goto label_27513c;
        case 0x275140u: goto label_275140;
        case 0x275144u: goto label_275144;
        case 0x275148u: goto label_275148;
        case 0x27514cu: goto label_27514c;
        case 0x275150u: goto label_275150;
        case 0x275154u: goto label_275154;
        case 0x275158u: goto label_275158;
        case 0x27515cu: goto label_27515c;
        case 0x275160u: goto label_275160;
        case 0x275164u: goto label_275164;
        case 0x275168u: goto label_275168;
        case 0x27516cu: goto label_27516c;
        case 0x275170u: goto label_275170;
        case 0x275174u: goto label_275174;
        case 0x275178u: goto label_275178;
        case 0x27517cu: goto label_27517c;
        case 0x275180u: goto label_275180;
        case 0x275184u: goto label_275184;
        case 0x275188u: goto label_275188;
        case 0x27518cu: goto label_27518c;
        case 0x275190u: goto label_275190;
        case 0x275194u: goto label_275194;
        case 0x275198u: goto label_275198;
        case 0x27519cu: goto label_27519c;
        case 0x2751a0u: goto label_2751a0;
        case 0x2751a4u: goto label_2751a4;
        case 0x2751a8u: goto label_2751a8;
        case 0x2751acu: goto label_2751ac;
        case 0x2751b0u: goto label_2751b0;
        case 0x2751b4u: goto label_2751b4;
        case 0x2751b8u: goto label_2751b8;
        case 0x2751bcu: goto label_2751bc;
        case 0x2751c0u: goto label_2751c0;
        case 0x2751c4u: goto label_2751c4;
        case 0x2751c8u: goto label_2751c8;
        case 0x2751ccu: goto label_2751cc;
        case 0x2751d0u: goto label_2751d0;
        case 0x2751d4u: goto label_2751d4;
        case 0x2751d8u: goto label_2751d8;
        case 0x2751dcu: goto label_2751dc;
        case 0x2751e0u: goto label_2751e0;
        case 0x2751e4u: goto label_2751e4;
        case 0x2751e8u: goto label_2751e8;
        case 0x2751ecu: goto label_2751ec;
        case 0x2751f0u: goto label_2751f0;
        case 0x2751f4u: goto label_2751f4;
        case 0x2751f8u: goto label_2751f8;
        case 0x2751fcu: goto label_2751fc;
        case 0x275200u: goto label_275200;
        case 0x275204u: goto label_275204;
        case 0x275208u: goto label_275208;
        case 0x27520cu: goto label_27520c;
        case 0x275210u: goto label_275210;
        case 0x275214u: goto label_275214;
        case 0x275218u: goto label_275218;
        case 0x27521cu: goto label_27521c;
        case 0x275220u: goto label_275220;
        case 0x275224u: goto label_275224;
        case 0x275228u: goto label_275228;
        case 0x27522cu: goto label_27522c;
        case 0x275230u: goto label_275230;
        case 0x275234u: goto label_275234;
        case 0x275238u: goto label_275238;
        case 0x27523cu: goto label_27523c;
        case 0x275240u: goto label_275240;
        case 0x275244u: goto label_275244;
        case 0x275248u: goto label_275248;
        case 0x27524cu: goto label_27524c;
        case 0x275250u: goto label_275250;
        case 0x275254u: goto label_275254;
        case 0x275258u: goto label_275258;
        case 0x27525cu: goto label_27525c;
        case 0x275260u: goto label_275260;
        case 0x275264u: goto label_275264;
        case 0x275268u: goto label_275268;
        case 0x27526cu: goto label_27526c;
        case 0x275270u: goto label_275270;
        case 0x275274u: goto label_275274;
        case 0x275278u: goto label_275278;
        case 0x27527cu: goto label_27527c;
        case 0x275280u: goto label_275280;
        case 0x275284u: goto label_275284;
        case 0x275288u: goto label_275288;
        case 0x27528cu: goto label_27528c;
        case 0x275290u: goto label_275290;
        case 0x275294u: goto label_275294;
        case 0x275298u: goto label_275298;
        case 0x27529cu: goto label_27529c;
        default: break;
    }

    ctx->pc = 0x274ee0u;

label_274ee0:
    // 0x274ee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x274ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_274ee4:
    // 0x274ee4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x274ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_274ee8:
    // 0x274ee8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x274ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_274eec:
    // 0x274eec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x274eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_274ef0:
    // 0x274ef0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x274ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_274ef4:
    // 0x274ef4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x274ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_274ef8:
    // 0x274ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_274efc:
    // 0x274efc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x274efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_274f00:
    // 0x274f00: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x274f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_274f04:
    // 0x274f04: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x274f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_274f08:
    // 0x274f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274f0c:
    // 0x274f0c: 0xc089a54  jal         func_226950
label_274f10:
    if (ctx->pc == 0x274F10u) {
        ctx->pc = 0x274F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F0Cu;
        // 0x274f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F14u;
        goto label_274f14;
    }
    ctx->pc = 0x274F0Cu;
    SET_GPR_U32(ctx, 31, 0x274F14u);
    ctx->pc = 0x274F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F0Cu;
    // 0x274f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226950u, 0x274F0Cu, 0x274F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F14u;
label_274f14:
    // 0x274f14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_274f18:
    // 0x274f18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x274f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_274f1c:
    // 0x274f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274f20:
    // 0x274f20: 0xc089a5e  jal         func_226978
label_274f24:
    if (ctx->pc == 0x274F24u) {
        ctx->pc = 0x274F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F20u;
        // 0x274f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F28u;
        goto label_274f28;
    }
    ctx->pc = 0x274F20u;
    SET_GPR_U32(ctx, 31, 0x274F28u);
    ctx->pc = 0x274F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F20u;
    // 0x274f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x274F20u, 0x274F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F28u;
label_274f28:
    // 0x274f28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274f2c:
    // 0x274f2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x274f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_274f30:
    // 0x274f30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x274f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_274f34:
    // 0x274f34: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x274f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_274f38:
    // 0x274f38: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x274f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_274f3c:
    // 0x274f3c: 0x40f809  jalr        $v0
label_274f40:
    if (ctx->pc == 0x274F40u) {
        ctx->pc = 0x274F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F3Cu;
        // 0x274f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F44u;
        goto label_274f44;
    }
    ctx->pc = 0x274F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274F44u);
        ctx->pc = 0x274F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F3Cu;
        // 0x274f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F3Cu, 0x274F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274F44u;
label_274f44:
    // 0x274f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274f48:
    // 0x274f48: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x274f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_274f4c:
    // 0x274f4c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x274f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_274f50:
    // 0x274f50: 0x40f809  jalr        $v0
label_274f54:
    if (ctx->pc == 0x274F54u) {
        ctx->pc = 0x274F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F50u;
        // 0x274f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F58u;
        goto label_274f58;
    }
    ctx->pc = 0x274F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274F58u);
        ctx->pc = 0x274F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F50u;
        // 0x274f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F50u, 0x274F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274F58u;
label_274f58:
    // 0x274f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_274f5c:
    if (ctx->pc == 0x274F5Cu) {
        ctx->pc = 0x274F60u;
        goto label_274f60;
    }
    ctx->pc = 0x274F58u;
    {
        const bool branch_taken_0x274f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f58) {
            ctx->pc = 0x274F78u;
            goto label_274f78;
        }
    }
    ctx->pc = 0x274F60u;
label_274f60:
    // 0x274f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274f64:
    // 0x274f64: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_274f68:
    // 0x274f68: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x274f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_274f6c:
    // 0x274f6c: 0x40f809  jalr        $v0
label_274f70:
    if (ctx->pc == 0x274F70u) {
        ctx->pc = 0x274F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F6Cu;
        // 0x274f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F74u;
        goto label_274f74;
    }
    ctx->pc = 0x274F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274F74u);
        ctx->pc = 0x274F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F6Cu;
        // 0x274f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F6Cu, 0x274F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274F74u;
label_274f74:
    // 0x274f74: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x274f74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_274f78:
    // 0x274f78: 0x522000be  beql        $s1, $zero, . + 4 + (0xBE << 2)
label_274f7c:
    if (ctx->pc == 0x274F7Cu) {
        ctx->pc = 0x274F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F78u;
        // 0x274f7c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F80u;
        goto label_274f80;
    }
    ctx->pc = 0x274F78u;
    {
        const bool branch_taken_0x274f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f78) {
            ctx->pc = 0x274F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F78u;
            // 0x274f7c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275274u;
            goto label_275274;
        }
    }
    ctx->pc = 0x274F80u;
label_274f80:
    // 0x274f80: 0xc089a5e  jal         func_226978
label_274f84:
    if (ctx->pc == 0x274F84u) {
        ctx->pc = 0x274F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F80u;
        // 0x274f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F88u;
        goto label_274f88;
    }
    ctx->pc = 0x274F80u;
    SET_GPR_U32(ctx, 31, 0x274F88u);
    ctx->pc = 0x274F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F80u;
    // 0x274f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226978u, 0x274F80u, 0x274F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F88u;
label_274f88:
    // 0x274f88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x274f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_274f8c:
    // 0x274f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x274f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_274f90:
    // 0x274f90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_274f94:
    // 0x274f94: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x274f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_274f98:
    // 0x274f98: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x274f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_274f9c:
    // 0x274f9c: 0x40f809  jalr        $v0
label_274fa0:
    if (ctx->pc == 0x274FA0u) {
        ctx->pc = 0x274FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F9Cu;
        // 0x274fa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FA4u;
        goto label_274fa4;
    }
    ctx->pc = 0x274F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274FA4u);
        ctx->pc = 0x274FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F9Cu;
        // 0x274fa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F9Cu, 0x274FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274FA4u;
label_274fa4:
    // 0x274fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x274fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_274fa8:
    // 0x274fa8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x274fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_274fac:
    // 0x274fac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x274facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_274fb0:
    // 0x274fb0: 0x40f809  jalr        $v0
label_274fb4:
    if (ctx->pc == 0x274FB4u) {
        ctx->pc = 0x274FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB0u;
        // 0x274fb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FB8u;
        goto label_274fb8;
    }
    ctx->pc = 0x274FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274FB8u);
        ctx->pc = 0x274FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB0u;
        // 0x274fb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FB0u, 0x274FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274FB8u;
label_274fb8:
    // 0x274fb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_274fbc:
    if (ctx->pc == 0x274FBCu) {
        ctx->pc = 0x274FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB8u;
        // 0x274fbc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FC0u;
        goto label_274fc0;
    }
    ctx->pc = 0x274FB8u;
    {
        const bool branch_taken_0x274fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB8u;
        // 0x274fbc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fb8) {
            ctx->pc = 0x274FDCu;
            goto label_274fdc;
        }
    }
    ctx->pc = 0x274FC0u;
label_274fc0:
    // 0x274fc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x274fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_274fc4:
    // 0x274fc4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x274fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_274fc8:
    // 0x274fc8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_274fcc:
    // 0x274fcc: 0x40f809  jalr        $v0
label_274fd0:
    if (ctx->pc == 0x274FD0u) {
        ctx->pc = 0x274FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FCCu;
        // 0x274fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FD4u;
        goto label_274fd4;
    }
    ctx->pc = 0x274FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274FD4u);
        ctx->pc = 0x274FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FCCu;
        // 0x274fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FCCu, 0x274FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274FD4u;
label_274fd4:
    // 0x274fd4: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x274fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_274fd8:
    // 0x274fd8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x274fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_274fdc:
    // 0x274fdc: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x274fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_274fe0:
    // 0x274fe0: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x274fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_274fe4:
    // 0x274fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274fe8:
    // 0x274fe8: 0xc107908  jal         func_41E420
label_274fec:
    if (ctx->pc == 0x274FECu) {
        ctx->pc = 0x274FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FE8u;
        // 0x274fec: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FF0u;
        goto label_274ff0;
    }
    ctx->pc = 0x274FE8u;
    SET_GPR_U32(ctx, 31, 0x274FF0u);
    ctx->pc = 0x274FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FE8u;
    // 0x274fec: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x274FE8u, 0x274FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FF0u;
label_274ff0:
    // 0x274ff0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_274ff4:
    if (ctx->pc == 0x274FF4u) {
        ctx->pc = 0x274FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FF0u;
        // 0x274ff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FF8u;
        goto label_274ff8;
    }
    ctx->pc = 0x274FF0u;
    {
        const bool branch_taken_0x274ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FF0u;
        // 0x274ff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ff0) {
            ctx->pc = 0x275018u;
            goto label_275018;
        }
    }
    ctx->pc = 0x274FF8u;
label_274ff8:
    // 0x274ff8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_274ffc:
    // 0x274ffc: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x274ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_275000:
    // 0x275000: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_275004:
    // 0x275004: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_275008:
    // 0x275008: 0xc10796c  jal         func_41E5B0
label_27500c:
    if (ctx->pc == 0x27500Cu) {
        ctx->pc = 0x27500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275008u;
        // 0x27500c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275010u;
        goto label_275010;
    }
    ctx->pc = 0x275008u;
    SET_GPR_U32(ctx, 31, 0x275010u);
    ctx->pc = 0x27500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275008u;
    // 0x27500c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x275008u, 0x275010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275010u;
label_275010:
    // 0x275010: 0x1000000e  b           . + 4 + (0xE << 2)
label_275014:
    if (ctx->pc == 0x275014u) {
        ctx->pc = 0x275014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275010u;
        // 0x275014: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275018u;
        goto label_275018;
    }
    ctx->pc = 0x275010u;
    {
        const bool branch_taken_0x275010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275010u;
        // 0x275014: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275010) {
            ctx->pc = 0x27504Cu;
            goto label_27504c;
        }
    }
    ctx->pc = 0x275018u;
label_275018:
    // 0x275018: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x275018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_27501c:
    // 0x27501c: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_275020:
    // 0x275020: 0xc107908  jal         func_41E420
label_275024:
    if (ctx->pc == 0x275024u) {
        ctx->pc = 0x275024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275020u;
        // 0x275024: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275028u;
        goto label_275028;
    }
    ctx->pc = 0x275020u;
    SET_GPR_U32(ctx, 31, 0x275028u);
    ctx->pc = 0x275024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275020u;
    // 0x275024: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x275020u, 0x275028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275028u;
label_275028:
    // 0x275028: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27502c:
    if (ctx->pc == 0x27502Cu) {
        ctx->pc = 0x27502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275028u;
        // 0x27502c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275030u;
        goto label_275030;
    }
    ctx->pc = 0x275028u;
    {
        const bool branch_taken_0x275028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275028u;
        // 0x27502c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275028) {
            ctx->pc = 0x275048u;
            goto label_275048;
        }
    }
    ctx->pc = 0x275030u;
label_275030:
    // 0x275030: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x275030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_275034:
    // 0x275034: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x275034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_275038:
    // 0x275038: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x275038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27503c:
    // 0x27503c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x27503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_275040:
    // 0x275040: 0xc10796c  jal         func_41E5B0
label_275044:
    if (ctx->pc == 0x275044u) {
        ctx->pc = 0x275044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275040u;
        // 0x275044: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275048u;
        goto label_275048;
    }
    ctx->pc = 0x275040u;
    SET_GPR_U32(ctx, 31, 0x275048u);
    ctx->pc = 0x275044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275040u;
    // 0x275044: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x275040u, 0x275048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275048u;
label_275048:
    // 0x275048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x275048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27504c:
    // 0x27504c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x27504cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_275050:
    // 0x275050: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_275054:
    // 0x275054: 0xc043f0c  jal         func_10FC30
label_275058:
    if (ctx->pc == 0x275058u) {
        ctx->pc = 0x275058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275054u;
        // 0x275058: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27505Cu;
        goto label_27505c;
    }
    ctx->pc = 0x275054u;
    SET_GPR_U32(ctx, 31, 0x27505Cu);
    ctx->pc = 0x275058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275054u;
    // 0x275058: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x275054u, 0x27505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27505Cu;
label_27505c:
    // 0x27505c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_275060:
    // 0x275060: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_275064:
    // 0x275064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275068:
    // 0x275068: 0x8ec9bd30  lw          $t1, -0x42D0($s6)
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_27506c:
    // 0x27506c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27506cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275070:
    // 0x275070: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x275070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275074:
    // 0x275074: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275078:
    // 0x275078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27507c:
    // 0x27507c: 0xc088178  jal         func_2205E0
label_275080:
    if (ctx->pc == 0x275080u) {
        ctx->pc = 0x275080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27507Cu;
        // 0x275080: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275084u;
        goto label_275084;
    }
    ctx->pc = 0x27507Cu;
    SET_GPR_U32(ctx, 31, 0x275084u);
    ctx->pc = 0x275080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27507Cu;
    // 0x275080: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x27507Cu, 0x275084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275084u;
label_275084:
    // 0x275084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275088:
    // 0x275088: 0xc08bad0  jal         func_22EB40
label_27508c:
    if (ctx->pc == 0x27508Cu) {
        ctx->pc = 0x27508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275088u;
        // 0x27508c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275090u;
        goto label_275090;
    }
    ctx->pc = 0x275088u;
    SET_GPR_U32(ctx, 31, 0x275090u);
    ctx->pc = 0x27508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275088u;
    // 0x27508c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x275088u, 0x275090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275090u;
label_275090:
    // 0x275090: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x275090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_275094:
    // 0x275094: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x275094u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_275098:
    // 0x275098: 0x2452e568  addiu       $s2, $v0, -0x1A98
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960488));
label_27509c:
    // 0x27509c: 0xc041532  jal         func_1054C8
label_2750a0:
    if (ctx->pc == 0x2750A0u) {
        ctx->pc = 0x2750A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27509Cu;
        // 0x2750a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750A4u;
        goto label_2750a4;
    }
    ctx->pc = 0x27509Cu;
    SET_GPR_U32(ctx, 31, 0x2750A4u);
    ctx->pc = 0x2750A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27509Cu;
    // 0x2750a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27509Cu, 0x2750A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750A4u;
label_2750a4:
    // 0x2750a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2750a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2750a8:
    // 0x2750a8: 0xc041532  jal         func_1054C8
label_2750ac:
    if (ctx->pc == 0x2750ACu) {
        ctx->pc = 0x2750ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750A8u;
        // 0x2750ac: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750B0u;
        goto label_2750b0;
    }
    ctx->pc = 0x2750A8u;
    SET_GPR_U32(ctx, 31, 0x2750B0u);
    ctx->pc = 0x2750ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750A8u;
    // 0x2750ac: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2750A8u, 0x2750B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750B0u;
label_2750b0:
    // 0x2750b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2750b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2750b4:
    // 0x2750b4: 0xc041532  jal         func_1054C8
label_2750b8:
    if (ctx->pc == 0x2750B8u) {
        ctx->pc = 0x2750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750B4u;
        // 0x2750b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750BCu;
        goto label_2750bc;
    }
    ctx->pc = 0x2750B4u;
    SET_GPR_U32(ctx, 31, 0x2750BCu);
    ctx->pc = 0x2750B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750B4u;
    // 0x2750b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2750B4u, 0x2750BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750BCu;
label_2750bc:
    // 0x2750bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2750bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2750c0:
    // 0x2750c0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_2750c4:
    if (ctx->pc == 0x2750C4u) {
        ctx->pc = 0x2750C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750C0u;
        // 0x2750c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750C8u;
        goto label_2750c8;
    }
    ctx->pc = 0x2750C0u;
    {
        const bool branch_taken_0x2750c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750C0u;
        // 0x2750c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750c0) {
            ctx->pc = 0x2750F0u;
            goto label_2750f0;
        }
    }
    ctx->pc = 0x2750C8u;
label_2750c8:
    // 0x2750c8: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x2750c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2750cc:
    // 0x2750cc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2750ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2750d0:
    // 0x2750d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2750d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2750d4:
    // 0x2750d4: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2750d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2750d8:
    // 0x2750d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2750d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2750dc:
    // 0x2750dc: 0x8ec7bd30  lw          $a3, -0x42D0($s6)
    ctx->pc = 0x2750dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_2750e0:
    // 0x2750e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2750e4:
    // 0x2750e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2750e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2750e8:
    // 0x2750e8: 0xc04159e  jal         func_105678
label_2750ec:
    if (ctx->pc == 0x2750ECu) {
        ctx->pc = 0x2750ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750E8u;
        // 0x2750ec: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750F0u;
        goto label_2750f0;
    }
    ctx->pc = 0x2750E8u;
    SET_GPR_U32(ctx, 31, 0x2750F0u);
    ctx->pc = 0x2750ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750E8u;
    // 0x2750ec: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2750E8u, 0x2750F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750F0u;
label_2750f0:
    // 0x2750f0: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_2750f4:
    if (ctx->pc == 0x2750F4u) {
        ctx->pc = 0x2750F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750F0u;
        // 0x2750f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750F8u;
        goto label_2750f8;
    }
    ctx->pc = 0x2750F0u;
    {
        const bool branch_taken_0x2750f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750F0u;
        // 0x2750f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750f0) {
            ctx->pc = 0x275114u;
            goto label_275114;
        }
    }
    ctx->pc = 0x2750F8u;
label_2750f8:
    // 0x2750f8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2750fc:
    // 0x2750fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2750fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_275100:
    // 0x275100: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x275100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_275104:
    // 0x275104: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x275104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_275108:
    // 0x275108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27510c:
    // 0x27510c: 0xc041b20  jal         func_106C80
label_275110:
    if (ctx->pc == 0x275110u) {
        ctx->pc = 0x275110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27510Cu;
        // 0x275110: 0x8ec7bd30  lw          $a3, -0x42D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275114u;
        goto label_275114;
    }
    ctx->pc = 0x27510Cu;
    SET_GPR_U32(ctx, 31, 0x275114u);
    ctx->pc = 0x275110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27510Cu;
    // 0x275110: 0x8ec7bd30  lw          $a3, -0x42D0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x27510Cu, 0x275114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275114u;
label_275114:
    // 0x275114: 0xc05d484  jal         func_175210
label_275118:
    if (ctx->pc == 0x275118u) {
        ctx->pc = 0x275118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275114u;
        // 0x275118: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27511Cu;
        goto label_27511c;
    }
    ctx->pc = 0x275114u;
    SET_GPR_U32(ctx, 31, 0x27511Cu);
    ctx->pc = 0x275118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275114u;
    // 0x275118: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x275114u, 0x27511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27511Cu;
label_27511c:
    // 0x27511c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_275120:
    // 0x275120: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_275124:
    // 0x275124: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x275124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_275128:
    // 0x275128: 0xa0f809  jalr        $a1
label_27512c:
    if (ctx->pc == 0x27512Cu) {
        ctx->pc = 0x27512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275128u;
        // 0x27512c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275130u;
        goto label_275130;
    }
    ctx->pc = 0x275128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x275130u);
        ctx->pc = 0x27512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275128u;
        // 0x27512c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275128u, 0x275130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275130u;
label_275130:
    // 0x275130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275134:
    // 0x275134: 0xc087016  jal         func_21C058
label_275138:
    if (ctx->pc == 0x275138u) {
        ctx->pc = 0x275138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275134u;
        // 0x275138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27513Cu;
        goto label_27513c;
    }
    ctx->pc = 0x275134u;
    SET_GPR_U32(ctx, 31, 0x27513Cu);
    ctx->pc = 0x275138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275134u;
    // 0x275138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x275134u, 0x27513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27513Cu;
label_27513c:
    // 0x27513c: 0xc08a0d0  jal         func_228340
label_275140:
    if (ctx->pc == 0x275140u) {
        ctx->pc = 0x275140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27513Cu;
        // 0x275140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275144u;
        goto label_275144;
    }
    ctx->pc = 0x27513Cu;
    SET_GPR_U32(ctx, 31, 0x275144u);
    ctx->pc = 0x275140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27513Cu;
    // 0x275140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x27513Cu, 0x275144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275144u;
label_275144:
    // 0x275144: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_275148:
    if (ctx->pc == 0x275148u) {
        ctx->pc = 0x275148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275144u;
        // 0x275148: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27514Cu;
        goto label_27514c;
    }
    ctx->pc = 0x275144u;
    {
        const bool branch_taken_0x275144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275144) {
            ctx->pc = 0x275148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275144u;
            // 0x275148: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2751ECu;
            goto label_2751ec;
        }
    }
    ctx->pc = 0x27514Cu;
label_27514c:
    // 0x27514c: 0xc041532  jal         func_1054C8
label_275150:
    if (ctx->pc == 0x275150u) {
        ctx->pc = 0x275150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27514Cu;
        // 0x275150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275154u;
        goto label_275154;
    }
    ctx->pc = 0x27514Cu;
    SET_GPR_U32(ctx, 31, 0x275154u);
    ctx->pc = 0x275150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27514Cu;
    // 0x275150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27514Cu, 0x275154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275154u;
label_275154:
    // 0x275154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x275154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275158:
    // 0x275158: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27515c:
    // 0x27515c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_275160:
    if (ctx->pc == 0x275160u) {
        ctx->pc = 0x275160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27515Cu;
        // 0x275160: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275164u;
        goto label_275164;
    }
    ctx->pc = 0x27515Cu;
    {
        const bool branch_taken_0x27515c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27515Cu;
        // 0x275160: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27515c) {
            ctx->pc = 0x275188u;
            goto label_275188;
        }
    }
    ctx->pc = 0x275164u;
label_275164:
    // 0x275164: 0x8ec9bd30  lw          $t1, -0x42D0($s6)
    ctx->pc = 0x275164u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_275168:
    // 0x275168: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x275168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27516c:
    // 0x27516c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27516cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_275170:
    // 0x275170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275174:
    // 0x275174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x275174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_275178:
    // 0x275178: 0x24060185  addiu       $a2, $zero, 0x185
    ctx->pc = 0x275178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_27517c:
    // 0x27517c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27517cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275180:
    // 0x275180: 0xc041664  jal         func_105990
label_275184:
    if (ctx->pc == 0x275184u) {
        ctx->pc = 0x275184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275180u;
        // 0x275184: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275188u;
        goto label_275188;
    }
    ctx->pc = 0x275180u;
    SET_GPR_U32(ctx, 31, 0x275188u);
    ctx->pc = 0x275184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275180u;
    // 0x275184: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x275180u, 0x275188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275188u;
label_275188:
    // 0x275188: 0x52a00031  beql        $s5, $zero, . + 4 + (0x31 << 2)
label_27518c:
    if (ctx->pc == 0x27518Cu) {
        ctx->pc = 0x27518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275188u;
        // 0x27518c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275190u;
        goto label_275190;
    }
    ctx->pc = 0x275188u;
    {
        const bool branch_taken_0x275188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x275188) {
            ctx->pc = 0x27518Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275188u;
            // 0x27518c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275250u;
            goto label_275250;
        }
    }
    ctx->pc = 0x275190u;
label_275190:
    // 0x275190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275194:
    // 0x275194: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_275198:
    // 0x275198: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27519c:
    // 0x27519c: 0x40f809  jalr        $v0
label_2751a0:
    if (ctx->pc == 0x2751A0u) {
        ctx->pc = 0x2751A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27519Cu;
        // 0x2751a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751A4u;
        goto label_2751a4;
    }
    ctx->pc = 0x27519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2751A4u);
        ctx->pc = 0x2751A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27519Cu;
        // 0x2751a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27519Cu, 0x2751A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2751A4u;
label_2751a4:
    // 0x2751a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2751a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2751a8:
    // 0x2751a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2751a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2751ac:
    // 0x2751ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2751b0:
    // 0x2751b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2751b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2751b4:
    // 0x2751b4: 0x40f809  jalr        $v0
label_2751b8:
    if (ctx->pc == 0x2751B8u) {
        ctx->pc = 0x2751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751B4u;
        // 0x2751b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751BCu;
        goto label_2751bc;
    }
    ctx->pc = 0x2751B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2751BCu);
        ctx->pc = 0x2751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751B4u;
        // 0x2751b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751B4u, 0x2751BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2751BCu;
label_2751bc:
    // 0x2751bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2751bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2751c0:
    // 0x2751c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2751c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2751c4:
    // 0x2751c4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2751c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2751c8:
    // 0x2751c8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2751c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2751cc:
    // 0x2751cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2751ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2751d0:
    // 0x2751d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2751d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2751d4:
    // 0x2751d4: 0x24070162  addiu       $a3, $zero, 0x162
    ctx->pc = 0x2751d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
label_2751d8:
    // 0x2751d8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2751d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2751dc:
    // 0x2751dc: 0xc04229e  jal         func_108A78
label_2751e0:
    if (ctx->pc == 0x2751E0u) {
        ctx->pc = 0x2751E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751DCu;
        // 0x2751e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751E4u;
        goto label_2751e4;
    }
    ctx->pc = 0x2751DCu;
    SET_GPR_U32(ctx, 31, 0x2751E4u);
    ctx->pc = 0x2751E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2751DCu;
    // 0x2751e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x2751DCu, 0x2751E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2751E4u;
label_2751e4:
    // 0x2751e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2751e8:
    if (ctx->pc == 0x2751E8u) {
        ctx->pc = 0x2751E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751E4u;
        // 0x2751e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751ECu;
        goto label_2751ec;
    }
    ctx->pc = 0x2751E4u;
    {
        const bool branch_taken_0x2751e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751E4u;
        // 0x2751e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751e4) {
            ctx->pc = 0x275250u;
            goto label_275250;
        }
    }
    ctx->pc = 0x2751ECu;
label_2751ec:
    // 0x2751ec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2751ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2751f0:
    // 0x2751f0: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_2751f4:
    if (ctx->pc == 0x2751F4u) {
        ctx->pc = 0x2751F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751F0u;
        // 0x2751f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751F8u;
        goto label_2751f8;
    }
    ctx->pc = 0x2751F0u;
    {
        const bool branch_taken_0x2751f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751F0u;
        // 0x2751f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751f0) {
            ctx->pc = 0x27524Cu;
            goto label_27524c;
        }
    }
    ctx->pc = 0x2751F8u;
label_2751f8:
    // 0x2751f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2751f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2751fc:
    // 0x2751fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2751fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_275200:
    // 0x275200: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_275204:
    // 0x275204: 0x40f809  jalr        $v0
label_275208:
    if (ctx->pc == 0x275208u) {
        ctx->pc = 0x275208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275204u;
        // 0x275208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27520Cu;
        goto label_27520c;
    }
    ctx->pc = 0x275204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27520Cu);
        ctx->pc = 0x275208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275204u;
        // 0x275208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275204u, 0x27520Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27520Cu;
label_27520c:
    // 0x27520c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275210:
    // 0x275210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275214:
    // 0x275214: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x275214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_275218:
    // 0x275218: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x275218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27521c:
    // 0x27521c: 0x40f809  jalr        $v0
label_275220:
    if (ctx->pc == 0x275220u) {
        ctx->pc = 0x275220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27521Cu;
        // 0x275220: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275224u;
        goto label_275224;
    }
    ctx->pc = 0x27521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275224u);
        ctx->pc = 0x275220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27521Cu;
        // 0x275220: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27521Cu, 0x275224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275224u;
label_275224:
    // 0x275224: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x275224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_275228:
    // 0x275228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x275228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27522c:
    // 0x27522c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27522cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275230:
    // 0x275230: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x275230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275234:
    // 0x275234: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x275234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_275238:
    // 0x275238: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x275238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27523c:
    // 0x27523c: 0x24070162  addiu       $a3, $zero, 0x162
    ctx->pc = 0x27523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
label_275240:
    // 0x275240: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x275240u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_275244:
    // 0x275244: 0xc04229e  jal         func_108A78
label_275248:
    if (ctx->pc == 0x275248u) {
        ctx->pc = 0x275248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275244u;
        // 0x275248: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27524Cu;
        goto label_27524c;
    }
    ctx->pc = 0x275244u;
    SET_GPR_U32(ctx, 31, 0x27524Cu);
    ctx->pc = 0x275248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275244u;
    // 0x275248: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x275244u, 0x27524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27524Cu;
label_27524c:
    // 0x27524c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_275250:
    // 0x275250: 0xc05d53a  jal         func_1754E8
label_275254:
    if (ctx->pc == 0x275254u) {
        ctx->pc = 0x275254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275250u;
        // 0x275254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275258u;
        goto label_275258;
    }
    ctx->pc = 0x275250u;
    SET_GPR_U32(ctx, 31, 0x275258u);
    ctx->pc = 0x275254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275250u;
    // 0x275254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x275250u, 0x275258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275258u;
label_275258:
    // 0x275258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x275258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27525c:
    // 0x27525c: 0xc05d4f6  jal         func_1753D8
label_275260:
    if (ctx->pc == 0x275260u) {
        ctx->pc = 0x275260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27525Cu;
        // 0x275260: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275264u;
        goto label_275264;
    }
    ctx->pc = 0x27525Cu;
    SET_GPR_U32(ctx, 31, 0x275264u);
    ctx->pc = 0x275260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27525Cu;
    // 0x275260: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x27525Cu, 0x275264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275264u;
label_275264:
    // 0x275264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275268:
    // 0x275268: 0xc089990  jal         func_226640
label_27526c:
    if (ctx->pc == 0x27526Cu) {
        ctx->pc = 0x27526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275268u;
        // 0x27526c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275270u;
        goto label_275270;
    }
    ctx->pc = 0x275268u;
    SET_GPR_U32(ctx, 31, 0x275270u);
    ctx->pc = 0x27526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275268u;
    // 0x27526c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x275268u, 0x275270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275270u;
label_275270:
    // 0x275270: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x275270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_275274:
    // 0x275274: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x275274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_275278:
    // 0x275278: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x275278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27527c:
    // 0x27527c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x27527cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275280:
    // 0x275280: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_275284:
    // 0x275284: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x275284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_275288:
    // 0x275288: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x275288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27528c:
    // 0x27528c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x27528cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275290:
    // 0x275290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275294:
    // 0x275294: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x275294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275298:
    // 0x275298: 0x3e00008  jr          $ra
label_27529c:
    if (ctx->pc == 0x27529Cu) {
        ctx->pc = 0x27529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275298u;
        // 0x27529c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752A0u;
        goto label_fallthrough_0x275298;
    }
    ctx->pc = 0x275298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275298u;
        // 0x27529c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x275298:
    ctx->pc = 0x2752A0u;
}
