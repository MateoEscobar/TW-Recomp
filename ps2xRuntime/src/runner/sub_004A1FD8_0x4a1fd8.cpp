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

// Function: sub_004A1FD8
// Address: 0x4a1fd8 - 0x4a2240
void sub_004A1FD8_0x4a1fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1FD8_0x4a1fd8");
#endif

    switch (ctx->pc) {
        case 0x4a1fd8u: goto label_4a1fd8;
        case 0x4a1fdcu: goto label_4a1fdc;
        case 0x4a1fe0u: goto label_4a1fe0;
        case 0x4a1fe4u: goto label_4a1fe4;
        case 0x4a1fe8u: goto label_4a1fe8;
        case 0x4a1fecu: goto label_4a1fec;
        case 0x4a1ff0u: goto label_4a1ff0;
        case 0x4a1ff4u: goto label_4a1ff4;
        case 0x4a1ff8u: goto label_4a1ff8;
        case 0x4a1ffcu: goto label_4a1ffc;
        case 0x4a2000u: goto label_4a2000;
        case 0x4a2004u: goto label_4a2004;
        case 0x4a2008u: goto label_4a2008;
        case 0x4a200cu: goto label_4a200c;
        case 0x4a2010u: goto label_4a2010;
        case 0x4a2014u: goto label_4a2014;
        case 0x4a2018u: goto label_4a2018;
        case 0x4a201cu: goto label_4a201c;
        case 0x4a2020u: goto label_4a2020;
        case 0x4a2024u: goto label_4a2024;
        case 0x4a2028u: goto label_4a2028;
        case 0x4a202cu: goto label_4a202c;
        case 0x4a2030u: goto label_4a2030;
        case 0x4a2034u: goto label_4a2034;
        case 0x4a2038u: goto label_4a2038;
        case 0x4a203cu: goto label_4a203c;
        case 0x4a2040u: goto label_4a2040;
        case 0x4a2044u: goto label_4a2044;
        case 0x4a2048u: goto label_4a2048;
        case 0x4a204cu: goto label_4a204c;
        case 0x4a2050u: goto label_4a2050;
        case 0x4a2054u: goto label_4a2054;
        case 0x4a2058u: goto label_4a2058;
        case 0x4a205cu: goto label_4a205c;
        case 0x4a2060u: goto label_4a2060;
        case 0x4a2064u: goto label_4a2064;
        case 0x4a2068u: goto label_4a2068;
        case 0x4a206cu: goto label_4a206c;
        case 0x4a2070u: goto label_4a2070;
        case 0x4a2074u: goto label_4a2074;
        case 0x4a2078u: goto label_4a2078;
        case 0x4a207cu: goto label_4a207c;
        case 0x4a2080u: goto label_4a2080;
        case 0x4a2084u: goto label_4a2084;
        case 0x4a2088u: goto label_4a2088;
        case 0x4a208cu: goto label_4a208c;
        case 0x4a2090u: goto label_4a2090;
        case 0x4a2094u: goto label_4a2094;
        case 0x4a2098u: goto label_4a2098;
        case 0x4a209cu: goto label_4a209c;
        case 0x4a20a0u: goto label_4a20a0;
        case 0x4a20a4u: goto label_4a20a4;
        case 0x4a20a8u: goto label_4a20a8;
        case 0x4a20acu: goto label_4a20ac;
        case 0x4a20b0u: goto label_4a20b0;
        case 0x4a20b4u: goto label_4a20b4;
        case 0x4a20b8u: goto label_4a20b8;
        case 0x4a20bcu: goto label_4a20bc;
        case 0x4a20c0u: goto label_4a20c0;
        case 0x4a20c4u: goto label_4a20c4;
        case 0x4a20c8u: goto label_4a20c8;
        case 0x4a20ccu: goto label_4a20cc;
        case 0x4a20d0u: goto label_4a20d0;
        case 0x4a20d4u: goto label_4a20d4;
        case 0x4a20d8u: goto label_4a20d8;
        case 0x4a20dcu: goto label_4a20dc;
        case 0x4a20e0u: goto label_4a20e0;
        case 0x4a20e4u: goto label_4a20e4;
        case 0x4a20e8u: goto label_4a20e8;
        case 0x4a20ecu: goto label_4a20ec;
        case 0x4a20f0u: goto label_4a20f0;
        case 0x4a20f4u: goto label_4a20f4;
        case 0x4a20f8u: goto label_4a20f8;
        case 0x4a20fcu: goto label_4a20fc;
        case 0x4a2100u: goto label_4a2100;
        case 0x4a2104u: goto label_4a2104;
        case 0x4a2108u: goto label_4a2108;
        case 0x4a210cu: goto label_4a210c;
        case 0x4a2110u: goto label_4a2110;
        case 0x4a2114u: goto label_4a2114;
        case 0x4a2118u: goto label_4a2118;
        case 0x4a211cu: goto label_4a211c;
        case 0x4a2120u: goto label_4a2120;
        case 0x4a2124u: goto label_4a2124;
        case 0x4a2128u: goto label_4a2128;
        case 0x4a212cu: goto label_4a212c;
        case 0x4a2130u: goto label_4a2130;
        case 0x4a2134u: goto label_4a2134;
        case 0x4a2138u: goto label_4a2138;
        case 0x4a213cu: goto label_4a213c;
        case 0x4a2140u: goto label_4a2140;
        case 0x4a2144u: goto label_4a2144;
        case 0x4a2148u: goto label_4a2148;
        case 0x4a214cu: goto label_4a214c;
        case 0x4a2150u: goto label_4a2150;
        case 0x4a2154u: goto label_4a2154;
        case 0x4a2158u: goto label_4a2158;
        case 0x4a215cu: goto label_4a215c;
        case 0x4a2160u: goto label_4a2160;
        case 0x4a2164u: goto label_4a2164;
        case 0x4a2168u: goto label_4a2168;
        case 0x4a216cu: goto label_4a216c;
        case 0x4a2170u: goto label_4a2170;
        case 0x4a2174u: goto label_4a2174;
        case 0x4a2178u: goto label_4a2178;
        case 0x4a217cu: goto label_4a217c;
        case 0x4a2180u: goto label_4a2180;
        case 0x4a2184u: goto label_4a2184;
        case 0x4a2188u: goto label_4a2188;
        case 0x4a218cu: goto label_4a218c;
        case 0x4a2190u: goto label_4a2190;
        case 0x4a2194u: goto label_4a2194;
        case 0x4a2198u: goto label_4a2198;
        case 0x4a219cu: goto label_4a219c;
        case 0x4a21a0u: goto label_4a21a0;
        case 0x4a21a4u: goto label_4a21a4;
        case 0x4a21a8u: goto label_4a21a8;
        case 0x4a21acu: goto label_4a21ac;
        case 0x4a21b0u: goto label_4a21b0;
        case 0x4a21b4u: goto label_4a21b4;
        case 0x4a21b8u: goto label_4a21b8;
        case 0x4a21bcu: goto label_4a21bc;
        case 0x4a21c0u: goto label_4a21c0;
        case 0x4a21c4u: goto label_4a21c4;
        case 0x4a21c8u: goto label_4a21c8;
        case 0x4a21ccu: goto label_4a21cc;
        case 0x4a21d0u: goto label_4a21d0;
        case 0x4a21d4u: goto label_4a21d4;
        case 0x4a21d8u: goto label_4a21d8;
        case 0x4a21dcu: goto label_4a21dc;
        case 0x4a21e0u: goto label_4a21e0;
        case 0x4a21e4u: goto label_4a21e4;
        case 0x4a21e8u: goto label_4a21e8;
        case 0x4a21ecu: goto label_4a21ec;
        case 0x4a21f0u: goto label_4a21f0;
        case 0x4a21f4u: goto label_4a21f4;
        case 0x4a21f8u: goto label_4a21f8;
        case 0x4a21fcu: goto label_4a21fc;
        case 0x4a2200u: goto label_4a2200;
        case 0x4a2204u: goto label_4a2204;
        case 0x4a2208u: goto label_4a2208;
        case 0x4a220cu: goto label_4a220c;
        case 0x4a2210u: goto label_4a2210;
        case 0x4a2214u: goto label_4a2214;
        case 0x4a2218u: goto label_4a2218;
        case 0x4a221cu: goto label_4a221c;
        case 0x4a2220u: goto label_4a2220;
        case 0x4a2224u: goto label_4a2224;
        case 0x4a2228u: goto label_4a2228;
        case 0x4a222cu: goto label_4a222c;
        case 0x4a2230u: goto label_4a2230;
        case 0x4a2234u: goto label_4a2234;
        case 0x4a2238u: goto label_4a2238;
        case 0x4a223cu: goto label_4a223c;
        default: break;
    }

    ctx->pc = 0x4a1fd8u;

