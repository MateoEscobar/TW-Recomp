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

// Function: sub_004F1F88
// Address: 0x4f1f88 - 0x4f21e8
void sub_004F1F88_0x4f1f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1F88_0x4f1f88");
#endif

    switch (ctx->pc) {
        case 0x4f1f88u: goto label_4f1f88;
        case 0x4f1f8cu: goto label_4f1f8c;
        case 0x4f1f90u: goto label_4f1f90;
        case 0x4f1f94u: goto label_4f1f94;
        case 0x4f1f98u: goto label_4f1f98;
        case 0x4f1f9cu: goto label_4f1f9c;
        case 0x4f1fa0u: goto label_4f1fa0;
        case 0x4f1fa4u: goto label_4f1fa4;
        case 0x4f1fa8u: goto label_4f1fa8;
        case 0x4f1facu: goto label_4f1fac;
        case 0x4f1fb0u: goto label_4f1fb0;
        case 0x4f1fb4u: goto label_4f1fb4;
        case 0x4f1fb8u: goto label_4f1fb8;
        case 0x4f1fbcu: goto label_4f1fbc;
        case 0x4f1fc0u: goto label_4f1fc0;
        case 0x4f1fc4u: goto label_4f1fc4;
        case 0x4f1fc8u: goto label_4f1fc8;
        case 0x4f1fccu: goto label_4f1fcc;
        case 0x4f1fd0u: goto label_4f1fd0;
        case 0x4f1fd4u: goto label_4f1fd4;
        case 0x4f1fd8u: goto label_4f1fd8;
        case 0x4f1fdcu: goto label_4f1fdc;
        case 0x4f1fe0u: goto label_4f1fe0;
        case 0x4f1fe4u: goto label_4f1fe4;
        case 0x4f1fe8u: goto label_4f1fe8;
        case 0x4f1fecu: goto label_4f1fec;
        case 0x4f1ff0u: goto label_4f1ff0;
        case 0x4f1ff4u: goto label_4f1ff4;
        case 0x4f1ff8u: goto label_4f1ff8;
        case 0x4f1ffcu: goto label_4f1ffc;
        case 0x4f2000u: goto label_4f2000;
        case 0x4f2004u: goto label_4f2004;
        case 0x4f2008u: goto label_4f2008;
        case 0x4f200cu: goto label_4f200c;
        case 0x4f2010u: goto label_4f2010;
        case 0x4f2014u: goto label_4f2014;
        case 0x4f2018u: goto label_4f2018;
        case 0x4f201cu: goto label_4f201c;
        case 0x4f2020u: goto label_4f2020;
        case 0x4f2024u: goto label_4f2024;
        case 0x4f2028u: goto label_4f2028;
        case 0x4f202cu: goto label_4f202c;
        case 0x4f2030u: goto label_4f2030;
        case 0x4f2034u: goto label_4f2034;
        case 0x4f2038u: goto label_4f2038;
        case 0x4f203cu: goto label_4f203c;
        case 0x4f2040u: goto label_4f2040;
        case 0x4f2044u: goto label_4f2044;
        case 0x4f2048u: goto label_4f2048;
        case 0x4f204cu: goto label_4f204c;
        case 0x4f2050u: goto label_4f2050;
        case 0x4f2054u: goto label_4f2054;
        case 0x4f2058u: goto label_4f2058;
        case 0x4f205cu: goto label_4f205c;
        case 0x4f2060u: goto label_4f2060;
        case 0x4f2064u: goto label_4f2064;
        case 0x4f2068u: goto label_4f2068;
        case 0x4f206cu: goto label_4f206c;
        case 0x4f2070u: goto label_4f2070;
        case 0x4f2074u: goto label_4f2074;
        case 0x4f2078u: goto label_4f2078;
        case 0x4f207cu: goto label_4f207c;
        case 0x4f2080u: goto label_4f2080;
        case 0x4f2084u: goto label_4f2084;
        case 0x4f2088u: goto label_4f2088;
        case 0x4f208cu: goto label_4f208c;
        case 0x4f2090u: goto label_4f2090;
        case 0x4f2094u: goto label_4f2094;
        case 0x4f2098u: goto label_4f2098;
        case 0x4f209cu: goto label_4f209c;
        case 0x4f20a0u: goto label_4f20a0;
        case 0x4f20a4u: goto label_4f20a4;
        case 0x4f20a8u: goto label_4f20a8;
        case 0x4f20acu: goto label_4f20ac;
        case 0x4f20b0u: goto label_4f20b0;
        case 0x4f20b4u: goto label_4f20b4;
        case 0x4f20b8u: goto label_4f20b8;
        case 0x4f20bcu: goto label_4f20bc;
        case 0x4f20c0u: goto label_4f20c0;
        case 0x4f20c4u: goto label_4f20c4;
        case 0x4f20c8u: goto label_4f20c8;
        case 0x4f20ccu: goto label_4f20cc;
        case 0x4f20d0u: goto label_4f20d0;
        case 0x4f20d4u: goto label_4f20d4;
        case 0x4f20d8u: goto label_4f20d8;
        case 0x4f20dcu: goto label_4f20dc;
        case 0x4f20e0u: goto label_4f20e0;
        case 0x4f20e4u: goto label_4f20e4;
        case 0x4f20e8u: goto label_4f20e8;
        case 0x4f20ecu: goto label_4f20ec;
        case 0x4f20f0u: goto label_4f20f0;
        case 0x4f20f4u: goto label_4f20f4;
        case 0x4f20f8u: goto label_4f20f8;
        case 0x4f20fcu: goto label_4f20fc;
        case 0x4f2100u: goto label_4f2100;
        case 0x4f2104u: goto label_4f2104;
        case 0x4f2108u: goto label_4f2108;
        case 0x4f210cu: goto label_4f210c;
        case 0x4f2110u: goto label_4f2110;
        case 0x4f2114u: goto label_4f2114;
        case 0x4f2118u: goto label_4f2118;
        case 0x4f211cu: goto label_4f211c;
        case 0x4f2120u: goto label_4f2120;
        case 0x4f2124u: goto label_4f2124;
        case 0x4f2128u: goto label_4f2128;
        case 0x4f212cu: goto label_4f212c;
        case 0x4f2130u: goto label_4f2130;
        case 0x4f2134u: goto label_4f2134;
        case 0x4f2138u: goto label_4f2138;
        case 0x4f213cu: goto label_4f213c;
        case 0x4f2140u: goto label_4f2140;
        case 0x4f2144u: goto label_4f2144;
        case 0x4f2148u: goto label_4f2148;
        case 0x4f214cu: goto label_4f214c;
        case 0x4f2150u: goto label_4f2150;
        case 0x4f2154u: goto label_4f2154;
        case 0x4f2158u: goto label_4f2158;
        case 0x4f215cu: goto label_4f215c;
        case 0x4f2160u: goto label_4f2160;
        case 0x4f2164u: goto label_4f2164;
        case 0x4f2168u: goto label_4f2168;
        case 0x4f216cu: goto label_4f216c;
        case 0x4f2170u: goto label_4f2170;
        case 0x4f2174u: goto label_4f2174;
        case 0x4f2178u: goto label_4f2178;
        case 0x4f217cu: goto label_4f217c;
        case 0x4f2180u: goto label_4f2180;
        case 0x4f2184u: goto label_4f2184;
        case 0x4f2188u: goto label_4f2188;
        case 0x4f218cu: goto label_4f218c;
        case 0x4f2190u: goto label_4f2190;
        case 0x4f2194u: goto label_4f2194;
        case 0x4f2198u: goto label_4f2198;
        case 0x4f219cu: goto label_4f219c;
        case 0x4f21a0u: goto label_4f21a0;
        case 0x4f21a4u: goto label_4f21a4;
        case 0x4f21a8u: goto label_4f21a8;
        case 0x4f21acu: goto label_4f21ac;
        case 0x4f21b0u: goto label_4f21b0;
        case 0x4f21b4u: goto label_4f21b4;
        case 0x4f21b8u: goto label_4f21b8;
        case 0x4f21bcu: goto label_4f21bc;
        case 0x4f21c0u: goto label_4f21c0;
        case 0x4f21c4u: goto label_4f21c4;
        case 0x4f21c8u: goto label_4f21c8;
        case 0x4f21ccu: goto label_4f21cc;
        case 0x4f21d0u: goto label_4f21d0;
        case 0x4f21d4u: goto label_4f21d4;
        case 0x4f21d8u: goto label_4f21d8;
        case 0x4f21dcu: goto label_4f21dc;
        case 0x4f21e0u: goto label_4f21e0;
        case 0x4f21e4u: goto label_4f21e4;
        default: break;
    }

    ctx->pc = 0x4f1f88u;

