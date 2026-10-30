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

// Function: sub_00271EF0
// Address: 0x271ef0 - 0x272310
void sub_00271EF0_0x271ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271EF0_0x271ef0");
#endif

    switch (ctx->pc) {
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        default: break;
    }

    ctx->pc = 0x271ef0u;

label_271ef0:
    // 0x271ef0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x271ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_271ef4:
    // 0x271ef4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x271ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_271ef8:
    // 0x271ef8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x271ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271efc:
    // 0x271efc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x271efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_271f00:
    // 0x271f00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x271f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_271f04:
    // 0x271f04: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x271f04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271f08:
    // 0x271f08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_271f0c:
    // 0x271f0c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x271f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_271f10:
    // 0x271f10: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x271f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_271f14:
    // 0x271f14: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x271f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_271f18:
    // 0x271f18: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x271f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_271f1c:
    // 0x271f1c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x271f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_271f20:
    // 0x271f20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_271f24:
    // 0x271f24: 0xc0e409a  jal         func_390268
label_271f28:
    if (ctx->pc == 0x271F28u) {
        ctx->pc = 0x271F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F24u;
        // 0x271f28: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F2Cu;
        goto label_271f2c;
    }
    ctx->pc = 0x271F24u;
    SET_GPR_U32(ctx, 31, 0x271F2Cu);
    ctx->pc = 0x271F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F24u;
    // 0x271f28: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x271F24u, 0x271F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F2Cu;
label_271f2c:
    // 0x271f2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271f30:
    // 0x271f30: 0x8e7600d8  lw          $s6, 0xD8($s3)
    ctx->pc = 0x271f30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_271f34:
    // 0x271f34: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x271f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_271f38:
    // 0x271f38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x271f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271f3c:
    // 0x271f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271f40:
    // 0x271f40: 0xc0950ba  jal         func_2542E8
label_271f44:
    if (ctx->pc == 0x271F44u) {
        ctx->pc = 0x271F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F40u;
        // 0x271f44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F48u;
        goto label_271f48;
    }
    ctx->pc = 0x271F40u;
    SET_GPR_U32(ctx, 31, 0x271F48u);
    ctx->pc = 0x271F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F40u;
    // 0x271f44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x271F40u, 0x271F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F48u;
label_271f48:
    // 0x271f48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_271f4c:
    // 0x271f4c: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x271f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_271f50:
    // 0x271f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271f54:
    // 0x271f54: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x271f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_271f58:
    // 0x271f58: 0x152840  sll         $a1, $s5, 1
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_271f5c:
    // 0x271f5c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x271f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_271f60:
    // 0x271f60: 0xc09970a  jal         func_265C28
label_271f64:
    if (ctx->pc == 0x271F64u) {
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F60u;
        // 0x271f64: 0x2a2280a  movz        $a1, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F68u;
        goto label_271f68;
    }
    ctx->pc = 0x271F60u;
    SET_GPR_U32(ctx, 31, 0x271F68u);
    ctx->pc = 0x271F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F60u;
    // 0x271f64: 0x2a2280a  movz        $a1, $s5, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x271F60u, 0x271F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F68u;
label_271f68:
    // 0x271f68: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_271f6c:
    if (ctx->pc == 0x271F6Cu) {
        ctx->pc = 0x271F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F68u;
        // 0x271f6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F70u;
        goto label_271f70;
    }
    ctx->pc = 0x271F68u;
    {
        const bool branch_taken_0x271f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F68u;
        // 0x271f6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f68) {
            ctx->pc = 0x2721E4u;
            goto label_2721e4;
        }
    }
    ctx->pc = 0x271F70u;
label_271f70:
    // 0x271f70: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x271f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271f74:
    // 0x271f74: 0xc08ae58  jal         func_22B960
label_271f78:
    if (ctx->pc == 0x271F78u) {
        ctx->pc = 0x271F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F74u;
        // 0x271f78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F7Cu;
        goto label_271f7c;
    }
    ctx->pc = 0x271F74u;
    SET_GPR_U32(ctx, 31, 0x271F7Cu);
    ctx->pc = 0x271F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F74u;
    // 0x271f78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x271F74u, 0x271F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F7Cu;
label_271f7c:
    // 0x271f7c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x271f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_271f80:
    // 0x271f80: 0x245ee250  addiu       $fp, $v0, -0x1DB0
    ctx->pc = 0x271f80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_271f84:
    // 0x271f84: 0xc041532  jal         func_1054C8
