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

// Function: sub_001276A0
// Address: 0x1276a0 - 0x127ac8
void sub_001276A0_0x1276a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001276A0_0x1276a0");
#endif

    switch (ctx->pc) {
        case 0x1276a0u: goto label_1276a0;
        case 0x1276a4u: goto label_1276a4;
        case 0x1276a8u: goto label_1276a8;
        case 0x1276acu: goto label_1276ac;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276b4u: goto label_1276b4;
        case 0x1276b8u: goto label_1276b8;
        case 0x1276bcu: goto label_1276bc;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276c4u: goto label_1276c4;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276ccu: goto label_1276cc;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276d4u: goto label_1276d4;
        case 0x1276d8u: goto label_1276d8;
        case 0x1276dcu: goto label_1276dc;
        case 0x1276e0u: goto label_1276e0;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276e8u: goto label_1276e8;
        case 0x1276ecu: goto label_1276ec;
        case 0x1276f0u: goto label_1276f0;
        case 0x1276f4u: goto label_1276f4;
        case 0x1276f8u: goto label_1276f8;
        case 0x1276fcu: goto label_1276fc;
        case 0x127700u: goto label_127700;
        case 0x127704u: goto label_127704;
        case 0x127708u: goto label_127708;
        case 0x12770cu: goto label_12770c;
        case 0x127710u: goto label_127710;
        case 0x127714u: goto label_127714;
        case 0x127718u: goto label_127718;
        case 0x12771cu: goto label_12771c;
        case 0x127720u: goto label_127720;
        case 0x127724u: goto label_127724;
        case 0x127728u: goto label_127728;
        case 0x12772cu: goto label_12772c;
        case 0x127730u: goto label_127730;
        case 0x127734u: goto label_127734;
        case 0x127738u: goto label_127738;
        case 0x12773cu: goto label_12773c;
        case 0x127740u: goto label_127740;
        case 0x127744u: goto label_127744;
        case 0x127748u: goto label_127748;
        case 0x12774cu: goto label_12774c;
        case 0x127750u: goto label_127750;
        case 0x127754u: goto label_127754;
        case 0x127758u: goto label_127758;
        case 0x12775cu: goto label_12775c;
        case 0x127760u: goto label_127760;
        case 0x127764u: goto label_127764;
        case 0x127768u: goto label_127768;
        case 0x12776cu: goto label_12776c;
        case 0x127770u: goto label_127770;
        case 0x127774u: goto label_127774;
        case 0x127778u: goto label_127778;
        case 0x12777cu: goto label_12777c;
        case 0x127780u: goto label_127780;
        case 0x127784u: goto label_127784;
        case 0x127788u: goto label_127788;
        case 0x12778cu: goto label_12778c;
        case 0x127790u: goto label_127790;
        case 0x127794u: goto label_127794;
        case 0x127798u: goto label_127798;
        case 0x12779cu: goto label_12779c;
        case 0x1277a0u: goto label_1277a0;
        case 0x1277a4u: goto label_1277a4;
        case 0x1277a8u: goto label_1277a8;
        case 0x1277acu: goto label_1277ac;
        case 0x1277b0u: goto label_1277b0;
        case 0x1277b4u: goto label_1277b4;
        case 0x1277b8u: goto label_1277b8;
        case 0x1277bcu: goto label_1277bc;
        case 0x1277c0u: goto label_1277c0;
        case 0x1277c4u: goto label_1277c4;
        case 0x1277c8u: goto label_1277c8;
        case 0x1277ccu: goto label_1277cc;
        case 0x1277d0u: goto label_1277d0;
        case 0x1277d4u: goto label_1277d4;
        case 0x1277d8u: goto label_1277d8;
        case 0x1277dcu: goto label_1277dc;
        case 0x1277e0u: goto label_1277e0;
        case 0x1277e4u: goto label_1277e4;
        case 0x1277e8u: goto label_1277e8;
        case 0x1277ecu: goto label_1277ec;
        case 0x1277f0u: goto label_1277f0;
        case 0x1277f4u: goto label_1277f4;
        case 0x1277f8u: goto label_1277f8;
        case 0x1277fcu: goto label_1277fc;
        case 0x127800u: goto label_127800;
        case 0x127804u: goto label_127804;
        case 0x127808u: goto label_127808;
        case 0x12780cu: goto label_12780c;
        case 0x127810u: goto label_127810;
        case 0x127814u: goto label_127814;
        case 0x127818u: goto label_127818;
        case 0x12781cu: goto label_12781c;
        case 0x127820u: goto label_127820;
        case 0x127824u: goto label_127824;
        case 0x127828u: goto label_127828;
        case 0x12782cu: goto label_12782c;
        case 0x127830u: goto label_127830;
        case 0x127834u: goto label_127834;
        case 0x127838u: goto label_127838;
        case 0x12783cu: goto label_12783c;
        case 0x127840u: goto label_127840;
        case 0x127844u: goto label_127844;
        case 0x127848u: goto label_127848;
        case 0x12784cu: goto label_12784c;
        case 0x127850u: goto label_127850;
        case 0x127854u: goto label_127854;
        case 0x127858u: goto label_127858;
        case 0x12785cu: goto label_12785c;
        case 0x127860u: goto label_127860;
        case 0x127864u: goto label_127864;
        case 0x127868u: goto label_127868;
        case 0x12786cu: goto label_12786c;
        case 0x127870u: goto label_127870;
        case 0x127874u: goto label_127874;
        case 0x127878u: goto label_127878;
        case 0x12787cu: goto label_12787c;
        case 0x127880u: goto label_127880;
        case 0x127884u: goto label_127884;
        case 0x127888u: goto label_127888;
        case 0x12788cu: goto label_12788c;
        case 0x127890u: goto label_127890;
        case 0x127894u: goto label_127894;
        case 0x127898u: goto label_127898;
        case 0x12789cu: goto label_12789c;
        case 0x1278a0u: goto label_1278a0;
        case 0x1278a4u: goto label_1278a4;
        case 0x1278a8u: goto label_1278a8;
        case 0x1278acu: goto label_1278ac;
        case 0x1278b0u: goto label_1278b0;
        case 0x1278b4u: goto label_1278b4;
        case 0x1278b8u: goto label_1278b8;
        case 0x1278bcu: goto label_1278bc;
        case 0x1278c0u: goto label_1278c0;
        case 0x1278c4u: goto label_1278c4;
        case 0x1278c8u: goto label_1278c8;
        case 0x1278ccu: goto label_1278cc;
        case 0x1278d0u: goto label_1278d0;
        case 0x1278d4u: goto label_1278d4;
        case 0x1278d8u: goto label_1278d8;
        case 0x1278dcu: goto label_1278dc;
        case 0x1278e0u: goto label_1278e0;
        case 0x1278e4u: goto label_1278e4;
        case 0x1278e8u: goto label_1278e8;
        case 0x1278ecu: goto label_1278ec;
        case 0x1278f0u: goto label_1278f0;
        case 0x1278f4u: goto label_1278f4;
        case 0x1278f8u: goto label_1278f8;
        case 0x1278fcu: goto label_1278fc;
        case 0x127900u: goto label_127900;
        case 0x127904u: goto label_127904;
        case 0x127908u: goto label_127908;
        case 0x12790cu: goto label_12790c;
        case 0x127910u: goto label_127910;
        case 0x127914u: goto label_127914;
        case 0x127918u: goto label_127918;
        case 0x12791cu: goto label_12791c;
        case 0x127920u: goto label_127920;
        case 0x127924u: goto label_127924;
        case 0x127928u: goto label_127928;
        case 0x12792cu: goto label_12792c;
        case 0x127930u: goto label_127930;
        case 0x127934u: goto label_127934;
        case 0x127938u: goto label_127938;
        case 0x12793cu: goto label_12793c;
        case 0x127940u: goto label_127940;
        case 0x127944u: goto label_127944;
        case 0x127948u: goto label_127948;
        case 0x12794cu: goto label_12794c;
        case 0x127950u: goto label_127950;
        case 0x127954u: goto label_127954;
        case 0x127958u: goto label_127958;
        case 0x12795cu: goto label_12795c;
        case 0x127960u: goto label_127960;
        case 0x127964u: goto label_127964;
        case 0x127968u: goto label_127968;
        case 0x12796cu: goto label_12796c;
        case 0x127970u: goto label_127970;
        case 0x127974u: goto label_127974;
        case 0x127978u: goto label_127978;
        case 0x12797cu: goto label_12797c;
        case 0x127980u: goto label_127980;
        case 0x127984u: goto label_127984;
        case 0x127988u: goto label_127988;
        case 0x12798cu: goto label_12798c;
        case 0x127990u: goto label_127990;
        case 0x127994u: goto label_127994;
        case 0x127998u: goto label_127998;
        case 0x12799cu: goto label_12799c;
        case 0x1279a0u: goto label_1279a0;
        case 0x1279a4u: goto label_1279a4;
        case 0x1279a8u: goto label_1279a8;
        case 0x1279acu: goto label_1279ac;
        case 0x1279b0u: goto label_1279b0;
        case 0x1279b4u: goto label_1279b4;
        case 0x1279b8u: goto label_1279b8;
        case 0x1279bcu: goto label_1279bc;
        case 0x1279c0u: goto label_1279c0;
        case 0x1279c4u: goto label_1279c4;
        case 0x1279c8u: goto label_1279c8;
        case 0x1279ccu: goto label_1279cc;
        case 0x1279d0u: goto label_1279d0;
        case 0x1279d4u: goto label_1279d4;
        case 0x1279d8u: goto label_1279d8;
        case 0x1279dcu: goto label_1279dc;
        case 0x1279e0u: goto label_1279e0;
        case 0x1279e4u: goto label_1279e4;
        case 0x1279e8u: goto label_1279e8;
        case 0x1279ecu: goto label_1279ec;
        case 0x1279f0u: goto label_1279f0;
        case 0x1279f4u: goto label_1279f4;
        case 0x1279f8u: goto label_1279f8;
        case 0x1279fcu: goto label_1279fc;
        case 0x127a00u: goto label_127a00;
        case 0x127a04u: goto label_127a04;
        case 0x127a08u: goto label_127a08;
        case 0x127a0cu: goto label_127a0c;
        case 0x127a10u: goto label_127a10;
        case 0x127a14u: goto label_127a14;
        case 0x127a18u: goto label_127a18;
        case 0x127a1cu: goto label_127a1c;
        case 0x127a20u: goto label_127a20;
        case 0x127a24u: goto label_127a24;
        case 0x127a28u: goto label_127a28;
        case 0x127a2cu: goto label_127a2c;
        case 0x127a30u: goto label_127a30;
        case 0x127a34u: goto label_127a34;
        case 0x127a38u: goto label_127a38;
        case 0x127a3cu: goto label_127a3c;
        case 0x127a40u: goto label_127a40;
        case 0x127a44u: goto label_127a44;
        case 0x127a48u: goto label_127a48;
        case 0x127a4cu: goto label_127a4c;
        case 0x127a50u: goto label_127a50;
        case 0x127a54u: goto label_127a54;
        case 0x127a58u: goto label_127a58;
        case 0x127a5cu: goto label_127a5c;
        case 0x127a60u: goto label_127a60;
        case 0x127a64u: goto label_127a64;
        case 0x127a68u: goto label_127a68;
        case 0x127a6cu: goto label_127a6c;
        case 0x127a70u: goto label_127a70;
        case 0x127a74u: goto label_127a74;
        case 0x127a78u: goto label_127a78;
        case 0x127a7cu: goto label_127a7c;
        case 0x127a80u: goto label_127a80;
        case 0x127a84u: goto label_127a84;
        case 0x127a88u: goto label_127a88;
        case 0x127a8cu: goto label_127a8c;
        case 0x127a90u: goto label_127a90;
        case 0x127a94u: goto label_127a94;
        case 0x127a98u: goto label_127a98;
        case 0x127a9cu: goto label_127a9c;
        case 0x127aa0u: goto label_127aa0;
        case 0x127aa4u: goto label_127aa4;
        case 0x127aa8u: goto label_127aa8;
        case 0x127aacu: goto label_127aac;
        case 0x127ab0u: goto label_127ab0;
        case 0x127ab4u: goto label_127ab4;
        case 0x127ab8u: goto label_127ab8;
        case 0x127abcu: goto label_127abc;
        case 0x127ac0u: goto label_127ac0;
        case 0x127ac4u: goto label_127ac4;
        default: break;
    }

    ctx->pc = 0x1276a0u;

