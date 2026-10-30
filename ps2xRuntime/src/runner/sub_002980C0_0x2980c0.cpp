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

// Function: sub_002980C0
// Address: 0x2980c0 - 0x298368
void sub_002980C0_0x2980c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002980C0_0x2980c0");
#endif

    switch (ctx->pc) {
        case 0x2980c0u: goto label_2980c0;
        case 0x2980c4u: goto label_2980c4;
        case 0x2980c8u: goto label_2980c8;
        case 0x2980ccu: goto label_2980cc;
        case 0x2980d0u: goto label_2980d0;
        case 0x2980d4u: goto label_2980d4;
        case 0x2980d8u: goto label_2980d8;
        case 0x2980dcu: goto label_2980dc;
        case 0x2980e0u: goto label_2980e0;
        case 0x2980e4u: goto label_2980e4;
        case 0x2980e8u: goto label_2980e8;
        case 0x2980ecu: goto label_2980ec;
        case 0x2980f0u: goto label_2980f0;
        case 0x2980f4u: goto label_2980f4;
        case 0x2980f8u: goto label_2980f8;
        case 0x2980fcu: goto label_2980fc;
        case 0x298100u: goto label_298100;
        case 0x298104u: goto label_298104;
        case 0x298108u: goto label_298108;
        case 0x29810cu: goto label_29810c;
        case 0x298110u: goto label_298110;
        case 0x298114u: goto label_298114;
        case 0x298118u: goto label_298118;
        case 0x29811cu: goto label_29811c;
        case 0x298120u: goto label_298120;
        case 0x298124u: goto label_298124;
        case 0x298128u: goto label_298128;
        case 0x29812cu: goto label_29812c;
        case 0x298130u: goto label_298130;
        case 0x298134u: goto label_298134;
        case 0x298138u: goto label_298138;
        case 0x29813cu: goto label_29813c;
        case 0x298140u: goto label_298140;
        case 0x298144u: goto label_298144;
        case 0x298148u: goto label_298148;
        case 0x29814cu: goto label_29814c;
        case 0x298150u: goto label_298150;
        case 0x298154u: goto label_298154;
        case 0x298158u: goto label_298158;
        case 0x29815cu: goto label_29815c;
        case 0x298160u: goto label_298160;
        case 0x298164u: goto label_298164;
        case 0x298168u: goto label_298168;
        case 0x29816cu: goto label_29816c;
        case 0x298170u: goto label_298170;
        case 0x298174u: goto label_298174;
        case 0x298178u: goto label_298178;
        case 0x29817cu: goto label_29817c;
        case 0x298180u: goto label_298180;
        case 0x298184u: goto label_298184;
        case 0x298188u: goto label_298188;
        case 0x29818cu: goto label_29818c;
        case 0x298190u: goto label_298190;
        case 0x298194u: goto label_298194;
        case 0x298198u: goto label_298198;
        case 0x29819cu: goto label_29819c;
        case 0x2981a0u: goto label_2981a0;
        case 0x2981a4u: goto label_2981a4;
        case 0x2981a8u: goto label_2981a8;
        case 0x2981acu: goto label_2981ac;
        case 0x2981b0u: goto label_2981b0;
        case 0x2981b4u: goto label_2981b4;
        case 0x2981b8u: goto label_2981b8;
        case 0x2981bcu: goto label_2981bc;
        case 0x2981c0u: goto label_2981c0;
        case 0x2981c4u: goto label_2981c4;
        case 0x2981c8u: goto label_2981c8;
        case 0x2981ccu: goto label_2981cc;
        case 0x2981d0u: goto label_2981d0;
        case 0x2981d4u: goto label_2981d4;
        case 0x2981d8u: goto label_2981d8;
        case 0x2981dcu: goto label_2981dc;
        case 0x2981e0u: goto label_2981e0;
        case 0x2981e4u: goto label_2981e4;
        case 0x2981e8u: goto label_2981e8;
        case 0x2981ecu: goto label_2981ec;
        case 0x2981f0u: goto label_2981f0;
        case 0x2981f4u: goto label_2981f4;
        case 0x2981f8u: goto label_2981f8;
        case 0x2981fcu: goto label_2981fc;
        case 0x298200u: goto label_298200;
        case 0x298204u: goto label_298204;
        case 0x298208u: goto label_298208;
        case 0x29820cu: goto label_29820c;
        case 0x298210u: goto label_298210;
        case 0x298214u: goto label_298214;
        case 0x298218u: goto label_298218;
        case 0x29821cu: goto label_29821c;
        case 0x298220u: goto label_298220;
        case 0x298224u: goto label_298224;
        case 0x298228u: goto label_298228;
        case 0x29822cu: goto label_29822c;
        case 0x298230u: goto label_298230;
        case 0x298234u: goto label_298234;
        case 0x298238u: goto label_298238;
        case 0x29823cu: goto label_29823c;
        case 0x298240u: goto label_298240;
        case 0x298244u: goto label_298244;
        case 0x298248u: goto label_298248;
        case 0x29824cu: goto label_29824c;
        case 0x298250u: goto label_298250;
        case 0x298254u: goto label_298254;
        case 0x298258u: goto label_298258;
        case 0x29825cu: goto label_29825c;
        case 0x298260u: goto label_298260;
        case 0x298264u: goto label_298264;
        case 0x298268u: goto label_298268;
        case 0x29826cu: goto label_29826c;
        case 0x298270u: goto label_298270;
        case 0x298274u: goto label_298274;
        case 0x298278u: goto label_298278;
        case 0x29827cu: goto label_29827c;
        case 0x298280u: goto label_298280;
        case 0x298284u: goto label_298284;
        case 0x298288u: goto label_298288;
        case 0x29828cu: goto label_29828c;
        case 0x298290u: goto label_298290;
        case 0x298294u: goto label_298294;
        case 0x298298u: goto label_298298;
        case 0x29829cu: goto label_29829c;
        case 0x2982a0u: goto label_2982a0;
        case 0x2982a4u: goto label_2982a4;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982acu: goto label_2982ac;
        case 0x2982b0u: goto label_2982b0;
        case 0x2982b4u: goto label_2982b4;
        case 0x2982b8u: goto label_2982b8;
        case 0x2982bcu: goto label_2982bc;
        case 0x2982c0u: goto label_2982c0;
        case 0x2982c4u: goto label_2982c4;
        case 0x2982c8u: goto label_2982c8;
        case 0x2982ccu: goto label_2982cc;
        case 0x2982d0u: goto label_2982d0;
        case 0x2982d4u: goto label_2982d4;
        case 0x2982d8u: goto label_2982d8;
        case 0x2982dcu: goto label_2982dc;
        case 0x2982e0u: goto label_2982e0;
        case 0x2982e4u: goto label_2982e4;
        case 0x2982e8u: goto label_2982e8;
        case 0x2982ecu: goto label_2982ec;
        case 0x2982f0u: goto label_2982f0;
        case 0x2982f4u: goto label_2982f4;
        case 0x2982f8u: goto label_2982f8;
        case 0x2982fcu: goto label_2982fc;
        case 0x298300u: goto label_298300;
        case 0x298304u: goto label_298304;
        case 0x298308u: goto label_298308;
        case 0x29830cu: goto label_29830c;
        case 0x298310u: goto label_298310;
        case 0x298314u: goto label_298314;
        case 0x298318u: goto label_298318;
        case 0x29831cu: goto label_29831c;
        case 0x298320u: goto label_298320;
        case 0x298324u: goto label_298324;
        case 0x298328u: goto label_298328;
        case 0x29832cu: goto label_29832c;
        case 0x298330u: goto label_298330;
        case 0x298334u: goto label_298334;
        case 0x298338u: goto label_298338;
        case 0x29833cu: goto label_29833c;
        case 0x298340u: goto label_298340;
        case 0x298344u: goto label_298344;
        case 0x298348u: goto label_298348;
        case 0x29834cu: goto label_29834c;
        case 0x298350u: goto label_298350;
        case 0x298354u: goto label_298354;
        case 0x298358u: goto label_298358;
        case 0x29835cu: goto label_29835c;
        case 0x298360u: goto label_298360;
        case 0x298364u: goto label_298364;
        default: break;
    }

    ctx->pc = 0x2980c0u;