label_4f1f88:
    // 0x4f1f88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4f1f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4f1f8c:
    // 0x4f1f8c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4f1f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f1f90:
    // 0x4f1f90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4f1f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4f1f94:
    // 0x4f1f94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f1f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f1f98:
    // 0x4f1f98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f1f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1f9c:
    // 0x4f1f9c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4f1f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4f1fa0:
    // 0x4f1fa0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4f1fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f1fa4:
    // 0x4f1fa4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4f1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4f1fa8:
    // 0x4f1fa8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4f1fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f1fac:
    // 0x4f1fac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4f1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4f1fb0:
    // 0x4f1fb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4f1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4f1fb4:
    // 0x4f1fb4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4f1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4f1fb8:
    // 0x4f1fb8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4f1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4f1fbc:
    // 0x4f1fbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f1fc0:
    // 0x4f1fc0: 0x1140007d  beqz        $t2, . + 4 + (0x7D << 2)
label_4f1fc4:
    if (ctx->pc == 0x4F1FC4u) {
        ctx->pc = 0x4F1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FC0u;
        // 0x4f1fc4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1FC8u;
        goto label_4f1fc8;
    }
    ctx->pc = 0x4F1FC0u;
    {
        const bool branch_taken_0x4f1fc0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FC0u;
        // 0x4f1fc4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1fc0) {
            ctx->pc = 0x4F21B8u;
            goto label_4f21b8;
        }
    }
    ctx->pc = 0x4F1FC8u;