label_1276a0:
    // 0x1276a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1276a4:
    // 0x1276a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1276a8:
    // 0x1276a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1276a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1276ac:
    // 0x1276ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1276acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1276b0:
    // 0x1276b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1276b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1276b4:
    // 0x1276b4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1276b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1276b8:
    // 0x1276b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1276b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1276bc:
    // 0x1276bc: 0x8c43b19c  lw          $v1, -0x4E64($v0)
    ctx->pc = 0x1276bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_1276c0:
    // 0x1276c0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1276c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1276c4:
    // 0x1276c4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1276c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1276c8:
    // 0x1276c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1276cc:
    // 0x1276cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1276ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1276d0:
    // 0x1276d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1276d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1276d4:
    // 0x1276d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1276d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1276d8:
    // 0x1276d8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1276d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1276dc:
    // 0x1276dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1276dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1276e0:
    // 0x1276e0: 0x146200ec  bne         $v1, $v0, . + 4 + (0xEC << 2)
label_1276e4:
    if (ctx->pc == 0x1276E4u) {
        ctx->pc = 0x1276E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E0u;
        // 0x1276e4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276E8u;
        goto label_1276e8;
    }
    ctx->pc = 0x1276E0u;
    {
        const bool branch_taken_0x1276e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1276E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E0u;
        // 0x1276e4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e0) {
            ctx->pc = 0x127A94u;
            goto label_127a94;
        }
    }
    ctx->pc = 0x1276E8u;