label_2980c0:
    // 0x2980c0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2980c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_2980c4:
    // 0x2980c4: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x2980c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
label_2980c8:
    // 0x2980c8: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x2980c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
label_2980cc:
    // 0x2980cc: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x2980ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
label_2980d0:
    // 0x2980d0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x2980d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_2980d4:
    // 0x2980d4: 0xc0a5a72  jal         func_2969C8
label_2980d8:
    if (ctx->pc == 0x2980D8u) {
        ctx->pc = 0x2980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980D4u;
        // 0x2980d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2980DCu;
        goto label_2980dc;
    }
    ctx->pc = 0x2980D4u;
    SET_GPR_U32(ctx, 31, 0x2980DCu);
    ctx->pc = 0x2980D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980D4u;
    // 0x2980d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x2980D4u, 0x2980DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980DCu;
label_2980dc:
    // 0x2980dc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2980dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2980e0:
    // 0x2980e0: 0xc0e409a  jal         func_390268
label_2980e4:
    if (ctx->pc == 0x2980E4u) {
        ctx->pc = 0x2980E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980E0u;
        // 0x2980e4: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2980E8u;
        goto label_2980e8;
    }
    ctx->pc = 0x2980E0u;
    SET_GPR_U32(ctx, 31, 0x2980E8u);
    ctx->pc = 0x2980E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980E0u;
    // 0x2980e4: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2980E0u, 0x2980E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980E8u;
