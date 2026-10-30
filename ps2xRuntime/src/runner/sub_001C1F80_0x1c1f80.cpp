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

// Function: sub_001C1F80
// Address: 0x1c1f80 - 0x1c2228
void sub_001C1F80_0x1c1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1F80_0x1c1f80");
#endif

    switch (ctx->pc) {
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        case 0x1c1ff8u: goto label_1c1ff8;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2000u: goto label_1c2000;
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c200cu: goto label_1c200c;
        case 0x1c2010u: goto label_1c2010;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2018u: goto label_1c2018;
        case 0x1c201cu: goto label_1c201c;
        case 0x1c2020u: goto label_1c2020;
        case 0x1c2024u: goto label_1c2024;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2030u: goto label_1c2030;
        case 0x1c2034u: goto label_1c2034;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c2040u: goto label_1c2040;
        case 0x1c2044u: goto label_1c2044;
        case 0x1c2048u: goto label_1c2048;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2054u: goto label_1c2054;
        case 0x1c2058u: goto label_1c2058;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2060u: goto label_1c2060;
        case 0x1c2064u: goto label_1c2064;
        case 0x1c2068u: goto label_1c2068;
        case 0x1c206cu: goto label_1c206c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2074u: goto label_1c2074;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c207cu: goto label_1c207c;
        case 0x1c2080u: goto label_1c2080;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c2088u: goto label_1c2088;
        case 0x1c208cu: goto label_1c208c;
        case 0x1c2090u: goto label_1c2090;
        case 0x1c2094u: goto label_1c2094;
        case 0x1c2098u: goto label_1c2098;
        case 0x1c209cu: goto label_1c209c;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20a4u: goto label_1c20a4;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20acu: goto label_1c20ac;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20b4u: goto label_1c20b4;
        case 0x1c20b8u: goto label_1c20b8;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20c4u: goto label_1c20c4;
        case 0x1c20c8u: goto label_1c20c8;
        case 0x1c20ccu: goto label_1c20cc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20d4u: goto label_1c20d4;
        case 0x1c20d8u: goto label_1c20d8;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e0u: goto label_1c20e0;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20e8u: goto label_1c20e8;
        case 0x1c20ecu: goto label_1c20ec;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c20f4u: goto label_1c20f4;
        case 0x1c20f8u: goto label_1c20f8;
        case 0x1c20fcu: goto label_1c20fc;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2104u: goto label_1c2104;
        case 0x1c2108u: goto label_1c2108;
        case 0x1c210cu: goto label_1c210c;
        case 0x1c2110u: goto label_1c2110;
        case 0x1c2114u: goto label_1c2114;
        case 0x1c2118u: goto label_1c2118;
        case 0x1c211cu: goto label_1c211c;
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c219cu: goto label_1c219c;
        case 0x1c21a0u: goto label_1c21a0;
        case 0x1c21a4u: goto label_1c21a4;
        case 0x1c21a8u: goto label_1c21a8;
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21b0u: goto label_1c21b0;
        case 0x1c21b4u: goto label_1c21b4;
        case 0x1c21b8u: goto label_1c21b8;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21c4u: goto label_1c21c4;
        case 0x1c21c8u: goto label_1c21c8;
        case 0x1c21ccu: goto label_1c21cc;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21d4u: goto label_1c21d4;
        case 0x1c21d8u: goto label_1c21d8;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21e0u: goto label_1c21e0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21e8u: goto label_1c21e8;
        case 0x1c21ecu: goto label_1c21ec;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c21f8u: goto label_1c21f8;
        case 0x1c21fcu: goto label_1c21fc;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2208u: goto label_1c2208;
        case 0x1c220cu: goto label_1c220c;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2214u: goto label_1c2214;
        case 0x1c2218u: goto label_1c2218;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2220u: goto label_1c2220;
        case 0x1c2224u: goto label_1c2224;
        default: break;
    }

    ctx->pc = 0x1c1f80u;

