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

// Function: sub_00304228
// Address: 0x304228 - 0x304608
void sub_00304228_0x304228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304228_0x304228");
#endif

    switch (ctx->pc) {
        case 0x304228u: goto label_304228;
        case 0x30422cu: goto label_30422c;
        case 0x304230u: goto label_304230;
        case 0x304234u: goto label_304234;
        case 0x304238u: goto label_304238;
        case 0x30423cu: goto label_30423c;
        case 0x304240u: goto label_304240;
        case 0x304244u: goto label_304244;
        case 0x304248u: goto label_304248;
        case 0x30424cu: goto label_30424c;
        case 0x304250u: goto label_304250;
        case 0x304254u: goto label_304254;
        case 0x304258u: goto label_304258;
        case 0x30425cu: goto label_30425c;
        case 0x304260u: goto label_304260;
        case 0x304264u: goto label_304264;
        case 0x304268u: goto label_304268;
        case 0x30426cu: goto label_30426c;
        case 0x304270u: goto label_304270;
        case 0x304274u: goto label_304274;
        case 0x304278u: goto label_304278;
        case 0x30427cu: goto label_30427c;
        case 0x304280u: goto label_304280;
        case 0x304284u: goto label_304284;
        case 0x304288u: goto label_304288;
        case 0x30428cu: goto label_30428c;
        case 0x304290u: goto label_304290;
        case 0x304294u: goto label_304294;
        case 0x304298u: goto label_304298;
        case 0x30429cu: goto label_30429c;
        case 0x3042a0u: goto label_3042a0;
        case 0x3042a4u: goto label_3042a4;
        case 0x3042a8u: goto label_3042a8;
        case 0x3042acu: goto label_3042ac;
        case 0x3042b0u: goto label_3042b0;
        case 0x3042b4u: goto label_3042b4;
        case 0x3042b8u: goto label_3042b8;
        case 0x3042bcu: goto label_3042bc;
        case 0x3042c0u: goto label_3042c0;
        case 0x3042c4u: goto label_3042c4;
        case 0x3042c8u: goto label_3042c8;
        case 0x3042ccu: goto label_3042cc;
        case 0x3042d0u: goto label_3042d0;
        case 0x3042d4u: goto label_3042d4;
        case 0x3042d8u: goto label_3042d8;
        case 0x3042dcu: goto label_3042dc;
        case 0x3042e0u: goto label_3042e0;
        case 0x3042e4u: goto label_3042e4;
        case 0x3042e8u: goto label_3042e8;
        case 0x3042ecu: goto label_3042ec;
        case 0x3042f0u: goto label_3042f0;
        case 0x3042f4u: goto label_3042f4;
        case 0x3042f8u: goto label_3042f8;
        case 0x3042fcu: goto label_3042fc;
        case 0x304300u: goto label_304300;
        case 0x304304u: goto label_304304;
        case 0x304308u: goto label_304308;
        case 0x30430cu: goto label_30430c;
        case 0x304310u: goto label_304310;
        case 0x304314u: goto label_304314;
        case 0x304318u: goto label_304318;
        case 0x30431cu: goto label_30431c;
        case 0x304320u: goto label_304320;
        case 0x304324u: goto label_304324;
        case 0x304328u: goto label_304328;
        case 0x30432cu: goto label_30432c;
        case 0x304330u: goto label_304330;
        case 0x304334u: goto label_304334;
        case 0x304338u: goto label_304338;
        case 0x30433cu: goto label_30433c;
        case 0x304340u: goto label_304340;
        case 0x304344u: goto label_304344;
        case 0x304348u: goto label_304348;
        case 0x30434cu: goto label_30434c;
        case 0x304350u: goto label_304350;
        case 0x304354u: goto label_304354;
        case 0x304358u: goto label_304358;
        case 0x30435cu: goto label_30435c;
        case 0x304360u: goto label_304360;
        case 0x304364u: goto label_304364;
        case 0x304368u: goto label_304368;
        case 0x30436cu: goto label_30436c;
        case 0x304370u: goto label_304370;
        case 0x304374u: goto label_304374;
        case 0x304378u: goto label_304378;
        case 0x30437cu: goto label_30437c;
        case 0x304380u: goto label_304380;
        case 0x304384u: goto label_304384;
        case 0x304388u: goto label_304388;
        case 0x30438cu: goto label_30438c;
        case 0x304390u: goto label_304390;
        case 0x304394u: goto label_304394;
        case 0x304398u: goto label_304398;
        case 0x30439cu: goto label_30439c;
        case 0x3043a0u: goto label_3043a0;
        case 0x3043a4u: goto label_3043a4;
        case 0x3043a8u: goto label_3043a8;
        case 0x3043acu: goto label_3043ac;
        case 0x3043b0u: goto label_3043b0;
        case 0x3043b4u: goto label_3043b4;
        case 0x3043b8u: goto label_3043b8;
        case 0x3043bcu: goto label_3043bc;
        case 0x3043c0u: goto label_3043c0;
        case 0x3043c4u: goto label_3043c4;
        case 0x3043c8u: goto label_3043c8;
        case 0x3043ccu: goto label_3043cc;
        case 0x3043d0u: goto label_3043d0;
        case 0x3043d4u: goto label_3043d4;
        case 0x3043d8u: goto label_3043d8;
        case 0x3043dcu: goto label_3043dc;
        case 0x3043e0u: goto label_3043e0;
        case 0x3043e4u: goto label_3043e4;
        case 0x3043e8u: goto label_3043e8;
        case 0x3043ecu: goto label_3043ec;
        case 0x3043f0u: goto label_3043f0;
        case 0x3043f4u: goto label_3043f4;
        case 0x3043f8u: goto label_3043f8;
        case 0x3043fcu: goto label_3043fc;
        case 0x304400u: goto label_304400;
        case 0x304404u: goto label_304404;
        case 0x304408u: goto label_304408;
        case 0x30440cu: goto label_30440c;
        case 0x304410u: goto label_304410;
        case 0x304414u: goto label_304414;
        case 0x304418u: goto label_304418;
        case 0x30441cu: goto label_30441c;
        case 0x304420u: goto label_304420;
        case 0x304424u: goto label_304424;
        case 0x304428u: goto label_304428;
        case 0x30442cu: goto label_30442c;
        case 0x304430u: goto label_304430;
        case 0x304434u: goto label_304434;
        case 0x304438u: goto label_304438;
        case 0x30443cu: goto label_30443c;
        case 0x304440u: goto label_304440;
        case 0x304444u: goto label_304444;
        case 0x304448u: goto label_304448;
        case 0x30444cu: goto label_30444c;
        case 0x304450u: goto label_304450;
        case 0x304454u: goto label_304454;
        case 0x304458u: goto label_304458;
        case 0x30445cu: goto label_30445c;
        case 0x304460u: goto label_304460;
        case 0x304464u: goto label_304464;
        case 0x304468u: goto label_304468;
        case 0x30446cu: goto label_30446c;
        case 0x304470u: goto label_304470;
        case 0x304474u: goto label_304474;
        case 0x304478u: goto label_304478;
        case 0x30447cu: goto label_30447c;
        case 0x304480u: goto label_304480;
        case 0x304484u: goto label_304484;
        case 0x304488u: goto label_304488;
        case 0x30448cu: goto label_30448c;
        case 0x304490u: goto label_304490;
        case 0x304494u: goto label_304494;
        case 0x304498u: goto label_304498;
        case 0x30449cu: goto label_30449c;
        case 0x3044a0u: goto label_3044a0;
        case 0x3044a4u: goto label_3044a4;
        case 0x3044a8u: goto label_3044a8;
        case 0x3044acu: goto label_3044ac;
        case 0x3044b0u: goto label_3044b0;
        case 0x3044b4u: goto label_3044b4;
        case 0x3044b8u: goto label_3044b8;
        case 0x3044bcu: goto label_3044bc;
        case 0x3044c0u: goto label_3044c0;
        case 0x3044c4u: goto label_3044c4;
        case 0x3044c8u: goto label_3044c8;
        case 0x3044ccu: goto label_3044cc;
        case 0x3044d0u: goto label_3044d0;
        case 0x3044d4u: goto label_3044d4;
        case 0x3044d8u: goto label_3044d8;
        case 0x3044dcu: goto label_3044dc;
        case 0x3044e0u: goto label_3044e0;
        case 0x3044e4u: goto label_3044e4;
        case 0x3044e8u: goto label_3044e8;
        case 0x3044ecu: goto label_3044ec;
        case 0x3044f0u: goto label_3044f0;
        case 0x3044f4u: goto label_3044f4;
        case 0x3044f8u: goto label_3044f8;
        case 0x3044fcu: goto label_3044fc;
        case 0x304500u: goto label_304500;
        case 0x304504u: goto label_304504;
        case 0x304508u: goto label_304508;
        case 0x30450cu: goto label_30450c;
        case 0x304510u: goto label_304510;
        case 0x304514u: goto label_304514;
        case 0x304518u: goto label_304518;
        case 0x30451cu: goto label_30451c;
        case 0x304520u: goto label_304520;
        case 0x304524u: goto label_304524;
        case 0x304528u: goto label_304528;
        case 0x30452cu: goto label_30452c;
        case 0x304530u: goto label_304530;
        case 0x304534u: goto label_304534;
        case 0x304538u: goto label_304538;
        case 0x30453cu: goto label_30453c;
        case 0x304540u: goto label_304540;
        case 0x304544u: goto label_304544;
        case 0x304548u: goto label_304548;
        case 0x30454cu: goto label_30454c;
        case 0x304550u: goto label_304550;
        case 0x304554u: goto label_304554;
        case 0x304558u: goto label_304558;
        case 0x30455cu: goto label_30455c;
        case 0x304560u: goto label_304560;
        case 0x304564u: goto label_304564;
        case 0x304568u: goto label_304568;
        case 0x30456cu: goto label_30456c;
        case 0x304570u: goto label_304570;
        case 0x304574u: goto label_304574;
        case 0x304578u: goto label_304578;
        case 0x30457cu: goto label_30457c;
        case 0x304580u: goto label_304580;
        case 0x304584u: goto label_304584;
        case 0x304588u: goto label_304588;
        case 0x30458cu: goto label_30458c;
        case 0x304590u: goto label_304590;
        case 0x304594u: goto label_304594;
        case 0x304598u: goto label_304598;
        case 0x30459cu: goto label_30459c;
        case 0x3045a0u: goto label_3045a0;
        case 0x3045a4u: goto label_3045a4;
        case 0x3045a8u: goto label_3045a8;
        case 0x3045acu: goto label_3045ac;
        case 0x3045b0u: goto label_3045b0;
        case 0x3045b4u: goto label_3045b4;
        case 0x3045b8u: goto label_3045b8;
        case 0x3045bcu: goto label_3045bc;
        case 0x3045c0u: goto label_3045c0;
        case 0x3045c4u: goto label_3045c4;
        case 0x3045c8u: goto label_3045c8;
        case 0x3045ccu: goto label_3045cc;
        case 0x3045d0u: goto label_3045d0;
        case 0x3045d4u: goto label_3045d4;
        case 0x3045d8u: goto label_3045d8;
        case 0x3045dcu: goto label_3045dc;
        case 0x3045e0u: goto label_3045e0;
        case 0x3045e4u: goto label_3045e4;
        case 0x3045e8u: goto label_3045e8;
        case 0x3045ecu: goto label_3045ec;
        case 0x3045f0u: goto label_3045f0;
        case 0x3045f4u: goto label_3045f4;
        case 0x3045f8u: goto label_3045f8;
        case 0x3045fcu: goto label_3045fc;
        case 0x304600u: goto label_304600;
        case 0x304604u: goto label_304604;
        default: break;
    }

    ctx->pc = 0x304228u;

