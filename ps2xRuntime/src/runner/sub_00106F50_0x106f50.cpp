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

// Function: sub_00106F50
// Address: 0x106f50 - 0x1072a8
void sub_00106F50_0x106f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106F50_0x106f50");
#endif

    switch (ctx->pc) {
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        case 0x106f74u: goto label_106f74;
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        case 0x106fd8u: goto label_106fd8;
        case 0x106fdcu: goto label_106fdc;
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        case 0x107030u: goto label_107030;
        case 0x107034u: goto label_107034;
        case 0x107038u: goto label_107038;
        case 0x10703cu: goto label_10703c;
        case 0x107040u: goto label_107040;
        case 0x107044u: goto label_107044;
        case 0x107048u: goto label_107048;
        case 0x10704cu: goto label_10704c;
        case 0x107050u: goto label_107050;
        case 0x107054u: goto label_107054;
        case 0x107058u: goto label_107058;
        case 0x10705cu: goto label_10705c;
        case 0x107060u: goto label_107060;
        case 0x107064u: goto label_107064;
        case 0x107068u: goto label_107068;
        case 0x10706cu: goto label_10706c;
        case 0x107070u: goto label_107070;
        case 0x107074u: goto label_107074;
        case 0x107078u: goto label_107078;
        case 0x10707cu: goto label_10707c;
        case 0x107080u: goto label_107080;
        case 0x107084u: goto label_107084;
        case 0x107088u: goto label_107088;
        case 0x10708cu: goto label_10708c;
        case 0x107090u: goto label_107090;
        case 0x107094u: goto label_107094;
        case 0x107098u: goto label_107098;
        case 0x10709cu: goto label_10709c;
        case 0x1070a0u: goto label_1070a0;
        case 0x1070a4u: goto label_1070a4;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070acu: goto label_1070ac;
        case 0x1070b0u: goto label_1070b0;
        case 0x1070b4u: goto label_1070b4;
        case 0x1070b8u: goto label_1070b8;
        case 0x1070bcu: goto label_1070bc;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070c8u: goto label_1070c8;
        case 0x1070ccu: goto label_1070cc;
        case 0x1070d0u: goto label_1070d0;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070d8u: goto label_1070d8;
        case 0x1070dcu: goto label_1070dc;
        case 0x1070e0u: goto label_1070e0;
        case 0x1070e4u: goto label_1070e4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070ecu: goto label_1070ec;
        case 0x1070f0u: goto label_1070f0;
        case 0x1070f4u: goto label_1070f4;
        case 0x1070f8u: goto label_1070f8;
        case 0x1070fcu: goto label_1070fc;
        case 0x107100u: goto label_107100;
        case 0x107104u: goto label_107104;
        case 0x107108u: goto label_107108;
        case 0x10710cu: goto label_10710c;
        case 0x107110u: goto label_107110;
        case 0x107114u: goto label_107114;
        case 0x107118u: goto label_107118;
        case 0x10711cu: goto label_10711c;
        case 0x107120u: goto label_107120;
        case 0x107124u: goto label_107124;
        case 0x107128u: goto label_107128;
        case 0x10712cu: goto label_10712c;
        case 0x107130u: goto label_107130;
        case 0x107134u: goto label_107134;
        case 0x107138u: goto label_107138;
        case 0x10713cu: goto label_10713c;
        case 0x107140u: goto label_107140;
        case 0x107144u: goto label_107144;
        case 0x107148u: goto label_107148;
        case 0x10714cu: goto label_10714c;
        case 0x107150u: goto label_107150;
        case 0x107154u: goto label_107154;
        case 0x107158u: goto label_107158;
        case 0x10715cu: goto label_10715c;
        case 0x107160u: goto label_107160;
        case 0x107164u: goto label_107164;
        case 0x107168u: goto label_107168;
        case 0x10716cu: goto label_10716c;
        case 0x107170u: goto label_107170;
        case 0x107174u: goto label_107174;
        case 0x107178u: goto label_107178;
        case 0x10717cu: goto label_10717c;
        case 0x107180u: goto label_107180;
        case 0x107184u: goto label_107184;
        case 0x107188u: goto label_107188;
        case 0x10718cu: goto label_10718c;
        case 0x107190u: goto label_107190;
        case 0x107194u: goto label_107194;
        case 0x107198u: goto label_107198;
        case 0x10719cu: goto label_10719c;
        case 0x1071a0u: goto label_1071a0;
        case 0x1071a4u: goto label_1071a4;
        case 0x1071a8u: goto label_1071a8;
        case 0x1071acu: goto label_1071ac;
        case 0x1071b0u: goto label_1071b0;
        case 0x1071b4u: goto label_1071b4;
        case 0x1071b8u: goto label_1071b8;
        case 0x1071bcu: goto label_1071bc;
        case 0x1071c0u: goto label_1071c0;
        case 0x1071c4u: goto label_1071c4;
        case 0x1071c8u: goto label_1071c8;
        case 0x1071ccu: goto label_1071cc;
        case 0x1071d0u: goto label_1071d0;
        case 0x1071d4u: goto label_1071d4;
        case 0x1071d8u: goto label_1071d8;
        case 0x1071dcu: goto label_1071dc;
        case 0x1071e0u: goto label_1071e0;
        case 0x1071e4u: goto label_1071e4;
        case 0x1071e8u: goto label_1071e8;
        case 0x1071ecu: goto label_1071ec;
        case 0x1071f0u: goto label_1071f0;
        case 0x1071f4u: goto label_1071f4;
        case 0x1071f8u: goto label_1071f8;
        case 0x1071fcu: goto label_1071fc;
        case 0x107200u: goto label_107200;
        case 0x107204u: goto label_107204;
        case 0x107208u: goto label_107208;
        case 0x10720cu: goto label_10720c;
        case 0x107210u: goto label_107210;
        case 0x107214u: goto label_107214;
        case 0x107218u: goto label_107218;
        case 0x10721cu: goto label_10721c;
        case 0x107220u: goto label_107220;
        case 0x107224u: goto label_107224;
        case 0x107228u: goto label_107228;
        case 0x10722cu: goto label_10722c;
        case 0x107230u: goto label_107230;
        case 0x107234u: goto label_107234;
        case 0x107238u: goto label_107238;
        case 0x10723cu: goto label_10723c;
        case 0x107240u: goto label_107240;
        case 0x107244u: goto label_107244;
        case 0x107248u: goto label_107248;
        case 0x10724cu: goto label_10724c;
        case 0x107250u: goto label_107250;
        case 0x107254u: goto label_107254;
        case 0x107258u: goto label_107258;
        case 0x10725cu: goto label_10725c;
        case 0x107260u: goto label_107260;
        case 0x107264u: goto label_107264;
        case 0x107268u: goto label_107268;
        case 0x10726cu: goto label_10726c;
        case 0x107270u: goto label_107270;
        case 0x107274u: goto label_107274;
        case 0x107278u: goto label_107278;
        case 0x10727cu: goto label_10727c;
        case 0x107280u: goto label_107280;
        case 0x107284u: goto label_107284;
        case 0x107288u: goto label_107288;
        case 0x10728cu: goto label_10728c;
        case 0x107290u: goto label_107290;
        case 0x107294u: goto label_107294;
        case 0x107298u: goto label_107298;
        case 0x10729cu: goto label_10729c;
        case 0x1072a0u: goto label_1072a0;
        case 0x1072a4u: goto label_1072a4;
        default: break;
    }

    ctx->pc = 0x106f50u;

