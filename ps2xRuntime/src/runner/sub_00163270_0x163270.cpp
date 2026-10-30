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

// Function: sub_00163270
// Address: 0x163270 - 0x1635d0
void sub_00163270_0x163270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163270_0x163270");
#endif

    switch (ctx->pc) {
        case 0x163270u: goto label_163270;
        case 0x163274u: goto label_163274;
        case 0x163278u: goto label_163278;
        case 0x16327cu: goto label_16327c;
        case 0x163280u: goto label_163280;
        case 0x163284u: goto label_163284;
        case 0x163288u: goto label_163288;
        case 0x16328cu: goto label_16328c;
        case 0x163290u: goto label_163290;
        case 0x163294u: goto label_163294;
        case 0x163298u: goto label_163298;
        case 0x16329cu: goto label_16329c;
        case 0x1632a0u: goto label_1632a0;
        case 0x1632a4u: goto label_1632a4;
        case 0x1632a8u: goto label_1632a8;
        case 0x1632acu: goto label_1632ac;
        case 0x1632b0u: goto label_1632b0;
        case 0x1632b4u: goto label_1632b4;
        case 0x1632b8u: goto label_1632b8;
        case 0x1632bcu: goto label_1632bc;
        case 0x1632c0u: goto label_1632c0;
        case 0x1632c4u: goto label_1632c4;
        case 0x1632c8u: goto label_1632c8;
        case 0x1632ccu: goto label_1632cc;
        case 0x1632d0u: goto label_1632d0;
        case 0x1632d4u: goto label_1632d4;
        case 0x1632d8u: goto label_1632d8;
        case 0x1632dcu: goto label_1632dc;
        case 0x1632e0u: goto label_1632e0;
        case 0x1632e4u: goto label_1632e4;
        case 0x1632e8u: goto label_1632e8;
        case 0x1632ecu: goto label_1632ec;
        case 0x1632f0u: goto label_1632f0;
        case 0x1632f4u: goto label_1632f4;
        case 0x1632f8u: goto label_1632f8;
        case 0x1632fcu: goto label_1632fc;
        case 0x163300u: goto label_163300;
        case 0x163304u: goto label_163304;
        case 0x163308u: goto label_163308;
        case 0x16330cu: goto label_16330c;
        case 0x163310u: goto label_163310;
        case 0x163314u: goto label_163314;
        case 0x163318u: goto label_163318;
        case 0x16331cu: goto label_16331c;
        case 0x163320u: goto label_163320;
        case 0x163324u: goto label_163324;
        case 0x163328u: goto label_163328;
        case 0x16332cu: goto label_16332c;
        case 0x163330u: goto label_163330;
        case 0x163334u: goto label_163334;
        case 0x163338u: goto label_163338;
        case 0x16333cu: goto label_16333c;
        case 0x163340u: goto label_163340;
        case 0x163344u: goto label_163344;
        case 0x163348u: goto label_163348;
        case 0x16334cu: goto label_16334c;
        case 0x163350u: goto label_163350;
        case 0x163354u: goto label_163354;
        case 0x163358u: goto label_163358;
        case 0x16335cu: goto label_16335c;
        case 0x163360u: goto label_163360;
        case 0x163364u: goto label_163364;
        case 0x163368u: goto label_163368;
        case 0x16336cu: goto label_16336c;
        case 0x163370u: goto label_163370;
        case 0x163374u: goto label_163374;
        case 0x163378u: goto label_163378;
        case 0x16337cu: goto label_16337c;
        case 0x163380u: goto label_163380;
        case 0x163384u: goto label_163384;
        case 0x163388u: goto label_163388;
        case 0x16338cu: goto label_16338c;
        case 0x163390u: goto label_163390;
        case 0x163394u: goto label_163394;
        case 0x163398u: goto label_163398;
        case 0x16339cu: goto label_16339c;
        case 0x1633a0u: goto label_1633a0;
        case 0x1633a4u: goto label_1633a4;
        case 0x1633a8u: goto label_1633a8;
        case 0x1633acu: goto label_1633ac;
        case 0x1633b0u: goto label_1633b0;
        case 0x1633b4u: goto label_1633b4;
        case 0x1633b8u: goto label_1633b8;
        case 0x1633bcu: goto label_1633bc;
        case 0x1633c0u: goto label_1633c0;
        case 0x1633c4u: goto label_1633c4;
        case 0x1633c8u: goto label_1633c8;
        case 0x1633ccu: goto label_1633cc;
        case 0x1633d0u: goto label_1633d0;
        case 0x1633d4u: goto label_1633d4;
        case 0x1633d8u: goto label_1633d8;
        case 0x1633dcu: goto label_1633dc;
        case 0x1633e0u: goto label_1633e0;
        case 0x1633e4u: goto label_1633e4;
        case 0x1633e8u: goto label_1633e8;
        case 0x1633ecu: goto label_1633ec;
        case 0x1633f0u: goto label_1633f0;
        case 0x1633f4u: goto label_1633f4;
        case 0x1633f8u: goto label_1633f8;
        case 0x1633fcu: goto label_1633fc;
        case 0x163400u: goto label_163400;
        case 0x163404u: goto label_163404;
        case 0x163408u: goto label_163408;
        case 0x16340cu: goto label_16340c;
        case 0x163410u: goto label_163410;
        case 0x163414u: goto label_163414;
        case 0x163418u: goto label_163418;
        case 0x16341cu: goto label_16341c;
        case 0x163420u: goto label_163420;
        case 0x163424u: goto label_163424;
        case 0x163428u: goto label_163428;
        case 0x16342cu: goto label_16342c;
        case 0x163430u: goto label_163430;
        case 0x163434u: goto label_163434;
        case 0x163438u: goto label_163438;
        case 0x16343cu: goto label_16343c;
        case 0x163440u: goto label_163440;
        case 0x163444u: goto label_163444;
        case 0x163448u: goto label_163448;
        case 0x16344cu: goto label_16344c;
        case 0x163450u: goto label_163450;
        case 0x163454u: goto label_163454;
        case 0x163458u: goto label_163458;
        case 0x16345cu: goto label_16345c;
        case 0x163460u: goto label_163460;
        case 0x163464u: goto label_163464;
        case 0x163468u: goto label_163468;
        case 0x16346cu: goto label_16346c;
        case 0x163470u: goto label_163470;
        case 0x163474u: goto label_163474;
        case 0x163478u: goto label_163478;
        case 0x16347cu: goto label_16347c;
        case 0x163480u: goto label_163480;
        case 0x163484u: goto label_163484;
        case 0x163488u: goto label_163488;
        case 0x16348cu: goto label_16348c;
        case 0x163490u: goto label_163490;
        case 0x163494u: goto label_163494;
        case 0x163498u: goto label_163498;
        case 0x16349cu: goto label_16349c;
        case 0x1634a0u: goto label_1634a0;
        case 0x1634a4u: goto label_1634a4;
        case 0x1634a8u: goto label_1634a8;
        case 0x1634acu: goto label_1634ac;
        case 0x1634b0u: goto label_1634b0;
        case 0x1634b4u: goto label_1634b4;
        case 0x1634b8u: goto label_1634b8;
        case 0x1634bcu: goto label_1634bc;
        case 0x1634c0u: goto label_1634c0;
        case 0x1634c4u: goto label_1634c4;
        case 0x1634c8u: goto label_1634c8;
        case 0x1634ccu: goto label_1634cc;
        case 0x1634d0u: goto label_1634d0;
        case 0x1634d4u: goto label_1634d4;
        case 0x1634d8u: goto label_1634d8;
        case 0x1634dcu: goto label_1634dc;
        case 0x1634e0u: goto label_1634e0;
        case 0x1634e4u: goto label_1634e4;
        case 0x1634e8u: goto label_1634e8;
        case 0x1634ecu: goto label_1634ec;
        case 0x1634f0u: goto label_1634f0;
        case 0x1634f4u: goto label_1634f4;
        case 0x1634f8u: goto label_1634f8;
        case 0x1634fcu: goto label_1634fc;
        case 0x163500u: goto label_163500;
        case 0x163504u: goto label_163504;
        case 0x163508u: goto label_163508;
        case 0x16350cu: goto label_16350c;
        case 0x163510u: goto label_163510;
        case 0x163514u: goto label_163514;
        case 0x163518u: goto label_163518;
        case 0x16351cu: goto label_16351c;
        case 0x163520u: goto label_163520;
        case 0x163524u: goto label_163524;
        case 0x163528u: goto label_163528;
        case 0x16352cu: goto label_16352c;
        case 0x163530u: goto label_163530;
        case 0x163534u: goto label_163534;
        case 0x163538u: goto label_163538;
        case 0x16353cu: goto label_16353c;
        case 0x163540u: goto label_163540;
        case 0x163544u: goto label_163544;
        case 0x163548u: goto label_163548;
        case 0x16354cu: goto label_16354c;
        case 0x163550u: goto label_163550;
        case 0x163554u: goto label_163554;
        case 0x163558u: goto label_163558;
        case 0x16355cu: goto label_16355c;
        case 0x163560u: goto label_163560;
        case 0x163564u: goto label_163564;
        case 0x163568u: goto label_163568;
        case 0x16356cu: goto label_16356c;
        case 0x163570u: goto label_163570;
        case 0x163574u: goto label_163574;
        case 0x163578u: goto label_163578;
        case 0x16357cu: goto label_16357c;
        case 0x163580u: goto label_163580;
        case 0x163584u: goto label_163584;
        case 0x163588u: goto label_163588;
        case 0x16358cu: goto label_16358c;
        case 0x163590u: goto label_163590;
        case 0x163594u: goto label_163594;
        case 0x163598u: goto label_163598;
        case 0x16359cu: goto label_16359c;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635a8u: goto label_1635a8;
        case 0x1635acu: goto label_1635ac;
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        default: break;
    }

    ctx->pc = 0x163270u;

