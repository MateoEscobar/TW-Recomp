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

// Function: sub_003081A8
// Address: 0x3081a8 - 0x308478
void sub_003081A8_0x3081a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003081A8_0x3081a8");
#endif

    switch (ctx->pc) {
        case 0x3081a8u: goto label_3081a8;
        case 0x3081acu: goto label_3081ac;
        case 0x3081b0u: goto label_3081b0;
        case 0x3081b4u: goto label_3081b4;
        case 0x3081b8u: goto label_3081b8;
        case 0x3081bcu: goto label_3081bc;
        case 0x3081c0u: goto label_3081c0;
        case 0x3081c4u: goto label_3081c4;
        case 0x3081c8u: goto label_3081c8;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081d0u: goto label_3081d0;
        case 0x3081d4u: goto label_3081d4;
        case 0x3081d8u: goto label_3081d8;
        case 0x3081dcu: goto label_3081dc;
        case 0x3081e0u: goto label_3081e0;
        case 0x3081e4u: goto label_3081e4;
        case 0x3081e8u: goto label_3081e8;
        case 0x3081ecu: goto label_3081ec;
        case 0x3081f0u: goto label_3081f0;
        case 0x3081f4u: goto label_3081f4;
        case 0x3081f8u: goto label_3081f8;
        case 0x3081fcu: goto label_3081fc;
        case 0x308200u: goto label_308200;
        case 0x308204u: goto label_308204;
        case 0x308208u: goto label_308208;
        case 0x30820cu: goto label_30820c;
        case 0x308210u: goto label_308210;
        case 0x308214u: goto label_308214;
        case 0x308218u: goto label_308218;
        case 0x30821cu: goto label_30821c;
        case 0x308220u: goto label_308220;
        case 0x308224u: goto label_308224;
        case 0x308228u: goto label_308228;
        case 0x30822cu: goto label_30822c;
        case 0x308230u: goto label_308230;
        case 0x308234u: goto label_308234;
        case 0x308238u: goto label_308238;
        case 0x30823cu: goto label_30823c;
        case 0x308240u: goto label_308240;
        case 0x308244u: goto label_308244;
        case 0x308248u: goto label_308248;
        case 0x30824cu: goto label_30824c;
        case 0x308250u: goto label_308250;
        case 0x308254u: goto label_308254;
        case 0x308258u: goto label_308258;
        case 0x30825cu: goto label_30825c;
        case 0x308260u: goto label_308260;
        case 0x308264u: goto label_308264;
        case 0x308268u: goto label_308268;
        case 0x30826cu: goto label_30826c;
        case 0x308270u: goto label_308270;
        case 0x308274u: goto label_308274;
        case 0x308278u: goto label_308278;
        case 0x30827cu: goto label_30827c;
        case 0x308280u: goto label_308280;
        case 0x308284u: goto label_308284;
        case 0x308288u: goto label_308288;
        case 0x30828cu: goto label_30828c;
        case 0x308290u: goto label_308290;
        case 0x308294u: goto label_308294;
        case 0x308298u: goto label_308298;
        case 0x30829cu: goto label_30829c;
        case 0x3082a0u: goto label_3082a0;
        case 0x3082a4u: goto label_3082a4;
        case 0x3082a8u: goto label_3082a8;
        case 0x3082acu: goto label_3082ac;
        case 0x3082b0u: goto label_3082b0;
        case 0x3082b4u: goto label_3082b4;
        case 0x3082b8u: goto label_3082b8;
        case 0x3082bcu: goto label_3082bc;
        case 0x3082c0u: goto label_3082c0;
        case 0x3082c4u: goto label_3082c4;
        case 0x3082c8u: goto label_3082c8;
        case 0x3082ccu: goto label_3082cc;
        case 0x3082d0u: goto label_3082d0;
        case 0x3082d4u: goto label_3082d4;
        case 0x3082d8u: goto label_3082d8;
        case 0x3082dcu: goto label_3082dc;
        case 0x3082e0u: goto label_3082e0;
        case 0x3082e4u: goto label_3082e4;
        case 0x3082e8u: goto label_3082e8;
        case 0x3082ecu: goto label_3082ec;
        case 0x3082f0u: goto label_3082f0;
        case 0x3082f4u: goto label_3082f4;
        case 0x3082f8u: goto label_3082f8;
        case 0x3082fcu: goto label_3082fc;
        case 0x308300u: goto label_308300;
        case 0x308304u: goto label_308304;
        case 0x308308u: goto label_308308;
        case 0x30830cu: goto label_30830c;
        case 0x308310u: goto label_308310;
        case 0x308314u: goto label_308314;
        case 0x308318u: goto label_308318;
        case 0x30831cu: goto label_30831c;
        case 0x308320u: goto label_308320;
        case 0x308324u: goto label_308324;
        case 0x308328u: goto label_308328;
        case 0x30832cu: goto label_30832c;
        case 0x308330u: goto label_308330;
        case 0x308334u: goto label_308334;
        case 0x308338u: goto label_308338;
        case 0x30833cu: goto label_30833c;
        case 0x308340u: goto label_308340;
        case 0x308344u: goto label_308344;
        case 0x308348u: goto label_308348;
        case 0x30834cu: goto label_30834c;
        case 0x308350u: goto label_308350;
        case 0x308354u: goto label_308354;
        case 0x308358u: goto label_308358;
        case 0x30835cu: goto label_30835c;
        case 0x308360u: goto label_308360;
        case 0x308364u: goto label_308364;
        case 0x308368u: goto label_308368;
        case 0x30836cu: goto label_30836c;
        case 0x308370u: goto label_308370;
        case 0x308374u: goto label_308374;
        case 0x308378u: goto label_308378;
        case 0x30837cu: goto label_30837c;
        case 0x308380u: goto label_308380;
        case 0x308384u: goto label_308384;
        case 0x308388u: goto label_308388;
        case 0x30838cu: goto label_30838c;
        case 0x308390u: goto label_308390;
        case 0x308394u: goto label_308394;
        case 0x308398u: goto label_308398;
        case 0x30839cu: goto label_30839c;
        case 0x3083a0u: goto label_3083a0;
        case 0x3083a4u: goto label_3083a4;
        case 0x3083a8u: goto label_3083a8;
        case 0x3083acu: goto label_3083ac;
        case 0x3083b0u: goto label_3083b0;
        case 0x3083b4u: goto label_3083b4;
        case 0x3083b8u: goto label_3083b8;
        case 0x3083bcu: goto label_3083bc;
        case 0x3083c0u: goto label_3083c0;
        case 0x3083c4u: goto label_3083c4;
        case 0x3083c8u: goto label_3083c8;
        case 0x3083ccu: goto label_3083cc;
        case 0x3083d0u: goto label_3083d0;
        case 0x3083d4u: goto label_3083d4;
        case 0x3083d8u: goto label_3083d8;
        case 0x3083dcu: goto label_3083dc;
        case 0x3083e0u: goto label_3083e0;
        case 0x3083e4u: goto label_3083e4;
        case 0x3083e8u: goto label_3083e8;
        case 0x3083ecu: goto label_3083ec;
        case 0x3083f0u: goto label_3083f0;
        case 0x3083f4u: goto label_3083f4;
        case 0x3083f8u: goto label_3083f8;
        case 0x3083fcu: goto label_3083fc;
        case 0x308400u: goto label_308400;
        case 0x308404u: goto label_308404;
        case 0x308408u: goto label_308408;
        case 0x30840cu: goto label_30840c;
        case 0x308410u: goto label_308410;
        case 0x308414u: goto label_308414;
        case 0x308418u: goto label_308418;
        case 0x30841cu: goto label_30841c;
        case 0x308420u: goto label_308420;
        case 0x308424u: goto label_308424;
        case 0x308428u: goto label_308428;
        case 0x30842cu: goto label_30842c;
        case 0x308430u: goto label_308430;
        case 0x308434u: goto label_308434;
        case 0x308438u: goto label_308438;
        case 0x30843cu: goto label_30843c;
        case 0x308440u: goto label_308440;
        case 0x308444u: goto label_308444;
        case 0x308448u: goto label_308448;
        case 0x30844cu: goto label_30844c;
        case 0x308450u: goto label_308450;
        case 0x308454u: goto label_308454;
        case 0x308458u: goto label_308458;
        case 0x30845cu: goto label_30845c;
        case 0x308460u: goto label_308460;
        case 0x308464u: goto label_308464;
        case 0x308468u: goto label_308468;
        case 0x30846cu: goto label_30846c;
        case 0x308470u: goto label_308470;
        case 0x308474u: goto label_308474;
        default: break;
    }

    ctx->pc = 0x3081a8u;

