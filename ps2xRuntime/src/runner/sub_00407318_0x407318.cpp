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

// Function: sub_00407318
// Address: 0x407318 - 0x407730
void sub_00407318_0x407318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407318_0x407318");
#endif

    switch (ctx->pc) {
        case 0x407318u: goto label_407318;
        case 0x40731cu: goto label_40731c;
        case 0x407320u: goto label_407320;
        case 0x407324u: goto label_407324;
        case 0x407328u: goto label_407328;
        case 0x40732cu: goto label_40732c;
        case 0x407330u: goto label_407330;
        case 0x407334u: goto label_407334;
        case 0x407338u: goto label_407338;
        case 0x40733cu: goto label_40733c;
        case 0x407340u: goto label_407340;
        case 0x407344u: goto label_407344;
        case 0x407348u: goto label_407348;
        case 0x40734cu: goto label_40734c;
        case 0x407350u: goto label_407350;
        case 0x407354u: goto label_407354;
        case 0x407358u: goto label_407358;
        case 0x40735cu: goto label_40735c;
        case 0x407360u: goto label_407360;
        case 0x407364u: goto label_407364;
        case 0x407368u: goto label_407368;
        case 0x40736cu: goto label_40736c;
        case 0x407370u: goto label_407370;
        case 0x407374u: goto label_407374;
        case 0x407378u: goto label_407378;
        case 0x40737cu: goto label_40737c;
        case 0x407380u: goto label_407380;
        case 0x407384u: goto label_407384;
        case 0x407388u: goto label_407388;
        case 0x40738cu: goto label_40738c;
        case 0x407390u: goto label_407390;
        case 0x407394u: goto label_407394;
        case 0x407398u: goto label_407398;
        case 0x40739cu: goto label_40739c;
        case 0x4073a0u: goto label_4073a0;
        case 0x4073a4u: goto label_4073a4;
        case 0x4073a8u: goto label_4073a8;
        case 0x4073acu: goto label_4073ac;
        case 0x4073b0u: goto label_4073b0;
        case 0x4073b4u: goto label_4073b4;
        case 0x4073b8u: goto label_4073b8;
        case 0x4073bcu: goto label_4073bc;
        case 0x4073c0u: goto label_4073c0;
        case 0x4073c4u: goto label_4073c4;
        case 0x4073c8u: goto label_4073c8;
        case 0x4073ccu: goto label_4073cc;
        case 0x4073d0u: goto label_4073d0;
        case 0x4073d4u: goto label_4073d4;
        case 0x4073d8u: goto label_4073d8;
        case 0x4073dcu: goto label_4073dc;
        case 0x4073e0u: goto label_4073e0;
        case 0x4073e4u: goto label_4073e4;
        case 0x4073e8u: goto label_4073e8;
        case 0x4073ecu: goto label_4073ec;
        case 0x4073f0u: goto label_4073f0;
        case 0x4073f4u: goto label_4073f4;
        case 0x4073f8u: goto label_4073f8;
        case 0x4073fcu: goto label_4073fc;
        case 0x407400u: goto label_407400;
        case 0x407404u: goto label_407404;
        case 0x407408u: goto label_407408;
        case 0x40740cu: goto label_40740c;
        case 0x407410u: goto label_407410;
        case 0x407414u: goto label_407414;
        case 0x407418u: goto label_407418;
        case 0x40741cu: goto label_40741c;
        case 0x407420u: goto label_407420;
        case 0x407424u: goto label_407424;
        case 0x407428u: goto label_407428;
        case 0x40742cu: goto label_40742c;
        case 0x407430u: goto label_407430;
        case 0x407434u: goto label_407434;
        case 0x407438u: goto label_407438;
        case 0x40743cu: goto label_40743c;
        case 0x407440u: goto label_407440;
        case 0x407444u: goto label_407444;
        case 0x407448u: goto label_407448;
        case 0x40744cu: goto label_40744c;
        case 0x407450u: goto label_407450;
        case 0x407454u: goto label_407454;
        case 0x407458u: goto label_407458;
        case 0x40745cu: goto label_40745c;
        case 0x407460u: goto label_407460;
        case 0x407464u: goto label_407464;
        case 0x407468u: goto label_407468;
        case 0x40746cu: goto label_40746c;
        case 0x407470u: goto label_407470;
        case 0x407474u: goto label_407474;
        case 0x407478u: goto label_407478;
        case 0x40747cu: goto label_40747c;
        case 0x407480u: goto label_407480;
        case 0x407484u: goto label_407484;
        case 0x407488u: goto label_407488;
        case 0x40748cu: goto label_40748c;
        case 0x407490u: goto label_407490;
        case 0x407494u: goto label_407494;
        case 0x407498u: goto label_407498;
        case 0x40749cu: goto label_40749c;
        case 0x4074a0u: goto label_4074a0;
        case 0x4074a4u: goto label_4074a4;
        case 0x4074a8u: goto label_4074a8;
        case 0x4074acu: goto label_4074ac;
        case 0x4074b0u: goto label_4074b0;
        case 0x4074b4u: goto label_4074b4;
        case 0x4074b8u: goto label_4074b8;
        case 0x4074bcu: goto label_4074bc;
        case 0x4074c0u: goto label_4074c0;
        case 0x4074c4u: goto label_4074c4;
        case 0x4074c8u: goto label_4074c8;
        case 0x4074ccu: goto label_4074cc;
        case 0x4074d0u: goto label_4074d0;
        case 0x4074d4u: goto label_4074d4;
        case 0x4074d8u: goto label_4074d8;
        case 0x4074dcu: goto label_4074dc;
        case 0x4074e0u: goto label_4074e0;
        case 0x4074e4u: goto label_4074e4;
        case 0x4074e8u: goto label_4074e8;
        case 0x4074ecu: goto label_4074ec;
        case 0x4074f0u: goto label_4074f0;
        case 0x4074f4u: goto label_4074f4;
        case 0x4074f8u: goto label_4074f8;
        case 0x4074fcu: goto label_4074fc;
        case 0x407500u: goto label_407500;
        case 0x407504u: goto label_407504;
        case 0x407508u: goto label_407508;
        case 0x40750cu: goto label_40750c;
        case 0x407510u: goto label_407510;
        case 0x407514u: goto label_407514;
        case 0x407518u: goto label_407518;
        case 0x40751cu: goto label_40751c;
        case 0x407520u: goto label_407520;
        case 0x407524u: goto label_407524;
        case 0x407528u: goto label_407528;
        case 0x40752cu: goto label_40752c;
        case 0x407530u: goto label_407530;
        case 0x407534u: goto label_407534;
        case 0x407538u: goto label_407538;
        case 0x40753cu: goto label_40753c;
        case 0x407540u: goto label_407540;
        case 0x407544u: goto label_407544;
        case 0x407548u: goto label_407548;
        case 0x40754cu: goto label_40754c;
        case 0x407550u: goto label_407550;
        case 0x407554u: goto label_407554;
        case 0x407558u: goto label_407558;
        case 0x40755cu: goto label_40755c;
        case 0x407560u: goto label_407560;
        case 0x407564u: goto label_407564;
        case 0x407568u: goto label_407568;
        case 0x40756cu: goto label_40756c;
        case 0x407570u: goto label_407570;
        case 0x407574u: goto label_407574;
        case 0x407578u: goto label_407578;
        case 0x40757cu: goto label_40757c;
        case 0x407580u: goto label_407580;
        case 0x407584u: goto label_407584;
        case 0x407588u: goto label_407588;
        case 0x40758cu: goto label_40758c;
        case 0x407590u: goto label_407590;
        case 0x407594u: goto label_407594;
        case 0x407598u: goto label_407598;
        case 0x40759cu: goto label_40759c;
        case 0x4075a0u: goto label_4075a0;
        case 0x4075a4u: goto label_4075a4;
        case 0x4075a8u: goto label_4075a8;
        case 0x4075acu: goto label_4075ac;
        case 0x4075b0u: goto label_4075b0;
        case 0x4075b4u: goto label_4075b4;
        case 0x4075b8u: goto label_4075b8;
        case 0x4075bcu: goto label_4075bc;
        case 0x4075c0u: goto label_4075c0;
        case 0x4075c4u: goto label_4075c4;
        case 0x4075c8u: goto label_4075c8;
        case 0x4075ccu: goto label_4075cc;
        case 0x4075d0u: goto label_4075d0;
        case 0x4075d4u: goto label_4075d4;
        case 0x4075d8u: goto label_4075d8;
        case 0x4075dcu: goto label_4075dc;
        case 0x4075e0u: goto label_4075e0;
        case 0x4075e4u: goto label_4075e4;
        case 0x4075e8u: goto label_4075e8;
        case 0x4075ecu: goto label_4075ec;
        case 0x4075f0u: goto label_4075f0;
        case 0x4075f4u: goto label_4075f4;
        case 0x4075f8u: goto label_4075f8;
        case 0x4075fcu: goto label_4075fc;
        case 0x407600u: goto label_407600;
        case 0x407604u: goto label_407604;
        case 0x407608u: goto label_407608;
        case 0x40760cu: goto label_40760c;
        case 0x407610u: goto label_407610;
        case 0x407614u: goto label_407614;
        case 0x407618u: goto label_407618;
        case 0x40761cu: goto label_40761c;
        case 0x407620u: goto label_407620;
        case 0x407624u: goto label_407624;
        case 0x407628u: goto label_407628;
        case 0x40762cu: goto label_40762c;
        case 0x407630u: goto label_407630;
        case 0x407634u: goto label_407634;
        case 0x407638u: goto label_407638;
        case 0x40763cu: goto label_40763c;
        case 0x407640u: goto label_407640;
        case 0x407644u: goto label_407644;
        case 0x407648u: goto label_407648;
        case 0x40764cu: goto label_40764c;
        case 0x407650u: goto label_407650;
        case 0x407654u: goto label_407654;
        case 0x407658u: goto label_407658;
        case 0x40765cu: goto label_40765c;
        case 0x407660u: goto label_407660;
        case 0x407664u: goto label_407664;
        case 0x407668u: goto label_407668;
        case 0x40766cu: goto label_40766c;
        case 0x407670u: goto label_407670;
        case 0x407674u: goto label_407674;
        case 0x407678u: goto label_407678;
        case 0x40767cu: goto label_40767c;
        case 0x407680u: goto label_407680;
        case 0x407684u: goto label_407684;
        case 0x407688u: goto label_407688;
        case 0x40768cu: goto label_40768c;
        case 0x407690u: goto label_407690;
        case 0x407694u: goto label_407694;
        case 0x407698u: goto label_407698;
        case 0x40769cu: goto label_40769c;
        case 0x4076a0u: goto label_4076a0;
        case 0x4076a4u: goto label_4076a4;
        case 0x4076a8u: goto label_4076a8;
        case 0x4076acu: goto label_4076ac;
        case 0x4076b0u: goto label_4076b0;
        case 0x4076b4u: goto label_4076b4;
        case 0x4076b8u: goto label_4076b8;
        case 0x4076bcu: goto label_4076bc;
        case 0x4076c0u: goto label_4076c0;
        case 0x4076c4u: goto label_4076c4;
        case 0x4076c8u: goto label_4076c8;
        case 0x4076ccu: goto label_4076cc;
        case 0x4076d0u: goto label_4076d0;
        case 0x4076d4u: goto label_4076d4;
        case 0x4076d8u: goto label_4076d8;
        case 0x4076dcu: goto label_4076dc;
        case 0x4076e0u: goto label_4076e0;
        case 0x4076e4u: goto label_4076e4;
        case 0x4076e8u: goto label_4076e8;
        case 0x4076ecu: goto label_4076ec;
        case 0x4076f0u: goto label_4076f0;
        case 0x4076f4u: goto label_4076f4;
        case 0x4076f8u: goto label_4076f8;
        case 0x4076fcu: goto label_4076fc;
        case 0x407700u: goto label_407700;
        case 0x407704u: goto label_407704;
        case 0x407708u: goto label_407708;
        case 0x40770cu: goto label_40770c;
        case 0x407710u: goto label_407710;
        case 0x407714u: goto label_407714;
        case 0x407718u: goto label_407718;
        case 0x40771cu: goto label_40771c;
        case 0x407720u: goto label_407720;
        case 0x407724u: goto label_407724;
        case 0x407728u: goto label_407728;
        case 0x40772cu: goto label_40772c;
        default: break;
    }

    ctx->pc = 0x407318u;