label_4a1fd8:
    // 0x4a1fd8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x4a1fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a1fdc:
    // 0x4a1fdc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a1fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a1fe0:
    // 0x4a1fe0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a1fe4:
    // 0x4a1fe4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a1fe8:
    // 0x4a1fe8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a1fec:
    // 0x4a1fec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a1fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1ff0:
    // 0x4a1ff0: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x4a1ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a1ff4:
    // 0x4a1ff4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a1ff8:
    // 0x4a1ff8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a1ffc:
    // 0x4a1ffc: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x4a1ffcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_4a2000:
    // 0x4a2000: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a2004:
    // 0x4a2004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a2008:
    // 0x4a2008: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x4a2008u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_4a200c:
    // 0x4a200c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a200cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4a2010:
    // 0x4a2010: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_4a2014:
    if (ctx->pc == 0x4A2014u) {
        ctx->pc = 0x4A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2010u;
        // 0x4a2014: 0x4803e  dsrl32      $s0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2018u;
        goto label_4a2018;
    }
    ctx->pc = 0x4A2010u;
    {
        const bool branch_taken_0x4a2010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2010u;
        // 0x4a2014: 0x4803e  dsrl32      $s0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2010) {
            ctx->pc = 0x4A206Cu;
            goto label_4a206c;
        }
    }
    ctx->pc = 0x4A2018u;