label_3081a8:
    // 0x3081a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3081a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3081ac:
    // 0x3081ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3081acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3081b0:
    // 0x3081b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3081b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3081b4:
    // 0x3081b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3081b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3081b8:
    // 0x3081b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3081b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3081bc:
    // 0x3081bc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3081bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3081c0:
    // 0x3081c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3081c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3081c4:
    // 0x3081c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3081c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3081c8:
    // 0x3081c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3081c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3081cc:
    // 0x3081cc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3081ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3081d0:
    // 0x3081d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3081d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3081d4:
    // 0x3081d4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3081d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3081d8:
    // 0x3081d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3081d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3081dc:
    // 0x3081dc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3081dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3081e0:
    // 0x3081e0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3081e4:
    // 0x3081e4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3081e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3081e8:
    // 0x3081e8: 0x8c9e0048  lw          $fp, 0x48($a0)
    ctx->pc = 0x3081e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3081ec:
    // 0x3081ec: 0x7e182b  sltu        $v1, $v1, $fp
    ctx->pc = 0x3081ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3081f0:
    // 0x3081f0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3081f4:
    if (ctx->pc == 0x3081F4u) {
        ctx->pc = 0x3081F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081F0u;
        // 0x3081f4: 0x27c203e8  addiu       $v0, $fp, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3081F8u;
        goto label_3081f8;
    }
    ctx->pc = 0x3081F0u;
    {
        const bool branch_taken_0x3081f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081F0u;
        // 0x3081f4: 0x27c203e8  addiu       $v0, $fp, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081f0) {
            ctx->pc = 0x30825Cu;
            goto label_30825c;
        }
    }
    ctx->pc = 0x3081F8u;