label_271f88:
    if (ctx->pc == 0x271F88u) {
        ctx->pc = 0x271F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F84u;
        // 0x271f88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F8Cu;
        goto label_271f8c;
    }
    ctx->pc = 0x271F84u;
    SET_GPR_U32(ctx, 31, 0x271F8Cu);
    ctx->pc = 0x271F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F84u;
    // 0x271f88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271F84u, 0x271F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F8Cu;
label_271f8c:
    // 0x271f8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x271f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_271f90:
    // 0x271f90: 0xc041532  jal         func_1054C8
label_271f94:
    if (ctx->pc == 0x271F94u) {
        ctx->pc = 0x271F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F90u;
        // 0x271f94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F98u;
        goto label_271f98;
    }
    ctx->pc = 0x271F90u;
    SET_GPR_U32(ctx, 31, 0x271F98u);
    ctx->pc = 0x271F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F90u;
    // 0x271f94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271F90u, 0x271F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F98u;
label_271f98:
    // 0x271f98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x271f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_271f9c:
    // 0x271f9c: 0xc041532  jal         func_1054C8
label_271fa0:
    if (ctx->pc == 0x271FA0u) {
        ctx->pc = 0x271FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F9Cu;
        // 0x271fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FA4u;
        goto label_271fa4;
    }
    ctx->pc = 0x271F9Cu;
    SET_GPR_U32(ctx, 31, 0x271FA4u);
    ctx->pc = 0x271FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F9Cu;
    // 0x271fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271F9Cu, 0x271FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FA4u;
label_271fa4:
    // 0x271fa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271fa8:
    // 0x271fa8: 0xc041532  jal         func_1054C8
label_271fac:
    if (ctx->pc == 0x271FACu) {
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA8u;
        // 0x271fac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FB0u;
        goto label_271fb0;
    }
    ctx->pc = 0x271FA8u;
    SET_GPR_U32(ctx, 31, 0x271FB0u);
    ctx->pc = 0x271FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FA8u;
    // 0x271fac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271FA8u, 0x271FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FB0u;
label_271fb0:
    // 0x271fb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_271fb4:
    if (ctx->pc == 0x271FB4u) {
        ctx->pc = 0x271FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FB0u;
        // 0x271fb4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FB8u;
        goto label_271fb8;
    }
    ctx->pc = 0x271FB0u;
    {
        const bool branch_taken_0x271fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FB0u;
        // 0x271fb4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb0) {
            ctx->pc = 0x271FD8u;
            goto label_271fd8;
        }
    }
    ctx->pc = 0x271FB8u;
label_271fb8:
    // 0x271fb8: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x271fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_271fbc:
    // 0x271fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x271fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_271fc0:
    // 0x271fc0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271fc4:
    // 0x271fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271fc8:
    // 0x271fc8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_271fcc:
    // 0x271fcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271fd0:
    // 0x271fd0: 0xc04159e  jal         func_105678
label_271fd4:
    if (ctx->pc == 0x271FD4u) {
        ctx->pc = 0x271FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD0u;
        // 0x271fd4: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FD8u;
        goto label_271fd8;
    }
    ctx->pc = 0x271FD0u;
    SET_GPR_U32(ctx, 31, 0x271FD8u);
    ctx->pc = 0x271FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FD0u;
    // 0x271fd4: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x271FD0u, 0x271FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FD8u;
label_271fd8:
    // 0x271fd8: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x271fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_271fdc:
    // 0x271fdc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x271fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_271fe0:
    // 0x271fe0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_271fe4:
    if (ctx->pc == 0x271FE4u) {
        ctx->pc = 0x271FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FE0u;
        // 0x271fe4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FE8u;
        goto label_271fe8;
    }
    ctx->pc = 0x271FE0u;
    {
        const bool branch_taken_0x271fe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FE0u;
        // 0x271fe4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fe0) {
            ctx->pc = 0x272028u;
            goto label_272028;
        }
    }
    ctx->pc = 0x271FE8u;
label_271fe8:
    // 0x271fe8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x271fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_271fec:
    // 0x271fec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271ff0:
    // 0x271ff0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271ff4:
    // 0x271ff4: 0x40f809  jalr        $v0
