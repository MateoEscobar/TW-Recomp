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

// Function: sub_00310288
// Address: 0x310288 - 0x310618
void sub_00310288_0x310288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310288_0x310288");
#endif

    switch (ctx->pc) {
        case 0x310288u: goto label_310288;
        case 0x31028cu: goto label_31028c;
        case 0x310290u: goto label_310290;
        case 0x310294u: goto label_310294;
        case 0x310298u: goto label_310298;
        case 0x31029cu: goto label_31029c;
        case 0x3102a0u: goto label_3102a0;
        case 0x3102a4u: goto label_3102a4;
        case 0x3102a8u: goto label_3102a8;
        case 0x3102acu: goto label_3102ac;
        case 0x3102b0u: goto label_3102b0;
        case 0x3102b4u: goto label_3102b4;
        case 0x3102b8u: goto label_3102b8;
        case 0x3102bcu: goto label_3102bc;
        case 0x3102c0u: goto label_3102c0;
        case 0x3102c4u: goto label_3102c4;
        case 0x3102c8u: goto label_3102c8;
        case 0x3102ccu: goto label_3102cc;
        case 0x3102d0u: goto label_3102d0;
        case 0x3102d4u: goto label_3102d4;
        case 0x3102d8u: goto label_3102d8;
        case 0x3102dcu: goto label_3102dc;
        case 0x3102e0u: goto label_3102e0;
        case 0x3102e4u: goto label_3102e4;
        case 0x3102e8u: goto label_3102e8;
        case 0x3102ecu: goto label_3102ec;
        case 0x3102f0u: goto label_3102f0;
        case 0x3102f4u: goto label_3102f4;
        case 0x3102f8u: goto label_3102f8;
        case 0x3102fcu: goto label_3102fc;
        case 0x310300u: goto label_310300;
        case 0x310304u: goto label_310304;
        case 0x310308u: goto label_310308;
        case 0x31030cu: goto label_31030c;
        case 0x310310u: goto label_310310;
        case 0x310314u: goto label_310314;
        case 0x310318u: goto label_310318;
        case 0x31031cu: goto label_31031c;
        case 0x310320u: goto label_310320;
        case 0x310324u: goto label_310324;
        case 0x310328u: goto label_310328;
        case 0x31032cu: goto label_31032c;
        case 0x310330u: goto label_310330;
        case 0x310334u: goto label_310334;
        case 0x310338u: goto label_310338;
        case 0x31033cu: goto label_31033c;
        case 0x310340u: goto label_310340;
        case 0x310344u: goto label_310344;
        case 0x310348u: goto label_310348;
        case 0x31034cu: goto label_31034c;
        case 0x310350u: goto label_310350;
        case 0x310354u: goto label_310354;
        case 0x310358u: goto label_310358;
        case 0x31035cu: goto label_31035c;
        case 0x310360u: goto label_310360;
        case 0x310364u: goto label_310364;
        case 0x310368u: goto label_310368;
        case 0x31036cu: goto label_31036c;
        case 0x310370u: goto label_310370;
        case 0x310374u: goto label_310374;
        case 0x310378u: goto label_310378;
        case 0x31037cu: goto label_31037c;
        case 0x310380u: goto label_310380;
        case 0x310384u: goto label_310384;
        case 0x310388u: goto label_310388;
        case 0x31038cu: goto label_31038c;
        case 0x310390u: goto label_310390;
        case 0x310394u: goto label_310394;
        case 0x310398u: goto label_310398;
        case 0x31039cu: goto label_31039c;
        case 0x3103a0u: goto label_3103a0;
        case 0x3103a4u: goto label_3103a4;
        case 0x3103a8u: goto label_3103a8;
        case 0x3103acu: goto label_3103ac;
        case 0x3103b0u: goto label_3103b0;
        case 0x3103b4u: goto label_3103b4;
        case 0x3103b8u: goto label_3103b8;
        case 0x3103bcu: goto label_3103bc;
        case 0x3103c0u: goto label_3103c0;
        case 0x3103c4u: goto label_3103c4;
        case 0x3103c8u: goto label_3103c8;
        case 0x3103ccu: goto label_3103cc;
        case 0x3103d0u: goto label_3103d0;
        case 0x3103d4u: goto label_3103d4;
        case 0x3103d8u: goto label_3103d8;
        case 0x3103dcu: goto label_3103dc;
        case 0x3103e0u: goto label_3103e0;
        case 0x3103e4u: goto label_3103e4;
        case 0x3103e8u: goto label_3103e8;
        case 0x3103ecu: goto label_3103ec;
        case 0x3103f0u: goto label_3103f0;
        case 0x3103f4u: goto label_3103f4;
        case 0x3103f8u: goto label_3103f8;
        case 0x3103fcu: goto label_3103fc;
        case 0x310400u: goto label_310400;
        case 0x310404u: goto label_310404;
        case 0x310408u: goto label_310408;
        case 0x31040cu: goto label_31040c;
        case 0x310410u: goto label_310410;
        case 0x310414u: goto label_310414;
        case 0x310418u: goto label_310418;
        case 0x31041cu: goto label_31041c;
        case 0x310420u: goto label_310420;
        case 0x310424u: goto label_310424;
        case 0x310428u: goto label_310428;
        case 0x31042cu: goto label_31042c;
        case 0x310430u: goto label_310430;
        case 0x310434u: goto label_310434;
        case 0x310438u: goto label_310438;
        case 0x31043cu: goto label_31043c;
        case 0x310440u: goto label_310440;
        case 0x310444u: goto label_310444;
        case 0x310448u: goto label_310448;
        case 0x31044cu: goto label_31044c;
        case 0x310450u: goto label_310450;
        case 0x310454u: goto label_310454;
        case 0x310458u: goto label_310458;
        case 0x31045cu: goto label_31045c;
        case 0x310460u: goto label_310460;
        case 0x310464u: goto label_310464;
        case 0x310468u: goto label_310468;
        case 0x31046cu: goto label_31046c;
        case 0x310470u: goto label_310470;
        case 0x310474u: goto label_310474;
        case 0x310478u: goto label_310478;
        case 0x31047cu: goto label_31047c;
        case 0x310480u: goto label_310480;
        case 0x310484u: goto label_310484;
        case 0x310488u: goto label_310488;
        case 0x31048cu: goto label_31048c;
        case 0x310490u: goto label_310490;
        case 0x310494u: goto label_310494;
        case 0x310498u: goto label_310498;
        case 0x31049cu: goto label_31049c;
        case 0x3104a0u: goto label_3104a0;
        case 0x3104a4u: goto label_3104a4;
        case 0x3104a8u: goto label_3104a8;
        case 0x3104acu: goto label_3104ac;
        case 0x3104b0u: goto label_3104b0;
        case 0x3104b4u: goto label_3104b4;
        case 0x3104b8u: goto label_3104b8;
        case 0x3104bcu: goto label_3104bc;
        case 0x3104c0u: goto label_3104c0;
        case 0x3104c4u: goto label_3104c4;
        case 0x3104c8u: goto label_3104c8;
        case 0x3104ccu: goto label_3104cc;
        case 0x3104d0u: goto label_3104d0;
        case 0x3104d4u: goto label_3104d4;
        case 0x3104d8u: goto label_3104d8;
        case 0x3104dcu: goto label_3104dc;
        case 0x3104e0u: goto label_3104e0;
        case 0x3104e4u: goto label_3104e4;
        case 0x3104e8u: goto label_3104e8;
        case 0x3104ecu: goto label_3104ec;
        case 0x3104f0u: goto label_3104f0;
        case 0x3104f4u: goto label_3104f4;
        case 0x3104f8u: goto label_3104f8;
        case 0x3104fcu: goto label_3104fc;
        case 0x310500u: goto label_310500;
        case 0x310504u: goto label_310504;
        case 0x310508u: goto label_310508;
        case 0x31050cu: goto label_31050c;
        case 0x310510u: goto label_310510;
        case 0x310514u: goto label_310514;
        case 0x310518u: goto label_310518;
        case 0x31051cu: goto label_31051c;
        case 0x310520u: goto label_310520;
        case 0x310524u: goto label_310524;
        case 0x310528u: goto label_310528;
        case 0x31052cu: goto label_31052c;
        case 0x310530u: goto label_310530;
        case 0x310534u: goto label_310534;
        case 0x310538u: goto label_310538;
        case 0x31053cu: goto label_31053c;
        case 0x310540u: goto label_310540;
        case 0x310544u: goto label_310544;
        case 0x310548u: goto label_310548;
        case 0x31054cu: goto label_31054c;
        case 0x310550u: goto label_310550;
        case 0x310554u: goto label_310554;
        case 0x310558u: goto label_310558;
        case 0x31055cu: goto label_31055c;
        case 0x310560u: goto label_310560;
        case 0x310564u: goto label_310564;
        case 0x310568u: goto label_310568;
        case 0x31056cu: goto label_31056c;
        case 0x310570u: goto label_310570;
        case 0x310574u: goto label_310574;
        case 0x310578u: goto label_310578;
        case 0x31057cu: goto label_31057c;
        case 0x310580u: goto label_310580;
        case 0x310584u: goto label_310584;
        case 0x310588u: goto label_310588;
        case 0x31058cu: goto label_31058c;
        case 0x310590u: goto label_310590;
        case 0x310594u: goto label_310594;
        case 0x310598u: goto label_310598;
        case 0x31059cu: goto label_31059c;
        case 0x3105a0u: goto label_3105a0;
        case 0x3105a4u: goto label_3105a4;
        case 0x3105a8u: goto label_3105a8;
        case 0x3105acu: goto label_3105ac;
        case 0x3105b0u: goto label_3105b0;
        case 0x3105b4u: goto label_3105b4;
        case 0x3105b8u: goto label_3105b8;
        case 0x3105bcu: goto label_3105bc;
        case 0x3105c0u: goto label_3105c0;
        case 0x3105c4u: goto label_3105c4;
        case 0x3105c8u: goto label_3105c8;
        case 0x3105ccu: goto label_3105cc;
        case 0x3105d0u: goto label_3105d0;
        case 0x3105d4u: goto label_3105d4;
        case 0x3105d8u: goto label_3105d8;
        case 0x3105dcu: goto label_3105dc;
        case 0x3105e0u: goto label_3105e0;
        case 0x3105e4u: goto label_3105e4;
        case 0x3105e8u: goto label_3105e8;
        case 0x3105ecu: goto label_3105ec;
        case 0x3105f0u: goto label_3105f0;
        case 0x3105f4u: goto label_3105f4;
        case 0x3105f8u: goto label_3105f8;
        case 0x3105fcu: goto label_3105fc;
        case 0x310600u: goto label_310600;
        case 0x310604u: goto label_310604;
        case 0x310608u: goto label_310608;
        case 0x31060cu: goto label_31060c;
        case 0x310610u: goto label_310610;
        case 0x310614u: goto label_310614;
        default: break;
    }

    ctx->pc = 0x310288u;

