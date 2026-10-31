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

// Function: sub_00128678
// Address: 0x128678 - 0x128b20
void sub_00128678_0x128678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128678_0x128678");
#endif

    switch (ctx->pc) {
        case 0x128678u: goto label_128678;
        case 0x12867cu: goto label_12867c;
        case 0x128680u: goto label_128680;
        case 0x128684u: goto label_128684;
        case 0x128688u: goto label_128688;
        case 0x12868cu: goto label_12868c;
        case 0x128690u: goto label_128690;
        case 0x128694u: goto label_128694;
        case 0x128698u: goto label_128698;
        case 0x12869cu: goto label_12869c;
        case 0x1286a0u: goto label_1286a0;
        case 0x1286a4u: goto label_1286a4;
        case 0x1286a8u: goto label_1286a8;
        case 0x1286acu: goto label_1286ac;
        case 0x1286b0u: goto label_1286b0;
        case 0x1286b4u: goto label_1286b4;
        case 0x1286b8u: goto label_1286b8;
        case 0x1286bcu: goto label_1286bc;
        case 0x1286c0u: goto label_1286c0;
        case 0x1286c4u: goto label_1286c4;
        case 0x1286c8u: goto label_1286c8;
        case 0x1286ccu: goto label_1286cc;
        case 0x1286d0u: goto label_1286d0;
        case 0x1286d4u: goto label_1286d4;
        case 0x1286d8u: goto label_1286d8;
        case 0x1286dcu: goto label_1286dc;
        case 0x1286e0u: goto label_1286e0;
        case 0x1286e4u: goto label_1286e4;
        case 0x1286e8u: goto label_1286e8;
        case 0x1286ecu: goto label_1286ec;
        case 0x1286f0u: goto label_1286f0;
        case 0x1286f4u: goto label_1286f4;
        case 0x1286f8u: goto label_1286f8;
        case 0x1286fcu: goto label_1286fc;
        case 0x128700u: goto label_128700;
        case 0x128704u: goto label_128704;
        case 0x128708u: goto label_128708;
        case 0x12870cu: goto label_12870c;
        case 0x128710u: goto label_128710;
        case 0x128714u: goto label_128714;
        case 0x128718u: goto label_128718;
        case 0x12871cu: goto label_12871c;
        case 0x128720u: goto label_128720;
        case 0x128724u: goto label_128724;
        case 0x128728u: goto label_128728;
        case 0x12872cu: goto label_12872c;
        case 0x128730u: goto label_128730;
        case 0x128734u: goto label_128734;
        case 0x128738u: goto label_128738;
        case 0x12873cu: goto label_12873c;
        case 0x128740u: goto label_128740;
        case 0x128744u: goto label_128744;
        case 0x128748u: goto label_128748;
        case 0x12874cu: goto label_12874c;
        case 0x128750u: goto label_128750;
        case 0x128754u: goto label_128754;
        case 0x128758u: goto label_128758;
        case 0x12875cu: goto label_12875c;
        case 0x128760u: goto label_128760;
        case 0x128764u: goto label_128764;
        case 0x128768u: goto label_128768;
        case 0x12876cu: goto label_12876c;
        case 0x128770u: goto label_128770;
        case 0x128774u: goto label_128774;
        case 0x128778u: goto label_128778;
        case 0x12877cu: goto label_12877c;
        case 0x128780u: goto label_128780;
        case 0x128784u: goto label_128784;
        case 0x128788u: goto label_128788;
        case 0x12878cu: goto label_12878c;
        case 0x128790u: goto label_128790;
        case 0x128794u: goto label_128794;
        case 0x128798u: goto label_128798;
        case 0x12879cu: goto label_12879c;
        case 0x1287a0u: goto label_1287a0;
        case 0x1287a4u: goto label_1287a4;
        case 0x1287a8u: goto label_1287a8;
        case 0x1287acu: goto label_1287ac;
        case 0x1287b0u: goto label_1287b0;
        case 0x1287b4u: goto label_1287b4;
        case 0x1287b8u: goto label_1287b8;
        case 0x1287bcu: goto label_1287bc;
        case 0x1287c0u: goto label_1287c0;
        case 0x1287c4u: goto label_1287c4;
        case 0x1287c8u: goto label_1287c8;
        case 0x1287ccu: goto label_1287cc;
        case 0x1287d0u: goto label_1287d0;
        case 0x1287d4u: goto label_1287d4;
        case 0x1287d8u: goto label_1287d8;
        case 0x1287dcu: goto label_1287dc;
        case 0x1287e0u: goto label_1287e0;
        case 0x1287e4u: goto label_1287e4;
        case 0x1287e8u: goto label_1287e8;
        case 0x1287ecu: goto label_1287ec;
        case 0x1287f0u: goto label_1287f0;
        case 0x1287f4u: goto label_1287f4;
        case 0x1287f8u: goto label_1287f8;
        case 0x1287fcu: goto label_1287fc;
        case 0x128800u: goto label_128800;
        case 0x128804u: goto label_128804;
        case 0x128808u: goto label_128808;
        case 0x12880cu: goto label_12880c;
        case 0x128810u: goto label_128810;
        case 0x128814u: goto label_128814;
        case 0x128818u: goto label_128818;
        case 0x12881cu: goto label_12881c;
        case 0x128820u: goto label_128820;
        case 0x128824u: goto label_128824;
        case 0x128828u: goto label_128828;
        case 0x12882cu: goto label_12882c;
        case 0x128830u: goto label_128830;
        case 0x128834u: goto label_128834;
        case 0x128838u: goto label_128838;
        case 0x12883cu: goto label_12883c;
        case 0x128840u: goto label_128840;
        case 0x128844u: goto label_128844;
        case 0x128848u: goto label_128848;
        case 0x12884cu: goto label_12884c;
        case 0x128850u: goto label_128850;
        case 0x128854u: goto label_128854;
        case 0x128858u: goto label_128858;
        case 0x12885cu: goto label_12885c;
        case 0x128860u: goto label_128860;
        case 0x128864u: goto label_128864;
        case 0x128868u: goto label_128868;
        case 0x12886cu: goto label_12886c;
        case 0x128870u: goto label_128870;
        case 0x128874u: goto label_128874;
        case 0x128878u: goto label_128878;
        case 0x12887cu: goto label_12887c;
        case 0x128880u: goto label_128880;
        case 0x128884u: goto label_128884;
        case 0x128888u: goto label_128888;
        case 0x12888cu: goto label_12888c;
        case 0x128890u: goto label_128890;
        case 0x128894u: goto label_128894;
        case 0x128898u: goto label_128898;
        case 0x12889cu: goto label_12889c;
        case 0x1288a0u: goto label_1288a0;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288a8u: goto label_1288a8;
        case 0x1288acu: goto label_1288ac;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288b4u: goto label_1288b4;
        case 0x1288b8u: goto label_1288b8;
        case 0x1288bcu: goto label_1288bc;
        case 0x1288c0u: goto label_1288c0;
        case 0x1288c4u: goto label_1288c4;
        case 0x1288c8u: goto label_1288c8;
        case 0x1288ccu: goto label_1288cc;
        case 0x1288d0u: goto label_1288d0;
        case 0x1288d4u: goto label_1288d4;
        case 0x1288d8u: goto label_1288d8;
        case 0x1288dcu: goto label_1288dc;
        case 0x1288e0u: goto label_1288e0;
        case 0x1288e4u: goto label_1288e4;
        case 0x1288e8u: goto label_1288e8;
        case 0x1288ecu: goto label_1288ec;
        case 0x1288f0u: goto label_1288f0;
        case 0x1288f4u: goto label_1288f4;
        case 0x1288f8u: goto label_1288f8;
        case 0x1288fcu: goto label_1288fc;
        case 0x128900u: goto label_128900;
        case 0x128904u: goto label_128904;
        case 0x128908u: goto label_128908;
        case 0x12890cu: goto label_12890c;
        case 0x128910u: goto label_128910;
        case 0x128914u: goto label_128914;
        case 0x128918u: goto label_128918;
        case 0x12891cu: goto label_12891c;
        case 0x128920u: goto label_128920;
        case 0x128924u: goto label_128924;
        case 0x128928u: goto label_128928;
        case 0x12892cu: goto label_12892c;
        case 0x128930u: goto label_128930;
        case 0x128934u: goto label_128934;
        case 0x128938u: goto label_128938;
        case 0x12893cu: goto label_12893c;
        case 0x128940u: goto label_128940;
        case 0x128944u: goto label_128944;
        case 0x128948u: goto label_128948;
        case 0x12894cu: goto label_12894c;
        case 0x128950u: goto label_128950;
        case 0x128954u: goto label_128954;
        case 0x128958u: goto label_128958;
        case 0x12895cu: goto label_12895c;
        case 0x128960u: goto label_128960;
        case 0x128964u: goto label_128964;
        case 0x128968u: goto label_128968;
        case 0x12896cu: goto label_12896c;
        case 0x128970u: goto label_128970;
        case 0x128974u: goto label_128974;
        case 0x128978u: goto label_128978;
        case 0x12897cu: goto label_12897c;
        case 0x128980u: goto label_128980;
        case 0x128984u: goto label_128984;
        case 0x128988u: goto label_128988;
        case 0x12898cu: goto label_12898c;
        case 0x128990u: goto label_128990;
        case 0x128994u: goto label_128994;
        case 0x128998u: goto label_128998;
        case 0x12899cu: goto label_12899c;
        case 0x1289a0u: goto label_1289a0;
        case 0x1289a4u: goto label_1289a4;
        case 0x1289a8u: goto label_1289a8;
        case 0x1289acu: goto label_1289ac;
        case 0x1289b0u: goto label_1289b0;
        case 0x1289b4u: goto label_1289b4;
        case 0x1289b8u: goto label_1289b8;
        case 0x1289bcu: goto label_1289bc;
        case 0x1289c0u: goto label_1289c0;
        case 0x1289c4u: goto label_1289c4;
        case 0x1289c8u: goto label_1289c8;
        case 0x1289ccu: goto label_1289cc;
        case 0x1289d0u: goto label_1289d0;
        case 0x1289d4u: goto label_1289d4;
        case 0x1289d8u: goto label_1289d8;
        case 0x1289dcu: goto label_1289dc;
        case 0x1289e0u: goto label_1289e0;
        case 0x1289e4u: goto label_1289e4;
        case 0x1289e8u: goto label_1289e8;
        case 0x1289ecu: goto label_1289ec;
        case 0x1289f0u: goto label_1289f0;
        case 0x1289f4u: goto label_1289f4;
        case 0x1289f8u: goto label_1289f8;
        case 0x1289fcu: goto label_1289fc;
        case 0x128a00u: goto label_128a00;
        case 0x128a04u: goto label_128a04;
        case 0x128a08u: goto label_128a08;
        case 0x128a0cu: goto label_128a0c;
        case 0x128a10u: goto label_128a10;
        case 0x128a14u: goto label_128a14;
        case 0x128a18u: goto label_128a18;
        case 0x128a1cu: goto label_128a1c;
        case 0x128a20u: goto label_128a20;
        case 0x128a24u: goto label_128a24;
        case 0x128a28u: goto label_128a28;
        case 0x128a2cu: goto label_128a2c;
        case 0x128a30u: goto label_128a30;
        case 0x128a34u: goto label_128a34;
        case 0x128a38u: goto label_128a38;
        case 0x128a3cu: goto label_128a3c;
        case 0x128a40u: goto label_128a40;
        case 0x128a44u: goto label_128a44;
        case 0x128a48u: goto label_128a48;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a50u: goto label_128a50;
        case 0x128a54u: goto label_128a54;
        case 0x128a58u: goto label_128a58;
        case 0x128a5cu: goto label_128a5c;
        case 0x128a60u: goto label_128a60;
        case 0x128a64u: goto label_128a64;
        case 0x128a68u: goto label_128a68;
        case 0x128a6cu: goto label_128a6c;
        case 0x128a70u: goto label_128a70;
        case 0x128a74u: goto label_128a74;
        case 0x128a78u: goto label_128a78;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a80u: goto label_128a80;
        case 0x128a84u: goto label_128a84;
        case 0x128a88u: goto label_128a88;
        case 0x128a8cu: goto label_128a8c;
        case 0x128a90u: goto label_128a90;
        case 0x128a94u: goto label_128a94;
        case 0x128a98u: goto label_128a98;
        case 0x128a9cu: goto label_128a9c;
        case 0x128aa0u: goto label_128aa0;
        case 0x128aa4u: goto label_128aa4;
        case 0x128aa8u: goto label_128aa8;
        case 0x128aacu: goto label_128aac;
        case 0x128ab0u: goto label_128ab0;
        case 0x128ab4u: goto label_128ab4;
        case 0x128ab8u: goto label_128ab8;
        case 0x128abcu: goto label_128abc;
        case 0x128ac0u: goto label_128ac0;
        case 0x128ac4u: goto label_128ac4;
        case 0x128ac8u: goto label_128ac8;
        case 0x128accu: goto label_128acc;
        case 0x128ad0u: goto label_128ad0;
        case 0x128ad4u: goto label_128ad4;
        case 0x128ad8u: goto label_128ad8;
        case 0x128adcu: goto label_128adc;
        case 0x128ae0u: goto label_128ae0;
        case 0x128ae4u: goto label_128ae4;
        case 0x128ae8u: goto label_128ae8;
        case 0x128aecu: goto label_128aec;
        case 0x128af0u: goto label_128af0;
        case 0x128af4u: goto label_128af4;
        case 0x128af8u: goto label_128af8;
        case 0x128afcu: goto label_128afc;
        case 0x128b00u: goto label_128b00;
        case 0x128b04u: goto label_128b04;
        case 0x128b08u: goto label_128b08;
        case 0x128b0cu: goto label_128b0c;
        case 0x128b10u: goto label_128b10;
        case 0x128b14u: goto label_128b14;
        case 0x128b18u: goto label_128b18;
        case 0x128b1cu: goto label_128b1c;
        default: break;
    }

    ctx->pc = 0x128678u;

