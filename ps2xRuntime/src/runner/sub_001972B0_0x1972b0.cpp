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

// Function: sub_001972B0
// Address: 0x1972b0 - 0x1976e8
void sub_001972B0_0x1972b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001972B0_0x1972b0");
#endif

    switch (ctx->pc) {
        case 0x1972b0u: goto label_1972b0;
        case 0x1972b4u: goto label_1972b4;
        case 0x1972b8u: goto label_1972b8;
        case 0x1972bcu: goto label_1972bc;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972c4u: goto label_1972c4;
        case 0x1972c8u: goto label_1972c8;
        case 0x1972ccu: goto label_1972cc;
        case 0x1972d0u: goto label_1972d0;
        case 0x1972d4u: goto label_1972d4;
        case 0x1972d8u: goto label_1972d8;
        case 0x1972dcu: goto label_1972dc;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972e4u: goto label_1972e4;
        case 0x1972e8u: goto label_1972e8;
        case 0x1972ecu: goto label_1972ec;
        case 0x1972f0u: goto label_1972f0;
        case 0x1972f4u: goto label_1972f4;
        case 0x1972f8u: goto label_1972f8;
        case 0x1972fcu: goto label_1972fc;
        case 0x197300u: goto label_197300;
        case 0x197304u: goto label_197304;
        case 0x197308u: goto label_197308;
        case 0x19730cu: goto label_19730c;
        case 0x197310u: goto label_197310;
        case 0x197314u: goto label_197314;
        case 0x197318u: goto label_197318;
        case 0x19731cu: goto label_19731c;
        case 0x197320u: goto label_197320;
        case 0x197324u: goto label_197324;
        case 0x197328u: goto label_197328;
        case 0x19732cu: goto label_19732c;
        case 0x197330u: goto label_197330;
        case 0x197334u: goto label_197334;
        case 0x197338u: goto label_197338;
        case 0x19733cu: goto label_19733c;
        case 0x197340u: goto label_197340;
        case 0x197344u: goto label_197344;
        case 0x197348u: goto label_197348;
        case 0x19734cu: goto label_19734c;
        case 0x197350u: goto label_197350;
        case 0x197354u: goto label_197354;
        case 0x197358u: goto label_197358;
        case 0x19735cu: goto label_19735c;
        case 0x197360u: goto label_197360;
        case 0x197364u: goto label_197364;
        case 0x197368u: goto label_197368;
        case 0x19736cu: goto label_19736c;
        case 0x197370u: goto label_197370;
        case 0x197374u: goto label_197374;
        case 0x197378u: goto label_197378;
        case 0x19737cu: goto label_19737c;
        case 0x197380u: goto label_197380;
        case 0x197384u: goto label_197384;
        case 0x197388u: goto label_197388;
        case 0x19738cu: goto label_19738c;
        case 0x197390u: goto label_197390;
        case 0x197394u: goto label_197394;
        case 0x197398u: goto label_197398;
        case 0x19739cu: goto label_19739c;
        case 0x1973a0u: goto label_1973a0;
        case 0x1973a4u: goto label_1973a4;
        case 0x1973a8u: goto label_1973a8;
        case 0x1973acu: goto label_1973ac;
        case 0x1973b0u: goto label_1973b0;
        case 0x1973b4u: goto label_1973b4;
        case 0x1973b8u: goto label_1973b8;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973c0u: goto label_1973c0;
        case 0x1973c4u: goto label_1973c4;
        case 0x1973c8u: goto label_1973c8;
        case 0x1973ccu: goto label_1973cc;
        case 0x1973d0u: goto label_1973d0;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973d8u: goto label_1973d8;
        case 0x1973dcu: goto label_1973dc;
        case 0x1973e0u: goto label_1973e0;
        case 0x1973e4u: goto label_1973e4;
        case 0x1973e8u: goto label_1973e8;
        case 0x1973ecu: goto label_1973ec;
        case 0x1973f0u: goto label_1973f0;
        case 0x1973f4u: goto label_1973f4;
        case 0x1973f8u: goto label_1973f8;
        case 0x1973fcu: goto label_1973fc;
        case 0x197400u: goto label_197400;
        case 0x197404u: goto label_197404;
        case 0x197408u: goto label_197408;
        case 0x19740cu: goto label_19740c;
        case 0x197410u: goto label_197410;
        case 0x197414u: goto label_197414;
        case 0x197418u: goto label_197418;
        case 0x19741cu: goto label_19741c;
        case 0x197420u: goto label_197420;
        case 0x197424u: goto label_197424;
        case 0x197428u: goto label_197428;
        case 0x19742cu: goto label_19742c;
        case 0x197430u: goto label_197430;
        case 0x197434u: goto label_197434;
        case 0x197438u: goto label_197438;
        case 0x19743cu: goto label_19743c;
        case 0x197440u: goto label_197440;
        case 0x197444u: goto label_197444;
        case 0x197448u: goto label_197448;
        case 0x19744cu: goto label_19744c;
        case 0x197450u: goto label_197450;
        case 0x197454u: goto label_197454;
        case 0x197458u: goto label_197458;
        case 0x19745cu: goto label_19745c;
        case 0x197460u: goto label_197460;
        case 0x197464u: goto label_197464;
        case 0x197468u: goto label_197468;
        case 0x19746cu: goto label_19746c;
        case 0x197470u: goto label_197470;
        case 0x197474u: goto label_197474;
        case 0x197478u: goto label_197478;
        case 0x19747cu: goto label_19747c;
        case 0x197480u: goto label_197480;
        case 0x197484u: goto label_197484;
        case 0x197488u: goto label_197488;
        case 0x19748cu: goto label_19748c;
        case 0x197490u: goto label_197490;
        case 0x197494u: goto label_197494;
        case 0x197498u: goto label_197498;
        case 0x19749cu: goto label_19749c;
        case 0x1974a0u: goto label_1974a0;
        case 0x1974a4u: goto label_1974a4;
        case 0x1974a8u: goto label_1974a8;
        case 0x1974acu: goto label_1974ac;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974b8u: goto label_1974b8;
        case 0x1974bcu: goto label_1974bc;
        case 0x1974c0u: goto label_1974c0;
        case 0x1974c4u: goto label_1974c4;
        case 0x1974c8u: goto label_1974c8;
        case 0x1974ccu: goto label_1974cc;
        case 0x1974d0u: goto label_1974d0;
        case 0x1974d4u: goto label_1974d4;
        case 0x1974d8u: goto label_1974d8;
        case 0x1974dcu: goto label_1974dc;
        case 0x1974e0u: goto label_1974e0;
        case 0x1974e4u: goto label_1974e4;
        case 0x1974e8u: goto label_1974e8;
        case 0x1974ecu: goto label_1974ec;
        case 0x1974f0u: goto label_1974f0;
        case 0x1974f4u: goto label_1974f4;
        case 0x1974f8u: goto label_1974f8;
        case 0x1974fcu: goto label_1974fc;
        case 0x197500u: goto label_197500;
        case 0x197504u: goto label_197504;
        case 0x197508u: goto label_197508;
        case 0x19750cu: goto label_19750c;
        case 0x197510u: goto label_197510;
        case 0x197514u: goto label_197514;
        case 0x197518u: goto label_197518;
        case 0x19751cu: goto label_19751c;
        case 0x197520u: goto label_197520;
        case 0x197524u: goto label_197524;
        case 0x197528u: goto label_197528;
        case 0x19752cu: goto label_19752c;
        case 0x197530u: goto label_197530;
        case 0x197534u: goto label_197534;
        case 0x197538u: goto label_197538;
        case 0x19753cu: goto label_19753c;
        case 0x197540u: goto label_197540;
        case 0x197544u: goto label_197544;
        case 0x197548u: goto label_197548;
        case 0x19754cu: goto label_19754c;
        case 0x197550u: goto label_197550;
        case 0x197554u: goto label_197554;
        case 0x197558u: goto label_197558;
        case 0x19755cu: goto label_19755c;
        case 0x197560u: goto label_197560;
        case 0x197564u: goto label_197564;
        case 0x197568u: goto label_197568;
        case 0x19756cu: goto label_19756c;
        case 0x197570u: goto label_197570;
        case 0x197574u: goto label_197574;
        case 0x197578u: goto label_197578;
        case 0x19757cu: goto label_19757c;
        case 0x197580u: goto label_197580;
        case 0x197584u: goto label_197584;
        case 0x197588u: goto label_197588;
        case 0x19758cu: goto label_19758c;
        case 0x197590u: goto label_197590;
        case 0x197594u: goto label_197594;
        case 0x197598u: goto label_197598;
        case 0x19759cu: goto label_19759c;
        case 0x1975a0u: goto label_1975a0;
        case 0x1975a4u: goto label_1975a4;
        case 0x1975a8u: goto label_1975a8;
        case 0x1975acu: goto label_1975ac;
        case 0x1975b0u: goto label_1975b0;
        case 0x1975b4u: goto label_1975b4;
        case 0x1975b8u: goto label_1975b8;
        case 0x1975bcu: goto label_1975bc;
        case 0x1975c0u: goto label_1975c0;
        case 0x1975c4u: goto label_1975c4;
        case 0x1975c8u: goto label_1975c8;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975d0u: goto label_1975d0;
        case 0x1975d4u: goto label_1975d4;
        case 0x1975d8u: goto label_1975d8;
        case 0x1975dcu: goto label_1975dc;
        case 0x1975e0u: goto label_1975e0;
        case 0x1975e4u: goto label_1975e4;
        case 0x1975e8u: goto label_1975e8;
        case 0x1975ecu: goto label_1975ec;
        case 0x1975f0u: goto label_1975f0;
        case 0x1975f4u: goto label_1975f4;
        case 0x1975f8u: goto label_1975f8;
        case 0x1975fcu: goto label_1975fc;
        case 0x197600u: goto label_197600;
        case 0x197604u: goto label_197604;
        case 0x197608u: goto label_197608;
        case 0x19760cu: goto label_19760c;
        case 0x197610u: goto label_197610;
        case 0x197614u: goto label_197614;
        case 0x197618u: goto label_197618;
        case 0x19761cu: goto label_19761c;
        case 0x197620u: goto label_197620;
        case 0x197624u: goto label_197624;
        case 0x197628u: goto label_197628;
        case 0x19762cu: goto label_19762c;
        case 0x197630u: goto label_197630;
        case 0x197634u: goto label_197634;
        case 0x197638u: goto label_197638;
        case 0x19763cu: goto label_19763c;
        case 0x197640u: goto label_197640;
        case 0x197644u: goto label_197644;
        case 0x197648u: goto label_197648;
        case 0x19764cu: goto label_19764c;
        case 0x197650u: goto label_197650;
        case 0x197654u: goto label_197654;
        case 0x197658u: goto label_197658;
        case 0x19765cu: goto label_19765c;
        case 0x197660u: goto label_197660;
        case 0x197664u: goto label_197664;
        case 0x197668u: goto label_197668;
        case 0x19766cu: goto label_19766c;
        case 0x197670u: goto label_197670;
        case 0x197674u: goto label_197674;
        case 0x197678u: goto label_197678;
        case 0x19767cu: goto label_19767c;
        case 0x197680u: goto label_197680;
        case 0x197684u: goto label_197684;
        case 0x197688u: goto label_197688;
        case 0x19768cu: goto label_19768c;
        case 0x197690u: goto label_197690;
        case 0x197694u: goto label_197694;
        case 0x197698u: goto label_197698;
        case 0x19769cu: goto label_19769c;
        case 0x1976a0u: goto label_1976a0;
        case 0x1976a4u: goto label_1976a4;
        case 0x1976a8u: goto label_1976a8;
        case 0x1976acu: goto label_1976ac;
        case 0x1976b0u: goto label_1976b0;
        case 0x1976b4u: goto label_1976b4;
        case 0x1976b8u: goto label_1976b8;
        case 0x1976bcu: goto label_1976bc;
        case 0x1976c0u: goto label_1976c0;
        case 0x1976c4u: goto label_1976c4;
        case 0x1976c8u: goto label_1976c8;
        case 0x1976ccu: goto label_1976cc;
        case 0x1976d0u: goto label_1976d0;
        case 0x1976d4u: goto label_1976d4;
        case 0x1976d8u: goto label_1976d8;
        case 0x1976dcu: goto label_1976dc;
        case 0x1976e0u: goto label_1976e0;
        case 0x1976e4u: goto label_1976e4;
        default: break;
    }

    ctx->pc = 0x1972b0u;