label_1276e8:
    // 0x1276e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1276e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1276ec:
    // 0x1276ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1276ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1276f0:
    // 0x1276f0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1276f4:
    // 0x1276f4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1276f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1276f8:
    // 0x1276f8: 0x40f809  jalr        $v0
label_1276fc:
    if (ctx->pc == 0x1276FCu) {
        ctx->pc = 0x1276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F8u;
        // 0x1276fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127700u;
        goto label_127700;
    }
    ctx->pc = 0x1276F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127700u);
        ctx->pc = 0x1276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F8u;
        // 0x1276fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1276F8u, 0x127700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127700u;
label_127700:
    // 0x127700: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x127700u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_127704:
    // 0x127704: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x127704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_127708:
    // 0x127708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12770c:
    if (ctx->pc == 0x12770Cu) {
        ctx->pc = 0x12770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127708u;
        // 0x12770c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127710u;
        goto label_127710;
    }
    ctx->pc = 0x127708u;
    {
        const bool branch_taken_0x127708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127708u;
        // 0x12770c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127708) {
            ctx->pc = 0x12771Cu;
            goto label_12771c;
        }
    }
    ctx->pc = 0x127710u;
label_127710:
    // 0x127710: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_127714:
    // 0x127714: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x127714u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_127718:
    // 0x127718: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x127718u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12771c:
    // 0x12771c: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x12771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_127720:
    // 0x127720: 0x120200dc  beq         $s0, $v0, . + 4 + (0xDC << 2)
label_127724:
    if (ctx->pc == 0x127724u) {
        ctx->pc = 0x127724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127720u;
        // 0x127724: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127728u;
        goto label_127728;
    }
    ctx->pc = 0x127720u;
    {
        const bool branch_taken_0x127720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x127724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127720u;
        // 0x127724: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127720) {
            ctx->pc = 0x127A94u;
            goto label_127a94;
        }
    }
    ctx->pc = 0x127728u;
label_127728:
    // 0x127728: 0xc047e72  jal         func_11F9C8
label_12772c:
    if (ctx->pc == 0x12772Cu) {
        ctx->pc = 0x12772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127728u;
        // 0x12772c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127730u;
        goto label_127730;
    }
    ctx->pc = 0x127728u;
    SET_GPR_U32(ctx, 31, 0x127730u);
    ctx->pc = 0x12772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127728u;
    // 0x12772c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x127728u, 0x127730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127730u;
label_127730:
    // 0x127730: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_127734:
    if (ctx->pc == 0x127734u) {
        ctx->pc = 0x127734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127730u;
        // 0x127734: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127738u;
        goto label_127738;
    }
    ctx->pc = 0x127730u;
    {
        const bool branch_taken_0x127730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127730u;
        // 0x127734: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127730) {
            ctx->pc = 0x127774u;
            goto label_127774;
        }
    }
    ctx->pc = 0x127738u;
label_127738:
    // 0x127738: 0xc047e72  jal         func_11F9C8
label_12773c:
    if (ctx->pc == 0x12773Cu) {
        ctx->pc = 0x12773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127738u;
        // 0x12773c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127740u;
        goto label_127740;
    }
    ctx->pc = 0x127738u;
    SET_GPR_U32(ctx, 31, 0x127740u);
    ctx->pc = 0x12773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127738u;
    // 0x12773c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x127738u, 0x127740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127740u;
label_127740:
    // 0x127740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127744:
    // 0x127744: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_127748:
    // 0x127748: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x127748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_12774c:
    // 0x12774c: 0xa0f809  jalr        $a1
label_127750:
    if (ctx->pc == 0x127750u) {
        ctx->pc = 0x127750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12774Cu;
        // 0x127750: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127754u;
        goto label_127754;
    }
    ctx->pc = 0x12774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x127754u);
        ctx->pc = 0x127750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12774Cu;
        // 0x127750: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12774Cu, 0x127754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127754u;
label_127754:
    // 0x127754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x127754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127758:
    // 0x127758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12775c:
    // 0x12775c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_127760:
    // 0x127760: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_127764:
    // 0x127764: 0x40f809  jalr        $v0
label_127768:
    if (ctx->pc == 0x127768u) {
        ctx->pc = 0x127768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127764u;
        // 0x127768: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12776Cu;
        goto label_12776c;
    }
    ctx->pc = 0x127764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12776Cu);
        ctx->pc = 0x127768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127764u;
        // 0x127768: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127764u, 0x12776Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12776Cu;
label_12776c:
    // 0x12776c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_127770:
    if (ctx->pc == 0x127770u) {
        ctx->pc = 0x127770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12776Cu;
        // 0x127770: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127774u;
        goto label_127774;
    }
    ctx->pc = 0x12776Cu;
    {
        const bool branch_taken_0x12776c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x127770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12776Cu;
        // 0x127770: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12776c) {
            ctx->pc = 0x1277A8u;
            goto label_1277a8;
        }
    }
    ctx->pc = 0x127774u;
label_127774:
    // 0x127774: 0xa2400478  sb          $zero, 0x478($s2)
    ctx->pc = 0x127774u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
label_127778:
    // 0x127778: 0xae400424  sw          $zero, 0x424($s2)
    ctx->pc = 0x127778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1060), GPR_U32(ctx, 0));
label_12777c:
    // 0x12777c: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_127780:
    // 0x127780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127784:
    // 0x127784: 0x0  nop
    ctx->pc = 0x127784u;
    // NOP
label_127788:
    // 0x127788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12778c:
    // 0x12778c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_127790:
    if (ctx->pc == 0x127790u) {
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0xa06001b4  sb          $zero, 0x1B4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127794u;
        goto label_127794;
    }
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12778c) {
            ctx->pc = 0x127790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12778Cu;
            // 0x127790: 0xa06001b4  sb          $zero, 0x1B4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127794u;
            goto label_127794;
        }
    }
    ctx->pc = 0x127794u;
label_127794:
    // 0x127794: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_127798:
    // 0x127798: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_12779c:
    if (ctx->pc == 0x12779Cu) {
        ctx->pc = 0x12779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127798u;
        // 0x12779c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277A0u;
        goto label_1277a0;
    }
    ctx->pc = 0x127798u;
    {
        const bool branch_taken_0x127798 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127798u;
        // 0x12779c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127798) {
            ctx->pc = 0x127788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127788;
        }
    }
    ctx->pc = 0x1277A0u;