label_3081f8:
    // 0x3081f8: 0x92830032  lbu         $v1, 0x32($s4)
    ctx->pc = 0x3081f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
label_3081fc:
    // 0x3081fc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_308200:
    if (ctx->pc == 0x308200u) {
        ctx->pc = 0x308200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081FCu;
        // 0x308200: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308204u;
        goto label_308204;
    }
    ctx->pc = 0x3081FCu;
    {
        const bool branch_taken_0x3081fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081FCu;
        // 0x308200: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081fc) {
            ctx->pc = 0x30825Cu;
            goto label_30825c;
        }
    }
    ctx->pc = 0x308204u;
label_308204:
    // 0x308204: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x308204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_308208:
    // 0x308208: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x308208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30820c:
    // 0x30820c: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30820cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_308210:
    // 0x308210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308214:
    // 0x308214: 0x0  nop
    ctx->pc = 0x308214u;
    // NOP
label_308218:
    // 0x308218: 0xc137826  jal         func_4DE098
label_30821c:
    if (ctx->pc == 0x30821Cu) {
        ctx->pc = 0x30821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308218u;
        // 0x30821c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308220u;
        goto label_308220;
    }
    ctx->pc = 0x308218u;
    SET_GPR_U32(ctx, 31, 0x308220u);
    ctx->pc = 0x30821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308218u;
    // 0x30821c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x308218u, 0x308220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308220u;
label_308220:
    // 0x308220: 0xc0e409a  jal         func_390268
label_308224:
    if (ctx->pc == 0x308224u) {
        ctx->pc = 0x308224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308220u;
        // 0x308224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308228u;
        goto label_308228;
    }
    ctx->pc = 0x308220u;
    SET_GPR_U32(ctx, 31, 0x308228u);
    ctx->pc = 0x308224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308220u;
    // 0x308224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x308220u, 0x308228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308228u;
label_308228:
    // 0x308228: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_30822c:
    if (ctx->pc == 0x30822Cu) {
        ctx->pc = 0x30822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308228u;
        // 0x30822c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308230u;
        goto label_308230;
    }
    ctx->pc = 0x308228u;
    {
        const bool branch_taken_0x308228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308228) {
            ctx->pc = 0x30822Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308228u;
            // 0x30822c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308248u;
            goto label_308248;
        }
    }
    ctx->pc = 0x308230u;
label_308230:
    // 0x308230: 0xc087502  jal         func_21D408
