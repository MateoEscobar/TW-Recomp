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

// Function: sub_00315228
// Address: 0x315228 - 0x315580
void sub_00315228_0x315228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315228_0x315228");
#endif

    switch (ctx->pc) {
        case 0x315228u: goto label_315228;
        case 0x31522cu: goto label_31522c;
        case 0x315230u: goto label_315230;
        case 0x315234u: goto label_315234;
        case 0x315238u: goto label_315238;
        case 0x31523cu: goto label_31523c;
        case 0x315240u: goto label_315240;
        case 0x315244u: goto label_315244;
        case 0x315248u: goto label_315248;
        case 0x31524cu: goto label_31524c;
        case 0x315250u: goto label_315250;
        case 0x315254u: goto label_315254;
        case 0x315258u: goto label_315258;
        case 0x31525cu: goto label_31525c;
        case 0x315260u: goto label_315260;
        case 0x315264u: goto label_315264;
        case 0x315268u: goto label_315268;
        case 0x31526cu: goto label_31526c;
        case 0x315270u: goto label_315270;
        case 0x315274u: goto label_315274;
        case 0x315278u: goto label_315278;
        case 0x31527cu: goto label_31527c;
        case 0x315280u: goto label_315280;
        case 0x315284u: goto label_315284;
        case 0x315288u: goto label_315288;
        case 0x31528cu: goto label_31528c;
        case 0x315290u: goto label_315290;
        case 0x315294u: goto label_315294;
        case 0x315298u: goto label_315298;
        case 0x31529cu: goto label_31529c;
        case 0x3152a0u: goto label_3152a0;
        case 0x3152a4u: goto label_3152a4;
        case 0x3152a8u: goto label_3152a8;
        case 0x3152acu: goto label_3152ac;
        case 0x3152b0u: goto label_3152b0;
        case 0x3152b4u: goto label_3152b4;
        case 0x3152b8u: goto label_3152b8;
        case 0x3152bcu: goto label_3152bc;
        case 0x3152c0u: goto label_3152c0;
        case 0x3152c4u: goto label_3152c4;
        case 0x3152c8u: goto label_3152c8;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152d4u: goto label_3152d4;
        case 0x3152d8u: goto label_3152d8;
        case 0x3152dcu: goto label_3152dc;
        case 0x3152e0u: goto label_3152e0;
        case 0x3152e4u: goto label_3152e4;
        case 0x3152e8u: goto label_3152e8;
        case 0x3152ecu: goto label_3152ec;
        case 0x3152f0u: goto label_3152f0;
        case 0x3152f4u: goto label_3152f4;
        case 0x3152f8u: goto label_3152f8;
        case 0x3152fcu: goto label_3152fc;
        case 0x315300u: goto label_315300;
        case 0x315304u: goto label_315304;
        case 0x315308u: goto label_315308;
        case 0x31530cu: goto label_31530c;
        case 0x315310u: goto label_315310;
        case 0x315314u: goto label_315314;
        case 0x315318u: goto label_315318;
        case 0x31531cu: goto label_31531c;
        case 0x315320u: goto label_315320;
        case 0x315324u: goto label_315324;
        case 0x315328u: goto label_315328;
        case 0x31532cu: goto label_31532c;
        case 0x315330u: goto label_315330;
        case 0x315334u: goto label_315334;
        case 0x315338u: goto label_315338;
        case 0x31533cu: goto label_31533c;
        case 0x315340u: goto label_315340;
        case 0x315344u: goto label_315344;
        case 0x315348u: goto label_315348;
        case 0x31534cu: goto label_31534c;
        case 0x315350u: goto label_315350;
        case 0x315354u: goto label_315354;
        case 0x315358u: goto label_315358;
        case 0x31535cu: goto label_31535c;
        case 0x315360u: goto label_315360;
        case 0x315364u: goto label_315364;
        case 0x315368u: goto label_315368;
        case 0x31536cu: goto label_31536c;
        case 0x315370u: goto label_315370;
        case 0x315374u: goto label_315374;
        case 0x315378u: goto label_315378;
        case 0x31537cu: goto label_31537c;
        case 0x315380u: goto label_315380;
        case 0x315384u: goto label_315384;
        case 0x315388u: goto label_315388;
        case 0x31538cu: goto label_31538c;
        case 0x315390u: goto label_315390;
        case 0x315394u: goto label_315394;
        case 0x315398u: goto label_315398;
        case 0x31539cu: goto label_31539c;
        case 0x3153a0u: goto label_3153a0;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153a8u: goto label_3153a8;
        case 0x3153acu: goto label_3153ac;
        case 0x3153b0u: goto label_3153b0;
        case 0x3153b4u: goto label_3153b4;
        case 0x3153b8u: goto label_3153b8;
        case 0x3153bcu: goto label_3153bc;
        case 0x3153c0u: goto label_3153c0;
        case 0x3153c4u: goto label_3153c4;
        case 0x3153c8u: goto label_3153c8;
        case 0x3153ccu: goto label_3153cc;
        case 0x3153d0u: goto label_3153d0;
        case 0x3153d4u: goto label_3153d4;
        case 0x3153d8u: goto label_3153d8;
        case 0x3153dcu: goto label_3153dc;
        case 0x3153e0u: goto label_3153e0;
        case 0x3153e4u: goto label_3153e4;
        case 0x3153e8u: goto label_3153e8;
        case 0x3153ecu: goto label_3153ec;
        case 0x3153f0u: goto label_3153f0;
        case 0x3153f4u: goto label_3153f4;
        case 0x3153f8u: goto label_3153f8;
        case 0x3153fcu: goto label_3153fc;
        case 0x315400u: goto label_315400;
        case 0x315404u: goto label_315404;
        case 0x315408u: goto label_315408;
        case 0x31540cu: goto label_31540c;
        case 0x315410u: goto label_315410;
        case 0x315414u: goto label_315414;
        case 0x315418u: goto label_315418;
        case 0x31541cu: goto label_31541c;
        case 0x315420u: goto label_315420;
        case 0x315424u: goto label_315424;
        case 0x315428u: goto label_315428;
        case 0x31542cu: goto label_31542c;
        case 0x315430u: goto label_315430;
        case 0x315434u: goto label_315434;
        case 0x315438u: goto label_315438;
        case 0x31543cu: goto label_31543c;
        case 0x315440u: goto label_315440;
        case 0x315444u: goto label_315444;
        case 0x315448u: goto label_315448;
        case 0x31544cu: goto label_31544c;
        case 0x315450u: goto label_315450;
        case 0x315454u: goto label_315454;
        case 0x315458u: goto label_315458;
        case 0x31545cu: goto label_31545c;
        case 0x315460u: goto label_315460;
        case 0x315464u: goto label_315464;
        case 0x315468u: goto label_315468;
        case 0x31546cu: goto label_31546c;
        case 0x315470u: goto label_315470;
        case 0x315474u: goto label_315474;
        case 0x315478u: goto label_315478;
        case 0x31547cu: goto label_31547c;
        case 0x315480u: goto label_315480;
        case 0x315484u: goto label_315484;
        case 0x315488u: goto label_315488;
        case 0x31548cu: goto label_31548c;
        case 0x315490u: goto label_315490;
        case 0x315494u: goto label_315494;
        case 0x315498u: goto label_315498;
        case 0x31549cu: goto label_31549c;
        case 0x3154a0u: goto label_3154a0;
        case 0x3154a4u: goto label_3154a4;
        case 0x3154a8u: goto label_3154a8;
        case 0x3154acu: goto label_3154ac;
        case 0x3154b0u: goto label_3154b0;
        case 0x3154b4u: goto label_3154b4;
        case 0x3154b8u: goto label_3154b8;
        case 0x3154bcu: goto label_3154bc;
        case 0x3154c0u: goto label_3154c0;
        case 0x3154c4u: goto label_3154c4;
        case 0x3154c8u: goto label_3154c8;
        case 0x3154ccu: goto label_3154cc;
        case 0x3154d0u: goto label_3154d0;
        case 0x3154d4u: goto label_3154d4;
        case 0x3154d8u: goto label_3154d8;
        case 0x3154dcu: goto label_3154dc;
        case 0x3154e0u: goto label_3154e0;
        case 0x3154e4u: goto label_3154e4;
        case 0x3154e8u: goto label_3154e8;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f0u: goto label_3154f0;
        case 0x3154f4u: goto label_3154f4;
        case 0x3154f8u: goto label_3154f8;
        case 0x3154fcu: goto label_3154fc;
        case 0x315500u: goto label_315500;
        case 0x315504u: goto label_315504;
        case 0x315508u: goto label_315508;
        case 0x31550cu: goto label_31550c;
        case 0x315510u: goto label_315510;
        case 0x315514u: goto label_315514;
        case 0x315518u: goto label_315518;
        case 0x31551cu: goto label_31551c;
        case 0x315520u: goto label_315520;
        case 0x315524u: goto label_315524;
        case 0x315528u: goto label_315528;
        case 0x31552cu: goto label_31552c;
        case 0x315530u: goto label_315530;
        case 0x315534u: goto label_315534;
        case 0x315538u: goto label_315538;
        case 0x31553cu: goto label_31553c;
        case 0x315540u: goto label_315540;
        case 0x315544u: goto label_315544;
        case 0x315548u: goto label_315548;
        case 0x31554cu: goto label_31554c;
        case 0x315550u: goto label_315550;
        case 0x315554u: goto label_315554;
        case 0x315558u: goto label_315558;
        case 0x31555cu: goto label_31555c;
        case 0x315560u: goto label_315560;
        case 0x315564u: goto label_315564;
        case 0x315568u: goto label_315568;
        case 0x31556cu: goto label_31556c;
        case 0x315570u: goto label_315570;
        case 0x315574u: goto label_315574;
        case 0x315578u: goto label_315578;
        case 0x31557cu: goto label_31557c;
        default: break;
    }

    ctx->pc = 0x315228u;