label_407318:
    // 0x407318: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x407318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_40731c:
    // 0x40731c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407320:
    // 0x407320: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x407320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_407324:
    // 0x407324: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x407324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_407328:
    // 0x407328: 0x245131a0  addiu       $s1, $v0, 0x31A0
    ctx->pc = 0x407328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
label_40732c:
    // 0x40732c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x40732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_407330:
    // 0x407330: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x407330u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_407334:
    // 0x407334: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x407334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407338:
    // 0x407338: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x407338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_40733c:
    // 0x40733c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x40733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_407340:
    // 0x407340: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x407340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_407344:
    // 0x407344: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x407344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_407348:
    // 0x407348: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x407348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_40734c:
    // 0x40734c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_407350:
    // 0x407350: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x407350u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_407354:
    // 0x407354: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x407354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_407358:
    // 0x407358: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x407358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_40735c:
    // 0x40735c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40735cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_407360:
    // 0x407360: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x407360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_407364:
    // 0x407364: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x407364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407368:
    // 0x407368: 0x84a30188  lh          $v1, 0x188($a1)
    ctx->pc = 0x407368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 392)));
label_40736c:
    // 0x40736c: 0x8ca2018c  lw          $v0, 0x18C($a1)
    ctx->pc = 0x40736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
label_407370:
    // 0x407370: 0x40f809  jalr        $v0