label_310288:
    // 0x310288: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x310288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_31028c:
    // 0x31028c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x31028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_310290:
    // 0x310290: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x310290u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310294:
    // 0x310294: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x310294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_310298:
    // 0x310298: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x310298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_31029c:
    // 0x31029c: 0x26e40020  addiu       $a0, $s7, 0x20
    ctx->pc = 0x31029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_3102a0:
    // 0x3102a0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3102a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3102a4:
    // 0x3102a4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3102a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3102a8:
    // 0x3102a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3102a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3102ac:
    // 0x3102ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3102acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3102b0:
    // 0x3102b0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3102b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3102b4:
    // 0x3102b4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3102b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3102b8:
    // 0x3102b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3102b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3102bc:
    // 0x3102bc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x3102bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3102c0:
    // 0x3102c0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3102c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3102c4:
    // 0x3102c4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3102c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3102c8:
    // 0x3102c8: 0xc0e409a  jal         func_390268
label_3102cc:
    if (ctx->pc == 0x3102CCu) {
        ctx->pc = 0x3102CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102C8u;
        // 0x3102cc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3102D0u;
        goto label_3102d0;
    }
    ctx->pc = 0x3102C8u;
    SET_GPR_U32(ctx, 31, 0x3102D0u);
    ctx->pc = 0x3102CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3102C8u;
    // 0x3102cc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3102C8u, 0x3102D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3102D0u;
