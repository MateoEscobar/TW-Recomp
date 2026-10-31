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

// Function: sub_00306190
// Address: 0x306190 - 0x3063b0
void sub_00306190_0x306190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306190_0x306190");
#endif

    switch (ctx->pc) {
        case 0x306190u: goto label_306190;
        case 0x306194u: goto label_306194;
        case 0x306198u: goto label_306198;
        case 0x30619cu: goto label_30619c;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061a8u: goto label_3061a8;
        case 0x3061acu: goto label_3061ac;
        case 0x3061b0u: goto label_3061b0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061b8u: goto label_3061b8;
        case 0x3061bcu: goto label_3061bc;
        case 0x3061c0u: goto label_3061c0;
        case 0x3061c4u: goto label_3061c4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061ccu: goto label_3061cc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061dcu: goto label_3061dc;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061e4u: goto label_3061e4;
        case 0x3061e8u: goto label_3061e8;
        case 0x3061ecu: goto label_3061ec;
        case 0x3061f0u: goto label_3061f0;
        case 0x3061f4u: goto label_3061f4;
        case 0x3061f8u: goto label_3061f8;
        case 0x3061fcu: goto label_3061fc;
        case 0x306200u: goto label_306200;
        case 0x306204u: goto label_306204;
        case 0x306208u: goto label_306208;
        case 0x30620cu: goto label_30620c;
        case 0x306210u: goto label_306210;
        case 0x306214u: goto label_306214;
        case 0x306218u: goto label_306218;
        case 0x30621cu: goto label_30621c;
        case 0x306220u: goto label_306220;
        case 0x306224u: goto label_306224;
        case 0x306228u: goto label_306228;
        case 0x30622cu: goto label_30622c;
        case 0x306230u: goto label_306230;
        case 0x306234u: goto label_306234;
        case 0x306238u: goto label_306238;
        case 0x30623cu: goto label_30623c;
        case 0x306240u: goto label_306240;
        case 0x306244u: goto label_306244;
        case 0x306248u: goto label_306248;
        case 0x30624cu: goto label_30624c;
        case 0x306250u: goto label_306250;
        case 0x306254u: goto label_306254;
        case 0x306258u: goto label_306258;
        case 0x30625cu: goto label_30625c;
        case 0x306260u: goto label_306260;
        case 0x306264u: goto label_306264;
        case 0x306268u: goto label_306268;
        case 0x30626cu: goto label_30626c;
        case 0x306270u: goto label_306270;
        case 0x306274u: goto label_306274;
        case 0x306278u: goto label_306278;
        case 0x30627cu: goto label_30627c;
        case 0x306280u: goto label_306280;
        case 0x306284u: goto label_306284;
        case 0x306288u: goto label_306288;
        case 0x30628cu: goto label_30628c;
        case 0x306290u: goto label_306290;
        case 0x306294u: goto label_306294;
        case 0x306298u: goto label_306298;
        case 0x30629cu: goto label_30629c;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062a4u: goto label_3062a4;
        case 0x3062a8u: goto label_3062a8;
        case 0x3062acu: goto label_3062ac;
        case 0x3062b0u: goto label_3062b0;
        case 0x3062b4u: goto label_3062b4;
        case 0x3062b8u: goto label_3062b8;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062c0u: goto label_3062c0;
        case 0x3062c4u: goto label_3062c4;
        case 0x3062c8u: goto label_3062c8;
        case 0x3062ccu: goto label_3062cc;
        case 0x3062d0u: goto label_3062d0;
        case 0x3062d4u: goto label_3062d4;
        case 0x3062d8u: goto label_3062d8;
        case 0x3062dcu: goto label_3062dc;
        case 0x3062e0u: goto label_3062e0;
        case 0x3062e4u: goto label_3062e4;
        case 0x3062e8u: goto label_3062e8;
        case 0x3062ecu: goto label_3062ec;
        case 0x3062f0u: goto label_3062f0;
        case 0x3062f4u: goto label_3062f4;
        case 0x3062f8u: goto label_3062f8;
        case 0x3062fcu: goto label_3062fc;
        case 0x306300u: goto label_306300;
        case 0x306304u: goto label_306304;
        case 0x306308u: goto label_306308;
        case 0x30630cu: goto label_30630c;
        case 0x306310u: goto label_306310;
        case 0x306314u: goto label_306314;
        case 0x306318u: goto label_306318;
        case 0x30631cu: goto label_30631c;
        case 0x306320u: goto label_306320;
        case 0x306324u: goto label_306324;
        case 0x306328u: goto label_306328;
        case 0x30632cu: goto label_30632c;
        case 0x306330u: goto label_306330;
        case 0x306334u: goto label_306334;
        case 0x306338u: goto label_306338;
        case 0x30633cu: goto label_30633c;
        case 0x306340u: goto label_306340;
        case 0x306344u: goto label_306344;
        case 0x306348u: goto label_306348;
        case 0x30634cu: goto label_30634c;
        case 0x306350u: goto label_306350;
        case 0x306354u: goto label_306354;
        case 0x306358u: goto label_306358;
        case 0x30635cu: goto label_30635c;
        case 0x306360u: goto label_306360;
        case 0x306364u: goto label_306364;
        case 0x306368u: goto label_306368;
        case 0x30636cu: goto label_30636c;
        case 0x306370u: goto label_306370;
        case 0x306374u: goto label_306374;
        case 0x306378u: goto label_306378;
        case 0x30637cu: goto label_30637c;
        case 0x306380u: goto label_306380;
        case 0x306384u: goto label_306384;
        case 0x306388u: goto label_306388;
        case 0x30638cu: goto label_30638c;
        case 0x306390u: goto label_306390;
        case 0x306394u: goto label_306394;
        case 0x306398u: goto label_306398;
        case 0x30639cu: goto label_30639c;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063a4u: goto label_3063a4;
        case 0x3063a8u: goto label_3063a8;
        case 0x3063acu: goto label_3063ac;
        default: break;
    }

    ctx->pc = 0x306190u;