label_407374:
    if (ctx->pc == 0x407374u) {
        ctx->pc = 0x407374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407370u;
        // 0x407374: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407378u;
        goto label_407378;
    }
    ctx->pc = 0x407370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407378u);
        ctx->pc = 0x407374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407370u;
        // 0x407374: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407370u, 0x407378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407378u;
label_407378:
    // 0x407378: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x407378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40737c:
    // 0x40737c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_407380:
    // 0x407380: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x407380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_407384:
    // 0x407384: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x407384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_407388:
    // 0x407388: 0xc136b24  jal         func_4DAC90
label_40738c:
    if (ctx->pc == 0x40738Cu) {
        ctx->pc = 0x40738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407388u;
        // 0x40738c: 0x460cbb01  sub.s       $f12, $f23, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407390u;
        goto label_407390;
    }
    ctx->pc = 0x407388u;
    SET_GPR_U32(ctx, 31, 0x407390u);
    ctx->pc = 0x40738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407388u;
    // 0x40738c: 0x460cbb01  sub.s       $f12, $f23, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x407388u, 0x407390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407390u;
label_407390:
    // 0x407390: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x407390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407394:
    // 0x407394: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x407394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_407398:
    // 0x407398: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x407398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_40739c:
    // 0x40739c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x40739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4073a0:
    // 0x4073a0: 0xc136b24  jal         func_4DAC90
label_4073a4:
    if (ctx->pc == 0x4073A4u) {
        ctx->pc = 0x4073A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073A0u;
        // 0x4073a4: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4073A8u;
        goto label_4073a8;
    }
    ctx->pc = 0x4073A0u;
    SET_GPR_U32(ctx, 31, 0x4073A8u);
    ctx->pc = 0x4073A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4073A0u;
    // 0x4073a4: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4073A0u, 0x4073A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4073A8u;