label_1c1f80:
    // 0x1c1f80: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1c1f84:
    // 0x1c1f84: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c1f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1c1f88:
    // 0x1c1f88: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1c1f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1c1f8c:
    // 0x1c1f8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f90:
    // 0x1c1f90: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1c1f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_1c1f94:
    // 0x1c1f94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c1f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f98:
    // 0x1c1f98: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1c1f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1c1f9c:
    // 0x1c1f9c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fa0:
    // 0x1c1fa0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c1fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1c1fa4:
    // 0x1c1fa4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1c1fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fa8:
    // 0x1c1fa8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1c1fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_1c1fac:
    // 0x1c1fac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c1facu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c1fb0:
    // 0x1c1fb0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1c1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_1c1fb4:
    // 0x1c1fb4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1c1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_1c1fb8:
    // 0x1c1fb8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1c1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_1c1fbc:
    // 0x1c1fbc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1c1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1c1fc0:
    // 0x1c1fc0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c1fc4:
    // 0x1c1fc4: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_1c1fc8:
    if (ctx->pc == 0x1C1FC8u) {
        ctx->pc = 0x1C1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FC4u;
        // 0x1c1fc8: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FCCu;
        goto label_1c1fcc;
    }
    ctx->pc = 0x1C1FC4u;
    {
        const bool branch_taken_0x1c1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FC4u;
        // 0x1c1fc8: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fc4) {
            ctx->pc = 0x1C21F4u;
            goto label_1c21f4;
        }
    }
    ctx->pc = 0x1C1FCCu;
label_1c1fcc:
    // 0x1c1fcc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1c1fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c1fd0:
    // 0x1c1fd0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1fd4:
    // 0x1c1fd4: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x1c1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1c1fd8:
    // 0x1c1fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fdc:
    // 0x1c1fdc: 0x7e2203c0  sq          $v0, 0x3C0($s1)
    ctx->pc = 0x1c1fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 960), GPR_VEC(ctx, 2));
label_1c1fe0:
    // 0x1c1fe0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c1fe4:
    // 0x1c1fe4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1c1fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1c1fe8:
    // 0x1c1fe8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1c1fec:
    // 0x1c1fec: 0xc0683f4  jal         func_1A0FD0
label_1c1ff0:
    if (ctx->pc == 0x1C1FF0u) {
        ctx->pc = 0x1C1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FECu;
        // 0x1c1ff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FF4u;
        goto label_1c1ff4;
    }
    ctx->pc = 0x1C1FECu;
    SET_GPR_U32(ctx, 31, 0x1C1FF4u);
    ctx->pc = 0x1C1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FECu;
    // 0x1c1ff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1C1FECu, 0x1C1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF4u;
label_1c1ff4:
    // 0x1c1ff4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1c1ff8:
    // 0x1c1ff8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c1ffc:
    // 0x1c1ffc: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c2000:
    // 0x1c2000: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c2004:
    // 0x1c2004: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1c2004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c2008:
    // 0x1c2008: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1c2008u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c200c:
    // 0x1c200c: 0x263301b0  addiu       $s3, $s1, 0x1B0
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_1c2010:
    // 0x1c2010: 0x263403d0  addiu       $s4, $s1, 0x3D0
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_1c2014:
    // 0x1c2014: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1c2014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2018:
    // 0x1c2018: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x1c2018u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c201c:
    // 0x1c201c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1c201cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_1c2020:
    // 0x1c2020: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x1c2020u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
label_1c2024:
    // 0x1c2024: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1c2024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1c2028:
    // 0x1c2028: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
label_1c202c:
    if (ctx->pc == 0x1C202Cu) {
        ctx->pc = 0x1C202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2028u;
        // 0x1c202c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2030u;
        goto label_1c2030;
    }
    ctx->pc = 0x1C2028u;
    {
        const bool branch_taken_0x1c2028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2028u;
        // 0x1c202c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2028) {
            ctx->pc = 0x1C2014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2014;
        }
    }
    ctx->pc = 0x1C2030u;
label_1c2030:
    // 0x1c2030: 0x7a0a0000  lq          $t2, 0x0($s0)
    ctx->pc = 0x1c2030u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2034:
    // 0x1c2034: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1c2038:
    // 0x1c2038: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x1c2038u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
label_1c203c:
    // 0x1c203c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c2040:
    // 0x1c2040: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_1c2044:
    // 0x1c2044: 0xa3a300a0  sb          $v1, 0xA0($sp)
    ctx->pc = 0x1c2044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
