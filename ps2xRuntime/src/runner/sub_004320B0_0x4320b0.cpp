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

// Function: sub_004320B0
// Address: 0x4320b0 - 0x432478
void sub_004320B0_0x4320b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004320B0_0x4320b0");
#endif

    switch (ctx->pc) {
        case 0x4320b0u: goto label_4320b0;
        case 0x4320b4u: goto label_4320b4;
        case 0x4320b8u: goto label_4320b8;
        case 0x4320bcu: goto label_4320bc;
        case 0x4320c0u: goto label_4320c0;
        case 0x4320c4u: goto label_4320c4;
        case 0x4320c8u: goto label_4320c8;
        case 0x4320ccu: goto label_4320cc;
        case 0x4320d0u: goto label_4320d0;
        case 0x4320d4u: goto label_4320d4;
        case 0x4320d8u: goto label_4320d8;
        case 0x4320dcu: goto label_4320dc;
        case 0x4320e0u: goto label_4320e0;
        case 0x4320e4u: goto label_4320e4;
        case 0x4320e8u: goto label_4320e8;
        case 0x4320ecu: goto label_4320ec;
        case 0x4320f0u: goto label_4320f0;
        case 0x4320f4u: goto label_4320f4;
        case 0x4320f8u: goto label_4320f8;
        case 0x4320fcu: goto label_4320fc;
        case 0x432100u: goto label_432100;
        case 0x432104u: goto label_432104;
        case 0x432108u: goto label_432108;
        case 0x43210cu: goto label_43210c;
        case 0x432110u: goto label_432110;
        case 0x432114u: goto label_432114;
        case 0x432118u: goto label_432118;
        case 0x43211cu: goto label_43211c;
        case 0x432120u: goto label_432120;
        case 0x432124u: goto label_432124;
        case 0x432128u: goto label_432128;
        case 0x43212cu: goto label_43212c;
        case 0x432130u: goto label_432130;
        case 0x432134u: goto label_432134;
        case 0x432138u: goto label_432138;
        case 0x43213cu: goto label_43213c;
        case 0x432140u: goto label_432140;
        case 0x432144u: goto label_432144;
        case 0x432148u: goto label_432148;
        case 0x43214cu: goto label_43214c;
        case 0x432150u: goto label_432150;
        case 0x432154u: goto label_432154;
        case 0x432158u: goto label_432158;
        case 0x43215cu: goto label_43215c;
        case 0x432160u: goto label_432160;
        case 0x432164u: goto label_432164;
        case 0x432168u: goto label_432168;
        case 0x43216cu: goto label_43216c;
        case 0x432170u: goto label_432170;
        case 0x432174u: goto label_432174;
        case 0x432178u: goto label_432178;
        case 0x43217cu: goto label_43217c;
        case 0x432180u: goto label_432180;
        case 0x432184u: goto label_432184;
        case 0x432188u: goto label_432188;
        case 0x43218cu: goto label_43218c;
        case 0x432190u: goto label_432190;
        case 0x432194u: goto label_432194;
        case 0x432198u: goto label_432198;
        case 0x43219cu: goto label_43219c;
        case 0x4321a0u: goto label_4321a0;
        case 0x4321a4u: goto label_4321a4;
        case 0x4321a8u: goto label_4321a8;
        case 0x4321acu: goto label_4321ac;
        case 0x4321b0u: goto label_4321b0;
        case 0x4321b4u: goto label_4321b4;
        case 0x4321b8u: goto label_4321b8;
        case 0x4321bcu: goto label_4321bc;
        case 0x4321c0u: goto label_4321c0;
        case 0x4321c4u: goto label_4321c4;
        case 0x4321c8u: goto label_4321c8;
        case 0x4321ccu: goto label_4321cc;
        case 0x4321d0u: goto label_4321d0;
        case 0x4321d4u: goto label_4321d4;
        case 0x4321d8u: goto label_4321d8;
        case 0x4321dcu: goto label_4321dc;
        case 0x4321e0u: goto label_4321e0;
        case 0x4321e4u: goto label_4321e4;
        case 0x4321e8u: goto label_4321e8;
        case 0x4321ecu: goto label_4321ec;
        case 0x4321f0u: goto label_4321f0;
        case 0x4321f4u: goto label_4321f4;
        case 0x4321f8u: goto label_4321f8;
        case 0x4321fcu: goto label_4321fc;
        case 0x432200u: goto label_432200;
        case 0x432204u: goto label_432204;
        case 0x432208u: goto label_432208;
        case 0x43220cu: goto label_43220c;
        case 0x432210u: goto label_432210;
        case 0x432214u: goto label_432214;
        case 0x432218u: goto label_432218;
        case 0x43221cu: goto label_43221c;
        case 0x432220u: goto label_432220;
        case 0x432224u: goto label_432224;
        case 0x432228u: goto label_432228;
        case 0x43222cu: goto label_43222c;
        case 0x432230u: goto label_432230;
        case 0x432234u: goto label_432234;
        case 0x432238u: goto label_432238;
        case 0x43223cu: goto label_43223c;
        case 0x432240u: goto label_432240;
        case 0x432244u: goto label_432244;
        case 0x432248u: goto label_432248;
        case 0x43224cu: goto label_43224c;
        case 0x432250u: goto label_432250;
        case 0x432254u: goto label_432254;
        case 0x432258u: goto label_432258;
        case 0x43225cu: goto label_43225c;
        case 0x432260u: goto label_432260;
        case 0x432264u: goto label_432264;
        case 0x432268u: goto label_432268;
        case 0x43226cu: goto label_43226c;
        case 0x432270u: goto label_432270;
        case 0x432274u: goto label_432274;
        case 0x432278u: goto label_432278;
        case 0x43227cu: goto label_43227c;
        case 0x432280u: goto label_432280;
        case 0x432284u: goto label_432284;
        case 0x432288u: goto label_432288;
        case 0x43228cu: goto label_43228c;
        case 0x432290u: goto label_432290;
        case 0x432294u: goto label_432294;
        case 0x432298u: goto label_432298;
        case 0x43229cu: goto label_43229c;
        case 0x4322a0u: goto label_4322a0;
        case 0x4322a4u: goto label_4322a4;
        case 0x4322a8u: goto label_4322a8;
        case 0x4322acu: goto label_4322ac;
        case 0x4322b0u: goto label_4322b0;
        case 0x4322b4u: goto label_4322b4;
        case 0x4322b8u: goto label_4322b8;
        case 0x4322bcu: goto label_4322bc;
        case 0x4322c0u: goto label_4322c0;
        case 0x4322c4u: goto label_4322c4;
        case 0x4322c8u: goto label_4322c8;
        case 0x4322ccu: goto label_4322cc;
        case 0x4322d0u: goto label_4322d0;
        case 0x4322d4u: goto label_4322d4;
        case 0x4322d8u: goto label_4322d8;
        case 0x4322dcu: goto label_4322dc;
        case 0x4322e0u: goto label_4322e0;
        case 0x4322e4u: goto label_4322e4;
        case 0x4322e8u: goto label_4322e8;
        case 0x4322ecu: goto label_4322ec;
        case 0x4322f0u: goto label_4322f0;
        case 0x4322f4u: goto label_4322f4;
        case 0x4322f8u: goto label_4322f8;
        case 0x4322fcu: goto label_4322fc;
        case 0x432300u: goto label_432300;
        case 0x432304u: goto label_432304;
        case 0x432308u: goto label_432308;
        case 0x43230cu: goto label_43230c;
        case 0x432310u: goto label_432310;
        case 0x432314u: goto label_432314;
        case 0x432318u: goto label_432318;
        case 0x43231cu: goto label_43231c;
        case 0x432320u: goto label_432320;
        case 0x432324u: goto label_432324;
        case 0x432328u: goto label_432328;
        case 0x43232cu: goto label_43232c;
        case 0x432330u: goto label_432330;
        case 0x432334u: goto label_432334;
        case 0x432338u: goto label_432338;
        case 0x43233cu: goto label_43233c;
        case 0x432340u: goto label_432340;
        case 0x432344u: goto label_432344;
        case 0x432348u: goto label_432348;
        case 0x43234cu: goto label_43234c;
        case 0x432350u: goto label_432350;
        case 0x432354u: goto label_432354;
        case 0x432358u: goto label_432358;
        case 0x43235cu: goto label_43235c;
        case 0x432360u: goto label_432360;
        case 0x432364u: goto label_432364;
        case 0x432368u: goto label_432368;
        case 0x43236cu: goto label_43236c;
        case 0x432370u: goto label_432370;
        case 0x432374u: goto label_432374;
        case 0x432378u: goto label_432378;
        case 0x43237cu: goto label_43237c;
        case 0x432380u: goto label_432380;
        case 0x432384u: goto label_432384;
        case 0x432388u: goto label_432388;
        case 0x43238cu: goto label_43238c;
        case 0x432390u: goto label_432390;
        case 0x432394u: goto label_432394;
        case 0x432398u: goto label_432398;
        case 0x43239cu: goto label_43239c;
        case 0x4323a0u: goto label_4323a0;
        case 0x4323a4u: goto label_4323a4;
        case 0x4323a8u: goto label_4323a8;
        case 0x4323acu: goto label_4323ac;
        case 0x4323b0u: goto label_4323b0;
        case 0x4323b4u: goto label_4323b4;
        case 0x4323b8u: goto label_4323b8;
        case 0x4323bcu: goto label_4323bc;
        case 0x4323c0u: goto label_4323c0;
        case 0x4323c4u: goto label_4323c4;
        case 0x4323c8u: goto label_4323c8;
        case 0x4323ccu: goto label_4323cc;
        case 0x4323d0u: goto label_4323d0;
        case 0x4323d4u: goto label_4323d4;
        case 0x4323d8u: goto label_4323d8;
        case 0x4323dcu: goto label_4323dc;
        case 0x4323e0u: goto label_4323e0;
        case 0x4323e4u: goto label_4323e4;
        case 0x4323e8u: goto label_4323e8;
        case 0x4323ecu: goto label_4323ec;
        case 0x4323f0u: goto label_4323f0;
        case 0x4323f4u: goto label_4323f4;
        case 0x4323f8u: goto label_4323f8;
        case 0x4323fcu: goto label_4323fc;
        case 0x432400u: goto label_432400;
        case 0x432404u: goto label_432404;
        case 0x432408u: goto label_432408;
        case 0x43240cu: goto label_43240c;
        case 0x432410u: goto label_432410;
        case 0x432414u: goto label_432414;
        case 0x432418u: goto label_432418;
        case 0x43241cu: goto label_43241c;
        case 0x432420u: goto label_432420;
        case 0x432424u: goto label_432424;
        case 0x432428u: goto label_432428;
        case 0x43242cu: goto label_43242c;
        case 0x432430u: goto label_432430;
        case 0x432434u: goto label_432434;
        case 0x432438u: goto label_432438;
        case 0x43243cu: goto label_43243c;
        case 0x432440u: goto label_432440;
        case 0x432444u: goto label_432444;
        case 0x432448u: goto label_432448;
        case 0x43244cu: goto label_43244c;
        case 0x432450u: goto label_432450;
        case 0x432454u: goto label_432454;
        case 0x432458u: goto label_432458;
        case 0x43245cu: goto label_43245c;
        case 0x432460u: goto label_432460;
        case 0x432464u: goto label_432464;
        case 0x432468u: goto label_432468;
        case 0x43246cu: goto label_43246c;
        case 0x432470u: goto label_432470;
        case 0x432474u: goto label_432474;
        default: break;
    }

    ctx->pc = 0x4320b0u;