label_308234:
    if (ctx->pc == 0x308234u) {
        ctx->pc = 0x308234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308230u;
        // 0x308234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308238u;
        goto label_308238;
    }
    ctx->pc = 0x308230u;
    SET_GPR_U32(ctx, 31, 0x308238u);
    ctx->pc = 0x308234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308230u;
    // 0x308234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x308230u, 0x308238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308238u;
label_308238:
    // 0x308238: 0xc137832  jal         func_4DE0C8
label_30823c:
    if (ctx->pc == 0x30823Cu) {
        ctx->pc = 0x30823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308238u;
        // 0x30823c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308240u;
        goto label_308240;
    }
    ctx->pc = 0x308238u;
    SET_GPR_U32(ctx, 31, 0x308240u);
    ctx->pc = 0x30823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308238u;
    // 0x30823c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x308238u, 0x308240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308240u;
label_308240:
    // 0x308240: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_308244:
    if (ctx->pc == 0x308244u) {
        ctx->pc = 0x308244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308240u;
        // 0x308244: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308248u;
        goto label_308248;
    }
    ctx->pc = 0x308240u;
    {
        const bool branch_taken_0x308240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308240u;
        // 0x308244: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308240) {
            ctx->pc = 0x30843Cu;
            goto label_30843c;
        }
    }
    ctx->pc = 0x308248u;
label_308248:
    // 0x308248: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x308248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30824c:
    // 0x30824c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_308250:
    if (ctx->pc == 0x308250u) {
        ctx->pc = 0x308250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30824Cu;
        // 0x308250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308254u;
        goto label_308254;
    }
    ctx->pc = 0x30824Cu;
    {
        const bool branch_taken_0x30824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30824c) {
            ctx->pc = 0x308250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30824Cu;
            // 0x308250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308218;
        }
    }
    ctx->pc = 0x308254u;
label_308254:
    // 0x308254: 0x1000007a  b           . + 4 + (0x7A << 2)
label_308258:
    if (ctx->pc == 0x308258u) {
        ctx->pc = 0x308258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308254u;
        // 0x308258: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30825Cu;
        goto label_30825c;
    }
    ctx->pc = 0x308254u;
    {
        const bool branch_taken_0x308254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308254u;
        // 0x308258: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308254) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x30825Cu;
label_30825c:
    // 0x30825c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x30825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_308260:
    // 0x308260: 0x5e102b  sltu        $v0, $v0, $fp
    ctx->pc = 0x308260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_308264:
    // 0x308264: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_308268:
    if (ctx->pc == 0x308268u) {
        ctx->pc = 0x308268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308264u;
        // 0x308268: 0x27c20bb8  addiu       $v0, $fp, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30826Cu;
        goto label_30826c;
    }
    ctx->pc = 0x308264u;
    {
        const bool branch_taken_0x308264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308264u;
        // 0x308268: 0x27c20bb8  addiu       $v0, $fp, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308264) {
            ctx->pc = 0x3083F8u;
            goto label_3083f8;
        }
    }
    ctx->pc = 0x30826Cu;
label_30826c:
    // 0x30826c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x30826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_308270:
    // 0x308270: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x308270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_308274:
    // 0x308274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x308274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308278:
    // 0x308278: 0x24770048  addiu       $s7, $v1, 0x48
    ctx->pc = 0x308278u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_30827c:
    // 0x30827c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308280:
    // 0x308280: 0xc137826  jal         func_4DE098
label_308284:
    if (ctx->pc == 0x308284u) {
        ctx->pc = 0x308284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308280u;
        // 0x308284: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308288u;
        goto label_308288;
    }
    ctx->pc = 0x308280u;
    SET_GPR_U32(ctx, 31, 0x308288u);
    ctx->pc = 0x308284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308280u;
    // 0x308284: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x308280u, 0x308288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308288u;
label_308288:
    // 0x308288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x308288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30828c:
    // 0x30828c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x30828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_308290:
    // 0x308290: 0xc0e409a  jal         func_390268
label_308294:
    if (ctx->pc == 0x308294u) {
        ctx->pc = 0x308294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308290u;
        // 0x308294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308298u;
        goto label_308298;
    }
    ctx->pc = 0x308290u;
    SET_GPR_U32(ctx, 31, 0x308298u);
    ctx->pc = 0x308294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308290u;
    // 0x308294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x308290u, 0x308298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308298u;
