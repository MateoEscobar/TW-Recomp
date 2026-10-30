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

// Function: sub_00471078
// Address: 0x471078 - 0x471438
void sub_00471078_0x471078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471078_0x471078");
#endif

    switch (ctx->pc) {
        case 0x471078u: goto label_471078;
        case 0x47107cu: goto label_47107c;
        case 0x471080u: goto label_471080;
        case 0x471084u: goto label_471084;
        case 0x471088u: goto label_471088;
        case 0x47108cu: goto label_47108c;
        case 0x471090u: goto label_471090;
        case 0x471094u: goto label_471094;
        case 0x471098u: goto label_471098;
        case 0x47109cu: goto label_47109c;
        case 0x4710a0u: goto label_4710a0;
        case 0x4710a4u: goto label_4710a4;
        case 0x4710a8u: goto label_4710a8;
        case 0x4710acu: goto label_4710ac;
        case 0x4710b0u: goto label_4710b0;
        case 0x4710b4u: goto label_4710b4;
        case 0x4710b8u: goto label_4710b8;
        case 0x4710bcu: goto label_4710bc;
        case 0x4710c0u: goto label_4710c0;
        case 0x4710c4u: goto label_4710c4;
        case 0x4710c8u: goto label_4710c8;
        case 0x4710ccu: goto label_4710cc;
        case 0x4710d0u: goto label_4710d0;
        case 0x4710d4u: goto label_4710d4;
        case 0x4710d8u: goto label_4710d8;
        case 0x4710dcu: goto label_4710dc;
        case 0x4710e0u: goto label_4710e0;
        case 0x4710e4u: goto label_4710e4;
        case 0x4710e8u: goto label_4710e8;
        case 0x4710ecu: goto label_4710ec;
        case 0x4710f0u: goto label_4710f0;
        case 0x4710f4u: goto label_4710f4;
        case 0x4710f8u: goto label_4710f8;
        case 0x4710fcu: goto label_4710fc;
        case 0x471100u: goto label_471100;
        case 0x471104u: goto label_471104;
        case 0x471108u: goto label_471108;
        case 0x47110cu: goto label_47110c;
        case 0x471110u: goto label_471110;
        case 0x471114u: goto label_471114;
        case 0x471118u: goto label_471118;
        case 0x47111cu: goto label_47111c;
        case 0x471120u: goto label_471120;
        case 0x471124u: goto label_471124;
        case 0x471128u: goto label_471128;
        case 0x47112cu: goto label_47112c;
        case 0x471130u: goto label_471130;
        case 0x471134u: goto label_471134;
        case 0x471138u: goto label_471138;
        case 0x47113cu: goto label_47113c;
        case 0x471140u: goto label_471140;
        case 0x471144u: goto label_471144;
        case 0x471148u: goto label_471148;
        case 0x47114cu: goto label_47114c;
        case 0x471150u: goto label_471150;
        case 0x471154u: goto label_471154;
        case 0x471158u: goto label_471158;
        case 0x47115cu: goto label_47115c;
        case 0x471160u: goto label_471160;
        case 0x471164u: goto label_471164;
        case 0x471168u: goto label_471168;
        case 0x47116cu: goto label_47116c;
        case 0x471170u: goto label_471170;
        case 0x471174u: goto label_471174;
        case 0x471178u: goto label_471178;
        case 0x47117cu: goto label_47117c;
        case 0x471180u: goto label_471180;
        case 0x471184u: goto label_471184;
        case 0x471188u: goto label_471188;
        case 0x47118cu: goto label_47118c;
        case 0x471190u: goto label_471190;
        case 0x471194u: goto label_471194;
        case 0x471198u: goto label_471198;
        case 0x47119cu: goto label_47119c;
        case 0x4711a0u: goto label_4711a0;
        case 0x4711a4u: goto label_4711a4;
        case 0x4711a8u: goto label_4711a8;
        case 0x4711acu: goto label_4711ac;
        case 0x4711b0u: goto label_4711b0;
        case 0x4711b4u: goto label_4711b4;
        case 0x4711b8u: goto label_4711b8;
        case 0x4711bcu: goto label_4711bc;
        case 0x4711c0u: goto label_4711c0;
        case 0x4711c4u: goto label_4711c4;
        case 0x4711c8u: goto label_4711c8;
        case 0x4711ccu: goto label_4711cc;
        case 0x4711d0u: goto label_4711d0;
        case 0x4711d4u: goto label_4711d4;
        case 0x4711d8u: goto label_4711d8;
        case 0x4711dcu: goto label_4711dc;
        case 0x4711e0u: goto label_4711e0;
        case 0x4711e4u: goto label_4711e4;
        case 0x4711e8u: goto label_4711e8;
        case 0x4711ecu: goto label_4711ec;
        case 0x4711f0u: goto label_4711f0;
        case 0x4711f4u: goto label_4711f4;
        case 0x4711f8u: goto label_4711f8;
        case 0x4711fcu: goto label_4711fc;
        case 0x471200u: goto label_471200;
        case 0x471204u: goto label_471204;
        case 0x471208u: goto label_471208;
        case 0x47120cu: goto label_47120c;
        case 0x471210u: goto label_471210;
        case 0x471214u: goto label_471214;
        case 0x471218u: goto label_471218;
        case 0x47121cu: goto label_47121c;
        case 0x471220u: goto label_471220;
        case 0x471224u: goto label_471224;
        case 0x471228u: goto label_471228;
        case 0x47122cu: goto label_47122c;
        case 0x471230u: goto label_471230;
        case 0x471234u: goto label_471234;
        case 0x471238u: goto label_471238;
        case 0x47123cu: goto label_47123c;
        case 0x471240u: goto label_471240;
        case 0x471244u: goto label_471244;
        case 0x471248u: goto label_471248;
        case 0x47124cu: goto label_47124c;
        case 0x471250u: goto label_471250;
        case 0x471254u: goto label_471254;
        case 0x471258u: goto label_471258;
        case 0x47125cu: goto label_47125c;
        case 0x471260u: goto label_471260;
        case 0x471264u: goto label_471264;
        case 0x471268u: goto label_471268;
        case 0x47126cu: goto label_47126c;
        case 0x471270u: goto label_471270;
        case 0x471274u: goto label_471274;
        case 0x471278u: goto label_471278;
        case 0x47127cu: goto label_47127c;
        case 0x471280u: goto label_471280;
        case 0x471284u: goto label_471284;
        case 0x471288u: goto label_471288;
        case 0x47128cu: goto label_47128c;
        case 0x471290u: goto label_471290;
        case 0x471294u: goto label_471294;
        case 0x471298u: goto label_471298;
        case 0x47129cu: goto label_47129c;
        case 0x4712a0u: goto label_4712a0;
        case 0x4712a4u: goto label_4712a4;
        case 0x4712a8u: goto label_4712a8;
        case 0x4712acu: goto label_4712ac;
        case 0x4712b0u: goto label_4712b0;
        case 0x4712b4u: goto label_4712b4;
        case 0x4712b8u: goto label_4712b8;
        case 0x4712bcu: goto label_4712bc;
        case 0x4712c0u: goto label_4712c0;
        case 0x4712c4u: goto label_4712c4;
        case 0x4712c8u: goto label_4712c8;
        case 0x4712ccu: goto label_4712cc;
        case 0x4712d0u: goto label_4712d0;
        case 0x4712d4u: goto label_4712d4;
        case 0x4712d8u: goto label_4712d8;
        case 0x4712dcu: goto label_4712dc;
        case 0x4712e0u: goto label_4712e0;
        case 0x4712e4u: goto label_4712e4;
        case 0x4712e8u: goto label_4712e8;
        case 0x4712ecu: goto label_4712ec;
        case 0x4712f0u: goto label_4712f0;
        case 0x4712f4u: goto label_4712f4;
        case 0x4712f8u: goto label_4712f8;
        case 0x4712fcu: goto label_4712fc;
        case 0x471300u: goto label_471300;
        case 0x471304u: goto label_471304;
        case 0x471308u: goto label_471308;
        case 0x47130cu: goto label_47130c;
        case 0x471310u: goto label_471310;
        case 0x471314u: goto label_471314;
        case 0x471318u: goto label_471318;
        case 0x47131cu: goto label_47131c;
        case 0x471320u: goto label_471320;
        case 0x471324u: goto label_471324;
        case 0x471328u: goto label_471328;
        case 0x47132cu: goto label_47132c;
        case 0x471330u: goto label_471330;
        case 0x471334u: goto label_471334;
        case 0x471338u: goto label_471338;
        case 0x47133cu: goto label_47133c;
        case 0x471340u: goto label_471340;
        case 0x471344u: goto label_471344;
        case 0x471348u: goto label_471348;
        case 0x47134cu: goto label_47134c;
        case 0x471350u: goto label_471350;
        case 0x471354u: goto label_471354;
        case 0x471358u: goto label_471358;
        case 0x47135cu: goto label_47135c;
        case 0x471360u: goto label_471360;
        case 0x471364u: goto label_471364;
        case 0x471368u: goto label_471368;
        case 0x47136cu: goto label_47136c;
        case 0x471370u: goto label_471370;
        case 0x471374u: goto label_471374;
        case 0x471378u: goto label_471378;
        case 0x47137cu: goto label_47137c;
        case 0x471380u: goto label_471380;
        case 0x471384u: goto label_471384;
        case 0x471388u: goto label_471388;
        case 0x47138cu: goto label_47138c;
        case 0x471390u: goto label_471390;
        case 0x471394u: goto label_471394;
        case 0x471398u: goto label_471398;
        case 0x47139cu: goto label_47139c;
        case 0x4713a0u: goto label_4713a0;
        case 0x4713a4u: goto label_4713a4;
        case 0x4713a8u: goto label_4713a8;
        case 0x4713acu: goto label_4713ac;
        case 0x4713b0u: goto label_4713b0;
        case 0x4713b4u: goto label_4713b4;
        case 0x4713b8u: goto label_4713b8;
        case 0x4713bcu: goto label_4713bc;
        case 0x4713c0u: goto label_4713c0;
        case 0x4713c4u: goto label_4713c4;
        case 0x4713c8u: goto label_4713c8;
        case 0x4713ccu: goto label_4713cc;
        case 0x4713d0u: goto label_4713d0;
        case 0x4713d4u: goto label_4713d4;
        case 0x4713d8u: goto label_4713d8;
        case 0x4713dcu: goto label_4713dc;
        case 0x4713e0u: goto label_4713e0;
        case 0x4713e4u: goto label_4713e4;
        case 0x4713e8u: goto label_4713e8;
        case 0x4713ecu: goto label_4713ec;
        case 0x4713f0u: goto label_4713f0;
        case 0x4713f4u: goto label_4713f4;
        case 0x4713f8u: goto label_4713f8;
        case 0x4713fcu: goto label_4713fc;
        case 0x471400u: goto label_471400;
        case 0x471404u: goto label_471404;
        case 0x471408u: goto label_471408;
        case 0x47140cu: goto label_47140c;
        case 0x471410u: goto label_471410;
        case 0x471414u: goto label_471414;
        case 0x471418u: goto label_471418;
        case 0x47141cu: goto label_47141c;
        case 0x471420u: goto label_471420;
        case 0x471424u: goto label_471424;
        case 0x471428u: goto label_471428;
        case 0x47142cu: goto label_47142c;
        case 0x471430u: goto label_471430;
        case 0x471434u: goto label_471434;
        default: break;
    }

    ctx->pc = 0x471078u;