label_1972b0:
    // 0x1972b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1972b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1972b4:
    // 0x1972b4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1972b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1972b8:
    // 0x1972b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1972b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1972bc:
    // 0x1972bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1972bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1972c0:
    // 0x1972c0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1972c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1972c4:
    // 0x1972c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1972c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1972c8:
    // 0x1972c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1972c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1972cc:
    // 0x1972cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1972ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1972d0:
    // 0x1972d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1972d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1972d4:
    // 0x1972d4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1972d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1972d8:
    // 0x1972d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1972d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1972dc:
    // 0x1972dc: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x1972dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_1972e0:
    // 0x1972e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1972e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1972e4:
    // 0x1972e4: 0x128200f3  beq         $s4, $v0, . + 4 + (0xF3 << 2)
label_1972e8:
    if (ctx->pc == 0x1972E8u) {
        ctx->pc = 0x1972E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E4u;
        // 0x1972e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972ECu;
        goto label_1972ec;
    }
    ctx->pc = 0x1972E4u;
    {
        const bool branch_taken_0x1972e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1972E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E4u;
        // 0x1972e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e4) {
            ctx->pc = 0x1976B4u;
            goto label_1976b4;
        }
    }
    ctx->pc = 0x1972ECu;
label_1972ec:
    // 0x1972ec: 0x128000e5  beqz        $s4, . + 4 + (0xE5 << 2)