label_3102d0:
    // 0x3102d0: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_3102d4:
    if (ctx->pc == 0x3102D4u) {
        ctx->pc = 0x3102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102D0u;
        // 0x3102d4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3102D8u;
        goto label_3102d8;
    }
    ctx->pc = 0x3102D0u;
    {
        const bool branch_taken_0x3102d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102D0u;
        // 0x3102d4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102d0) {
            ctx->pc = 0x3105DCu;
            goto label_3105dc;
        }
    }
    ctx->pc = 0x3102D8u;
label_3102d8:
    // 0x3102d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3102d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3102dc:
    // 0x3102dc: 0xc08750a  jal         func_21D428
label_3102e0:
    if (ctx->pc == 0x3102E0u) {
        ctx->pc = 0x3102E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102DCu;
        // 0x3102e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3102E4u;
        goto label_3102e4;
    }
    ctx->pc = 0x3102DCu;
    SET_GPR_U32(ctx, 31, 0x3102E4u);
    ctx->pc = 0x3102E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3102DCu;
    // 0x3102e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x3102DCu, 0x3102E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3102E4u;
label_3102e4:
    // 0x3102e4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3102e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3102e8:
    // 0x3102e8: 0x8ee30028  lw          $v1, 0x28($s7)
    ctx->pc = 0x3102e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3102ec:
    // 0x3102ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3102ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3102f0:
    // 0x3102f0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3102f4:
    if (ctx->pc == 0x3102F4u) {
        ctx->pc = 0x3102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102F0u;
        // 0x3102f4: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3102F8u;
        goto label_3102f8;
    }
    ctx->pc = 0x3102F0u;
    {
        const bool branch_taken_0x3102f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3102f0) {
            ctx->pc = 0x3102F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3102F0u;
            // 0x3102f4: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31030Cu;
            goto label_31030c;
        }
    }
    ctx->pc = 0x3102F8u;
label_3102f8:
    // 0x3102f8: 0x93c20270  lbu         $v0, 0x270($fp)
    ctx->pc = 0x3102f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 624)));
label_3102fc:
    // 0x3102fc: 0xaee20028  sw          $v0, 0x28($s7)
    ctx->pc = 0x3102fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 2));
label_310300:
    // 0x310300: 0x93c30275  lbu         $v1, 0x275($fp)
    ctx->pc = 0x310300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 629)));
label_310304:
    // 0x310304: 0xaee3002c  sw          $v1, 0x2C($s7)
    ctx->pc = 0x310304u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 3));
label_310308:
    // 0x310308: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x310308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_31030c:
    // 0x31030c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310310:
    // 0x310310: 0xc059856  jal         func_166158
label_310314:
    if (ctx->pc == 0x310314u) {
        ctx->pc = 0x310314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310310u;
        // 0x310314: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310318u;
        goto label_310318;
    }
    ctx->pc = 0x310310u;
    SET_GPR_U32(ctx, 31, 0x310318u);
    ctx->pc = 0x310314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310310u;
    // 0x310314: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x310310u, 0x310318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310318u;
label_310318:
    // 0x310318: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x310318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_31031c:
    // 0x31031c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31031cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_310320:
    // 0x310320: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x310320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_310324:
    // 0x310324: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x310324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_310328:
    // 0x310328: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x310328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_31032c:
    // 0x31032c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31032cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_310330:
    // 0x310330: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x310330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_310334:
    // 0x310334: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x310334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_310338:
    // 0x310338: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x310338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_31033c:
    // 0x31033c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x31033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_310340:
    // 0x310340: 0xc137826  jal         func_4DE098