label_2980e8:
    // 0x2980e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2980ec:
    if (ctx->pc == 0x2980ECu) {
        ctx->pc = 0x2980ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980E8u;
        // 0x2980ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2980F0u;
        goto label_2980f0;
    }
    ctx->pc = 0x2980E8u;
    {
        const bool branch_taken_0x2980e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2980ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980E8u;
        // 0x2980ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980e8) {
            ctx->pc = 0x298110u;
            goto label_298110;
        }
    }
    ctx->pc = 0x2980F0u;
label_2980f0:
    // 0x2980f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2980f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2980f4:
    // 0x2980f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2980f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2980f8:
    // 0x2980f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2980f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2980fc:
    // 0x2980fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2980fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298100:
    // 0x298100: 0xc0a5bc2  jal         func_296F08
label_298104:
    if (ctx->pc == 0x298104u) {
        ctx->pc = 0x298104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298100u;
        // 0x298104: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298108u;
        goto label_298108;
    }
    ctx->pc = 0x298100u;
    SET_GPR_U32(ctx, 31, 0x298108u);
    ctx->pc = 0x298104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298100u;
    // 0x298104: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F08u, 0x298100u, 0x298108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298108u;
label_298108:
    // 0x298108: 0x10000091  b           . + 4 + (0x91 << 2)
label_29810c:
    if (ctx->pc == 0x29810Cu) {
        ctx->pc = 0x29810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298108u;
        // 0x29810c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298110u;
        goto label_298110;
    }
    ctx->pc = 0x298108u;
    {
        const bool branch_taken_0x298108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298108u;
        // 0x29810c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298108) {
            ctx->pc = 0x298350u;
            goto label_298350;
        }
    }
    ctx->pc = 0x298110u;
label_298110:
    // 0x298110: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x298110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_298114:
    // 0x298114: 0x480001a  bltz        $a0, . + 4 + (0x1A << 2)
label_298118:
    if (ctx->pc == 0x298118u) {
        ctx->pc = 0x298118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298114u;
        // 0x298118: 0x26320284  addiu       $s2, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29811Cu;
        goto label_29811c;
    }
    ctx->pc = 0x298114u;
    {
        const bool branch_taken_0x298114 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x298118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298114u;
        // 0x298118: 0x26320284  addiu       $s2, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298114) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x29811Cu;
label_29811c:
    // 0x29811c: 0xc0e402c  jal         func_3900B0
label_298120:
    if (ctx->pc == 0x298120u) {
        ctx->pc = 0x298124u;
        goto label_298124;
    }
    ctx->pc = 0x29811Cu;
    SET_GPR_U32(ctx, 31, 0x298124u);
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x29811Cu, 0x298124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298124u;
label_298124:
    // 0x298124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298128:
    // 0x298128: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
label_29812c:
    if (ctx->pc == 0x29812Cu) {
        ctx->pc = 0x29812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298128u;
        // 0x29812c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298130u;
        goto label_298130;
    }
    ctx->pc = 0x298128u;
    {
        const bool branch_taken_0x298128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298128u;
        // 0x29812c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298128) {
            ctx->pc = 0x2981CCu;
            goto label_2981cc;
        }
    }
    ctx->pc = 0x298130u;