label_471078:
    // 0x471078: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x471078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_47107c:
    // 0x47107c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_471080:
    // 0x471080: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x471080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_471084:
    // 0x471084: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x471084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_471088:
    // 0x471088: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x471088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_47108c:
    // 0x47108c: 0x34a5000b  ori         $a1, $a1, 0xB
    ctx->pc = 0x47108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
label_471090:
    // 0x471090: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x471090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_471094:
    // 0x471094: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x471094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471098:
    // 0x471098: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x471098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_47109c:
    // 0x47109c: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x47109cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4710a0:
    // 0x4710a0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x4710a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_4710a4:
    // 0x4710a4: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4710a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
label_4710a8:
    // 0x4710a8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x4710a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_4710ac:
    // 0x4710ac: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x4710acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_4710b0:
    // 0x4710b0: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x4710b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_4710b4:
    // 0x4710b4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x4710b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_4710b8:
    // 0x4710b8: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x4710b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_4710bc:
    // 0x4710bc: 0x40f809  jalr        $v0
label_4710c0:
    if (ctx->pc == 0x4710C0u) {
        ctx->pc = 0x4710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710BCu;
        // 0x4710c0: 0x8ec4e768  lw          $a0, -0x1898($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961000)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4710C4u;
        goto label_4710c4;
    }
    ctx->pc = 0x4710BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4710C4u);
        ctx->pc = 0x4710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710BCu;
        // 0x4710c0: 0x8ec4e768  lw          $a0, -0x1898($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961000)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4710BCu, 0x4710C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4710C4u;