label_308298:
    // 0x308298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30829c:
    // 0x30829c: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
label_3082a0:
    if (ctx->pc == 0x3082A0u) {
        ctx->pc = 0x3082A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30829Cu;
        // 0x3082a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082A4u;
        goto label_3082a4;
    }
    ctx->pc = 0x30829Cu;
    {
        const bool branch_taken_0x30829c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30829Cu;
        // 0x3082a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30829c) {
            ctx->pc = 0x3083ECu;
            goto label_3083ec;
        }
    }
    ctx->pc = 0x3082A4u;
label_3082a4:
    // 0x3082a4: 0xc087502  jal         func_21D408
label_3082a8:
    if (ctx->pc == 0x3082A8u) {
        ctx->pc = 0x3082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082A4u;
        // 0x3082a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082ACu;
        goto label_3082ac;
    }
    ctx->pc = 0x3082A4u;
    SET_GPR_U32(ctx, 31, 0x3082ACu);
    ctx->pc = 0x3082A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082A4u;
    // 0x3082a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3082A4u, 0x3082ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082ACu;
label_3082ac:
    // 0x3082ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3082acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3082b0:
    // 0x3082b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3082b4:
    // 0x3082b4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_3082b8:
    // 0x3082b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3082b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3082bc:
    // 0x3082bc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3082bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3082c0:
    // 0x3082c0: 0x5043004a  beql        $v0, $v1, . + 4 + (0x4A << 2)
label_3082c4:
    if (ctx->pc == 0x3082C4u) {
        ctx->pc = 0x3082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082C0u;
        // 0x3082c4: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082C8u;
        goto label_3082c8;
    }
    ctx->pc = 0x3082C0u;
    {
        const bool branch_taken_0x3082c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3082c0) {
            ctx->pc = 0x3082C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3082C0u;
            // 0x3082c4: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3083ECu;
            goto label_3083ec;
        }
    }
    ctx->pc = 0x3082C8u;
label_3082c8:
    // 0x3082c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3082c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3082cc:
    // 0x3082cc: 0xc0a3630  jal         func_28D8C0
label_3082d0:
    if (ctx->pc == 0x3082D0u) {
        ctx->pc = 0x3082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082CCu;
        // 0x3082d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082D4u;
        goto label_3082d4;
    }
    ctx->pc = 0x3082CCu;
    SET_GPR_U32(ctx, 31, 0x3082D4u);
    ctx->pc = 0x3082D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082CCu;
    // 0x3082d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3082CCu, 0x3082D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082D4u;
label_3082d4:
    // 0x3082d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3082d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3082d8:
    // 0x3082d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3082d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3082dc:
    // 0x3082dc: 0xc0a3628  jal         func_28D8A0
label_3082e0:
    if (ctx->pc == 0x3082E0u) {
        ctx->pc = 0x3082E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082DCu;
        // 0x3082e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082E4u;
        goto label_3082e4;
    }
    ctx->pc = 0x3082DCu;
    SET_GPR_U32(ctx, 31, 0x3082E4u);
    ctx->pc = 0x3082E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082DCu;
    // 0x3082e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x3082DCu, 0x3082E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082E4u;
label_3082e4:
    // 0x3082e4: 0x26360090  addiu       $s6, $s1, 0x90
    ctx->pc = 0x3082e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3082e8:
    // 0x3082e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3082e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3082ec:
    // 0x3082ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3082ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3082f0:
    // 0x3082f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3082f4:
    // 0x3082f4: 0x40f809  jalr        $v0
label_3082f8:
    if (ctx->pc == 0x3082F8u) {
        ctx->pc = 0x3082F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082F4u;
        // 0x3082f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3082FCu;
        goto label_3082fc;
    }
    ctx->pc = 0x3082F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3082FCu);
        ctx->pc = 0x3082F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082F4u;
        // 0x3082f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3082F4u, 0x3082FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3082FCu;
label_3082fc:
    // 0x3082fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3082fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_308300:
    // 0x308300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308304:
    // 0x308304: 0xc0ab742  jal         func_2ADD08
label_308308:
    if (ctx->pc == 0x308308u) {
        ctx->pc = 0x308308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308304u;
        // 0x308308: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30830Cu;
        goto label_30830c;
    }
    ctx->pc = 0x308304u;
    SET_GPR_U32(ctx, 31, 0x30830Cu);
    ctx->pc = 0x308308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308304u;
    // 0x308308: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x308304u, 0x30830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30830Cu;