label_298130:
    // 0x298130: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x298130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_298134:
    // 0x298134: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x298134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_298138:
    // 0x298138: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x298138u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_29813c:
    // 0x29813c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298140:
    // 0x298140: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x298140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_298144:
    // 0x298144: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_298148:
    // 0x298148: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x298148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29814c:
    // 0x29814c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x29814cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_298150:
    // 0x298150: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x298150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_298154:
    // 0x298154: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
label_298158:
    if (ctx->pc == 0x298158u) {
        ctx->pc = 0x298158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298154u;
        // 0x298158: 0xa6050002  sh          $a1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29815Cu;
        goto label_29815c;
    }
    ctx->pc = 0x298154u;
    {
        const bool branch_taken_0x298154 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x298158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298154u;
        // 0x298158: 0xa6050002  sh          $a1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298154) {
            ctx->pc = 0x2981CCu;
            goto label_2981cc;
        }
    }
    ctx->pc = 0x29815Cu;
label_29815c:
    // 0x29815c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_298160:
    // 0x298160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_298164:
    // 0x298164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298168:
    // 0x298168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29816c:
    // 0x29816c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29816cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298170:
    // 0x298170: 0xc0a6800  jal         func_29A000
label_298174:
    if (ctx->pc == 0x298174u) {
        ctx->pc = 0x298174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298170u;
        // 0x298174: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298178u;
        goto label_298178;
    }
    ctx->pc = 0x298170u;
    SET_GPR_U32(ctx, 31, 0x298178u);
    ctx->pc = 0x298174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298170u;
    // 0x298174: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x298170u, 0x298178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298178u;
label_298178:
    // 0x298178: 0x10000075  b           . + 4 + (0x75 << 2)
label_29817c:
    if (ctx->pc == 0x29817Cu) {
        ctx->pc = 0x29817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298178u;
        // 0x29817c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298180u;
        goto label_298180;
    }
    ctx->pc = 0x298178u;
    {
        const bool branch_taken_0x298178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298178u;
        // 0x29817c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298178) {
            ctx->pc = 0x298350u;
            goto label_298350;
        }
    }
    ctx->pc = 0x298180u;
label_298180:
    // 0x298180: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x298180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_298184:
    // 0x298184: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x298184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_298188:
    // 0x298188: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x298188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_29818c:
    // 0x29818c: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x29818cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_298190:
    // 0x298190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298194:
    // 0x298194: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x298194u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_298198:
    // 0x298198: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29819c:
    // 0x29819c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2981a0:
    // 0x2981a0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2981a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2981a4:
    // 0x2981a4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_2981a8:
    // 0x2981a8: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_2981ac:
    if (ctx->pc == 0x2981ACu) {
        ctx->pc = 0x2981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A8u;
        // 0x2981ac: 0xa6050016  sh          $a1, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981B0u;
        goto label_2981b0;
    }
    ctx->pc = 0x2981A8u;
    {
        const bool branch_taken_0x2981a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A8u;
        // 0x2981ac: 0xa6050016  sh          $a1, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981a8) {
            ctx->pc = 0x2981CCu;
            goto label_2981cc;
        }
    }
    ctx->pc = 0x2981B0u;
label_2981b0:
    // 0x2981b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2981b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2981b4:
    // 0x2981b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2981b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2981b8:
    // 0x2981b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2981b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2981bc:
    // 0x2981bc: 0xc0a67aa  jal         func_299EA8
label_2981c0:
    if (ctx->pc == 0x2981C0u) {
        ctx->pc = 0x2981C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981BCu;
        // 0x2981c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981C4u;
        goto label_2981c4;
    }
    ctx->pc = 0x2981BCu;
    SET_GPR_U32(ctx, 31, 0x2981C4u);
    ctx->pc = 0x2981C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981BCu;
    // 0x2981c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x2981BCu, 0x2981C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981C4u;