label_106f50:
    // 0x106f50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_106f54:
    // 0x106f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_106f58:
    // 0x106f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_106f5c:
    // 0x106f5c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x106f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_106f60:
    // 0x106f60: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x106f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_106f64:
    // 0x106f64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x106f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_106f68:
    // 0x106f68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x106f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f6c:
    // 0x106f6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x106f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_106f70:
    // 0x106f70: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x106f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106f74:
    // 0x106f74: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x106f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_106f78:
    // 0x106f78: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_106f7c:
    // 0x106f7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x106f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_106f80:
    // 0x106f80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x106f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106f84:
    // 0x106f84: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x106f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_106f88:
    // 0x106f88: 0x24424b08  addiu       $v0, $v0, 0x4B08
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19208));
label_106f8c:
    // 0x106f8c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x106f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_106f90:
    // 0x106f90: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x106f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_106f94:
    // 0x106f94: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x106f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_106f98:
    // 0x106f98: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x106f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_106f9c:
    // 0x106f9c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x106f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_106fa0:
    // 0x106fa0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x106fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_106fa4:
    // 0x106fa4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x106fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_106fa8:
    // 0x106fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x106fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106fac:
    // 0x106fac: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x106facu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_106fb0:
    // 0x106fb0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x106fb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_106fb4:
    // 0x106fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106fb8:
    // 0x106fb8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x106fb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_106fbc:
    // 0x106fbc: 0xae950004  sw          $s5, 0x4($s4)
    ctx->pc = 0x106fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 21));