label_4320b0:
    // 0x4320b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4320b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4320b4:
    // 0x4320b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4320b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4320b8:
    // 0x4320b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4320b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4320bc:
    // 0x4320bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4320bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4320c0:
    // 0x4320c0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4320c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4320c4:
    // 0x4320c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4320c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4320c8:
    // 0x4320c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4320c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4320cc:
    // 0x4320cc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4320ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4320d0:
    // 0x4320d0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4320d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4320d4:
    // 0x4320d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4320d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4320d8:
    // 0x4320d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4320d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4320dc:
    // 0x4320dc: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x4320dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_4320e0:
    // 0x4320e0: 0x124000d3  beqz        $s2, . + 4 + (0xD3 << 2)
label_4320e4:
    if (ctx->pc == 0x4320E4u) {
        ctx->pc = 0x4320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4320E0u;
        // 0x4320e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4320E8u;
        goto label_4320e8;
    }
    ctx->pc = 0x4320E0u;
    {
        const bool branch_taken_0x4320e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4320E0u;
        // 0x4320e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4320e0) {
            ctx->pc = 0x432430u;
            goto label_432430;
        }
    }
    ctx->pc = 0x4320E8u;
label_4320e8:
    // 0x4320e8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4320e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4320ec:
    // 0x4320ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4320ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4320f0:
    // 0x4320f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4320f4:
    if (ctx->pc == 0x4320F4u) {
        ctx->pc = 0x4320F8u;
        goto label_4320f8;
    }
    ctx->pc = 0x4320F0u;
    {
        const bool branch_taken_0x4320f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4320f0) {
            ctx->pc = 0x432104u;
            goto label_432104;
        }
    }
    ctx->pc = 0x4320F8u;