label_4f1fc8:
    // 0x4f1fc8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x4f1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4f1fcc:
    // 0x4f1fcc: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x4f1fccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f1fd0:
    // 0x4f1fd0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4f1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f1fd4:
    // 0x4f1fd4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f1fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f1fd8:
    // 0x4f1fd8: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x4f1fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f1fdc:
    // 0x4f1fdc: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_4f1fe0:
    if (ctx->pc == 0x4F1FE0u) {
        ctx->pc = 0x4F1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FDCu;
        // 0x4f1fe0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1FE4u;
        goto label_4f1fe4;
    }
    ctx->pc = 0x4F1FDCu;
    {
        const bool branch_taken_0x4f1fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f1fdc) {
            ctx->pc = 0x4F1FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1FDCu;
            // 0x4f1fe0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F20C4u;
            goto label_4f20c4;
        }
    }
    ctx->pc = 0x4F1FE4u;
label_4f1fe4:
    // 0x4f1fe4: 0x2541823  subu        $v1, $s2, $s4
    ctx->pc = 0x4f1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f1fe8:
    // 0x4f1fe8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f1fec:
    // 0x4f1fec: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x4f1fecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
label_4f1ff0:
    // 0x4f1ff0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4f1ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4f1ff4:
    // 0x4f1ff4: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x4f1ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f1ff8:
    // 0x4f1ff8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_4f1ffc:
    if (ctx->pc == 0x4F1FFCu) {
        ctx->pc = 0x4F1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FF8u;
        // 0x4f1ffc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2000u;
        goto label_4f2000;
    }
    ctx->pc = 0x4F1FF8u;
    {
        const bool branch_taken_0x4f1ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FF8u;
        // 0x4f1ffc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1ff8) {
            ctx->pc = 0x4F2064u;
            goto label_4f2064;
        }
    }
    ctx->pc = 0x4F2000u;
label_4f2000:
    // 0x4f2000: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f2000u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f2004:
    // 0x4f2004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f2004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f2008:
    // 0x4f2008: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4f2008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f200c:
    // 0x4f200c: 0xc10c1bb  jal         func_4306EC
label_4f2010:
    if (ctx->pc == 0x4F2010u) {
        ctx->pc = 0x4F2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F200Cu;
        // 0x4f2010: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2014u;
        goto label_4f2014;
    }
    ctx->pc = 0x4F200Cu;
    SET_GPR_U32(ctx, 31, 0x4F2014u);
    ctx->pc = 0x4F2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F200Cu;
    // 0x4f2010: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F200Cu, 0x4F2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2014u;
