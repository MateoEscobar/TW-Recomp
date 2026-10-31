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

// Function: sub_00472310
// Address: 0x472310 - 0x4725f0
void sub_00472310_0x472310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472310_0x472310");
#endif

    switch (ctx->pc) {
        case 0x472310u: goto label_472310;
        case 0x472314u: goto label_472314;
        case 0x472318u: goto label_472318;
        case 0x47231cu: goto label_47231c;
        case 0x472320u: goto label_472320;
        case 0x472324u: goto label_472324;
        case 0x472328u: goto label_472328;
        case 0x47232cu: goto label_47232c;
        case 0x472330u: goto label_472330;
        case 0x472334u: goto label_472334;
        case 0x472338u: goto label_472338;
        case 0x47233cu: goto label_47233c;
        case 0x472340u: goto label_472340;
        case 0x472344u: goto label_472344;
        case 0x472348u: goto label_472348;
        case 0x47234cu: goto label_47234c;
        case 0x472350u: goto label_472350;
        case 0x472354u: goto label_472354;
        case 0x472358u: goto label_472358;
        case 0x47235cu: goto label_47235c;
        case 0x472360u: goto label_472360;
        case 0x472364u: goto label_472364;
        case 0x472368u: goto label_472368;
        case 0x47236cu: goto label_47236c;
        case 0x472370u: goto label_472370;
        case 0x472374u: goto label_472374;
        case 0x472378u: goto label_472378;
        case 0x47237cu: goto label_47237c;
        case 0x472380u: goto label_472380;
        case 0x472384u: goto label_472384;
        case 0x472388u: goto label_472388;
        case 0x47238cu: goto label_47238c;
        case 0x472390u: goto label_472390;
        case 0x472394u: goto label_472394;
        case 0x472398u: goto label_472398;
        case 0x47239cu: goto label_47239c;
        case 0x4723a0u: goto label_4723a0;
        case 0x4723a4u: goto label_4723a4;
        case 0x4723a8u: goto label_4723a8;
        case 0x4723acu: goto label_4723ac;
        case 0x4723b0u: goto label_4723b0;
        case 0x4723b4u: goto label_4723b4;
        case 0x4723b8u: goto label_4723b8;
        case 0x4723bcu: goto label_4723bc;
        case 0x4723c0u: goto label_4723c0;
        case 0x4723c4u: goto label_4723c4;
        case 0x4723c8u: goto label_4723c8;
        case 0x4723ccu: goto label_4723cc;
        case 0x4723d0u: goto label_4723d0;
        case 0x4723d4u: goto label_4723d4;
        case 0x4723d8u: goto label_4723d8;
        case 0x4723dcu: goto label_4723dc;
        case 0x4723e0u: goto label_4723e0;
        case 0x4723e4u: goto label_4723e4;
        case 0x4723e8u: goto label_4723e8;
        case 0x4723ecu: goto label_4723ec;
        case 0x4723f0u: goto label_4723f0;
        case 0x4723f4u: goto label_4723f4;
        case 0x4723f8u: goto label_4723f8;
        case 0x4723fcu: goto label_4723fc;
        case 0x472400u: goto label_472400;
        case 0x472404u: goto label_472404;
        case 0x472408u: goto label_472408;
        case 0x47240cu: goto label_47240c;
        case 0x472410u: goto label_472410;
        case 0x472414u: goto label_472414;
        case 0x472418u: goto label_472418;
        case 0x47241cu: goto label_47241c;
        case 0x472420u: goto label_472420;
        case 0x472424u: goto label_472424;
        case 0x472428u: goto label_472428;
        case 0x47242cu: goto label_47242c;
        case 0x472430u: goto label_472430;
        case 0x472434u: goto label_472434;
        case 0x472438u: goto label_472438;
        case 0x47243cu: goto label_47243c;
        case 0x472440u: goto label_472440;
        case 0x472444u: goto label_472444;
        case 0x472448u: goto label_472448;
        case 0x47244cu: goto label_47244c;
        case 0x472450u: goto label_472450;
        case 0x472454u: goto label_472454;
        case 0x472458u: goto label_472458;
        case 0x47245cu: goto label_47245c;
        case 0x472460u: goto label_472460;
        case 0x472464u: goto label_472464;
        case 0x472468u: goto label_472468;
        case 0x47246cu: goto label_47246c;
        case 0x472470u: goto label_472470;
        case 0x472474u: goto label_472474;
        case 0x472478u: goto label_472478;
        case 0x47247cu: goto label_47247c;
        case 0x472480u: goto label_472480;
        case 0x472484u: goto label_472484;
        case 0x472488u: goto label_472488;
        case 0x47248cu: goto label_47248c;
        case 0x472490u: goto label_472490;
        case 0x472494u: goto label_472494;
        case 0x472498u: goto label_472498;
        case 0x47249cu: goto label_47249c;
        case 0x4724a0u: goto label_4724a0;
        case 0x4724a4u: goto label_4724a4;
        case 0x4724a8u: goto label_4724a8;
        case 0x4724acu: goto label_4724ac;
        case 0x4724b0u: goto label_4724b0;
        case 0x4724b4u: goto label_4724b4;
        case 0x4724b8u: goto label_4724b8;
        case 0x4724bcu: goto label_4724bc;
        case 0x4724c0u: goto label_4724c0;
        case 0x4724c4u: goto label_4724c4;
        case 0x4724c8u: goto label_4724c8;
        case 0x4724ccu: goto label_4724cc;
        case 0x4724d0u: goto label_4724d0;
        case 0x4724d4u: goto label_4724d4;
        case 0x4724d8u: goto label_4724d8;
        case 0x4724dcu: goto label_4724dc;
        case 0x4724e0u: goto label_4724e0;
        case 0x4724e4u: goto label_4724e4;
        case 0x4724e8u: goto label_4724e8;
        case 0x4724ecu: goto label_4724ec;
        case 0x4724f0u: goto label_4724f0;
        case 0x4724f4u: goto label_4724f4;
        case 0x4724f8u: goto label_4724f8;
        case 0x4724fcu: goto label_4724fc;
        case 0x472500u: goto label_472500;
        case 0x472504u: goto label_472504;
        case 0x472508u: goto label_472508;
        case 0x47250cu: goto label_47250c;
        case 0x472510u: goto label_472510;
        case 0x472514u: goto label_472514;
        case 0x472518u: goto label_472518;
        case 0x47251cu: goto label_47251c;
        case 0x472520u: goto label_472520;
        case 0x472524u: goto label_472524;
        case 0x472528u: goto label_472528;
        case 0x47252cu: goto label_47252c;
        case 0x472530u: goto label_472530;
        case 0x472534u: goto label_472534;
        case 0x472538u: goto label_472538;
        case 0x47253cu: goto label_47253c;
        case 0x472540u: goto label_472540;
        case 0x472544u: goto label_472544;
        case 0x472548u: goto label_472548;
        case 0x47254cu: goto label_47254c;
        case 0x472550u: goto label_472550;
        case 0x472554u: goto label_472554;
        case 0x472558u: goto label_472558;
        case 0x47255cu: goto label_47255c;
        case 0x472560u: goto label_472560;
        case 0x472564u: goto label_472564;
        case 0x472568u: goto label_472568;
        case 0x47256cu: goto label_47256c;
        case 0x472570u: goto label_472570;
        case 0x472574u: goto label_472574;
        case 0x472578u: goto label_472578;
        case 0x47257cu: goto label_47257c;
        case 0x472580u: goto label_472580;
        case 0x472584u: goto label_472584;
        case 0x472588u: goto label_472588;
        case 0x47258cu: goto label_47258c;
        case 0x472590u: goto label_472590;
        case 0x472594u: goto label_472594;
        case 0x472598u: goto label_472598;
        case 0x47259cu: goto label_47259c;
        case 0x4725a0u: goto label_4725a0;
        case 0x4725a4u: goto label_4725a4;
        case 0x4725a8u: goto label_4725a8;
        case 0x4725acu: goto label_4725ac;
        case 0x4725b0u: goto label_4725b0;
        case 0x4725b4u: goto label_4725b4;
        case 0x4725b8u: goto label_4725b8;
        case 0x4725bcu: goto label_4725bc;
        case 0x4725c0u: goto label_4725c0;
        case 0x4725c4u: goto label_4725c4;
        case 0x4725c8u: goto label_4725c8;
        case 0x4725ccu: goto label_4725cc;
        case 0x4725d0u: goto label_4725d0;
        case 0x4725d4u: goto label_4725d4;
        case 0x4725d8u: goto label_4725d8;
        case 0x4725dcu: goto label_4725dc;
        case 0x4725e0u: goto label_4725e0;
        case 0x4725e4u: goto label_4725e4;
        case 0x4725e8u: goto label_4725e8;
        case 0x4725ecu: goto label_4725ec;
        default: break;
    }

    ctx->pc = 0x472310u;