label_4320f8:
    // 0x4320f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4320f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4320fc:
    // 0x4320fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_432100:
    if (ctx->pc == 0x432100u) {
        ctx->pc = 0x432100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4320FCu;
        // 0x432100: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432104u;
        goto label_432104;
    }
    ctx->pc = 0x4320FCu;
    {
        const bool branch_taken_0x4320fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4320fc) {
            ctx->pc = 0x432100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4320FCu;
            // 0x432100: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432118u;
            goto label_432118;
        }
    }
    ctx->pc = 0x432104u;
label_432104:
    // 0x432104: 0xc10ce4a  jal         func_433928
label_432108:
    if (ctx->pc == 0x432108u) {
        ctx->pc = 0x432108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432104u;
        // 0x432108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43210Cu;
        goto label_43210c;
    }
    ctx->pc = 0x432104u;
    SET_GPR_U32(ctx, 31, 0x43210Cu);
    ctx->pc = 0x432108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432104u;
    // 0x432108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433928u, 0x432104u, 0x43210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43210Cu;
label_43210c:
    // 0x43210c: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
label_432110:
    if (ctx->pc == 0x432110u) {
        ctx->pc = 0x432110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43210Cu;
        // 0x432110: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432114u;
        goto label_432114;
    }
    ctx->pc = 0x43210Cu;
    {
        const bool branch_taken_0x43210c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43210Cu;
        // 0x432110: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43210c) {
            ctx->pc = 0x432448u;
            goto label_432448;
        }
    }
    ctx->pc = 0x432114u;
label_432114:
    // 0x432114: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x432114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_432118:
    // 0x432118: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x432118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43211c:
    // 0x43211c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43211cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432120:
    // 0x432120: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x432120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_432124:
    // 0x432124: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_432128:
    if (ctx->pc == 0x432128u) {
        ctx->pc = 0x432128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432124u;
        // 0x432128: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43212Cu;
        goto label_43212c;
    }
    ctx->pc = 0x432124u;
    {
        const bool branch_taken_0x432124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432124u;
        // 0x432128: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432124) {
            ctx->pc = 0x432190u;
            goto label_432190;
        }
    }
    ctx->pc = 0x43212Cu;
label_43212c:
    // 0x43212c: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x43212cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_432130:
    // 0x432130: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_432134:
    if (ctx->pc == 0x432134u) {
        ctx->pc = 0x432134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432130u;
        // 0x432134: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432138u;
        goto label_432138;
    }
    ctx->pc = 0x432130u;
    {
        const bool branch_taken_0x432130 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x432134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432130u;
        // 0x432134: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432130) {
            ctx->pc = 0x432150u;
            goto label_432150;
        }
    }
    ctx->pc = 0x432138u;
label_432138:
    // 0x432138: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x432138u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_43213c:
    // 0x43213c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x43213cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_432140:
    // 0x432140: 0x0  nop
    ctx->pc = 0x432140u;
    // NOP
label_432144:
    // 0x432144: 0x0  nop
    ctx->pc = 0x432144u;
    // NOP
label_432148:
    // 0x432148: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_43214c:
    if (ctx->pc == 0x43214Cu) {
        ctx->pc = 0x43214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432148u;
        // 0x43214c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432150u;
        goto label_432150;
    }
    ctx->pc = 0x432148u;
    {
        const bool branch_taken_0x432148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432148u;
        // 0x43214c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432148) {
            ctx->pc = 0x432138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432138;
        }
    }
    ctx->pc = 0x432150u;
label_432150:
    // 0x432150: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x432150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_432154:
    // 0x432154: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x432154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_432158:
    // 0x432158: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x432158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43215c:
    // 0x43215c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_432160:
    // 0x432160: 0x60f809  jalr        $v1