label_128678:
    // 0x128678: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_12867c:
    // 0x12867c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x12867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_128680:
    // 0x128680: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x128680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_128684:
    // 0x128684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128688:
    // 0x128688: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x128688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_12868c:
    // 0x12868c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_128690:
    // 0x128690: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x128690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_128694:
    // 0x128694: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_128698:
    // 0x128698: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x128698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_12869c:
    // 0x12869c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x12869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1286a0:
    // 0x1286a0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1286a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1286a4:
    // 0x1286a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1286a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1286a8:
    // 0x1286a8: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1286a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1286ac:
    // 0x1286ac: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1286acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1286b0:
    // 0x1286b0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1286b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1286b4:
    // 0x1286b4: 0xae2003b8  sw          $zero, 0x3B8($s1)
    ctx->pc = 0x1286b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 0));
label_1286b8:
    // 0x1286b8: 0xc62003cc  lwc1        $f0, 0x3CC($s1)
    ctx->pc = 0x1286b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1286bc:
    // 0x1286bc: 0xc62103b8  lwc1        $f1, 0x3B8($s1)
    ctx->pc = 0x1286bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1286c0:
    // 0x1286c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1286c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1286c4:
    // 0x1286c4: 0x0  nop
    ctx->pc = 0x1286c4u;
    // NOP
