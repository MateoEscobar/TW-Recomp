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

// Function: sub_003A1F40
// Address: 0x3a1f40 - 0x3a2158
void sub_003A1F40_0x3a1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1F40_0x3a1f40");
#endif

    switch (ctx->pc) {
        case 0x3a1f40u: goto label_3a1f40;
        case 0x3a1f44u: goto label_3a1f44;
        case 0x3a1f48u: goto label_3a1f48;
        case 0x3a1f4cu: goto label_3a1f4c;
        case 0x3a1f50u: goto label_3a1f50;
        case 0x3a1f54u: goto label_3a1f54;
        case 0x3a1f58u: goto label_3a1f58;
        case 0x3a1f5cu: goto label_3a1f5c;
        case 0x3a1f60u: goto label_3a1f60;
        case 0x3a1f64u: goto label_3a1f64;
        case 0x3a1f68u: goto label_3a1f68;
        case 0x3a1f6cu: goto label_3a1f6c;
        case 0x3a1f70u: goto label_3a1f70;
        case 0x3a1f74u: goto label_3a1f74;
        case 0x3a1f78u: goto label_3a1f78;
        case 0x3a1f7cu: goto label_3a1f7c;
        case 0x3a1f80u: goto label_3a1f80;
        case 0x3a1f84u: goto label_3a1f84;
        case 0x3a1f88u: goto label_3a1f88;
        case 0x3a1f8cu: goto label_3a1f8c;
        case 0x3a1f90u: goto label_3a1f90;
        case 0x3a1f94u: goto label_3a1f94;
        case 0x3a1f98u: goto label_3a1f98;
        case 0x3a1f9cu: goto label_3a1f9c;
        case 0x3a1fa0u: goto label_3a1fa0;
        case 0x3a1fa4u: goto label_3a1fa4;
        case 0x3a1fa8u: goto label_3a1fa8;
        case 0x3a1facu: goto label_3a1fac;
        case 0x3a1fb0u: goto label_3a1fb0;
        case 0x3a1fb4u: goto label_3a1fb4;
        case 0x3a1fb8u: goto label_3a1fb8;
        case 0x3a1fbcu: goto label_3a1fbc;
        case 0x3a1fc0u: goto label_3a1fc0;
        case 0x3a1fc4u: goto label_3a1fc4;
        case 0x3a1fc8u: goto label_3a1fc8;
        case 0x3a1fccu: goto label_3a1fcc;
        case 0x3a1fd0u: goto label_3a1fd0;
        case 0x3a1fd4u: goto label_3a1fd4;
        case 0x3a1fd8u: goto label_3a1fd8;
        case 0x3a1fdcu: goto label_3a1fdc;
        case 0x3a1fe0u: goto label_3a1fe0;
        case 0x3a1fe4u: goto label_3a1fe4;
        case 0x3a1fe8u: goto label_3a1fe8;
        case 0x3a1fecu: goto label_3a1fec;
        case 0x3a1ff0u: goto label_3a1ff0;
        case 0x3a1ff4u: goto label_3a1ff4;
        case 0x3a1ff8u: goto label_3a1ff8;
        case 0x3a1ffcu: goto label_3a1ffc;
        case 0x3a2000u: goto label_3a2000;
        case 0x3a2004u: goto label_3a2004;
        case 0x3a2008u: goto label_3a2008;
        case 0x3a200cu: goto label_3a200c;
        case 0x3a2010u: goto label_3a2010;
        case 0x3a2014u: goto label_3a2014;
        case 0x3a2018u: goto label_3a2018;
        case 0x3a201cu: goto label_3a201c;
        case 0x3a2020u: goto label_3a2020;
        case 0x3a2024u: goto label_3a2024;
        case 0x3a2028u: goto label_3a2028;
        case 0x3a202cu: goto label_3a202c;
        case 0x3a2030u: goto label_3a2030;
        case 0x3a2034u: goto label_3a2034;
        case 0x3a2038u: goto label_3a2038;
        case 0x3a203cu: goto label_3a203c;
        case 0x3a2040u: goto label_3a2040;
        case 0x3a2044u: goto label_3a2044;
        case 0x3a2048u: goto label_3a2048;
        case 0x3a204cu: goto label_3a204c;
        case 0x3a2050u: goto label_3a2050;
        case 0x3a2054u: goto label_3a2054;
        case 0x3a2058u: goto label_3a2058;
        case 0x3a205cu: goto label_3a205c;
        case 0x3a2060u: goto label_3a2060;
        case 0x3a2064u: goto label_3a2064;
        case 0x3a2068u: goto label_3a2068;
        case 0x3a206cu: goto label_3a206c;
        case 0x3a2070u: goto label_3a2070;
        case 0x3a2074u: goto label_3a2074;
        case 0x3a2078u: goto label_3a2078;
        case 0x3a207cu: goto label_3a207c;
        case 0x3a2080u: goto label_3a2080;
        case 0x3a2084u: goto label_3a2084;
        case 0x3a2088u: goto label_3a2088;
        case 0x3a208cu: goto label_3a208c;
        case 0x3a2090u: goto label_3a2090;
        case 0x3a2094u: goto label_3a2094;
        case 0x3a2098u: goto label_3a2098;
        case 0x3a209cu: goto label_3a209c;
        case 0x3a20a0u: goto label_3a20a0;
        case 0x3a20a4u: goto label_3a20a4;
        case 0x3a20a8u: goto label_3a20a8;
        case 0x3a20acu: goto label_3a20ac;
        case 0x3a20b0u: goto label_3a20b0;
        case 0x3a20b4u: goto label_3a20b4;
        case 0x3a20b8u: goto label_3a20b8;
        case 0x3a20bcu: goto label_3a20bc;
        case 0x3a20c0u: goto label_3a20c0;
        case 0x3a20c4u: goto label_3a20c4;
        case 0x3a20c8u: goto label_3a20c8;
        case 0x3a20ccu: goto label_3a20cc;
        case 0x3a20d0u: goto label_3a20d0;
        case 0x3a20d4u: goto label_3a20d4;
        case 0x3a20d8u: goto label_3a20d8;
        case 0x3a20dcu: goto label_3a20dc;
        case 0x3a20e0u: goto label_3a20e0;
        case 0x3a20e4u: goto label_3a20e4;
        case 0x3a20e8u: goto label_3a20e8;
        case 0x3a20ecu: goto label_3a20ec;
        case 0x3a20f0u: goto label_3a20f0;
        case 0x3a20f4u: goto label_3a20f4;
        case 0x3a20f8u: goto label_3a20f8;
        case 0x3a20fcu: goto label_3a20fc;
        case 0x3a2100u: goto label_3a2100;
        case 0x3a2104u: goto label_3a2104;
        case 0x3a2108u: goto label_3a2108;
        case 0x3a210cu: goto label_3a210c;
        case 0x3a2110u: goto label_3a2110;
        case 0x3a2114u: goto label_3a2114;
        case 0x3a2118u: goto label_3a2118;
        case 0x3a211cu: goto label_3a211c;
        case 0x3a2120u: goto label_3a2120;
        case 0x3a2124u: goto label_3a2124;
        case 0x3a2128u: goto label_3a2128;
        case 0x3a212cu: goto label_3a212c;
        case 0x3a2130u: goto label_3a2130;
        case 0x3a2134u: goto label_3a2134;
        case 0x3a2138u: goto label_3a2138;
        case 0x3a213cu: goto label_3a213c;
        case 0x3a2140u: goto label_3a2140;
        case 0x3a2144u: goto label_3a2144;
        case 0x3a2148u: goto label_3a2148;
        case 0x3a214cu: goto label_3a214c;
        case 0x3a2150u: goto label_3a2150;
        case 0x3a2154u: goto label_3a2154;
        default: break;
    }

    ctx->pc = 0x3a1f40u;