label_271ff8:
    if (ctx->pc == 0x271FF8u) {
        ctx->pc = 0x271FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FF4u;
        // 0x271ff8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FFCu;
        goto label_271ffc;
    }
    ctx->pc = 0x271FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271FFCu);
        ctx->pc = 0x271FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FF4u;
        // 0x271ff8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271FF4u, 0x271FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271FFCu;
label_271ffc:
    // 0x271ffc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_272000:
    // 0x272000: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x272000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_272004:
    // 0x272004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272008:
    // 0x272008: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x272008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27200c:
    // 0x27200c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27200cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272010:
    // 0x272010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272014:
    // 0x272014: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x272014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272018:
    // 0x272018: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x272018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_27201c:
    // 0x27201c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x27201cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_272020:
    // 0x272020: 0xc041664  jal         func_105990
label_272024:
    if (ctx->pc == 0x272024u) {
        ctx->pc = 0x272024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272020u;
        // 0x272024: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272028u;
        goto label_272028;
    }
    ctx->pc = 0x272020u;
    SET_GPR_U32(ctx, 31, 0x272028u);
    ctx->pc = 0x272024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272020u;
    // 0x272024: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272020u, 0x272028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_27202c:
    if (ctx->pc == 0x27202Cu) {
        ctx->pc = 0x272030u;
        goto label_272030;
    }
    ctx->pc = 0x272028u;
    {
        const bool branch_taken_0x272028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x272028) {
            ctx->pc = 0x272074u;
            goto label_272074;
        }
    }
    ctx->pc = 0x272030u;
label_272030:
    // 0x272030: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272034:
    // 0x272034: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272038:
    // 0x272038: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27203c:
    // 0x27203c: 0x40f809  jalr        $v0
label_272040:
    if (ctx->pc == 0x272040u) {
        ctx->pc = 0x272040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27203Cu;
        // 0x272040: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272044u;
        goto label_272044;
    }
    ctx->pc = 0x27203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272044u);
        ctx->pc = 0x272040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27203Cu;
        // 0x272040: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27203Cu, 0x272044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272044u;
label_272044:
    // 0x272044: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x272044u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_272048:
    // 0x272048: 0x3c013d87  lui         $at, 0x3D87
    ctx->pc = 0x272048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15751 << 16));
label_27204c:
    // 0x27204c: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x27204cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
label_272050:
    // 0x272050: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272054:
    // 0x272054: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272058:
    // 0x272058: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27205c:
    // 0x27205c: 0x254a29a8  addiu       $t2, $t2, 0x29A8
    ctx->pc = 0x27205cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10664));
label_272060:
    // 0x272060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272064:
    // 0x272064: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272068:
    // 0x272068: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x272068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27206c:
    // 0x27206c: 0xc041664  jal         func_105990
label_272070:
    if (ctx->pc == 0x272070u) {
        ctx->pc = 0x272070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27206Cu;
        // 0x272070: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272074u;
        goto label_272074;
    }
    ctx->pc = 0x27206Cu;
    SET_GPR_U32(ctx, 31, 0x272074u);
    ctx->pc = 0x272070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27206Cu;
    // 0x272070: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27206Cu, 0x272074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272074u;
label_272074:
    // 0x272074: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_272078:
    if (ctx->pc == 0x272078u) {
        ctx->pc = 0x272078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272074u;
        // 0x272078: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27207Cu;
        goto label_27207c;
    }
    ctx->pc = 0x272074u;
    {
        const bool branch_taken_0x272074 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x272078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272074u;
        // 0x272078: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272074) {
            ctx->pc = 0x272094u;
            goto label_272094;
        }
    }
    ctx->pc = 0x27207Cu;
label_27207c:
    // 0x27207c: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x27207cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_272080:
    // 0x272080: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272084:
    // 0x272084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272088:
    // 0x272088: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27208c:
    // 0x27208c: 0xc041b20  jal         func_106C80
label_272090:
    if (ctx->pc == 0x272090u) {
        ctx->pc = 0x272090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27208Cu;
        // 0x272090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272094u;
        goto label_272094;
    }
    ctx->pc = 0x27208Cu;
    SET_GPR_U32(ctx, 31, 0x272094u);
    ctx->pc = 0x272090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27208Cu;
    // 0x272090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x27208Cu, 0x272094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272094u;
label_272094:
    // 0x272094: 0xc05d484  jal         func_175210