label_432164:
    if (ctx->pc == 0x432164u) {
        ctx->pc = 0x432164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432160u;
        // 0x432164: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432168u;
        goto label_432168;
    }
    ctx->pc = 0x432160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x432168u);
        ctx->pc = 0x432164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432160u;
        // 0x432164: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432160u, 0x432168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x432168u;
label_432168:
    // 0x432168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x432168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43216c:
    // 0x43216c: 0x1a0000b2  blez        $s0, . + 4 + (0xB2 << 2)
label_432170:
    if (ctx->pc == 0x432170u) {
        ctx->pc = 0x432170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43216Cu;
        // 0x432170: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432174u;
        goto label_432174;
    }
    ctx->pc = 0x43216Cu;
    {
        const bool branch_taken_0x43216c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x432170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43216Cu;
        // 0x432170: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43216c) {
            ctx->pc = 0x432438u;
            goto label_432438;
        }
    }
    ctx->pc = 0x432174u;
label_432174:
    // 0x432174: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x432174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_432178:
    // 0x432178: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x432178u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_43217c:
    // 0x43217c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x43217cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_432180:
    // 0x432180: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_432184:
    if (ctx->pc == 0x432184u) {
        ctx->pc = 0x432184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432180u;
        // 0x432184: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432188u;
        goto label_432188;
    }
    ctx->pc = 0x432180u;
    {
        const bool branch_taken_0x432180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432180u;
        // 0x432184: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432180) {
            ctx->pc = 0x432130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432130;
        }
    }
    ctx->pc = 0x432188u;
label_432188:
    // 0x432188: 0x100000af  b           . + 4 + (0xAF << 2)
label_43218c:
    if (ctx->pc == 0x43218Cu) {
        ctx->pc = 0x43218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432188u;
        // 0x43218c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432190u;
        goto label_432190;
    }
    ctx->pc = 0x432188u;
    {
        const bool branch_taken_0x432188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432188u;
        // 0x43218c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432188) {
            ctx->pc = 0x432448u;
            goto label_432448;
        }
    }
    ctx->pc = 0x432190u;
label_432190:
    // 0x432190: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x432190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_432194:
    // 0x432194: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_432198:
    if (ctx->pc == 0x432198u) {
        ctx->pc = 0x432198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432194u;
        // 0x432198: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43219Cu;
        goto label_43219c;
    }
    ctx->pc = 0x432194u;
    {
        const bool branch_taken_0x432194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432194u;
        // 0x432198: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432194) {
            ctx->pc = 0x4322D8u;
            goto label_4322d8;
        }
    }
    ctx->pc = 0x43219Cu;
label_43219c:
    // 0x43219c: 0x0  nop
    ctx->pc = 0x43219cu;
    // NOP
label_4321a0:
    // 0x4321a0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x4321a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4321a4:
    // 0x4321a4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_4321a8:
    if (ctx->pc == 0x4321A8u) {
        ctx->pc = 0x4321A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321A4u;
        // 0x4321a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4321ACu;
        goto label_4321ac;
    }
    ctx->pc = 0x4321A4u;
    {
        const bool branch_taken_0x4321a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4321A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321A4u;
        // 0x4321a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4321a4) {
            ctx->pc = 0x4321C8u;
            goto label_4321c8;
        }
    }
    ctx->pc = 0x4321ACu;
label_4321ac:
    // 0x4321ac: 0x0  nop
    ctx->pc = 0x4321acu;
    // NOP
label_4321b0:
    // 0x4321b0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x4321b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4321b4:
    // 0x4321b4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x4321b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4321b8:
    // 0x4321b8: 0x0  nop
    ctx->pc = 0x4321b8u;
    // NOP
label_4321bc:
    // 0x4321bc: 0x0  nop
    ctx->pc = 0x4321bcu;
    // NOP
label_4321c0:
    // 0x4321c0: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_4321c4:
    if (ctx->pc == 0x4321C4u) {
        ctx->pc = 0x4321C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321C0u;
        // 0x4321c4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4321C8u;
        goto label_4321c8;
    }
    ctx->pc = 0x4321C0u;
    {
        const bool branch_taken_0x4321c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4321C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321C0u;
        // 0x4321c4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4321c0) {
            ctx->pc = 0x4321B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4321b0;
        }
    }
    ctx->pc = 0x4321C8u;
label_4321c8:
    // 0x4321c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4321c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4321cc:
    // 0x4321cc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x4321ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_4321d0:
    // 0x4321d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4321d4:
    if (ctx->pc == 0x4321D4u) {
        ctx->pc = 0x4321D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321D0u;
        // 0x4321d4: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4321D8u;
        goto label_4321d8;
    }
    ctx->pc = 0x4321D0u;
    {
        const bool branch_taken_0x4321d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4321D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321D0u;
        // 0x4321d4: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4321d0) {
            ctx->pc = 0x43220Cu;
            goto label_43220c;
        }
    }
    ctx->pc = 0x4321D8u;
label_4321d8:
    // 0x4321d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4321d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4321dc:
    // 0x4321dc: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x4321dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4321e0:
    // 0x4321e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4321e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4321e4:
    // 0x4321e4: 0xc10c1bb  jal         func_4306EC
label_4321e8:
    if (ctx->pc == 0x4321E8u) {
        ctx->pc = 0x4321E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4321E4u;
        // 0x4321e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4321ECu;
        goto label_4321ec;
    }
    ctx->pc = 0x4321E4u;
    SET_GPR_U32(ctx, 31, 0x4321ECu);
    ctx->pc = 0x4321E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4321E4u;
    // 0x4321e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4321E4u, 0x4321ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4321ECu;