label_3a1f40:
    // 0x3a1f40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3a1f44:
    // 0x3a1f44: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3a1f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3a1f48:
    // 0x3a1f48: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3a1f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3a1f4c:
    // 0x3a1f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a1f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1f50:
    // 0x3a1f50: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3a1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3a1f54:
    // 0x3a1f54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a1f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3a1f58:
    // 0x3a1f58: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a1f58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3a1f5c:
    // 0x3a1f5c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3a1f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3a1f60:
    // 0x3a1f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1f64:
    // 0x3a1f64: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3a1f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3a1f68:
    // 0x3a1f68: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3a1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3a1f6c:
    // 0x3a1f6c: 0x40f809  jalr        $v0
label_3a1f70:
    if (ctx->pc == 0x3A1F70u) {
        ctx->pc = 0x3A1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F6Cu;
        // 0x3a1f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F74u;
        goto label_3a1f74;
    }
    ctx->pc = 0x3A1F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1F74u);
        ctx->pc = 0x3A1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F6Cu;
        // 0x3a1f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1F6Cu, 0x3A1F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1F74u;
label_3a1f74:
    // 0x3a1f74: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
label_3a1f78:
    if (ctx->pc == 0x3A1F78u) {
        ctx->pc = 0x3A1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F74u;
        // 0x3a1f78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F7Cu;
        goto label_3a1f7c;
    }
    ctx->pc = 0x3A1F74u;
    {
        const bool branch_taken_0x3a1f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f74) {
            ctx->pc = 0x3A1F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1F74u;
            // 0x3a1f78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A213Cu;
            goto label_3a213c;
        }
    }
    ctx->pc = 0x3A1F7Cu;