label_272098:
    if (ctx->pc == 0x272098u) {
        ctx->pc = 0x272098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272094u;
        // 0x272098: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27209Cu;
        goto label_27209c;
    }
    ctx->pc = 0x272094u;
    SET_GPR_U32(ctx, 31, 0x27209Cu);
    ctx->pc = 0x272098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272094u;
    // 0x272098: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x272094u, 0x27209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27209Cu;
label_27209c:
    // 0x27209c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2720a0:
    // 0x2720a0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2720a4:
    // 0x2720a4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2720a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2720a8:
    // 0x2720a8: 0xa0f809  jalr        $a1
label_2720ac:
    if (ctx->pc == 0x2720ACu) {
        ctx->pc = 0x2720ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720A8u;
        // 0x2720ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720B0u;
        goto label_2720b0;
    }
    ctx->pc = 0x2720A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2720B0u);
        ctx->pc = 0x2720ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720A8u;
        // 0x2720ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2720A8u, 0x2720B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2720B0u;
label_2720b0:
    // 0x2720b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2720b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2720b4:
    // 0x2720b4: 0xc087016  jal         func_21C058
label_2720b8:
    if (ctx->pc == 0x2720B8u) {
        ctx->pc = 0x2720B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720B4u;
        // 0x2720b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720BCu;
        goto label_2720bc;
    }
    ctx->pc = 0x2720B4u;
    SET_GPR_U32(ctx, 31, 0x2720BCu);
    ctx->pc = 0x2720B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720B4u;
    // 0x2720b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2720B4u, 0x2720BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720BCu;
label_2720bc:
    // 0x2720bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2720bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2720c0:
    // 0x2720c0: 0xc089990  jal         func_226640
label_2720c4:
    if (ctx->pc == 0x2720C4u) {
        ctx->pc = 0x2720C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720C0u;
        // 0x2720c4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720C8u;
        goto label_2720c8;
    }
    ctx->pc = 0x2720C0u;
    SET_GPR_U32(ctx, 31, 0x2720C8u);
    ctx->pc = 0x2720C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720C0u;
    // 0x2720c4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2720C0u, 0x2720C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720C8u;
label_2720c8:
    // 0x2720c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2720c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2720cc:
    // 0x2720cc: 0xc05d4f6  jal         func_1753D8
label_2720d0:
    if (ctx->pc == 0x2720D0u) {
        ctx->pc = 0x2720D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720CCu;
        // 0x2720d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720D4u;
        goto label_2720d4;
    }
    ctx->pc = 0x2720CCu;
    SET_GPR_U32(ctx, 31, 0x2720D4u);
    ctx->pc = 0x2720D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720CCu;
    // 0x2720d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2720CCu, 0x2720D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720D4u;
label_2720d4:
    // 0x2720d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2720d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2720d8:
    // 0x2720d8: 0xc05d53a  jal         func_1754E8
label_2720dc:
    if (ctx->pc == 0x2720DCu) {
        ctx->pc = 0x2720DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720D8u;
        // 0x2720dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720E0u;
        goto label_2720e0;
    }
    ctx->pc = 0x2720D8u;
    SET_GPR_U32(ctx, 31, 0x2720E0u);
    ctx->pc = 0x2720DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720D8u;
    // 0x2720dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2720D8u, 0x2720E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720E0u;
label_2720e0:
    // 0x2720e0: 0xc041532  jal         func_1054C8
label_2720e4:
    if (ctx->pc == 0x2720E4u) {
        ctx->pc = 0x2720E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720E0u;
        // 0x2720e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720E8u;
        goto label_2720e8;
    }
    ctx->pc = 0x2720E0u;
    SET_GPR_U32(ctx, 31, 0x2720E8u);
    ctx->pc = 0x2720E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720E0u;
    // 0x2720e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2720E0u, 0x2720E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720E8u;
label_2720e8:
    // 0x2720e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2720e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2720ec:
    // 0x2720ec: 0xc041532  jal         func_1054C8
label_2720f0:
    if (ctx->pc == 0x2720F0u) {
        ctx->pc = 0x2720F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720ECu;
        // 0x2720f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720F4u;
        goto label_2720f4;
    }
    ctx->pc = 0x2720ECu;
    SET_GPR_U32(ctx, 31, 0x2720F4u);
    ctx->pc = 0x2720F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720ECu;
    // 0x2720f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2720ECu, 0x2720F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720F4u;