label_4f2014:
    // 0x4f2014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f2014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f2018:
    // 0x4f2018: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f2018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f201c:
    // 0x4f201c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4f201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f2020:
    // 0x4f2020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f2020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f2024:
    // 0x4f2024: 0x2433023  subu        $a2, $s2, $v1
    ctx->pc = 0x4f2024u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4f2028:
    // 0x4f2028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f202c:
    // 0x4f202c: 0xd43023  subu        $a2, $a2, $s4
    ctx->pc = 0x4f202cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_4f2030:
    // 0x4f2030: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x4f2030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_4f2034:
    // 0x4f2034: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f2034u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f2038:
    // 0x4f2038: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f2038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f203c:
    // 0x4f203c: 0xc10c1bb  jal         func_4306EC
label_4f2040:
    if (ctx->pc == 0x4F2040u) {
        ctx->pc = 0x4F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F203Cu;
        // 0x4f2040: 0x2462023  subu        $a0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2044u;
        goto label_4f2044;
    }
    ctx->pc = 0x4F203Cu;
    SET_GPR_U32(ctx, 31, 0x4F2044u);
    ctx->pc = 0x4F2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F203Cu;
    // 0x4f2040: 0x2462023  subu        $a0, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F203Cu, 0x4F2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2044u;
label_4f2044:
    // 0x4f2044: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f2044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f2048:
    // 0x4f2048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f204c:
    // 0x4f204c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f204cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f2050:
    // 0x4f2050: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f2050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f2054:
    // 0x4f2054: 0xc13c7cc  jal         func_4F1F30
label_4f2058:
    if (ctx->pc == 0x4F2058u) {
        ctx->pc = 0x4F2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2054u;
        // 0x4f2058: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F205Cu;
        goto label_4f205c;
    }
    ctx->pc = 0x4F2054u;
    SET_GPR_U32(ctx, 31, 0x4F205Cu);
    ctx->pc = 0x4F2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2054u;
    // 0x4f2058: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F30u, 0x4F2054u, 0x4F205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F205Cu;
label_4f205c:
    // 0x4f205c: 0x10000057  b           . + 4 + (0x57 << 2)
label_4f2060:
    if (ctx->pc == 0x4F2060u) {
        ctx->pc = 0x4F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F205Cu;
        // 0x4f2060: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2064u;
        goto label_4f2064;
    }
    ctx->pc = 0x4F205Cu;
    {
        const bool branch_taken_0x4f205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F205Cu;
        // 0x4f2060: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f205c) {
            ctx->pc = 0x4F21BCu;
            goto label_4f21bc;
        }
    }
    ctx->pc = 0x4F2064u;
label_4f2064:
    // 0x4f2064: 0x1512823  subu        $a1, $t2, $s1
    ctx->pc = 0x4f2064u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_4f2068:
    // 0x4f2068: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f2068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f206c:
    // 0x4f206c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f2070:
    // 0x4f2070: 0xc13c7d8  jal         func_4F1F60
label_4f2074:
    if (ctx->pc == 0x4F2074u) {
        ctx->pc = 0x4F2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2070u;
        // 0x4f2074: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2078u;
        goto label_4f2078;
    }
    ctx->pc = 0x4F2070u;
    SET_GPR_U32(ctx, 31, 0x4F2078u);
    ctx->pc = 0x4F2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2070u;
    // 0x4f2074: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F60u, 0x4F2070u, 0x4F2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2078u;
label_4f2078:
    // 0x4f2078: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f207c:
    // 0x4f207c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f207cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f2080:
    // 0x4f2080: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4f2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f2084:
    // 0x4f2084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2088:
    // 0x4f2088: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4f2088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4f208c:
    // 0x4f208c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f208cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f2090:
    // 0x4f2090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f2094:
    // 0x4f2094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f2098:
    // 0x4f2098: 0xc10c1bb  jal         func_4306EC
label_4f209c:
    if (ctx->pc == 0x4F209Cu) {
        ctx->pc = 0x4F209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2098u;
        // 0x4f209c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F20A0u;
        goto label_4f20a0;
    }
    ctx->pc = 0x4F2098u;
    SET_GPR_U32(ctx, 31, 0x4F20A0u);
    ctx->pc = 0x4F209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2098u;
    // 0x4f209c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F2098u, 0x4F20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F20A0u;
label_4f20a0:
    // 0x4f20a0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4f20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f20a4:
    // 0x4f20a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f20a8:
    // 0x4f20a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f20a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f20ac:
    // 0x4f20ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f20acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f20b0:
    // 0x4f20b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4f20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4f20b4:
    // 0x4f20b4: 0xc13c7cc  jal         func_4F1F30