label_1277a0:
    // 0x1277a0: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1277a4:
    if (ctx->pc == 0x1277A4u) {
        ctx->pc = 0x1277A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A0u;
        // 0x1277a4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277A8u;
        goto label_1277a8;
    }
    ctx->pc = 0x1277A0u;
    {
        const bool branch_taken_0x1277a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A0u;
        // 0x1277a4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277a0) {
            ctx->pc = 0x127A98u;
            goto label_127a98;
        }
    }
    ctx->pc = 0x1277A8u;
label_1277a8:
    // 0x1277a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1277a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1277ac:
    // 0x1277ac: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1277b0:
    // 0x1277b0: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1277b4:
    // 0x1277b4: 0x40f809  jalr        $v0
label_1277b8:
    if (ctx->pc == 0x1277B8u) {
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277B4u;
        // 0x1277b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277BCu;
        goto label_1277bc;
    }
    ctx->pc = 0x1277B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1277BCu);
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277B4u;
        // 0x1277b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277B4u, 0x1277BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1277BCu;
label_1277bc:
    // 0x1277bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1277bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1277c0:
    // 0x1277c0: 0xc047e78  jal         func_11F9E0
label_1277c4:
    if (ctx->pc == 0x1277C4u) {
        ctx->pc = 0x1277C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277C0u;
        // 0x1277c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277C8u;
        goto label_1277c8;
    }
    ctx->pc = 0x1277C0u;
    SET_GPR_U32(ctx, 31, 0x1277C8u);
    ctx->pc = 0x1277C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277C0u;
    // 0x1277c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1277C0u, 0x1277C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277C8u;
label_1277c8:
    // 0x1277c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1277cc:
    // 0x1277cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1277ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1277d0:
    // 0x1277d0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1277d4:
    // 0x1277d4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1277d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1277d8:
    // 0x1277d8: 0x40f809  jalr        $v0
label_1277dc:
    if (ctx->pc == 0x1277DCu) {
        ctx->pc = 0x1277DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D8u;
        // 0x1277dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277E0u;
        goto label_1277e0;
    }
    ctx->pc = 0x1277D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1277E0u);
        ctx->pc = 0x1277DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D8u;
        // 0x1277dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277D8u, 0x1277E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1277E0u;
label_1277e0:
    // 0x1277e0: 0xc047e6c  jal         func_11F9B0
label_1277e4:
    if (ctx->pc == 0x1277E4u) {
        ctx->pc = 0x1277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E0u;
        // 0x1277e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277E8u;
        goto label_1277e8;
    }
    ctx->pc = 0x1277E0u;
    SET_GPR_U32(ctx, 31, 0x1277E8u);
    ctx->pc = 0x1277E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277E0u;
    // 0x1277e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1277E0u, 0x1277E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277E8u;
label_1277e8:
    // 0x1277e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1277e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1277ec:
    // 0x1277ec: 0x56300008  bnel        $s1, $s0, . + 4 + (0x8 << 2)
label_1277f0:
    if (ctx->pc == 0x1277F0u) {
        ctx->pc = 0x1277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ECu;
        // 0x1277f0: 0x8e73b198  lw          $s3, -0x4E68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277F4u;
        goto label_1277f4;
    }
    ctx->pc = 0x1277ECu;
    {
        const bool branch_taken_0x1277ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x1277ec) {
            ctx->pc = 0x1277F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1277ECu;
            // 0x1277f0: 0x8e73b198  lw          $s3, -0x4E68($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127810u;
            goto label_127810;
        }
    }
    ctx->pc = 0x1277F4u;
label_1277f4:
    // 0x1277f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1277f8:
    if (ctx->pc == 0x1277F8u) {
        ctx->pc = 0x1277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277F4u;
        // 0x1277f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277FCu;
        goto label_1277fc;
    }
    ctx->pc = 0x1277F4u;
    {
        const bool branch_taken_0x1277f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277F4u;
        // 0x1277f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277f4) {
            ctx->pc = 0x12780Cu;
            goto label_12780c;
        }
    }
    ctx->pc = 0x1277FCu;
label_1277fc:
    // 0x1277fc: 0xc049f52  jal         func_127D48
label_127800:
    if (ctx->pc == 0x127800u) {
        ctx->pc = 0x127800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277FCu;
        // 0x127800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127804u;
        goto label_127804;
    }
    ctx->pc = 0x1277FCu;
    SET_GPR_U32(ctx, 31, 0x127804u);
    ctx->pc = 0x127800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277FCu;
    // 0x127800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x1277FCu, 0x127804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127804u;
label_127804:
    // 0x127804: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x127804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_127808:
    // 0x127808: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x127808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_12780c:
    // 0x12780c: 0x8e73b198  lw          $s3, -0x4E68($s3)
    ctx->pc = 0x12780cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
label_127810:
    // 0x127810: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127814:
    // 0x127814: 0x16750053  bne         $s3, $s5, . + 4 + (0x53 << 2)
label_127818:
    if (ctx->pc == 0x127818u) {
        ctx->pc = 0x127818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127814u;
        // 0x127818: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12781Cu;
        goto label_12781c;
    }
    ctx->pc = 0x127814u;
    {
        const bool branch_taken_0x127814 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x127818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127814u;
        // 0x127818: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127814) {
            ctx->pc = 0x127964u;
            goto label_127964;
        }
    }
    ctx->pc = 0x12781Cu;
label_12781c:
    // 0x12781c: 0xde420468  ld          $v0, 0x468($s2)
    ctx->pc = 0x12781cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1128)));
label_127820:
    // 0x127820: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x127820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_127824:
    // 0x127824: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x127824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_127828:
    // 0x127828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x127828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_12782c:
    // 0x12782c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_127830:
    if (ctx->pc == 0x127830u) {
        ctx->pc = 0x127830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12782Cu;
        // 0x127830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127834u;
        goto label_127834;
    }
    ctx->pc = 0x12782Cu;
    {
        const bool branch_taken_0x12782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12782Cu;
        // 0x127830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12782c) {
            ctx->pc = 0x127844u;
            goto label_127844;
        }
    }
    ctx->pc = 0x127834u;
label_127834:
    // 0x127834: 0xa2550477  sb          $s5, 0x477($s2)
    ctx->pc = 0x127834u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1143), (uint8_t)GPR_U32(ctx, 21));
label_127838:
    // 0x127838: 0xa2420476  sb          $v0, 0x476($s2)
    ctx->pc = 0x127838u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1142), (uint8_t)GPR_U32(ctx, 2));
label_12783c:
    // 0x12783c: 0xc049aa2  jal         func_126A88
label_127840:
    if (ctx->pc == 0x127840u) {
        ctx->pc = 0x127840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12783Cu;
        // 0x127840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127844u;
        goto label_127844;
    }
    ctx->pc = 0x12783Cu;
    SET_GPR_U32(ctx, 31, 0x127844u);
    ctx->pc = 0x127840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12783Cu;
    // 0x127840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A88u, 0x12783Cu, 0x127844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127844u;