label_304228:
    // 0x304228: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x304228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_30422c:
    // 0x30422c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x30422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_304230:
    // 0x304230: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x304230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_304234:
    // 0x304234: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x304234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_304238:
    // 0x304238: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x304238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30423c:
    // 0x30423c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x30423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_304240:
    // 0x304240: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x304240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_304244:
    // 0x304244: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x304244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_304248:
    // 0x304248: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x304248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_30424c:
    // 0x30424c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_304250:
    // 0x304250: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x304250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_304254:
    // 0x304254: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x304254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_304258:
    // 0x304258: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x304258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30425c:
    // 0x30425c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x30425cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_304260:
    // 0x304260: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_304264:
    if (ctx->pc == 0x304264u) {
        ctx->pc = 0x304264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304260u;
        // 0x304264: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304268u;
        goto label_304268;
    }
    ctx->pc = 0x304260u;
    {
        const bool branch_taken_0x304260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304260u;
        // 0x304264: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304260) {
            ctx->pc = 0x3045CCu;
            goto label_3045cc;
        }
    }
    ctx->pc = 0x304268u;
label_304268:
    // 0x304268: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x304268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_30426c:
    // 0x30426c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_304270:
    // 0x304270: 0x24429840  addiu       $v0, $v0, -0x67C0
    ctx->pc = 0x304270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