label_472310:
    // 0x472310: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x472310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_472314:
    // 0x472314: 0x8f828524  lw          $v0, -0x7ADC($gp)
    ctx->pc = 0x472314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
label_472318:
    // 0x472318: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x472318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_47231c:
    // 0x47231c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x47231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_472320:
    // 0x472320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x472320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472324:
    // 0x472324: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x472324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_472328:
    // 0x472328: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x472328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47232c:
    // 0x47232c: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x47232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_472330:
    // 0x472330: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x472330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_472334:
    // 0x472334: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x472334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_472338:
    // 0x472338: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x472338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_47233c:
    // 0x47233c: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x47233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_472340:
    // 0x472340: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x472340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_472344:
    // 0x472344: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x472344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_472348:
    // 0x472348: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x472348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_47234c:
    // 0x47234c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_472350:
    // 0x472350: 0x40f809  jalr        $v0
label_472354:
    if (ctx->pc == 0x472354u) {
        ctx->pc = 0x472358u;
        goto label_472358;
    }
    ctx->pc = 0x472350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472350u, 0x472358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472358u;
label_472358:
    // 0x472358: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_47235c:
    if (ctx->pc == 0x47235Cu) {
        ctx->pc = 0x47235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472358u;
        // 0x47235c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472360u;
        goto label_472360;
    }
    ctx->pc = 0x472358u;
    {
        const bool branch_taken_0x472358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472358u;
        // 0x47235c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472358) {
            ctx->pc = 0x472598u;
            goto label_472598;
        }
    }
    ctx->pc = 0x472360u;