label_4073a8:
    // 0x4073a8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x4073a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4073ac:
    // 0x4073ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4073acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4073b0:
    // 0x4073b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4073b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4073b4:
    // 0x4073b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4073b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4073b8:
    // 0x4073b8: 0xc136b18  jal         func_4DAC60
label_4073bc:
    if (ctx->pc == 0x4073BCu) {
        ctx->pc = 0x4073BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073B8u;
        // 0x4073bc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4073C0u;
        goto label_4073c0;
    }
    ctx->pc = 0x4073B8u;
    SET_GPR_U32(ctx, 31, 0x4073C0u);
    ctx->pc = 0x4073BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4073B8u;
    // 0x4073bc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4073B8u, 0x4073C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4073C0u;
label_4073c0:
    // 0x4073c0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x4073c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4073c4:
    // 0x4073c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x4073c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_4073c8:
    // 0x4073c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x4073c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_4073cc:
    // 0x4073cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4073ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4073d0:
    // 0x4073d0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x4073d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_4073d4:
    // 0x4073d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4073d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4073d8:
    // 0x4073d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x4073d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4073dc:
    // 0x4073dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4073dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4073e0:
    // 0x4073e0: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x4073e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4073e4:
    // 0x4073e4: 0x0  nop
    ctx->pc = 0x4073e4u;
    // NOP
label_4073e8:
    // 0x4073e8: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_4073ec:
    if (ctx->pc == 0x4073ECu) {
        ctx->pc = 0x4073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073E8u;
        // 0x4073ec: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4073F0u;
        goto label_4073f0;
    }
    ctx->pc = 0x4073E8u;
    {
        const bool branch_taken_0x4073e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073E8u;
        // 0x4073ec: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4073e8) {
            ctx->pc = 0x407494u;
            goto label_407494;
        }
    }
    ctx->pc = 0x4073F0u;
label_4073f0:
    // 0x4073f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4073f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4073f4:
    // 0x4073f4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x4073f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_4073f8:
    // 0x4073f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4073f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_4073fc:
    // 0x4073fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4073fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_407400:
    // 0x407400: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x407400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_407404:
    // 0x407404: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x407404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_407408:
    // 0x407408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40740c:
    // 0x40740c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x40740cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_407410:
    // 0x407410: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x407410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_407414:
    // 0x407414: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x407414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_407418:
    // 0x407418: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x407418u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_40741c:
    // 0x40741c: 0xc0cd508  jal         func_335420
label_407420:
    if (ctx->pc == 0x407420u) {
        ctx->pc = 0x407420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40741Cu;
        // 0x407420: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407424u;
        goto label_407424;
    }
    ctx->pc = 0x40741Cu;
    SET_GPR_U32(ctx, 31, 0x407424u);
    ctx->pc = 0x407420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40741Cu;
    // 0x407420: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x40741Cu, 0x407424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407424u;
label_407424:
    // 0x407424: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x407424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_407428:
    // 0x407428: 0xc0cd550  jal         func_335540
label_40742c:
    if (ctx->pc == 0x40742Cu) {
        ctx->pc = 0x40742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407428u;
        // 0x40742c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407430u;
        goto label_407430;
    }
    ctx->pc = 0x407428u;
    SET_GPR_U32(ctx, 31, 0x407430u);
    ctx->pc = 0x40742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407428u;
    // 0x40742c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x407428u, 0x407430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407430u;
label_407430:
    // 0x407430: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x407430u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407434:
    // 0x407434: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x407434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_407438:
    // 0x407438: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x407438u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_40743c:
    // 0x40743c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407440:
    // 0x407440: 0xc0cd508  jal         func_335420
label_407444:
    if (ctx->pc == 0x407444u) {
        ctx->pc = 0x407444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407440u;
        // 0x407444: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407448u;
        goto label_407448;
    }
    ctx->pc = 0x407440u;
    SET_GPR_U32(ctx, 31, 0x407448u);
    ctx->pc = 0x407444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407440u;
    // 0x407444: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x407440u, 0x407448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407448u;
label_407448:
    // 0x407448: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x407448u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40744c:
    // 0x40744c: 0xc0cd550  jal         func_335540
label_407450:
    if (ctx->pc == 0x407450u) {
        ctx->pc = 0x407450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40744Cu;
        // 0x407450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407454u;
        goto label_407454;
    }
    ctx->pc = 0x40744Cu;
    SET_GPR_U32(ctx, 31, 0x407454u);
    ctx->pc = 0x407450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40744Cu;
    // 0x407450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x40744Cu, 0x407454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407454u;
label_407454:
    // 0x407454: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x407454u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407458:
    // 0x407458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40745c:
    // 0x40745c: 0xe6340024  swc1        $f20, 0x24($s1)
    ctx->pc = 0x40745cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_407460:
    // 0x407460: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x407460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_407464:
    // 0x407464: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x407464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_407468:
    // 0x407468: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x407468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_40746c:
    // 0x40746c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x40746cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_407470:
    // 0x407470: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x407470u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_407474:
    // 0x407474: 0x4a0003bf  vwaitq
    ctx->pc = 0x407474u;
    // VWAITQ (Q already resolved in this runtime)