label_127844:
    // 0x127844: 0xc136df8  jal         func_4DB7E0
label_127848:
    if (ctx->pc == 0x127848u) {
        ctx->pc = 0x127848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127844u;
        // 0x127848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12784Cu;
        goto label_12784c;
    }
    ctx->pc = 0x127844u;
    SET_GPR_U32(ctx, 31, 0x12784Cu);
    ctx->pc = 0x127848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127844u;
    // 0x127848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x127844u, 0x12784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12784Cu;
label_12784c:
    // 0x12784c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12784cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_127850:
    // 0x127850: 0xc136dec  jal         func_4DB7B0
label_127854:
    if (ctx->pc == 0x127854u) {
        ctx->pc = 0x127854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127850u;
        // 0x127854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127858u;
        goto label_127858;
    }
    ctx->pc = 0x127850u;
    SET_GPR_U32(ctx, 31, 0x127858u);
    ctx->pc = 0x127854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127850u;
    // 0x127854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x127850u, 0x127858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127858u;
label_127858:
    // 0x127858: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x127858u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12785c:
    // 0x12785c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127860:
    // 0x127860: 0xc04b5ea  jal         func_12D7A8
label_127864:
    if (ctx->pc == 0x127864u) {
        ctx->pc = 0x127864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127860u;
        // 0x127864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127868u;
        goto label_127868;
    }
    ctx->pc = 0x127860u;
    SET_GPR_U32(ctx, 31, 0x127868u);
    ctx->pc = 0x127864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127860u;
    // 0x127864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x127860u, 0x127868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127868u;
label_127868:
    // 0x127868: 0xc136dfa  jal         func_4DB7E8
label_12786c:
    if (ctx->pc == 0x12786Cu) {
        ctx->pc = 0x12786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127868u;
        // 0x12786c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127870u;
        goto label_127870;
    }
    ctx->pc = 0x127868u;
    SET_GPR_U32(ctx, 31, 0x127870u);
    ctx->pc = 0x12786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127868u;
    // 0x12786c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x127868u, 0x127870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127870u;
label_127870:
    // 0x127870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127874:
    // 0x127874: 0xc04953c  jal         func_1254F0
label_127878:
    if (ctx->pc == 0x127878u) {
        ctx->pc = 0x127878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127874u;
        // 0x127878: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12787Cu;
        goto label_12787c;
    }
    ctx->pc = 0x127874u;
    SET_GPR_U32(ctx, 31, 0x12787Cu);
    ctx->pc = 0x127878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127874u;
    // 0x127878: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x127874u, 0x12787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12787Cu;
label_12787c:
    // 0x12787c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127880:
    // 0x127880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127884:
    // 0x127884: 0xc048314  jal         func_120C50
label_127888:
    if (ctx->pc == 0x127888u) {
        ctx->pc = 0x127888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127884u;
        // 0x127888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12788Cu;
        goto label_12788c;
    }
    ctx->pc = 0x127884u;
    SET_GPR_U32(ctx, 31, 0x12788Cu);
    ctx->pc = 0x127888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127884u;
    // 0x127888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x127884u, 0x12788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12788Cu;
label_12788c:
    // 0x12788c: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_127890:
    if (ctx->pc == 0x127890u) {
        ctx->pc = 0x127894u;
        goto label_127894;
    }
    ctx->pc = 0x12788Cu;
    {
        const bool branch_taken_0x12788c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x12788c) {
            ctx->pc = 0x1278A8u;
            goto label_1278a8;
        }
    }
    ctx->pc = 0x127894u;
label_127894:
    // 0x127894: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_127898:
    // 0x127898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12789c:
    // 0x12789c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1278a0:
    // 0x1278a0: 0xc0496d8  jal         func_125B60
label_1278a4:
    if (ctx->pc == 0x1278A4u) {
        ctx->pc = 0x1278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A0u;
        // 0x1278a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278A8u;
        goto label_1278a8;
    }
    ctx->pc = 0x1278A0u;
    SET_GPR_U32(ctx, 31, 0x1278A8u);
    ctx->pc = 0x1278A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278A0u;
    // 0x1278a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x1278A0u, 0x1278A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278A8u;
label_1278a8:
    // 0x1278a8: 0xc047e72  jal         func_11F9C8
label_1278ac:
    if (ctx->pc == 0x1278ACu) {
        ctx->pc = 0x1278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A8u;
        // 0x1278ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278B0u;
        goto label_1278b0;
    }
    ctx->pc = 0x1278A8u;
    SET_GPR_U32(ctx, 31, 0x1278B0u);
    ctx->pc = 0x1278ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278A8u;
    // 0x1278ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x1278A8u, 0x1278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278B0u;
label_1278b0:
    // 0x1278b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1278b4:
    // 0x1278b4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1278b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1278b8:
    // 0x1278b8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1278b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1278bc:
    // 0x1278bc: 0xa0f809  jalr        $a1
label_1278c0:
    if (ctx->pc == 0x1278C0u) {
        ctx->pc = 0x1278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278BCu;
        // 0x1278c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278C4u;
        goto label_1278c4;
    }
    ctx->pc = 0x1278BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1278C4u);
        ctx->pc = 0x1278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278BCu;
        // 0x1278c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1278BCu, 0x1278C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1278C4u;
label_1278c4:
    // 0x1278c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1278c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1278c8:
    // 0x1278c8: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_1278cc:
    if (ctx->pc == 0x1278CCu) {
        ctx->pc = 0x1278CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C8u;
        // 0x1278cc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278D0u;
        goto label_1278d0;
    }
    ctx->pc = 0x1278C8u;
    {
        const bool branch_taken_0x1278c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1278CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C8u;
        // 0x1278cc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c8) {
            ctx->pc = 0x12794Cu;
            goto label_12794c;
        }
    }
    ctx->pc = 0x1278D0u;
label_1278d0:
    // 0x1278d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1278d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1278d4:
    // 0x1278d4: 0xc047e78  jal         func_11F9E0
label_1278d8:
    if (ctx->pc == 0x1278D8u) {
        ctx->pc = 0x1278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278D4u;
        // 0x1278d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278DCu;
        goto label_1278dc;
    }
    ctx->pc = 0x1278D4u;
    SET_GPR_U32(ctx, 31, 0x1278DCu);
    ctx->pc = 0x1278D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278D4u;
    // 0x1278d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1278D4u, 0x1278DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278DCu;
label_1278dc:
    // 0x1278dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1278dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1278e0:
    // 0x1278e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1278e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1278e4:
    // 0x1278e4: 0xc047e78  jal         func_11F9E0