label_310344:
    if (ctx->pc == 0x310344u) {
        ctx->pc = 0x310344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310340u;
        // 0x310344: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310348u;
        goto label_310348;
    }
    ctx->pc = 0x310340u;
    SET_GPR_U32(ctx, 31, 0x310348u);
    ctx->pc = 0x310344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310340u;
    // 0x310344: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310340u, 0x310348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310348u;
label_310348:
    // 0x310348: 0xc0e409a  jal         func_390268
label_31034c:
    if (ctx->pc == 0x31034Cu) {
        ctx->pc = 0x31034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310348u;
        // 0x31034c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310350u;
        goto label_310350;
    }
    ctx->pc = 0x310348u;
    SET_GPR_U32(ctx, 31, 0x310350u);
    ctx->pc = 0x31034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310348u;
    // 0x31034c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310348u, 0x310350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310350u;
label_310350:
    // 0x310350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310354:
    // 0x310354: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_310358:
    if (ctx->pc == 0x310358u) {
        ctx->pc = 0x310358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310354u;
        // 0x310358: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31035Cu;
        goto label_31035c;
    }
    ctx->pc = 0x310354u;
    {
        const bool branch_taken_0x310354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310354u;
        // 0x310358: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310354) {
            ctx->pc = 0x310574u;
            goto label_310574;
        }
    }
    ctx->pc = 0x31035Cu;
label_31035c:
    // 0x31035c: 0xc089f98  jal         func_227E60
label_310360:
    if (ctx->pc == 0x310360u) {
        ctx->pc = 0x310360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31035Cu;
        // 0x310360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310364u;
        goto label_310364;
    }
    ctx->pc = 0x31035Cu;
    SET_GPR_U32(ctx, 31, 0x310364u);
    ctx->pc = 0x310360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31035Cu;
    // 0x310360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31035Cu, 0x310364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310364u;
label_310364:
    // 0x310364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310368:
    // 0x310368: 0x10430081  beq         $v0, $v1, . + 4 + (0x81 << 2)
label_31036c:
    if (ctx->pc == 0x31036Cu) {
        ctx->pc = 0x31036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310368u;
        // 0x31036c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310370u;
        goto label_310370;
    }
    ctx->pc = 0x310368u;
    {
        const bool branch_taken_0x310368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310368u;
        // 0x31036c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310368) {
            ctx->pc = 0x310570u;
            goto label_310570;
        }
    }
    ctx->pc = 0x310370u;
label_310370:
    // 0x310370: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_310374:
    if (ctx->pc == 0x310374u) {
        ctx->pc = 0x310374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310370u;
        // 0x310374: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310378u;
        goto label_310378;
    }
    ctx->pc = 0x310370u;
    {
        const bool branch_taken_0x310370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x310374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310370u;
        // 0x310374: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310370) {
            ctx->pc = 0x310384u;
            goto label_310384;
        }
    }
    ctx->pc = 0x310378u;
label_310378:
    // 0x310378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x310378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31037c:
    // 0x31037c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_310380:
    if (ctx->pc == 0x310380u) {
        ctx->pc = 0x310380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31037Cu;
        // 0x310380: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310384u;
        goto label_310384;
    }
    ctx->pc = 0x31037Cu;
    {
        const bool branch_taken_0x31037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31037Cu;
        // 0x310380: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31037c) {
            ctx->pc = 0x310570u;
            goto label_310570;
        }
    }
    ctx->pc = 0x310384u;
label_310384:
    // 0x310384: 0x1200007b  beqz        $s0, . + 4 + (0x7B << 2)
label_310388:
    if (ctx->pc == 0x310388u) {
        ctx->pc = 0x310388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310384u;
        // 0x310388: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31038Cu;
        goto label_31038c;
    }
    ctx->pc = 0x310384u;
    {
        const bool branch_taken_0x310384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310384u;
        // 0x310388: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310384) {
            ctx->pc = 0x310574u;
            goto label_310574;
        }
    }
    ctx->pc = 0x31038Cu;
label_31038c:
    // 0x31038c: 0xc087502  jal         func_21D408
label_310390:
    if (ctx->pc == 0x310390u) {
        ctx->pc = 0x310390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31038Cu;
        // 0x310390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310394u;
        goto label_310394;
    }
    ctx->pc = 0x31038Cu;
    SET_GPR_U32(ctx, 31, 0x310394u);
    ctx->pc = 0x310390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31038Cu;
    // 0x310390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31038Cu, 0x310394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310394u;
label_310394:
    // 0x310394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_310398:
    // 0x310398: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_31039c:
    if (ctx->pc == 0x31039Cu) {
        ctx->pc = 0x31039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310398u;
        // 0x31039c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103A0u;
        goto label_3103a0;
    }
    ctx->pc = 0x310398u;
    {
        const bool branch_taken_0x310398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310398u;
        // 0x31039c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310398) {
            ctx->pc = 0x310574u;
            goto label_310574;
        }
    }
    ctx->pc = 0x3103A0u;
label_3103a0:
    // 0x3103a0: 0xc089f76  jal         func_227DD8
label_3103a4:
    if (ctx->pc == 0x3103A4u) {
        ctx->pc = 0x3103A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A0u;
        // 0x3103a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103A8u;
        goto label_3103a8;
    }
    ctx->pc = 0x3103A0u;
    SET_GPR_U32(ctx, 31, 0x3103A8u);
    ctx->pc = 0x3103A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103A0u;
    // 0x3103a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x3103A0u, 0x3103A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3103A8u;