label_4a2018:
    // 0x4a2018: 0x6611000f  daddiu      $s1, $s0, 0xF
    ctx->pc = 0x4a2018u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
label_4a201c:
    // 0x4a201c: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x4a201cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_4a2020:
    // 0x4a2020: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x4a2020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_4a2024:
    // 0x4a2024: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4a2024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4a2028:
    // 0x4a2028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a2028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a202c:
    // 0x4a202c: 0xc10acae  jal         func_42B2B8
label_4a2030:
    if (ctx->pc == 0x4A2030u) {
        ctx->pc = 0x4A2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A202Cu;
        // 0x4a2030: 0x2610ad18  addiu       $s0, $s0, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2034u;
        goto label_4a2034;
    }
    ctx->pc = 0x4A202Cu;
    SET_GPR_U32(ctx, 31, 0x4A2034u);
    ctx->pc = 0x4A2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A202Cu;
    // 0x4a2030: 0x2610ad18  addiu       $s0, $s0, -0x52E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4A202Cu, 0x4A2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2034u;
label_4a2034:
    // 0x4a2034: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x4a2034u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_4a2038:
    // 0x4a2038: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x4a2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4a203c:
    // 0x4a203c: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x4a203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_4a2040:
    // 0x4a2040: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a2040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a2044:
    // 0x4a2044: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x4a2044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_4a2048:
    // 0x4a2048: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x4a2048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_4a204c:
    // 0x4a204c: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x4a204cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_4a2050:
    // 0x4a2050: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a2050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4a2054:
    // 0x4a2054: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4a2054u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4a2058:
    // 0x4a2058: 0x60f809  jalr        $v1
label_4a205c:
    if (ctx->pc == 0x4A205Cu) {
        ctx->pc = 0x4A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2058u;
        // 0x4a205c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2060u;
        goto label_4a2060;
    }
    ctx->pc = 0x4A2058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A2060u);
        ctx->pc = 0x4A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2058u;
        // 0x4a205c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2058u, 0x4A2060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A2060u;
label_4a2060:
    // 0x4a2060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a2060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a2064:
    // 0x4a2064: 0x10000012  b           . + 4 + (0x12 << 2)
label_4a2068:
    if (ctx->pc == 0x4A2068u) {
        ctx->pc = 0x4A2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2064u;
        // 0x4a2068: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A206Cu;
        goto label_4a206c;
    }
    ctx->pc = 0x4A2064u;
    {
        const bool branch_taken_0x4a2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2064u;
        // 0x4a2068: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2064) {
            ctx->pc = 0x4A20B0u;
            goto label_4a20b0;
        }
    }
    ctx->pc = 0x4A206Cu;
label_4a206c:
    // 0x4a206c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4a206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a2070:
    // 0x4a2070: 0xc123298  jal         func_48CA60
label_4a2074:
    if (ctx->pc == 0x4A2074u) {
        ctx->pc = 0x4A2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2070u;
        // 0x4a2074: 0x6610000f  daddiu      $s0, $s0, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2078u;
        goto label_4a2078;
    }
    ctx->pc = 0x4A2070u;
    SET_GPR_U32(ctx, 31, 0x4A2078u);
    ctx->pc = 0x4A2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2070u;
    // 0x4a2074: 0x6610000f  daddiu      $s0, $s0, 0xF (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x4A2070u, 0x4A2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2078u;
