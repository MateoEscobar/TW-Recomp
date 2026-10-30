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

// Function: sub_003F2070
// Address: 0x3f2070 - 0x3f2250
void sub_003F2070_0x3f2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2070_0x3f2070");
#endif

    switch (ctx->pc) {
        case 0x3f2070u: goto label_3f2070;
        case 0x3f2074u: goto label_3f2074;
        case 0x3f2078u: goto label_3f2078;
        case 0x3f207cu: goto label_3f207c;
        case 0x3f2080u: goto label_3f2080;
        case 0x3f2084u: goto label_3f2084;
        case 0x3f2088u: goto label_3f2088;
        case 0x3f208cu: goto label_3f208c;
        case 0x3f2090u: goto label_3f2090;
        case 0x3f2094u: goto label_3f2094;
        case 0x3f2098u: goto label_3f2098;
        case 0x3f209cu: goto label_3f209c;
        case 0x3f20a0u: goto label_3f20a0;
        case 0x3f20a4u: goto label_3f20a4;
        case 0x3f20a8u: goto label_3f20a8;
        case 0x3f20acu: goto label_3f20ac;
        case 0x3f20b0u: goto label_3f20b0;
        case 0x3f20b4u: goto label_3f20b4;
        case 0x3f20b8u: goto label_3f20b8;
        case 0x3f20bcu: goto label_3f20bc;
        case 0x3f20c0u: goto label_3f20c0;
        case 0x3f20c4u: goto label_3f20c4;
        case 0x3f20c8u: goto label_3f20c8;
        case 0x3f20ccu: goto label_3f20cc;
        case 0x3f20d0u: goto label_3f20d0;
        case 0x3f20d4u: goto label_3f20d4;
        case 0x3f20d8u: goto label_3f20d8;
        case 0x3f20dcu: goto label_3f20dc;
        case 0x3f20e0u: goto label_3f20e0;
        case 0x3f20e4u: goto label_3f20e4;
        case 0x3f20e8u: goto label_3f20e8;
        case 0x3f20ecu: goto label_3f20ec;
        case 0x3f20f0u: goto label_3f20f0;
        case 0x3f20f4u: goto label_3f20f4;
        case 0x3f20f8u: goto label_3f20f8;
        case 0x3f20fcu: goto label_3f20fc;
        case 0x3f2100u: goto label_3f2100;
        case 0x3f2104u: goto label_3f2104;
        case 0x3f2108u: goto label_3f2108;
        case 0x3f210cu: goto label_3f210c;
        case 0x3f2110u: goto label_3f2110;
        case 0x3f2114u: goto label_3f2114;
        case 0x3f2118u: goto label_3f2118;
        case 0x3f211cu: goto label_3f211c;
        case 0x3f2120u: goto label_3f2120;
        case 0x3f2124u: goto label_3f2124;
        case 0x3f2128u: goto label_3f2128;
        case 0x3f212cu: goto label_3f212c;
        case 0x3f2130u: goto label_3f2130;
        case 0x3f2134u: goto label_3f2134;
        case 0x3f2138u: goto label_3f2138;
        case 0x3f213cu: goto label_3f213c;
        case 0x3f2140u: goto label_3f2140;
        case 0x3f2144u: goto label_3f2144;
        case 0x3f2148u: goto label_3f2148;
        case 0x3f214cu: goto label_3f214c;
        case 0x3f2150u: goto label_3f2150;
        case 0x3f2154u: goto label_3f2154;
        case 0x3f2158u: goto label_3f2158;
        case 0x3f215cu: goto label_3f215c;
        case 0x3f2160u: goto label_3f2160;
        case 0x3f2164u: goto label_3f2164;
        case 0x3f2168u: goto label_3f2168;
        case 0x3f216cu: goto label_3f216c;
        case 0x3f2170u: goto label_3f2170;
        case 0x3f2174u: goto label_3f2174;
        case 0x3f2178u: goto label_3f2178;
        case 0x3f217cu: goto label_3f217c;
        case 0x3f2180u: goto label_3f2180;
        case 0x3f2184u: goto label_3f2184;
        case 0x3f2188u: goto label_3f2188;
        case 0x3f218cu: goto label_3f218c;
        case 0x3f2190u: goto label_3f2190;
        case 0x3f2194u: goto label_3f2194;
        case 0x3f2198u: goto label_3f2198;
        case 0x3f219cu: goto label_3f219c;
        case 0x3f21a0u: goto label_3f21a0;
        case 0x3f21a4u: goto label_3f21a4;
        case 0x3f21a8u: goto label_3f21a8;
        case 0x3f21acu: goto label_3f21ac;
        case 0x3f21b0u: goto label_3f21b0;
        case 0x3f21b4u: goto label_3f21b4;
        case 0x3f21b8u: goto label_3f21b8;
        case 0x3f21bcu: goto label_3f21bc;
        case 0x3f21c0u: goto label_3f21c0;
        case 0x3f21c4u: goto label_3f21c4;
        case 0x3f21c8u: goto label_3f21c8;
        case 0x3f21ccu: goto label_3f21cc;
        case 0x3f21d0u: goto label_3f21d0;
        case 0x3f21d4u: goto label_3f21d4;
        case 0x3f21d8u: goto label_3f21d8;
        case 0x3f21dcu: goto label_3f21dc;
        case 0x3f21e0u: goto label_3f21e0;
        case 0x3f21e4u: goto label_3f21e4;
        case 0x3f21e8u: goto label_3f21e8;
        case 0x3f21ecu: goto label_3f21ec;
        case 0x3f21f0u: goto label_3f21f0;
        case 0x3f21f4u: goto label_3f21f4;
        case 0x3f21f8u: goto label_3f21f8;
        case 0x3f21fcu: goto label_3f21fc;
        case 0x3f2200u: goto label_3f2200;
        case 0x3f2204u: goto label_3f2204;
        case 0x3f2208u: goto label_3f2208;
        case 0x3f220cu: goto label_3f220c;
        case 0x3f2210u: goto label_3f2210;
        case 0x3f2214u: goto label_3f2214;
        case 0x3f2218u: goto label_3f2218;
        case 0x3f221cu: goto label_3f221c;
        case 0x3f2220u: goto label_3f2220;
        case 0x3f2224u: goto label_3f2224;
        case 0x3f2228u: goto label_3f2228;
        case 0x3f222cu: goto label_3f222c;
        case 0x3f2230u: goto label_3f2230;
        case 0x3f2234u: goto label_3f2234;
        case 0x3f2238u: goto label_3f2238;
        case 0x3f223cu: goto label_3f223c;
        case 0x3f2240u: goto label_3f2240;
        case 0x3f2244u: goto label_3f2244;
        case 0x3f2248u: goto label_3f2248;
        case 0x3f224cu: goto label_3f224c;
        default: break;
    }

    ctx->pc = 0x3f2070u;