label_315228:
    // 0x315228: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31522c:
    // 0x31522c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_315230:
    // 0x315230: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x315230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_315234:
    // 0x315234: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x315234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_315238:
    // 0x315238: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x315238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31523c:
    // 0x31523c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_315240:
    // 0x315240: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x315240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315244:
    // 0x315244: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x315244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_315248:
    // 0x315248: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x315248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_31524c:
    // 0x31524c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_315250:
    // 0x315250: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x315250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_315254:
    // 0x315254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_315258:
    // 0x315258: 0xc08a61a  jal         func_229868
label_31525c:
    if (ctx->pc == 0x31525Cu) {
        ctx->pc = 0x31525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315258u;
        // 0x31525c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315260u;
        goto label_315260;
    }
    ctx->pc = 0x315258u;
    SET_GPR_U32(ctx, 31, 0x315260u);
    ctx->pc = 0x31525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315258u;
    // 0x31525c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x315258u, 0x315260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315260u;
label_315260:
    // 0x315260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315264:
    // 0x315264: 0x120000ba  beqz        $s0, . + 4 + (0xBA << 2)
label_315268:
    if (ctx->pc == 0x315268u) {
        ctx->pc = 0x315268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315264u;
        // 0x315268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31526Cu;
        goto label_31526c;
    }
    ctx->pc = 0x315264u;
    {
        const bool branch_taken_0x315264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315264u;
        // 0x315268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315264) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x31526Cu;
label_31526c:
    // 0x31526c: 0xc087502  jal         func_21D408
label_315270:
    if (ctx->pc == 0x315270u) {
        ctx->pc = 0x315270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31526Cu;
        // 0x315270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315274u;
        goto label_315274;
    }
    ctx->pc = 0x31526Cu;
    SET_GPR_U32(ctx, 31, 0x315274u);
    ctx->pc = 0x315270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31526Cu;
    // 0x315270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31526Cu, 0x315274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315274u;
label_315274:
    // 0x315274: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x315274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315278:
    // 0x315278: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x315278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31527c:
    // 0x31527c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_315280:
    // 0x315280: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x315280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_315284:
    // 0x315284: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
label_315288:
    if (ctx->pc == 0x315288u) {
        ctx->pc = 0x315288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315284u;
        // 0x315288: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31528Cu;
        goto label_31528c;
    }
    ctx->pc = 0x315284u;
    {
        const bool branch_taken_0x315284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315284u;
        // 0x315288: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315284) {
            ctx->pc = 0x31554Cu;
            goto label_31554c;
        }
    }
    ctx->pc = 0x31528Cu;