label_3a1f7c:
    // 0x3a1f7c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x3a1f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_3a1f80:
    // 0x3a1f80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1f84:
    // 0x3a1f84: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3a1f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1f88:
    // 0x3a1f88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a1f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1f8c:
    // 0x3a1f8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a1f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1f90:
    // 0x3a1f90: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3a1f90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3a1f94:
    // 0x3a1f94: 0x3c0137d1  lui         $at, 0x37D1
    ctx->pc = 0x3a1f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14289 << 16));
label_3a1f98:
    // 0x3a1f98: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x3a1f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_3a1f9c:
    // 0x3a1f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1fa0:
    // 0x3a1fa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a1fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a1fa4:
    // 0x3a1fa4: 0x0  nop
    ctx->pc = 0x3a1fa4u;
    // NOP
label_3a1fa8:
    // 0x3a1fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a1fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a1fac:
    // 0x3a1fac: 0x0  nop
    ctx->pc = 0x3a1facu;
    // NOP
label_3a1fb0:
    // 0x3a1fb0: 0x45020062  bc1fl       . + 4 + (0x62 << 2)
label_3a1fb4:
    if (ctx->pc == 0x3A1FB4u) {
        ctx->pc = 0x3A1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FB0u;
        // 0x3a1fb4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1FB8u;
        goto label_3a1fb8;
    }
    ctx->pc = 0x3A1FB0u;
    {
        const bool branch_taken_0x3a1fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a1fb0) {
            ctx->pc = 0x3A1FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1FB0u;
            // 0x3a1fb4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A213Cu;
            goto label_3a213c;
        }
    }
    ctx->pc = 0x3A1FB8u;
label_3a1fb8:
    // 0x3a1fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a1fbc:
    // 0x3a1fbc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a1fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a1fc0:
    // 0x3a1fc0: 0x0  nop
    ctx->pc = 0x3a1fc0u;
    // NOP
label_3a1fc4:
    // 0x3a1fc4: 0x0  nop
    ctx->pc = 0x3a1fc4u;
    // NOP
label_3a1fc8:
    // 0x3a1fc8: 0x46010504  c1          0x10504
    ctx->pc = 0x3a1fc8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_3a1fcc:
    // 0x3a1fcc: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3a1fccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3a1fd0:
    // 0x3a1fd0: 0x0  nop
    ctx->pc = 0x3a1fd0u;
    // NOP