label_1972f0:
    if (ctx->pc == 0x1972F0u) {
        ctx->pc = 0x1972F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ECu;
        // 0x1972f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972F4u;
        goto label_1972f4;
    }
    ctx->pc = 0x1972ECu;
    {
        const bool branch_taken_0x1972ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ECu;
        // 0x1972f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972ec) {
            ctx->pc = 0x197684u;
            goto label_197684;
        }
    }
    ctx->pc = 0x1972F4u;
label_1972f4:
    // 0x1972f4: 0xc065dba  jal         func_1976E8
label_1972f8:
    if (ctx->pc == 0x1972F8u) {
        ctx->pc = 0x1972F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972F4u;
        // 0x1972f8: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972FCu;
        goto label_1972fc;
    }
    ctx->pc = 0x1972F4u;
    SET_GPR_U32(ctx, 31, 0x1972FCu);
    ctx->pc = 0x1972F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972F4u;
    // 0x1972f8: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1976E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1976E8u, 0x1972F4u, 0x1972FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972FCu;
label_1972fc:
    // 0x1972fc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1972fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_197300:
    // 0x197300: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_197304:
    // 0x197304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197308:
    // 0x197308: 0xc061f4a  jal         func_187D28
label_19730c:
    if (ctx->pc == 0x19730Cu) {
        ctx->pc = 0x19730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197308u;
        // 0x19730c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197310u;
        goto label_197310;
    }
    ctx->pc = 0x197308u;
    SET_GPR_U32(ctx, 31, 0x197310u);
    ctx->pc = 0x19730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197308u;
    // 0x19730c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x197308u, 0x197310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_197314:
    if (ctx->pc == 0x197314u) {
        ctx->pc = 0x197314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197310u;
        // 0x197314: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197318u;
        goto label_197318;
    }
    ctx->pc = 0x197310u;
    {
        const bool branch_taken_0x197310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197310u;
        // 0x197314: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197310) {
            ctx->pc = 0x197320u;
            goto label_197320;
        }
    }
    ctx->pc = 0x197318u;