label_1278e8:
    if (ctx->pc == 0x1278E8u) {
        ctx->pc = 0x1278E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278E4u;
        // 0x1278e8: 0xa0560473  sb          $s6, 0x473($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1139), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278ECu;
        goto label_1278ec;
    }
    ctx->pc = 0x1278E4u;
    SET_GPR_U32(ctx, 31, 0x1278ECu);
    ctx->pc = 0x1278E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E4u;
    // 0x1278e8: 0xa0560473  sb          $s6, 0x473($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1139), (uint8_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1278E4u, 0x1278ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278ECu;
label_1278ec:
    // 0x1278ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1278ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1278f0:
    // 0x1278f0: 0xc136df8  jal         func_4DB7E0
label_1278f4:
    if (ctx->pc == 0x1278F4u) {
        ctx->pc = 0x1278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278F0u;
        // 0x1278f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278F8u;
        goto label_1278f8;
    }
    ctx->pc = 0x1278F0u;
    SET_GPR_U32(ctx, 31, 0x1278F8u);
    ctx->pc = 0x1278F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278F0u;
    // 0x1278f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x1278F0u, 0x1278F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278F8u;
label_1278f8:
    // 0x1278f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1278f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1278fc:
    // 0x1278fc: 0xc136dec  jal         func_4DB7B0
label_127900:
    if (ctx->pc == 0x127900u) {
        ctx->pc = 0x127900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278FCu;
        // 0x127900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127904u;
        goto label_127904;
    }
    ctx->pc = 0x1278FCu;
    SET_GPR_U32(ctx, 31, 0x127904u);
    ctx->pc = 0x127900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278FCu;
    // 0x127900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x1278FCu, 0x127904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127904u;
label_127904:
    // 0x127904: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x127904u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_127908:
    // 0x127908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12790c:
    // 0x12790c: 0xc04b5ea  jal         func_12D7A8
label_127910:
    if (ctx->pc == 0x127910u) {
        ctx->pc = 0x127910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12790Cu;
        // 0x127910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127914u;
        goto label_127914;
    }
    ctx->pc = 0x12790Cu;
    SET_GPR_U32(ctx, 31, 0x127914u);
    ctx->pc = 0x127910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12790Cu;
    // 0x127910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x12790Cu, 0x127914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127914u;
label_127914:
    // 0x127914: 0xc136dfa  jal         func_4DB7E8
label_127918:
    if (ctx->pc == 0x127918u) {
        ctx->pc = 0x127918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127914u;
        // 0x127918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12791Cu;
        goto label_12791c;
    }
    ctx->pc = 0x127914u;
    SET_GPR_U32(ctx, 31, 0x12791Cu);
    ctx->pc = 0x127918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127914u;
    // 0x127918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x127914u, 0x12791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12791Cu;
label_12791c:
    // 0x12791c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x12791cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_127920:
    // 0x127920: 0xc04953c  jal         func_1254F0
label_127924:
    if (ctx->pc == 0x127924u) {
        ctx->pc = 0x127924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127920u;
        // 0x127924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127928u;
        goto label_127928;
    }
    ctx->pc = 0x127920u;
    SET_GPR_U32(ctx, 31, 0x127928u);
    ctx->pc = 0x127924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127920u;
    // 0x127924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x127920u, 0x127928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127928u;
label_127928:
    // 0x127928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12792c:
    // 0x12792c: 0xc047e78  jal         func_11F9E0
label_127930:
    if (ctx->pc == 0x127930u) {
        ctx->pc = 0x127930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12792Cu;
        // 0x127930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127934u;
        goto label_127934;
    }
    ctx->pc = 0x12792Cu;
    SET_GPR_U32(ctx, 31, 0x127934u);
    ctx->pc = 0x127930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12792Cu;
    // 0x127930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12792Cu, 0x127934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127934u;
label_127934:
    // 0x127934: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_127938:
    // 0x127938: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12793c:
    // 0x12793c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127940:
    // 0x127940: 0xc0496d8  jal         func_125B60
label_127944:
    if (ctx->pc == 0x127944u) {
        ctx->pc = 0x127944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127940u;
        // 0x127944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127948u;
        goto label_127948;
    }
    ctx->pc = 0x127940u;
    SET_GPR_U32(ctx, 31, 0x127948u);
    ctx->pc = 0x127944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127940u;
    // 0x127944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x127940u, 0x127948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127948u;
label_127948:
    // 0x127948: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x127948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12794c:
    // 0x12794c: 0xa2400464  sb          $zero, 0x464($s2)
    ctx->pc = 0x12794cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1124), (uint8_t)GPR_U32(ctx, 0));
label_127950:
    // 0x127950: 0xc4408ac0  lwc1        $f0, -0x7540($v0)
    ctx->pc = 0x127950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127954:
    // 0x127954: 0xa2400463  sb          $zero, 0x463($s2)
    ctx->pc = 0x127954u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1123), (uint8_t)GPR_U32(ctx, 0));
label_127958:
    // 0x127958: 0xe640043c  swc1        $f0, 0x43C($s2)
    ctx->pc = 0x127958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
label_12795c:
    // 0x12795c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_127960:
    if (ctx->pc == 0x127960u) {
        ctx->pc = 0x127960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12795Cu;
        // 0x127960: 0xa2400462  sb          $zero, 0x462($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1122), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127964u;
        goto label_127964;
    }
    ctx->pc = 0x12795Cu;
    {
        const bool branch_taken_0x12795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12795Cu;
        // 0x127960: 0xa2400462  sb          $zero, 0x462($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1122), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12795c) {
            ctx->pc = 0x127A94u;
            goto label_127a94;
        }
    }
    ctx->pc = 0x127964u;
label_127964:
    // 0x127964: 0x1662004c  bne         $s3, $v0, . + 4 + (0x4C << 2)
label_127968:
    if (ctx->pc == 0x127968u) {
        ctx->pc = 0x127968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127964u;
        // 0x127968: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12796Cu;
        goto label_12796c;
    }
    ctx->pc = 0x127964u;
    {
        const bool branch_taken_0x127964 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x127968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127964u;
        // 0x127968: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127964) {
            ctx->pc = 0x127A98u;
            goto label_127a98;
        }
    }
    ctx->pc = 0x12796Cu;
label_12796c:
    // 0x12796c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x12796cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_127970:
    // 0x127970: 0xa2550477  sb          $s5, 0x477($s2)
    ctx->pc = 0x127970u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1143), (uint8_t)GPR_U32(ctx, 21));
label_127974:
    // 0x127974: 0xa2560476  sb          $s6, 0x476($s2)
    ctx->pc = 0x127974u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1142), (uint8_t)GPR_U32(ctx, 22));
label_127978:
    // 0x127978: 0xc049aa2  jal         func_126A88
label_12797c:
    if (ctx->pc == 0x12797Cu) {
        ctx->pc = 0x12797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127978u;
        // 0x12797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127980u;
        goto label_127980;
    }
    ctx->pc = 0x127978u;
    SET_GPR_U32(ctx, 31, 0x127980u);
    ctx->pc = 0x12797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127978u;
    // 0x12797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A88u, 0x127978u, 0x127980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127980u;