label_304274:
    // 0x304274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x304274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_304278:
    // 0x304278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x304278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30427c:
    // 0x30427c: 0x800008  jr          $a0
label_304280:
    if (ctx->pc == 0x304280u) {
        ctx->pc = 0x304284u;
        goto label_304284;
    }
    ctx->pc = 0x30427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304284u: goto label_304284;
            case 0x3042B0u: goto label_3042b0;
            case 0x3042C8u: goto label_3042c8;
            case 0x3042F4u: goto label_3042f4;
            case 0x3042FCu: goto label_3042fc;
            case 0x304354u: goto label_304354;
            case 0x3043F8u: goto label_3043f8;
            case 0x3045CCu: goto label_3045cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30427Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x304284u;
label_304284:
    // 0x304284: 0x92430011  lbu         $v1, 0x11($s2)
    ctx->pc = 0x304284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_304288:
    // 0x304288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30428c:
    // 0x30428c: 0x146200d2  bne         $v1, $v0, . + 4 + (0xD2 << 2)
label_304290:
    if (ctx->pc == 0x304290u) {
        ctx->pc = 0x304290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30428Cu;
        // 0x304290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304294u;
        goto label_304294;
    }
    ctx->pc = 0x30428Cu;
    {
        const bool branch_taken_0x30428c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30428Cu;
        // 0x304290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30428c) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304294u;
label_304294:
    // 0x304294: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x304294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_304298:
    // 0x304298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x304298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30429c:
    // 0x30429c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30429cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3042a0:
    // 0x3042a0: 0xc0c101c  jal         func_304070
label_3042a4:
    if (ctx->pc == 0x3042A4u) {
        ctx->pc = 0x3042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042A0u;
        // 0x3042a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042A8u;
        goto label_3042a8;
    }
    ctx->pc = 0x3042A0u;
    SET_GPR_U32(ctx, 31, 0x3042A8u);
    ctx->pc = 0x3042A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042A0u;
    // 0x3042a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304070u, 0x3042A0u, 0x3042A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042A8u;
label_3042a8:
    // 0x3042a8: 0x100000cb  b           . + 4 + (0xCB << 2)
label_3042ac:
    if (ctx->pc == 0x3042ACu) {
        ctx->pc = 0x3042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042A8u;
        // 0x3042ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042B0u;
        goto label_3042b0;
    }
    ctx->pc = 0x3042A8u;
    {
        const bool branch_taken_0x3042a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042A8u;
        // 0x3042ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042a8) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3042B0u;
label_3042b0:
    // 0x3042b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3042b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3042b4:
    // 0x3042b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3042b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3042b8:
    // 0x3042b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3042b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3042bc:
    // 0x3042bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3042bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3042c0:
    // 0x3042c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3042c4:
    if (ctx->pc == 0x3042C4u) {
        ctx->pc = 0x3042C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042C0u;
        // 0x3042c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042C8u;
        goto label_3042c8;
    }
    ctx->pc = 0x3042C0u;
    {
        const bool branch_taken_0x3042c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042C0u;
        // 0x3042c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042c0) {
            ctx->pc = 0x3042ECu;
            goto label_3042ec;
        }
    }
    ctx->pc = 0x3042C8u;
label_3042c8:
    // 0x3042c8: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3042c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3042cc:
    // 0x3042cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3042ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3042d0:
    // 0x3042d0: 0xc0a44ac  jal         func_2912B0
label_3042d4:
    if (ctx->pc == 0x3042D4u) {
        ctx->pc = 0x3042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042D0u;
        // 0x3042d4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042D8u;
        goto label_3042d8;
    }
    ctx->pc = 0x3042D0u;
    SET_GPR_U32(ctx, 31, 0x3042D8u);
    ctx->pc = 0x3042D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042D0u;
    // 0x3042d4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x3042D0u, 0x3042D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042D8u;
label_3042d8:
    // 0x3042d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3042d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3042dc:
    // 0x3042dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3042dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3042e0:
    // 0x3042e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3042e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3042e4:
    // 0x3042e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3042e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3042e8:
    // 0x3042e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3042e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3042ec:
    // 0x3042ec: 0xc0c101c  jal         func_304070
label_3042f0:
    if (ctx->pc == 0x3042F0u) {
        ctx->pc = 0x3042F4u;
        goto label_3042f4;
    }
    ctx->pc = 0x3042ECu;
    SET_GPR_U32(ctx, 31, 0x3042F4u);
    ctx->pc = 0x304070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304070u, 0x3042ECu, 0x3042F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042F4u;
label_3042f4:
    // 0x3042f4: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_3042f8:
    if (ctx->pc == 0x3042F8u) {
        ctx->pc = 0x3042F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042F4u;
        // 0x3042f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042FCu;
        goto label_3042fc;
    }
    ctx->pc = 0x3042F4u;
    {
        const bool branch_taken_0x3042f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042F4u;
        // 0x3042f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f4) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3042FCu;
label_3042fc:
    // 0x3042fc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3042fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_304300:
    // 0x304300: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_304304:
    if (ctx->pc == 0x304304u) {
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304300u;
        // 0x304304: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304308u;
        goto label_304308;
    }
    ctx->pc = 0x304300u;
    {
        const bool branch_taken_0x304300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304300u;
        // 0x304304: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304300) {
            ctx->pc = 0x304314u;
            goto label_304314;
        }
    }
    ctx->pc = 0x304308u;
label_304308:
    // 0x304308: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x304308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30430c:
    // 0x30430c: 0x10000002  b           . + 4 + (0x2 << 2)
label_304310:
    if (ctx->pc == 0x304310u) {
        ctx->pc = 0x304310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30430Cu;
        // 0x304310: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304314u;
        goto label_304314;
    }
    ctx->pc = 0x30430Cu;
    {
        const bool branch_taken_0x30430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30430Cu;
        // 0x304310: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30430c) {
            ctx->pc = 0x304318u;
            goto label_304318;
        }
    }
    ctx->pc = 0x304314u;