label_106fc0:
    // 0x106fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106fc4:
    // 0x106fc4: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x106fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_106fc8:
    // 0x106fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106fcc:
    // 0x106fcc: 0xae8a0034  sw          $t2, 0x34($s4)
    ctx->pc = 0x106fccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 10));
label_106fd0:
    // 0x106fd0: 0xae8b0038  sw          $t3, 0x38($s4)
    ctx->pc = 0x106fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 11));
label_106fd4:
    // 0x106fd4: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x106fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_106fd8:
    // 0x106fd8: 0xc05d420  jal         func_175080
label_106fdc:
    if (ctx->pc == 0x106FDCu) {
        ctx->pc = 0x106FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD8u;
        // 0x106fdc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FE0u;
        goto label_106fe0;
    }
    ctx->pc = 0x106FD8u;
    SET_GPR_U32(ctx, 31, 0x106FE0u);
    ctx->pc = 0x106FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FD8u;
    // 0x106fdc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x106FD8u, 0x106FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FE0u;
label_106fe0:
    // 0x106fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x106fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106fe4:
    // 0x106fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106fe8:
    // 0x106fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106fec:
    // 0x106fec: 0xc05d420  jal         func_175080
label_106ff0:
    if (ctx->pc == 0x106FF0u) {
        ctx->pc = 0x106FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FECu;
        // 0x106ff0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FF4u;
        goto label_106ff4;
    }
    ctx->pc = 0x106FECu;
    SET_GPR_U32(ctx, 31, 0x106FF4u);
    ctx->pc = 0x106FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FECu;
    // 0x106ff0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x106FECu, 0x106FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FF4u;
label_106ff4:
    // 0x106ff4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x106ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_106ff8:
    // 0x106ff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106ffc:
    // 0x106ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107000:
    // 0x107000: 0xc05d420  jal         func_175080
label_107004:
    if (ctx->pc == 0x107004u) {
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107008u;
        goto label_107008;
    }
    ctx->pc = 0x107000u;
    SET_GPR_U32(ctx, 31, 0x107008u);
    ctx->pc = 0x107004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107000u;
    // 0x107004: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x107000u, 0x107008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107008u;
label_107008:
    // 0x107008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10700c:
    // 0x10700c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10700cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_107010:
    // 0x107010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107014:
    // 0x107014: 0xc05d420  jal         func_175080
label_107018:
    if (ctx->pc == 0x107018u) {
        ctx->pc = 0x107018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107014u;
        // 0x107018: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10701Cu;
        goto label_10701c;
    }
    ctx->pc = 0x107014u;
    SET_GPR_U32(ctx, 31, 0x10701Cu);
    ctx->pc = 0x107018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107014u;
    // 0x107018: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x107014u, 0x10701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10701Cu;