label_127980:
    // 0x127980: 0xc136df8  jal         func_4DB7E0
label_127984:
    if (ctx->pc == 0x127984u) {
        ctx->pc = 0x127984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127980u;
        // 0x127984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127988u;
        goto label_127988;
    }
    ctx->pc = 0x127980u;
    SET_GPR_U32(ctx, 31, 0x127988u);
    ctx->pc = 0x127984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127980u;
    // 0x127984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x127980u, 0x127988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127988u;
label_127988:
    // 0x127988: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x127988u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12798c:
    // 0x12798c: 0xc136dec  jal         func_4DB7B0
label_127990:
    if (ctx->pc == 0x127990u) {
        ctx->pc = 0x127990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12798Cu;
        // 0x127990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127994u;
        goto label_127994;
    }
    ctx->pc = 0x12798Cu;
    SET_GPR_U32(ctx, 31, 0x127994u);
    ctx->pc = 0x127990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12798Cu;
    // 0x127990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x12798Cu, 0x127994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127994u;
label_127994:
    // 0x127994: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x127994u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_127998:
    // 0x127998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12799c:
    // 0x12799c: 0xc04b5ea  jal         func_12D7A8
label_1279a0:
    if (ctx->pc == 0x1279A0u) {
        ctx->pc = 0x1279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12799Cu;
        // 0x1279a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279A4u;
        goto label_1279a4;
    }
    ctx->pc = 0x12799Cu;
    SET_GPR_U32(ctx, 31, 0x1279A4u);
    ctx->pc = 0x1279A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12799Cu;
    // 0x1279a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x12799Cu, 0x1279A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279A4u;
label_1279a4:
    // 0x1279a4: 0xc136dfa  jal         func_4DB7E8
label_1279a8:
    if (ctx->pc == 0x1279A8u) {
        ctx->pc = 0x1279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A4u;
        // 0x1279a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279ACu;
        goto label_1279ac;
    }
    ctx->pc = 0x1279A4u;
    SET_GPR_U32(ctx, 31, 0x1279ACu);
    ctx->pc = 0x1279A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279A4u;
    // 0x1279a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x1279A4u, 0x1279ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279ACu;
label_1279ac:
    // 0x1279ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1279acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1279b0:
    // 0x1279b0: 0xc04953c  jal         func_1254F0
label_1279b4:
    if (ctx->pc == 0x1279B4u) {
        ctx->pc = 0x1279B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B0u;
        // 0x1279b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279B8u;
        goto label_1279b8;
    }
    ctx->pc = 0x1279B0u;
    SET_GPR_U32(ctx, 31, 0x1279B8u);
    ctx->pc = 0x1279B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279B0u;
    // 0x1279b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x1279B0u, 0x1279B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279B8u;
label_1279b8:
    // 0x1279b8: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_1279bc:
    if (ctx->pc == 0x1279BCu) {
        ctx->pc = 0x1279BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B8u;
        // 0x1279bc: 0xa2550473  sb          $s5, 0x473($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1139), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279C0u;
        goto label_1279c0;
    }
    ctx->pc = 0x1279B8u;
    {
        const bool branch_taken_0x1279b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B8u;
        // 0x1279bc: 0xa2550473  sb          $s5, 0x473($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1139), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279b8) {
            ctx->pc = 0x1279D4u;
            goto label_1279d4;
        }
    }
    ctx->pc = 0x1279C0u;
label_1279c0:
    // 0x1279c0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1279c4:
    // 0x1279c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1279c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1279c8:
    // 0x1279c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1279c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1279cc:
    // 0x1279cc: 0xc0496d8  jal         func_125B60
label_1279d0:
    if (ctx->pc == 0x1279D0u) {
        ctx->pc = 0x1279D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279CCu;
        // 0x1279d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279D4u;
        goto label_1279d4;
    }
    ctx->pc = 0x1279CCu;
    SET_GPR_U32(ctx, 31, 0x1279D4u);
    ctx->pc = 0x1279D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279CCu;
    // 0x1279d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x1279CCu, 0x1279D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279D4u;
label_1279d4:
    // 0x1279d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1279d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1279d8:
    // 0x1279d8: 0xc047e78  jal         func_11F9E0
label_1279dc:
    if (ctx->pc == 0x1279DCu) {
        ctx->pc = 0x1279DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279D8u;
        // 0x1279dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279E0u;
        goto label_1279e0;
    }
    ctx->pc = 0x1279D8u;
    SET_GPR_U32(ctx, 31, 0x1279E0u);
    ctx->pc = 0x1279DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279D8u;
    // 0x1279dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1279D8u, 0x1279E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279E0u;
label_1279e0:
    // 0x1279e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1279e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1279e4:
    // 0x1279e4: 0xc047e6c  jal         func_11F9B0
label_1279e8:
    if (ctx->pc == 0x1279E8u) {
        ctx->pc = 0x1279E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E4u;
        // 0x1279e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279ECu;
        goto label_1279ec;
    }
    ctx->pc = 0x1279E4u;
    SET_GPR_U32(ctx, 31, 0x1279ECu);
    ctx->pc = 0x1279E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279E4u;
    // 0x1279e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1279E4u, 0x1279ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279ECu;
label_1279ec:
    // 0x1279ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1279ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1279f0:
    // 0x1279f0: 0x56300029  bnel        $s1, $s0, . + 4 + (0x29 << 2)
label_1279f4:
    if (ctx->pc == 0x1279F4u) {
        ctx->pc = 0x1279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F0u;
        // 0x1279f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279F8u;
        goto label_1279f8;
    }
    ctx->pc = 0x1279F0u;
    {
        const bool branch_taken_0x1279f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x1279f0) {
            ctx->pc = 0x1279F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1279F0u;
            // 0x1279f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127A98u;
            goto label_127a98;
        }
    }
    ctx->pc = 0x1279F8u;
label_1279f8:
    // 0x1279f8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1279fc:
    if (ctx->pc == 0x1279FCu) {
        ctx->pc = 0x1279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F8u;
        // 0x1279fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A00u;
        goto label_127a00;
    }
    ctx->pc = 0x1279F8u;
    {
        const bool branch_taken_0x1279f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F8u;
        // 0x1279fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f8) {
            ctx->pc = 0x127A94u;
            goto label_127a94;
        }
    }
    ctx->pc = 0x127A00u;
label_127a00:
    // 0x127a00: 0xa2360476  sb          $s6, 0x476($s1)
    ctx->pc = 0x127a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1142), (uint8_t)GPR_U32(ctx, 22));
label_127a04:
    // 0x127a04: 0xc049aa2  jal         func_126A88