label_30830c:
    // 0x30830c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x30830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_308310:
    // 0x308310: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x308310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_308314:
    // 0x308314: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x308314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_308318:
    // 0x308318: 0xc137826  jal         func_4DE098
label_30831c:
    if (ctx->pc == 0x30831Cu) {
        ctx->pc = 0x30831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308318u;
        // 0x30831c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308320u;
        goto label_308320;
    }
    ctx->pc = 0x308318u;
    SET_GPR_U32(ctx, 31, 0x308320u);
    ctx->pc = 0x30831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308318u;
    // 0x30831c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x308318u, 0x308320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308320u;
label_308320:
    // 0x308320: 0xc0e409a  jal         func_390268
label_308324:
    if (ctx->pc == 0x308324u) {
        ctx->pc = 0x308324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308320u;
        // 0x308324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308328u;
        goto label_308328;
    }
    ctx->pc = 0x308320u;
    SET_GPR_U32(ctx, 31, 0x308328u);
    ctx->pc = 0x308324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308320u;
    // 0x308324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x308320u, 0x308328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308328u;
label_308328:
    // 0x308328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30832c:
    // 0x30832c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_308330:
    if (ctx->pc == 0x308330u) {
        ctx->pc = 0x308330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30832Cu;
        // 0x308330: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308334u;
        goto label_308334;
    }
    ctx->pc = 0x30832Cu;
    {
        const bool branch_taken_0x30832c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30832c) {
            ctx->pc = 0x308330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30832Cu;
            // 0x308330: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308390u;
            goto label_308390;
        }
    }
    ctx->pc = 0x308334u;
label_308334:
    // 0x308334: 0x52110016  beql        $s0, $s1, . + 4 + (0x16 << 2)
label_308338:
    if (ctx->pc == 0x308338u) {
        ctx->pc = 0x308338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308334u;
        // 0x308338: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30833Cu;
        goto label_30833c;
    }
    ctx->pc = 0x308334u;
    {
        const bool branch_taken_0x308334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x308334) {
            ctx->pc = 0x308338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308334u;
            // 0x308338: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308390u;
            goto label_308390;
        }
    }
    ctx->pc = 0x30833Cu;
label_30833c:
    // 0x30833c: 0xc087502  jal         func_21D408
label_308340:
    if (ctx->pc == 0x308340u) {
        ctx->pc = 0x308340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30833Cu;
        // 0x308340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308344u;
        goto label_308344;
    }
    ctx->pc = 0x30833Cu;
    SET_GPR_U32(ctx, 31, 0x308344u);
    ctx->pc = 0x308340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30833Cu;
    // 0x308340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30833Cu, 0x308344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308344u;
label_308344:
    // 0x308344: 0x8043002c  lb          $v1, 0x2C($v0)
    ctx->pc = 0x308344u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_308348:
    // 0x308348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30834c:
    // 0x30834c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x30834cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_308350:
    // 0x308350: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x308350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_308354:
    // 0x308354: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_308358:
    if (ctx->pc == 0x308358u) {
        ctx->pc = 0x308358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308354u;
        // 0x308358: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30835Cu;
        goto label_30835c;
    }
    ctx->pc = 0x308354u;
    {
        const bool branch_taken_0x308354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308354) {
            ctx->pc = 0x308358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308354u;
            // 0x308358: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308390u;
            goto label_308390;
        }
    }
    ctx->pc = 0x30835Cu;
label_30835c:
    // 0x30835c: 0x86c40002  lh          $a0, 0x2($s6)
    ctx->pc = 0x30835cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_308360:
    // 0x308360: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x308360u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_308364:
    // 0x308364: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x308364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_308368:
    // 0x308368: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x308368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_30836c:
    // 0x30836c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x30836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_308370:
    // 0x308370: 0xc0cdb38  jal         func_336CE0
label_308374:
    if (ctx->pc == 0x308374u) {
        ctx->pc = 0x308374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308370u;
        // 0x308374: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308378u;
        goto label_308378;
    }
    ctx->pc = 0x308370u;
    SET_GPR_U32(ctx, 31, 0x308378u);
    ctx->pc = 0x308374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308370u;
    // 0x308374: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x308370u, 0x308378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308378u;