label_306190:
    // 0x306190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x306190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_306194:
    // 0x306194: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x306194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_306198:
    // 0x306198: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x306198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_30619c:
    // 0x30619c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3061a0:
    // 0x3061a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3061a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3061a4:
    // 0x3061a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3061a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3061a8:
    // 0x3061a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3061a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3061ac:
    // 0x3061ac: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x3061acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3061b0:
    // 0x3061b0: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x3061b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_3061b4:
    // 0x3061b4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x3061b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_3061b8:
    // 0x3061b8: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_3061bc:
    if (ctx->pc == 0x3061BCu) {
        ctx->pc = 0x3061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061B8u;
        // 0x3061bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061C0u;
        goto label_3061c0;
    }
    ctx->pc = 0x3061B8u;
    {
        const bool branch_taken_0x3061b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061B8u;
        // 0x3061bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061b8) {
            ctx->pc = 0x30638Cu;
            goto label_30638c;
        }
    }
    ctx->pc = 0x3061C0u;
label_3061c0:
    // 0x3061c0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_3061c4:
    // 0x3061c4: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x3061c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3061c8:
    // 0x3061c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3061cc:
    // 0x3061cc: 0x90430418  lbu         $v1, 0x418($v0)
    ctx->pc = 0x3061ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1048)));
label_3061d0:
    // 0x3061d0: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
label_3061d4:
    if (ctx->pc == 0x3061D4u) {
        ctx->pc = 0x3061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D0u;
        // 0x3061d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061D8u;
        goto label_3061d8;
    }
    ctx->pc = 0x3061D0u;
    {
        const bool branch_taken_0x3061d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D0u;
        // 0x3061d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061d0) {
            ctx->pc = 0x30638Cu;
            goto label_30638c;
        }
    }
    ctx->pc = 0x3061D8u;
label_3061d8:
    // 0x3061d8: 0xc0a40d2  jal         func_290348
label_3061dc:
    if (ctx->pc == 0x3061DCu) {
        ctx->pc = 0x3061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061D8u;
        // 0x3061dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061E0u;
        goto label_3061e0;
    }
    ctx->pc = 0x3061D8u;
    SET_GPR_U32(ctx, 31, 0x3061E0u);
    ctx->pc = 0x3061DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061D8u;
    // 0x3061dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x3061D8u, 0x3061E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061E0u;
label_3061e0:
    // 0x3061e0: 0x1053006b  beq         $v0, $s3, . + 4 + (0x6B << 2)