label_4a2078:
    // 0x4a2078: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x4a2078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_4a207c:
    // 0x4a207c: 0x34a5fee0  ori         $a1, $a1, 0xFEE0
    ctx->pc = 0x4a207cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65248);
label_4a2080:
    // 0x4a2080: 0xc10acae  jal         func_42B2B8
label_4a2084:
    if (ctx->pc == 0x4A2084u) {
        ctx->pc = 0x4A2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2080u;
        // 0x4a2084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2088u;
        goto label_4a2088;
    }
    ctx->pc = 0x4A2080u;
    SET_GPR_U32(ctx, 31, 0x4A2088u);
    ctx->pc = 0x4A2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2080u;
    // 0x4a2084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4A2080u, 0x4A2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2088u;
label_4a2088:
    // 0x4a2088: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x4a2088u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_4a208c:
    // 0x4a208c: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x4a208cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
label_4a2090:
    // 0x4a2090: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x4a2090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_4a2094:
    // 0x4a2094: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x4a2094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_4a2098:
    // 0x4a2098: 0x648400b0  daddiu      $a0, $a0, 0xB0
    ctx->pc = 0x4a2098u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)176);
label_4a209c:
    // 0x4a209c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a209cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4a20a0:
    // 0x4a20a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4a20a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4a20a4:
    // 0x4a20a4: 0xc123560  jal         func_48D580
label_4a20a8:
    if (ctx->pc == 0x4A20A8u) {
        ctx->pc = 0x4A20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A20A4u;
        // 0x4a20a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A20ACu;
        goto label_4a20ac;
    }
    ctx->pc = 0x4A20A4u;
    SET_GPR_U32(ctx, 31, 0x4A20ACu);
    ctx->pc = 0x4A20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A20A4u;
    // 0x4a20a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D580u, 0x4A20A4u, 0x4A20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A20ACu;
label_4a20ac:
    // 0x4a20ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a20acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a20b0:
    // 0x4a20b0: 0x108738  dsll        $s0, $s0, 28
    ctx->pc = 0x4a20b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 28);
label_4a20b4:
    // 0x4a20b4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4a20b4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_4a20b8:
    // 0x4a20b8: 0x24027fee  addiu       $v0, $zero, 0x7FEE
    ctx->pc = 0x4a20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_4a20bc:
    // 0x4a20bc: 0x260a7fed  addiu       $t2, $s0, 0x7FED
    ctx->pc = 0x4a20bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 32749));
label_4a20c0:
    // 0x4a20c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4a20c4:
    // 0x4a20c4: 0x142001a  div         $zero, $t2, $v0
    ctx->pc = 0x4a20c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4a20c8:
    // 0x4a20c8: 0x2644003f  addiu       $a0, $s2, 0x3F
    ctx->pc = 0x4a20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_4a20cc:
    // 0x4a20cc: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4a20ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_4a20d0:
    // 0x4a20d0: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x4a20d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_4a20d4:
    // 0x4a20d4: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x4a20d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_4a20d8:
    // 0x4a20d8: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x4a20d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_4a20dc:
    // 0x4a20dc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4a20dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4a20e0:
    // 0x4a20e0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4a20e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_4a20e4:
    // 0x4a20e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a20e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a20e8:
    // 0x4a20e8: 0x71097b89  pcpyld      $t7, $t0, $t1
    ctx->pc = 0x4a20e8u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4a20ec:
    // 0x4a20ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4a20f0:
    if (ctx->pc == 0x4A20F0u) {
        ctx->pc = 0x4A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A20ECu;
        // 0x4a20f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A20F4u;
        goto label_4a20f4;
    }
    ctx->pc = 0x4A20ECu;
    {
        const bool branch_taken_0x4a20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a20ec) {
            ctx->pc = 0x4A20F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A20ECu;
            // 0x4a20f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A20F4u;
            goto label_4a20f4;
        }
    }
    ctx->pc = 0x4A20F4u;
label_4a20f4:
    // 0x4a20f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a20f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a20f8:
    // 0x4a20f8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x4a20f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a20fc:
    // 0x4a20fc: 0x5812  mflo        $t3
    ctx->pc = 0x4a20fcu;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_4a2100:
    // 0x4a2100: 0x1960002d  blez        $t3, . + 4 + (0x2D << 2)