label_308378:
    // 0x308378: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x308378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30837c:
    // 0x30837c: 0x0  nop
    ctx->pc = 0x30837cu;
    // NOP
label_308380:
    // 0x308380: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_308384:
    if (ctx->pc == 0x308384u) {
        ctx->pc = 0x308384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308380u;
        // 0x308384: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308388u;
        goto label_308388;
    }
    ctx->pc = 0x308380u;
    {
        const bool branch_taken_0x308380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x308384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308380u;
        // 0x308384: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308380) {
            ctx->pc = 0x308390u;
            goto label_308390;
        }
    }
    ctx->pc = 0x308388u;
label_308388:
    // 0x308388: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x308388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30838c:
    // 0x30838c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30838cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_308390:
    // 0x308390: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x308390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_308394:
    // 0x308394: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_308398:
    if (ctx->pc == 0x308398u) {
        ctx->pc = 0x308398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308394u;
        // 0x308398: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30839Cu;
        goto label_30839c;
    }
    ctx->pc = 0x308394u;
    {
        const bool branch_taken_0x308394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308394u;
        // 0x308398: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308394) {
            ctx->pc = 0x308318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308318;
        }
    }
    ctx->pc = 0x30839Cu;
label_30839c:
    // 0x30839c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_3083a0:
    if (ctx->pc == 0x3083A0u) {
        ctx->pc = 0x3083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30839Cu;
        // 0x3083a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083A4u;
        goto label_3083a4;
    }
    ctx->pc = 0x30839Cu;
    {
        const bool branch_taken_0x30839c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30839Cu;
        // 0x3083a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30839c) {
            ctx->pc = 0x3083ECu;
            goto label_3083ec;
        }
    }
    ctx->pc = 0x3083A4u;
label_3083a4:
    // 0x3083a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3083a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3083a8:
    // 0x3083a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3083a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3083ac:
    // 0x3083ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3083acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3083b0:
    // 0x3083b0: 0x40f809  jalr        $v0
label_3083b4:
    if (ctx->pc == 0x3083B4u) {
        ctx->pc = 0x3083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083B0u;
        // 0x3083b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083B8u;
        goto label_3083b8;
    }
    ctx->pc = 0x3083B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3083B8u);
        ctx->pc = 0x3083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083B0u;
        // 0x3083b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3083B0u, 0x3083B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3083B8u;
label_3083b8:
    // 0x3083b8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3083b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3083bc:
    // 0x3083bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3083bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3083c0:
    // 0x3083c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3083c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3083c4:
    // 0x3083c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3083c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3083c8:
    // 0x3083c8: 0x40f809  jalr        $v0
label_3083cc:
    if (ctx->pc == 0x3083CCu) {
        ctx->pc = 0x3083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083C8u;
        // 0x3083cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083D0u;
        goto label_3083d0;
    }
    ctx->pc = 0x3083C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3083D0u);
        ctx->pc = 0x3083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083C8u;
        // 0x3083cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3083C8u, 0x3083D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3083D0u;
label_3083d0:
    // 0x3083d0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3083d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3083d4:
    // 0x3083d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3083d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3083d8:
    // 0x3083d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3083d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3083dc:
    // 0x3083dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3083dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3083e0:
    // 0x3083e0: 0xc0add6e  jal         func_2B75B8
label_3083e4:
    if (ctx->pc == 0x3083E4u) {
        ctx->pc = 0x3083E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083E0u;
        // 0x3083e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083E8u;
        goto label_3083e8;
    }
    ctx->pc = 0x3083E0u;
    SET_GPR_U32(ctx, 31, 0x3083E8u);
    ctx->pc = 0x3083E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083E0u;
    // 0x3083e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x3083E0u, 0x3083E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083E8u;
label_3083e8:
    // 0x3083e8: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x3083e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3083ec:
    // 0x3083ec: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x3083ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3083f0:
    // 0x3083f0: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_3083f4:
    if (ctx->pc == 0x3083F4u) {
        ctx->pc = 0x3083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083F0u;
        // 0x3083f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3083F8u;
        goto label_3083f8;
    }
    ctx->pc = 0x3083F0u;
    {
        const bool branch_taken_0x3083f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083F0u;
        // 0x3083f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083f0) {
            ctx->pc = 0x308280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308280;
        }
    }
    ctx->pc = 0x3083F8u;