label_2720f4:
    // 0x2720f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2720f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2720f8:
    // 0x2720f8: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
label_2720fc:
    if (ctx->pc == 0x2720FCu) {
        ctx->pc = 0x2720FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720F8u;
        // 0x2720fc: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272100u;
        goto label_272100;
    }
    ctx->pc = 0x2720F8u;
    {
        const bool branch_taken_0x2720f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720F8u;
        // 0x2720fc: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720f8) {
            ctx->pc = 0x272170u;
            goto label_272170;
        }
    }
    ctx->pc = 0x272100u;
label_272100:
    // 0x272100: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272104:
    // 0x272104: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272108:
    // 0x272108: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27210c:
    // 0x27210c: 0x40f809  jalr        $v0
label_272110:
    if (ctx->pc == 0x272110u) {
        ctx->pc = 0x272110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27210Cu;
        // 0x272110: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272114u;
        goto label_272114;
    }
    ctx->pc = 0x27210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272114u);
        ctx->pc = 0x272110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27210Cu;
        // 0x272110: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27210Cu, 0x272114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272114u;
label_272114:
    // 0x272114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272118:
    // 0x272118: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x272118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
label_27211c:
    // 0x27211c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27211cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272120:
    // 0x272120: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x272120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_272124:
    // 0x272124: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272128:
    // 0x272128: 0xc099e80  jal         func_267A00
label_27212c:
    if (ctx->pc == 0x27212Cu) {
        ctx->pc = 0x27212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272128u;
        // 0x27212c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272130u;
        goto label_272130;
    }
    ctx->pc = 0x272128u;
    SET_GPR_U32(ctx, 31, 0x272130u);
    ctx->pc = 0x27212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272128u;
    // 0x27212c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x272128u, 0x272130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272130u;
label_272130:
    // 0x272130: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_272134:
    // 0x272134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272138:
    // 0x272138: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27213c:
    // 0x27213c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272140:
    // 0x272140: 0x40f809  jalr        $v0
label_272144:
    if (ctx->pc == 0x272144u) {
        ctx->pc = 0x272144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272140u;
        // 0x272144: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272148u;
        goto label_272148;
    }
    ctx->pc = 0x272140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272148u);
        ctx->pc = 0x272144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272140u;
        // 0x272144: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272140u, 0x272148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272148u;
label_272148:
    // 0x272148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27214c:
    // 0x27214c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27214cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272150:
    // 0x272150: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x272150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_272154:
    // 0x272154: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x272154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272158:
    // 0x272158: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27215c:
    // 0x27215c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x27215cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272160:
    // 0x272160: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272164:
    // 0x272164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272168:
    // 0x272168: 0xc04229e  jal         func_108A78
label_27216c:
    if (ctx->pc == 0x27216Cu) {
        ctx->pc = 0x27216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272168u;
        // 0x27216c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272170u;
        goto label_272170;
    }
    ctx->pc = 0x272168u;
    SET_GPR_U32(ctx, 31, 0x272170u);
    ctx->pc = 0x27216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272168u;
    // 0x27216c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x272168u, 0x272170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272170u;
label_272170:
    // 0x272170: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_272174:
    if (ctx->pc == 0x272174u) {
        ctx->pc = 0x272174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272170u;
        // 0x272174: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272178u;
        goto label_272178;
    }
    ctx->pc = 0x272170u;
    {
        const bool branch_taken_0x272170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x272174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272170u;
        // 0x272174: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272170) {
            ctx->pc = 0x272190u;
            goto label_272190;
        }
    }
    ctx->pc = 0x272178u;
label_272178:
    // 0x272178: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x272178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_27217c:
    // 0x27217c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x27217cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272180:
    // 0x272180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272184:
    // 0x272184: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272188:
    // 0x272188: 0xc041b20  jal         func_106C80
label_27218c:
    if (ctx->pc == 0x27218Cu) {
        ctx->pc = 0x27218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272188u;
        // 0x27218c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272190u;
        goto label_272190;
    }
    ctx->pc = 0x272188u;
    SET_GPR_U32(ctx, 31, 0x272190u);
    ctx->pc = 0x27218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272188u;
    // 0x27218c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x272188u, 0x272190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272190u;