label_3f2070:
    // 0x3f2070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f2070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f2074:
    // 0x3f2074: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f2074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3f2078:
    // 0x3f2078: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f2078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3f207c:
    // 0x3f207c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2080:
    // 0x3f2080: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f2080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3f2084:
    // 0x3f2084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f2084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2088:
    // 0x3f2088: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f2088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3f208c:
    // 0x3f208c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f208cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f2090:
    // 0x3f2090: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f2094:
    // 0x3f2094: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f2098:
    // 0x3f2098: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f209c:
    // 0x3f209c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f20a0:
    // 0x3f20a0: 0x40f809  jalr        $v0
label_3f20a4:
    if (ctx->pc == 0x3F20A4u) {
        ctx->pc = 0x3F20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20A0u;
        // 0x3f20a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F20A8u;
        goto label_3f20a8;
    }
    ctx->pc = 0x3F20A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F20A8u);
        ctx->pc = 0x3F20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20A0u;
        // 0x3f20a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F20A0u, 0x3F20A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F20A8u;
label_3f20a8:
    // 0x3f20a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f20a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f20ac:
    // 0x3f20ac: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x3f20acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_3f20b0:
    // 0x3f20b0: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_3f20b4:
    if (ctx->pc == 0x3F20B4u) {
        ctx->pc = 0x3F20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20B0u;
        // 0x3f20b4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F20B8u;
        goto label_3f20b8;
    }
    ctx->pc = 0x3F20B0u;
    {
        const bool branch_taken_0x3f20b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20B0u;
        // 0x3f20b4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20b0) {
            ctx->pc = 0x3F2250u;
            return;
        }
    }
    ctx->pc = 0x3F20B8u;
label_3f20b8:
    // 0x3f20b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3f20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f20bc:
    // 0x3f20bc: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x3f20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
label_3f20c0:
    // 0x3f20c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f20c4:
    // 0x3f20c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f20c8:
    // 0x3f20c8: 0x800008  jr          $a0