label_163270:
    // 0x163270: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x163270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_163274:
    // 0x163274: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_163278:
    // 0x163278: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x163278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_16327c:
    // 0x16327c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x16327cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_163280:
    // 0x163280: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x163280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_163284:
    // 0x163284: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x163284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_163288:
    // 0x163288: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16328c:
    // 0x16328c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x16328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_163290:
    // 0x163290: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x163290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_163294:
    // 0x163294: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x163294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_163298:
    // 0x163298: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_16329c:
    // 0x16329c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x16329cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1632a0:
    // 0x1632a0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1632a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1632a4:
    // 0x1632a4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1632a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1632a8:
    // 0x1632a8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1632a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1632ac:
    // 0x1632ac: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1632acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1632b0:
    // 0x1632b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1632b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1632b4:
    // 0x1632b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1632b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1632b8:
    // 0x1632b8: 0x8c440120  lw          $a0, 0x120($v0)
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1632bc:
    // 0x1632bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1632c0:
    // 0x1632c0: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1632c4:
    // 0x1632c4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_1632c8:
    if (ctx->pc == 0x1632C8u) {
        ctx->pc = 0x1632C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632C4u;
        // 0x1632c8: 0x245214e8  addiu       $s2, $v0, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1632CCu;
        goto label_1632cc;
    }
    ctx->pc = 0x1632C4u;
    {
        const bool branch_taken_0x1632c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632C4u;
        // 0x1632c8: 0x245214e8  addiu       $s2, $v0, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632c4) {
            ctx->pc = 0x163354u;
            goto label_163354;
        }
    }
    ctx->pc = 0x1632CCu;