label_1286c8:
    // 0x1286c8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1286cc:
    if (ctx->pc == 0x1286CCu) {
        ctx->pc = 0x1286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286C8u;
        // 0x1286cc: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1286D0u;
        goto label_1286d0;
    }
    ctx->pc = 0x1286C8u;
    {
        const bool branch_taken_0x1286c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286C8u;
        // 0x1286cc: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286c8) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286D0u;
label_1286d0:
    // 0x1286d0: 0xc62003e0  lwc1        $f0, 0x3E0($s1)
    ctx->pc = 0x1286d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1286d4:
    // 0x1286d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1286d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1286d8:
    // 0x1286d8: 0x0  nop
    ctx->pc = 0x1286d8u;
    // NOP
label_1286dc:
    // 0x1286dc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_1286e0:
    if (ctx->pc == 0x1286E0u) {
        ctx->pc = 0x1286E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286DCu;
        // 0x1286e0: 0xe62003cc  swc1        $f0, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1286E4u;
        goto label_1286e4;
    }
    ctx->pc = 0x1286DCu;
    {
        const bool branch_taken_0x1286dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1286dc) {
            ctx->pc = 0x1286E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1286DCu;
            // 0x1286e0: 0xe62003cc  swc1        $f0, 0x3CC($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128710u;
            goto label_128710;
        }
    }
    ctx->pc = 0x1286E4u;