label_4a2104:
    if (ctx->pc == 0x4A2104u) {
        ctx->pc = 0x4A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2100u;
        // 0x4a2104: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2108u;
        goto label_4a2108;
    }
    ctx->pc = 0x4A2100u;
    {
        const bool branch_taken_0x4a2100 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2100u;
        // 0x4a2104: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2100) {
            ctx->pc = 0x4A21B8u;
            goto label_4a21b8;
        }
    }
    ctx->pc = 0x4A2108u;
label_4a2108:
    // 0x4a2108: 0x3c0d0007  lui         $t5, 0x7
    ctx->pc = 0x4a2108u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)7 << 16));
label_4a210c:
    // 0x4a210c: 0x34198000  ori         $t9, $zero, 0x8000
    ctx->pc = 0x4a210cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_4a2110:
    // 0x4a2110: 0x19cb3c  dsll32      $t9, $t9, 12
    ctx->pc = 0x4a2110u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 12));
label_4a2114:
    // 0x4a2114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a2114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2118:
    // 0x4a2118: 0x3c185000  lui         $t8, 0x5000
    ctx->pc = 0x4a2118u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20480 << 16));
label_4a211c:
    // 0x4a211c: 0x35adfee0  ori         $t5, $t5, 0xFEE0
    ctx->pc = 0x4a211cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65248);
label_4a2120:
    // 0x4a2120: 0x240e7fee  addiu       $t6, $zero, 0x7FEE
    ctx->pc = 0x4a2120u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_4a2124:
    // 0x4a2124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a2124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2128:
    // 0x4a2128: 0x7cef0000  sq          $t7, 0x0($a3)
    ctx->pc = 0x4a2128u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 15));
label_4a212c:
    // 0x4a212c: 0x2a027fef  slti        $v0, $s0, 0x7FEF
    ctx->pc = 0x4a212cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32751) ? 1 : 0);
label_4a2130:
    // 0x4a2130: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a2130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a2134:
    // 0x4a2134: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a2138:
    if (ctx->pc == 0x4A2138u) {
        ctx->pc = 0x4A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2134u;
        // 0x4a2138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A213Cu;
        goto label_4a213c;
    }
    ctx->pc = 0x4A2134u;
    {
        const bool branch_taken_0x4a2134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2134u;
        // 0x4a2138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2134) {
            ctx->pc = 0x4A2140u;
            goto label_4a2140;
        }
    }
    ctx->pc = 0x4A213Cu;
label_4a213c:
    // 0x4a213c: 0x24047fee  addiu       $a0, $zero, 0x7FEE
    ctx->pc = 0x4a213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_4a2140:
    // 0x4a2140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a2140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2144:
    // 0x4a2144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a2144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2148:
    // 0x4a2148: 0x14e001a  div         $zero, $t2, $t6
    ctx->pc = 0x4a2148u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4a214c:
    // 0x4a214c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4a214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_4a2150:
    // 0x4a2150: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4a2150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4a2154:
    // 0x4a2154: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x4a2154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_4a2158:
    // 0x4a2158: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a2158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a215c:
    // 0x4a215c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4a215cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a2160:
    // 0x4a2160: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a2160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a2164:
    // 0x4a2164: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a2164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a2168:
    // 0x4a2168: 0x594825  or          $t1, $v0, $t9
    ctx->pc = 0x4a2168u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_4a216c:
    // 0x4a216c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a2170:
    // 0x4a2170: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x4a2170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_4a2174:
    // 0x4a2174: 0x72692b89  pcpyld      $a1, $s3, $t1
    ctx->pc = 0x4a2174u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 9)));
label_4a2178:
    // 0x4a2178: 0x982025  or          $a0, $a0, $t8
    ctx->pc = 0x4a2178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 24));
label_4a217c:
    // 0x4a217c: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x4a217cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_4a2180:
    // 0x4a2180: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x4a2180u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a2184:
    // 0x4a2184: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x4a2184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_4a2188:
    // 0x4a2188: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x4a2188u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4a218c:
    // 0x4a218c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a218cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a2190:
    // 0x4a2190: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4a2190u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_4a2194:
    // 0x4a2194: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4a2194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4a2198:
    // 0x4a2198: 0x51d10001  beql        $t6, $s1, . + 4 + (0x1 << 2)