label_1632cc:
    // 0x1632cc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1632d0:
    // 0x1632d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1632d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1632d4:
    // 0x1632d4: 0x24420670  addiu       $v0, $v0, 0x670
    ctx->pc = 0x1632d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
label_1632d8:
    // 0x1632d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1632d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1632dc:
    // 0x1632dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1632e0:
    // 0x1632e0: 0x800008  jr          $a0
label_1632e4:
    if (ctx->pc == 0x1632E4u) {
        ctx->pc = 0x1632E8u;
        goto label_1632e8;
    }
    ctx->pc = 0x1632E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163308u: goto label_163308;
            case 0x163318u: goto label_163318;
            case 0x16333Cu: goto label_16333c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1632E8u;
label_1632e8:
    // 0x1632e8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1632e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1632ec:
    // 0x1632ec: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1632f0:
    // 0x1632f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1632f4:
    if (ctx->pc == 0x1632F4u) {
        ctx->pc = 0x1632F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632F0u;
        // 0x1632f4: 0x24c605d8  addiu       $a2, $a2, 0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1632F8u;
        goto label_1632f8;
    }
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632F0u;
        // 0x1632f4: 0x24c605d8  addiu       $a2, $a2, 0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x163324u;
            goto label_163324;
        }
    }
    ctx->pc = 0x1632F8u;
label_1632f8:
    // 0x1632f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1632fc:
    // 0x1632fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_163300:
    // 0x163300: 0x10000008  b           . + 4 + (0x8 << 2)
label_163304:
    if (ctx->pc == 0x163304u) {
        ctx->pc = 0x163304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163300u;
        // 0x163304: 0x24c605e0  addiu       $a2, $a2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163308u;
        goto label_163308;
    }
    ctx->pc = 0x163300u;
    {
        const bool branch_taken_0x163300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163300u;
        // 0x163304: 0x24c605e0  addiu       $a2, $a2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163300) {
            ctx->pc = 0x163324u;
            goto label_163324;
        }
    }
    ctx->pc = 0x163308u;