label_1286e4:
    // 0x1286e4: 0xc621034c  lwc1        $f1, 0x34C($s1)
    ctx->pc = 0x1286e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1286e8:
    // 0x1286e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1286e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1286ec:
    // 0x1286ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1286ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1286f0:
    // 0x1286f0: 0x0  nop
    ctx->pc = 0x1286f0u;
    // NOP
label_1286f4:
    // 0x1286f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1286f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1286f8:
    // 0x1286f8: 0x0  nop
    ctx->pc = 0x1286f8u;
    // NOP
label_1286fc:
    // 0x1286fc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_128700:
    if (ctx->pc == 0x128700u) {
        ctx->pc = 0x128700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286FCu;
        // 0x128700: 0xe62103cc  swc1        $f1, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x128704u;
        goto label_128704;
    }
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x128700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1286FCu;
            // 0x128700: 0xe62103cc  swc1        $f1, 0x3CC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128714u;
            goto label_128714;
        }
    }
    ctx->pc = 0x128704u;
label_128704:
    // 0x128704: 0xc620032c  lwc1        $f0, 0x32C($s1)
    ctx->pc = 0x128704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128708:
    // 0x128708: 0x10000002  b           . + 4 + (0x2 << 2)
label_12870c:
    if (ctx->pc == 0x12870Cu) {
        ctx->pc = 0x12870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128708u;
        // 0x12870c: 0xe62003cc  swc1        $f0, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x128710u;
        goto label_128710;
    }
    ctx->pc = 0x128708u;
    {
        const bool branch_taken_0x128708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128708u;
        // 0x12870c: 0xe62003cc  swc1        $f0, 0x3CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128708) {
            ctx->pc = 0x128714u;
            goto label_128714;
        }
    }
    ctx->pc = 0x128710u;
label_128710:
    // 0x128710: 0xe62103e0  swc1        $f1, 0x3E0($s1)
    ctx->pc = 0x128710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
label_128714:
    // 0x128714: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x128714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_128718:
    // 0x128718: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x128718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12871c:
    // 0x12871c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128720:
    // 0x128720: 0x0  nop
    ctx->pc = 0x128720u;
    // NOP
label_128724:
    // 0x128724: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x128724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
label_128728:
    // 0x128728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12872c:
    // 0x12872c: 0xc04aab8  jal         func_12AAE0
label_128730:
    if (ctx->pc == 0x128730u) {
        ctx->pc = 0x128730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12872Cu;
        // 0x128730: 0x24150030  addiu       $s5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128734u;
        goto label_128734;
    }
    ctx->pc = 0x12872Cu;
    SET_GPR_U32(ctx, 31, 0x128734u);
    ctx->pc = 0x128730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12872Cu;
    // 0x128730: 0x24150030  addiu       $s5, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAE0u, 0x12872Cu, 0x128734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128734u;
label_128734:
    // 0x128734: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x128734u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_128738:
    // 0x128738: 0x8e230314  lw          $v1, 0x314($s1)
    ctx->pc = 0x128738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_12873c:
    // 0x12873c: 0x26330200  addiu       $s3, $s1, 0x200
    ctx->pc = 0x12873cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_128740:
    // 0x128740: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x128740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_128744:
    // 0x128744: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x128744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_128748:
    // 0x128748: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x128748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_12874c:
    // 0x12874c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_128750:
    // 0x128750: 0x78435760  lq          $v1, 0x5760($v0)
    ctx->pc = 0x128750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 22368)));
label_128754:
    // 0x128754: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_128758:
    if (ctx->pc == 0x128758u) {
        ctx->pc = 0x128758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128754u;
        // 0x128758: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12875Cu;
        goto label_12875c;
    }
    ctx->pc = 0x128754u;
    {
        const bool branch_taken_0x128754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x128758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128754u;
        // 0x128758: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128754) {
            ctx->pc = 0x1287B4u;
            goto label_1287b4;
        }
    }
    ctx->pc = 0x12875Cu;
label_12875c:
    // 0x12875c: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x12875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
label_128760:
    // 0x128760: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x128760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_128764:
    // 0x128764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128768:
    // 0x128768: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_12876c:
    // 0x12876c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12876cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_128770:
    // 0x128770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128774:
    // 0x128774: 0xe62003ac  swc1        $f0, 0x3AC($s1)
    ctx->pc = 0x128774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 940), bits); }
label_128778:
    // 0x128778: 0xc6210304  lwc1        $f1, 0x304($s1)
    ctx->pc = 0x128778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12877c:
    // 0x12877c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128780:
    // 0x128780: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x128780u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_128784:
    // 0x128784: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x128784u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