label_304314:
    // 0x304314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304318:
    // 0x304318: 0x120000af  beqz        $s0, . + 4 + (0xAF << 2)
label_30431c:
    if (ctx->pc == 0x30431Cu) {
        ctx->pc = 0x30431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304318u;
        // 0x30431c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304320u;
        goto label_304320;
    }
    ctx->pc = 0x304318u;
    {
        const bool branch_taken_0x304318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304318u;
        // 0x30431c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304318) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304320u;
label_304320:
    // 0x304320: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x304320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_304324:
    // 0x304324: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x304324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_304328:
    // 0x304328: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30432c:
    // 0x30432c: 0x40f809  jalr        $v0
label_304330:
    if (ctx->pc == 0x304330u) {
        ctx->pc = 0x304330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30432Cu;
        // 0x304330: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304334u;
        goto label_304334;
    }
    ctx->pc = 0x30432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304334u);
        ctx->pc = 0x304330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30432Cu;
        // 0x304330: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30432Cu, 0x304334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304334u;
label_304334:
    // 0x304334: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x304334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_304338:
    // 0x304338: 0x144300a7  bne         $v0, $v1, . + 4 + (0xA7 << 2)
label_30433c:
    if (ctx->pc == 0x30433Cu) {
        ctx->pc = 0x30433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304338u;
        // 0x30433c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304340u;
        goto label_304340;
    }
    ctx->pc = 0x304338u;
    {
        const bool branch_taken_0x304338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304338u;
        // 0x30433c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304338) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304340u;
label_304340:
    // 0x304340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304344:
    // 0x304344: 0xc0b98f8  jal         func_2E63E0
label_304348:
    if (ctx->pc == 0x304348u) {
        ctx->pc = 0x304348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304344u;
        // 0x304348: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30434Cu;
        goto label_30434c;
    }
    ctx->pc = 0x304344u;
    SET_GPR_U32(ctx, 31, 0x30434Cu);
    ctx->pc = 0x304348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304344u;
    // 0x304348: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E63E0u, 0x304344u, 0x30434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30434Cu;
label_30434c:
    // 0x30434c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_304350:
    if (ctx->pc == 0x304350u) {
        ctx->pc = 0x304350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30434Cu;
        // 0x304350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304354u;
        goto label_304354;
    }
    ctx->pc = 0x30434Cu;
    {
        const bool branch_taken_0x30434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30434Cu;
        // 0x304350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30434c) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304354u;
label_304354:
    // 0x304354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304358:
    // 0x304358: 0xc0a3658  jal         func_28D960
label_30435c:
    if (ctx->pc == 0x30435Cu) {
        ctx->pc = 0x30435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304358u;
        // 0x30435c: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304360u;
        goto label_304360;
    }
    ctx->pc = 0x304358u;
    SET_GPR_U32(ctx, 31, 0x304360u);
    ctx->pc = 0x30435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304358u;
    // 0x30435c: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304358u, 0x304360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304360u;
label_304360:
    // 0x304360: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x304360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304364:
    // 0x304364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304368:
    // 0x304368: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
label_30436c:
    if (ctx->pc == 0x30436Cu) {
        ctx->pc = 0x30436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304368u;
        // 0x30436c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304370u;
        goto label_304370;
    }
    ctx->pc = 0x304368u;
    {
        const bool branch_taken_0x304368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304368u;
        // 0x30436c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304368) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304370u;
label_304370:
    // 0x304370: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_304374:
    if (ctx->pc == 0x304374u) {
        ctx->pc = 0x304374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304370u;
        // 0x304374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304378u;
        goto label_304378;
    }
    ctx->pc = 0x304370u;
    {
        const bool branch_taken_0x304370 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x304374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304370u;
        // 0x304374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304370) {
            ctx->pc = 0x304394u;
            goto label_304394;
        }
    }
    ctx->pc = 0x304378u;
label_304378:
    // 0x304378: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_30437c:
    // 0x30437c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30437cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_304380:
    // 0x304380: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_304384:
    if (ctx->pc == 0x304384u) {
        ctx->pc = 0x304384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304380u;
        // 0x304384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304388u;
        goto label_304388;
    }
    ctx->pc = 0x304380u;
    {
        const bool branch_taken_0x304380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304380) {
            ctx->pc = 0x304384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304380u;
            // 0x304384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304394u;
            goto label_304394;
        }
    }
    ctx->pc = 0x304388u;
label_304388:
    // 0x304388: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x304388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30438c:
    // 0x30438c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_304390:
    // 0x304390: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x304390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_304394:
    // 0x304394: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x304394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_304398:
    // 0x304398: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x304398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_30439c:
    // 0x30439c: 0xc0e403c  jal         func_3900F0
label_3043a0:
    if (ctx->pc == 0x3043A0u) {
        ctx->pc = 0x3043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30439Cu;
        // 0x3043a0: 0x87a40052  lh          $a0, 0x52($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043A4u;
        goto label_3043a4;
    }
    ctx->pc = 0x30439Cu;
    SET_GPR_U32(ctx, 31, 0x3043A4u);
    ctx->pc = 0x3043A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30439Cu;
    // 0x3043a0: 0x87a40052  lh          $a0, 0x52($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x30439Cu, 0x3043A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043A4u;
label_3043a4:
    // 0x3043a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3043a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3043a8:
    // 0x3043a8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3043a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3043ac:
    // 0x3043ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3043b0:
    // 0x3043b0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_3043b4:
    if (ctx->pc == 0x3043B4u) {
        ctx->pc = 0x3043B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B0u;
        // 0x3043b4: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043B8u;
        goto label_3043b8;
    }
    ctx->pc = 0x3043B0u;
    {
        const bool branch_taken_0x3043b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3043b0) {
            ctx->pc = 0x3043B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3043B0u;
            // 0x3043b4: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3043BCu;
            goto label_3043bc;
        }
    }
    ctx->pc = 0x3043B8u;