label_4321ec:
    // 0x4321ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4321ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4321f0:
    // 0x4321f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4321f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4321f4:
    // 0x4321f4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4321f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4321f8:
    // 0x4321f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4321f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4321fc:
    // 0x4321fc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4321fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_432200:
    // 0x432200: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x432200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_432204:
    // 0x432204: 0x1000002b  b           . + 4 + (0x2B << 2)
label_432208:
    if (ctx->pc == 0x432208u) {
        ctx->pc = 0x432208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432204u;
        // 0x432208: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43220Cu;
        goto label_43220c;
    }
    ctx->pc = 0x432204u;
    {
        const bool branch_taken_0x432204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432204u;
        // 0x432208: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432204) {
            ctx->pc = 0x4322B4u;
            goto label_4322b4;
        }
    }
    ctx->pc = 0x43220Cu;
label_43220c:
    // 0x43220c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_432210:
    // 0x432210: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x432210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_432214:
    // 0x432214: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x432214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_432218:
    // 0x432218: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_43221c:
    if (ctx->pc == 0x43221Cu) {
        ctx->pc = 0x43221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432218u;
        // 0x43221c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x432220u;
        goto label_432220;
    }
    ctx->pc = 0x432218u;
    {
        const bool branch_taken_0x432218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432218u;
        // 0x43221c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432218) {
            ctx->pc = 0x432254u;
            goto label_432254;
        }
    }
    ctx->pc = 0x432220u;
label_432220:
    // 0x432220: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_432224:
    if (ctx->pc == 0x432224u) {
        ctx->pc = 0x432224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432220u;
        // 0x432224: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432228u;
        goto label_432228;
    }
    ctx->pc = 0x432220u;
    {
        const bool branch_taken_0x432220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432220u;
        // 0x432224: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432220) {
            ctx->pc = 0x432254u;
            goto label_432254;
        }
    }
    ctx->pc = 0x432228u;
label_432228:
    // 0x432228: 0xc10c1bb  jal         func_4306EC
label_43222c:
    if (ctx->pc == 0x43222Cu) {
        ctx->pc = 0x43222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432228u;
        // 0x43222c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432230u;
        goto label_432230;
    }
    ctx->pc = 0x432228u;
    SET_GPR_U32(ctx, 31, 0x432230u);
    ctx->pc = 0x43222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432228u;
    // 0x43222c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x432228u, 0x432230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432230u;
label_432230:
    // 0x432230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x432230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_432234:
    // 0x432234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x432234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432238:
    // 0x432238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x432238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_43223c:
    // 0x43223c: 0xc10c57e  jal         func_4315F8
label_432240:
    if (ctx->pc == 0x432240u) {
        ctx->pc = 0x432240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43223Cu;
        // 0x432240: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432244u;
        goto label_432244;
    }
    ctx->pc = 0x43223Cu;
    SET_GPR_U32(ctx, 31, 0x432244u);
    ctx->pc = 0x432240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43223Cu;
    // 0x432240: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x43223Cu, 0x432244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432244u;
label_432244:
    // 0x432244: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_432248:
    if (ctx->pc == 0x432248u) {
        ctx->pc = 0x432248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432244u;
        // 0x432248: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43224Cu;
        goto label_43224c;
    }
    ctx->pc = 0x432244u;
    {
        const bool branch_taken_0x432244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432244) {
            ctx->pc = 0x432248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432244u;
            // 0x432248: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43243Cu;
            goto label_43243c;
        }
    }
    ctx->pc = 0x43224Cu;
label_43224c:
    // 0x43224c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_432250:
    if (ctx->pc == 0x432250u) {
        ctx->pc = 0x432250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43224Cu;
        // 0x432250: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432254u;
        goto label_432254;
    }
    ctx->pc = 0x43224Cu;
    {
        const bool branch_taken_0x43224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43224Cu;
        // 0x432250: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43224c) {
            ctx->pc = 0x4322B8u;
            goto label_4322b8;
        }
    }
    ctx->pc = 0x432254u;
label_432254:
    // 0x432254: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x432254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_432258:
    // 0x432258: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x432258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43225c:
    // 0x43225c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_432260:
    if (ctx->pc == 0x432260u) {
        ctx->pc = 0x432260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43225Cu;
        // 0x432260: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432264u;
        goto label_432264;
    }
    ctx->pc = 0x43225Cu;
    {
        const bool branch_taken_0x43225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43225c) {
            ctx->pc = 0x432260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43225Cu;
            // 0x432260: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43228Cu;
            goto label_43228c;
        }
    }
    ctx->pc = 0x432264u;
label_432264:
    // 0x432264: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x432264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_432268:
    // 0x432268: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x432268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43226c:
    // 0x43226c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x43226cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_432270:
    // 0x432270: 0x40f809  jalr        $v0
label_432274:
    if (ctx->pc == 0x432274u) {
        ctx->pc = 0x432274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432270u;
        // 0x432274: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432278u;
        goto label_432278;
    }
    ctx->pc = 0x432270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x432278u);
        ctx->pc = 0x432274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432270u;
        // 0x432274: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432270u, 0x432278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x432278u;
label_432278:
    // 0x432278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x432278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43227c:
    // 0x43227c: 0x5a00006f  blezl       $s0, . + 4 + (0x6F << 2)
label_432280:
    if (ctx->pc == 0x432280u) {
        ctx->pc = 0x432280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43227Cu;
        // 0x432280: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432284u;
        goto label_432284;
    }
    ctx->pc = 0x43227Cu;
    {
        const bool branch_taken_0x43227c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x43227c) {
            ctx->pc = 0x432280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43227Cu;
            // 0x432280: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43243Cu;
            goto label_43243c;
        }
    }
    ctx->pc = 0x432284u;