label_472360:
    // 0x472360: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x472360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_472364:
    // 0x472364: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x472364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_472368:
    // 0x472368: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
label_47236c:
    if (ctx->pc == 0x47236Cu) {
        ctx->pc = 0x47236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472368u;
        // 0x47236c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472370u;
        goto label_472370;
    }
    ctx->pc = 0x472368u;
    {
        const bool branch_taken_0x472368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472368) {
            ctx->pc = 0x47236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472368u;
            // 0x47236c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4725BCu;
            goto label_4725bc;
        }
    }
    ctx->pc = 0x472370u;
label_472370:
    // 0x472370: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x472370u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_472374:
    // 0x472374: 0x12e00090  beqz        $s7, . + 4 + (0x90 << 2)
label_472378:
    if (ctx->pc == 0x472378u) {
        ctx->pc = 0x472378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472374u;
        // 0x472378: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47237Cu;
        goto label_47237c;
    }
    ctx->pc = 0x472374u;
    {
        const bool branch_taken_0x472374 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x472378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472374u;
        // 0x472378: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472374) {
            ctx->pc = 0x4725B8u;
            goto label_4725b8;
        }
    }
    ctx->pc = 0x47237Cu;
label_47237c:
    // 0x47237c: 0x12a0008e  beqz        $s5, . + 4 + (0x8E << 2)
label_472380:
    if (ctx->pc == 0x472380u) {
        ctx->pc = 0x472380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47237Cu;
        // 0x472380: 0x2656002c  addiu       $s6, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472384u;
        goto label_472384;
    }
    ctx->pc = 0x47237Cu;
    {
        const bool branch_taken_0x47237c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x472380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47237Cu;
        // 0x472380: 0x2656002c  addiu       $s6, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47237c) {
            ctx->pc = 0x4725B8u;
            goto label_4725b8;
        }
    }
    ctx->pc = 0x472384u;