label_3061e4:
    if (ctx->pc == 0x3061E4u) {
        ctx->pc = 0x3061E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E0u;
        // 0x3061e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061E8u;
        goto label_3061e8;
    }
    ctx->pc = 0x3061E0u;
    {
        const bool branch_taken_0x3061e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3061E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E0u;
        // 0x3061e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061e0) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x3061E8u;
label_3061e8:
    // 0x3061e8: 0xc088edc  jal         func_223B70
label_3061ec:
    if (ctx->pc == 0x3061ECu) {
        ctx->pc = 0x3061ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E8u;
        // 0x3061ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061F0u;
        goto label_3061f0;
    }
    ctx->pc = 0x3061E8u;
    SET_GPR_U32(ctx, 31, 0x3061F0u);
    ctx->pc = 0x3061ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061E8u;
    // 0x3061ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x3061E8u, 0x3061F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061F0u;
label_3061f0:
    // 0x3061f0: 0x10530067  beq         $v0, $s3, . + 4 + (0x67 << 2)
label_3061f4:
    if (ctx->pc == 0x3061F4u) {
        ctx->pc = 0x3061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F0u;
        // 0x3061f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061F8u;
        goto label_3061f8;
    }
    ctx->pc = 0x3061F0u;
    {
        const bool branch_taken_0x3061f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F0u;
        // 0x3061f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061f0) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x3061F8u;
label_3061f8:
    // 0x3061f8: 0xc087502  jal         func_21D408
label_3061fc:
    if (ctx->pc == 0x3061FCu) {
        ctx->pc = 0x3061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F8u;
        // 0x3061fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306200u;
        goto label_306200;
    }
    ctx->pc = 0x3061F8u;
    SET_GPR_U32(ctx, 31, 0x306200u);
    ctx->pc = 0x3061FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061F8u;
    // 0x3061fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3061F8u, 0x306200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306200u;
label_306200:
    // 0x306200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x306200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306204:
    // 0x306204: 0x920202e5  lbu         $v0, 0x2E5($s0)
    ctx->pc = 0x306204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 741)));
label_306208:
    // 0x306208: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_30620c:
    if (ctx->pc == 0x30620Cu) {
        ctx->pc = 0x30620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306208u;
        // 0x30620c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306210u;
        goto label_306210;
    }
    ctx->pc = 0x306208u;
    {
        const bool branch_taken_0x306208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306208u;
        // 0x30620c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306208) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x306210u;
label_306210:
    // 0x306210: 0x92020152  lbu         $v0, 0x152($s0)
    ctx->pc = 0x306210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 338)));
label_306214:
    // 0x306214: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_306218:
    if (ctx->pc == 0x306218u) {
        ctx->pc = 0x306218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306214u;
        // 0x306218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30621Cu;
        goto label_30621c;
    }
    ctx->pc = 0x306214u;
    {
        const bool branch_taken_0x306214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306214u;
        // 0x306218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306214) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x30621Cu;
label_30621c:
    // 0x30621c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_306220:
    // 0x306220: 0x8e0402dc  lw          $a0, 0x2DC($s0)
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_306224:
    // 0x306224: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x306224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_306228:
    // 0x306228: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_30622c:
    if (ctx->pc == 0x30622Cu) {
        ctx->pc = 0x30622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306228u;
        // 0x30622c: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306230u;
        goto label_306230;
    }
    ctx->pc = 0x306228u;
    {
        const bool branch_taken_0x306228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306228u;
        // 0x30622c: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306228) {
            ctx->pc = 0x306250u;
            goto label_306250;
        }
    }
    ctx->pc = 0x306230u;
label_306230:
    // 0x306230: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x306230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306234:
    // 0x306234: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_306238:
    if (ctx->pc == 0x306238u) {
        ctx->pc = 0x306238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306234u;
        // 0x306238: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30623Cu;
        goto label_30623c;
    }
    ctx->pc = 0x306234u;
    {
        const bool branch_taken_0x306234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306234) {
            ctx->pc = 0x306238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306234u;
            // 0x306238: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306248u;
            goto label_306248;
        }
    }
    ctx->pc = 0x30623Cu;
label_30623c:
    // 0x30623c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x30623cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_306240:
    // 0x306240: 0xa20002e4  sb          $zero, 0x2E4($s0)
    ctx->pc = 0x306240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 0));