label_432284:
    // 0x432284: 0x1000000c  b           . + 4 + (0xC << 2)
label_432288:
    if (ctx->pc == 0x432288u) {
        ctx->pc = 0x432288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432284u;
        // 0x432288: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43228Cu;
        goto label_43228c;
    }
    ctx->pc = 0x432284u;
    {
        const bool branch_taken_0x432284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432284u;
        // 0x432288: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432284) {
            ctx->pc = 0x4322B8u;
            goto label_4322b8;
        }
    }
    ctx->pc = 0x43228Cu;
label_43228c:
    // 0x43228c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_432290:
    // 0x432290: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x432290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_432294:
    // 0x432294: 0xc10c1bb  jal         func_4306EC
label_432298:
    if (ctx->pc == 0x432298u) {
        ctx->pc = 0x432298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432294u;
        // 0x432298: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43229Cu;
        goto label_43229c;
    }
    ctx->pc = 0x432294u;
    SET_GPR_U32(ctx, 31, 0x43229Cu);
    ctx->pc = 0x432298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432294u;
    // 0x432298: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x432294u, 0x43229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43229Cu;
label_43229c:
    // 0x43229c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x43229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4322a0:
    // 0x4322a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4322a4:
    // 0x4322a4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4322a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4322a8:
    // 0x4322a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4322ac:
    // 0x4322ac: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4322acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_4322b0:
    // 0x4322b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4322b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4322b4:
    // 0x4322b4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x4322b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_4322b8:
    // 0x4322b8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x4322b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4322bc:
    // 0x4322bc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4322bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4322c0:
    // 0x4322c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4322c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4322c4:
    // 0x4322c4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_4322c8:
    if (ctx->pc == 0x4322C8u) {
        ctx->pc = 0x4322C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322C4u;
        // 0x4322c8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4322CCu;
        goto label_4322cc;
    }
    ctx->pc = 0x4322C4u;
    {
        const bool branch_taken_0x4322c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4322C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322C4u;
        // 0x4322c8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4322c4) {
            ctx->pc = 0x4321A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4321a0;
        }
    }
    ctx->pc = 0x4322CCu;
label_4322cc:
    // 0x4322cc: 0x1000005e  b           . + 4 + (0x5E << 2)
label_4322d0:
    if (ctx->pc == 0x4322D0u) {
        ctx->pc = 0x4322D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322CCu;
        // 0x4322d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4322D4u;
        goto label_4322d4;
    }
    ctx->pc = 0x4322CCu;
    {
        const bool branch_taken_0x4322cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4322D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322CCu;
        // 0x4322d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4322cc) {
            ctx->pc = 0x432448u;
            goto label_432448;
        }
    }
    ctx->pc = 0x4322D4u;
label_4322d4:
    // 0x4322d4: 0x0  nop
    ctx->pc = 0x4322d4u;
    // NOP
label_4322d8:
    // 0x4322d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_4322dc:
    if (ctx->pc == 0x4322DCu) {
        ctx->pc = 0x4322E0u;
        goto label_4322e0;
    }
    ctx->pc = 0x4322D8u;
    {
        const bool branch_taken_0x4322d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4322d8) {
            ctx->pc = 0x432300u;
            goto label_432300;
        }
    }
    ctx->pc = 0x4322E0u;
label_4322e0:
    // 0x4322e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4322e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4322e4:
    // 0x4322e4: 0x0  nop
    ctx->pc = 0x4322e4u;
    // NOP
label_4322e8:
    // 0x4322e8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x4322e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4322ec:
    // 0x4322ec: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x4322ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4322f0:
    // 0x4322f0: 0x0  nop
    ctx->pc = 0x4322f0u;
    // NOP
label_4322f4:
    // 0x4322f4: 0x0  nop
    ctx->pc = 0x4322f4u;
    // NOP
label_4322f8:
    // 0x4322f8: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_4322fc:
    if (ctx->pc == 0x4322FCu) {
        ctx->pc = 0x4322FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322F8u;
        // 0x4322fc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432300u;
        goto label_432300;
    }
    ctx->pc = 0x4322F8u;
    {
        const bool branch_taken_0x4322f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4322FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4322F8u;
        // 0x4322fc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4322f8) {
            ctx->pc = 0x4322E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4322e8;
        }
    }
    ctx->pc = 0x432300u;
label_432300:
    // 0x432300: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_432304:
    if (ctx->pc == 0x432304u) {
        ctx->pc = 0x432304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432300u;
        // 0x432304: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432308u;
        goto label_432308;
    }
    ctx->pc = 0x432300u;
    {
        const bool branch_taken_0x432300 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x432300) {
            ctx->pc = 0x432304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432300u;
            // 0x432304: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432338u;
            goto label_432338;
        }
    }
    ctx->pc = 0x432308u;
label_432308:
    // 0x432308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x432308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43230c:
    // 0x43230c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x43230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_432310:
    // 0x432310: 0xc10c130  jal         func_4304C0
label_432314:
    if (ctx->pc == 0x432314u) {
        ctx->pc = 0x432314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432310u;
        // 0x432314: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432318u;
        goto label_432318;
    }
    ctx->pc = 0x432310u;
    SET_GPR_U32(ctx, 31, 0x432318u);
    ctx->pc = 0x432314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432310u;
    // 0x432314: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4304C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4304C0u, 0x432310u, 0x432318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432318u;
label_432318:
    // 0x432318: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x432318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43231c:
    // 0x43231c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_432320:
    if (ctx->pc == 0x432320u) {
        ctx->pc = 0x432320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43231Cu;
        // 0x432320: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432324u;
        goto label_432324;
    }
    ctx->pc = 0x43231Cu;
    {
        const bool branch_taken_0x43231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x432320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43231Cu;
        // 0x432320: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43231c) {
            ctx->pc = 0x43232Cu;
            goto label_43232c;
        }
    }
    ctx->pc = 0x432324u;