label_1c2048:
    // 0x1c2048: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1c2048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1c204c:
    // 0x1c204c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c2050:
    // 0x1c2050: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2054:
    // 0x1c2054: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x1c2054u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c2058:
    // 0x1c2058: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x1c2058u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c205c:
    // 0x1c205c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x1c205cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c2060:
    // 0x1c2060: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c2064:
    // 0x1c2064: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c2064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c2068:
    // 0x1c2068: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1c206c:
    // 0x1c206c: 0xae2600a8  sw          $a2, 0xA8($s1)
    ctx->pc = 0x1c206cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 6));
label_1c2070:
    // 0x1c2070: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c2070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1c2074:
    // 0x1c2074: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1c2074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_1c2078:
    // 0x1c2078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c207c:
    // 0x1c207c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c207cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c2080:
    // 0x1c2080: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2084:
    // 0x1c2084: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1c2084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2088:
    // 0x1c2088: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c208c:
    // 0x1c208c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c208cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c2090:
    // 0x1c2090: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1c2090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2094:
    // 0x1c2094: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1c2094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c2098:
    // 0x1c2098: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c2098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c209c:
    // 0x1c209c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c20a0:
    // 0x1c20a0: 0xc05e602  jal         func_179808
label_1c20a4:
    if (ctx->pc == 0x1C20A4u) {
        ctx->pc = 0x1C20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20A0u;
        // 0x1c20a4: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20A8u;
        goto label_1c20a8;
    }
    ctx->pc = 0x1C20A0u;
    SET_GPR_U32(ctx, 31, 0x1C20A8u);
    ctx->pc = 0x1C20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20A0u;
    // 0x1c20a4: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1C20A0u, 0x1C20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A8u;
label_1c20a8:
    // 0x1c20a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c20ac:
    // 0x1c20ac: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1c20b0:
    // 0x1c20b0: 0x6baa0057  ldl         $t2, 0x57($sp)
    ctx->pc = 0x1c20b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1c20b4:
    // 0x1c20b4: 0x6faa0050  ldr         $t2, 0x50($sp)
    ctx->pc = 0x1c20b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1c20b8:
    // 0x1c20b8: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x1c20b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c20bc:
    // 0x1c20bc: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x1c20bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c20c0:
    // 0x1c20c0: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x1c20c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c20c4:
    // 0x1c20c4: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x1c20c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c20c8:
    // 0x1c20c8: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x1c20c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c20cc:
    // 0x1c20cc: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x1c20ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c20d0:
    // 0x1c20d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c20d4:
    // 0x1c20d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1c20d8:
    // 0x1c20d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c20dc:
    if (ctx->pc == 0x1C20DCu) {
        ctx->pc = 0x1C20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D8u;
        // 0x1c20dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20E0u;
        goto label_1c20e0;
    }
    ctx->pc = 0x1C20D8u;
    {
        const bool branch_taken_0x1c20d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D8u;
        // 0x1c20dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d8) {
            ctx->pc = 0x1C210Cu;
            goto label_1c210c;
        }
    }
    ctx->pc = 0x1C20E0u;
label_1c20e0:
    // 0x1c20e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c20e4:
    // 0x1c20e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1c20e8:
    if (ctx->pc == 0x1C20E8u) {
        ctx->pc = 0x1C20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E4u;
        // 0x1c20e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20ECu;
        goto label_1c20ec;
    }
    ctx->pc = 0x1C20E4u;
    {
        const bool branch_taken_0x1c20e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E4u;
        // 0x1c20e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20e4) {
            ctx->pc = 0x1C2138u;
            goto label_1c2138;
        }
    }
    ctx->pc = 0x1C20ECu;
label_1c20ec:
    // 0x1c20ec: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