label_127a08:
    if (ctx->pc == 0x127A08u) {
        ctx->pc = 0x127A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A04u;
        // 0x127a08: 0xa2330477  sb          $s3, 0x477($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A0Cu;
        goto label_127a0c;
    }
    ctx->pc = 0x127A04u;
    SET_GPR_U32(ctx, 31, 0x127A0Cu);
    ctx->pc = 0x127A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A04u;
    // 0x127a08: 0xa2330477  sb          $s3, 0x477($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A88u, 0x127A04u, 0x127A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A0Cu;
label_127a0c:
    // 0x127a0c: 0xc136df8  jal         func_4DB7E0
label_127a10:
    if (ctx->pc == 0x127A10u) {
        ctx->pc = 0x127A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A0Cu;
        // 0x127a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A14u;
        goto label_127a14;
    }
    ctx->pc = 0x127A0Cu;
    SET_GPR_U32(ctx, 31, 0x127A14u);
    ctx->pc = 0x127A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A0Cu;
    // 0x127a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x127A0Cu, 0x127A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A14u;
label_127a14:
    // 0x127a14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x127a14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_127a18:
    // 0x127a18: 0xc136dec  jal         func_4DB7B0
label_127a1c:
    if (ctx->pc == 0x127A1Cu) {
        ctx->pc = 0x127A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A18u;
        // 0x127a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A20u;
        goto label_127a20;
    }
    ctx->pc = 0x127A18u;
    SET_GPR_U32(ctx, 31, 0x127A20u);
    ctx->pc = 0x127A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A18u;
    // 0x127a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x127A18u, 0x127A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A20u;
label_127a20:
    // 0x127a20: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x127a20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_127a24:
    // 0x127a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127a28:
    // 0x127a28: 0xc04b5ea  jal         func_12D7A8
label_127a2c:
    if (ctx->pc == 0x127A2Cu) {
        ctx->pc = 0x127A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A28u;
        // 0x127a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A30u;
        goto label_127a30;
    }
    ctx->pc = 0x127A28u;
    SET_GPR_U32(ctx, 31, 0x127A30u);
    ctx->pc = 0x127A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A28u;
    // 0x127a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x127A28u, 0x127A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A30u;
label_127a30:
    // 0x127a30: 0xc136dfa  jal         func_4DB7E8
label_127a34:
    if (ctx->pc == 0x127A34u) {
        ctx->pc = 0x127A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A30u;
        // 0x127a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A38u;
        goto label_127a38;
    }
    ctx->pc = 0x127A30u;
    SET_GPR_U32(ctx, 31, 0x127A38u);
    ctx->pc = 0x127A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A30u;
    // 0x127a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x127A30u, 0x127A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A38u;
label_127a38:
    // 0x127a38: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x127a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_127a3c:
    // 0x127a3c: 0xc04953c  jal         func_1254F0
label_127a40:
    if (ctx->pc == 0x127A40u) {
        ctx->pc = 0x127A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A3Cu;
        // 0x127a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A44u;
        goto label_127a44;
    }
    ctx->pc = 0x127A3Cu;
    SET_GPR_U32(ctx, 31, 0x127A44u);
    ctx->pc = 0x127A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A3Cu;
    // 0x127a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x127A3Cu, 0x127A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A44u;
label_127a44:
    // 0x127a44: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_127a48:
    if (ctx->pc == 0x127A48u) {
        ctx->pc = 0x127A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A44u;
        // 0x127a48: 0xa2350473  sb          $s5, 0x473($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1139), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A4Cu;
        goto label_127a4c;
    }
    ctx->pc = 0x127A44u;
    {
        const bool branch_taken_0x127a44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A44u;
        // 0x127a48: 0xa2350473  sb          $s5, 0x473($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1139), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a44) {
            ctx->pc = 0x127A60u;
            goto label_127a60;
        }
    }
    ctx->pc = 0x127A4Cu;
label_127a4c:
    // 0x127a4c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x127a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_127a50:
    // 0x127a50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127a54:
    // 0x127a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127a58:
    // 0x127a58: 0xc0496d8  jal         func_125B60
label_127a5c:
    if (ctx->pc == 0x127A5Cu) {
        ctx->pc = 0x127A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A58u;
        // 0x127a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A60u;
        goto label_127a60;
    }
    ctx->pc = 0x127A58u;
    SET_GPR_U32(ctx, 31, 0x127A60u);
    ctx->pc = 0x127A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A58u;
    // 0x127a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B60u, 0x127A58u, 0x127A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A60u;
label_127a60:
    // 0x127a60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x127a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127a64:
    // 0x127a64: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x127a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_127a68:
    // 0x127a68: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x127a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_127a6c:
    // 0x127a6c: 0x40f809  jalr        $v0
label_127a70:
    if (ctx->pc == 0x127A70u) {
        ctx->pc = 0x127A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A6Cu;
        // 0x127a70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A74u;
        goto label_127a74;
    }
    ctx->pc = 0x127A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127A74u);
        ctx->pc = 0x127A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A6Cu;
        // 0x127a70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A6Cu, 0x127A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127A74u;
label_127a74:
    // 0x127a74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x127a74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_127a78:
    // 0x127a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127a7c:
    // 0x127a7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x127a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_127a80:
    // 0x127a80: 0xc04957e  jal         func_1255F8
label_127a84:
    if (ctx->pc == 0x127A84u) {
        ctx->pc = 0x127A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A80u;
        // 0x127a84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A88u;
        goto label_127a88;
    }
    ctx->pc = 0x127A80u;
    SET_GPR_U32(ctx, 31, 0x127A88u);
    ctx->pc = 0x127A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A80u;
    // 0x127a84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1255F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1255F8u, 0x127A80u, 0x127A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A88u;
label_127a88:
    // 0x127a88: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x127a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_127a8c:
    // 0x127a8c: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x127a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_127a90:
    // 0x127a90: 0x7e220270  sq          $v0, 0x270($s1)
    ctx->pc = 0x127a90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 624), GPR_VEC(ctx, 2));
label_127a94:
    // 0x127a94: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x127a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_127a98:
    // 0x127a98: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x127a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_127a9c:
    // 0x127a9c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x127a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127aa0:
    // 0x127aa0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x127aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_127aa4:
    // 0x127aa4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x127aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_127aa8:
    // 0x127aa8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x127aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127aac:
    // 0x127aac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x127aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127ab0:
    // 0x127ab0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x127ab0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127ab4:
    // 0x127ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_127ab8:
    // 0x127ab8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x127ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_127abc:
    // 0x127abc: 0x3e00008  jr          $ra
label_127ac0:
    if (ctx->pc == 0x127AC0u) {
        ctx->pc = 0x127AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ABCu;
        // 0x127ac0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AC4u;
        goto label_127ac4;
    }
    ctx->pc = 0x127ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ABCu;
        // 0x127ac0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127AC4u;
label_127ac4:
    // 0x127ac4: 0x0  nop
    ctx->pc = 0x127ac4u;
    // NOP
    ctx->pc = 0x127ac8u;
}