label_3f20cc:
    if (ctx->pc == 0x3F20CCu) {
        ctx->pc = 0x3F20D0u;
        goto label_3f20d0;
    }
    ctx->pc = 0x3F20C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F20D0u: goto label_3f20d0;
            case 0x3F20E8u: goto label_3f20e8;
            case 0x3F2100u: goto label_3f2100;
            case 0x3F2118u: goto label_3f2118;
            case 0x3F2128u: goto label_3f2128;
            case 0x3F2140u: goto label_3f2140;
            case 0x3F2158u: goto label_3f2158;
            case 0x3F2170u: goto label_3f2170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F20C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F20D0u;
label_3f20d0:
    // 0x3f20d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f20d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f20d4:
    // 0x3f20d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f20d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f20d8:
    // 0x3f20d8: 0xc0fc6b6  jal         func_3F1AD8
label_3f20dc:
    if (ctx->pc == 0x3F20DCu) {
        ctx->pc = 0x3F20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20D8u;
        // 0x3f20dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F20E0u;
        goto label_3f20e0;
    }
    ctx->pc = 0x3F20D8u;
    SET_GPR_U32(ctx, 31, 0x3F20E0u);
    ctx->pc = 0x3F20DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F20D8u;
    // 0x3f20dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1AD8u, 0x3F20D8u, 0x3F20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F20E0u;