label_4a219c:
    if (ctx->pc == 0x4A219Cu) {
        ctx->pc = 0x4A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2198u;
        // 0x4a219c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A21A0u;
        goto label_4a21a0;
    }
    ctx->pc = 0x4A2198u;
    {
        const bool branch_taken_0x4a2198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a2198) {
            ctx->pc = 0x4A219Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2198u;
            // 0x4a219c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A21A0u;
            goto label_4a21a0;
        }
    }
    ctx->pc = 0x4A21A0u;
label_4a21a0:
    // 0x4a21a0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a21a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a21a4:
    // 0x4a21a4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x4a21a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_4a21a8:
    // 0x4a21a8: 0x5812  mflo        $t3
    ctx->pc = 0x4a21a8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_4a21ac:
    // 0x4a21ac: 0x18b102a  slt         $v0, $t4, $t3
    ctx->pc = 0x4a21acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_4a21b0:
    // 0x4a21b0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_4a21b4:
    if (ctx->pc == 0x4A21B4u) {
        ctx->pc = 0x4A21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21B0u;
        // 0x4a21b4: 0x26108012  addiu       $s0, $s0, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A21B8u;
        goto label_4a21b8;
    }
    ctx->pc = 0x4A21B0u;
    {
        const bool branch_taken_0x4a21b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21B0u;
        // 0x4a21b4: 0x26108012  addiu       $s0, $s0, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21b0) {
            ctx->pc = 0x4A2128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2128;
        }
    }
    ctx->pc = 0x4A21B8u;
label_4a21b8:
    // 0x4a21b8: 0x3c096000  lui         $t1, 0x6000
    ctx->pc = 0x4a21b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
label_4a21bc:
    // 0x4a21bc: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x4a21bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_4a21c0:
    // 0x4a21c0: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x4a21c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_4a21c4:
    // 0x4a21c4: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x4a21c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_4a21c8:
    // 0x4a21c8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x4a21c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_4a21cc:
    // 0x4a21cc: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x4a21ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4a21d0:
    // 0x4a21d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4a21d4:
    // 0x4a21d4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4a21d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_4a21d8:
    // 0x4a21d8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4a21d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_4a21dc:
    // 0x4a21dc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4a21dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_4a21e0:
    // 0x4a21e0: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x4a21e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32769);
label_4a21e4:
    // 0x4a21e4: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x4a21e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4a21e8:
    // 0x4a21e8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a21e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a21ec:
    // 0x4a21ec: 0x71092b89  pcpyld      $a1, $t0, $t1
    ctx->pc = 0x4a21ecu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
label_4a21f0:
    // 0x4a21f0: 0x24630500  addiu       $v1, $v1, 0x500
    ctx->pc = 0x4a21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1280));
label_4a21f4:
    // 0x4a21f4: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x4a21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_4a21f8:
    // 0x4a21f8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4a21fc:
    // 0x4a21fc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a21fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a2200:
    // 0x4a2200: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x4a2200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_4a2204:
    // 0x4a2204: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4a2204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_4a2208:
    // 0x4a2208: 0x2842024  and         $a0, $s4, $a0
    ctx->pc = 0x4a2208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_4a220c:
    // 0x4a220c: 0x24e5008f  addiu       $a1, $a3, 0x8F
    ctx->pc = 0x4a220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 143));
label_4a2210:
    // 0x4a2210: 0xc10f644  jal         func_43D910
label_4a2214:
    if (ctx->pc == 0x4A2214u) {
        ctx->pc = 0x4A2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2210u;
        // 0x4a2214: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2218u;
        goto label_4a2218;
    }
    ctx->pc = 0x4A2210u;
    SET_GPR_U32(ctx, 31, 0x4A2218u);
    ctx->pc = 0x4A2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2210u;
    // 0x4a2214: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4A2210u, 0x4A2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2218u;
label_4a2218:
    // 0x4a2218: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a2218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a221c:
    // 0x4a221c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a221cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a2220:
    // 0x4a2220: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a2220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a2224:
    // 0x4a2224: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a2224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a2228:
    // 0x4a2228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a2228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a222c:
    // 0x4a222c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a222cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a2230:
    // 0x4a2230: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a2230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2234:
    // 0x4a2234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2238:
    // 0x4a2238: 0x3e00008  jr          $ra
label_4a223c:
    if (ctx->pc == 0x4A223Cu) {
        ctx->pc = 0x4A223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2238u;
        // 0x4a223c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A2240u;
        goto label_fallthrough_0x4a2238;
    }
    ctx->pc = 0x4A2238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2238u;
        // 0x4a223c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a2238:
    ctx->pc = 0x4A2240u;
}