label_1c20f0:
    // 0x1c20f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c20f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c20f4:
    // 0x1c20f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c20f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c20f8:
    // 0x1c20f8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1c20f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1c20fc:
    // 0x1c20fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c20fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1c2100:
    // 0x1c2100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c2104:
    // 0x1c2104: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c2108:
    if (ctx->pc == 0x1C2108u) {
        ctx->pc = 0x1C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2104u;
        // 0x1c2108: 0xe6a0e964  swc1        $f0, -0x169C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294961508), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C210Cu;
        goto label_1c210c;
    }
    ctx->pc = 0x1C2104u;
    {
        const bool branch_taken_0x1c2104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2104u;
        // 0x1c2108: 0xe6a0e964  swc1        $f0, -0x169C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294961508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2104) {
            ctx->pc = 0x1C2138u;
            goto label_1c2138;
        }
    }
    ctx->pc = 0x1C210Cu;
label_1c210c:
    // 0x1c210c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1c2110:
    // 0x1c2110: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c2114:
    if (ctx->pc == 0x1C2114u) {
        ctx->pc = 0x1C2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2110u;
        // 0x1c2114: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2118u;
        goto label_1c2118;
    }
    ctx->pc = 0x1C2110u;
    {
        const bool branch_taken_0x1c2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2110u;
        // 0x1c2114: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2110) {
            ctx->pc = 0x1C2134u;
            goto label_1c2134;
        }
    }
    ctx->pc = 0x1C2118u;
label_1c2118:
    // 0x1c2118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c211c:
    if (ctx->pc == 0x1C211Cu) {
        ctx->pc = 0x1C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2118u;
        // 0x1c211c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2120u;
        goto label_1c2120;
    }
    ctx->pc = 0x1C2118u;
    {
        const bool branch_taken_0x1c2118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2118u;
        // 0x1c211c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2118) {
            ctx->pc = 0x1C2138u;
            goto label_1c2138;
        }
    }
    ctx->pc = 0x1C2120u;
label_1c2120:
    // 0x1c2120: 0x3c01bd03  lui         $at, 0xBD03
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48387 << 16));
label_1c2124:
    // 0x1c2124: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c2124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c2128:
    // 0x1c2128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c212c:
    // 0x1c212c: 0x0  nop
    ctx->pc = 0x1c212cu;
    // NOP
label_1c2130:
    // 0x1c2130: 0xe6a0e964  swc1        $f0, -0x169C($s5)
    ctx->pc = 0x1c2130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294961508), bits); }
label_1c2134:
    // 0x1c2134: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c2138:
    // 0x1c2138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c213c:
    // 0x1c213c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c213cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c2140:
    // 0x1c2140: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1c2144:
    // 0x1c2144: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2148:
    // 0x1c2148: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c2148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c214c:
    // 0x1c214c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2150:
    // 0x1c2150: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2154:
    // 0x1c2154: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1c2154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c2158:
    // 0x1c2158: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c2158u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c215c:
    // 0x1c215c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c215cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1c2160:
    // 0x1c2160: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c2160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c2164:
    // 0x1c2164: 0xc06e424  jal         func_1B9090
label_1c2168:
    if (ctx->pc == 0x1C2168u) {
        ctx->pc = 0x1C2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2164u;
        // 0x1c2168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C216Cu;
        goto label_1c216c;
    }
    ctx->pc = 0x1C2164u;
    SET_GPR_U32(ctx, 31, 0x1C216Cu);
    ctx->pc = 0x1C2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2164u;
    // 0x1c2168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1C2164u, 0x1C216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C216Cu;
label_1c216c:
    // 0x1c216c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c216cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c2170:
    // 0x1c2170: 0xc06ec94  jal         func_1BB250
label_1c2174:
    if (ctx->pc == 0x1C2174u) {
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2178u;
        goto label_1c2178;
    }
    ctx->pc = 0x1C2170u;
    SET_GPR_U32(ctx, 31, 0x1C2178u);
    ctx->pc = 0x1C2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2170u;
    // 0x1c2174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1C2170u, 0x1C2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2178u;
label_1c2178:
    // 0x1c2178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c217c:
    // 0x1c217c: 0xc06e51e  jal         func_1B9478
label_1c2180:
    if (ctx->pc == 0x1C2180u) {
        ctx->pc = 0x1C2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C217Cu;
        // 0x1c2180: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2184u;
        goto label_1c2184;
    }
    ctx->pc = 0x1C217Cu;
    SET_GPR_U32(ctx, 31, 0x1C2184u);
    ctx->pc = 0x1C2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C217Cu;
    // 0x1c2180: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1C217Cu, 0x1C2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2184u;