label_272190:
    // 0x272190: 0xc05d484  jal         func_175210
label_272194:
    if (ctx->pc == 0x272194u) {
        ctx->pc = 0x272194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272190u;
        // 0x272194: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272198u;
        goto label_272198;
    }
    ctx->pc = 0x272190u;
    SET_GPR_U32(ctx, 31, 0x272198u);
    ctx->pc = 0x272194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272190u;
    // 0x272194: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x272190u, 0x272198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272198u;
label_272198:
    // 0x272198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27219c:
    // 0x27219c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x27219cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2721a0:
    // 0x2721a0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2721a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2721a4:
    // 0x2721a4: 0xa0f809  jalr        $a1
label_2721a8:
    if (ctx->pc == 0x2721A8u) {
        ctx->pc = 0x2721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721A4u;
        // 0x2721a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721ACu;
        goto label_2721ac;
    }
    ctx->pc = 0x2721A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2721ACu);
        ctx->pc = 0x2721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721A4u;
        // 0x2721a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2721A4u, 0x2721ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2721ACu;
label_2721ac:
    // 0x2721ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2721acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2721b0:
    // 0x2721b0: 0xc087016  jal         func_21C058
label_2721b4:
    if (ctx->pc == 0x2721B4u) {
        ctx->pc = 0x2721B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721B0u;
        // 0x2721b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721B8u;
        goto label_2721b8;
    }
    ctx->pc = 0x2721B0u;
    SET_GPR_U32(ctx, 31, 0x2721B8u);
    ctx->pc = 0x2721B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721B0u;
    // 0x2721b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2721B0u, 0x2721B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721B8u;
label_2721b8:
    // 0x2721b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2721b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2721bc:
    // 0x2721bc: 0xc089990  jal         func_226640
label_2721c0:
    if (ctx->pc == 0x2721C0u) {
        ctx->pc = 0x2721C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721BCu;
        // 0x2721c0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721C4u;
        goto label_2721c4;
    }
    ctx->pc = 0x2721BCu;
    SET_GPR_U32(ctx, 31, 0x2721C4u);
    ctx->pc = 0x2721C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721BCu;
    // 0x2721c0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2721BCu, 0x2721C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721C4u;
label_2721c4:
    // 0x2721c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2721c8:
    // 0x2721c8: 0xc05d4f6  jal         func_1753D8
label_2721cc:
    if (ctx->pc == 0x2721CCu) {
        ctx->pc = 0x2721CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721C8u;
        // 0x2721cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721D0u;
        goto label_2721d0;
    }
    ctx->pc = 0x2721C8u;
    SET_GPR_U32(ctx, 31, 0x2721D0u);
    ctx->pc = 0x2721CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721C8u;
    // 0x2721cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2721C8u, 0x2721D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721D0u;
label_2721d0:
    // 0x2721d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2721d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2721d4:
    // 0x2721d4: 0xc05d53a  jal         func_1754E8
label_2721d8:
    if (ctx->pc == 0x2721D8u) {
        ctx->pc = 0x2721D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721D4u;
        // 0x2721d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721DCu;
        goto label_2721dc;
    }
    ctx->pc = 0x2721D4u;
    SET_GPR_U32(ctx, 31, 0x2721DCu);
    ctx->pc = 0x2721D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721D4u;
    // 0x2721d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2721D4u, 0x2721DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721DCu;
label_2721dc:
    // 0x2721dc: 0x10000040  b           . + 4 + (0x40 << 2)
label_2721e0:
    if (ctx->pc == 0x2721E0u) {
        ctx->pc = 0x2721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721DCu;
        // 0x2721e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721E4u;
        goto label_2721e4;
    }
    ctx->pc = 0x2721DCu;
    {
        const bool branch_taken_0x2721dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721DCu;
        // 0x2721e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721dc) {
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x2721E4u;
label_2721e4:
    // 0x2721e4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2721e8:
    // 0x2721e8: 0x2451e250  addiu       $s1, $v0, -0x1DB0
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_2721ec:
    // 0x2721ec: 0xc041532  jal         func_1054C8
label_2721f0:
    if (ctx->pc == 0x2721F0u) {
        ctx->pc = 0x2721F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721ECu;
        // 0x2721f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721F4u;
        goto label_2721f4;
    }
    ctx->pc = 0x2721ECu;
    SET_GPR_U32(ctx, 31, 0x2721F4u);
    ctx->pc = 0x2721F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721ECu;
    // 0x2721f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2721ECu, 0x2721F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721F4u;
label_2721f4:
    // 0x2721f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2721f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2721f8:
    // 0x2721f8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2721fc:
    if (ctx->pc == 0x2721FCu) {
        ctx->pc = 0x2721FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721F8u;
        // 0x2721fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272200u;
        goto label_272200;
    }
    ctx->pc = 0x2721F8u;
    {
        const bool branch_taken_0x2721f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2721f8) {
            ctx->pc = 0x2721FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2721F8u;
            // 0x2721fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272234u;
            goto label_272234;
        }
    }
    ctx->pc = 0x272200u;