label_3a1fd4:
    // 0x3a1fd4: 0x0  nop
    ctx->pc = 0x3a1fd4u;
    // NOP
label_3a1fd8:
    // 0x3a1fd8: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x3a1fd8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_3a1fdc:
    // 0x3a1fdc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3a1fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1fe0:
    // 0x3a1fe0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a1fe4:
    // 0x3a1fe4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a1fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a1fe8:
    // 0x3a1fe8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1fec:
    // 0x3a1fec: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a1fecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3a1ff0:
    // 0x3a1ff0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a1ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3a1ff4:
    // 0x3a1ff4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a1ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3a1ff8:
    // 0x3a1ff8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3a1ffc:
    // 0x3a1ffc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3a1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3a2000:
    // 0x3a2000: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3a2004:
    // 0x3a2004: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3a2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3a2008:
    // 0x3a2008: 0x8ca2017c  lw          $v0, 0x17C($a1)
    ctx->pc = 0x3a2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 380)));
label_3a200c:
    // 0x3a200c: 0x84a40178  lh          $a0, 0x178($a1)
    ctx->pc = 0x3a200cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 376)));
label_3a2010:
    // 0x3a2010: 0x40f809  jalr        $v0
label_3a2014:
    if (ctx->pc == 0x3A2014u) {
        ctx->pc = 0x3A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2010u;
        // 0x3a2014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2018u;
        goto label_3a2018;
    }
    ctx->pc = 0x3A2010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2018u);
        ctx->pc = 0x3A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2010u;
        // 0x3a2014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2010u, 0x3A2018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2018u;
label_3a2018:
    // 0x3a2018: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3a2018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a201c:
    // 0x3a201c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a2020:
    // 0x3a2020: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x3a2020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_3a2024:
    // 0x3a2024: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3a2024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_3a2028:
    // 0x3a2028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a202c:
    // 0x3a202c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a2030:
    // 0x3a2030: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x3a2030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_3a2034:
    // 0x3a2034: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a2034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a2038:
    // 0x3a2038: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a2038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a203c:
    // 0x3a203c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a203cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2040:
    // 0x3a2040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a2040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2044:
    // 0x3a2044: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3a2044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3a2048:
    // 0x3a2048: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a2048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a204c:
    // 0x3a204c: 0xc1036e2  jal         func_40DB88
label_3a2050:
    if (ctx->pc == 0x3A2050u) {
        ctx->pc = 0x3A2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A204Cu;
        // 0x3a2050: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2054u;
        goto label_3a2054;
    }
    ctx->pc = 0x3A204Cu;
    SET_GPR_U32(ctx, 31, 0x3A2054u);
    ctx->pc = 0x3A2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A204Cu;
    // 0x3a2050: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x3A204Cu, 0x3A2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2054u;
label_3a2054:
    // 0x3a2054: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3a2054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2058:
    // 0x3a2058: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_3a205c:
    if (ctx->pc == 0x3A205Cu) {
        ctx->pc = 0x3A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2058u;
        // 0x3a205c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2060u;
        goto label_3a2060;
    }
    ctx->pc = 0x3A2058u;
    {
        const bool branch_taken_0x3a2058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2058) {
            ctx->pc = 0x3A205Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2058u;
            // 0x3a205c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A213Cu;
            goto label_3a213c;
        }
    }
    ctx->pc = 0x3A2060u;
label_3a2060:
    // 0x3a2060: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a2064:
    // 0x3a2064: 0x84440178  lh          $a0, 0x178($v0)
    ctx->pc = 0x3a2064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
label_3a2068:
    // 0x3a2068: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x3a2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_3a206c:
    // 0x3a206c: 0x60f809  jalr        $v1
label_3a2070:
    if (ctx->pc == 0x3A2070u) {
        ctx->pc = 0x3A2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A206Cu;
        // 0x3a2070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2074u;
        goto label_3a2074;
    }
    ctx->pc = 0x3A206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A2074u);
        ctx->pc = 0x3A2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A206Cu;
        // 0x3a2070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A206Cu, 0x3A2074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2074u;