label_1c2184:
    // 0x1c2184: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x1c2184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2188:
    // 0x1c2188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c218c:
    // 0x1c218c: 0xae2203a0  sw          $v0, 0x3A0($s1)
    ctx->pc = 0x1c218cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 2));
label_1c2190:
    // 0x1c2190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2194:
    // 0x1c2194: 0x7e2303b0  sq          $v1, 0x3B0($s1)
    ctx->pc = 0x1c2194u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 944), GPR_VEC(ctx, 3));
label_1c2198:
    // 0x1c2198: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c219c:
    // 0x1c219c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1c21a0:
    // 0x1c21a0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1c21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1c21a4:
    // 0x1c21a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c21a8:
    // 0x1c21a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c21ac:
    // 0x1c21ac: 0x40f809  jalr        $v0
label_1c21b0:
    if (ctx->pc == 0x1C21B0u) {
        ctx->pc = 0x1C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21ACu;
        // 0x1c21b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21B4u;
        goto label_1c21b4;
    }
    ctx->pc = 0x1C21ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C21B4u);
        ctx->pc = 0x1C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21ACu;
        // 0x1c21b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21ACu, 0x1C21B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C21B4u;
label_1c21b4:
    // 0x1c21b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c21b8:
    // 0x1c21b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c21bc:
    // 0x1c21bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1c21c0:
    // 0x1c21c0: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1c21c4:
    // 0x1c21c4: 0xc0f809  jalr        $a2
label_1c21c8:
    if (ctx->pc == 0x1C21C8u) {
        ctx->pc = 0x1C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21C4u;
        // 0x1c21c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21CCu;
        goto label_1c21cc;
    }
    ctx->pc = 0x1C21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C21CCu);
        ctx->pc = 0x1C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21C4u;
        // 0x1c21c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21C4u, 0x1C21CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C21CCu;
label_1c21cc:
    // 0x1c21cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c21d0:
    // 0x1c21d0: 0xc6a1e964  lwc1        $f1, -0x169C($s5)
    ctx->pc = 0x1c21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294961508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c21d4:
    // 0x1c21d4: 0xc440e960  lwc1        $f0, -0x16A0($v0)
    ctx->pc = 0x1c21d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c21d8:
    // 0x1c21d8: 0xae2003a4  sw          $zero, 0x3A4($s1)
    ctx->pc = 0x1c21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
label_1c21dc:
    // 0x1c21dc: 0xe62003d0  swc1        $f0, 0x3D0($s1)
    ctx->pc = 0x1c21dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 976), bits); }
label_1c21e0:
    // 0x1c21e0: 0xae2003e0  sw          $zero, 0x3E0($s1)
    ctx->pc = 0x1c21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 992), GPR_U32(ctx, 0));
label_1c21e4:
    // 0x1c21e4: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1c21e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1c21e8:
    // 0x1c21e8: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x1c21e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1c21ec:
    // 0x1c21ec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1c21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1c21f0:
    // 0x1c21f0: 0xae2003a8  sw          $zero, 0x3A8($s1)
    ctx->pc = 0x1c21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 0));
label_1c21f4:
    // 0x1c21f4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c21f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c21f8:
    // 0x1c21f8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c21f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c21fc:
    // 0x1c21fc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1c21fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c2200:
    // 0x1c2200: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1c2200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c2204:
    // 0x1c2204: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1c2204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c2208:
    // 0x1c2208: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1c2208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c220c:
    // 0x1c220c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1c220cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c2210:
    // 0x1c2210: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1c2210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c2214:
    // 0x1c2214: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1c2214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1c2218:
    // 0x1c2218: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1c2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c221c:
    // 0x1c221c: 0x3e00008  jr          $ra
label_1c2220:
    if (ctx->pc == 0x1C2220u) {
        ctx->pc = 0x1C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C221Cu;
        // 0x1c2220: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2224u;
        goto label_1c2224;
    }
    ctx->pc = 0x1C221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C221Cu;
        // 0x1c2220: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2224u;
label_1c2224:
    // 0x1c2224: 0x0  nop
    ctx->pc = 0x1c2224u;
    // NOP
    ctx->pc = 0x1c2228u;
}