label_197318:
    // 0x197318: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_19731c:
    if (ctx->pc == 0x19731Cu) {
        ctx->pc = 0x19731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197318u;
        // 0x19731c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197320u;
        goto label_197320;
    }
    ctx->pc = 0x197318u;
    {
        const bool branch_taken_0x197318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197318u;
        // 0x19731c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197318) {
            ctx->pc = 0x1976B4u;
            goto label_1976b4;
        }
    }
    ctx->pc = 0x197320u;
label_197320:
    // 0x197320: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_197324:
    // 0x197324: 0xc060794  jal         func_181E50
label_197328:
    if (ctx->pc == 0x197328u) {
        ctx->pc = 0x197328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197324u;
        // 0x197328: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19732Cu;
        goto label_19732c;
    }
    ctx->pc = 0x197324u;
    SET_GPR_U32(ctx, 31, 0x19732Cu);
    ctx->pc = 0x197328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197324u;
    // 0x197328: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E50u, 0x197324u, 0x19732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19732Cu;
label_19732c:
    // 0x19732c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x19732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_197330:
    // 0x197330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197334:
    // 0x197334: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x197334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_197338:
    // 0x197338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19733c:
    // 0x19733c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19733cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197340:
    // 0x197340: 0xc0607ec  jal         func_181FB0
label_197344:
    if (ctx->pc == 0x197344u) {
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197340u;
        // 0x197344: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197348u;
        goto label_197348;
    }
    ctx->pc = 0x197340u;
    SET_GPR_U32(ctx, 31, 0x197348u);
    ctx->pc = 0x197344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197340u;
    // 0x197344: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181FB0u, 0x197340u, 0x197348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197348u;
label_197348:
    // 0x197348: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x197348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_19734c:
    // 0x19734c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19734cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197350:
    // 0x197350: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_197354:
    // 0x197354: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_197358:
    // 0x197358: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19735c:
    // 0x19735c: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x19735cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_197360:
    // 0x197360: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_197364:
    // 0x197364: 0xc061e6e  jal         func_1879B8
label_197368:
    if (ctx->pc == 0x197368u) {
        ctx->pc = 0x197368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197364u;
        // 0x197368: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19736Cu;
        goto label_19736c;
    }
    ctx->pc = 0x197364u;
    SET_GPR_U32(ctx, 31, 0x19736Cu);
    ctx->pc = 0x197368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197364u;
    // 0x197368: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x197364u, 0x19736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19736Cu;
label_19736c:
    // 0x19736c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_197370:
    // 0x197370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197374:
    // 0x197374: 0x60f809  jalr        $v1
label_197378:
    if (ctx->pc == 0x197378u) {
        ctx->pc = 0x197378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197374u;
        // 0x197378: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19737Cu;
        goto label_19737c;
    }
    ctx->pc = 0x197374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19737Cu);
        ctx->pc = 0x197378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197374u;
        // 0x197378: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197374u, 0x19737Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19737Cu;
label_19737c:
    // 0x19737c: 0xc060ac8  jal         func_182B20
label_197380:
    if (ctx->pc == 0x197380u) {
        ctx->pc = 0x197380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19737Cu;
        // 0x197380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197384u;
        goto label_197384;
    }
    ctx->pc = 0x19737Cu;
    SET_GPR_U32(ctx, 31, 0x197384u);
    ctx->pc = 0x197380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19737Cu;
    // 0x197380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x19737Cu, 0x197384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197384u;
label_197384:
    // 0x197384: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x197384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_197388:
    // 0x197388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19738c:
    // 0x19738c: 0xc113ad6  jal         func_44EB58
label_197390:
    if (ctx->pc == 0x197390u) {
        ctx->pc = 0x197390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19738Cu;
        // 0x197390: 0x8e650028  lw          $a1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197394u;
        goto label_197394;
    }
    ctx->pc = 0x19738Cu;
    SET_GPR_U32(ctx, 31, 0x197394u);
    ctx->pc = 0x197390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19738Cu;
    // 0x197390: 0x8e650028  lw          $a1, 0x28($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EB58u, 0x19738Cu, 0x197394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197394u;
label_197394:
    // 0x197394: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x197394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_197398:
    // 0x197398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19739c:
    // 0x19739c: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x19739cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1973a0:
    // 0x1973a0: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_1973a4:
    // 0x1973a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1973a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1973a8:
    // 0x1973a8: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_1973ac:
    // 0x1973ac: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1973acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1973b0:
    // 0x1973b0: 0xc061e6e  jal         func_1879B8