label_472384:
    // 0x472384: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x472384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_472388:
    // 0x472388: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x472388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47238c:
    // 0x47238c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47238cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472390:
    // 0x472390: 0x1216001a  beq         $s0, $s6, . + 4 + (0x1A << 2)
label_472394:
    if (ctx->pc == 0x472394u) {
        ctx->pc = 0x472394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472390u;
        // 0x472394: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x472398u;
        goto label_472398;
    }
    ctx->pc = 0x472390u;
    {
        const bool branch_taken_0x472390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x472394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472390u;
        // 0x472394: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x472390) {
            ctx->pc = 0x4723FCu;
            goto label_4723fc;
        }
    }
    ctx->pc = 0x472398u;
label_472398:
    // 0x472398: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x472398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47239c:
    // 0x47239c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x47239cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4723a0:
    // 0x4723a0: 0x2603fff4  addiu       $v1, $s0, -0xC
    ctx->pc = 0x4723a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_4723a4:
    // 0x4723a4: 0x0  nop
    ctx->pc = 0x4723a4u;
    // NOP
label_4723a8:
    // 0x4723a8: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x4723a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4723ac:
    // 0x4723ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4723acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4723b0:
    // 0x4723b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4723b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4723b4:
    // 0x4723b4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4723b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4723b8:
    // 0x4723b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4723b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4723bc:
    // 0x4723bc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4723bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4723c0:
    // 0x4723c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4723c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4723c4:
    // 0x4723c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4723c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4723c8:
    // 0x4723c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4723c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4723cc:
    // 0x4723cc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x4723ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4723d0:
    // 0x4723d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4723d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4723d4:
    // 0x4723d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4723d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4723d8:
    // 0x4723d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4723d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4723dc:
    // 0x4723dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4723dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4723e0:
    // 0x4723e0: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x4723e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_4723e4:
    // 0x4723e4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x4723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_4723e8:
    // 0x4723e8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4723e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4723ec:
    // 0x4723ec: 0x40f809  jalr        $v0
label_4723f0:
    if (ctx->pc == 0x4723F0u) {
        ctx->pc = 0x4723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4723ECu;
        // 0x4723f0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4723F4u;
        goto label_4723f4;
    }
    ctx->pc = 0x4723ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4723F4u);
        ctx->pc = 0x4723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4723ECu;
        // 0x4723f0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4723ECu, 0x4723F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4723F4u;
label_4723f4:
    // 0x4723f4: 0x1614ffec  bne         $s0, $s4, . + 4 + (-0x14 << 2)
label_4723f8:
    if (ctx->pc == 0x4723F8u) {
        ctx->pc = 0x4723F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4723F4u;
        // 0x4723f8: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4723FCu;
        goto label_4723fc;
    }
    ctx->pc = 0x4723F4u;
    {
        const bool branch_taken_0x4723f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x4723F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4723F4u;
        // 0x4723f8: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4723f4) {
            ctx->pc = 0x4723A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4723a8;
        }
    }
    ctx->pc = 0x4723FCu;
label_4723fc:
    // 0x4723fc: 0xc12104a  jal         func_484128
label_472400:
    if (ctx->pc == 0x472400u) {
        ctx->pc = 0x472400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4723FCu;
        // 0x472400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472404u;
        goto label_472404;
    }
    ctx->pc = 0x4723FCu;
    SET_GPR_U32(ctx, 31, 0x472404u);
    ctx->pc = 0x472400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4723FCu;
    // 0x472400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4723FCu, 0x472404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472404u;