label_31528c:
    // 0x31528c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31528cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_315290:
    // 0x315290: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
label_315294:
    // 0x315294: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315298:
    // 0x315298: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31529c:
    // 0x31529c: 0x800008  jr          $a0
label_3152a0:
    if (ctx->pc == 0x3152A0u) {
        ctx->pc = 0x3152A4u;
        goto label_3152a4;
    }
    ctx->pc = 0x31529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3152A4u: goto label_3152a4;
            case 0x3152C8u: goto label_3152c8;
            case 0x3152E0u: goto label_3152e0;
            case 0x3152F8u: goto label_3152f8;
            case 0x31533Cu: goto label_31533c;
            case 0x31535Cu: goto label_31535c;
            case 0x31554Cu: goto label_31554c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31529Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3152A4u;
label_3152a4:
    // 0x3152a4: 0x8cc3020c  lw          $v1, 0x20C($a2)
    ctx->pc = 0x3152a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_3152a8:
    // 0x3152a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3152ac:
    // 0x3152ac: 0x146200a8  bne         $v1, $v0, . + 4 + (0xA8 << 2)
label_3152b0:
    if (ctx->pc == 0x3152B0u) {
        ctx->pc = 0x3152B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152ACu;
        // 0x3152b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152B4u;
        goto label_3152b4;
    }
    ctx->pc = 0x3152ACu;
    {
        const bool branch_taken_0x3152ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3152B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152ACu;
        // 0x3152b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152ac) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x3152B4u;
label_3152b4:
    // 0x3152b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3152b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3152b8:
    // 0x3152b8: 0xc0c52d4  jal         func_314B50
label_3152bc:
    if (ctx->pc == 0x3152BCu) {
        ctx->pc = 0x3152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152B8u;
        // 0x3152bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152C0u;
        goto label_3152c0;
    }
    ctx->pc = 0x3152B8u;
    SET_GPR_U32(ctx, 31, 0x3152C0u);
    ctx->pc = 0x3152BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152B8u;
    // 0x3152bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314B50u, 0x3152B8u, 0x3152C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152C0u;
label_3152c0:
    // 0x3152c0: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3152c4:
    if (ctx->pc == 0x3152C4u) {
        ctx->pc = 0x3152C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152C0u;
        // 0x3152c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152C8u;
        goto label_3152c8;
    }
    ctx->pc = 0x3152C0u;
    {
        const bool branch_taken_0x3152c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152C0u;
        // 0x3152c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152c0) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x3152C8u;
label_3152c8:
    // 0x3152c8: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x3152c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_3152cc:
    // 0x3152cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3152ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3152d0:
    // 0x3152d0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_3152d4:
    if (ctx->pc == 0x3152D4u) {
        ctx->pc = 0x3152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D0u;
        // 0x3152d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152D8u;
        goto label_3152d8;
    }
    ctx->pc = 0x3152D0u;
    {
        const bool branch_taken_0x3152d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D0u;
        // 0x3152d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152d0) {
            ctx->pc = 0x315324u;
            goto label_315324;
        }
    }
    ctx->pc = 0x3152D8u;
label_3152d8:
    // 0x3152d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3152dc:
    if (ctx->pc == 0x3152DCu) {
        ctx->pc = 0x3152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D8u;
        // 0x3152dc: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152E0u;
        goto label_3152e0;
    }
    ctx->pc = 0x3152D8u;
    {
        const bool branch_taken_0x3152d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152D8u;
        // 0x3152dc: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152d8) {
            ctx->pc = 0x315344u;
            goto label_315344;
        }
    }
    ctx->pc = 0x3152E0u;