label_407478:
    // 0x407478: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x407478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_40747c:
    // 0x40747c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x40747cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_407480:
    // 0x407480: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x407480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_407484:
    // 0x407484: 0xc0cd550  jal         func_335540
label_407488:
    if (ctx->pc == 0x407488u) {
        ctx->pc = 0x40748Cu;
        goto label_40748c;
    }
    ctx->pc = 0x407484u;
    SET_GPR_U32(ctx, 31, 0x40748Cu);
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x407484u, 0x40748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40748Cu;
label_40748c:
    // 0x40748c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x40748cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407490:
    // 0x407490: 0xe6340028  swc1        $f20, 0x28($s1)
    ctx->pc = 0x407490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_407494:
    // 0x407494: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x407494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_407498:
    // 0x407498: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_40749c:
    if (ctx->pc == 0x40749Cu) {
        ctx->pc = 0x40749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407498u;
        // 0x40749c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4074A0u;
        goto label_4074a0;
    }
    ctx->pc = 0x407498u;
    {
        const bool branch_taken_0x407498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407498u;
        // 0x40749c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407498) {
            ctx->pc = 0x40752Cu;
            goto label_40752c;
        }
    }
    ctx->pc = 0x4074A0u;
label_4074a0:
    // 0x4074a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4074a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4074a4:
    // 0x4074a4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4074a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4074a8:
    // 0x4074a8: 0x8c654794  lw          $a1, 0x4794($v1)
    ctx->pc = 0x4074a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18324)));
label_4074ac:
    // 0x4074ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4074acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4074b0:
    // 0x4074b0: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x4074b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_4074b4:
    // 0x4074b4: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x4074b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4074b8:
    // 0x4074b8: 0x2812  mflo        $a1
    ctx->pc = 0x4074b8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4074bc:
    // 0x4074bc: 0xc0cd4ee  jal         func_3353B8
label_4074c0:
    if (ctx->pc == 0x4074C0u) {
        ctx->pc = 0x4074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4074BCu;
        // 0x4074c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4074C4u;
        goto label_4074c4;
    }
    ctx->pc = 0x4074BCu;
    SET_GPR_U32(ctx, 31, 0x4074C4u);
    ctx->pc = 0x4074C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4074BCu;
    // 0x4074c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x4074BCu, 0x4074C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4074C4u;
label_4074c4:
    // 0x4074c4: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
label_4074c8:
    if (ctx->pc == 0x4074C8u) {
        ctx->pc = 0x4074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4074C4u;
        // 0x4074c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4074CCu;
        goto label_4074cc;
    }
    ctx->pc = 0x4074C4u;
    {
        const bool branch_taken_0x4074c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4074c4) {
            ctx->pc = 0x4074C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4074C4u;
            // 0x4074c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4076F0u;
            goto label_4076f0;
        }
    }
    ctx->pc = 0x4074CCu;
label_4074cc:
    // 0x4074cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4074ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4074d0:
    // 0x4074d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x4074d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_4074d4:
    // 0x4074d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x4074d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4074d8:
    // 0x4074d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4074d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_4074dc:
    // 0x4074dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4074dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4074e0:
    // 0x4074e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x4074e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4074e4:
    // 0x4074e4: 0xc0cd508  jal         func_335420
label_4074e8:
    if (ctx->pc == 0x4074E8u) {
        ctx->pc = 0x4074E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4074E4u;
        // 0x4074e8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4074ECu;
        goto label_4074ec;
    }
    ctx->pc = 0x4074E4u;
    SET_GPR_U32(ctx, 31, 0x4074ECu);
    ctx->pc = 0x4074E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4074E4u;
    // 0x4074e8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x4074E4u, 0x4074ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4074ECu;
label_4074ec:
    // 0x4074ec: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x4074ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_4074f0:
    // 0x4074f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4074f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4074f4:
    // 0x4074f4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x4074f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_4074f8:
    // 0x4074f8: 0xc0cd508  jal         func_335420
label_4074fc:
    if (ctx->pc == 0x4074FCu) {
        ctx->pc = 0x4074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4074F8u;
        // 0x4074fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407500u;
        goto label_407500;
    }
    ctx->pc = 0x4074F8u;
    SET_GPR_U32(ctx, 31, 0x407500u);
    ctx->pc = 0x4074FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4074F8u;
    // 0x4074fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x4074F8u, 0x407500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407500u;
label_407500:
    // 0x407500: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x407500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_407504:
    // 0x407504: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x407504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_407508:
    // 0x407508: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x407508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40750c:
    // 0x40750c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x40750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_407510:
    // 0x407510: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x407510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_407514:
    // 0x407514: 0xe6540010  swc1        $f20, 0x10($s2)
    ctx->pc = 0x407514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_407518:
    // 0x407518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x407518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40751c:
    // 0x40751c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x40751cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_407520:
    // 0x407520: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x407520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_407524:
    // 0x407524: 0x10000071  b           . + 4 + (0x71 << 2)