label_2981c4:
    // 0x2981c4: 0x10000062  b           . + 4 + (0x62 << 2)
label_2981c8:
    if (ctx->pc == 0x2981C8u) {
        ctx->pc = 0x2981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981C4u;
        // 0x2981c8: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981CCu;
        goto label_2981cc;
    }
    ctx->pc = 0x2981C4u;
    {
        const bool branch_taken_0x2981c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981C4u;
        // 0x2981c8: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981c4) {
            ctx->pc = 0x298350u;
            goto label_298350;
        }
    }
    ctx->pc = 0x2981CCu;
label_2981cc:
    // 0x2981cc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2981ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2981d0:
    // 0x2981d0: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
label_2981d4:
    if (ctx->pc == 0x2981D4u) {
        ctx->pc = 0x2981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D0u;
        // 0x2981d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981D8u;
        goto label_2981d8;
    }
    ctx->pc = 0x2981D0u;
    {
        const bool branch_taken_0x2981d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D0u;
        // 0x2981d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981d0) {
            ctx->pc = 0x29822Cu;
            goto label_29822c;
        }
    }
    ctx->pc = 0x2981D8u;
label_2981d8:
    // 0x2981d8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2981d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2981dc:
    // 0x2981dc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2981dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2981e0:
    // 0x2981e0: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2981e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2981e4:
    // 0x2981e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2981e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2981e8:
    // 0x2981e8: 0xc0cd4fc  jal         func_3353F0
label_2981ec:
    if (ctx->pc == 0x2981ECu) {
        ctx->pc = 0x2981ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981E8u;
        // 0x2981ec: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981F0u;
        goto label_2981f0;
    }
    ctx->pc = 0x2981E8u;
    SET_GPR_U32(ctx, 31, 0x2981F0u);
    ctx->pc = 0x2981ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981E8u;
    // 0x2981ec: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2981E8u, 0x2981F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981F0u;
label_2981f0:
    // 0x2981f0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2981f4:
    // 0x2981f4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2981f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2981f8:
    // 0x2981f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2981f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2981fc:
    // 0x2981fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_298200:
    if (ctx->pc == 0x298200u) {
        ctx->pc = 0x298200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981FCu;
        // 0x298200: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298204u;
        goto label_298204;
    }
    ctx->pc = 0x2981FCu;
    {
        const bool branch_taken_0x2981fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2981fc) {
            ctx->pc = 0x298200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2981FCu;
            // 0x298200: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x298204u;
            goto label_298204;
        }
    }
    ctx->pc = 0x298204u;
label_298204:
    // 0x298204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_298208:
    // 0x298208: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29820c:
    // 0x29820c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29820cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298210:
    // 0x298210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298214:
    // 0x298214: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x298214u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_298218:
    // 0x298218: 0x1012  mflo        $v0
    ctx->pc = 0x298218u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_29821c:
    // 0x29821c: 0xc0a67aa  jal         func_299EA8
label_298220:
    if (ctx->pc == 0x298220u) {
        ctx->pc = 0x298220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29821Cu;
        // 0x298220: 0xa6020016  sh          $v0, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298224u;
        goto label_298224;
    }
    ctx->pc = 0x29821Cu;
    SET_GPR_U32(ctx, 31, 0x298224u);
    ctx->pc = 0x298220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29821Cu;
    // 0x298220: 0xa6020016  sh          $v0, 0x16($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x29821Cu, 0x298224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298224u;
label_298224:
    // 0x298224: 0x1000004a  b           . + 4 + (0x4A << 2)
label_298228:
    if (ctx->pc == 0x298228u) {
        ctx->pc = 0x298228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298224u;
        // 0x298228: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29822Cu;
        goto label_29822c;
    }
    ctx->pc = 0x298224u;
    {
        const bool branch_taken_0x298224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298224u;
        // 0x298228: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298224) {
            ctx->pc = 0x298350u;
            goto label_298350;
        }
    }
    ctx->pc = 0x29822Cu;