label_272200:
    // 0x272200: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272204:
    // 0x272204: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272208:
    // 0x272208: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_27220c:
    // 0x27220c: 0x40f809  jalr        $v0
label_272210:
    if (ctx->pc == 0x272210u) {
        ctx->pc = 0x272210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27220Cu;
        // 0x272210: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272214u;
        goto label_272214;
    }
    ctx->pc = 0x27220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272214u);
        ctx->pc = 0x272210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27220Cu;
        // 0x272210: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27220Cu, 0x272214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272214u;
label_272214:
    // 0x272214: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x272214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272218:
    // 0x272218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27221c:
    // 0x27221c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272220:
    // 0x272220: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x272220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_272224:
    // 0x272224: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x272224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_272228:
    // 0x272228: 0xc041850  jal         func_106140
label_27222c:
    if (ctx->pc == 0x27222Cu) {
        ctx->pc = 0x27222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272228u;
        // 0x27222c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272230u;
        goto label_272230;
    }
    ctx->pc = 0x272228u;
    SET_GPR_U32(ctx, 31, 0x272230u);
    ctx->pc = 0x27222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272228u;
    // 0x27222c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106140u, 0x272228u, 0x272230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272230u;
label_272230:
    // 0x272230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272234:
    // 0x272234: 0xc089990  jal         func_226640
label_272238:
    if (ctx->pc == 0x272238u) {
        ctx->pc = 0x272238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272234u;
        // 0x272238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27223Cu;
        goto label_27223c;
    }
    ctx->pc = 0x272234u;
    SET_GPR_U32(ctx, 31, 0x27223Cu);
    ctx->pc = 0x272238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272234u;
    // 0x272238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x272234u, 0x27223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27223Cu;
label_27223c:
    // 0x27223c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272240:
    // 0x272240: 0xc05d4f6  jal         func_1753D8
label_272244:
    if (ctx->pc == 0x272244u) {
        ctx->pc = 0x272244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272240u;
        // 0x272244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272248u;
        goto label_272248;
    }
    ctx->pc = 0x272240u;
    SET_GPR_U32(ctx, 31, 0x272248u);
    ctx->pc = 0x272244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272240u;
    // 0x272244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x272240u, 0x272248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272248u;
label_272248:
    // 0x272248: 0xc041532  jal         func_1054C8
label_27224c:
    if (ctx->pc == 0x27224Cu) {
        ctx->pc = 0x27224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272248u;
        // 0x27224c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272250u;
        goto label_272250;
    }
    ctx->pc = 0x272248u;
    SET_GPR_U32(ctx, 31, 0x272250u);
    ctx->pc = 0x27224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272248u;
    // 0x27224c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272248u, 0x272250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272250u;
label_272250:
    // 0x272250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x272250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272254:
    // 0x272254: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_272258:
    if (ctx->pc == 0x272258u) {
        ctx->pc = 0x272258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272254u;
        // 0x272258: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27225Cu;
        goto label_27225c;
    }
    ctx->pc = 0x272254u;
    {
        const bool branch_taken_0x272254 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x272258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272254u;
        // 0x272258: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272254) {
            ctx->pc = 0x2722A8u;
            goto label_2722a8;
        }
    }
    ctx->pc = 0x27225Cu;
label_27225c:
    // 0x27225c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_272260:
    // 0x272260: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272264:
    // 0x272264: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272268:
    // 0x272268: 0x40f809  jalr        $v0
label_27226c:
    if (ctx->pc == 0x27226Cu) {
        ctx->pc = 0x27226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272268u;
        // 0x27226c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272270u;
        goto label_272270;
    }
    ctx->pc = 0x272268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272270u);
        ctx->pc = 0x27226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272268u;
        // 0x27226c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272268u, 0x272270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272270u;