label_4710c4:
    // 0x4710c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4710c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4710c8:
    // 0x4710c8: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_4710cc:
    if (ctx->pc == 0x4710CCu) {
        ctx->pc = 0x4710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710C8u;
        // 0x4710cc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4710D0u;
        goto label_4710d0;
    }
    ctx->pc = 0x4710C8u;
    {
        const bool branch_taken_0x4710c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710C8u;
        // 0x4710cc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4710c8) {
            ctx->pc = 0x471100u;
            goto label_471100;
        }
    }
    ctx->pc = 0x4710D0u;
label_4710d0:
    // 0x4710d0: 0x8c45e768  lw          $a1, -0x1898($v0)
    ctx->pc = 0x4710d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961000)));
label_4710d4:
    // 0x4710d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4710d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4710d8:
    // 0x4710d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4710d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4710dc:
    // 0x4710dc: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4710dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_4710e0:
    // 0x4710e0: 0xc11eff2  jal         func_47BFC8
label_4710e4:
    if (ctx->pc == 0x4710E4u) {
        ctx->pc = 0x4710E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710E0u;
        // 0x4710e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4710E8u;
        goto label_4710e8;
    }
    ctx->pc = 0x4710E0u;
    SET_GPR_U32(ctx, 31, 0x4710E8u);
    ctx->pc = 0x4710E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4710E0u;
    // 0x4710e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4710E0u, 0x4710E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4710E8u;