label_3a2074:
    // 0x3a2074: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a2078:
    // 0x3a2078: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3a2078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3a207c:
    // 0x3a207c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a207cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a2080:
    // 0x3a2080: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a2084:
    // 0x3a2084: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a2084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a2088:
    // 0x3a2088: 0x46140b03  div.s       $f12, $f1, $f20
    ctx->pc = 0x3a2088u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_3a208c:
    // 0x3a208c: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x3a208cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a2090:
    // 0x3a2090: 0x0  nop
    ctx->pc = 0x3a2090u;
    // NOP
label_3a2094:
    // 0x3a2094: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3a2098:
    if (ctx->pc == 0x3A2098u) {
        ctx->pc = 0x3A2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2094u;
        // 0x3a2098: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A209Cu;
        goto label_3a209c;
    }
    ctx->pc = 0x3A2094u;
    {
        const bool branch_taken_0x3a2094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2094) {
            ctx->pc = 0x3A2098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2094u;
            // 0x3a2098: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A209Cu;
            goto label_3a209c;
        }
    }
    ctx->pc = 0x3A209Cu;
label_3a209c:
    // 0x3a209c: 0xc10b1c6  jal         func_42C718
label_3a20a0:
    if (ctx->pc == 0x3A20A0u) {
        ctx->pc = 0x3A20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A209Cu;
        // 0x3a20a0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A20A4u;
        goto label_3a20a4;
    }
    ctx->pc = 0x3A209Cu;
    SET_GPR_U32(ctx, 31, 0x3A20A4u);
    ctx->pc = 0x3A20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A209Cu;
    // 0x3a20a0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3A209Cu, 0x3A20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20A4u;
label_3a20a4:
    // 0x3a20a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a20a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a20a8:
    // 0x3a20a8: 0x9602006e  lhu         $v0, 0x6E($s0)
    ctx->pc = 0x3a20a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_3a20ac:
    // 0x3a20ac: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3a20acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a20b0:
    // 0x3a20b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3a20b4:
    if (ctx->pc == 0x3A20B4u) {
        ctx->pc = 0x3A20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20B0u;
        // 0x3a20b4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A20B8u;
        goto label_3a20b8;
    }
    ctx->pc = 0x3A20B0u;
    {
        const bool branch_taken_0x3a20b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a20b0) {
            ctx->pc = 0x3A20B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A20B0u;
            // 0x3a20b4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A20E4u;
            goto label_3a20e4;
        }
    }
    ctx->pc = 0x3A20B8u;
label_3a20b8:
    // 0x3a20b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a20b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a20bc:
    // 0x3a20bc: 0xc0e858c  jal         func_3A1630
label_3a20c0:
    if (ctx->pc == 0x3A20C0u) {
        ctx->pc = 0x3A20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20BCu;
        // 0x3a20c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A20C4u;
        goto label_3a20c4;
    }
    ctx->pc = 0x3A20BCu;
    SET_GPR_U32(ctx, 31, 0x3A20C4u);
    ctx->pc = 0x3A20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20BCu;
    // 0x3a20c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A20BCu, 0x3A20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20C4u;
label_3a20c4:
    // 0x3a20c4: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a20c8:
    // 0x3a20c8: 0xc0e8cda  jal         func_3A3368
label_3a20cc:
    if (ctx->pc == 0x3A20CCu) {
        ctx->pc = 0x3A20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20C8u;
        // 0x3a20cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A20D0u;
        goto label_3a20d0;
    }
    ctx->pc = 0x3A20C8u;
    SET_GPR_U32(ctx, 31, 0x3A20D0u);
    ctx->pc = 0x3A20CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20C8u;
    // 0x3a20cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3A20C8u, 0x3A20D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20D0u;