label_163308:
    // 0x163308: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16330c:
    // 0x16330c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_163310:
    // 0x163310: 0x10000004  b           . + 4 + (0x4 << 2)
label_163314:
    if (ctx->pc == 0x163314u) {
        ctx->pc = 0x163314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163310u;
        // 0x163314: 0x24c605e8  addiu       $a2, $a2, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163318u;
        goto label_163318;
    }
    ctx->pc = 0x163310u;
    {
        const bool branch_taken_0x163310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163310u;
        // 0x163314: 0x24c605e8  addiu       $a2, $a2, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163310) {
            ctx->pc = 0x163324u;
            goto label_163324;
        }
    }
    ctx->pc = 0x163318u;
label_163318:
    // 0x163318: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16331c:
    // 0x16331c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_163320:
    // 0x163320: 0x24c605f0  addiu       $a2, $a2, 0x5F0
    ctx->pc = 0x163320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1520));
label_163324:
    // 0x163324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163328:
    // 0x163328: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x163328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_16332c:
    // 0x16332c: 0xc10ca04  jal         func_432810
label_163330:
    if (ctx->pc == 0x163330u) {
        ctx->pc = 0x163330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16332Cu;
        // 0x163330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163334u;
        goto label_163334;
    }
    ctx->pc = 0x16332Cu;
    SET_GPR_U32(ctx, 31, 0x163334u);
    ctx->pc = 0x163330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16332Cu;
    // 0x163330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x16332Cu, 0x163334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163334u;
label_163334:
    // 0x163334: 0x10000008  b           . + 4 + (0x8 << 2)
label_163338:
    if (ctx->pc == 0x163338u) {
        ctx->pc = 0x163338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163334u;
        // 0x163338: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16333Cu;
        goto label_16333c;
    }
    ctx->pc = 0x163334u;
    {
        const bool branch_taken_0x163334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163334u;
        // 0x163338: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163334) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x16333Cu;
label_16333c:
    // 0x16333c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16333cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_163340:
    // 0x163340: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x163340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_163344:
    // 0x163344: 0x24c605f8  addiu       $a2, $a2, 0x5F8
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1528));
label_163348:
    // 0x163348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16334c:
    // 0x16334c: 0xc10ca04  jal         func_432810
label_163350:
    if (ctx->pc == 0x163350u) {
        ctx->pc = 0x163350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16334Cu;
        // 0x163350: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163354u;
        goto label_163354;
    }
    ctx->pc = 0x16334Cu;
    SET_GPR_U32(ctx, 31, 0x163354u);
    ctx->pc = 0x163350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16334Cu;
    // 0x163350: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x16334Cu, 0x163354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163354u;
label_163354:
    // 0x163354: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x163354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163358:
    // 0x163358: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_16335c:
    // 0x16335c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_163360:
    // 0x163360: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_163364:
    // 0x163364: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x163364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_163368:
    // 0x163368: 0x40f809  jalr        $v0
label_16336c:
    if (ctx->pc == 0x16336Cu) {
        ctx->pc = 0x16336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163368u;
        // 0x16336c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163370u;
        goto label_163370;
    }
    ctx->pc = 0x163368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163370u);
        ctx->pc = 0x16336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163368u;
        // 0x16336c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163368u, 0x163370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163370u;
label_163370:
    // 0x163370: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_163374:
    if (ctx->pc == 0x163374u) {
        ctx->pc = 0x163374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163370u;
        // 0x163374: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163378u;
        goto label_163378;
    }
    ctx->pc = 0x163370u;
    {
        const bool branch_taken_0x163370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163370u;
        // 0x163374: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163370) {
            ctx->pc = 0x163398u;
            goto label_163398;
        }
    }
    ctx->pc = 0x163378u;
label_163378:
    // 0x163378: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16337c:
    // 0x16337c: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
label_163380:
    // 0x163380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163384:
    // 0x163384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163388:
    // 0x163388: 0xc10ca28  jal         func_4328A0
label_16338c:
    if (ctx->pc == 0x16338Cu) {
        ctx->pc = 0x16338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163388u;
        // 0x16338c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163390u;
        goto label_163390;
    }
    ctx->pc = 0x163388u;
    SET_GPR_U32(ctx, 31, 0x163390u);
    ctx->pc = 0x16338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163388u;
    // 0x16338c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163388u, 0x163390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163390u;