label_4f20b8:
    if (ctx->pc == 0x4F20B8u) {
        ctx->pc = 0x4F20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F20B4u;
        // 0x4f20b8: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F20BCu;
        goto label_4f20bc;
    }
    ctx->pc = 0x4F20B4u;
    SET_GPR_U32(ctx, 31, 0x4F20BCu);
    ctx->pc = 0x4F20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F20B4u;
    // 0x4f20b8: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F30u, 0x4F20B4u, 0x4F20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F20BCu;
label_4f20bc:
    // 0x4f20bc: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4f20c0:
    if (ctx->pc == 0x4F20C0u) {
        ctx->pc = 0x4F20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F20BCu;
        // 0x4f20c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F20C4u;
        goto label_4f20c4;
    }
    ctx->pc = 0x4F20BCu;
    {
        const bool branch_taken_0x4f20bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F20BCu;
        // 0x4f20c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f20bc) {
            ctx->pc = 0x4F21BCu;
            goto label_4f21bc;
        }
    }
    ctx->pc = 0x4F20C4u;
label_4f20c4:
    // 0x4f20c4: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4f20c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4f20c8:
    // 0x4f20c8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4f20c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4f20cc:
    // 0x4f20cc: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x4f20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_4f20d0:
    // 0x4f20d0: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x4f20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4f20d4:
    // 0x4f20d4: 0x8ee9b9c0  lw          $t1, -0x4640($s7)
    ctx->pc = 0x4f20d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4f20d8:
    // 0x4f20d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4f20d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4f20dc:
    // 0x4f20dc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x4f20dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_4f20e0:
    // 0x4f20e0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4f20e4:
    // 0x4f20e4: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x4f20e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f20e8:
    // 0x4f20e8: 0xe2200a  movz        $a0, $a3, $v0
    ctx->pc = 0x4f20e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_4f20ec:
    // 0x4f20ec: 0x24d6df58  addiu       $s6, $a2, -0x20A8
    ctx->pc = 0x4f20ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958936));
label_4f20f0:
    // 0x4f20f0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4f20f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f20f4:
    // 0x4f20f4: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f20f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f20f8:
    // 0x4f20f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f20fc:
    // 0x4f20fc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4f20fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f2100:
    // 0x4f2100: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x4f2100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_4f2104:
    // 0x4f2104: 0x254adf88  addiu       $t2, $t2, -0x2078
    ctx->pc = 0x4f2104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958984));
label_4f2108:
    // 0x4f2108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f2108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f210c:
    // 0x4f210c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f210cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f2110:
    // 0x4f2110: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4f2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_4f2114:
    // 0x4f2114: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x4f2114u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f2118:
    // 0x4f2118: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f2118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f211c:
    // 0x4f211c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f211cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f2120:
    // 0x4f2120: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f2120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f2124:
    // 0x4f2124: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f2124u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2128:
    // 0x4f2128: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f2128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f212c:
    // 0x4f212c: 0x40f809  jalr        $v0
label_4f2130:
    if (ctx->pc == 0x4F2130u) {
        ctx->pc = 0x4F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F212Cu;
        // 0x4f2130: 0x24a5df80  addiu       $a1, $a1, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2134u;
        goto label_4f2134;
    }
    ctx->pc = 0x4F212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2134u);
        ctx->pc = 0x4F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F212Cu;
        // 0x4f2130: 0x24a5df80  addiu       $a1, $a1, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F212Cu, 0x4F2134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2134u;
label_4f2134:
    // 0x4f2134: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f2134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f2138:
    // 0x4f2138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f2138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f213c:
    // 0x4f213c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f2140:
    // 0x4f2140: 0x2858023  subu        $s0, $s4, $a1
    ctx->pc = 0x4f2140u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_4f2144:
    // 0x4f2144: 0x103083  sra         $a2, $s0, 2
    ctx->pc = 0x4f2144u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 2));
label_4f2148:
    // 0x4f2148: 0xc10c1bb  jal         func_4306EC
label_4f214c:
    if (ctx->pc == 0x4F214Cu) {
        ctx->pc = 0x4F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2148u;
        // 0x4f214c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2150u;
        goto label_4f2150;
    }
    ctx->pc = 0x4F2148u;
    SET_GPR_U32(ctx, 31, 0x4F2150u);
    ctx->pc = 0x4F214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2148u;
    // 0x4f214c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F2148u, 0x4F2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2150u;