label_1973b4:
    if (ctx->pc == 0x1973B4u) {
        ctx->pc = 0x1973B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973B0u;
        // 0x1973b4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973B8u;
        goto label_1973b8;
    }
    ctx->pc = 0x1973B0u;
    SET_GPR_U32(ctx, 31, 0x1973B8u);
    ctx->pc = 0x1973B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973B0u;
    // 0x1973b4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1973B0u, 0x1973B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973B8u;
label_1973b8:
    // 0x1973b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1973b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1973bc:
    // 0x1973bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1973bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1973c0:
    // 0x1973c0: 0x60f809  jalr        $v1
label_1973c4:
    if (ctx->pc == 0x1973C4u) {
        ctx->pc = 0x1973C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973C0u;
        // 0x1973c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973C8u;
        goto label_1973c8;
    }
    ctx->pc = 0x1973C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1973C8u);
        ctx->pc = 0x1973C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973C0u;
        // 0x1973c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1973C0u, 0x1973C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1973C8u;
label_1973c8:
    // 0x1973c8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1973cc:
    // 0x1973cc: 0xc11a830  jal         func_46A0C0
label_1973d0:
    if (ctx->pc == 0x1973D0u) {
        ctx->pc = 0x1973D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973CCu;
        // 0x1973d0: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973D4u;
        goto label_1973d4;
    }
    ctx->pc = 0x1973CCu;
    SET_GPR_U32(ctx, 31, 0x1973D4u);
    ctx->pc = 0x1973D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973CCu;
    // 0x1973d0: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x1973CCu, 0x1973D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973D4u;
label_1973d4:
    // 0x1973d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1973d8:
    // 0x1973d8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_1973dc:
    // 0x1973dc: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
label_1973e0:
    // 0x1973e0: 0x8e026b08  lw          $v0, 0x6B08($s0)
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27400)));
label_1973e4:
    // 0x1973e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1973e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1973e8:
    // 0x1973e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1973ec:
    // 0x1973ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1973f0:
    // 0x1973f0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1973f4:
    // 0x1973f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1973f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1973f8:
    // 0x1973f8: 0xc060ac8  jal         func_182B20
label_1973fc:
    if (ctx->pc == 0x1973FCu) {
        ctx->pc = 0x1973FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973F8u;
        // 0x1973fc: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197400u;
        goto label_197400;
    }
    ctx->pc = 0x1973F8u;
    SET_GPR_U32(ctx, 31, 0x197400u);
    ctx->pc = 0x1973FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973F8u;
    // 0x1973fc: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x1973F8u, 0x197400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197400u;
label_197400:
    // 0x197400: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197404:
    // 0x197404: 0x8e066b08  lw          $a2, 0x6B08($s0)
    ctx->pc = 0x197404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27400)));
label_197408:
    // 0x197408: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19740c:
    // 0x19740c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_197410:
    // 0x197410: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x197410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_197414:
    // 0x197414: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197418:
    // 0x197418: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x197418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19741c:
    // 0x19741c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_197420:
    // 0x197420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197424:
    // 0x197424: 0xac7100b4  sw          $s1, 0xB4($v1)
    ctx->pc = 0x197424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 17));
label_197428:
    // 0x197428: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x197428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_19742c:
    // 0x19742c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x19742cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_197430:
    // 0x197430: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_197434:
    // 0x197434: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x197434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_197438:
    // 0x197438: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19743c:
    // 0x19743c: 0xac4500ac  sw          $a1, 0xAC($v0)
    ctx->pc = 0x19743cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 5));
label_197440:
    // 0x197440: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197444:
    // 0x197444: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_197448:
    // 0x197448: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19744c:
    // 0x19744c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_197450:
    // 0x197450: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x197450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
label_197454:
    // 0x197454: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197458:
    // 0x197458: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19745c:
    // 0x19745c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197460:
    // 0x197460: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_197464:
    // 0x197464: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x197464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_197468:
    // 0x197468: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x197468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_19746c:
    // 0x19746c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197470:
    // 0x197470: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_197474:
    // 0x197474: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_197478:
    // 0x197478: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19747c:
    // 0x19747c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19747cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_197480:
    // 0x197480: 0xc11b404  jal         func_46D010
label_197484:
    if (ctx->pc == 0x197484u) {
        ctx->pc = 0x197484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197480u;
        // 0x197484: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197488u;
        goto label_197488;
    }
    ctx->pc = 0x197480u;
    SET_GPR_U32(ctx, 31, 0x197488u);
    ctx->pc = 0x197484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197480u;
    // 0x197484: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x197480u, 0x197488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197488u;
label_197488:
    // 0x197488: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x197488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_19748c:
    // 0x19748c: 0x24673610  addiu       $a3, $v1, 0x3610
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13840));
label_197490:
    // 0x197490: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x197490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_197494:
    // 0x197494: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x197494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_197498:
    // 0x197498: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x197498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19749c:
    // 0x19749c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1974a0:
    // 0x1974a0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1974a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974a4:
    // 0x1974a4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1974a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974a8:
    // 0x1974a8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1974a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974ac:
    // 0x1974ac: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1974acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974b0:
    // 0x1974b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1974b4:
    // 0x1974b4: 0x24863620  addiu       $a2, $a0, 0x3620
    ctx->pc = 0x1974b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