label_3043b8:
    // 0x3043b8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3043b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3043bc:
    // 0x3043bc: 0x10800086  beqz        $a0, . + 4 + (0x86 << 2)
label_3043c0:
    if (ctx->pc == 0x3043C0u) {
        ctx->pc = 0x3043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043BCu;
        // 0x3043c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043C4u;
        goto label_3043c4;
    }
    ctx->pc = 0x3043BCu;
    {
        const bool branch_taken_0x3043bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043BCu;
        // 0x3043c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043bc) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3043C4u;
label_3043c4:
    // 0x3043c4: 0xc104a70  jal         func_4129C0
label_3043c8:
    if (ctx->pc == 0x3043C8u) {
        ctx->pc = 0x3043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043C4u;
        // 0x3043c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043CCu;
        goto label_3043cc;
    }
    ctx->pc = 0x3043C4u;
    SET_GPR_U32(ctx, 31, 0x3043CCu);
    ctx->pc = 0x3043C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043C4u;
    // 0x3043c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C0u, 0x3043C4u, 0x3043CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043CCu;
label_3043cc:
    // 0x3043cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3043ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3043d0:
    // 0x3043d0: 0x14430081  bne         $v0, $v1, . + 4 + (0x81 << 2)
label_3043d4:
    if (ctx->pc == 0x3043D4u) {
        ctx->pc = 0x3043D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D0u;
        // 0x3043d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043D8u;
        goto label_3043d8;
    }
    ctx->pc = 0x3043D0u;
    {
        const bool branch_taken_0x3043d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3043D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D0u;
        // 0x3043d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043d0) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3043D8u;
label_3043d8:
    // 0x3043d8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3043d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3043dc:
    // 0x3043dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3043dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3043e0:
    // 0x3043e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3043e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3043e4:
    // 0x3043e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3043e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3043e8:
    // 0x3043e8: 0xc0c101c  jal         func_304070
label_3043ec:
    if (ctx->pc == 0x3043ECu) {
        ctx->pc = 0x3043ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043E8u;
        // 0x3043ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043F0u;
        goto label_3043f0;
    }
    ctx->pc = 0x3043E8u;
    SET_GPR_U32(ctx, 31, 0x3043F0u);
    ctx->pc = 0x3043ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043E8u;
    // 0x3043ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304070u, 0x3043E8u, 0x3043F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043F0u;
label_3043f0:
    // 0x3043f0: 0x10000079  b           . + 4 + (0x79 << 2)
label_3043f4:
    if (ctx->pc == 0x3043F4u) {
        ctx->pc = 0x3043F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F0u;
        // 0x3043f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043F8u;
        goto label_3043f8;
    }
    ctx->pc = 0x3043F0u;
    {
        const bool branch_taken_0x3043f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F0u;
        // 0x3043f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043f0) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3043F8u;
label_3043f8:
    // 0x3043f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3043f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3043fc:
    // 0x3043fc: 0xc0a3658  jal         func_28D960
label_304400:
    if (ctx->pc == 0x304400u) {
        ctx->pc = 0x304400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043FCu;
        // 0x304400: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304404u;
        goto label_304404;
    }
    ctx->pc = 0x3043FCu;
    SET_GPR_U32(ctx, 31, 0x304404u);
    ctx->pc = 0x304400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043FCu;
    // 0x304400: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3043FCu, 0x304404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304404u;
label_304404:
    // 0x304404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x304404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304408:
    // 0x304408: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30440c:
    // 0x30440c: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
label_304410:
    if (ctx->pc == 0x304410u) {
        ctx->pc = 0x304410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30440Cu;
        // 0x304410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304414u;
        goto label_304414;
    }
    ctx->pc = 0x30440Cu;
    {
        const bool branch_taken_0x30440c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30440Cu;
        // 0x304410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30440c) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304414u;
label_304414:
    // 0x304414: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_304418:
    if (ctx->pc == 0x304418u) {
        ctx->pc = 0x304418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304414u;
        // 0x304418: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30441Cu;
        goto label_30441c;
    }
    ctx->pc = 0x304414u;
    {
        const bool branch_taken_0x304414 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x304418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304414u;
        // 0x304418: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304414) {
            ctx->pc = 0x304444u;
            goto label_304444;
        }
    }
    ctx->pc = 0x30441Cu;
label_30441c:
    // 0x30441c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x30441cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_304420:
    // 0x304420: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x304420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_304424:
    // 0x304424: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_304428:
    if (ctx->pc == 0x304428u) {
        ctx->pc = 0x304428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304424u;
        // 0x304428: 0x92420054  lbu         $v0, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30442Cu;
        goto label_30442c;
    }
    ctx->pc = 0x304424u;
    {
        const bool branch_taken_0x304424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304424) {
            ctx->pc = 0x304428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304424u;
            // 0x304428: 0x92420054  lbu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304448u;
            goto label_304448;
        }
    }
    ctx->pc = 0x30442Cu;
label_30442c:
    // 0x30442c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_304430:
    // 0x304430: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x304430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_304434:
    // 0x304434: 0x10000003  b           . + 4 + (0x3 << 2)
label_304438:
    if (ctx->pc == 0x304438u) {
        ctx->pc = 0x304438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304434u;
        // 0x304438: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30443Cu;
        goto label_30443c;
    }
    ctx->pc = 0x304434u;
    {
        const bool branch_taken_0x304434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304434u;
        // 0x304438: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304434) {
            ctx->pc = 0x304444u;
            goto label_304444;
        }
    }
    ctx->pc = 0x30443Cu;
label_30443c:
    // 0x30443c: 0x10000041  b           . + 4 + (0x41 << 2)
label_304440:
    if (ctx->pc == 0x304440u) {
        ctx->pc = 0x304440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30443Cu;
        // 0x304440: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304444u;
        goto label_304444;
    }
    ctx->pc = 0x30443Cu;
    {
        const bool branch_taken_0x30443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30443Cu;
        // 0x304440: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30443c) {
            ctx->pc = 0x304544u;
            goto label_304544;
        }
    }
    ctx->pc = 0x304444u;