label_3103a8:
    // 0x3103a8: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_3103ac:
    if (ctx->pc == 0x3103ACu) {
        ctx->pc = 0x3103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A8u;
        // 0x3103ac: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103B0u;
        goto label_3103b0;
    }
    ctx->pc = 0x3103A8u;
    {
        const bool branch_taken_0x3103a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A8u;
        // 0x3103ac: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103a8) {
            ctx->pc = 0x310574u;
            goto label_310574;
        }
    }
    ctx->pc = 0x3103B0u;
label_3103b0:
    // 0x3103b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3103b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3103b4:
    // 0x3103b4: 0xc0a57ca  jal         func_295F28
label_3103b8:
    if (ctx->pc == 0x3103B8u) {
        ctx->pc = 0x3103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103B4u;
        // 0x3103b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103BCu;
        goto label_3103bc;
    }
    ctx->pc = 0x3103B4u;
    SET_GPR_U32(ctx, 31, 0x3103BCu);
    ctx->pc = 0x3103B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103B4u;
    // 0x3103b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x3103B4u, 0x3103BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3103BCu;
label_3103bc:
    // 0x3103bc: 0xc087502  jal         func_21D408
label_3103c0:
    if (ctx->pc == 0x3103C0u) {
        ctx->pc = 0x3103C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103BCu;
        // 0x3103c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103C4u;
        goto label_3103c4;
    }
    ctx->pc = 0x3103BCu;
    SET_GPR_U32(ctx, 31, 0x3103C4u);
    ctx->pc = 0x3103C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103BCu;
    // 0x3103c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3103BCu, 0x3103C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3103C4u;
label_3103c4:
    // 0x3103c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3103c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3103c8:
    // 0x3103c8: 0x8e1100cc  lw          $s1, 0xCC($s0)
    ctx->pc = 0x3103c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3103cc:
    // 0x3103cc: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x3103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_3103d0:
    // 0x3103d0: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_3103d4:
    if (ctx->pc == 0x3103D4u) {
        ctx->pc = 0x3103D8u;
        goto label_3103d8;
    }
    ctx->pc = 0x3103D0u;
    {
        const bool branch_taken_0x3103d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3103d0) {
            ctx->pc = 0x3103F8u;
            goto label_3103f8;
        }
    }
    ctx->pc = 0x3103D8u;
label_3103d8:
    // 0x3103d8: 0xc08a200  jal         func_228800
label_3103dc:
    if (ctx->pc == 0x3103DCu) {
        ctx->pc = 0x3103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103D8u;
        // 0x3103dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103E0u;
        goto label_3103e0;
    }
    ctx->pc = 0x3103D8u;
    SET_GPR_U32(ctx, 31, 0x3103E0u);
    ctx->pc = 0x3103DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103D8u;
    // 0x3103dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3103D8u, 0x3103E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3103E0u;
label_3103e0:
    // 0x3103e0: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x3103e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_3103e4:
    // 0x3103e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3103e8:
    // 0x3103e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3103ec:
    if (ctx->pc == 0x3103ECu) {
        ctx->pc = 0x3103ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103E8u;
        // 0x3103ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3103F0u;
        goto label_3103f0;
    }
    ctx->pc = 0x3103E8u;
    {
        const bool branch_taken_0x3103e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103E8u;
        // 0x3103ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103e8) {
            ctx->pc = 0x3103F8u;
            goto label_3103f8;
        }
    }
    ctx->pc = 0x3103F0u;
label_3103f0:
    // 0x3103f0: 0x24631438  addiu       $v1, $v1, 0x1438
    ctx->pc = 0x3103f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5176));
label_3103f4:
    // 0x3103f4: 0xae430208  sw          $v1, 0x208($s2)
    ctx->pc = 0x3103f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 3));
label_3103f8:
    // 0x3103f8: 0xc0a3630  jal         func_28D8C0
label_3103fc:
    if (ctx->pc == 0x3103FCu) {
        ctx->pc = 0x3103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103F8u;
        // 0x3103fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310400u;
        goto label_310400;
    }
    ctx->pc = 0x3103F8u;
    SET_GPR_U32(ctx, 31, 0x310400u);
    ctx->pc = 0x3103FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3103F8u;
    // 0x3103fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3103F8u, 0x310400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310400u;
label_310400:
    // 0x310400: 0xc0a3628  jal         func_28D8A0
label_310404:
    if (ctx->pc == 0x310404u) {
        ctx->pc = 0x310404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310400u;
        // 0x310404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310408u;
        goto label_310408;
    }
    ctx->pc = 0x310400u;
    SET_GPR_U32(ctx, 31, 0x310408u);
    ctx->pc = 0x310404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310400u;
    // 0x310404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x310400u, 0x310408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310408u;
label_310408:
    // 0x310408: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x310408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_31040c:
    // 0x31040c: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
label_310410:
    if (ctx->pc == 0x310410u) {
        ctx->pc = 0x310410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31040Cu;
        // 0x310410: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310414u;
        goto label_310414;
    }
    ctx->pc = 0x31040Cu;
    {
        const bool branch_taken_0x31040c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x310410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31040Cu;
        // 0x310410: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31040c) {
            ctx->pc = 0x310470u;
            goto label_310470;
        }
    }
    ctx->pc = 0x310414u;
label_310414:
    // 0x310414: 0xc0a4e54  jal         func_293950