label_29822c:
    // 0x29822c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x29822cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_298230:
    // 0x298230: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x298230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_298234:
    // 0x298234: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_298238:
    // 0x298238: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x298238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_29823c:
    // 0x29823c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29823cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298240:
    // 0x298240: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x298240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_298244:
    // 0x298244: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x298244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298248:
    // 0x298248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29824c:
    // 0x29824c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_298250:
    // 0x298250: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298250u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_298254:
    // 0x298254: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x298254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_298258:
    // 0x298258: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x298258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_29825c:
    // 0x29825c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29825cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298260:
    // 0x298260: 0xc089d2a  jal         func_2274A8
label_298264:
    if (ctx->pc == 0x298264u) {
        ctx->pc = 0x298264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298260u;
        // 0x298264: 0x7fa301e0  sq          $v1, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298268u;
        goto label_298268;
    }
    ctx->pc = 0x298260u;
    SET_GPR_U32(ctx, 31, 0x298268u);
    ctx->pc = 0x298264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298260u;
    // 0x298264: 0x7fa301e0  sq          $v1, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x298260u, 0x298268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298268u;
label_298268:
    // 0x298268: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29826c:
    // 0x29826c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298270:
    // 0x298270: 0xc0a5cc2  jal         func_297308
label_298274:
    if (ctx->pc == 0x298274u) {
        ctx->pc = 0x298274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298270u;
        // 0x298274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298278u;
        goto label_298278;
    }
    ctx->pc = 0x298270u;
    SET_GPR_U32(ctx, 31, 0x298278u);
    ctx->pc = 0x298274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298270u;
    // 0x298274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297308u, 0x298270u, 0x298278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298278u;
label_298278:
    // 0x298278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x298278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29827c:
    // 0x29827c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_298280:
    if (ctx->pc == 0x298280u) {
        ctx->pc = 0x298280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29827Cu;
        // 0x298280: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298284u;
        goto label_298284;
    }
    ctx->pc = 0x29827Cu;
    {
        const bool branch_taken_0x29827c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x298280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29827Cu;
        // 0x298280: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29827c) {
            ctx->pc = 0x298300u;
            goto label_298300;
        }
    }
    ctx->pc = 0x298284u;
label_298284:
    // 0x298284: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x298284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_298288:
    // 0x298288: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x298288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29828c:
    // 0x29828c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_298290:
    // 0x298290: 0x40f809  jalr        $v0
label_298294:
    if (ctx->pc == 0x298294u) {
        ctx->pc = 0x298294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298290u;
        // 0x298294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298298u;
        goto label_298298;
    }
    ctx->pc = 0x298290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x298298u);
        ctx->pc = 0x298294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298290u;
        // 0x298294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298290u, 0x298298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298298u;
label_298298:
    // 0x298298: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x298298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_29829c:
    // 0x29829c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x29829cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2982a0:
    // 0x2982a0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2982a4:
    // 0x2982a4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2982a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2982a8:
    // 0x2982a8: 0x97a201f2  lhu         $v0, 0x1F2($sp)
    ctx->pc = 0x2982a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 498)));
label_2982ac:
    // 0x2982ac: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2982acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2982b0:
    // 0x2982b0: 0xc0cd4fc  jal         func_3353F0
label_2982b4:
    if (ctx->pc == 0x2982B4u) {
        ctx->pc = 0x2982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982B0u;
        // 0x2982b4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2982B8u;
        goto label_2982b8;
    }
    ctx->pc = 0x2982B0u;
    SET_GPR_U32(ctx, 31, 0x2982B8u);
    ctx->pc = 0x2982B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982B0u;
    // 0x2982b4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2982B0u, 0x2982B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982B8u;
label_2982b8:
    // 0x2982b8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2982bc:
    // 0x2982bc: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2982bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2982c0:
    // 0x2982c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2982c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2982c4:
    // 0x2982c4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_2982c8:
    if (ctx->pc == 0x2982C8u) {
        ctx->pc = 0x2982C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982C4u;
        // 0x2982c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2982CCu;
        goto label_2982cc;
    }
    ctx->pc = 0x2982C4u;
    {
        const bool branch_taken_0x2982c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982c4) {
            ctx->pc = 0x2982C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2982C4u;
            // 0x2982c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2982CCu;
            goto label_2982cc;
        }
    }
    ctx->pc = 0x2982CCu;
label_2982cc:
    // 0x2982cc: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x2982ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