label_3083f8:
    // 0x3083f8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3083f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3083fc:
    // 0x3083fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_308400:
    if (ctx->pc == 0x308400u) {
        ctx->pc = 0x308400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083FCu;
        // 0x308400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308404u;
        goto label_308404;
    }
    ctx->pc = 0x3083FCu;
    {
        const bool branch_taken_0x3083fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083FCu;
        // 0x308400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083fc) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x308404u;
label_308404:
    // 0x308404: 0x92820032  lbu         $v0, 0x32($s4)
    ctx->pc = 0x308404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
label_308408:
    // 0x308408: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_30840c:
    if (ctx->pc == 0x30840Cu) {
        ctx->pc = 0x30840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308408u;
        // 0x30840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308410u;
        goto label_308410;
    }
    ctx->pc = 0x308408u;
    {
        const bool branch_taken_0x308408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308408u;
        // 0x30840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308408) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x308410u;
label_308410:
    // 0x308410: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x308410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_308414:
    // 0x308414: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_308418:
    if (ctx->pc == 0x308418u) {
        ctx->pc = 0x308418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308414u;
        // 0x308418: 0x5e102b  sltu        $v0, $v0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30841Cu;
        goto label_30841c;
    }
    ctx->pc = 0x308414u;
    {
        const bool branch_taken_0x308414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308414u;
        // 0x308418: 0x5e102b  sltu        $v0, $v0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308414) {
            ctx->pc = 0x308428u;
            goto label_308428;
        }
    }
    ctx->pc = 0x30841Cu;
label_30841c:
    // 0x30841c: 0x27c21b58  addiu       $v0, $fp, 0x1B58
    ctx->pc = 0x30841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 7000));
label_308420:
    // 0x308420: 0x10000006  b           . + 4 + (0x6 << 2)
label_308424:
    if (ctx->pc == 0x308424u) {
        ctx->pc = 0x308424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308420u;
        // 0x308424: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308428u;
        goto label_308428;
    }
    ctx->pc = 0x308420u;
    {
        const bool branch_taken_0x308420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308420u;
        // 0x308424: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308420) {
            ctx->pc = 0x30843Cu;
            goto label_30843c;
        }
    }
    ctx->pc = 0x308428u;
label_308428:
    // 0x308428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30842c:
    if (ctx->pc == 0x30842Cu) {
        ctx->pc = 0x30842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308428u;
        // 0x30842c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308430u;
        goto label_308430;
    }
    ctx->pc = 0x308428u;
    {
        const bool branch_taken_0x308428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308428u;
        // 0x30842c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308428) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x308430u;
label_308430:
    // 0x308430: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x308430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_308434:
    // 0x308434: 0xc0c1e84  jal         func_307A10
label_308438:
    if (ctx->pc == 0x308438u) {
        ctx->pc = 0x308438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308434u;
        // 0x308438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30843Cu;
        goto label_30843c;
    }
    ctx->pc = 0x308434u;
    SET_GPR_U32(ctx, 31, 0x30843Cu);
    ctx->pc = 0x308438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308434u;
    // 0x308438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307A10u, 0x308434u, 0x30843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30843Cu;
label_30843c:
    // 0x30843c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30843cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308440:
    // 0x308440: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x308440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_308444:
    // 0x308444: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x308444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_308448:
    // 0x308448: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x308448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30844c:
    // 0x30844c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30844cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_308450:
    // 0x308450: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x308450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_308454:
    // 0x308454: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x308454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_308458:
    // 0x308458: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x308458u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30845c:
    // 0x30845c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x30845cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308460:
    // 0x308460: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x308460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_308464:
    // 0x308464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308468:
    // 0x308468: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x308468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30846c:
    // 0x30846c: 0x3e00008  jr          $ra
label_308470:
    if (ctx->pc == 0x308470u) {
        ctx->pc = 0x308470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30846Cu;
        // 0x308470: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308474u;
        goto label_308474;
    }
    ctx->pc = 0x30846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30846Cu;
        // 0x308470: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30846Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308474u;
label_308474:
    // 0x308474: 0x0  nop
    ctx->pc = 0x308474u;
    // NOP
    ctx->pc = 0x308478u;
}