label_4710e8:
    // 0x4710e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4710e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4710ec:
    // 0x4710ec: 0xc11f024  jal         func_47C090
label_4710f0:
    if (ctx->pc == 0x4710F0u) {
        ctx->pc = 0x4710F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710ECu;
        // 0x4710f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4710F4u;
        goto label_4710f4;
    }
    ctx->pc = 0x4710ECu;
    SET_GPR_U32(ctx, 31, 0x4710F4u);
    ctx->pc = 0x4710F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4710ECu;
    // 0x4710f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4710ECu, 0x4710F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4710F4u;
label_4710f4:
    // 0x4710f4: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_4710f8:
    if (ctx->pc == 0x4710F8u) {
        ctx->pc = 0x4710F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710F4u;
        // 0x4710f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4710FCu;
        goto label_4710fc;
    }
    ctx->pc = 0x4710F4u;
    {
        const bool branch_taken_0x4710f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4710F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4710F4u;
        // 0x4710f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4710f4) {
            ctx->pc = 0x471408u;
            goto label_471408;
        }
    }
    ctx->pc = 0x4710FCu;
label_4710fc:
    // 0x4710fc: 0x0  nop
    ctx->pc = 0x4710fcu;
    // NOP
label_471100:
    // 0x471100: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x471100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_471104:
    // 0x471104: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x471104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_471108:
    // 0x471108: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x471108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_47110c:
    // 0x47110c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x47110cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_471110:
    // 0x471110: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x471110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_471114:
    // 0x471114: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x471114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_471118:
    // 0x471118: 0xc11b590  jal         func_46D640
label_47111c:
    if (ctx->pc == 0x47111Cu) {
        ctx->pc = 0x47111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471118u;
        // 0x47111c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471120u;
        goto label_471120;
    }
    ctx->pc = 0x471118u;
    SET_GPR_U32(ctx, 31, 0x471120u);
    ctx->pc = 0x47111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471118u;
    // 0x47111c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D640u, 0x471118u, 0x471120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471120u;
label_471120:
    // 0x471120: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x471120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471124:
    // 0x471124: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x471124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_471128:
    // 0x471128: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x471128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_47112c:
    // 0x47112c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x47112cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_471130:
    // 0x471130: 0x2457e750  addiu       $s7, $v0, -0x18B0
    ctx->pc = 0x471130u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
label_471134:
    // 0x471134: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x471134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_471138:
    // 0x471138: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x471138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_47113c:
    // 0x47113c: 0x8c44e750  lw          $a0, -0x18B0($v0)
    ctx->pc = 0x47113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960976)));
label_471140:
    // 0x471140: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x471140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_471144:
    // 0x471144: 0x40f809  jalr        $v0
label_471148:
    if (ctx->pc == 0x471148u) {
        ctx->pc = 0x471148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471144u;
        // 0x471148: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47114Cu;
        goto label_47114c;
    }
    ctx->pc = 0x471144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47114Cu);
        ctx->pc = 0x471148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471144u;
        // 0x471148: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471144u, 0x47114Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47114Cu;
label_47114c:
    // 0x47114c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47114cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471150:
    // 0x471150: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_471154:
    if (ctx->pc == 0x471154u) {
        ctx->pc = 0x471154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471150u;
        // 0x471154: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471158u;
        goto label_471158;
    }
    ctx->pc = 0x471150u;
    {
        const bool branch_taken_0x471150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x471154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471150u;
        // 0x471154: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471150) {
            ctx->pc = 0x471190u;
            goto label_471190;
        }
    }
    ctx->pc = 0x471158u;
label_471158:
    // 0x471158: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x471158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47115c:
    // 0x47115c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x47115cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_471160:
    // 0x471160: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x471160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_471164:
    // 0x471164: 0xc11eff2  jal         func_47BFC8
label_471168:
    if (ctx->pc == 0x471168u) {
        ctx->pc = 0x471168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471164u;
        // 0x471168: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47116Cu;
        goto label_47116c;
    }
    ctx->pc = 0x471164u;
    SET_GPR_U32(ctx, 31, 0x47116Cu);
    ctx->pc = 0x471168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471164u;
    // 0x471168: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x471164u, 0x47116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47116Cu;
label_47116c:
    // 0x47116c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_471170:
    // 0x471170: 0xc11f024  jal         func_47C090
label_471174:
    if (ctx->pc == 0x471174u) {
        ctx->pc = 0x471174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471170u;
        // 0x471174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471178u;
        goto label_471178;
    }
    ctx->pc = 0x471170u;
    SET_GPR_U32(ctx, 31, 0x471178u);
    ctx->pc = 0x471174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471170u;
    // 0x471174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x471170u, 0x471178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471178u;
label_471178:
    // 0x471178: 0x8e83010c  lw          $v1, 0x10C($s4)
    ctx->pc = 0x471178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_47117c:
    // 0x47117c: 0x60f809  jalr        $v1