label_432324:
    // 0x432324: 0x10000002  b           . + 4 + (0x2 << 2)
label_432328:
    if (ctx->pc == 0x432328u) {
        ctx->pc = 0x432328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432324u;
        // 0x432328: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43232Cu;
        goto label_43232c;
    }
    ctx->pc = 0x432324u;
    {
        const bool branch_taken_0x432324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432324u;
        // 0x432328: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432324) {
            ctx->pc = 0x432330u;
            goto label_432330;
        }
    }
    ctx->pc = 0x43232Cu;
label_43232c:
    // 0x43232c: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x43232cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_432330:
    // 0x432330: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x432330u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_432334:
    // 0x432334: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x432334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_432338:
    // 0x432338: 0x255202b  sltu        $a0, $s2, $s5
    ctx->pc = 0x432338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_43233c:
    // 0x43233c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x43233cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_432340:
    // 0x432340: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x432340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_432344:
    // 0x432344: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x432344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_432348:
    // 0x432348: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x432348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_43234c:
    // 0x43234c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_432350:
    // 0x432350: 0x2a4380a  movz        $a3, $s5, $a0
    ctx->pc = 0x432350u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 21));
label_432354:
    // 0x432354: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x432354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_432358:
    // 0x432358: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_43235c:
    if (ctx->pc == 0x43235Cu) {
        ctx->pc = 0x43235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432358u;
        // 0x43235c: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432360u;
        goto label_432360;
    }
    ctx->pc = 0x432358u;
    {
        const bool branch_taken_0x432358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432358u;
        // 0x43235c: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432358) {
            ctx->pc = 0x43239Cu;
            goto label_43239c;
        }
    }
    ctx->pc = 0x432360u;
label_432360:
    // 0x432360: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x432360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_432364:
    // 0x432364: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_432368:
    if (ctx->pc == 0x432368u) {
        ctx->pc = 0x432368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432364u;
        // 0x432368: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43236Cu;
        goto label_43236c;
    }
    ctx->pc = 0x432364u;
    {
        const bool branch_taken_0x432364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432364u;
        // 0x432368: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432364) {
            ctx->pc = 0x43239Cu;
            goto label_43239c;
        }
    }
    ctx->pc = 0x43236Cu;
label_43236c:
    // 0x43236c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43236cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_432370:
    // 0x432370: 0xc10c1bb  jal         func_4306EC
label_432374:
    if (ctx->pc == 0x432374u) {
        ctx->pc = 0x432374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432370u;
        // 0x432374: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432378u;
        goto label_432378;
    }
    ctx->pc = 0x432370u;
    SET_GPR_U32(ctx, 31, 0x432378u);
    ctx->pc = 0x432374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432370u;
    // 0x432374: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x432370u, 0x432378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432378u;
label_432378:
    // 0x432378: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x432378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_43237c:
    // 0x43237c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432380:
    // 0x432380: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x432380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_432384:
    // 0x432384: 0xc10c57e  jal         func_4315F8
label_432388:
    if (ctx->pc == 0x432388u) {
        ctx->pc = 0x432388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432384u;
        // 0x432388: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43238Cu;
        goto label_43238c;
    }
    ctx->pc = 0x432384u;
    SET_GPR_U32(ctx, 31, 0x43238Cu);
    ctx->pc = 0x432388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432384u;
    // 0x432388: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x432384u, 0x43238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43238Cu;
label_43238c:
    // 0x43238c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_432390:
    if (ctx->pc == 0x432390u) {
        ctx->pc = 0x432390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43238Cu;
        // 0x432390: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432394u;
        goto label_432394;
    }
    ctx->pc = 0x43238Cu;
    {
        const bool branch_taken_0x43238c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43238Cu;
        // 0x432390: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43238c) {
            ctx->pc = 0x432438u;
            goto label_432438;
        }
    }
    ctx->pc = 0x432394u;
label_432394:
    // 0x432394: 0x1000001a  b           . + 4 + (0x1A << 2)
label_432398:
    if (ctx->pc == 0x432398u) {
        ctx->pc = 0x43239Cu;
        goto label_43239c;
    }
    ctx->pc = 0x432394u;
    {
        const bool branch_taken_0x432394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x432394) {
            ctx->pc = 0x432400u;
            goto label_432400;
        }
    }
    ctx->pc = 0x43239Cu;
label_43239c:
    // 0x43239c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x43239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4323a0:
    // 0x4323a0: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x4323a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4323a4:
    // 0x4323a4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_4323a8:
    if (ctx->pc == 0x4323A8u) {
        ctx->pc = 0x4323A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323A4u;
        // 0x4323a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4323ACu;
        goto label_4323ac;
    }
    ctx->pc = 0x4323A4u;
    {
        const bool branch_taken_0x4323a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4323a4) {
            ctx->pc = 0x4323A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4323A4u;
            // 0x4323a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4323D4u;
            goto label_4323d4;
        }
    }
    ctx->pc = 0x4323ACu;
label_4323ac:
    // 0x4323ac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4323acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4323b0:
    // 0x4323b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4323b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4323b4:
    // 0x4323b4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x4323b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4323b8:
    // 0x4323b8: 0x40f809  jalr        $v0
label_4323bc:
    if (ctx->pc == 0x4323BCu) {
        ctx->pc = 0x4323BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323B8u;
        // 0x4323bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4323C0u;
        goto label_4323c0;
    }
    ctx->pc = 0x4323B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4323C0u);
        ctx->pc = 0x4323BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323B8u;
        // 0x4323bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4323B8u, 0x4323C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4323C0u;