label_310418:
    if (ctx->pc == 0x310418u) {
        ctx->pc = 0x31041Cu;
        goto label_31041c;
    }
    ctx->pc = 0x310414u;
    SET_GPR_U32(ctx, 31, 0x31041Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x310414u, 0x31041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31041Cu;
label_31041c:
    // 0x31041c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31041cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310420:
    // 0x310420: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_310424:
    if (ctx->pc == 0x310424u) {
        ctx->pc = 0x310424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310420u;
        // 0x310424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310428u;
        goto label_310428;
    }
    ctx->pc = 0x310420u;
    {
        const bool branch_taken_0x310420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310420u;
        // 0x310424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310420) {
            ctx->pc = 0x31045Cu;
            goto label_31045c;
        }
    }
    ctx->pc = 0x310428u;
label_310428:
    // 0x310428: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x310428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_31042c:
    // 0x31042c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_310430:
    // 0x310430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310434:
    // 0x310434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x310434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310438:
    // 0x310438: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x310438u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_31043c:
    // 0x31043c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x31043cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_310440:
    // 0x310440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x310440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310444:
    // 0x310444: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x310444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310448:
    // 0x310448: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x310448u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_31044c:
    // 0x31044c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x31044cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_310450:
    // 0x310450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x310450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310454:
    // 0x310454: 0xc0b8c60  jal         func_2E3180
label_310458:
    if (ctx->pc == 0x310458u) {
        ctx->pc = 0x310458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310454u;
        // 0x310458: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31045Cu;
        goto label_31045c;
    }
    ctx->pc = 0x310454u;
    SET_GPR_U32(ctx, 31, 0x31045Cu);
    ctx->pc = 0x310458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310454u;
    // 0x310458: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x310454u, 0x31045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31045Cu;
label_31045c:
    // 0x31045c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310460:
    // 0x310460: 0xc0a35d6  jal         func_28D758
label_310464:
    if (ctx->pc == 0x310464u) {
        ctx->pc = 0x310464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310460u;
        // 0x310464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310468u;
        goto label_310468;
    }
    ctx->pc = 0x310460u;
    SET_GPR_U32(ctx, 31, 0x310468u);
    ctx->pc = 0x310464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310460u;
    // 0x310464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x310460u, 0x310468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310468u;
label_310468:
    // 0x310468: 0x10000042  b           . + 4 + (0x42 << 2)
label_31046c:
    if (ctx->pc == 0x31046Cu) {
        ctx->pc = 0x31046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310468u;
        // 0x31046c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310470u;
        goto label_310470;
    }
    ctx->pc = 0x310468u;
    {
        const bool branch_taken_0x310468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310468u;
        // 0x31046c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310468) {
            ctx->pc = 0x310574u;
            goto label_310574;
        }
    }
    ctx->pc = 0x310470u;
label_310470:
    // 0x310470: 0x16030033  bne         $s0, $v1, . + 4 + (0x33 << 2)