label_128788:
    // 0x128788: 0xc12e34c  jal         func_4B8D30
label_12878c:
    if (ctx->pc == 0x12878Cu) {
        ctx->pc = 0x128790u;
        goto label_128790;
    }
    ctx->pc = 0x128788u;
    SET_GPR_U32(ctx, 31, 0x128790u);
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x128788u, 0x128790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128790u;
label_128790:
    // 0x128790: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x128790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_128794:
    // 0x128794: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x128794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
label_128798:
    // 0x128798: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x128798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_12879c:
    // 0x12879c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1287a0:
    // 0x1287a0: 0x0  nop
    ctx->pc = 0x1287a0u;
    // NOP
label_1287a4:
    // 0x1287a4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1287a4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_1287a8:
    // 0x1287a8: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x1287a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_1287ac:
    // 0x1287ac: 0xe62003b0  swc1        $f0, 0x3B0($s1)
    ctx->pc = 0x1287acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 944), bits); }
label_1287b0:
    // 0x1287b0: 0x7e220270  sq          $v0, 0x270($s1)
    ctx->pc = 0x1287b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 624), GPR_VEC(ctx, 2));
label_1287b4:
    // 0x1287b4: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x1287b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1287b8:
    // 0x1287b8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1287b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_1287bc:
    // 0x1287bc: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x1287bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_1287c0:
    // 0x1287c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1287c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1287c4:
    // 0x1287c4: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_1287c8:
    // 0x1287c8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1287cc:
    // 0x1287cc: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1287d0:
    // 0x1287d0: 0xc0cd8ec  jal         func_3363B0
label_1287d4:
    if (ctx->pc == 0x1287D4u) {
        ctx->pc = 0x1287D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287D0u;
        // 0x1287d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1287D8u;
        goto label_1287d8;
    }
    ctx->pc = 0x1287D0u;
    SET_GPR_U32(ctx, 31, 0x1287D8u);
    ctx->pc = 0x1287D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287D0u;
    // 0x1287d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1287D0u, 0x1287D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287D8u;
label_1287d8:
    // 0x1287d8: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x1287d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1287dc:
    // 0x1287dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1287dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1287e0:
    // 0x1287e0: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x1287e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_1287e4:
    // 0x1287e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1287e8:
    // 0x1287e8: 0x804601b0  lb          $a2, 0x1B0($v0)
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_1287ec:
    // 0x1287ec: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x1287ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1287f0:
    // 0x1287f0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1287f4:
    // 0x1287f4: 0xc136afa  jal         func_4DABE8
label_1287f8:
    if (ctx->pc == 0x1287F8u) {
        ctx->pc = 0x1287F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F4u;
        // 0x1287f8: 0x24c65750  addiu       $a2, $a2, 0x5750 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1287FCu;
        goto label_1287fc;
    }
    ctx->pc = 0x1287F4u;
    SET_GPR_U32(ctx, 31, 0x1287FCu);
    ctx->pc = 0x1287F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287F4u;
    // 0x1287f8: 0x24c65750  addiu       $a2, $a2, 0x5750 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1287F4u, 0x1287FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287FCu;
label_1287fc:
    // 0x1287fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_128800:
    // 0x128800: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x128800u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_128804:
    // 0x128804: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_128808:
    // 0x128808: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x128808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_12880c:
    // 0x12880c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12880cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128810:
    // 0x128810: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x128810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128814:
    // 0x128814: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x128814u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_128818:
    // 0x128818: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x128818u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12881c:
    // 0x12881c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12881cu;
    // VWAITQ (Q already resolved in this runtime)
label_128820:
    // 0x128820: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x128820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_128824:
    // 0x128824: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x128824u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_128828:
    // 0x128828: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x128828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12882c:
    // 0x12882c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_128830:
    // 0x128830: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x128830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_128834:
    // 0x128834: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x128834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_128838:
    // 0x128838: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x128838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12883c:
    // 0x12883c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x12883cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_128840:
    // 0x128840: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x128840u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128844:
    // 0x128844: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x128844u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_128848:
    // 0x128848: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x128848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_12884c:
    // 0x12884c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12884cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128850:
    // 0x128850: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x128850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128854:
    // 0x128854: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x128854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128858:
    // 0x128858: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x128858u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12885c:
    // 0x12885c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12885cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_128860:
    // 0x128860: 0x4a0003bf  vwaitq
    ctx->pc = 0x128860u;
    // VWAITQ (Q already resolved in this runtime)
label_128864:
    // 0x128864: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x128864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_128868:
    // 0x128868: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x128868u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_12886c:
    // 0x12886c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_128870:
    // 0x128870: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x128870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_128874:
    // 0x128874: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x128874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_128878:
    // 0x128878: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x128878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12887c:
    // 0x12887c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12887cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_128880:
    // 0x128880: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x128880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_128884:
    // 0x128884: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x128884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_128888:
    // 0x128888: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x128888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_12888c:
    // 0x12888c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x12888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_128890:
    // 0x128890: 0xc136b24  jal         func_4DAC90
label_128894:
    if (ctx->pc == 0x128894u) {
        ctx->pc = 0x128894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128890u;
        // 0x128894: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128898u;
        goto label_128898;
    }
    ctx->pc = 0x128890u;
    SET_GPR_U32(ctx, 31, 0x128898u);
    ctx->pc = 0x128894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128890u;
    // 0x128894: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x128890u, 0x128898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128898u;