label_163390:
    // 0x163390: 0x10000009  b           . + 4 + (0x9 << 2)
label_163394:
    if (ctx->pc == 0x163394u) {
        ctx->pc = 0x163394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163390u;
        // 0x163394: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163398u;
        goto label_163398;
    }
    ctx->pc = 0x163390u;
    {
        const bool branch_taken_0x163390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163390u;
        // 0x163394: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163390) {
            ctx->pc = 0x1633B8u;
            goto label_1633b8;
        }
    }
    ctx->pc = 0x163398u;
label_163398:
    // 0x163398: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16339c:
    // 0x16339c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x16339cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1633a0:
    // 0x1633a0: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
label_1633a4:
    // 0x1633a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1633a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1633a8:
    // 0x1633a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1633a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1633ac:
    // 0x1633ac: 0xc10ca28  jal         func_4328A0
label_1633b0:
    if (ctx->pc == 0x1633B0u) {
        ctx->pc = 0x1633B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633ACu;
        // 0x1633b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633B4u;
        goto label_1633b4;
    }
    ctx->pc = 0x1633ACu;
    SET_GPR_U32(ctx, 31, 0x1633B4u);
    ctx->pc = 0x1633B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633ACu;
    // 0x1633b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1633ACu, 0x1633B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633B4u;
label_1633b4:
    // 0x1633b4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1633b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1633b8:
    // 0x1633b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1633b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1633bc:
    // 0x1633bc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1633bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1633c0:
    // 0x1633c0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1633c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1633c4:
    // 0x1633c4: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x1633c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_1633c8:
    // 0x1633c8: 0xc050fda  jal         func_143F68
label_1633cc:
    if (ctx->pc == 0x1633CCu) {
        ctx->pc = 0x1633CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C8u;
        // 0x1633cc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633D0u;
        goto label_1633d0;
    }
    ctx->pc = 0x1633C8u;
    SET_GPR_U32(ctx, 31, 0x1633D0u);
    ctx->pc = 0x1633CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633C8u;
    // 0x1633cc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1633C8u, 0x1633D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633D0u;
label_1633d0:
    // 0x1633d0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1633d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1633d4:
    // 0x1633d4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1633d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1633d8:
    // 0x1633d8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1633d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1633dc:
    // 0x1633dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1633dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1633e0:
    // 0x1633e0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1633e4:
    // 0x1633e4: 0x24c60560  addiu       $a2, $a2, 0x560
    ctx->pc = 0x1633e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
label_1633e8:
    // 0x1633e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1633ec:
    // 0x1633ec: 0xc10ca04  jal         func_432810
label_1633f0:
    if (ctx->pc == 0x1633F0u) {
        ctx->pc = 0x1633F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633ECu;
        // 0x1633f0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633F4u;
        goto label_1633f4;
    }
    ctx->pc = 0x1633ECu;
    SET_GPR_U32(ctx, 31, 0x1633F4u);
    ctx->pc = 0x1633F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633ECu;
    // 0x1633f0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1633ECu, 0x1633F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1633f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1633f8:
    // 0x1633f8: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_1633fc:
    // 0x1633fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163400:
    // 0x163400: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_163404:
    // 0x163404: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163408:
    // 0x163408: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_16340c:
    // 0x16340c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_163410:
    // 0x163410: 0x40f809  jalr        $v0
label_163414:
    if (ctx->pc == 0x163414u) {
        ctx->pc = 0x163414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163410u;
        // 0x163414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163418u;
        goto label_163418;
    }
    ctx->pc = 0x163410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163418u);
        ctx->pc = 0x163414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163410u;
        // 0x163414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163410u, 0x163418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163418u;
label_163418:
    // 0x163418: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_16341c:
    if (ctx->pc == 0x16341Cu) {
        ctx->pc = 0x16341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163418u;
        // 0x16341c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163420u;
        goto label_163420;
    }
    ctx->pc = 0x163418u;
    {
        const bool branch_taken_0x163418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163418u;
        // 0x16341c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163418) {
            ctx->pc = 0x16347Cu;
            goto label_16347c;
        }
    }
    ctx->pc = 0x163420u;
label_163420:
    // 0x163420: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163424:
    // 0x163424: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_163428:
    // 0x163428: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16342c:
    // 0x16342c: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_163430:
    // 0x163430: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_163434:
    // 0x163434: 0x40f809  jalr        $v0