label_310474:
    if (ctx->pc == 0x310474u) {
        ctx->pc = 0x310474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310470u;
        // 0x310474: 0x8ef60020  lw          $s6, 0x20($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310478u;
        goto label_310478;
    }
    ctx->pc = 0x310470u;
    {
        const bool branch_taken_0x310470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x310474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310470u;
        // 0x310474: 0x8ef60020  lw          $s6, 0x20($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310470) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x310478u;
label_310478:
    // 0x310478: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x310478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31047c:
    // 0x31047c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_310480:
    // 0x310480: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_310484:
    if (ctx->pc == 0x310484u) {
        ctx->pc = 0x310484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310480u;
        // 0x310484: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310488u;
        goto label_310488;
    }
    ctx->pc = 0x310480u;
    {
        const bool branch_taken_0x310480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310480u;
        // 0x310484: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310480) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x310488u;
label_310488:
    // 0x310488: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x310488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_31048c:
    // 0x31048c: 0xc0e409a  jal         func_390268
label_310490:
    if (ctx->pc == 0x310490u) {
        ctx->pc = 0x310490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31048Cu;
        // 0x310490: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310494u;
        goto label_310494;
    }
    ctx->pc = 0x31048Cu;
    SET_GPR_U32(ctx, 31, 0x310494u);
    ctx->pc = 0x310490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31048Cu;
    // 0x310490: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31048Cu, 0x310494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310494u;
label_310494:
    // 0x310494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x310494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310498:
    // 0x310498: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_31049c:
    if (ctx->pc == 0x31049Cu) {
        ctx->pc = 0x3104A0u;
        goto label_3104a0;
    }
    ctx->pc = 0x310498u;
    {
        const bool branch_taken_0x310498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x310498) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x3104A0u;
label_3104a0:
    // 0x3104a0: 0xc087502  jal         func_21D408
label_3104a4:
    if (ctx->pc == 0x3104A4u) {
        ctx->pc = 0x3104A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104A0u;
        // 0x3104a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3104A8u;
        goto label_3104a8;
    }
    ctx->pc = 0x3104A0u;
    SET_GPR_U32(ctx, 31, 0x3104A8u);
    ctx->pc = 0x3104A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104A0u;
    // 0x3104a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3104A0u, 0x3104A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104A8u;
label_3104a8:
    // 0x3104a8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3104ac:
    // 0x3104ac: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_3104b0:
    // 0x3104b0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_3104b4:
    if (ctx->pc == 0x3104B4u) {
        ctx->pc = 0x3104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104B0u;
        // 0x3104b4: 0x26130090  addiu       $s3, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3104B8u;
        goto label_3104b8;
    }
    ctx->pc = 0x3104B0u;
    {
        const bool branch_taken_0x3104b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104B0u;
        // 0x3104b4: 0x26130090  addiu       $s3, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104b0) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x3104B8u;
label_3104b8:
    // 0x3104b8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_3104bc:
    // 0x3104bc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3104bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_3104c0:
    // 0x3104c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3104c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3104c4:
    // 0x3104c4: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x3104c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3104c8:
    // 0x3104c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3104c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3104cc:
    // 0x3104cc: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x3104ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3104d0:
    // 0x3104d0: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x3104d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_3104d4:
    // 0x3104d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3104d8:
    // 0x3104d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3104d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3104dc:
    // 0x3104dc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_3104e0:
    // 0x3104e0: 0xc1067b8  jal         func_419EE0
label_3104e4:
    if (ctx->pc == 0x3104E4u) {
        ctx->pc = 0x3104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104E0u;
        // 0x3104e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3104E8u;
        goto label_3104e8;
    }
    ctx->pc = 0x3104E0u;
    SET_GPR_U32(ctx, 31, 0x3104E8u);
    ctx->pc = 0x3104E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104E0u;
    // 0x3104e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x3104E0u, 0x3104E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104E8u;
label_3104e8:
    // 0x3104e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3104e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3104ec:
    // 0x3104ec: 0x12110014  beq         $s0, $s1, . + 4 + (0x14 << 2)
label_3104f0:
    if (ctx->pc == 0x3104F0u) {
        ctx->pc = 0x3104F4u;
        goto label_3104f4;
    }
    ctx->pc = 0x3104ECu;
    {
        const bool branch_taken_0x3104ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x3104ec) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x3104F4u;
label_3104f4:
    // 0x3104f4: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x3104f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3104f8:
    // 0x3104f8: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x3104f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_3104fc:
    // 0x3104fc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_310500:
    // 0x310500: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x310500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_310504:
    // 0x310504: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x310504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_310508:
    // 0x310508: 0xc0cdb38  jal         func_336CE0
label_31050c:
    if (ctx->pc == 0x31050Cu) {
        ctx->pc = 0x31050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310508u;
        // 0x31050c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310510u;
        goto label_310510;
    }
    ctx->pc = 0x310508u;
    SET_GPR_U32(ctx, 31, 0x310510u);
    ctx->pc = 0x31050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310508u;
    // 0x31050c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x310508u, 0x310510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310510u;
label_310510:
    // 0x310510: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x310510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_310514:
    // 0x310514: 0x0  nop
    ctx->pc = 0x310514u;
    // NOP
label_310518:
    // 0x310518: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_31051c:
    if (ctx->pc == 0x31051Cu) {
        ctx->pc = 0x310520u;
        goto label_310520;
    }
    ctx->pc = 0x310518u;
    {
        const bool branch_taken_0x310518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310518) {
            ctx->pc = 0x310540u;
            goto label_310540;
        }
    }
    ctx->pc = 0x310520u;
label_310520:
    // 0x310520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x310520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310524:
    // 0x310524: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x310524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_310528:
    // 0x310528: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x310528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31052c:
    // 0x31052c: 0x40f809  jalr        $v0
label_310530:
    if (ctx->pc == 0x310530u) {
        ctx->pc = 0x310530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31052Cu;
        // 0x310530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310534u;
        goto label_310534;
    }
    ctx->pc = 0x31052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x310534u);
        ctx->pc = 0x310530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31052Cu;
        // 0x310530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31052Cu, 0x310534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310534u;
label_310534:
    // 0x310534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310538:
    // 0x310538: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x310538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31053c:
    // 0x31053c: 0xa2e30018  sb          $v1, 0x18($s7)
    ctx->pc = 0x31053cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 24), (uint8_t)GPR_U32(ctx, 3));
label_310540:
    // 0x310540: 0xc0a4e54  jal         func_293950
label_310544:
    if (ctx->pc == 0x310544u) {
        ctx->pc = 0x310548u;
        goto label_310548;
    }
    ctx->pc = 0x310540u;
    SET_GPR_U32(ctx, 31, 0x310548u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x310540u, 0x310548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310548u;
label_310548:
    // 0x310548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31054c:
    // 0x31054c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_310550:
    if (ctx->pc == 0x310550u) {
        ctx->pc = 0x310550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31054Cu;
        // 0x310550: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310554u;
        goto label_310554;
    }
    ctx->pc = 0x31054Cu;
    {
        const bool branch_taken_0x31054c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31054Cu;
        // 0x310550: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31054c) {
            ctx->pc = 0x310564u;
            goto label_310564;
        }
    }
    ctx->pc = 0x310554u;
label_310554:
    // 0x310554: 0xc6ec0024  lwc1        $f12, 0x24($s7)
    ctx->pc = 0x310554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310558:
    // 0x310558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31055c:
    // 0x31055c: 0xc0af288  jal         func_2BCA20
label_310560:
    if (ctx->pc == 0x310560u) {
        ctx->pc = 0x310560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31055Cu;
        // 0x310560: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310564u;
        goto label_310564;
    }
    ctx->pc = 0x31055Cu;
    SET_GPR_U32(ctx, 31, 0x310564u);
    ctx->pc = 0x310560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31055Cu;
    // 0x310560: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x31055Cu, 0x310564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310564u;