label_471180:
    if (ctx->pc == 0x471180u) {
        ctx->pc = 0x471180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47117Cu;
        // 0x471180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471184u;
        goto label_471184;
    }
    ctx->pc = 0x47117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x471184u);
        ctx->pc = 0x471180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47117Cu;
        // 0x471180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47117Cu, 0x471184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471184u;
label_471184:
    // 0x471184: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_471188:
    if (ctx->pc == 0x471188u) {
        ctx->pc = 0x471188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471184u;
        // 0x471188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47118Cu;
        goto label_47118c;
    }
    ctx->pc = 0x471184u;
    {
        const bool branch_taken_0x471184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471184u;
        // 0x471188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471184) {
            ctx->pc = 0x471408u;
            goto label_471408;
        }
    }
    ctx->pc = 0x47118Cu;
label_47118c:
    // 0x47118c: 0x0  nop
    ctx->pc = 0x47118cu;
    // NOP
label_471190:
    // 0x471190: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x471190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_471194:
    // 0x471194: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x471194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_471198:
    // 0x471198: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x471198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_47119c:
    // 0x47119c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x47119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_4711a0:
    // 0x4711a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4711a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4711a4:
    // 0x4711a4: 0xa6000082  sh          $zero, 0x82($s0)
    ctx->pc = 0x4711a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 0));
label_4711a8:
    // 0x4711a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4711a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4711ac:
    // 0x4711ac: 0xa6000084  sh          $zero, 0x84($s0)
    ctx->pc = 0x4711acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 0));
label_4711b0:
    // 0x4711b0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4711b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4711b4:
    // 0x4711b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4711b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4711b8:
    // 0x4711b8: 0x26d4e768  addiu       $s4, $s6, -0x1898
    ctx->pc = 0x4711b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
label_4711bc:
    // 0x4711bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4711bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4711c0:
    // 0x4711c0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4711c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4711c4:
    // 0x4711c4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4711c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_4711c8:
    // 0x4711c8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x4711c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_4711cc:
    // 0x4711cc: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x4711ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_4711d0:
    // 0x4711d0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x4711d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_4711d4:
    // 0x4711d4: 0xc10c1fa  jal         func_4307E8
label_4711d8:
    if (ctx->pc == 0x4711D8u) {
        ctx->pc = 0x4711D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4711D4u;
        // 0x4711d8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4711DCu;
        goto label_4711dc;
    }
    ctx->pc = 0x4711D4u;
    SET_GPR_U32(ctx, 31, 0x4711DCu);
    ctx->pc = 0x4711D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4711D4u;
    // 0x4711d8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4711D4u, 0x4711DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4711DCu;
label_4711dc:
    // 0x4711dc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4711dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4711e0:
    // 0x4711e0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x4711e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_4711e4:
    // 0x4711e4: 0x6a620013  ldl         $v0, 0x13($s3)
    ctx->pc = 0x4711e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4711e8:
    // 0x4711e8: 0x6e62000c  ldr         $v0, 0xC($s3)
    ctx->pc = 0x4711e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4711ec:
    // 0x4711ec: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x4711ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4711f0:
    // 0x4711f0: 0xb202005b  sdl         $v0, 0x5B($s0)
    ctx->pc = 0x4711f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4711f4:
    // 0x4711f4: 0xb6020054  sdr         $v0, 0x54($s0)
    ctx->pc = 0x4711f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4711f8:
    // 0x4711f8: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4711f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_4711fc:
    // 0x4711fc: 0x246318e0  addiu       $v1, $v1, 0x18E0
    ctx->pc = 0x4711fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6368));
label_471200:
    // 0x471200: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x471200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_471204:
    // 0x471204: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x471204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_471208:
    // 0x471208: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x471208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_47120c:
    // 0x47120c: 0xb207004f  sdl         $a3, 0x4F($s0)
    ctx->pc = 0x47120cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_471210:
    // 0x471210: 0xb6070048  sdr         $a3, 0x48($s0)
    ctx->pc = 0x471210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_471214:
    // 0x471214: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x471214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
label_471218:
    // 0x471218: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x471218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_47121c:
    // 0x47121c: 0x6a640013  ldl         $a0, 0x13($s3)
    ctx->pc = 0x47121cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_471220:
    // 0x471220: 0x6e64000c  ldr         $a0, 0xC($s3)
    ctx->pc = 0x471220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_471224:
    // 0x471224: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x471224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_471228:
    // 0x471228: 0xb2040073  sdl         $a0, 0x73($s0)
    ctx->pc = 0x471228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_47122c:
    // 0x47122c: 0xb604006c  sdr         $a0, 0x6C($s0)
    ctx->pc = 0x47122cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_471230:
    // 0x471230: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x471230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