label_10701c:
    // 0x10701c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_107020:
    // 0x107020: 0x8ea502b8  lw          $a1, 0x2B8($s5)
    ctx->pc = 0x107020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
label_107024:
    // 0x107024: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x107024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_107028:
    // 0x107028: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x107028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10702c:
    // 0x10702c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_107030:
    // 0x107030: 0x40f809  jalr        $v0
label_107034:
    if (ctx->pc == 0x107034u) {
        ctx->pc = 0x107034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107030u;
        // 0x107034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107038u;
        goto label_107038;
    }
    ctx->pc = 0x107030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107038u);
        ctx->pc = 0x107034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107030u;
        // 0x107034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107030u, 0x107038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107038u;
label_107038:
    // 0x107038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10703c:
    // 0x10703c: 0xc042ed8  jal         func_10BB60
label_107040:
    if (ctx->pc == 0x107040u) {
        ctx->pc = 0x107040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10703Cu;
        // 0x107040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107044u;
        goto label_107044;
    }
    ctx->pc = 0x10703Cu;
    SET_GPR_U32(ctx, 31, 0x107044u);
    ctx->pc = 0x107040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10703Cu;
    // 0x107040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10703Cu, 0x107044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107044u;
label_107044:
    // 0x107044: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x107044u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_107048:
    // 0x107048: 0x8ea502b8  lw          $a1, 0x2B8($s5)
    ctx->pc = 0x107048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
label_10704c:
    // 0x10704c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_107050:
    // 0x107050: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x107050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_107054:
    // 0x107054: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_107058:
    // 0x107058: 0x40f809  jalr        $v0
label_10705c:
    if (ctx->pc == 0x10705Cu) {
        ctx->pc = 0x10705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107058u;
        // 0x10705c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107060u;
        goto label_107060;
    }
    ctx->pc = 0x107058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107060u);
        ctx->pc = 0x10705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107058u;
        // 0x10705c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107058u, 0x107060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107060u;
label_107060:
    // 0x107060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107064:
    // 0x107064: 0xc042ed8  jal         func_10BB60
label_107068:
    if (ctx->pc == 0x107068u) {
        ctx->pc = 0x107068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107064u;
        // 0x107068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10706Cu;
        goto label_10706c;
    }
    ctx->pc = 0x107064u;
    SET_GPR_U32(ctx, 31, 0x10706Cu);
    ctx->pc = 0x107068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107064u;
    // 0x107068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x107064u, 0x10706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10706Cu;
label_10706c:
    // 0x10706c: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x10706cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_107070:
    // 0x107070: 0x8ea502b8  lw          $a1, 0x2B8($s5)
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
label_107074:
    // 0x107074: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x107074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_107078:
    // 0x107078: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10707c:
    // 0x10707c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_107080:
    // 0x107080: 0x40f809  jalr        $v0
label_107084:
    if (ctx->pc == 0x107084u) {
        ctx->pc = 0x107084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107080u;
        // 0x107084: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107088u;
        goto label_107088;
    }
    ctx->pc = 0x107080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107088u);
        ctx->pc = 0x107084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107080u;
        // 0x107084: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107080u, 0x107088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107088u;
label_107088:
    // 0x107088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x107088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10708c:
    // 0x10708c: 0xc042ed8  jal         func_10BB60
label_107090:
    if (ctx->pc == 0x107090u) {
        ctx->pc = 0x107090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10708Cu;
        // 0x107090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107094u;
        goto label_107094;
    }
    ctx->pc = 0x10708Cu;
    SET_GPR_U32(ctx, 31, 0x107094u);
    ctx->pc = 0x107090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10708Cu;
    // 0x107090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10708Cu, 0x107094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107094u;