label_407528:
    if (ctx->pc == 0x407528u) {
        ctx->pc = 0x407528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407524u;
        // 0x407528: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40752Cu;
        goto label_40752c;
    }
    ctx->pc = 0x407524u;
    {
        const bool branch_taken_0x407524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407524u;
        // 0x407528: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x407524) {
            ctx->pc = 0x4076ECu;
            goto label_4076ec;
        }
    }
    ctx->pc = 0x40752Cu;
label_40752c:
    // 0x40752c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x40752cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407530:
    // 0x407530: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x407530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_407534:
    // 0x407534: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x407534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407538:
    // 0x407538: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x407538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_40753c:
    // 0x40753c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_407540:
    if (ctx->pc == 0x407540u) {
        ctx->pc = 0x407540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40753Cu;
        // 0x407540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407544u;
        goto label_407544;
    }
    ctx->pc = 0x40753Cu;
    {
        const bool branch_taken_0x40753c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x407540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40753Cu;
        // 0x407540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40753c) {
            ctx->pc = 0x40757Cu;
            goto label_40757c;
        }
    }
    ctx->pc = 0x407544u;
label_407544:
    // 0x407544: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x407544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_407548:
    // 0x407548: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x407548u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40754c:
    // 0x40754c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x40754cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_407550:
    // 0x407550: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x407550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_407554:
    // 0x407554: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x407554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_407558:
    // 0x407558: 0xc0e409a  jal         func_390268
label_40755c:
    if (ctx->pc == 0x40755Cu) {
        ctx->pc = 0x40755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407558u;
        // 0x40755c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407560u;
        goto label_407560;
    }
    ctx->pc = 0x407558u;
    SET_GPR_U32(ctx, 31, 0x407560u);
    ctx->pc = 0x40755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407558u;
    // 0x40755c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x407558u, 0x407560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407560u;
label_407560:
    // 0x407560: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x407560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_407564:
    // 0x407564: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x407564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_407568:
    // 0x407568: 0x904405b7  lbu         $a0, 0x5B7($v0)
    ctx->pc = 0x407568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
label_40756c:
    // 0x40756c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x40756cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_407570:
    // 0x407570: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x407570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_407574:
    // 0x407574: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_407578:
    if (ctx->pc == 0x407578u) {
        ctx->pc = 0x407578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407574u;
        // 0x407578: 0x2a4800b  movn        $s0, $s5, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40757Cu;
        goto label_40757c;
    }
    ctx->pc = 0x407574u;
    {
        const bool branch_taken_0x407574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x407578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407574u;
        // 0x407578: 0x2a4800b  movn        $s0, $s5, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407574) {
            ctx->pc = 0x407550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_407550;
        }
    }
    ctx->pc = 0x40757Cu;
label_40757c:
    // 0x40757c: 0x5600003e  bnel        $s0, $zero, . + 4 + (0x3E << 2)
label_407580:
    if (ctx->pc == 0x407580u) {
        ctx->pc = 0x407580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40757Cu;
        // 0x407580: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407584u;
        goto label_407584;
    }
    ctx->pc = 0x40757Cu;
    {
        const bool branch_taken_0x40757c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40757c) {
            ctx->pc = 0x407580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40757Cu;
            // 0x407580: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x407678u;
            goto label_407678;
        }
    }
    ctx->pc = 0x407584u;
label_407584:
    // 0x407584: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x407584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_407588:
    // 0x407588: 0x8c6371a0  lw          $v1, 0x71A0($v1)
    ctx->pc = 0x407588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29088)));
label_40758c:
    // 0x40758c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_407590:
    // 0x407590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_407594:
    if (ctx->pc == 0x407594u) {
        ctx->pc = 0x407594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407590u;
        // 0x407594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407598u;
        goto label_407598;
    }
    ctx->pc = 0x407590u;
    {
        const bool branch_taken_0x407590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407590u;
        // 0x407594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407590) {
            ctx->pc = 0x4075A0u;
            goto label_4075a0;
        }
    }
    ctx->pc = 0x407598u;
label_407598:
    // 0x407598: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x407598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_40759c:
    // 0x40759c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x40759cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4075a0:
    // 0x4075a0: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_4075a4:
    if (ctx->pc == 0x4075A4u) {
        ctx->pc = 0x4075A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075A0u;
        // 0x4075a4: 0x8ed1489c  lw          $s1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4075A8u;
        goto label_4075a8;
    }
    ctx->pc = 0x4075A0u;
    {
        const bool branch_taken_0x4075a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4075A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075A0u;
        // 0x4075a4: 0x8ed1489c  lw          $s1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4075a0) {
            ctx->pc = 0x407674u;
            goto label_407674;
        }
    }
    ctx->pc = 0x4075A8u;
label_4075a8:
    // 0x4075a8: 0xc136ad6  jal         func_4DAB58
label_4075ac:
    if (ctx->pc == 0x4075ACu) {
        ctx->pc = 0x4075ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075A8u;
        // 0x4075ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4075B0u;
        goto label_4075b0;
    }
    ctx->pc = 0x4075A8u;
    SET_GPR_U32(ctx, 31, 0x4075B0u);
    ctx->pc = 0x4075ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4075A8u;
    // 0x4075ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x4075A8u, 0x4075B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4075B0u;
label_4075b0:
    // 0x4075b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4075b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4075b4:
    // 0x4075b4: 0xc136ad4  jal         func_4DAB50