label_1974b8:
    // 0x1974b8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1974b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1974bc:
    // 0x1974bc: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1974bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1974c0:
    // 0x1974c0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1974c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974c4:
    // 0x1974c4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1974c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1974c8:
    // 0x1974c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1974cc:
    // 0x1974cc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x1974ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_1974d0:
    // 0x1974d0: 0x8e056b08  lw          $a1, 0x6B08($s0)
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27400)));
label_1974d4:
    // 0x1974d4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x1974d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1974d8:
    // 0x1974d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1974dc:
    // 0x1974dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1974e0:
    // 0x1974e0: 0x7c6400e0  sq          $a0, 0xE0($v1)
    ctx->pc = 0x1974e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), GPR_VEC(ctx, 4));
label_1974e4:
    // 0x1974e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1974e8:
    // 0x1974e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1974ec:
    // 0x1974ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1974ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1974f0:
    // 0x1974f0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1974f4:
    // 0x1974f4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1974f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1974f8:
    // 0x1974f8: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x1974f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_1974fc:
    // 0x1974fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1974fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197500:
    // 0x197500: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_197504:
    // 0x197504: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197508:
    // 0x197508: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x197508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_19750c:
    // 0x19750c: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x19750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_197510:
    // 0x197510: 0xb06700c7  sdl         $a3, 0xC7($v1)
    ctx->pc = 0x197510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_197514:
    // 0x197514: 0xb46700c0  sdr         $a3, 0xC0($v1)
    ctx->pc = 0x197514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197518:
    // 0x197518: 0x8e056b08  lw          $a1, 0x6B08($s0)
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27400)));
label_19751c:
    // 0x19751c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197520:
    // 0x197520: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_197524:
    // 0x197524: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197528:
    // 0x197528: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_19752c:
    // 0x19752c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x19752cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_197530:
    // 0x197530: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x197530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_197534:
    // 0x197534: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197538:
    // 0x197538: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_19753c:
    // 0x19753c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_197540:
    // 0x197540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197544:
    // 0x197544: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x197544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
label_197548:
    // 0x197548: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_19754c:
    // 0x19754c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_197550:
    // 0x197550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197554:
    // 0x197554: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_197558:
    // 0x197558: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x197558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_19755c:
    // 0x19755c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x19755cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_197560:
    // 0x197560: 0xc060aca  jal         func_182B28
label_197564:
    if (ctx->pc == 0x197564u) {
        ctx->pc = 0x197564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197560u;
        // 0x197564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197568u;
        goto label_197568;
    }
    ctx->pc = 0x197560u;
    SET_GPR_U32(ctx, 31, 0x197568u);
    ctx->pc = 0x197564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197560u;
    // 0x197564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B28u, 0x197560u, 0x197568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197568u;
label_197568:
    // 0x197568: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x197568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19756c:
    // 0x19756c: 0xc065bb8  jal         func_196EE0
label_197570:
    if (ctx->pc == 0x197570u) {
        ctx->pc = 0x197570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19756Cu;
        // 0x197570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197574u;
        goto label_197574;
    }
    ctx->pc = 0x19756Cu;
    SET_GPR_U32(ctx, 31, 0x197574u);
    ctx->pc = 0x197570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19756Cu;
    // 0x197570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196EE0u, 0x19756Cu, 0x197574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197574u;
label_197574:
    // 0x197574: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x197574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_197578:
    // 0x197578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19757c:
    // 0x19757c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197580:
    // 0x197580: 0xc10c1fa  jal         func_4307E8
label_197584:
    if (ctx->pc == 0x197584u) {
        ctx->pc = 0x197584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197580u;
        // 0x197584: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197588u;
        goto label_197588;
    }
    ctx->pc = 0x197580u;
    SET_GPR_U32(ctx, 31, 0x197588u);
    ctx->pc = 0x197584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197580u;
    // 0x197584: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x197580u, 0x197588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197588u;
label_197588:
    // 0x197588: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19758c:
    // 0x19758c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19758cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197590:
    // 0x197590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197594:
    // 0x197594: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197598:
    // 0x197598: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x197598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19759c:
    // 0x19759c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1975a0:
    // 0x1975a0: 0xc064974  jal         func_1925D0
label_1975a4:
    if (ctx->pc == 0x1975A4u) {
        ctx->pc = 0x1975A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975A0u;
        // 0x1975a4: 0xafb3002c  sw          $s3, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975A8u;
        goto label_1975a8;
    }
    ctx->pc = 0x1975A0u;
    SET_GPR_U32(ctx, 31, 0x1975A8u);
    ctx->pc = 0x1975A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975A0u;
    // 0x1975a4: 0xafb3002c  sw          $s3, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925D0u, 0x1975A0u, 0x1975A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975A8u;
label_1975a8:
    // 0x1975a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1975a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1975ac:
    // 0x1975ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1975b0:
    // 0x1975b0: 0x8c82f778  lw          $v0, -0x888($a0)
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965112)));
label_1975b4:
    // 0x1975b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1975b8:
    if (ctx->pc == 0x1975B8u) {
        ctx->pc = 0x1975B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B4u;
        // 0x1975b8: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975BCu;
        goto label_1975bc;
    }
    ctx->pc = 0x1975B4u;
    {
        const bool branch_taken_0x1975b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B4u;
        // 0x1975b8: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975b4) {
            ctx->pc = 0x1975C8u;
            goto label_1975c8;
        }
    }
    ctx->pc = 0x1975BCu;