label_3152e0:
    // 0x3152e0: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x3152e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_3152e4:
    // 0x3152e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3152e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3152e8:
    // 0x3152e8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_3152ec:
    if (ctx->pc == 0x3152ECu) {
        ctx->pc = 0x3152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152E8u;
        // 0x3152ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152F0u;
        goto label_3152f0;
    }
    ctx->pc = 0x3152E8u;
    {
        const bool branch_taken_0x3152e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152E8u;
        // 0x3152ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152e8) {
            ctx->pc = 0x315324u;
            goto label_315324;
        }
    }
    ctx->pc = 0x3152F0u;
label_3152f0:
    // 0x3152f0: 0x10000014  b           . + 4 + (0x14 << 2)
label_3152f4:
    if (ctx->pc == 0x3152F4u) {
        ctx->pc = 0x3152F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152F0u;
        // 0x3152f4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152F8u;
        goto label_3152f8;
    }
    ctx->pc = 0x3152F0u;
    {
        const bool branch_taken_0x3152f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152F0u;
        // 0x3152f4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152f0) {
            ctx->pc = 0x315344u;
            goto label_315344;
        }
    }
    ctx->pc = 0x3152F8u;
label_3152f8:
    // 0x3152f8: 0x8cc3020c  lw          $v1, 0x20C($a2)
    ctx->pc = 0x3152f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_3152fc:
    // 0x3152fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3152fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_315300:
    // 0x315300: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
label_315304:
    if (ctx->pc == 0x315304u) {
        ctx->pc = 0x315304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315300u;
        // 0x315304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315308u;
        goto label_315308;
    }
    ctx->pc = 0x315300u;
    {
        const bool branch_taken_0x315300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315300u;
        // 0x315304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315300) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x315308u;
label_315308:
    // 0x315308: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x315308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31530c:
    // 0x31530c: 0xc0a3032  jal         func_28C0C8
label_315310:
    if (ctx->pc == 0x315310u) {
        ctx->pc = 0x315310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31530Cu;
        // 0x315310: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315314u;
        goto label_315314;
    }
    ctx->pc = 0x31530Cu;
    SET_GPR_U32(ctx, 31, 0x315314u);
    ctx->pc = 0x315310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31530Cu;
    // 0x315310: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31530Cu, 0x315314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315314u;
label_315314:
    // 0x315314: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x315314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_315318:
    // 0x315318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31531c:
    // 0x31531c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_315320:
    if (ctx->pc == 0x315320u) {
        ctx->pc = 0x315320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31531Cu;
        // 0x315320: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315324u;
        goto label_315324;
    }
    ctx->pc = 0x31531Cu;
    {
        const bool branch_taken_0x31531c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31531c) {
            ctx->pc = 0x315320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31531Cu;
            // 0x315320: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315334u;
            goto label_315334;
        }
    }
    ctx->pc = 0x315324u;
label_315324:
    // 0x315324: 0xc0c53ee  jal         func_314FB8
label_315328:
    if (ctx->pc == 0x315328u) {
        ctx->pc = 0x315328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315324u;
        // 0x315328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31532Cu;
        goto label_31532c;
    }
    ctx->pc = 0x315324u;
    SET_GPR_U32(ctx, 31, 0x31532Cu);
    ctx->pc = 0x315328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315324u;
    // 0x315328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314FB8u, 0x315324u, 0x31532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31532Cu;
label_31532c:
    // 0x31532c: 0x10000088  b           . + 4 + (0x88 << 2)
label_315330:
    if (ctx->pc == 0x315330u) {
        ctx->pc = 0x315330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31532Cu;
        // 0x315330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315334u;
        goto label_315334;
    }
    ctx->pc = 0x31532Cu;
    {
        const bool branch_taken_0x31532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31532Cu;
        // 0x315330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31532c) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x315334u;
label_315334:
    // 0x315334: 0x10000003  b           . + 4 + (0x3 << 2)
label_315338:
    if (ctx->pc == 0x315338u) {
        ctx->pc = 0x315338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315334u;
        // 0x315338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31533Cu;
        goto label_31533c;
    }
    ctx->pc = 0x315334u;
    {
        const bool branch_taken_0x315334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315334u;
        // 0x315338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315334) {
            ctx->pc = 0x315344u;
            goto label_315344;
        }
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x31533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_315340:
    // 0x315340: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x315340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_315344:
    // 0x315344: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x315344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_315348:
    // 0x315348: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x315348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31534c:
    // 0x31534c: 0x60f809  jalr        $v1
label_315350:
    if (ctx->pc == 0x315350u) {
        ctx->pc = 0x315350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31534Cu;
        // 0x315350: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315354u;
        goto label_315354;
    }
    ctx->pc = 0x31534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x315354u);
        ctx->pc = 0x315350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31534Cu;
        // 0x315350: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31534Cu, 0x315354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315354u;