label_3f20e0:
    // 0x3f20e0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3f20e4:
    if (ctx->pc == 0x3F20E4u) {
        ctx->pc = 0x3F20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20E0u;
        // 0x3f20e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F20E8u;
        goto label_3f20e8;
    }
    ctx->pc = 0x3F20E0u;
    {
        const bool branch_taken_0x3f20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20E0u;
        // 0x3f20e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20e0) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F20E8u;
label_3f20e8:
    // 0x3f20e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f20ec:
    // 0x3f20ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f20ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f20f0:
    // 0x3f20f0: 0xc0fc6ec  jal         func_3F1BB0
label_3f20f4:
    if (ctx->pc == 0x3F20F4u) {
        ctx->pc = 0x3F20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20F0u;
        // 0x3f20f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F20F8u;
        goto label_3f20f8;
    }
    ctx->pc = 0x3F20F0u;
    SET_GPR_U32(ctx, 31, 0x3F20F8u);
    ctx->pc = 0x3F20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F20F0u;
    // 0x3f20f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1BB0u, 0x3F20F0u, 0x3F20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F20F8u;
label_3f20f8:
    // 0x3f20f8: 0x10000056  b           . + 4 + (0x56 << 2)
label_3f20fc:
    if (ctx->pc == 0x3F20FCu) {
        ctx->pc = 0x3F20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20F8u;
        // 0x3f20fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2100u;
        goto label_3f2100;
    }
    ctx->pc = 0x3F20F8u;
    {
        const bool branch_taken_0x3f20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20F8u;
        // 0x3f20fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20f8) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2100u;
label_3f2100:
    // 0x3f2100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2104:
    // 0x3f2104: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f2104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f2108:
    // 0x3f2108: 0xc0fc7bc  jal         func_3F1EF0
label_3f210c:
    if (ctx->pc == 0x3F210Cu) {
        ctx->pc = 0x3F210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2108u;
        // 0x3f210c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2110u;
        goto label_3f2110;
    }
    ctx->pc = 0x3F2108u;
    SET_GPR_U32(ctx, 31, 0x3F2110u);
    ctx->pc = 0x3F210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2108u;
    // 0x3f210c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1EF0u, 0x3F2108u, 0x3F2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2110u;
label_3f2110:
    // 0x3f2110: 0x10000050  b           . + 4 + (0x50 << 2)
label_3f2114:
    if (ctx->pc == 0x3F2114u) {
        ctx->pc = 0x3F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2110u;
        // 0x3f2114: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2118u;
        goto label_3f2118;
    }
    ctx->pc = 0x3F2110u;
    {
        const bool branch_taken_0x3f2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2110u;
        // 0x3f2114: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2110) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2118u;
label_3f2118:
    // 0x3f2118: 0xc0e8616  jal         func_3A1858
label_3f211c:
    if (ctx->pc == 0x3F211Cu) {
        ctx->pc = 0x3F211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2118u;
        // 0x3f211c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2120u;
        goto label_3f2120;
    }
    ctx->pc = 0x3F2118u;
    SET_GPR_U32(ctx, 31, 0x3F2120u);
    ctx->pc = 0x3F211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2118u;
    // 0x3f211c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3F2118u, 0x3F2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2120u;
label_3f2120:
    // 0x3f2120: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3f2124:
    if (ctx->pc == 0x3F2124u) {
        ctx->pc = 0x3F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2120u;
        // 0x3f2124: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2128u;
        goto label_3f2128;
    }
    ctx->pc = 0x3F2120u;
    {
        const bool branch_taken_0x3f2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2120u;
        // 0x3f2124: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2120) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2128u;
label_3f2128:
    // 0x3f2128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f212c:
    // 0x3f212c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f2130:
    // 0x3f2130: 0xc0fc7f8  jal         func_3F1FE0
label_3f2134:
    if (ctx->pc == 0x3F2134u) {
        ctx->pc = 0x3F2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2130u;
        // 0x3f2134: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2138u;
        goto label_3f2138;
    }
    ctx->pc = 0x3F2130u;
    SET_GPR_U32(ctx, 31, 0x3F2138u);
    ctx->pc = 0x3F2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2130u;
    // 0x3f2134: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1FE0u, 0x3F2130u, 0x3F2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2138u;
label_3f2138:
    // 0x3f2138: 0x10000046  b           . + 4 + (0x46 << 2)
label_3f213c:
    if (ctx->pc == 0x3F213Cu) {
        ctx->pc = 0x3F213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2138u;
        // 0x3f213c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2140u;
        goto label_3f2140;
    }
    ctx->pc = 0x3F2138u;
    {
        const bool branch_taken_0x3f2138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2138u;
        // 0x3f213c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2138) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2140u;
label_3f2140:
    // 0x3f2140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2144:
    // 0x3f2144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f2144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f2148:
    // 0x3f2148: 0xc0fc800  jal         func_3F2000
label_3f214c:
    if (ctx->pc == 0x3F214Cu) {
        ctx->pc = 0x3F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2148u;
        // 0x3f214c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2150u;
        goto label_3f2150;
    }
    ctx->pc = 0x3F2148u;
    SET_GPR_U32(ctx, 31, 0x3F2150u);
    ctx->pc = 0x3F214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2148u;
    // 0x3f214c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2000u, 0x3F2148u, 0x3F2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2150u;
label_3f2150:
    // 0x3f2150: 0x10000040  b           . + 4 + (0x40 << 2)
label_3f2154:
    if (ctx->pc == 0x3F2154u) {
        ctx->pc = 0x3F2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2150u;
        // 0x3f2154: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2158u;
        goto label_3f2158;
    }
    ctx->pc = 0x3F2150u;
    {
        const bool branch_taken_0x3f2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2150u;
        // 0x3f2154: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2150) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2158u;
label_3f2158:
    // 0x3f2158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f215c:
    // 0x3f215c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f2160:
    // 0x3f2160: 0xc0fc7e4  jal         func_3F1F90
label_3f2164:
    if (ctx->pc == 0x3F2164u) {
        ctx->pc = 0x3F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2160u;
        // 0x3f2164: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2168u;
        goto label_3f2168;
    }
    ctx->pc = 0x3F2160u;
    SET_GPR_U32(ctx, 31, 0x3F2168u);
    ctx->pc = 0x3F2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2160u;
    // 0x3f2164: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1F90u, 0x3F2160u, 0x3F2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2168u;
label_3f2168:
    // 0x3f2168: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3f216c:
    if (ctx->pc == 0x3F216Cu) {
        ctx->pc = 0x3F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2168u;
        // 0x3f216c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2170u;
        goto label_3f2170;
    }
    ctx->pc = 0x3F2168u;
    {
        const bool branch_taken_0x3f2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2168u;
        // 0x3f216c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2168) {
            ctx->pc = 0x3F2254u;
            return;
        }
    }
    ctx->pc = 0x3F2170u;
label_3f2170:
    // 0x3f2170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f2170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f2174:
    // 0x3f2174: 0xc0ea12a  jal         func_3A84A8
label_3f2178:
    if (ctx->pc == 0x3F2178u) {
        ctx->pc = 0x3F2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2174u;
        // 0x3f2178: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F217Cu;
        goto label_3f217c;
    }
    ctx->pc = 0x3F2174u;
    SET_GPR_U32(ctx, 31, 0x3F217Cu);
    ctx->pc = 0x3F2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2174u;
    // 0x3f2178: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2174u, 0x3F217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F217Cu;
label_3f217c:
    // 0x3f217c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3f217cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f2180:
    // 0x3f2180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f2180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f2184:
    // 0x3f2184: 0xc0ea12a  jal         func_3A84A8
label_3f2188:
    if (ctx->pc == 0x3F2188u) {
        ctx->pc = 0x3F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2184u;
        // 0x3f2188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F218Cu;
        goto label_3f218c;
    }
    ctx->pc = 0x3F2184u;
    SET_GPR_U32(ctx, 31, 0x3F218Cu);
    ctx->pc = 0x3F2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2184u;
    // 0x3f2188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2184u, 0x3F218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F218Cu;
label_3f218c:
    // 0x3f218c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f2190:
    // 0x3f2190: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3f2190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3f2194:
    // 0x3f2194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3f2194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3f2198:
    // 0x3f2198: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3f2198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3f219c:
    // 0x3f219c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3f219cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3f21a0:
    // 0x3f21a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f21a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f21a4:
    // 0x3f21a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f21a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f21a8:
    // 0x3f21a8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3f21a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3f21ac:
    // 0x3f21ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f21acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f21b0:
    // 0x3f21b0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f21b4:
    // 0x3f21b4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f21b8:
    // 0x3f21b8: 0xc0cd518  jal         func_335460
label_3f21bc:
    if (ctx->pc == 0x3F21BCu) {
        ctx->pc = 0x3F21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F21B8u;
        // 0x3f21bc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F21C0u;
        goto label_3f21c0;
    }
    ctx->pc = 0x3F21B8u;
    SET_GPR_U32(ctx, 31, 0x3F21C0u);
    ctx->pc = 0x3F21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F21B8u;
    // 0x3f21bc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F21B8u, 0x3F21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F21C0u;
label_3f21c0:
    // 0x3f21c0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f21c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f21c4:
    // 0x3f21c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f21c8:
    // 0x3f21c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3f21c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3f21cc:
    // 0x3f21cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f21d0:
    // 0x3f21d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f21d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f21d4:
    // 0x3f21d4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3f21d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f21d8:
    // 0x3f21d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f21d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f21dc:
    // 0x3f21dc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f21dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f21e0:
    // 0x3f21e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f21e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f21e4:
    // 0x3f21e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f21e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f21e8:
    // 0x3f21e8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f21ec:
    // 0x3f21ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f21ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f21f0:
    // 0x3f21f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f21f4:
    // 0x3f21f4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3f21f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3f21f8:
    // 0x3f21f8: 0xc0e858c  jal         func_3A1630
label_3f21fc:
    if (ctx->pc == 0x3F21FCu) {
        ctx->pc = 0x3F21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F21F8u;
        // 0x3f21fc: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2200u;
        goto label_3f2200;
    }
    ctx->pc = 0x3F21F8u;
    SET_GPR_U32(ctx, 31, 0x3F2200u);
    ctx->pc = 0x3F21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F21F8u;
    // 0x3f21fc: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F21F8u, 0x3F2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2200u;
label_3f2200:
    // 0x3f2200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f2204:
    // 0x3f2204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2208:
    // 0x3f2208: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f2208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f220c:
    // 0x3f220c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f2210:
    // 0x3f2210: 0x60f809  jalr        $v1
label_3f2214:
    if (ctx->pc == 0x3F2214u) {
        ctx->pc = 0x3F2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2210u;
        // 0x3f2214: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2218u;
        goto label_3f2218;
    }
    ctx->pc = 0x3F2210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F2218u);
        ctx->pc = 0x3F2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2210u;
        // 0x3f2214: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2210u, 0x3F2218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2218u;
label_3f2218:
    // 0x3f2218: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f221c:
    // 0x3f221c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f2220:
    // 0x3f2220: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3f2220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3f2224:
    // 0x3f2224: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3f2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3f2228:
    // 0x3f2228: 0x60f809  jalr        $v1
label_3f222c:
    if (ctx->pc == 0x3F222Cu) {
        ctx->pc = 0x3F222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2228u;
        // 0x3f222c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2230u;
        goto label_3f2230;
    }
    ctx->pc = 0x3F2228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F2230u);
        ctx->pc = 0x3F222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2228u;
        // 0x3f222c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2228u, 0x3F2230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2230u;
label_3f2230:
    // 0x3f2230: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f2234:
    // 0x3f2234: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3f2234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3f2238:
    // 0x3f2238: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x3f2238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_3f223c:
    // 0x3f223c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3f223cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_3f2240:
    // 0x3f2240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f2240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f2244:
    // 0x3f2244: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3f2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3f2248:
    // 0x3f2248: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3f2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3f224c:
    // 0x3f224c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f224cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x3f2250u;
}