label_1975bc:
    // 0x1975bc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1975c0:
    // 0x1975c0: 0xac82f778  sw          $v0, -0x888($a0)
    ctx->pc = 0x1975c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965112), GPR_U32(ctx, 2));
label_1975c4:
    // 0x1975c4: 0x0  nop
    ctx->pc = 0x1975c4u;
    // NOP
label_1975c8:
    // 0x1975c8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
label_1975cc:
    // 0x1975cc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_1975d0:
    // 0x1975d0: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1975d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1975d4:
    // 0x1975d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1975d8:
    // 0x1975d8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1975dc:
    // 0x1975dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1975e0:
    if (ctx->pc == 0x1975E0u) {
        ctx->pc = 0x1975E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975DCu;
        // 0x1975e0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E4u;
        goto label_1975e4;
    }
    ctx->pc = 0x1975DCu;
    {
        const bool branch_taken_0x1975dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975DCu;
        // 0x1975e0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975dc) {
            ctx->pc = 0x1975F0u;
            goto label_1975f0;
        }
    }
    ctx->pc = 0x1975E4u;
label_1975e4:
    // 0x1975e4: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
label_1975e8:
    // 0x1975e8: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1975e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1975ec:
    // 0x1975ec: 0x0  nop
    ctx->pc = 0x1975ecu;
    // NOP
label_1975f0:
    // 0x1975f0: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_1975f4:
    // 0x1975f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1975f8:
    if (ctx->pc == 0x1975F8u) {
        ctx->pc = 0x1975F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975F4u;
        // 0x1975f8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975FCu;
        goto label_1975fc;
    }
    ctx->pc = 0x1975F4u;
    {
        const bool branch_taken_0x1975f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975F4u;
        // 0x1975f8: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975f4) {
            ctx->pc = 0x197630u;
            goto label_197630;
        }
    }
    ctx->pc = 0x1975FCu;
label_1975fc:
    // 0x1975fc: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
label_197600:
    if (ctx->pc == 0x197600u) {
        ctx->pc = 0x197600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975FCu;
        // 0x197600: 0x8ec2cd4c  lw          $v0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197604u;
        goto label_197604;
    }
    ctx->pc = 0x1975FCu;
    {
        const bool branch_taken_0x1975fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x197600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975FCu;
        // 0x197600: 0x8ec2cd4c  lw          $v0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975fc) {
            ctx->pc = 0x197618u;
            goto label_197618;
        }
    }
    ctx->pc = 0x197604u;
label_197604:
    // 0x197604: 0x8ea2cd4c  lw          $v0, -0x32B4($s5)
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_197608:
    // 0x197608: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x197608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19760c:
    // 0x19760c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197610:
    // 0x197610: 0x10000004  b           . + 4 + (0x4 << 2)
label_197614:
    if (ctx->pc == 0x197614u) {
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197618u;
        goto label_197618;
    }
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197610) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197618u;
label_197618:
    // 0x197618: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x197618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19761c:
    // 0x19761c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197620:
    // 0x197620: 0x8c441034  lw          $a0, 0x1034($v0)
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4148)));
label_197624:
    // 0x197624: 0xc11cb60  jal         func_472D80
label_197628:
    if (ctx->pc == 0x197628u) {
        ctx->pc = 0x197628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197624u;
        // 0x197628: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19762Cu;
        goto label_19762c;
    }
    ctx->pc = 0x197624u;
    SET_GPR_U32(ctx, 31, 0x19762Cu);
    ctx->pc = 0x197628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197624u;
    // 0x197628: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D80u, 0x197624u, 0x19762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19762Cu;
label_19762c:
    // 0x19762c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_197630:
    // 0x197630: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x197630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197634:
    // 0x197634: 0xc065bd2  jal         func_196F48
label_197638:
    if (ctx->pc == 0x197638u) {
        ctx->pc = 0x197638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197634u;
        // 0x197638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19763Cu;
        goto label_19763c;
    }
    ctx->pc = 0x197634u;
    SET_GPR_U32(ctx, 31, 0x19763Cu);
    ctx->pc = 0x197638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197634u;
    // 0x197638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F48u, 0x197634u, 0x19763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19763Cu;
label_19763c:
    // 0x19763c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197640:
    // 0x197640: 0xc065be4  jal         func_196F90
label_197644:
    if (ctx->pc == 0x197644u) {
        ctx->pc = 0x197644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197640u;
        // 0x197644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197648u;
        goto label_197648;
    }
    ctx->pc = 0x197640u;
    SET_GPR_U32(ctx, 31, 0x197648u);
    ctx->pc = 0x197644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197640u;
    // 0x197644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F90u, 0x197640u, 0x197648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197648u;
label_197648:
    // 0x197648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19764c:
    // 0x19764c: 0xa2740011  sb          $s4, 0x11($s3)
    ctx->pc = 0x19764cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 20));
label_197650:
    // 0x197650: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x197650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_197654:
    // 0x197654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197658:
    // 0x197658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x197658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19765c:
    // 0x19765c: 0xc065df2  jal         func_1977C8