label_315354:
    // 0x315354: 0x1000007e  b           . + 4 + (0x7E << 2)
label_315358:
    if (ctx->pc == 0x315358u) {
        ctx->pc = 0x315358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315354u;
        // 0x315358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31535Cu;
        goto label_31535c;
    }
    ctx->pc = 0x315354u;
    {
        const bool branch_taken_0x315354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315354u;
        // 0x315358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315354) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x31535Cu;
label_31535c:
    // 0x31535c: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x31535cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_315360:
    // 0x315360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315364:
    // 0x315364: 0x5462007b  bnel        $v1, $v0, . + 4 + (0x7B << 2)
label_315368:
    if (ctx->pc == 0x315368u) {
        ctx->pc = 0x315368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315364u;
        // 0x315368: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31536Cu;
        goto label_31536c;
    }
    ctx->pc = 0x315364u;
    {
        const bool branch_taken_0x315364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x315364) {
            ctx->pc = 0x315368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315364u;
            // 0x315368: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315554u;
            goto label_315554;
        }
    }
    ctx->pc = 0x31536Cu;
label_31536c:
    // 0x31536c: 0xc05959e  jal         func_165678
label_315370:
    if (ctx->pc == 0x315370u) {
        ctx->pc = 0x315370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31536Cu;
        // 0x315370: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315374u;
        goto label_315374;
    }
    ctx->pc = 0x31536Cu;
    SET_GPR_U32(ctx, 31, 0x315374u);
    ctx->pc = 0x315370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31536Cu;
    // 0x315370: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31536Cu, 0x315374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315374u;
label_315374:
    // 0x315374: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x315374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315378:
    // 0x315378: 0x12800075  beqz        $s4, . + 4 + (0x75 << 2)
label_31537c:
    if (ctx->pc == 0x31537Cu) {
        ctx->pc = 0x31537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315378u;
        // 0x31537c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315380u;
        goto label_315380;
    }
    ctx->pc = 0x315378u;
    {
        const bool branch_taken_0x315378 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315378u;
        // 0x31537c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315378) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x315380u;
label_315380:
    // 0x315380: 0xc087502  jal         func_21D408
label_315384:
    if (ctx->pc == 0x315384u) {
        ctx->pc = 0x315384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315380u;
        // 0x315384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315388u;
        goto label_315388;
    }
    ctx->pc = 0x315380u;
    SET_GPR_U32(ctx, 31, 0x315388u);
    ctx->pc = 0x315384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315380u;
    // 0x315384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x315380u, 0x315388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315388u;
label_315388:
    // 0x315388: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x315388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31538c:
    // 0x31538c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315390:
    // 0x315390: 0xc0a44ac  jal         func_2912B0
label_315394:
    if (ctx->pc == 0x315394u) {
        ctx->pc = 0x315394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315390u;
        // 0x315394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315398u;
        goto label_315398;
    }
    ctx->pc = 0x315390u;
    SET_GPR_U32(ctx, 31, 0x315398u);
    ctx->pc = 0x315394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315390u;
    // 0x315394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x315390u, 0x315398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315398u;
label_315398:
    // 0x315398: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x315398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31539c:
    // 0x31539c: 0x12a0006c  beqz        $s5, . + 4 + (0x6C << 2)
label_3153a0:
    if (ctx->pc == 0x3153A0u) {
        ctx->pc = 0x3153A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31539Cu;
        // 0x3153a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153A4u;
        goto label_3153a4;
    }
    ctx->pc = 0x31539Cu;
    {
        const bool branch_taken_0x31539c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31539Cu;
        // 0x3153a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31539c) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x3153A4u;
label_3153a4:
    // 0x3153a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3153a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3153a8:
    // 0x3153a8: 0xc059856  jal         func_166158
label_3153ac:
    if (ctx->pc == 0x3153ACu) {
        ctx->pc = 0x3153ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153A8u;
        // 0x3153ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153B0u;
        goto label_3153b0;
    }
    ctx->pc = 0x3153A8u;
    SET_GPR_U32(ctx, 31, 0x3153B0u);
    ctx->pc = 0x3153ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3153A8u;
    // 0x3153ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3153A8u, 0x3153B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153B0u;
label_3153b0:
    // 0x3153b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3153b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3153b4:
    // 0x3153b4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3153b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_3153b8:
    // 0x3153b8: 0xc059552  jal         func_165548
label_3153bc:
    if (ctx->pc == 0x3153BCu) {
        ctx->pc = 0x3153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153B8u;
        // 0x3153bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153C0u;
        goto label_3153c0;
    }
    ctx->pc = 0x3153B8u;
    SET_GPR_U32(ctx, 31, 0x3153C0u);
    ctx->pc = 0x3153BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3153B8u;
    // 0x3153bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165548u, 0x3153B8u, 0x3153C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153C0u;
label_3153c0:
    // 0x3153c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3153c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3153c4:
    // 0x3153c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3153c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3153c8:
    // 0x3153c8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_3153cc:
    if (ctx->pc == 0x3153CCu) {
        ctx->pc = 0x3153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153C8u;
        // 0x3153cc: 0x904500d7  lbu         $a1, 0xD7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 215)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153D0u;
        goto label_3153d0;
    }
    ctx->pc = 0x3153C8u;
    {
        const bool branch_taken_0x3153c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153C8u;
        // 0x3153cc: 0x904500d7  lbu         $a1, 0xD7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 215)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153c8) {
            ctx->pc = 0x3153E4u;
            goto label_3153e4;
        }
    }
    ctx->pc = 0x3153D0u;
label_3153d0:
    // 0x3153d0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3153d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3153d4:
    // 0x3153d4: 0x0  nop
    ctx->pc = 0x3153d4u;
    // NOP
label_3153d8:
    // 0x3153d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3153d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3153dc:
    // 0x3153dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3153e0:
    if (ctx->pc == 0x3153E0u) {
        ctx->pc = 0x3153E4u;
        goto label_3153e4;
    }
    ctx->pc = 0x3153DCu;
    {
        const bool branch_taken_0x3153dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3153dc) {
            ctx->pc = 0x315400u;
            goto label_315400;
        }
    }
    ctx->pc = 0x3153E4u;