label_471234:
    // 0x471234: 0x6a680007  ldl         $t0, 0x7($s3)
    ctx->pc = 0x471234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_471238:
    // 0x471238: 0x6e680000  ldr         $t0, 0x0($s3)
    ctx->pc = 0x471238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_47123c:
    // 0x47123c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x47123cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_471240:
    // 0x471240: 0xb2080067  sdl         $t0, 0x67($s0)
    ctx->pc = 0x471240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_471244:
    // 0x471244: 0xb6080060  sdr         $t0, 0x60($s0)
    ctx->pc = 0x471244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_471248:
    // 0x471248: 0xae090068  sw          $t1, 0x68($s0)
    ctx->pc = 0x471248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 9));
label_47124c:
    // 0x47124c: 0x26260034  addiu       $a2, $s1, 0x34
    ctx->pc = 0x47124cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_471250:
    // 0x471250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x471250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471254:
    // 0x471254: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x471254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_471258:
    // 0x471258: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x471258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_47125c:
    // 0x47125c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x47125cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_471260:
    // 0x471260: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x471260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_471264:
    // 0x471264: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x471264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_471268:
    // 0x471268: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x471268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_47126c:
    // 0x47126c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x47126cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_471270:
    // 0x471270: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x471270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_471274:
    // 0x471274: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x471274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_471278:
    // 0x471278: 0x6a670013  ldl         $a3, 0x13($s3)
    ctx->pc = 0x471278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_47127c:
    // 0x47127c: 0x6e67000c  ldr         $a3, 0xC($s3)
    ctx->pc = 0x47127cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_471280:
    // 0x471280: 0x8e680014  lw          $t0, 0x14($s3)
    ctx->pc = 0x471280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_471284:
    // 0x471284: 0xb2270063  sdl         $a3, 0x63($s1)
    ctx->pc = 0x471284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_471288:
    // 0x471288: 0xb627005c  sdr         $a3, 0x5C($s1)
    ctx->pc = 0x471288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_47128c:
    // 0x47128c: 0xae280064  sw          $t0, 0x64($s1)
    ctx->pc = 0x47128cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 8));
label_471290:
    // 0x471290: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x471290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_471294:
    // 0x471294: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x471294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_471298:
    // 0x471298: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x471298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_47129c:
    // 0x47129c: 0xb2270057  sdl         $a3, 0x57($s1)
    ctx->pc = 0x47129cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4712a0:
    // 0x4712a0: 0xb6270050  sdr         $a3, 0x50($s1)
    ctx->pc = 0x4712a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4712a4:
    // 0x4712a4: 0xae280058  sw          $t0, 0x58($s1)
    ctx->pc = 0x4712a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 8));
label_4712a8:
    // 0x4712a8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4712a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_4712ac:
    // 0x4712ac: 0xae260038  sw          $a2, 0x38($s1)
    ctx->pc = 0x4712acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 6));
label_4712b0:
    // 0x4712b0: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x4712b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
label_4712b4:
    // 0x4712b4: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x4712b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_4712b8:
    // 0x4712b8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x4712b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_4712bc:
    // 0x4712bc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x4712bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_4712c0:
    // 0x4712c0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x4712c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_4712c4:
    // 0x4712c4: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x4712c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
label_4712c8:
    // 0x4712c8: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x4712c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
label_4712cc:
    // 0x4712cc: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x4712ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_4712d0:
    // 0x4712d0: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x4712d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_4712d4:
    // 0x4712d4: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x4712d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_4712d8:
    // 0x4712d8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x4712d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4712dc:
    // 0x4712dc: 0x8ed2e768  lw          $s2, -0x1898($s6)
    ctx->pc = 0x4712dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961000)));
label_4712e0:
    // 0x4712e0: 0x40f809  jalr        $v0
label_4712e4:
    if (ctx->pc == 0x4712E4u) {
        ctx->pc = 0x4712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4712E0u;
        // 0x4712e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4712E8u;
        goto label_4712e8;
    }
    ctx->pc = 0x4712E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4712E8u);
        ctx->pc = 0x4712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4712E0u;
        // 0x4712e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4712E0u, 0x4712E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4712E8u;
label_4712e8:
    // 0x4712e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4712e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4712ec:
    // 0x4712ec: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_4712f0:
    if (ctx->pc == 0x4712F0u) {
        ctx->pc = 0x4712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4712ECu;
        // 0x4712f0: 0x26a50004  addiu       $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4712F4u;
        goto label_4712f4;
    }
    ctx->pc = 0x4712ECu;
    {
        const bool branch_taken_0x4712ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4712ECu;
        // 0x4712f0: 0x26a50004  addiu       $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4712ec) {
            ctx->pc = 0x471338u;
            goto label_471338;
        }
    }
    ctx->pc = 0x4712F4u;
label_4712f4:
    // 0x4712f4: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x4712f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