label_304444:
    // 0x304444: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x304444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_304448:
    // 0x304448: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_30444c:
    if (ctx->pc == 0x30444Cu) {
        ctx->pc = 0x30444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304448u;
        // 0x30444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304450u;
        goto label_304450;
    }
    ctx->pc = 0x304448u;
    {
        const bool branch_taken_0x304448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304448u;
        // 0x30444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304448) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x304450u;
label_304450:
    // 0x304450: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x304450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_304454:
    // 0x304454: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_304458:
    if (ctx->pc == 0x304458u) {
        ctx->pc = 0x304458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304454u;
        // 0x304458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30445Cu;
        goto label_30445c;
    }
    ctx->pc = 0x304454u;
    {
        const bool branch_taken_0x304454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304454u;
        // 0x304458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304454) {
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x30445Cu;
label_30445c:
    // 0x30445c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_304460:
    // 0x304460: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x304460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_304464:
    // 0x304464: 0x24464b00  addiu       $a2, $v0, 0x4B00
    ctx->pc = 0x304464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_304468:
    // 0x304468: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x304468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_30446c:
    // 0x30446c: 0x84a30092  lh          $v1, 0x92($a1)
    ctx->pc = 0x30446cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_304470:
    // 0x304470: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x304470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304474:
    // 0x304474: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_304478:
    // 0x304478: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x304478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30447c:
    // 0x30447c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30447cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_304480:
    // 0x304480: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x304480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_304484:
    // 0x304484: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x304484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_304488:
    // 0x304488: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x304488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_30448c:
    // 0x30448c: 0x84a30224  lh          $v1, 0x224($a1)
    ctx->pc = 0x30448cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 548)));
label_304490:
    // 0x304490: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
label_304494:
    if (ctx->pc == 0x304494u) {
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304498u;
        goto label_304498;
    }
    ctx->pc = 0x304490u;
    {
        const bool branch_taken_0x304490 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304490) {
            ctx->pc = 0x304544u;
            goto label_304544;
        }
    }
    ctx->pc = 0x304498u;