label_2982d0:
    // 0x2982d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2982d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2982d4:
    // 0x2982d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2982d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2982d8:
    // 0x2982d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2982d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2982dc:
    // 0x2982dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2982dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2982e0:
    // 0x2982e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2982e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2982e4:
    // 0x2982e4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2982e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2982e8:
    // 0x2982e8: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x2982e8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2982ec:
    // 0x2982ec: 0x1012  mflo        $v0
    ctx->pc = 0x2982ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2982f0:
    // 0x2982f0: 0xc0a6800  jal         func_29A000
label_2982f4:
    if (ctx->pc == 0x2982F4u) {
        ctx->pc = 0x2982F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982F0u;
        // 0x2982f4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2982F8u;
        goto label_2982f8;
    }
    ctx->pc = 0x2982F0u;
    SET_GPR_U32(ctx, 31, 0x2982F8u);
    ctx->pc = 0x2982F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982F0u;
    // 0x2982f4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2982F0u, 0x2982F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982F8u;
label_2982f8:
    // 0x2982f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2982fc:
    if (ctx->pc == 0x2982FCu) {
        ctx->pc = 0x2982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982F8u;
        // 0x2982fc: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298300u;
        goto label_298300;
    }
    ctx->pc = 0x2982F8u;
    {
        const bool branch_taken_0x2982f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982F8u;
        // 0x2982fc: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982f8) {
            ctx->pc = 0x298350u;
            goto label_298350;
        }
    }
    ctx->pc = 0x298300u;
label_298300:
    // 0x298300: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x298300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_298304:
    // 0x298304: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x298304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_298308:
    // 0x298308: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x298308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_29830c:
    // 0x29830c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x29830cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_298310:
    // 0x298310: 0xc0cd4fc  jal         func_3353F0
label_298314:
    if (ctx->pc == 0x298314u) {
        ctx->pc = 0x298314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298310u;
        // 0x298314: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298318u;
        goto label_298318;
    }
    ctx->pc = 0x298310u;
    SET_GPR_U32(ctx, 31, 0x298318u);
    ctx->pc = 0x298314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298310u;
    // 0x298314: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x298310u, 0x298318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298318u;
label_298318:
    // 0x298318: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x298318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_29831c:
    // 0x29831c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_298320:
    // 0x298320: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x298320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_298324:
    // 0x298324: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_298328:
    if (ctx->pc == 0x298328u) {
        ctx->pc = 0x298328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298324u;
        // 0x298328: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29832Cu;
        goto label_29832c;
    }
    ctx->pc = 0x298324u;
    {
        const bool branch_taken_0x298324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298324) {
            ctx->pc = 0x298328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298324u;
            // 0x298328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29832Cu;
            goto label_29832c;
        }
    }
    ctx->pc = 0x29832Cu;
label_29832c:
    // 0x29832c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_298330:
    // 0x298330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298334:
    // 0x298334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298338:
    // 0x298338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29833c:
    // 0x29833c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x29833cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_298340:
    // 0x298340: 0x1012  mflo        $v0
    ctx->pc = 0x298340u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_298344:
    // 0x298344: 0xc0a67aa  jal         func_299EA8
label_298348:
    if (ctx->pc == 0x298348u) {
        ctx->pc = 0x298348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298344u;
        // 0x298348: 0xa6020016  sh          $v0, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29834Cu;
        goto label_29834c;
    }
    ctx->pc = 0x298344u;
    SET_GPR_U32(ctx, 31, 0x29834Cu);
    ctx->pc = 0x298348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298344u;
    // 0x298348: 0xa6020016  sh          $v0, 0x16($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x298344u, 0x29834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29834Cu;
label_29834c:
    // 0x29834c: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x29834cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_298350:
    // 0x298350: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x298350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_298354:
    // 0x298354: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x298354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_298358:
    // 0x298358: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x298358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_29835c:
    // 0x29835c: 0x3e00008  jr          $ra
label_298360:
    if (ctx->pc == 0x298360u) {
        ctx->pc = 0x298360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29835Cu;
        // 0x298360: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298364u;
        goto label_298364;
    }
    ctx->pc = 0x29835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29835Cu;
        // 0x298360: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298364u;
label_298364:
    // 0x298364: 0x0  nop
    ctx->pc = 0x298364u;
    // NOP
    ctx->pc = 0x298368u;
}