label_163438:
    if (ctx->pc == 0x163438u) {
        ctx->pc = 0x163438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163434u;
        // 0x163438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16343Cu;
        goto label_16343c;
    }
    ctx->pc = 0x163434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16343Cu);
        ctx->pc = 0x163438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163434u;
        // 0x163438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163434u, 0x16343Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16343Cu;
label_16343c:
    // 0x16343c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_163440:
    if (ctx->pc == 0x163440u) {
        ctx->pc = 0x163440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16343Cu;
        // 0x163440: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163444u;
        goto label_163444;
    }
    ctx->pc = 0x16343Cu;
    {
        const bool branch_taken_0x16343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16343Cu;
        // 0x163440: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16343c) {
            ctx->pc = 0x163460u;
            goto label_163460;
        }
    }
    ctx->pc = 0x163444u;
label_163444:
    // 0x163444: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x163444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163448:
    // 0x163448: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x163448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
label_16344c:
    // 0x16344c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163450:
    // 0x163450: 0xc10ca28  jal         func_4328A0
label_163454:
    if (ctx->pc == 0x163454u) {
        ctx->pc = 0x163454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163450u;
        // 0x163454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163458u;
        goto label_163458;
    }
    ctx->pc = 0x163450u;
    SET_GPR_U32(ctx, 31, 0x163458u);
    ctx->pc = 0x163454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163450u;
    // 0x163454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163450u, 0x163458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163458u;
label_163458:
    // 0x163458: 0x10000008  b           . + 4 + (0x8 << 2)
label_16345c:
    if (ctx->pc == 0x16345Cu) {
        ctx->pc = 0x16345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163458u;
        // 0x16345c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163460u;
        goto label_163460;
    }
    ctx->pc = 0x163458u;
    {
        const bool branch_taken_0x163458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163458u;
        // 0x16345c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163458) {
            ctx->pc = 0x16347Cu;
            goto label_16347c;
        }
    }
    ctx->pc = 0x163460u;
label_163460:
    // 0x163460: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_163464:
    // 0x163464: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x163464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163468:
    // 0x163468: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x163468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
label_16346c:
    // 0x16346c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163470:
    // 0x163470: 0xc10ca28  jal         func_4328A0
label_163474:
    if (ctx->pc == 0x163474u) {
        ctx->pc = 0x163474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163470u;
        // 0x163474: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163478u;
        goto label_163478;
    }
    ctx->pc = 0x163470u;
    SET_GPR_U32(ctx, 31, 0x163478u);
    ctx->pc = 0x163474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163470u;
    // 0x163474: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163470u, 0x163478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163478u;
label_163478:
    // 0x163478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16347c:
    // 0x16347c: 0xc050fda  jal         func_143F68
label_163480:
    if (ctx->pc == 0x163480u) {
        ctx->pc = 0x163480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16347Cu;
        // 0x163480: 0x27c491e0  addiu       $a0, $fp, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163484u;
        goto label_163484;
    }
    ctx->pc = 0x16347Cu;
    SET_GPR_U32(ctx, 31, 0x163484u);
    ctx->pc = 0x163480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16347Cu;
    // 0x163480: 0x27c491e0  addiu       $a0, $fp, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16347Cu, 0x163484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163484u;
label_163484:
    // 0x163484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163488:
    // 0x163488: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_16348c:
    // 0x16348c: 0x26e60560  addiu       $a2, $s7, 0x560
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1376));
label_163490:
    // 0x163490: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163494:
    // 0x163494: 0xc10ca04  jal         func_432810
label_163498:
    if (ctx->pc == 0x163498u) {
        ctx->pc = 0x163498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163494u;
        // 0x163498: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16349Cu;
        goto label_16349c;
    }
    ctx->pc = 0x163494u;
    SET_GPR_U32(ctx, 31, 0x16349Cu);
    ctx->pc = 0x163498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163494u;
    // 0x163498: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163494u, 0x16349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16349Cu;
label_16349c:
    // 0x16349c: 0x8ec4b788  lw          $a0, -0x4878($s6)
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
label_1634a0:
    // 0x1634a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1634a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1634a4:
    // 0x1634a4: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x1634a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_1634a8:
    // 0x1634a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1634ac:
    // 0x1634ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1634acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1634b0:
    // 0x1634b0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1634b4:
    // 0x1634b4: 0x40f809  jalr        $v0