label_472404:
    // 0x472404: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x472404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_472408:
    // 0x472408: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x472408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_47240c:
    // 0x47240c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x47240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_472410:
    // 0x472410: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x472410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472414:
    // 0x472414: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x472414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_472418:
    // 0x472418: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x472418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_47241c:
    // 0x47241c: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x47241cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_472420:
    // 0x472420: 0x6ba30107  ldl         $v1, 0x107($sp)
    ctx->pc = 0x472420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_472424:
    // 0x472424: 0x6fa30100  ldr         $v1, 0x100($sp)
    ctx->pc = 0x472424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_472428:
    // 0x472428: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x472428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_47242c:
    // 0x47242c: 0xb3a30117  sdl         $v1, 0x117($sp)
    ctx->pc = 0x47242cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472430:
    // 0x472430: 0xb7a30110  sdr         $v1, 0x110($sp)
    ctx->pc = 0x472430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_472434:
    // 0x472434: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x472434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_472438:
    // 0x472438: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x472438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47243c:
    // 0x47243c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x47243cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_472440:
    // 0x472440: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x472440u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_472444:
    // 0x472444: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x472444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_472448:
    // 0x472448: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x472448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47244c:
    // 0x47244c: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x47244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_472450:
    // 0x472450: 0x7d8821  addu        $s1, $v1, $sp
    ctx->pc = 0x472450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_472454:
    // 0x472454: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x472454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_472458:
    // 0x472458: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x472458u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_47245c:
    // 0x47245c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x47245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_472460:
    // 0x472460: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x472460u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_472464:
    // 0x472464: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x472464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472468:
    // 0x472468: 0x46142940  add.s       $f5, $f5, $f20
    ctx->pc = 0x472468u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_47246c:
    // 0x47246c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x47246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472470:
    // 0x472470: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x472470u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_472474:
    // 0x472474: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x472474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_472478:
    // 0x472478: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x472478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_47247c:
    // 0x47247c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x47247cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_472480:
    // 0x472480: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x472480u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_472484:
    // 0x472484: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x472484u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_472488:
    // 0x472488: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x472488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_47248c:
    // 0x47248c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x47248cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_472490:
    // 0x472490: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x472490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_472494:
    // 0x472494: 0x8ef0001c  lw          $s0, 0x1C($s7)
    ctx->pc = 0x472494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_472498:
    // 0x472498: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x472498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47249c:
    // 0x47249c: 0x0  nop
    ctx->pc = 0x47249cu;
    // NOP
label_4724a0:
    // 0x4724a0: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
label_4724a4:
    if (ctx->pc == 0x4724A4u) {
        ctx->pc = 0x4724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4724A0u;
        // 0x4724a4: 0x3c31021  addu        $v0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4724A8u;
        goto label_4724a8;
    }
    ctx->pc = 0x4724A0u;
    {
        const bool branch_taken_0x4724a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4724A0u;
        // 0x4724a4: 0x3c31021  addu        $v0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4724a0) {
            ctx->pc = 0x472510u;
            goto label_472510;
        }
    }
    ctx->pc = 0x4724A8u;
label_4724a8:
    // 0x4724a8: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x4724a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_4724ac:
    // 0x4724ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4724acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4724b0:
    // 0x4724b0: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x4724b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_4724b4:
    // 0x4724b4: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x4724b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_4724b8:
    // 0x4724b8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x4724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4724bc:
    // 0x4724bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4724bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4724c0:
    // 0x4724c0: 0x40f809  jalr        $v0
label_4724c4:
    if (ctx->pc == 0x4724C4u) {
        ctx->pc = 0x4724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4724C0u;
        // 0x4724c4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4724C8u;
        goto label_4724c8;
    }
    ctx->pc = 0x4724C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4724C8u);
        ctx->pc = 0x4724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4724C0u;
        // 0x4724c4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4724C0u, 0x4724C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4724C8u;
label_4724c8:
    // 0x4724c8: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x4724c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_4724cc:
    // 0x4724cc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x4724ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_4724d0:
    // 0x4724d0: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x4724d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_4724d4:
    // 0x4724d4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x4724d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4724d8:
    // 0x4724d8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x4724d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4724dc:
    // 0x4724dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4724dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4724e0:
    // 0x4724e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4724e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4724e4:
    // 0x4724e4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4724e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4724e8:
    // 0x4724e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4724e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4724ec:
    // 0x4724ec: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x4724ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_4724f0:
    // 0x4724f0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x4724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_4724f4:
    // 0x4724f4: 0xac560010  sw          $s6, 0x10($v0)
    ctx->pc = 0x4724f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