label_4f2150:
    // 0x4f2150: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f2154:
    // 0x4f2154: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x4f2154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4f2158:
    // 0x4f2158: 0xc13c7d8  jal         func_4F1F60
label_4f215c:
    if (ctx->pc == 0x4F215Cu) {
        ctx->pc = 0x4F215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2158u;
        // 0x4f215c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2160u;
        goto label_4f2160;
    }
    ctx->pc = 0x4F2158u;
    SET_GPR_U32(ctx, 31, 0x4F2160u);
    ctx->pc = 0x4F215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2158u;
    // 0x4f215c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F60u, 0x4F2158u, 0x4F2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2160u;
label_4f2160:
    // 0x4f2160: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4f2160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f2164:
    // 0x4f2164: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f2164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f2168:
    // 0x4f2168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f216c:
    // 0x4f216c: 0xd43023  subu        $a2, $a2, $s4
    ctx->pc = 0x4f216cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_4f2170:
    // 0x4f2170: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x4f2170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4f2174:
    // 0x4f2174: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f2174u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f2178:
    // 0x4f2178: 0xc10c1bb  jal         func_4306EC
label_4f217c:
    if (ctx->pc == 0x4F217Cu) {
        ctx->pc = 0x4F217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2178u;
        // 0x4f217c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2180u;
        goto label_4f2180;
    }
    ctx->pc = 0x4F2178u;
    SET_GPR_U32(ctx, 31, 0x4F2180u);
    ctx->pc = 0x4F217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2178u;
    // 0x4f217c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F2178u, 0x4F2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2180u;
label_4f2180:
    // 0x4f2180: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f2180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f2184:
    // 0x4f2184: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f2188:
    if (ctx->pc == 0x4F2188u) {
        ctx->pc = 0x4F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2184u;
        // 0x4f2188: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F218Cu;
        goto label_4f218c;
    }
    ctx->pc = 0x4F2184u;
    {
        const bool branch_taken_0x4f2184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2184u;
        // 0x4f2188: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2184) {
            ctx->pc = 0x4F21A8u;
            goto label_4f21a8;
        }
    }
    ctx->pc = 0x4F218Cu;
label_4f218c:
    // 0x4f218c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4f218cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f2190:
    // 0x4f2190: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f2190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f2194:
    // 0x4f2194: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2198:
    // 0x4f2198: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f2198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f219c:
    // 0x4f219c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f21a0:
    // 0x4f21a0: 0x60f809  jalr        $v1
label_4f21a4:
    if (ctx->pc == 0x4F21A4u) {
        ctx->pc = 0x4F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F21A0u;
        // 0x4f21a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F21A8u;
        goto label_4f21a8;
    }
    ctx->pc = 0x4F21A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F21A8u);
        ctx->pc = 0x4F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F21A0u;
        // 0x4f21a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F21A0u, 0x4F21A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F21A8u;
label_4f21a8:
    // 0x4f21a8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x4f21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_4f21ac:
    // 0x4f21ac: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x4f21acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_4f21b0:
    // 0x4f21b0: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x4f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_4f21b4:
    // 0x4f21b4: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x4f21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_4f21b8:
    // 0x4f21b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4f21b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f21bc:
    // 0x4f21bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4f21bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f21c0:
    // 0x4f21c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4f21c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f21c4:
    // 0x4f21c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4f21c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f21c8:
    // 0x4f21c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f21c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f21cc:
    // 0x4f21cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4f21ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f21d0:
    // 0x4f21d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4f21d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f21d4:
    // 0x4f21d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4f21d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f21d8:
    // 0x4f21d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f21d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f21dc:
    // 0x4f21dc: 0x3e00008  jr          $ra
label_4f21e0:
    if (ctx->pc == 0x4F21E0u) {
        ctx->pc = 0x4F21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F21DCu;
        // 0x4f21e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F21E4u;
        goto label_4f21e4;
    }
    ctx->pc = 0x4F21DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F21DCu;
        // 0x4f21e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F21DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F21E4u;
label_4f21e4:
    // 0x4f21e4: 0x0  nop
    ctx->pc = 0x4f21e4u;
    // NOP
    ctx->pc = 0x4f21e8u;
}