label_197660:
    if (ctx->pc == 0x197660u) {
        ctx->pc = 0x197660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19765Cu;
        // 0x197660: 0xa2620010  sb          $v0, 0x10($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197664u;
        goto label_197664;
    }
    ctx->pc = 0x19765Cu;
    SET_GPR_U32(ctx, 31, 0x197664u);
    ctx->pc = 0x197660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19765Cu;
    // 0x197660: 0xa2620010  sb          $v0, 0x10($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1977C8u, 0x19765Cu, 0x197664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197664u;
label_197664:
    // 0x197664: 0xc060ac8  jal         func_182B20
label_197668:
    if (ctx->pc == 0x197668u) {
        ctx->pc = 0x197668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197664u;
        // 0x197668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19766Cu;
        goto label_19766c;
    }
    ctx->pc = 0x197664u;
    SET_GPR_U32(ctx, 31, 0x19766Cu);
    ctx->pc = 0x197668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197664u;
    // 0x197668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x197664u, 0x19766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19766Cu;
label_19766c:
    // 0x19766c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197670:
    // 0x197670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x197670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197674:
    // 0x197674: 0xc065e5c  jal         func_197970
label_197678:
    if (ctx->pc == 0x197678u) {
        ctx->pc = 0x197678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197674u;
        // 0x197678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19767Cu;
        goto label_19767c;
    }
    ctx->pc = 0x197674u;
    SET_GPR_U32(ctx, 31, 0x19767Cu);
    ctx->pc = 0x197678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197674u;
    // 0x197678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197970u, 0x197674u, 0x19767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19767Cu;
label_19767c:
    // 0x19767c: 0x1000000d  b           . + 4 + (0xD << 2)
label_197680:
    if (ctx->pc == 0x197680u) {
        ctx->pc = 0x197680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19767Cu;
        // 0x197680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197684u;
        goto label_197684;
    }
    ctx->pc = 0x19767Cu;
    {
        const bool branch_taken_0x19767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19767Cu;
        // 0x197680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19767c) {
            ctx->pc = 0x1976B4u;
            goto label_1976b4;
        }
    }
    ctx->pc = 0x197684u;
label_197684:
    // 0x197684: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x197684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_197688:
    // 0x197688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19768c:
    // 0x19768c: 0xa2600010  sb          $zero, 0x10($s3)
    ctx->pc = 0x19768cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 0));
label_197690:
    // 0x197690: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x197690u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_197694:
    // 0x197694: 0xa2600014  sb          $zero, 0x14($s3)
    ctx->pc = 0x197694u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 0));
label_197698:
    // 0x197698: 0xc065b58  jal         func_196D60
label_19769c:
    if (ctx->pc == 0x19769Cu) {
        ctx->pc = 0x19769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197698u;
        // 0x19769c: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976A0u;
        goto label_1976a0;
    }
    ctx->pc = 0x197698u;
    SET_GPR_U32(ctx, 31, 0x1976A0u);
    ctx->pc = 0x19769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197698u;
    // 0x19769c: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D60u, 0x197698u, 0x1976A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976A0u;
label_1976a0:
    // 0x1976a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1976a4:
    if (ctx->pc == 0x1976A4u) {
        ctx->pc = 0x1976A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A0u;
        // 0x1976a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976A8u;
        goto label_1976a8;
    }
    ctx->pc = 0x1976A0u;
    {
        const bool branch_taken_0x1976a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A0u;
        // 0x1976a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976a0) {
            ctx->pc = 0x1976B4u;
            goto label_1976b4;
        }
    }
    ctx->pc = 0x1976A8u;
label_1976a8:
    // 0x1976a8: 0xc065b64  jal         func_196D90
label_1976ac:
    if (ctx->pc == 0x1976ACu) {
        ctx->pc = 0x1976ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A8u;
        // 0x1976ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976B0u;
        goto label_1976b0;
    }
    ctx->pc = 0x1976A8u;
    SET_GPR_U32(ctx, 31, 0x1976B0u);
    ctx->pc = 0x1976ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1976A8u;
    // 0x1976ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D90u, 0x1976A8u, 0x1976B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976B0u;
label_1976b0:
    // 0x1976b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1976b4:
    // 0x1976b4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1976b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1976b8:
    // 0x1976b8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1976b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1976bc:
    // 0x1976bc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1976bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1976c0:
    // 0x1976c0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1976c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1976c4:
    // 0x1976c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1976c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1976c8:
    // 0x1976c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1976c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1976cc:
    // 0x1976cc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1976ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1976d0:
    // 0x1976d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1976d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1976d4:
    // 0x1976d4: 0x3e00008  jr          $ra
label_1976d8:
    if (ctx->pc == 0x1976D8u) {
        ctx->pc = 0x1976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D4u;
        // 0x1976d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976DCu;
        goto label_1976dc;
    }
    ctx->pc = 0x1976D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D4u;
        // 0x1976d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1976D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1976DCu;
label_1976dc:
    // 0x1976dc: 0x0  nop
    ctx->pc = 0x1976dcu;
    // NOP
label_1976e0:
    // 0x1976e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1976e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1976e4:
    // 0x1976e4: 0x0  nop
    ctx->pc = 0x1976e4u;
    // NOP
    ctx->pc = 0x1976e8u;
}