label_306244:
    // 0x306244: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x306244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_306248:
    // 0x306248: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_30624c:
    if (ctx->pc == 0x30624Cu) {
        ctx->pc = 0x30624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306248u;
        // 0x30624c: 0x920202e4  lbu         $v0, 0x2E4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306250u;
        goto label_306250;
    }
    ctx->pc = 0x306248u;
    {
        const bool branch_taken_0x306248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306248) {
            ctx->pc = 0x30624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306248u;
            // 0x30624c: 0x920202e4  lbu         $v0, 0x2E4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30625Cu;
            goto label_30625c;
        }
    }
    ctx->pc = 0x306250u;
label_306250:
    // 0x306250: 0x24622710  addiu       $v0, $v1, 0x2710
    ctx->pc = 0x306250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_306254:
    // 0x306254: 0x1000004d  b           . + 4 + (0x4D << 2)
label_306258:
    if (ctx->pc == 0x306258u) {
        ctx->pc = 0x306258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306254u;
        // 0x306258: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30625Cu;
        goto label_30625c;
    }
    ctx->pc = 0x306254u;
    {
        const bool branch_taken_0x306254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306254u;
        // 0x306258: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306254) {
            ctx->pc = 0x30638Cu;
            goto label_30638c;
        }
    }
    ctx->pc = 0x30625Cu;
label_30625c:
    // 0x30625c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306260:
    // 0x306260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x306260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_306264:
    // 0x306264: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x306264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_306268:
    // 0x306268: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_30626c:
    if (ctx->pc == 0x30626Cu) {
        ctx->pc = 0x30626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306268u;
        // 0x30626c: 0xa20202e4  sb          $v0, 0x2E4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306270u;
        goto label_306270;
    }
    ctx->pc = 0x306268u;
    {
        const bool branch_taken_0x306268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306268u;
        // 0x30626c: 0xa20202e4  sb          $v0, 0x2E4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306268) {
            ctx->pc = 0x30627Cu;
            goto label_30627c;
        }
    }
    ctx->pc = 0x306270u;
label_306270:
    // 0x306270: 0x90a202e4  lbu         $v0, 0x2E4($a1)
    ctx->pc = 0x306270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 740)));
label_306274:
    // 0x306274: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_306278:
    if (ctx->pc == 0x306278u) {
        ctx->pc = 0x306278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306274u;
        // 0x306278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30627Cu;
        goto label_30627c;
    }
    ctx->pc = 0x306274u;
    {
        const bool branch_taken_0x306274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306274u;
        // 0x306278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306274) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x30627Cu;
label_30627c:
    // 0x30627c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x30627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_306280:
    // 0x306280: 0xa20002e4  sb          $zero, 0x2E4($s0)
    ctx->pc = 0x306280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 0));
label_306284:
    // 0x306284: 0x925103ac  lbu         $s1, 0x3AC($s2)
    ctx->pc = 0x306284u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_306288:
    // 0x306288: 0x5633001c  bnel        $s1, $s3, . + 4 + (0x1C << 2)
label_30628c:
    if (ctx->pc == 0x30628Cu) {
        ctx->pc = 0x30628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306288u;
        // 0x30628c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306290u;
        goto label_306290;
    }
    ctx->pc = 0x306288u;
    {
        const bool branch_taken_0x306288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x306288) {
            ctx->pc = 0x30628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306288u;
            // 0x30628c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062FCu;
            goto label_3062fc;
        }
    }
    ctx->pc = 0x306290u;
label_306290:
    // 0x306290: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x306290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_306294:
    // 0x306294: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x306294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_306298:
    // 0x306298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30629c:
    // 0x30629c: 0x9064041a  lbu         $a0, 0x41A($v1)
    ctx->pc = 0x30629cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1050)));
label_3062a0:
    // 0x3062a0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3062a4:
    if (ctx->pc == 0x3062A4u) {
        ctx->pc = 0x3062A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062A0u;
        // 0x3062a4: 0x824301b0  lb          $v1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062A8u;
        goto label_3062a8;
    }
    ctx->pc = 0x3062A0u;
    {
        const bool branch_taken_0x3062a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3062a0) {
            ctx->pc = 0x3062A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062A0u;
            // 0x3062a4: 0x824301b0  lb          $v1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062D0u;
            goto label_3062d0;
        }
    }
    ctx->pc = 0x3062A8u;
label_3062a8:
    // 0x3062a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3062ac:
    // 0x3062ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3062b0:
    // 0x3062b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3062b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3062b4:
    // 0x3062b4: 0x40f809  jalr        $v0