label_4712f8:
    // 0x4712f8: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x4712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_4712fc:
    // 0x4712fc: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x4712fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_471300:
    // 0x471300: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471304:
    // 0x471304: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471308:
    // 0x471308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x471308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47130c:
    // 0x47130c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x47130cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_471310:
    // 0x471310: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x471310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471314:
    // 0x471314: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471318:
    // 0x471318: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x471318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_47131c:
    // 0x47131c: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x47131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471320:
    // 0x471320: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x471320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_471324:
    // 0x471324: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x471324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_471328:
    // 0x471328: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x471328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_47132c:
    // 0x47132c: 0x8f8288f8  lw          $v0, -0x7708($gp)
    ctx->pc = 0x47132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_471330:
    // 0x471330: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_471334:
    // 0x471334: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x471334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_471338:
    // 0x471338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x471338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47133c:
    // 0x47133c: 0xc11ff8e  jal         func_47FE38
label_471340:
    if (ctx->pc == 0x471340u) {
        ctx->pc = 0x471340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47133Cu;
        // 0x471340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471344u;
        goto label_471344;
    }
    ctx->pc = 0x47133Cu;
    SET_GPR_U32(ctx, 31, 0x471344u);
    ctx->pc = 0x471340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47133Cu;
    // 0x471340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x47133Cu, 0x471344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471344u;
label_471344:
    // 0x471344: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x471344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471348:
    // 0x471348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x471348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47134c:
    // 0x47134c: 0xc11ff8e  jal         func_47FE38
label_471350:
    if (ctx->pc == 0x471350u) {
        ctx->pc = 0x471350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47134Cu;
        // 0x471350: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471354u;
        goto label_471354;
    }
    ctx->pc = 0x47134Cu;
    SET_GPR_U32(ctx, 31, 0x471354u);
    ctx->pc = 0x471350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47134Cu;
    // 0x471350: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x47134Cu, 0x471354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471354u;
label_471354:
    // 0x471354: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x471354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471358:
    // 0x471358: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x471358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_47135c:
    // 0x47135c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_471360:
    if (ctx->pc == 0x471360u) {
        ctx->pc = 0x471360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47135Cu;
        // 0x471360: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471364u;
        goto label_471364;
    }
    ctx->pc = 0x47135Cu;
    {
        const bool branch_taken_0x47135c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x471360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47135Cu;
        // 0x471360: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47135c) {
            ctx->pc = 0x4713BCu;
            goto label_4713bc;
        }
    }
    ctx->pc = 0x471364u;
label_471364:
    // 0x471364: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x471364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471368:
    // 0x471368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x471368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47136c:
    // 0x47136c: 0x0  nop
    ctx->pc = 0x47136cu;
    // NOP
label_471370:
    // 0x471370: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_471374:
    if (ctx->pc == 0x471374u) {
        ctx->pc = 0x471374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471370u;
        // 0x471374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471378u;
        goto label_471378;
    }
    ctx->pc = 0x471370u;
    {
        const bool branch_taken_0x471370 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x471374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471370u;
        // 0x471374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471370) {
            ctx->pc = 0x4713D4u;
            goto label_4713d4;
        }
    }
    ctx->pc = 0x471378u;
label_471378:
    // 0x471378: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x471378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_47137c:
    // 0x47137c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x47137cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_471380:
    // 0x471380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x471380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_471384:
    // 0x471384: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x471384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_471388:
    // 0x471388: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_47138c:
    if (ctx->pc == 0x47138Cu) {
        ctx->pc = 0x47138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471388u;
        // 0x47138c: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471390u;
        goto label_471390;
    }
    ctx->pc = 0x471388u;
    {
        const bool branch_taken_0x471388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471388u;
        // 0x47138c: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471388) {
            ctx->pc = 0x4713C4u;
            goto label_4713c4;
        }
    }
    ctx->pc = 0x471390u;
label_471390:
    // 0x471390: 0xc11b72a  jal         func_46DCA8
label_471394:
    if (ctx->pc == 0x471394u) {
        ctx->pc = 0x471394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471390u;
        // 0x471394: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471398u;
        goto label_471398;
    }
    ctx->pc = 0x471390u;
    SET_GPR_U32(ctx, 31, 0x471398u);
    ctx->pc = 0x471394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471390u;
    // 0x471394: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DCA8u, 0x471390u, 0x471398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471398u;
label_471398:
    // 0x471398: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47139c:
    if (ctx->pc == 0x47139Cu) {
        ctx->pc = 0x47139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471398u;
        // 0x47139c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713A0u;
        goto label_4713a0;
    }
    ctx->pc = 0x471398u;
    {
        const bool branch_taken_0x471398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471398u;
        // 0x47139c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471398) {
            ctx->pc = 0x4713BCu;
            goto label_4713bc;
        }
    }
    ctx->pc = 0x4713A0u;
label_4713a0:
    // 0x4713a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4713a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4713a4:
    // 0x4713a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4713a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4713a8:
    // 0x4713a8: 0xc11c258  jal         func_470960