label_128898:
    // 0x128898: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x128898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12889c:
    // 0x12889c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1288a0:
    // 0x1288a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1288a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1288a4:
    // 0x1288a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1288a8:
    // 0x1288a8: 0xc136b18  jal         func_4DAC60
label_1288ac:
    if (ctx->pc == 0x1288ACu) {
        ctx->pc = 0x1288ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288A8u;
        // 0x1288ac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288B0u;
        goto label_1288b0;
    }
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x1288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288A8u;
    // 0x1288ac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1288b4:
    // 0x1288b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1288b8:
    // 0x1288b8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1288b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1288bc:
    // 0x1288bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1288bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1288c0:
    // 0x1288c0: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_1288c4:
    // 0x1288c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1288c8:
    // 0x1288c8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1288cc:
    // 0x1288cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1288d0:
    // 0x1288d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1288d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1288d4:
    // 0x1288d4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1288d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1288d8:
    // 0x1288d8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1288d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1288dc:
    // 0x1288dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1288dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1288e0:
    // 0x1288e0: 0xc136afa  jal         func_4DABE8
label_1288e4:
    if (ctx->pc == 0x1288E4u) {
        ctx->pc = 0x1288E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288E0u;
        // 0x1288e4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288E8u;
        goto label_1288e8;
    }
    ctx->pc = 0x1288E0u;
    SET_GPR_U32(ctx, 31, 0x1288E8u);
    ctx->pc = 0x1288E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288E0u;
    // 0x1288e4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1288E0u, 0x1288E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288E8u;
label_1288e8:
    // 0x1288e8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1288e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1288ec:
    // 0x1288ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1288f0:
    // 0x1288f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1288f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1288f4:
    // 0x1288f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1288f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1288f8:
    // 0x1288f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1288f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1288fc:
    // 0x1288fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1288fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_128900:
    // 0x128900: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x128900u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_128904:
    // 0x128904: 0x4a0003bf  vwaitq
    ctx->pc = 0x128904u;
    // VWAITQ (Q already resolved in this runtime)
label_128908:
    // 0x128908: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x128908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12890c:
    // 0x12890c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12890cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_128910:
    // 0x128910: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x128910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_128914:
    // 0x128914: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x128914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_128918:
    // 0x128918: 0xc0cd766  jal         func_335D98
label_12891c:
    if (ctx->pc == 0x12891Cu) {
        ctx->pc = 0x12891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128918u;
        // 0x12891c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128920u;
        goto label_128920;
    }
    ctx->pc = 0x128918u;
    SET_GPR_U32(ctx, 31, 0x128920u);
    ctx->pc = 0x12891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128918u;
    // 0x12891c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x128918u, 0x128920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128920u;
label_128920:
    // 0x128920: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
label_128924:
    // 0x128924: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x128924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
label_128928:
    // 0x128928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12892c:
    // 0x12892c: 0xc0cd742  jal         func_335D08
label_128930:
    if (ctx->pc == 0x128930u) {
        ctx->pc = 0x128930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12892Cu;
        // 0x128930: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x128934u;
        goto label_128934;
    }
    ctx->pc = 0x12892Cu;
    SET_GPR_U32(ctx, 31, 0x128934u);
    ctx->pc = 0x128930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12892Cu;
    // 0x128930: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x12892Cu, 0x128934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128934u;
label_128934:
    // 0x128934: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128938:
    // 0x128938: 0xe6200350  swc1        $f0, 0x350($s1)
    ctx->pc = 0x128938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
label_12893c:
    // 0x12893c: 0xae20040c  sw          $zero, 0x40C($s1)
    ctx->pc = 0x12893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 0));
label_128940:
    // 0x128940: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_128944:
    // 0x128944: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_128948:
    // 0x128948: 0x60f809  jalr        $v1
label_12894c:
    if (ctx->pc == 0x12894Cu) {
        ctx->pc = 0x12894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128948u;
        // 0x12894c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128950u;
        goto label_128950;
    }
    ctx->pc = 0x128948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x128950u);
        ctx->pc = 0x12894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128948u;
        // 0x12894c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128948u, 0x128950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128950u;
label_128950:
    // 0x128950: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x128950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128954:
    // 0x128954: 0x3c013b56  lui         $at, 0x3B56
    ctx->pc = 0x128954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15190 << 16));
label_128958:
    // 0x128958: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x128958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_12895c:
    // 0x12895c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12895cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128960:
    // 0x128960: 0x84a402a8  lh          $a0, 0x2A8($a1)
    ctx->pc = 0x128960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 680)));
label_128964:
    // 0x128964: 0x8ca202ac  lw          $v0, 0x2AC($a1)
    ctx->pc = 0x128964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
label_128968:
    // 0x128968: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x128968u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12896c:
    // 0x12896c: 0x40f809  jalr        $v0
label_128970:
    if (ctx->pc == 0x128970u) {
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128974u;
        goto label_128974;
    }
    ctx->pc = 0x12896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128974u);
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12896Cu, 0x128974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128974u;
label_128974:
    // 0x128974: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x128974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_128978:
    // 0x128978: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x128978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12897c:
    // 0x12897c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12897cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_128980:
    // 0x128980: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x128980u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_128984:
    // 0x128984: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x128984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128988:
    // 0x128988: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x128988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12898c:
    // 0x12898c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12898cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_128990:
    // 0x128990: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x128990u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_128994:
    // 0x128994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_128998:
    // 0x128998: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x128998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12899c:
    // 0x12899c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12899cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1289a0:
    // 0x1289a0: 0x3c013bc1  lui         $at, 0x3BC1
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15297 << 16));
label_1289a4:
    // 0x1289a4: 0x342104fb  ori         $at, $at, 0x4FB
    ctx->pc = 0x1289a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1275);