label_4323c0:
    // 0x4323c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4323c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4323c4:
    // 0x4323c4: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_4323c8:
    if (ctx->pc == 0x4323C8u) {
        ctx->pc = 0x4323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323C4u;
        // 0x4323c8: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4323CCu;
        goto label_4323cc;
    }
    ctx->pc = 0x4323C4u;
    {
        const bool branch_taken_0x4323c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323C4u;
        // 0x4323c8: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4323c4) {
            ctx->pc = 0x432438u;
            goto label_432438;
        }
    }
    ctx->pc = 0x4323CCu;
label_4323cc:
    // 0x4323cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4323d0:
    if (ctx->pc == 0x4323D0u) {
        ctx->pc = 0x4323D4u;
        goto label_4323d4;
    }
    ctx->pc = 0x4323CCu;
    {
        const bool branch_taken_0x4323cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4323cc) {
            ctx->pc = 0x432400u;
            goto label_432400;
        }
    }
    ctx->pc = 0x4323D4u;
label_4323d4:
    // 0x4323d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4323d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4323d8:
    // 0x4323d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4323d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4323dc:
    // 0x4323dc: 0xc10c1bb  jal         func_4306EC
label_4323e0:
    if (ctx->pc == 0x4323E0u) {
        ctx->pc = 0x4323E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323DCu;
        // 0x4323e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4323E4u;
        goto label_4323e4;
    }
    ctx->pc = 0x4323DCu;
    SET_GPR_U32(ctx, 31, 0x4323E4u);
    ctx->pc = 0x4323E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4323DCu;
    // 0x4323e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4323DCu, 0x4323E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4323E4u;
label_4323e4:
    // 0x4323e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4323e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4323e8:
    // 0x4323e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4323e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4323ec:
    // 0x4323ec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4323ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4323f0:
    // 0x4323f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4323f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4323f4:
    // 0x4323f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4323f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_4323f8:
    // 0x4323f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4323f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4323fc:
    // 0x4323fc: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x4323fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_432400:
    // 0x432400: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_432404:
    if (ctx->pc == 0x432404u) {
        ctx->pc = 0x432404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432400u;
        // 0x432404: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432408u;
        goto label_432408;
    }
    ctx->pc = 0x432400u;
    {
        const bool branch_taken_0x432400 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x432400) {
            ctx->pc = 0x432404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432400u;
            // 0x432404: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43241Cu;
            goto label_43241c;
        }
    }
    ctx->pc = 0x432408u;
label_432408:
    // 0x432408: 0xc10c57e  jal         func_4315F8
label_43240c:
    if (ctx->pc == 0x43240Cu) {
        ctx->pc = 0x43240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432408u;
        // 0x43240c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432410u;
        goto label_432410;
    }
    ctx->pc = 0x432408u;
    SET_GPR_U32(ctx, 31, 0x432410u);
    ctx->pc = 0x43240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432408u;
    // 0x43240c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x432408u, 0x432410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432410u;
label_432410:
    // 0x432410: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_432414:
    if (ctx->pc == 0x432414u) {
        ctx->pc = 0x432414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432410u;
        // 0x432414: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432418u;
        goto label_432418;
    }
    ctx->pc = 0x432410u;
    {
        const bool branch_taken_0x432410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432410u;
        // 0x432414: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432410) {
            ctx->pc = 0x432438u;
            goto label_432438;
        }
    }
    ctx->pc = 0x432418u;
label_432418:
    // 0x432418: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x432418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_43241c:
    // 0x43241c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x43241cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_432420:
    // 0x432420: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x432420u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_432424:
    // 0x432424: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x432424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_432428:
    // 0x432428: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_43242c:
    if (ctx->pc == 0x43242Cu) {
        ctx->pc = 0x43242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432428u;
        // 0x43242c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432430u;
        goto label_432430;
    }
    ctx->pc = 0x432428u;
    {
        const bool branch_taken_0x432428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432428u;
        // 0x43242c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432428) {
            ctx->pc = 0x4322D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4322d8;
        }
    }
    ctx->pc = 0x432430u;
label_432430:
    // 0x432430: 0x10000005  b           . + 4 + (0x5 << 2)
label_432434:
    if (ctx->pc == 0x432434u) {
        ctx->pc = 0x432434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432430u;
        // 0x432434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432438u;
        goto label_432438;
    }
    ctx->pc = 0x432430u;
    {
        const bool branch_taken_0x432430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432430u;
        // 0x432434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432430) {
            ctx->pc = 0x432448u;
            goto label_432448;
        }
    }
    ctx->pc = 0x432438u;
label_432438:
    // 0x432438: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x432438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_43243c:
    // 0x43243c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_432440:
    // 0x432440: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x432440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_432444:
    // 0x432444: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x432444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_432448:
    // 0x432448: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x432448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43244c:
    // 0x43244c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x43244cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_432450:
    // 0x432450: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x432450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_432454:
    // 0x432454: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x432454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_432458:
    // 0x432458: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x432458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43245c:
    // 0x43245c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x43245cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_432460:
    // 0x432460: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x432460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_432464:
    // 0x432464: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x432464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432468:
    // 0x432468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43246c:
    // 0x43246c: 0x3e00008  jr          $ra
label_432470:
    if (ctx->pc == 0x432470u) {
        ctx->pc = 0x432470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43246Cu;
        // 0x432470: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432474u;
        goto label_432474;
    }
    ctx->pc = 0x43246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43246Cu;
        // 0x432470: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43246Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432474u;
label_432474:
    // 0x432474: 0x0  nop
    ctx->pc = 0x432474u;
    // NOP
    ctx->pc = 0x432478u;
}