label_304498:
    // 0x304498: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x304498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_30449c:
    // 0x30449c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x30449cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3044a0:
    // 0x3044a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3044a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3044a4:
    // 0x3044a4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3044a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_3044a8:
    // 0x3044a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3044a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3044ac:
    // 0x3044ac: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x3044acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_3044b0:
    // 0x3044b0: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3044b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3044b4:
    // 0x3044b4: 0xc0e409a  jal         func_390268
label_3044b8:
    if (ctx->pc == 0x3044B8u) {
        ctx->pc = 0x3044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044B4u;
        // 0x3044b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044BCu;
        goto label_3044bc;
    }
    ctx->pc = 0x3044B4u;
    SET_GPR_U32(ctx, 31, 0x3044BCu);
    ctx->pc = 0x3044B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044B4u;
    // 0x3044b8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3044B4u, 0x3044BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044BCu;
label_3044bc:
    // 0x3044bc: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x3044bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_3044c0:
    // 0x3044c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3044c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3044c4:
    // 0x3044c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3044c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3044c8:
    // 0x3044c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3044c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3044cc:
    // 0x3044cc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x3044ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_3044d0:
    // 0x3044d0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3044d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3044d4:
    // 0x3044d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3044d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3044d8:
    // 0x3044d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3044d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3044dc:
    // 0x3044dc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3044dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3044e0:
    // 0x3044e0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3044e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3044e4:
    // 0x3044e4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3044e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3044e8:
    // 0x3044e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3044e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3044ec:
    // 0x3044ec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3044ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3044f0:
    // 0x3044f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3044f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3044f4:
    // 0x3044f4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x3044f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3044f8:
    // 0x3044f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3044f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3044fc:
    // 0x3044fc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3044fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_304500:
    // 0x304500: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x304500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_304504:
    // 0x304504: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x304504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_304508:
    // 0x304508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30450c:
    // 0x30450c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x30450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304510:
    // 0x304510: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x304510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_304514:
    // 0x304514: 0x4600a028  max.s       $f0, $f20, $f0
    ctx->pc = 0x304514u;
    ctx->f[0] = std::max(ctx->f[20], ctx->f[0]);
label_304518:
    // 0x304518: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x304518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30451c:
    // 0x30451c: 0x0  nop
    ctx->pc = 0x30451cu;
    // NOP
label_304520:
    // 0x304520: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_304524:
    if (ctx->pc == 0x304524u) {
        ctx->pc = 0x304524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304520u;
        // 0x304524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304528u;
        goto label_304528;
    }
    ctx->pc = 0x304520u;
    {
        const bool branch_taken_0x304520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304520) {
            ctx->pc = 0x304524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304520u;
            // 0x304524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304528u;
            goto label_304528;
        }
    }
    ctx->pc = 0x304528u;
label_304528:
    // 0x304528: 0x14a0ffc4  bnez        $a1, . + 4 + (-0x3C << 2)
label_30452c:
    if (ctx->pc == 0x30452Cu) {
        ctx->pc = 0x30452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304528u;
        // 0x30452c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304530u;
        goto label_304530;
    }
    ctx->pc = 0x304528u;
    {
        const bool branch_taken_0x304528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304528u;
        // 0x30452c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304528) {
            ctx->pc = 0x30443Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30443c;
        }
    }
    ctx->pc = 0x304530u;
label_304530:
    // 0x304530: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x304530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_304534:
    // 0x304534: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x304534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_304538:
    // 0x304538: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x304538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_30453c:
    // 0x30453c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_304540:
    if (ctx->pc == 0x304540u) {
        ctx->pc = 0x304540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30453Cu;
        // 0x304540: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304544u;
        goto label_304544;
    }
    ctx->pc = 0x30453Cu;
    {
        const bool branch_taken_0x30453c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30453Cu;
        // 0x304540: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30453c) {
            ctx->pc = 0x3044B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3044b0;
        }
    }
    ctx->pc = 0x304544u;
label_304544:
    // 0x304544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304548:
    // 0x304548: 0x16c20024  bne         $s6, $v0, . + 4 + (0x24 << 2)
label_30454c:
    if (ctx->pc == 0x30454Cu) {
        ctx->pc = 0x30454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304548u;
        // 0x30454c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304550u;
        goto label_304550;
    }
    ctx->pc = 0x304548u;
    {
        const bool branch_taken_0x304548 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x30454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304548u;
        // 0x30454c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304548) {
            ctx->pc = 0x3045DCu;
            goto label_3045dc;
        }
    }
    ctx->pc = 0x304550u;
label_304550:
    // 0x304550: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x304550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_304554:
    // 0x304554: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_304558:
    if (ctx->pc == 0x304558u) {
        ctx->pc = 0x304558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304554u;
        // 0x304558: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30455Cu;
        goto label_30455c;
    }
    ctx->pc = 0x304554u;
    {
        const bool branch_taken_0x304554 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304554u;
        // 0x304558: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304554) {
            ctx->pc = 0x304568u;
            goto label_304568;
        }
    }
    ctx->pc = 0x30455Cu;
label_30455c:
    // 0x30455c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_304560:
    // 0x304560: 0x10000002  b           . + 4 + (0x2 << 2)
label_304564:
    if (ctx->pc == 0x304564u) {
        ctx->pc = 0x304564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304560u;
        // 0x304564: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304568u;
        goto label_304568;
    }
    ctx->pc = 0x304560u;
    {
        const bool branch_taken_0x304560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304560u;
        // 0x304564: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304560) {
            ctx->pc = 0x30456Cu;
            goto label_30456c;
        }
    }
    ctx->pc = 0x304568u;
label_304568:
    // 0x304568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30456c:
    // 0x30456c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304570:
    // 0x304570: 0x24120082  addiu       $s2, $zero, 0x82
    ctx->pc = 0x304570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_304574:
    // 0x304574: 0x1000000c  b           . + 4 + (0xC << 2)