label_3153e4:
    // 0x3153e4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3153e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3153e8:
    // 0x3153e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3153e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3153ec:
    // 0x3153ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3153ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3153f0:
    // 0x3153f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3153f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3153f4:
    // 0x3153f4: 0x0  nop
    ctx->pc = 0x3153f4u;
    // NOP
label_3153f8:
    // 0x3153f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3153f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3153fc:
    // 0x3153fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3153fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_315400:
    // 0x315400: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x315400u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315404:
    // 0x315404: 0x0  nop
    ctx->pc = 0x315404u;
    // NOP
label_315408:
    // 0x315408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31540c:
    // 0x31540c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31540cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_315410:
    // 0x315410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x315410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315414:
    // 0x315414: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x315414u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315418:
    // 0x315418: 0x0  nop
    ctx->pc = 0x315418u;
    // NOP
label_31541c:
    // 0x31541c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31541cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_315420:
    // 0x315420: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x315420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_315424:
    // 0x315424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x315424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_315428:
    // 0x315428: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x315428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31542c:
    // 0x31542c: 0x0  nop
    ctx->pc = 0x31542cu;
    // NOP
label_315430:
    // 0x315430: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_315434:
    if (ctx->pc == 0x315434u) {
        ctx->pc = 0x315434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315430u;
        // 0x315434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315438u;
        goto label_315438;
    }
    ctx->pc = 0x315430u;
    {
        const bool branch_taken_0x315430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315430u;
        // 0x315434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315430) {
            ctx->pc = 0x31548Cu;
            goto label_31548c;
        }
    }
    ctx->pc = 0x315438u;
label_315438:
    // 0x315438: 0x10000046  b           . + 4 + (0x46 << 2)
label_31543c:
    if (ctx->pc == 0x31543Cu) {
        ctx->pc = 0x31543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315438u;
        // 0x31543c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315440u;
        goto label_315440;
    }
    ctx->pc = 0x315438u;
    {
        const bool branch_taken_0x315438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315438u;
        // 0x31543c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315438) {
            ctx->pc = 0x315554u;
            goto label_315554;
        }
    }
    ctx->pc = 0x315440u;
label_315440:
    // 0x315440: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x315440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_315444:
    // 0x315444: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x315444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_315448:
    // 0x315448: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x315448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31544c:
    // 0x31544c: 0x40f809  jalr        $v0
label_315450:
    if (ctx->pc == 0x315450u) {
        ctx->pc = 0x315450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31544Cu;
        // 0x315450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315454u;
        goto label_315454;
    }
    ctx->pc = 0x31544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315454u);
        ctx->pc = 0x315450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31544Cu;
        // 0x315450: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31544Cu, 0x315454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315454u;
label_315454:
    // 0x315454: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x315454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_315458:
    // 0x315458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31545c:
    // 0x31545c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31545cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_315460:
    // 0x315460: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x315460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_315464:
    // 0x315464: 0x40f809  jalr        $v0
label_315468:
    if (ctx->pc == 0x315468u) {
        ctx->pc = 0x315468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315464u;
        // 0x315468: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31546Cu;
        goto label_31546c;
    }
    ctx->pc = 0x315464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31546Cu);
        ctx->pc = 0x315468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315464u;
        // 0x315468: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315464u, 0x31546Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31546Cu;
label_31546c:
    // 0x31546c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_315470:
    // 0x315470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315474:
    // 0x315474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315478:
    // 0x315478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31547c:
    // 0x31547c: 0xc0add6e  jal         func_2B75B8
label_315480:
    if (ctx->pc == 0x315480u) {
        ctx->pc = 0x315480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31547Cu;
        // 0x315480: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315484u;
        goto label_315484;
    }
    ctx->pc = 0x31547Cu;
    SET_GPR_U32(ctx, 31, 0x315484u);
    ctx->pc = 0x315480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31547Cu;
    // 0x315480: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x31547Cu, 0x315484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315484u;