label_310564:
    // 0x310564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310568:
    // 0x310568: 0xc0a35d6  jal         func_28D758
label_31056c:
    if (ctx->pc == 0x31056Cu) {
        ctx->pc = 0x31056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310568u;
        // 0x31056c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310570u;
        goto label_310570;
    }
    ctx->pc = 0x310568u;
    SET_GPR_U32(ctx, 31, 0x310570u);
    ctx->pc = 0x31056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310568u;
    // 0x31056c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x310568u, 0x310570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310570u;
label_310570:
    // 0x310570: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x310570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_310574:
    // 0x310574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_310578:
    // 0x310578: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x310578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_31057c:
    // 0x31057c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x31057cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_310580:
    // 0x310580: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
label_310584:
    if (ctx->pc == 0x310584u) {
        ctx->pc = 0x310584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310580u;
        // 0x310584: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310588u;
        goto label_310588;
    }
    ctx->pc = 0x310580u;
    {
        const bool branch_taken_0x310580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310580u;
        // 0x310584: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310580) {
            ctx->pc = 0x310340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310340;
        }
    }
    ctx->pc = 0x310588u;
label_310588:
    // 0x310588: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31058c:
    // 0x31058c: 0xc0a576c  jal         func_295DB0
label_310590:
    if (ctx->pc == 0x310590u) {
        ctx->pc = 0x310590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31058Cu;
        // 0x310590: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310594u;
        goto label_310594;
    }
    ctx->pc = 0x31058Cu;
    SET_GPR_U32(ctx, 31, 0x310594u);
    ctx->pc = 0x310590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31058Cu;
    // 0x310590: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31058Cu, 0x310594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310594u;
label_310594:
    // 0x310594: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_310598:
    // 0x310598: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x310598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31059c:
    // 0x31059c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31059cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3105a0:
    // 0x3105a0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3105a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3105a4:
    // 0x3105a4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3105a8:
    // 0x3105a8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x3105a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_3105ac:
    // 0x3105ac: 0xc0a5776  jal         func_295DD8
label_3105b0:
    if (ctx->pc == 0x3105B0u) {
        ctx->pc = 0x3105B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105ACu;
        // 0x3105b0: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3105B4u;
        goto label_3105b4;
    }
    ctx->pc = 0x3105ACu;
    SET_GPR_U32(ctx, 31, 0x3105B4u);
    ctx->pc = 0x3105B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3105ACu;
    // 0x3105b0: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x3105ACu, 0x3105B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3105B4u;
label_3105b4:
    // 0x3105b4: 0xc6ec0024  lwc1        $f12, 0x24($s7)
    ctx->pc = 0x3105b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3105b8:
    // 0x3105b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3105b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3105bc:
    // 0x3105bc: 0xc0a5922  jal         func_296488
label_3105c0:
    if (ctx->pc == 0x3105C0u) {
        ctx->pc = 0x3105C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105BCu;
        // 0x3105c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3105C4u;
        goto label_3105c4;
    }
    ctx->pc = 0x3105BCu;
    SET_GPR_U32(ctx, 31, 0x3105C4u);
    ctx->pc = 0x3105C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3105BCu;
    // 0x3105c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x3105BCu, 0x3105C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3105C4u;
label_3105c4:
    // 0x3105c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3105c8:
    // 0x3105c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3105cc:
    // 0x3105cc: 0xa3c20275  sb          $v0, 0x275($fp)
    ctx->pc = 0x3105ccu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 629), (uint8_t)GPR_U32(ctx, 2));
label_3105d0:
    // 0x3105d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3105d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3105d4:
    // 0x3105d4: 0xc0a55b4  jal         func_2956D0
label_3105d8:
    if (ctx->pc == 0x3105D8u) {
        ctx->pc = 0x3105D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105D4u;
        // 0x3105d8: 0xa3c30274  sb          $v1, 0x274($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 628), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3105DCu;
        goto label_3105dc;
    }
    ctx->pc = 0x3105D4u;
    SET_GPR_U32(ctx, 31, 0x3105DCu);
    ctx->pc = 0x3105D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3105D4u;
    // 0x3105d8: 0xa3c30274  sb          $v1, 0x274($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 628), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x3105D4u, 0x3105DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3105DCu;
label_3105dc:
    // 0x3105dc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3105dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3105e0:
    // 0x3105e0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3105e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3105e4:
    // 0x3105e4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3105e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3105e8:
    // 0x3105e8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3105e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3105ec:
    // 0x3105ec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3105ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3105f0:
    // 0x3105f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3105f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3105f4:
    // 0x3105f4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3105f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3105f8:
    // 0x3105f8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3105f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3105fc:
    // 0x3105fc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3105fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310600:
    // 0x310600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_310604:
    // 0x310604: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x310604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_310608:
    // 0x310608: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x310608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31060c:
    // 0x31060c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x31060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_310610:
    // 0x310610: 0x3e00008  jr          $ra
label_310614:
    if (ctx->pc == 0x310614u) {
        ctx->pc = 0x310614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310610u;
        // 0x310614: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310618u;
        goto label_fallthrough_0x310610;
    }
    ctx->pc = 0x310610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310610u;
        // 0x310614: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x310610:
    ctx->pc = 0x310618u;
}