label_3062b8:
    if (ctx->pc == 0x3062B8u) {
        ctx->pc = 0x3062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B4u;
        // 0x3062b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062BCu;
        goto label_3062bc;
    }
    ctx->pc = 0x3062B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3062BCu);
        ctx->pc = 0x3062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B4u;
        // 0x3062b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3062B4u, 0x3062BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3062BCu;
label_3062bc:
    // 0x3062bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3062bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3062c0:
    // 0x3062c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3062c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3062c4:
    // 0x3062c4: 0xc107720  jal         func_41DC80
label_3062c8:
    if (ctx->pc == 0x3062C8u) {
        ctx->pc = 0x3062C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062C4u;
        // 0x3062c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062CCu;
        goto label_3062cc;
    }
    ctx->pc = 0x3062C4u;
    SET_GPR_U32(ctx, 31, 0x3062CCu);
    ctx->pc = 0x3062C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062C4u;
    // 0x3062c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DC80u, 0x3062C4u, 0x3062CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062CCu;
label_3062cc:
    // 0x3062cc: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x3062ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_3062d0:
    // 0x3062d0: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x3062d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3062d4:
    // 0x3062d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3062d8:
    // 0x3062d8: 0xa051042e  sb          $s1, 0x42E($v0)
    ctx->pc = 0x3062d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1070), (uint8_t)GPR_U32(ctx, 17));
label_3062dc:
    // 0x3062dc: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x3062dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_3062e0:
    // 0x3062e0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3062e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3062e4:
    // 0x3062e4: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x3062e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3062e8:
    // 0x3062e8: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_3062ec:
    if (ctx->pc == 0x3062ECu) {
        ctx->pc = 0x3062ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E8u;
        // 0x3062ec: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062F0u;
        goto label_3062f0;
    }
    ctx->pc = 0x3062E8u;
    {
        const bool branch_taken_0x3062e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3062e8) {
            ctx->pc = 0x3062ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062E8u;
            // 0x3062ec: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062FCu;
            goto label_3062fc;
        }
    }
    ctx->pc = 0x3062F0u;
label_3062f0:
    // 0x3062f0: 0xc0c19f6  jal         func_3067D8
label_3062f4:
    if (ctx->pc == 0x3062F4u) {
        ctx->pc = 0x3062F8u;
        goto label_3062f8;
    }
    ctx->pc = 0x3062F0u;
    SET_GPR_U32(ctx, 31, 0x3062F8u);
    ctx->pc = 0x3067D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3067D8u, 0x3062F0u, 0x3062F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062F8u;
label_3062f8:
    // 0x3062f8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x3062f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_3062fc:
    // 0x3062fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_306300:
    if (ctx->pc == 0x306300u) {
        ctx->pc = 0x306300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062FCu;
        // 0x306300: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306304u;
        goto label_306304;
    }
    ctx->pc = 0x3062FCu;
    {
        const bool branch_taken_0x3062fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062FCu;
        // 0x306300: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062fc) {
            ctx->pc = 0x306310u;
            goto label_306310;
        }
    }
    ctx->pc = 0x306304u;
label_306304:
    // 0x306304: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x306304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_306308:
    // 0x306308: 0x10000002  b           . + 4 + (0x2 << 2)
label_30630c:
    if (ctx->pc == 0x30630Cu) {
        ctx->pc = 0x30630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306308u;
        // 0x30630c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306310u;
        goto label_306310;
    }
    ctx->pc = 0x306308u;
    {
        const bool branch_taken_0x306308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306308u;
        // 0x30630c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306308) {
            ctx->pc = 0x306314u;
            goto label_306314;
        }
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306314:
    // 0x306314: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_306318:
    if (ctx->pc == 0x306318u) {
        ctx->pc = 0x306318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306314u;
        // 0x306318: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30631Cu;
        goto label_30631c;
    }
    ctx->pc = 0x306314u;
    {
        const bool branch_taken_0x306314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x306314) {
            ctx->pc = 0x306318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306314u;
            // 0x306318: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306348u;
            goto label_306348;
        }
    }
    ctx->pc = 0x30631Cu;
label_30631c:
    // 0x30631c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_306320:
    // 0x306320: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x306320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_306324:
    // 0x306324: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x306324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_306328:
    // 0x306328: 0x40f809  jalr        $v0