label_107094:
    // 0x107094: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x107094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_107098:
    // 0x107098: 0x8ea502b8  lw          $a1, 0x2B8($s5)
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
label_10709c:
    // 0x10709c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1070a0:
    // 0x1070a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1070a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1070a4:
    // 0x1070a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1070a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1070a8:
    // 0x1070a8: 0x40f809  jalr        $v0
label_1070ac:
    if (ctx->pc == 0x1070ACu) {
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070B0u;
        goto label_1070b0;
    }
    ctx->pc = 0x1070A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1070B0u);
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070A8u, 0x1070B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070B0u;
label_1070b0:
    // 0x1070b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1070b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1070b4:
    // 0x1070b4: 0xc042ed8  jal         func_10BB60
label_1070b8:
    if (ctx->pc == 0x1070B8u) {
        ctx->pc = 0x1070B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070B4u;
        // 0x1070b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070BCu;
        goto label_1070bc;
    }
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x1070B4u, 0x1070BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070BCu;
label_1070bc:
    // 0x1070bc: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1070bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1070c0:
    // 0x1070c0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1070c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1070c4:
    // 0x1070c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1070c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1070c8:
    // 0x1070c8: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1070c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_1070cc:
    // 0x1070cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1070ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1070d0:
    // 0x1070d0: 0xe6940030  swc1        $f20, 0x30($s4)
    ctx->pc = 0x1070d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_1070d4:
    // 0x1070d4: 0xe6950028  swc1        $f21, 0x28($s4)
    ctx->pc = 0x1070d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_1070d8:
    // 0x1070d8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1070dc:
    if (ctx->pc == 0x1070DCu) {
        ctx->pc = 0x1070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D8u;
        // 0x1070dc: 0xe695002c  swc1        $f21, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070E0u;
        goto label_1070e0;
    }
    ctx->pc = 0x1070D8u;
    {
        const bool branch_taken_0x1070d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D8u;
        // 0x1070dc: 0xe695002c  swc1        $f21, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070d8) {
            ctx->pc = 0x107120u;
            goto label_107120;
        }
    }
    ctx->pc = 0x1070E0u;
label_1070e0:
    // 0x1070e0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1070e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1070e4:
    // 0x1070e4: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1070e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1070e8:
    // 0x1070e8: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1070e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_1070ec:
    // 0x1070ec: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1070ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1070f0:
    // 0x1070f0: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1070f4:
    // 0x1070f4: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1070f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1070f8:
    // 0x1070f8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1070f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1070fc:
    // 0x1070fc: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1070fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_107100:
    // 0x107100: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_107104:
    // 0x107104: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107108:
    // 0x107108: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_10710c:
    // 0x10710c: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10710cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107110:
    // 0x107110: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_107114:
    // 0x107114: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x107114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107118:
    // 0x107118: 0x1000003e  b           . + 4 + (0x3E << 2)
label_10711c:
    if (ctx->pc == 0x10711Cu) {
        ctx->pc = 0x10711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107118u;
        // 0x10711c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107120u;
        goto label_107120;
    }
    ctx->pc = 0x107118u;
    {
        const bool branch_taken_0x107118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107118u;
        // 0x10711c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107118) {
            ctx->pc = 0x107214u;
            goto label_107214;
        }
    }
    ctx->pc = 0x107120u;
label_107120:
    // 0x107120: 0x3c013fc1  lui         $at, 0x3FC1
    ctx->pc = 0x107120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16321 << 16));
label_107124:
    // 0x107124: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x107124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_107128:
    // 0x107128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10712c:
    // 0x10712c: 0x0  nop
    ctx->pc = 0x10712cu;
    // NOP
label_107130:
    // 0x107130: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x107130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107134:
    // 0x107134: 0x0  nop
    ctx->pc = 0x107134u;
    // NOP