label_4075b8:
    if (ctx->pc == 0x4075B8u) {
        ctx->pc = 0x4075B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075B4u;
        // 0x4075b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4075BCu;
        goto label_4075bc;
    }
    ctx->pc = 0x4075B4u;
    SET_GPR_U32(ctx, 31, 0x4075BCu);
    ctx->pc = 0x4075B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4075B4u;
    // 0x4075b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x4075B4u, 0x4075BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4075BCu;
label_4075bc:
    // 0x4075bc: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x4075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_4075c0:
    // 0x4075c0: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x4075c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_4075c4:
    // 0x4075c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4075c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4075c8:
    // 0x4075c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4075c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4075cc:
    // 0x4075cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4075ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4075d0:
    // 0x4075d0: 0x10440028  beq         $v0, $a0, . + 4 + (0x28 << 2)
label_4075d4:
    if (ctx->pc == 0x4075D4u) {
        ctx->pc = 0x4075D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075D0u;
        // 0x4075d4: 0x8ec2489c  lw          $v0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4075D8u;
        goto label_4075d8;
    }
    ctx->pc = 0x4075D0u;
    {
        const bool branch_taken_0x4075d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4075D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075D0u;
        // 0x4075d4: 0x8ec2489c  lw          $v0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4075d0) {
            ctx->pc = 0x407674u;
            goto label_407674;
        }
    }
    ctx->pc = 0x4075D8u;
label_4075d8:
    // 0x4075d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4075d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4075dc:
    // 0x4075dc: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x4075dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_4075e0:
    // 0x4075e0: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
label_4075e4:
    if (ctx->pc == 0x4075E4u) {
        ctx->pc = 0x4075E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075E0u;
        // 0x4075e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4075E8u;
        goto label_4075e8;
    }
    ctx->pc = 0x4075E0u;
    {
        const bool branch_taken_0x4075e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4075E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075E0u;
        // 0x4075e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4075e0) {
            ctx->pc = 0x407674u;
            goto label_407674;
        }
    }
    ctx->pc = 0x4075E8u;
label_4075e8:
    // 0x4075e8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4075e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4075ec:
    // 0x4075ec: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x4075ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_4075f0:
    // 0x4075f0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x4075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_4075f4:
    // 0x4075f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4075f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4075f8:
    // 0x4075f8: 0x2c424e21  sltiu       $v0, $v0, 0x4E21
    ctx->pc = 0x4075f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20001) ? 1 : 0);
label_4075fc:
    // 0x4075fc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_407600:
    if (ctx->pc == 0x407600u) {
        ctx->pc = 0x407600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075FCu;
        // 0x407600: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407604u;
        goto label_407604;
    }
    ctx->pc = 0x4075FCu;
    {
        const bool branch_taken_0x4075fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4075fc) {
            ctx->pc = 0x407600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4075FCu;
            // 0x407600: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x407678u;
            goto label_407678;
        }
    }
    ctx->pc = 0x407604u;
label_407604:
    // 0x407604: 0xc043d5e  jal         func_10F578
label_407608:
    if (ctx->pc == 0x407608u) {
        ctx->pc = 0x407608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407604u;
        // 0x407608: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40760Cu;
        goto label_40760c;
    }
    ctx->pc = 0x407604u;
    SET_GPR_U32(ctx, 31, 0x40760Cu);
    ctx->pc = 0x407608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407604u;
    // 0x407608: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x407604u, 0x40760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40760Cu;
label_40760c:
    // 0x40760c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_407610:
    if (ctx->pc == 0x407610u) {
        ctx->pc = 0x407610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40760Cu;
        // 0x407610: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407614u;
        goto label_407614;
    }
    ctx->pc = 0x40760Cu;
    {
        const bool branch_taken_0x40760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40760c) {
            ctx->pc = 0x407610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40760Cu;
            // 0x407610: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x407678u;
            goto label_407678;
        }
    }
    ctx->pc = 0x407614u;
label_407614:
    // 0x407614: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x407614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_407618:
    // 0x407618: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x407618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_40761c:
    // 0x40761c: 0x24c67cf0  addiu       $a2, $a2, 0x7CF0
    ctx->pc = 0x40761cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31984));
label_407620:
    // 0x407620: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x407620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407624:
    // 0x407624: 0xc10ca04  jal         func_432810
label_407628:
    if (ctx->pc == 0x407628u) {
        ctx->pc = 0x407628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407624u;
        // 0x407628: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40762Cu;
        goto label_40762c;
    }
    ctx->pc = 0x407624u;
    SET_GPR_U32(ctx, 31, 0x40762Cu);
    ctx->pc = 0x407628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407624u;
    // 0x407628: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x407624u, 0x40762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40762Cu;
label_40762c:
    // 0x40762c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x40762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_407630:
    // 0x407630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x407630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_407634:
    // 0x407634: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x407634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_407638:
    // 0x407638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_40763c:
    if (ctx->pc == 0x40763Cu) {
        ctx->pc = 0x40763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407638u;
        // 0x40763c: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407640u;
        goto label_407640;
    }
    ctx->pc = 0x407638u;
    {
        const bool branch_taken_0x407638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407638u;
        // 0x40763c: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407638) {
            ctx->pc = 0x407648u;
            goto label_407648;
        }
    }
    ctx->pc = 0x407640u;