label_30632c:
    if (ctx->pc == 0x30632Cu) {
        ctx->pc = 0x30632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306328u;
        // 0x30632c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306330u;
        goto label_306330;
    }
    ctx->pc = 0x306328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306330u);
        ctx->pc = 0x30632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306328u;
        // 0x30632c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306328u, 0x306330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306330u;
label_306330:
    // 0x306330: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_306334:
    // 0x306334: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_306338:
    if (ctx->pc == 0x306338u) {
        ctx->pc = 0x306338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306334u;
        // 0x306338: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30633Cu;
        goto label_30633c;
    }
    ctx->pc = 0x306334u;
    {
        const bool branch_taken_0x306334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306334) {
            ctx->pc = 0x306338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306334u;
            // 0x306338: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306348u;
            goto label_306348;
        }
    }
    ctx->pc = 0x30633Cu;
label_30633c:
    // 0x30633c: 0xc0a35f6  jal         func_28D7D8
label_306340:
    if (ctx->pc == 0x306340u) {
        ctx->pc = 0x306340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30633Cu;
        // 0x306340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306344u;
        goto label_306344;
    }
    ctx->pc = 0x30633Cu;
    SET_GPR_U32(ctx, 31, 0x306344u);
    ctx->pc = 0x306340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30633Cu;
    // 0x306340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x30633Cu, 0x306344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306344u;
label_306344:
    // 0x306344: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x306344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306348:
    // 0x306348: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x306348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30634c:
    // 0x30634c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30634cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306350:
    // 0x306350: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_306354:
    // 0x306354: 0x40f809  jalr        $v0
label_306358:
    if (ctx->pc == 0x306358u) {
        ctx->pc = 0x306358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306354u;
        // 0x306358: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30635Cu;
        goto label_30635c;
    }
    ctx->pc = 0x306354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30635Cu);
        ctx->pc = 0x306358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306354u;
        // 0x306358: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306354u, 0x30635Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30635Cu;
label_30635c:
    // 0x30635c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306360:
    // 0x306360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306364:
    // 0x306364: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x306364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306368:
    // 0x306368: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30636c:
    // 0x30636c: 0x40f809  jalr        $v0
label_306370:
    if (ctx->pc == 0x306370u) {
        ctx->pc = 0x306370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30636Cu;
        // 0x306370: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306374u;
        goto label_306374;
    }
    ctx->pc = 0x30636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306374u);
        ctx->pc = 0x306370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30636Cu;
        // 0x306370: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30636Cu, 0x306374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306374u;
label_306374:
    // 0x306374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x306374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306378:
    // 0x306378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30637c:
    // 0x30637c: 0xc0abb68  jal         func_2AEDA0
label_306380:
    if (ctx->pc == 0x306380u) {
        ctx->pc = 0x306380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30637Cu;
        // 0x306380: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306384u;
        goto label_306384;
    }
    ctx->pc = 0x30637Cu;
    SET_GPR_U32(ctx, 31, 0x306384u);
    ctx->pc = 0x306380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30637Cu;
    // 0x306380: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDA0u, 0x30637Cu, 0x306384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306384u;
label_306384:
    // 0x306384: 0x10000002  b           . + 4 + (0x2 << 2)
label_306388:
    if (ctx->pc == 0x306388u) {
        ctx->pc = 0x306388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306384u;
        // 0x306388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30638Cu;
        goto label_30638c;
    }
    ctx->pc = 0x306384u;
    {
        const bool branch_taken_0x306384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306384u;
        // 0x306388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306384) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x30638Cu;
label_30638c:
    // 0x30638c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30638cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306390:
    // 0x306390: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x306390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_306394:
    // 0x306394: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x306394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_306398:
    // 0x306398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x306398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30639c:
    // 0x30639c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30639cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3063a0:
    // 0x3063a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3063a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3063a4:
    // 0x3063a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3063a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3063a8:
    // 0x3063a8: 0x3e00008  jr          $ra
label_3063ac:
    if (ctx->pc == 0x3063ACu) {
        ctx->pc = 0x3063ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063A8u;
        // 0x3063ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063B0u;
        goto label_fallthrough_0x3063a8;
    }
    ctx->pc = 0x3063A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3063ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063A8u;
        // 0x3063ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3063A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3063a8:
    ctx->pc = 0x3063B0u;
}