label_107138:
    // 0x107138: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_10713c:
    if (ctx->pc == 0x10713Cu) {
        ctx->pc = 0x107140u;
        goto label_107140;
    }
    ctx->pc = 0x107138u;
    {
        const bool branch_taken_0x107138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107138) {
            ctx->pc = 0x107180u;
            goto label_107180;
        }
    }
    ctx->pc = 0x107140u;
label_107140:
    // 0x107140: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_107144:
    // 0x107144: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107148:
    // 0x107148: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_10714c:
    // 0x10714c: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10714cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107150:
    // 0x107150: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x107150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_107154:
    // 0x107154: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x107154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107158:
    // 0x107158: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x107158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_10715c:
    // 0x10715c: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10715cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_107160:
    // 0x107160: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x107160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_107164:
    // 0x107164: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x107164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107168:
    // 0x107168: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_10716c:
    // 0x10716c: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10716cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107170:
    // 0x107170: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x107170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_107174:
    // 0x107174: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x107174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107178:
    // 0x107178: 0x10000026  b           . + 4 + (0x26 << 2)
label_10717c:
    if (ctx->pc == 0x10717Cu) {
        ctx->pc = 0x10717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107178u;
        // 0x10717c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107180u;
        goto label_107180;
    }
    ctx->pc = 0x107178u;
    {
        const bool branch_taken_0x107178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107178u;
        // 0x10717c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107178) {
            ctx->pc = 0x107214u;
            goto label_107214;
        }
    }
    ctx->pc = 0x107180u;
label_107180:
    // 0x107180: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x107180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_107184:
    // 0x107184: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x107184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_107188:
    // 0x107188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10718c:
    // 0x10718c: 0x0  nop
    ctx->pc = 0x10718cu;
    // NOP
label_107190:
    // 0x107190: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x107190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_107194:
    // 0x107194: 0x0  nop
    ctx->pc = 0x107194u;
    // NOP
label_107198:
    // 0x107198: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_10719c:
    if (ctx->pc == 0x10719Cu) {
        ctx->pc = 0x10719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107198u;
        // 0x10719c: 0x8e830018  lw          $v1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1071A0u;
        goto label_1071a0;
    }
    ctx->pc = 0x107198u;
    {
        const bool branch_taken_0x107198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107198u;
        // 0x10719c: 0x8e830018  lw          $v1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107198) {
            ctx->pc = 0x1071DCu;
            goto label_1071dc;
        }
    }
    ctx->pc = 0x1071A0u;
label_1071a0:
    // 0x1071a0: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1071a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1071a4:
    // 0x1071a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1071a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1071a8:
    // 0x1071a8: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1071a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1071ac:
    // 0x1071ac: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1071acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1071b0:
    // 0x1071b0: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1071b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1071b4:
    // 0x1071b4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1071b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1071b8:
    // 0x1071b8: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1071b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_1071bc:
    // 0x1071bc: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1071bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1071c0:
    // 0x1071c0: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1071c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1071c4:
    // 0x1071c4: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_1071c8:
    // 0x1071c8: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1071c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1071cc:
    // 0x1071cc: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1071ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1071d0:
    // 0x1071d0: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1071d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1071d4:
    // 0x1071d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1071d8:
    if (ctx->pc == 0x1071D8u) {
        ctx->pc = 0x1071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071D4u;
        // 0x1071d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1071DCu;
        goto label_1071dc;
    }
    ctx->pc = 0x1071D4u;
    {
        const bool branch_taken_0x1071d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071D4u;
        // 0x1071d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071d4) {
            ctx->pc = 0x107214u;
            goto label_107214;
        }
    }
    ctx->pc = 0x1071DCu;