label_4713ac:
    if (ctx->pc == 0x4713ACu) {
        ctx->pc = 0x4713ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713A8u;
        // 0x4713ac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713B0u;
        goto label_4713b0;
    }
    ctx->pc = 0x4713A8u;
    SET_GPR_U32(ctx, 31, 0x4713B0u);
    ctx->pc = 0x4713ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4713A8u;
    // 0x4713ac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470960u, 0x4713A8u, 0x4713B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4713B0u;
label_4713b0:
    // 0x4713b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4713b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4713b4:
    // 0x4713b4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_4713b8:
    if (ctx->pc == 0x4713B8u) {
        ctx->pc = 0x4713B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713B4u;
        // 0x4713b8: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713BCu;
        goto label_4713bc;
    }
    ctx->pc = 0x4713B4u;
    {
        const bool branch_taken_0x4713b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4713b4) {
            ctx->pc = 0x4713B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4713B4u;
            // 0x4713b8: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4713C8u;
            goto label_4713c8;
        }
    }
    ctx->pc = 0x4713BCu;
label_4713bc:
    // 0x4713bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_4713c0:
    if (ctx->pc == 0x4713C0u) {
        ctx->pc = 0x4713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713BCu;
        // 0x4713c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713C4u;
        goto label_4713c4;
    }
    ctx->pc = 0x4713BCu;
    {
        const bool branch_taken_0x4713bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713BCu;
        // 0x4713c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4713bc) {
            ctx->pc = 0x4713F4u;
            goto label_4713f4;
        }
    }
    ctx->pc = 0x4713C4u;
label_4713c4:
    // 0x4713c4: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4713c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4713c8:
    // 0x4713c8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4713c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_4713cc:
    // 0x4713cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4713d0:
    if (ctx->pc == 0x4713D0u) {
        ctx->pc = 0x4713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713CCu;
        // 0x4713d0: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713D4u;
        goto label_4713d4;
    }
    ctx->pc = 0x4713CCu;
    {
        const bool branch_taken_0x4713cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713CCu;
        // 0x4713d0: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4713cc) {
            ctx->pc = 0x4713E8u;
            goto label_4713e8;
        }
    }
    ctx->pc = 0x4713D4u;
label_4713d4:
    // 0x4713d4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4713d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4713d8:
    // 0x4713d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4713d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4713dc:
    // 0x4713dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4713dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4713e0:
    // 0x4713e0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x4713e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4713e4:
    // 0x4713e4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4713e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4713e8:
    // 0x4713e8: 0x6a3ffe1  bgezl       $s5, . + 4 + (-0x1F << 2)
label_4713ec:
    if (ctx->pc == 0x4713ECu) {
        ctx->pc = 0x4713ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713E8u;
        // 0x4713ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713F0u;
        goto label_4713f0;
    }
    ctx->pc = 0x4713E8u;
    {
        const bool branch_taken_0x4713e8 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x4713e8) {
            ctx->pc = 0x4713ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4713E8u;
            // 0x4713ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471370;
        }
    }
    ctx->pc = 0x4713F0u;
label_4713f0:
    // 0x4713f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4713f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4713f4:
    // 0x4713f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4713f8:
    if (ctx->pc == 0x4713F8u) {
        ctx->pc = 0x4713F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713F4u;
        // 0x4713f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4713FCu;
        goto label_4713fc;
    }
    ctx->pc = 0x4713F4u;
    {
        const bool branch_taken_0x4713f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4713F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713F4u;
        // 0x4713f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4713f4) {
            ctx->pc = 0x471408u;
            goto label_471408;
        }
    }
    ctx->pc = 0x4713FCu;
label_4713fc:
    // 0x4713fc: 0xc11c384  jal         func_470E10
label_471400:
    if (ctx->pc == 0x471400u) {
        ctx->pc = 0x471400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4713FCu;
        // 0x471400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471404u;
        goto label_471404;
    }
    ctx->pc = 0x4713FCu;
    SET_GPR_U32(ctx, 31, 0x471404u);
    ctx->pc = 0x471400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4713FCu;
    // 0x471400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E10u, 0x4713FCu, 0x471404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471404u;
label_471404:
    // 0x471404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x471404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471408:
    // 0x471408: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x471408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_47140c:
    // 0x47140c: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x47140cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_471410:
    // 0x471410: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x471410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_471414:
    // 0x471414: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x471414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_471418:
    // 0x471418: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x471418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_47141c:
    // 0x47141c: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x47141cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_471420:
    // 0x471420: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x471420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_471424:
    // 0x471424: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x471424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_471428:
    // 0x471428: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x471428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_47142c:
    // 0x47142c: 0x3e00008  jr          $ra
label_471430:
    if (ctx->pc == 0x471430u) {
        ctx->pc = 0x471430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47142Cu;
        // 0x471430: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471434u;
        goto label_471434;
    }
    ctx->pc = 0x47142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47142Cu;
        // 0x471430: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471434u;
label_471434:
    // 0x471434: 0x0  nop
    ctx->pc = 0x471434u;
    // NOP
    ctx->pc = 0x471438u;
}