label_407640:
    // 0x407640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x407640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407644:
    // 0x407644: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x407644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_407648:
    // 0x407648: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x407648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40764c:
    // 0x40764c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407650:
    // 0x407650: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x407650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_407654:
    // 0x407654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x407654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407658:
    // 0x407658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x407658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40765c:
    // 0x40765c: 0xc043f1c  jal         func_10FC70
label_407660:
    if (ctx->pc == 0x407660u) {
        ctx->pc = 0x407660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40765Cu;
        // 0x407660: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407664u;
        goto label_407664;
    }
    ctx->pc = 0x40765Cu;
    SET_GPR_U32(ctx, 31, 0x407664u);
    ctx->pc = 0x407660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40765Cu;
    // 0x407660: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x40765Cu, 0x407664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407664u;
label_407664:
    // 0x407664: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x407664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_407668:
    // 0x407668: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x407668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_40766c:
    // 0x40766c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x40766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_407670:
    // 0x407670: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x407670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_407674:
    // 0x407674: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x407674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_407678:
    // 0x407678: 0x26f031a0  addiu       $s0, $s7, 0x31A0
    ctx->pc = 0x407678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 12704));
label_40767c:
    // 0x40767c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x40767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407680:
    // 0x407680: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x407680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_407684:
    // 0x407684: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x407684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_407688:
    // 0x407688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x407688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40768c:
    // 0x40768c: 0x0  nop
    ctx->pc = 0x40768cu;
    // NOP
label_407690:
    // 0x407690: 0x0  nop
    ctx->pc = 0x407690u;
    // NOP
label_407694:
    // 0x407694: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x407694u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_407698:
    // 0x407698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x407698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40769c:
    // 0x40769c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x40769cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4076a0:
    // 0x4076a0: 0xc12e310  jal         func_4B8C40
label_4076a4:
    if (ctx->pc == 0x4076A4u) {
        ctx->pc = 0x4076A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076A0u;
        // 0x4076a4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4076A8u;
        goto label_4076a8;
    }
    ctx->pc = 0x4076A0u;
    SET_GPR_U32(ctx, 31, 0x4076A8u);
    ctx->pc = 0x4076A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4076A0u;
    // 0x4076a4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x4076A0u, 0x4076A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4076A8u;
label_4076a8:
    // 0x4076a8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x4076a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4076ac:
    // 0x4076ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4076acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4076b0:
    // 0x4076b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4076b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4076b4:
    // 0x4076b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4076b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4076b8:
    // 0x4076b8: 0xc136b24  jal         func_4DAC90
label_4076bc:
    if (ctx->pc == 0x4076BCu) {
        ctx->pc = 0x4076BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076B8u;
        // 0x4076bc: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4076C0u;
        goto label_4076c0;
    }
    ctx->pc = 0x4076B8u;
    SET_GPR_U32(ctx, 31, 0x4076C0u);
    ctx->pc = 0x4076BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4076B8u;
    // 0x4076bc: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4076B8u, 0x4076C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4076C0u;
label_4076c0:
    // 0x4076c0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4076c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4076c4:
    // 0x4076c4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4076c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_4076c8:
    // 0x4076c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4076c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4076cc:
    // 0x4076cc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4076ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4076d0:
    // 0x4076d0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x4076d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4076d4:
    // 0x4076d4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4076d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4076d8:
    // 0x4076d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4076d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4076dc:
    // 0x4076dc: 0x0  nop
    ctx->pc = 0x4076dcu;
    // NOP
label_4076e0:
    // 0x4076e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4076e4:
    if (ctx->pc == 0x4076E4u) {
        ctx->pc = 0x4076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076E0u;
        // 0x4076e4: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4076E8u;
        goto label_4076e8;
    }
    ctx->pc = 0x4076E0u;
    {
        const bool branch_taken_0x4076e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076E0u;
        // 0x4076e4: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4076e0) {
            ctx->pc = 0x4076ECu;
            goto label_4076ec;
        }
    }
    ctx->pc = 0x4076E8u;
label_4076e8:
    // 0x4076e8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4076e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4076ec:
    // 0x4076ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4076ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4076f0:
    // 0x4076f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4076f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4076f4:
    // 0x4076f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4076f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4076f8:
    // 0x4076f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4076f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4076fc:
    // 0x4076fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4076fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_407700:
    // 0x407700: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x407700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_407704:
    // 0x407704: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x407704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_407708:
    // 0x407708: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x407708u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40770c:
    // 0x40770c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x40770cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_407710:
    // 0x407710: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x407710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_407714:
    // 0x407714: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x407714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_407718:
    // 0x407718: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x407718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40771c:
    // 0x40771c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x40771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_407720:
    // 0x407720: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x407720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_407724:
    // 0x407724: 0x3e00008  jr          $ra
label_407728:
    if (ctx->pc == 0x407728u) {
        ctx->pc = 0x407728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407724u;
        // 0x407728: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40772Cu;
        goto label_40772c;
    }
    ctx->pc = 0x407724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407724u;
        // 0x407728: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40772Cu;
label_40772c:
    // 0x40772c: 0x0  nop
    ctx->pc = 0x40772cu;
    // NOP
    ctx->pc = 0x407730u;
}