label_1071dc:
    // 0x1071dc: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1071dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_1071e0:
    // 0x1071e0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1071e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1071e4:
    // 0x1071e4: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x1071e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_1071e8:
    // 0x1071e8: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1071ec:
    // 0x1071ec: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1071ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1071f0:
    // 0x1071f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1071f4:
    // 0x1071f4: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x1071f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_1071f8:
    // 0x1071f8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1071f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1071fc:
    // 0x1071fc: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x1071fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_107200:
    // 0x107200: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_107204:
    // 0x107204: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x107204u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_107208:
    // 0x107208: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x107208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_10720c:
    // 0x10720c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10720cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_107210:
    // 0x107210: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x107210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_107214:
    // 0x107214: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x107214u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_107218:
    // 0x107218: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x107218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_10721c:
    // 0x10721c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107220:
    // 0x107220: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x107220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107224:
    // 0x107224: 0xc041164  jal         func_104590
label_107228:
    if (ctx->pc == 0x107228u) {
        ctx->pc = 0x107228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107224u;
        // 0x107228: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10722Cu;
        goto label_10722c;
    }
    ctx->pc = 0x107224u;
    SET_GPR_U32(ctx, 31, 0x10722Cu);
    ctx->pc = 0x107228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107224u;
    // 0x107228: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x107224u, 0x10722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10722Cu;
label_10722c:
    // 0x10722c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x10722cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_107230:
    // 0x107230: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x107230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_107234:
    // 0x107234: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x107234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107238:
    // 0x107238: 0xc041164  jal         func_104590
label_10723c:
    if (ctx->pc == 0x10723Cu) {
        ctx->pc = 0x10723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107238u;
        // 0x10723c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107240u;
        goto label_107240;
    }
    ctx->pc = 0x107238u;
    SET_GPR_U32(ctx, 31, 0x107240u);
    ctx->pc = 0x10723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107238u;
    // 0x10723c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x107238u, 0x107240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107240u;
label_107240:
    // 0x107240: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x107240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_107244:
    // 0x107244: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x107244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_107248:
    // 0x107248: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x107248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10724c:
    // 0x10724c: 0xc041164  jal         func_104590
label_107250:
    if (ctx->pc == 0x107250u) {
        ctx->pc = 0x107250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10724Cu;
        // 0x107250: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107254u;
        goto label_107254;
    }
    ctx->pc = 0x10724Cu;
    SET_GPR_U32(ctx, 31, 0x107254u);
    ctx->pc = 0x107250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10724Cu;
    // 0x107250: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10724Cu, 0x107254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107254u;
label_107254:
    // 0x107254: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x107254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_107258:
    // 0x107258: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x107258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10725c:
    // 0x10725c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_107260:
    // 0x107260: 0xc041164  jal         func_104590
label_107264:
    if (ctx->pc == 0x107264u) {
        ctx->pc = 0x107264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107260u;
        // 0x107264: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107268u;
        goto label_107268;
    }
    ctx->pc = 0x107260u;
    SET_GPR_U32(ctx, 31, 0x107268u);
    ctx->pc = 0x107264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107260u;
    // 0x107264: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x107260u, 0x107268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107268u;
label_107268:
    // 0x107268: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x107268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10726c:
    // 0x10726c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x10726cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_107270:
    // 0x107270: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x107270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_107274:
    // 0x107274: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x107274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_107278:
    // 0x107278: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x107278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10727c:
    // 0x10727c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x10727cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_107280:
    // 0x107280: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x107280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_107284:
    // 0x107284: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x107284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_107288:
    // 0x107288: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x107288u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10728c:
    // 0x10728c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x10728cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_107290:
    // 0x107290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107294:
    // 0x107294: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x107294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_107298:
    // 0x107298: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x107298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10729c:
    // 0x10729c: 0x3e00008  jr          $ra
label_1072a0:
    if (ctx->pc == 0x1072A0u) {
        ctx->pc = 0x1072A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10729Cu;
        // 0x1072a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1072A4u;
        goto label_1072a4;
    }
    ctx->pc = 0x10729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10729Cu;
        // 0x1072a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1072A4u;
label_1072a4:
    // 0x1072a4: 0x0  nop
    ctx->pc = 0x1072a4u;
    // NOP
    ctx->pc = 0x1072a8u;
}