label_272270:
    // 0x272270: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x272270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_272274:
    // 0x272274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272278:
    // 0x272278: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27227c:
    // 0x27227c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272280:
    // 0x272280: 0x40f809  jalr        $v0
label_272284:
    if (ctx->pc == 0x272284u) {
        ctx->pc = 0x272284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272280u;
        // 0x272284: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272288u;
        goto label_272288;
    }
    ctx->pc = 0x272280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272288u);
        ctx->pc = 0x272284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272280u;
        // 0x272284: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272280u, 0x272288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272288u;
label_272288:
    // 0x272288: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x272288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27228c:
    // 0x27228c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27228cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272290:
    // 0x272290: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272294:
    // 0x272294: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272298:
    // 0x272298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27229c:
    // 0x27229c: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x27229cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2722a0:
    // 0x2722a0: 0xc042114  jal         func_108450
label_2722a4:
    if (ctx->pc == 0x2722A4u) {
        ctx->pc = 0x2722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A0u;
        // 0x2722a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722A8u;
        goto label_2722a8;
    }
    ctx->pc = 0x2722A0u;
    SET_GPR_U32(ctx, 31, 0x2722A8u);
    ctx->pc = 0x2722A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722A0u;
    // 0x2722a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108450u, 0x2722A0u, 0x2722A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722A8u;
label_2722a8:
    // 0x2722a8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2722a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2722ac:
    // 0x2722ac: 0xc05d4f6  jal         func_1753D8
label_2722b0:
    if (ctx->pc == 0x2722B0u) {
        ctx->pc = 0x2722B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722ACu;
        // 0x2722b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722B4u;
        goto label_2722b4;
    }
    ctx->pc = 0x2722ACu;
    SET_GPR_U32(ctx, 31, 0x2722B4u);
    ctx->pc = 0x2722B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722ACu;
    // 0x2722b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2722ACu, 0x2722B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722B4u;
label_2722b4:
    // 0x2722b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2722b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2722b8:
    // 0x2722b8: 0xc089990  jal         func_226640
label_2722bc:
    if (ctx->pc == 0x2722BCu) {
        ctx->pc = 0x2722BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722B8u;
        // 0x2722bc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722C0u;
        goto label_2722c0;
    }
    ctx->pc = 0x2722B8u;
    SET_GPR_U32(ctx, 31, 0x2722C0u);
    ctx->pc = 0x2722BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722B8u;
    // 0x2722bc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2722B8u, 0x2722C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722C0u;
label_2722c0:
    // 0x2722c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2722c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2722c4:
    // 0x2722c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2722c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2722c8:
    // 0x2722c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2722c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2722cc:
    // 0x2722cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2722ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2722d0:
    // 0x2722d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2722d4:
    // 0x2722d4: 0xc0875a0  jal         func_21D680
label_2722d8:
    if (ctx->pc == 0x2722D8u) {
        ctx->pc = 0x2722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722D4u;
        // 0x2722d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722DCu;
        goto label_2722dc;
    }
    ctx->pc = 0x2722D4u;
    SET_GPR_U32(ctx, 31, 0x2722DCu);
    ctx->pc = 0x2722D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722D4u;
    // 0x2722d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x2722D4u, 0x2722DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722DCu;
label_2722dc:
    // 0x2722dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2722dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2722e0:
    // 0x2722e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2722e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2722e4:
    // 0x2722e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2722e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2722e8:
    // 0x2722e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2722e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2722ec:
    // 0x2722ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2722ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2722f0:
    // 0x2722f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2722f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2722f4:
    // 0x2722f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2722f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2722f8:
    // 0x2722f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2722f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2722fc:
    // 0x2722fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2722fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_272300:
    // 0x272300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_272304:
    // 0x272304: 0x3e00008  jr          $ra
label_272308:
    if (ctx->pc == 0x272308u) {
        ctx->pc = 0x272308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272304u;
        // 0x272308: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27230Cu;
        goto label_27230c;
    }
    ctx->pc = 0x272304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272304u;
        // 0x272308: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27230Cu;
label_27230c:
    // 0x27230c: 0x0  nop
    ctx->pc = 0x27230cu;
    // NOP
    ctx->pc = 0x272310u;
}