label_1289a8:
    // 0x1289a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1289a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1289ac:
    // 0x1289ac: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1289acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1289b0:
    // 0x1289b0: 0x0  nop
    ctx->pc = 0x1289b0u;
    // NOP
label_1289b4:
    // 0x1289b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1289b8:
    if (ctx->pc == 0x1289B8u) {
        ctx->pc = 0x1289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289B4u;
        // 0x1289b8: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289BCu;
        goto label_1289bc;
    }
    ctx->pc = 0x1289B4u;
    {
        const bool branch_taken_0x1289b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289B4u;
        // 0x1289b8: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289b4) {
            ctx->pc = 0x1289C8u;
            goto label_1289c8;
        }
    }
    ctx->pc = 0x1289BCu;
label_1289bc:
    // 0x1289bc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1289bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1289c0:
    // 0x1289c0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1289c4:
    if (ctx->pc == 0x1289C4u) {
        ctx->pc = 0x1289C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289C0u;
        // 0x1289c4: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289C8u;
        goto label_1289c8;
    }
    ctx->pc = 0x1289C0u;
    {
        const bool branch_taken_0x1289c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289C0u;
        // 0x1289c4: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289c0) {
            ctx->pc = 0x128A38u;
            goto label_128a38;
        }
    }
    ctx->pc = 0x1289C8u;
label_1289c8:
    // 0x1289c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1289c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1289cc:
    // 0x1289cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1289ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1289d0:
    // 0x1289d0: 0x0  nop
    ctx->pc = 0x1289d0u;
    // NOP
label_1289d4:
    // 0x1289d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1289d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1289d8:
    // 0x1289d8: 0x0  nop
    ctx->pc = 0x1289d8u;
    // NOP
label_1289dc:
    // 0x1289dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1289e0:
    if (ctx->pc == 0x1289E0u) {
        ctx->pc = 0x1289E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289DCu;
        // 0x1289e0: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289E4u;
        goto label_1289e4;
    }
    ctx->pc = 0x1289DCu;
    {
        const bool branch_taken_0x1289dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1289E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289DCu;
        // 0x1289e0: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289dc) {
            ctx->pc = 0x1289F8u;
            goto label_1289f8;
        }
    }
    ctx->pc = 0x1289E4u;
label_1289e4:
    // 0x1289e4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1289e8:
    // 0x1289e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1289e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1289ec:
    // 0x1289ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1289ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1289f0:
    // 0x1289f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1289f4:
    if (ctx->pc == 0x1289F4u) {
        ctx->pc = 0x1289F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289F0u;
        // 0x1289f4: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289F8u;
        goto label_1289f8;
    }
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289F0u;
        // 0x1289f4: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x128A3Cu;
            goto label_128a3c;
        }
    }
    ctx->pc = 0x1289F8u;
label_1289f8:
    // 0x1289f8: 0x46021302  mul.s       $f12, $f2, $f2
    ctx->pc = 0x1289f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1289fc:
    // 0x1289fc: 0x460c1b01  sub.s       $f12, $f3, $f12
    ctx->pc = 0x1289fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
label_128a00:
    // 0x128a00: 0x0  nop
    ctx->pc = 0x128a00u;
    // NOP
label_128a04:
    // 0x128a04: 0x0  nop
    ctx->pc = 0x128a04u;
    // NOP
label_128a08:
    // 0x128a08: 0x460c0304  c1          0xC0304
    ctx->pc = 0x128a08u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_128a0c:
    // 0x128a0c: 0x0  nop
    ctx->pc = 0x128a0cu;
    // NOP
label_128a10:
    // 0x128a10: 0x0  nop
    ctx->pc = 0x128a10u;
    // NOP
label_128a14:
    // 0x128a14: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x128a14u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
label_128a18:
    // 0x128a18: 0xc0cd5a8  jal         func_3356A0
label_128a1c:
    if (ctx->pc == 0x128A1Cu) {
        ctx->pc = 0x128A20u;
        goto label_128a20;
    }
    ctx->pc = 0x128A18u;
    SET_GPR_U32(ctx, 31, 0x128A20u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x128A18u, 0x128A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A20u;
label_128a20:
    // 0x128a20: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x128a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_128a24:
    // 0x128a24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x128a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_128a28:
    // 0x128a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128a2c:
    // 0x128a2c: 0x0  nop
    ctx->pc = 0x128a2cu;
    // NOP
label_128a30:
    // 0x128a30: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x128a30u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128a34:
    // 0x128a34: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x128a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128a38:
    // 0x128a38: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x128a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128a3c:
    // 0x128a3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128a40:
    // 0x128a40: 0x0  nop
    ctx->pc = 0x128a40u;
    // NOP
label_128a44:
    // 0x128a44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_128a48:
    if (ctx->pc == 0x128A48u) {
        ctx->pc = 0x128A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A44u;
        // 0x128a48: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A4Cu;
        goto label_128a4c;
    }
    ctx->pc = 0x128A44u;
    {
        const bool branch_taken_0x128a44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a44) {
            ctx->pc = 0x128A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A44u;
            // 0x128a48: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A4Cu;
            goto label_128a4c;
        }
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128a50:
    // 0x128a50: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x128a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_128a54:
    // 0x128a54: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x128a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_128a58:
    // 0x128a58: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x128a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_128a5c:
    // 0x128a5c: 0x40f809  jalr        $v0
label_128a60:
    if (ctx->pc == 0x128A60u) {
        ctx->pc = 0x128A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A5Cu;
        // 0x128a60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A64u;
        goto label_128a64;
    }
    ctx->pc = 0x128A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128A64u);
        ctx->pc = 0x128A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A5Cu;
        // 0x128a60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A5Cu, 0x128A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128A64u;