label_304578:
    if (ctx->pc == 0x304578u) {
        ctx->pc = 0x304578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304574u;
        // 0x304578: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30457Cu;
        goto label_30457c;
    }
    ctx->pc = 0x304574u;
    {
        const bool branch_taken_0x304574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304574u;
        // 0x304578: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304574) {
            ctx->pc = 0x3045A8u;
            goto label_3045a8;
        }
    }
    ctx->pc = 0x30457Cu;
label_30457c:
    // 0x30457c: 0x0  nop
    ctx->pc = 0x30457cu;
    // NOP
label_304580:
    // 0x304580: 0xc0a35f6  jal         func_28D7D8
label_304584:
    if (ctx->pc == 0x304584u) {
        ctx->pc = 0x304584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304580u;
        // 0x304584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304588u;
        goto label_304588;
    }
    ctx->pc = 0x304580u;
    SET_GPR_U32(ctx, 31, 0x304588u);
    ctx->pc = 0x304584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304580u;
    // 0x304584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x304580u, 0x304588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304588u;
label_304588:
    // 0x304588: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x304588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_30458c:
    // 0x30458c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_304590:
    if (ctx->pc == 0x304590u) {
        ctx->pc = 0x304590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30458Cu;
        // 0x304590: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304594u;
        goto label_304594;
    }
    ctx->pc = 0x30458Cu;
    {
        const bool branch_taken_0x30458c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30458Cu;
        // 0x304590: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30458c) {
            ctx->pc = 0x3045A0u;
            goto label_3045a0;
        }
    }
    ctx->pc = 0x304594u;
label_304594:
    // 0x304594: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x304594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_304598:
    // 0x304598: 0x10000002  b           . + 4 + (0x2 << 2)
label_30459c:
    if (ctx->pc == 0x30459Cu) {
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304598u;
        // 0x30459c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045A0u;
        goto label_3045a0;
    }
    ctx->pc = 0x304598u;
    {
        const bool branch_taken_0x304598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304598u;
        // 0x30459c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304598) {
            ctx->pc = 0x3045A4u;
            goto label_3045a4;
        }
    }
    ctx->pc = 0x3045A0u;
label_3045a0:
    // 0x3045a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3045a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3045a4:
    // 0x3045a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3045a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3045a8:
    // 0x3045a8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3045a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3045ac:
    // 0x3045ac: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3045acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3045b0:
    // 0x3045b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3045b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3045b4:
    // 0x3045b4: 0x40f809  jalr        $v0
label_3045b8:
    if (ctx->pc == 0x3045B8u) {
        ctx->pc = 0x3045B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045B4u;
        // 0x3045b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045BCu;
        goto label_3045bc;
    }
    ctx->pc = 0x3045B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3045BCu);
        ctx->pc = 0x3045B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045B4u;
        // 0x3045b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3045B4u, 0x3045BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3045BCu;
label_3045bc:
    // 0x3045bc: 0x1452fff0  bne         $v0, $s2, . + 4 + (-0x10 << 2)
label_3045c0:
    if (ctx->pc == 0x3045C0u) {
        ctx->pc = 0x3045C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045BCu;
        // 0x3045c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045C4u;
        goto label_3045c4;
    }
    ctx->pc = 0x3045BCu;
    {
        const bool branch_taken_0x3045bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3045C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045BCu;
        // 0x3045c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045bc) {
            ctx->pc = 0x304580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304580;
        }
    }
    ctx->pc = 0x3045C4u;
label_3045c4:
    // 0x3045c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3045c8:
    if (ctx->pc == 0x3045C8u) {
        ctx->pc = 0x3045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045C4u;
        // 0x3045c8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045CCu;
        goto label_3045cc;
    }
    ctx->pc = 0x3045C4u;
    {
        const bool branch_taken_0x3045c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045C4u;
        // 0x3045c8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045c4) {
            ctx->pc = 0x3045DCu;
            goto label_3045dc;
        }
    }
    ctx->pc = 0x3045CCu;
label_3045cc:
    // 0x3045cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3045ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3045d0:
    // 0x3045d0: 0xc0a4b60  jal         func_292D80
label_3045d4:
    if (ctx->pc == 0x3045D4u) {
        ctx->pc = 0x3045D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045D0u;
        // 0x3045d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045D8u;
        goto label_3045d8;
    }
    ctx->pc = 0x3045D0u;
    SET_GPR_U32(ctx, 31, 0x3045D8u);
    ctx->pc = 0x3045D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045D0u;
    // 0x3045d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x3045D0u, 0x3045D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045D8u;
label_3045d8:
    // 0x3045d8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3045d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3045dc:
    // 0x3045dc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3045dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3045e0:
    // 0x3045e0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3045e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3045e4:
    // 0x3045e4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3045e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3045e8:
    // 0x3045e8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3045e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3045ec:
    // 0x3045ec: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3045ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3045f0:
    // 0x3045f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3045f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3045f4:
    // 0x3045f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3045f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3045f8:
    // 0x3045f8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3045f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3045fc:
    // 0x3045fc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3045fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_304600:
    // 0x304600: 0x3e00008  jr          $ra
label_304604:
    if (ctx->pc == 0x304604u) {
        ctx->pc = 0x304604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304600u;
        // 0x304604: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304608u;
        goto label_fallthrough_0x304600;
    }
    ctx->pc = 0x304600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304600u;
        // 0x304604: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x304600:
    ctx->pc = 0x304608u;
}