label_315484:
    // 0x315484: 0x10000032  b           . + 4 + (0x32 << 2)
label_315488:
    if (ctx->pc == 0x315488u) {
        ctx->pc = 0x315488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315484u;
        // 0x315488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31548Cu;
        goto label_31548c;
    }
    ctx->pc = 0x315484u;
    {
        const bool branch_taken_0x315484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315484u;
        // 0x315488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315484) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x31548Cu;
label_31548c:
    // 0x31548c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_315490:
    // 0x315490: 0x2a170002  slti        $s7, $s0, 0x2
    ctx->pc = 0x315490u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_315494:
    // 0x315494: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x315494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315498:
    // 0x315498: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x315498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31549c:
    // 0x31549c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3154a0:
    // 0x3154a0: 0xc137826  jal         func_4DE098
label_3154a4:
    if (ctx->pc == 0x3154A4u) {
        ctx->pc = 0x3154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154A0u;
        // 0x3154a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154A8u;
        goto label_3154a8;
    }
    ctx->pc = 0x3154A0u;
    SET_GPR_U32(ctx, 31, 0x3154A8u);
    ctx->pc = 0x3154A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154A0u;
    // 0x3154a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3154A0u, 0x3154A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154A8u;
label_3154a8:
    // 0x3154a8: 0xc0e409a  jal         func_390268
label_3154ac:
    if (ctx->pc == 0x3154ACu) {
        ctx->pc = 0x3154ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154A8u;
        // 0x3154ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154B0u;
        goto label_3154b0;
    }
    ctx->pc = 0x3154A8u;
    SET_GPR_U32(ctx, 31, 0x3154B0u);
    ctx->pc = 0x3154ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154A8u;
    // 0x3154ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3154A8u, 0x3154B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154B0u;
label_3154b0:
    // 0x3154b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3154b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3154b4:
    // 0x3154b4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3154b8:
    if (ctx->pc == 0x3154B8u) {
        ctx->pc = 0x3154B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154B4u;
        // 0x3154b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154BCu;
        goto label_3154bc;
    }
    ctx->pc = 0x3154B4u;
    {
        const bool branch_taken_0x3154b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3154b4) {
            ctx->pc = 0x3154B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154B4u;
            // 0x3154b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x3154BCu;
label_3154bc:
    // 0x3154bc: 0x56340004  bnel        $s1, $s4, . + 4 + (0x4 << 2)
label_3154c0:
    if (ctx->pc == 0x3154C0u) {
        ctx->pc = 0x3154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154BCu;
        // 0x3154c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154C4u;
        goto label_3154c4;
    }
    ctx->pc = 0x3154BCu;
    {
        const bool branch_taken_0x3154bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x3154bc) {
            ctx->pc = 0x3154C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154BCu;
            // 0x3154c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3154D0u;
            goto label_3154d0;
        }
    }
    ctx->pc = 0x3154C4u;
label_3154c4:
    // 0x3154c4: 0x52e0001c  beql        $s7, $zero, . + 4 + (0x1C << 2)
label_3154c8:
    if (ctx->pc == 0x3154C8u) {
        ctx->pc = 0x3154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154C4u;
        // 0x3154c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154CCu;
        goto label_3154cc;
    }
    ctx->pc = 0x3154C4u;
    {
        const bool branch_taken_0x3154c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3154c4) {
            ctx->pc = 0x3154C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154C4u;
            // 0x3154c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x3154CCu;
label_3154cc:
    // 0x3154cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3154ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3154d0:
    // 0x3154d0: 0xc08a08a  jal         func_228228
label_3154d4:
    if (ctx->pc == 0x3154D4u) {
        ctx->pc = 0x3154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154D0u;
        // 0x3154d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154D8u;
        goto label_3154d8;
    }
    ctx->pc = 0x3154D0u;
    SET_GPR_U32(ctx, 31, 0x3154D8u);
    ctx->pc = 0x3154D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154D0u;
    // 0x3154d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3154D0u, 0x3154D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154D8u;
label_3154d8:
    // 0x3154d8: 0x50500017  beql        $v0, $s0, . + 4 + (0x17 << 2)
label_3154dc:
    if (ctx->pc == 0x3154DCu) {
        ctx->pc = 0x3154DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154D8u;
        // 0x3154dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154E0u;
        goto label_3154e0;
    }
    ctx->pc = 0x3154D8u;
    {
        const bool branch_taken_0x3154d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3154d8) {
            ctx->pc = 0x3154DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154D8u;
            // 0x3154dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x3154E0u;
label_3154e0:
    // 0x3154e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3154e4:
    // 0x3154e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3154e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3154e8:
    // 0x3154e8: 0xc089998  jal         func_226660
label_3154ec:
    if (ctx->pc == 0x3154ECu) {
        ctx->pc = 0x3154ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154E8u;
        // 0x3154ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154F0u;
        goto label_3154f0;
    }
    ctx->pc = 0x3154E8u;
    SET_GPR_U32(ctx, 31, 0x3154F0u);
    ctx->pc = 0x3154ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3154E8u;
    // 0x3154ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x3154E8u, 0x3154F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154F0u;
label_3154f0:
    // 0x3154f0: 0x50500011  beql        $v0, $s0, . + 4 + (0x11 << 2)
label_3154f4:
    if (ctx->pc == 0x3154F4u) {
        ctx->pc = 0x3154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154F0u;
        // 0x3154f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154F8u;
        goto label_3154f8;
    }
    ctx->pc = 0x3154F0u;
    {
        const bool branch_taken_0x3154f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3154f0) {
            ctx->pc = 0x3154F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154F0u;
            // 0x3154f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x3154F8u;
label_3154f8:
    // 0x3154f8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3154f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3154fc:
    // 0x3154fc: 0x5222000e  beql        $s1, $v0, . + 4 + (0xE << 2)
label_315500:
    if (ctx->pc == 0x315500u) {
        ctx->pc = 0x315500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154FCu;
        // 0x315500: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315504u;
        goto label_315504;
    }
    ctx->pc = 0x3154FCu;
    {
        const bool branch_taken_0x3154fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3154fc) {
            ctx->pc = 0x315500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3154FCu;
            // 0x315500: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x315504u;
label_315504:
    // 0x315504: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x315504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_315508:
    // 0x315508: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
label_31550c:
    if (ctx->pc == 0x31550Cu) {
        ctx->pc = 0x31550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315508u;
        // 0x31550c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315510u;
        goto label_315510;
    }
    ctx->pc = 0x315508u;
    {
        const bool branch_taken_0x315508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x315508) {
            ctx->pc = 0x31550Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315508u;
            // 0x31550c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315538u;
            goto label_315538;
        }
    }
    ctx->pc = 0x315510u;
label_315510:
    // 0x315510: 0xc087502  jal         func_21D408
label_315514:
    if (ctx->pc == 0x315514u) {
        ctx->pc = 0x315514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315510u;
        // 0x315514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315518u;
        goto label_315518;
    }
    ctx->pc = 0x315510u;
    SET_GPR_U32(ctx, 31, 0x315518u);
    ctx->pc = 0x315514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315510u;
    // 0x315514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x315510u, 0x315518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315518u;
label_315518:
    // 0x315518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31551c:
    // 0x31551c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x31551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_315520:
    // 0x315520: 0xc0a3658  jal         func_28D960
label_315524:
    if (ctx->pc == 0x315524u) {
        ctx->pc = 0x315524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315520u;
        // 0x315524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315528u;
        goto label_315528;
    }
    ctx->pc = 0x315520u;
    SET_GPR_U32(ctx, 31, 0x315528u);
    ctx->pc = 0x315524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315520u;
    // 0x315524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x315520u, 0x315528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315528u;
label_315528:
    // 0x315528: 0x8203002d  lb          $v1, 0x2D($s0)
    ctx->pc = 0x315528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_31552c:
    // 0x31552c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x31552cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_315530:
    // 0x315530: 0x1060ffc3  beqz        $v1, . + 4 + (-0x3D << 2)
label_315534:
    if (ctx->pc == 0x315534u) {
        ctx->pc = 0x315534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315530u;
        // 0x315534: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315538u;
        goto label_315538;
    }
    ctx->pc = 0x315530u;
    {
        const bool branch_taken_0x315530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315530u;
        // 0x315534: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315530) {
            ctx->pc = 0x315440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315440;
        }
    }
    ctx->pc = 0x315538u;
label_315538:
    // 0x315538: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x315538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31553c:
    // 0x31553c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_315540:
    if (ctx->pc == 0x315540u) {
        ctx->pc = 0x315540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31553Cu;
        // 0x315540: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315544u;
        goto label_315544;
    }
    ctx->pc = 0x31553Cu;
    {
        const bool branch_taken_0x31553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31553Cu;
        // 0x315540: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31553c) {
            ctx->pc = 0x3154A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3154a0;
        }
    }
    ctx->pc = 0x315544u;
label_315544:
    // 0x315544: 0x10000002  b           . + 4 + (0x2 << 2)
label_315548:
    if (ctx->pc == 0x315548u) {
        ctx->pc = 0x315548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315544u;
        // 0x315548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31554Cu;
        goto label_31554c;
    }
    ctx->pc = 0x315544u;
    {
        const bool branch_taken_0x315544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315544u;
        // 0x315548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315544) {
            ctx->pc = 0x315550u;
            goto label_315550;
        }
    }
    ctx->pc = 0x31554Cu;
label_31554c:
    // 0x31554c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31554cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315550:
    // 0x315550: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x315550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_315554:
    // 0x315554: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x315554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_315558:
    // 0x315558: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x315558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31555c:
    // 0x31555c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31555cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_315560:
    // 0x315560: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315564:
    // 0x315564: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x315564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315568:
    // 0x315568: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x315568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31556c:
    // 0x31556c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x31556cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315570:
    // 0x315570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_315574:
    // 0x315574: 0x3e00008  jr          $ra
label_315578:
    if (ctx->pc == 0x315578u) {
        ctx->pc = 0x315578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315574u;
        // 0x315578: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31557Cu;
        goto label_31557c;
    }
    ctx->pc = 0x315574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315574u;
        // 0x315578: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31557Cu;
label_31557c:
    // 0x31557c: 0x0  nop
    ctx->pc = 0x31557cu;
    // NOP
    ctx->pc = 0x315580u;
}