label_4724f8:
    // 0x4724f8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4724f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4724fc:
    // 0x4724fc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x4724fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_472500:
    // 0x472500: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x472500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_472504:
    // 0x472504: 0xae45002c  sw          $a1, 0x2C($s2)
    ctx->pc = 0x472504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
label_472508:
    // 0x472508: 0x1000001e  b           . + 4 + (0x1E << 2)
label_47250c:
    if (ctx->pc == 0x47250Cu) {
        ctx->pc = 0x47250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472508u;
        // 0x47250c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472510u;
        goto label_472510;
    }
    ctx->pc = 0x472508u;
    {
        const bool branch_taken_0x472508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472508u;
        // 0x47250c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472508) {
            ctx->pc = 0x472584u;
            goto label_472584;
        }
    }
    ctx->pc = 0x472510u;
label_472510:
    // 0x472510: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x472510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472514:
    // 0x472514: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x472514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472518:
    // 0x472518: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x472518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47251c:
    // 0x47251c: 0x0  nop
    ctx->pc = 0x47251cu;
    // NOP
label_472520:
    // 0x472520: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_472524:
    if (ctx->pc == 0x472524u) {
        ctx->pc = 0x472524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472520u;
        // 0x472524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472528u;
        goto label_472528;
    }
    ctx->pc = 0x472520u;
    {
        const bool branch_taken_0x472520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x472524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472520u;
        // 0x472524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472520) {
            ctx->pc = 0x47255Cu;
            goto label_47255c;
        }
    }
    ctx->pc = 0x472528u;
label_472528:
    // 0x472528: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x472528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47252c:
    // 0x47252c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x47252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472530:
    // 0x472530: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x472530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_472534:
    // 0x472534: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x472534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472538:
    // 0x472538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x472538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47253c:
    // 0x47253c: 0x0  nop
    ctx->pc = 0x47253cu;
    // NOP
label_472540:
    // 0x472540: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_472544:
    if (ctx->pc == 0x472544u) {
        ctx->pc = 0x472544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472540u;
        // 0x472544: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472548u;
        goto label_472548;
    }
    ctx->pc = 0x472540u;
    {
        const bool branch_taken_0x472540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x472544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472540u;
        // 0x472544: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472540) {
            ctx->pc = 0x472588u;
            goto label_472588;
        }
    }
    ctx->pc = 0x472548u;
label_472548:
    // 0x472548: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x472548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_47254c:
    // 0x47254c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x47254cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_472550:
    // 0x472550: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x472550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_472554:
    // 0x472554: 0x1000000c  b           . + 4 + (0xC << 2)
label_472558:
    if (ctx->pc == 0x472558u) {
        ctx->pc = 0x472558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472554u;
        // 0x472558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47255Cu;
        goto label_47255c;
    }
    ctx->pc = 0x472554u;
    {
        const bool branch_taken_0x472554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472554u;
        // 0x472558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472554) {
            ctx->pc = 0x472588u;
            goto label_472588;
        }
    }
    ctx->pc = 0x47255Cu;
label_47255c:
    // 0x47255c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x47255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_472560:
    // 0x472560: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x472560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472564:
    // 0x472564: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x472564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472568:
    // 0x472568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x472568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47256c:
    // 0x47256c: 0x0  nop
    ctx->pc = 0x47256cu;
    // NOP
label_472570:
    // 0x472570: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_472574:
    if (ctx->pc == 0x472574u) {
        ctx->pc = 0x472574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472570u;
        // 0x472574: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472578u;
        goto label_472578;
    }
    ctx->pc = 0x472570u;
    {
        const bool branch_taken_0x472570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x472570) {
            ctx->pc = 0x472574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472570u;
            // 0x472574: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x472580u;
            goto label_472580;
        }
    }
    ctx->pc = 0x472578u;
label_472578:
    // 0x472578: 0x10000003  b           . + 4 + (0x3 << 2)