label_3a20d0:
    // 0x3a20d0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a20d4:
    // 0x3a20d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a20d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a20d8:
    // 0x3a20d8: 0xc0e8cbc  jal         func_3A32F0
label_3a20dc:
    if (ctx->pc == 0x3A20DCu) {
        ctx->pc = 0x3A20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20D8u;
        // 0x3a20dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A20E0u;
        goto label_3a20e0;
    }
    ctx->pc = 0x3A20D8u;
    SET_GPR_U32(ctx, 31, 0x3A20E0u);
    ctx->pc = 0x3A20DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20D8u;
    // 0x3a20dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3A20D8u, 0x3A20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20E0u;
label_3a20e0:
    // 0x3a20e0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a20e4:
    // 0x3a20e4: 0x3c03a000  lui         $v1, 0xA000
    ctx->pc = 0x3a20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40960 << 16));
label_3a20e8:
    // 0x3a20e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3a20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3a20ec:
    // 0x3a20ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a20ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a20f0:
    // 0x3a20f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3a20f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a20f4:
    // 0x3a20f4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3a20f8:
    // 0x3a20f8: 0x84c40168  lh          $a0, 0x168($a2)
    ctx->pc = 0x3a20f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 360)));
label_3a20fc:
    // 0x3a20fc: 0x8cc2016c  lw          $v0, 0x16C($a2)
    ctx->pc = 0x3a20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 364)));
label_3a2100:
    // 0x3a2100: 0x40f809  jalr        $v0
label_3a2104:
    if (ctx->pc == 0x3A2104u) {
        ctx->pc = 0x3A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2100u;
        // 0x3a2104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2108u;
        goto label_3a2108;
    }
    ctx->pc = 0x3A2100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2108u);
        ctx->pc = 0x3A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2100u;
        // 0x3a2104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2100u, 0x3A2108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2108u;
label_3a2108:
    // 0x3a2108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a2108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a210c:
    // 0x3a210c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3a210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a2110:
    // 0x3a2110: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a2110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2114:
    // 0x3a2114: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x3a2114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_3a2118:
    // 0x3a2118: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3a211c:
    // 0x3a211c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x3a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_3a2120:
    // 0x3a2120: 0x40f809  jalr        $v0
label_3a2124:
    if (ctx->pc == 0x3A2124u) {
        ctx->pc = 0x3A2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2120u;
        // 0x3a2124: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2128u;
        goto label_3a2128;
    }
    ctx->pc = 0x3A2120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2128u);
        ctx->pc = 0x3A2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2120u;
        // 0x3a2124: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2120u, 0x3A2128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2128u;
label_3a2128:
    // 0x3a2128: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3a212c:
    // 0x3a212c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2130:
    // 0x3a2130: 0xc0e8b3c  jal         func_3A2CF0
label_3a2134:
    if (ctx->pc == 0x3A2134u) {
        ctx->pc = 0x3A2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2130u;
        // 0x3a2134: 0x97a6005c  lhu         $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2138u;
        goto label_3a2138;
    }
    ctx->pc = 0x3A2130u;
    SET_GPR_U32(ctx, 31, 0x3A2138u);
    ctx->pc = 0x3A2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2130u;
    // 0x3a2134: 0x97a6005c  lhu         $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CF0u, 0x3A2130u, 0x3A2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2138u;
label_3a2138:
    // 0x3a2138: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3a2138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3a213c:
    // 0x3a213c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3a213cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a2140:
    // 0x3a2140: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3a2140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2144:
    // 0x3a2144: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a2144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a2148:
    // 0x3a2148: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a2148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a214c:
    // 0x3a214c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3a214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a2150:
    // 0x3a2150: 0x3e00008  jr          $ra
label_3a2154:
    if (ctx->pc == 0x3A2154u) {
        ctx->pc = 0x3A2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2150u;
        // 0x3a2154: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2158u;
        goto label_fallthrough_0x3a2150;
    }
    ctx->pc = 0x3A2150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2150u;
        // 0x3a2154: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a2150:
    ctx->pc = 0x3A2158u;
}