label_128a64:
    // 0x128a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128a68:
    // 0x128a68: 0xc0cd8ec  jal         func_3363B0
label_128a6c:
    if (ctx->pc == 0x128A6Cu) {
        ctx->pc = 0x128A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A68u;
        // 0x128a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A70u;
        goto label_128a70;
    }
    ctx->pc = 0x128A68u;
    SET_GPR_U32(ctx, 31, 0x128A70u);
    ctx->pc = 0x128A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A68u;
    // 0x128a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x128A68u, 0x128A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A70u;
label_128a70:
    // 0x128a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x128a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128a74:
    // 0x128a74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x128a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128a78:
    // 0x128a78: 0xc04b642  jal         func_12D908
label_128a7c:
    if (ctx->pc == 0x128A7Cu) {
        ctx->pc = 0x128A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A78u;
        // 0x128a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A80u;
        goto label_128a80;
    }
    ctx->pc = 0x128A78u;
    SET_GPR_U32(ctx, 31, 0x128A80u);
    ctx->pc = 0x128A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A78u;
    // 0x128a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x128A78u, 0x128A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A80u;
label_128a80:
    // 0x128a80: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x128a80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_128a84:
    // 0x128a84: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x128a84u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_128a88:
    // 0x128a88: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x128a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128a8c:
    // 0x128a8c: 0x0  nop
    ctx->pc = 0x128a8cu;
    // NOP
label_128a90:
    // 0x128a90: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_128a94:
    if (ctx->pc == 0x128A94u) {
        ctx->pc = 0x128A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A90u;
        // 0x128a94: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A98u;
        goto label_128a98;
    }
    ctx->pc = 0x128A90u;
    {
        const bool branch_taken_0x128a90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A90u;
        // 0x128a94: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a90) {
            ctx->pc = 0x128AF0u;
            goto label_128af0;
        }
    }
    ctx->pc = 0x128A98u;
label_128a98:
    // 0x128a98: 0x4615b0c1  sub.s       $f3, $f22, $f21
    ctx->pc = 0x128a98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_128a9c:
    // 0x128a9c: 0xc62003ac  lwc1        $f0, 0x3AC($s1)
    ctx->pc = 0x128a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128aa0:
    // 0x128aa0: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x128aa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_128aa4:
    // 0x128aa4: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x128aa4u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
label_128aa8:
    // 0x128aa8: 0xc62203b0  lwc1        $f2, 0x3B0($s1)
    ctx->pc = 0x128aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128aac:
    // 0x128aac: 0xe6200354  swc1        $f0, 0x354($s1)
    ctx->pc = 0x128aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
label_128ab0:
    // 0x128ab0: 0x460200a8  max.s       $f2, $f0, $f2
    ctx->pc = 0x128ab0u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[2]);
label_128ab4:
    // 0x128ab4: 0x0  nop
    ctx->pc = 0x128ab4u;
    // NOP
label_128ab8:
    // 0x128ab8: 0x0  nop
    ctx->pc = 0x128ab8u;
    // NOP
label_128abc:
    // 0x128abc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x128abcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_128ac0:
    // 0x128ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_128ac4:
    // 0x128ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128ac8:
    // 0x128ac8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x128ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_128acc:
    // 0x128acc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x128accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_128ad0:
    // 0x128ad0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x128ad0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_128ad4:
    // 0x128ad4: 0xe6220354  swc1        $f2, 0x354($s1)
    ctx->pc = 0x128ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
label_128ad8:
    // 0x128ad8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x128ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_128adc:
    // 0x128adc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x128adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128ae0:
    // 0x128ae0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x128ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_128ae4:
    // 0x128ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x128ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_128ae8:
    // 0x128ae8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x128ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_128aec:
    // 0x128aec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x128aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_128af0:
    // 0x128af0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x128af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_128af4:
    // 0x128af4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x128af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_128af8:
    // 0x128af8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x128af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_128afc:
    // 0x128afc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x128afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_128b00:
    // 0x128b00: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x128b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_128b04:
    // 0x128b04: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x128b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_128b08:
    // 0x128b08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x128b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_128b0c:
    // 0x128b0c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x128b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_128b10:
    // 0x128b10: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x128b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_128b14:
    // 0x128b14: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x128b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_128b18:
    // 0x128b18: 0x3e00008  jr          $ra
label_128b1c:
    if (ctx->pc == 0x128B1Cu) {
        ctx->pc = 0x128B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B18u;
        // 0x128b1c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128B20u;
        goto label_fallthrough_0x128b18;
    }
    ctx->pc = 0x128B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B18u;
        // 0x128b1c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128b18:
    ctx->pc = 0x128B20u;
}