label_47257c:
    if (ctx->pc == 0x47257Cu) {
        ctx->pc = 0x47257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472578u;
        // 0x47257c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472580u;
        goto label_472580;
    }
    ctx->pc = 0x472578u;
    {
        const bool branch_taken_0x472578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472578u;
        // 0x47257c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472578) {
            ctx->pc = 0x472588u;
            goto label_472588;
        }
    }
    ctx->pc = 0x472580u;
label_472580:
    // 0x472580: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x472580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_472584:
    // 0x472584: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x472584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_472588:
    // 0x472588: 0x663ffc5  bgezl       $s3, . + 4 + (-0x3B << 2)
label_47258c:
    if (ctx->pc == 0x47258Cu) {
        ctx->pc = 0x47258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472588u;
        // 0x47258c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472590u;
        goto label_472590;
    }
    ctx->pc = 0x472588u;
    {
        const bool branch_taken_0x472588 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x472588) {
            ctx->pc = 0x47258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472588u;
            // 0x47258c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4724A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4724a0;
        }
    }
    ctx->pc = 0x472590u;
label_472590:
    // 0x472590: 0x1000000a  b           . + 4 + (0xA << 2)
label_472594:
    if (ctx->pc == 0x472594u) {
        ctx->pc = 0x472594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472590u;
        // 0x472594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472598u;
        goto label_472598;
    }
    ctx->pc = 0x472590u;
    {
        const bool branch_taken_0x472590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472590u;
        // 0x472594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472590) {
            ctx->pc = 0x4725BCu;
            goto label_4725bc;
        }
    }
    ctx->pc = 0x472598u;
label_472598:
    // 0x472598: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x472598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47259c:
    // 0x47259c: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x47259cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
label_4725a0:
    // 0x4725a0: 0xc11eff2  jal         func_47BFC8
label_4725a4:
    if (ctx->pc == 0x4725A4u) {
        ctx->pc = 0x4725A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4725A0u;
        // 0x4725a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4725A8u;
        goto label_4725a8;
    }
    ctx->pc = 0x4725A0u;
    SET_GPR_U32(ctx, 31, 0x4725A8u);
    ctx->pc = 0x4725A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4725A0u;
    // 0x4725a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4725A0u, 0x4725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4725A8u;
label_4725a8:
    // 0x4725a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4725a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4725ac:
    // 0x4725ac: 0xc11f024  jal         func_47C090
label_4725b0:
    if (ctx->pc == 0x4725B0u) {
        ctx->pc = 0x4725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4725ACu;
        // 0x4725b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4725B4u;
        goto label_4725b4;
    }
    ctx->pc = 0x4725ACu;
    SET_GPR_U32(ctx, 31, 0x4725B4u);
    ctx->pc = 0x4725B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4725ACu;
    // 0x4725b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4725ACu, 0x4725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4725B4u;
label_4725b4:
    // 0x4725b4: 0x0  nop
    ctx->pc = 0x4725b4u;
    // NOP
label_4725b8:
    // 0x4725b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4725b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4725bc:
    // 0x4725bc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x4725bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_4725c0:
    // 0x4725c0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x4725c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4725c4:
    // 0x4725c4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x4725c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4725c8:
    // 0x4725c8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x4725c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4725cc:
    // 0x4725cc: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x4725ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4725d0:
    // 0x4725d0: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x4725d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4725d4:
    // 0x4725d4: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x4725d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4725d8:
    // 0x4725d8: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x4725d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_4725dc:
    // 0x4725dc: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x4725dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_4725e0:
    // 0x4725e0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x4725e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_4725e4:
    // 0x4725e4: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x4725e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4725e8:
    // 0x4725e8: 0x3e00008  jr          $ra
label_4725ec:
    if (ctx->pc == 0x4725ECu) {
        ctx->pc = 0x4725ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4725E8u;
        // 0x4725ec: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4725F0u;
        goto label_fallthrough_0x4725e8;
    }
    ctx->pc = 0x4725E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4725ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4725E8u;
        // 0x4725ec: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4725E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4725e8:
    ctx->pc = 0x4725F0u;
}