label_1634b8:
    if (ctx->pc == 0x1634B8u) {
        ctx->pc = 0x1634B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634B4u;
        // 0x1634b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634BCu;
        goto label_1634bc;
    }
    ctx->pc = 0x1634B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1634BCu);
        ctx->pc = 0x1634B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634B4u;
        // 0x1634b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1634B4u, 0x1634BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1634BCu;
label_1634bc:
    // 0x1634bc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_1634c0:
    if (ctx->pc == 0x1634C0u) {
        ctx->pc = 0x1634C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634BCu;
        // 0x1634c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634C4u;
        goto label_1634c4;
    }
    ctx->pc = 0x1634BCu;
    {
        const bool branch_taken_0x1634bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1634C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634BCu;
        // 0x1634c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634bc) {
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x1634C4u;
label_1634c4:
    // 0x1634c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1634c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1634c8:
    // 0x1634c8: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1634cc:
    // 0x1634cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1634d0:
    // 0x1634d0: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1634d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1634d4:
    // 0x1634d4: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1634d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1634d8:
    // 0x1634d8: 0x40f809  jalr        $v0
label_1634dc:
    if (ctx->pc == 0x1634DCu) {
        ctx->pc = 0x1634DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634D8u;
        // 0x1634dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634E0u;
        goto label_1634e0;
    }
    ctx->pc = 0x1634D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1634E0u);
        ctx->pc = 0x1634DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634D8u;
        // 0x1634dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1634D8u, 0x1634E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1634E0u;
label_1634e0:
    // 0x1634e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1634e4:
    if (ctx->pc == 0x1634E4u) {
        ctx->pc = 0x1634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634E0u;
        // 0x1634e4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634E8u;
        goto label_1634e8;
    }
    ctx->pc = 0x1634E0u;
    {
        const bool branch_taken_0x1634e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634E0u;
        // 0x1634e4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634e0) {
            ctx->pc = 0x163500u;
            goto label_163500;
        }
    }
    ctx->pc = 0x1634E8u;
label_1634e8:
    // 0x1634e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1634e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1634ec:
    // 0x1634ec: 0x24a50640  addiu       $a1, $a1, 0x640
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
label_1634f0:
    // 0x1634f0: 0xc10ca28  jal         func_4328A0
label_1634f4:
    if (ctx->pc == 0x1634F4u) {
        ctx->pc = 0x1634F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F0u;
        // 0x1634f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634F8u;
        goto label_1634f8;
    }
    ctx->pc = 0x1634F0u;
    SET_GPR_U32(ctx, 31, 0x1634F8u);
    ctx->pc = 0x1634F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1634F0u;
    // 0x1634f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1634F0u, 0x1634F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634F8u;
label_1634f8:
    // 0x1634f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1634fc:
    if (ctx->pc == 0x1634FCu) {
        ctx->pc = 0x1634FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F8u;
        // 0x1634fc: 0x27d091e0  addiu       $s0, $fp, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163500u;
        goto label_163500;
    }
    ctx->pc = 0x1634F8u;
    {
        const bool branch_taken_0x1634f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F8u;
        // 0x1634fc: 0x27d091e0  addiu       $s0, $fp, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634f8) {
            ctx->pc = 0x163518u;
            goto label_163518;
        }
    }
    ctx->pc = 0x163500u;
label_163500:
    // 0x163500: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_163504:
    // 0x163504: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163508:
    // 0x163508: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
label_16350c:
    // 0x16350c: 0xc10ca28  jal         func_4328A0
label_163510:
    if (ctx->pc == 0x163510u) {
        ctx->pc = 0x163510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16350Cu;
        // 0x163510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163514u;
        goto label_163514;
    }
    ctx->pc = 0x16350Cu;
    SET_GPR_U32(ctx, 31, 0x163514u);
    ctx->pc = 0x163510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16350Cu;
    // 0x163510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x16350Cu, 0x163514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163514u;
label_163514:
    // 0x163514: 0x27d091e0  addiu       $s0, $fp, -0x6E20
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
label_163518:
    // 0x163518: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16351c:
    // 0x16351c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163520:
    // 0x163520: 0xc050fda  jal         func_143F68
label_163524:
    if (ctx->pc == 0x163524u) {
        ctx->pc = 0x163524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163520u;
        // 0x163524: 0x26f10560  addiu       $s1, $s7, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163528u;
        goto label_163528;
    }
    ctx->pc = 0x163520u;
    SET_GPR_U32(ctx, 31, 0x163528u);
    ctx->pc = 0x163524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163520u;
    // 0x163524: 0x26f10560  addiu       $s1, $s7, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x163520u, 0x163528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163528u;
label_163528:
    // 0x163528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16352c:
    // 0x16352c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_163530:
    // 0x163530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x163530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163534:
    // 0x163534: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163538:
    // 0x163538: 0xc10ca04  jal         func_432810
label_16353c:
    if (ctx->pc == 0x16353Cu) {
        ctx->pc = 0x16353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163538u;
        // 0x16353c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163540u;
        goto label_163540;
    }
    ctx->pc = 0x163538u;
    SET_GPR_U32(ctx, 31, 0x163540u);
    ctx->pc = 0x16353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163538u;
    // 0x16353c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163538u, 0x163540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163540u;
label_163540:
    // 0x163540: 0x8ec4b788  lw          $a0, -0x4878($s6)
    ctx->pc = 0x163540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
label_163544:
    // 0x163544: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163548:
    // 0x163548: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x163548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_16354c:
    // 0x16354c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163550:
    // 0x163550: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_163554:
    // 0x163554: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_163558:
    // 0x163558: 0x40f809  jalr        $v0
label_16355c:
    if (ctx->pc == 0x16355Cu) {
        ctx->pc = 0x16355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163558u;
        // 0x16355c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163560u;
        goto label_163560;
    }
    ctx->pc = 0x163558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163560u);
        ctx->pc = 0x16355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163558u;
        // 0x16355c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163558u, 0x163560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163560u;
label_163560:
    // 0x163560: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_163564:
    if (ctx->pc == 0x163564u) {
        ctx->pc = 0x163564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163560u;
        // 0x163564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163568u;
        goto label_163568;
    }
    ctx->pc = 0x163560u;
    {
        const bool branch_taken_0x163560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163560) {
            ctx->pc = 0x163564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163560u;
            // 0x163564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x163568u;
label_163568:
    // 0x163568: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16356c:
    // 0x16356c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163570:
    // 0x163570: 0xc10ca28  jal         func_4328A0
label_163574:
    if (ctx->pc == 0x163574u) {
        ctx->pc = 0x163574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163570u;
        // 0x163574: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163578u;
        goto label_163578;
    }
    ctx->pc = 0x163570u;
    SET_GPR_U32(ctx, 31, 0x163578u);
    ctx->pc = 0x163574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163570u;
    // 0x163574: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163570u, 0x163578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163578u;
label_163578:
    // 0x163578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16357c:
    // 0x16357c: 0xc050fda  jal         func_143F68
label_163580:
    if (ctx->pc == 0x163580u) {
        ctx->pc = 0x163580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16357Cu;
        // 0x163580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163584u;
        goto label_163584;
    }
    ctx->pc = 0x16357Cu;
    SET_GPR_U32(ctx, 31, 0x163584u);
    ctx->pc = 0x163580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16357Cu;
    // 0x163580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16357Cu, 0x163584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163584u;
label_163584:
    // 0x163584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163588:
    // 0x163588: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x163588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_16358c:
    // 0x16358c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16358cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163590:
    // 0x163590: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163594:
    // 0x163594: 0xc10ca04  jal         func_432810
label_163598:
    if (ctx->pc == 0x163598u) {
        ctx->pc = 0x163598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163594u;
        // 0x163598: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16359Cu;
        goto label_16359c;
    }
    ctx->pc = 0x163594u;
    SET_GPR_U32(ctx, 31, 0x16359Cu);
    ctx->pc = 0x163598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163594u;
    // 0x163598: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163594u, 0x16359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16359Cu;
label_16359c:
    // 0x16359c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16359cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1635a0:
    // 0x1635a0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1635a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1635a4:
    // 0x1635a4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1635a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1635a8:
    // 0x1635a8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1635a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1635ac:
    // 0x1635ac: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1635acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1635b0:
    // 0x1635b0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1635b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1635b4:
    // 0x1635b4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1635b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1635b8:
    // 0x1635b8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1635b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1635bc:
    // 0x1635bc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1635bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1635c0:
    // 0x1635c0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1635c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1635c4:
    // 0x1635c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1635c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1635c8:
    // 0x1635c8: 0x3e00008  jr          $ra
label_1635cc:
    if (ctx->pc == 0x1635CCu) {
        ctx->pc = 0x1635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C8u;
        // 0x1635cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635D0u;
        goto label_fallthrough_0x1635c8;
    }
    ctx->pc = 0x1635C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C8u;
        // 0x1635cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1635c8:
    ctx->pc = 0x1635D0u;
}
