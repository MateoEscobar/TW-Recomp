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

// Function: sub_00278210
// Address: 0x278210 - 0x2783a8
void sub_00278210_0x278210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278210_0x278210");
#endif

    switch (ctx->pc) {
        case 0x278210u: goto label_278210;
        case 0x278214u: goto label_278214;
        case 0x278218u: goto label_278218;
        case 0x27821cu: goto label_27821c;
        case 0x278220u: goto label_278220;
        case 0x278224u: goto label_278224;
        case 0x278228u: goto label_278228;
        case 0x27822cu: goto label_27822c;
        case 0x278230u: goto label_278230;
        case 0x278234u: goto label_278234;
        case 0x278238u: goto label_278238;
        case 0x27823cu: goto label_27823c;
        case 0x278240u: goto label_278240;
        case 0x278244u: goto label_278244;
        case 0x278248u: goto label_278248;
        case 0x27824cu: goto label_27824c;
        case 0x278250u: goto label_278250;
        case 0x278254u: goto label_278254;
        case 0x278258u: goto label_278258;
        case 0x27825cu: goto label_27825c;
        case 0x278260u: goto label_278260;
        case 0x278264u: goto label_278264;
        case 0x278268u: goto label_278268;
        case 0x27826cu: goto label_27826c;
        case 0x278270u: goto label_278270;
        case 0x278274u: goto label_278274;
        case 0x278278u: goto label_278278;
        case 0x27827cu: goto label_27827c;
        case 0x278280u: goto label_278280;
        case 0x278284u: goto label_278284;
        case 0x278288u: goto label_278288;
        case 0x27828cu: goto label_27828c;
        case 0x278290u: goto label_278290;
        case 0x278294u: goto label_278294;
        case 0x278298u: goto label_278298;
        case 0x27829cu: goto label_27829c;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782a8u: goto label_2782a8;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b0u: goto label_2782b0;
        case 0x2782b4u: goto label_2782b4;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782c0u: goto label_2782c0;
        case 0x2782c4u: goto label_2782c4;
        case 0x2782c8u: goto label_2782c8;
        case 0x2782ccu: goto label_2782cc;
        case 0x2782d0u: goto label_2782d0;
        case 0x2782d4u: goto label_2782d4;
        case 0x2782d8u: goto label_2782d8;
        case 0x2782dcu: goto label_2782dc;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782e4u: goto label_2782e4;
        case 0x2782e8u: goto label_2782e8;
        case 0x2782ecu: goto label_2782ec;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f4u: goto label_2782f4;
        case 0x2782f8u: goto label_2782f8;
        case 0x2782fcu: goto label_2782fc;
        case 0x278300u: goto label_278300;
        case 0x278304u: goto label_278304;
        case 0x278308u: goto label_278308;
        case 0x27830cu: goto label_27830c;
        case 0x278310u: goto label_278310;
        case 0x278314u: goto label_278314;
        case 0x278318u: goto label_278318;
        case 0x27831cu: goto label_27831c;
        case 0x278320u: goto label_278320;
        case 0x278324u: goto label_278324;
        case 0x278328u: goto label_278328;
        case 0x27832cu: goto label_27832c;
        case 0x278330u: goto label_278330;
        case 0x278334u: goto label_278334;
        case 0x278338u: goto label_278338;
        case 0x27833cu: goto label_27833c;
        case 0x278340u: goto label_278340;
        case 0x278344u: goto label_278344;
        case 0x278348u: goto label_278348;
        case 0x27834cu: goto label_27834c;
        case 0x278350u: goto label_278350;
        case 0x278354u: goto label_278354;
        case 0x278358u: goto label_278358;
        case 0x27835cu: goto label_27835c;
        case 0x278360u: goto label_278360;
        case 0x278364u: goto label_278364;
        case 0x278368u: goto label_278368;
        case 0x27836cu: goto label_27836c;
        case 0x278370u: goto label_278370;
        case 0x278374u: goto label_278374;
        case 0x278378u: goto label_278378;
        case 0x27837cu: goto label_27837c;
        case 0x278380u: goto label_278380;
        case 0x278384u: goto label_278384;
        case 0x278388u: goto label_278388;
        case 0x27838cu: goto label_27838c;
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        default: break;
    }

    ctx->pc = 0x278210u;

label_278210:
    // 0x278210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x278210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_278214:
    // 0x278214: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x278214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_278218:
    // 0x278218: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x278218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_27821c:
    // 0x27821c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_278220:
    // 0x278220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_278224:
    // 0x278224: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x278224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_278228:
    // 0x278228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27822c:
    // 0x27822c: 0xc087c16  jal         func_21F058
label_278230:
    if (ctx->pc == 0x278230u) {
        ctx->pc = 0x278230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27822Cu;
        // 0x278230: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278234u;
        goto label_278234;
    }
    ctx->pc = 0x27822Cu;
    SET_GPR_U32(ctx, 31, 0x278234u);
    ctx->pc = 0x278230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27822Cu;
    // 0x278230: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x27822Cu, 0x278234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278234u;
label_278234:
    // 0x278234: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x278234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_278238:
    // 0x278238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x278238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27823c:
    // 0x27823c: 0xc0e4060  jal         func_390180
label_278240:
    if (ctx->pc == 0x278240u) {
        ctx->pc = 0x278240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27823Cu;
        // 0x278240: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278244u;
        goto label_278244;
    }
    ctx->pc = 0x27823Cu;
    SET_GPR_U32(ctx, 31, 0x278244u);
    ctx->pc = 0x278240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27823Cu;
    // 0x278240: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x27823Cu, 0x278244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278244u;
label_278244:
    // 0x278244: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_278248:
    if (ctx->pc == 0x278248u) {
        ctx->pc = 0x278248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278244u;
        // 0x278248: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27824Cu;
        goto label_27824c;
    }
    ctx->pc = 0x278244u;
    {
        const bool branch_taken_0x278244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278244u;
        // 0x278248: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278244) {
            ctx->pc = 0x278388u;
            goto label_278388;
        }
    }
    ctx->pc = 0x27824Cu;
label_27824c:
    // 0x27824c: 0xc089000  jal         func_224000
label_278250:
    if (ctx->pc == 0x278250u) {
        ctx->pc = 0x278250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27824Cu;
        // 0x278250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278254u;
        goto label_278254;
    }
    ctx->pc = 0x27824Cu;
    SET_GPR_U32(ctx, 31, 0x278254u);
    ctx->pc = 0x278250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27824Cu;
    // 0x278250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x27824Cu, 0x278254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278254u;
label_278254:
    // 0x278254: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_278258:
    if (ctx->pc == 0x278258u) {
        ctx->pc = 0x278258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278254u;
        // 0x278258: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27825Cu;
        goto label_27825c;
    }
    ctx->pc = 0x278254u;
    {
        const bool branch_taken_0x278254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278254) {
            ctx->pc = 0x278258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278254u;
            // 0x278258: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278268u;
            goto label_278268;
        }
    }
    ctx->pc = 0x27825Cu;
label_27825c:
    // 0x27825c: 0xc095fce  jal         func_257F38
label_278260:
    if (ctx->pc == 0x278260u) {
        ctx->pc = 0x278260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27825Cu;
        // 0x278260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278264u;
        goto label_278264;
    }
    ctx->pc = 0x27825Cu;
    SET_GPR_U32(ctx, 31, 0x278264u);
    ctx->pc = 0x278260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27825Cu;
    // 0x278260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x27825Cu, 0x278264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278264u;
label_278264:
    // 0x278264: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_278268:
    // 0x278268: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x278268u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_27826c:
    // 0x27826c: 0x2610e758  addiu       $s0, $s0, -0x18A8
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960984));
label_278270:
    // 0x278270: 0xc041532  jal         func_1054C8
label_278274:
    if (ctx->pc == 0x278274u) {
        ctx->pc = 0x278274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278270u;
        // 0x278274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278278u;
        goto label_278278;
    }
    ctx->pc = 0x278270u;
    SET_GPR_U32(ctx, 31, 0x278278u);
    ctx->pc = 0x278274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278270u;
    // 0x278274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278270u, 0x278278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278278u;
label_278278:
    // 0x278278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27827c:
    // 0x27827c: 0xc041532  jal         func_1054C8
label_278280:
    if (ctx->pc == 0x278280u) {
        ctx->pc = 0x278280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27827Cu;
        // 0x278280: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278284u;
        goto label_278284;
    }
    ctx->pc = 0x27827Cu;
    SET_GPR_U32(ctx, 31, 0x278284u);
    ctx->pc = 0x278280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27827Cu;
    // 0x278280: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27827Cu, 0x278284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278284u;
label_278284:
    // 0x278284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278288:
    // 0x278288: 0xc041532  jal         func_1054C8
label_27828c:
    if (ctx->pc == 0x27828Cu) {
        ctx->pc = 0x27828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278288u;
        // 0x27828c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278290u;
        goto label_278290;
    }
    ctx->pc = 0x278288u;
    SET_GPR_U32(ctx, 31, 0x278290u);
    ctx->pc = 0x27828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278288u;
    // 0x27828c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278288u, 0x278290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278290u;
label_278290:
    // 0x278290: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_278294:
    if (ctx->pc == 0x278294u) {
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278298u;
        goto label_278298;
    }
    ctx->pc = 0x278290u;
    {
        const bool branch_taken_0x278290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278290) {
            ctx->pc = 0x2782C8u;
            goto label_2782c8;
        }
    }
    ctx->pc = 0x278298u;
label_278298:
    // 0x278298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27829c:
    // 0x27829c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27829cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2782a0:
    // 0x2782a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2782a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2782a4:
    // 0x2782a4: 0x40f809  jalr        $v0
label_2782a8:
    if (ctx->pc == 0x2782A8u) {
        ctx->pc = 0x2782A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782A4u;
        // 0x2782a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782ACu;
        goto label_2782ac;
    }
    ctx->pc = 0x2782A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2782ACu);
        ctx->pc = 0x2782A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782A4u;
        // 0x2782a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2782A4u, 0x2782ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2782ACu;
label_2782ac:
    // 0x2782ac: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x2782acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
label_2782b0:
    // 0x2782b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2782b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2782b4:
    // 0x2782b4: 0x25087f28  addiu       $t0, $t0, 0x7F28
    ctx->pc = 0x2782b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32552));
label_2782b8:
    // 0x2782b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2782b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2782bc:
    // 0x2782bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2782bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2782c0:
    // 0x2782c0: 0xc04159e  jal         func_105678
label_2782c4:
    if (ctx->pc == 0x2782C4u) {
        ctx->pc = 0x2782C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782C0u;
        // 0x2782c4: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782C8u;
        goto label_2782c8;
    }
    ctx->pc = 0x2782C0u;
    SET_GPR_U32(ctx, 31, 0x2782C8u);
    ctx->pc = 0x2782C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782C0u;
    // 0x2782c4: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2782C0u, 0x2782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782C8u;
label_2782c8:
    // 0x2782c8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_2782cc:
    if (ctx->pc == 0x2782CCu) {
        ctx->pc = 0x2782D0u;
        goto label_2782d0;
    }
    ctx->pc = 0x2782C8u;
    {
        const bool branch_taken_0x2782c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2782c8) {
            ctx->pc = 0x27830Cu;
            goto label_27830c;
        }
    }
    ctx->pc = 0x2782D0u;
label_2782d0:
    // 0x2782d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2782d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2782d4:
    // 0x2782d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2782d8:
    // 0x2782d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2782d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2782dc:
    // 0x2782dc: 0x40f809  jalr        $v0
label_2782e0:
    if (ctx->pc == 0x2782E0u) {
        ctx->pc = 0x2782E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782DCu;
        // 0x2782e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782E4u;
        goto label_2782e4;
    }
    ctx->pc = 0x2782DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2782E4u);
        ctx->pc = 0x2782E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782DCu;
        // 0x2782e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2782DCu, 0x2782E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2782E4u;
label_2782e4:
    // 0x2782e4: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x2782e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_2782e8:
    // 0x2782e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2782e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2782ec:
    // 0x2782ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2782ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2782f0:
    // 0x2782f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2782f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2782f4:
    // 0x2782f4: 0x254a7f28  addiu       $t2, $t2, 0x7F28
    ctx->pc = 0x2782f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32552));
label_2782f8:
    // 0x2782f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2782f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2782fc:
    // 0x2782fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2782fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278300:
    // 0x278300: 0x24060151  addiu       $a2, $zero, 0x151
    ctx->pc = 0x278300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
label_278304:
    // 0x278304: 0xc041664  jal         func_105990
label_278308:
    if (ctx->pc == 0x278308u) {
        ctx->pc = 0x278308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278304u;
        // 0x278308: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27830Cu;
        goto label_27830c;
    }
    ctx->pc = 0x278304u;
    SET_GPR_U32(ctx, 31, 0x27830Cu);
    ctx->pc = 0x278308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278304u;
    // 0x278308: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x278304u, 0x27830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27830Cu;
label_27830c:
    // 0x27830c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_278310:
    if (ctx->pc == 0x278310u) {
        ctx->pc = 0x278310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27830Cu;
        // 0x278310: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278314u;
        goto label_278314;
    }
    ctx->pc = 0x27830Cu;
    {
        const bool branch_taken_0x27830c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x278310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27830Cu;
        // 0x278310: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27830c) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x278314u;
label_278314:
    // 0x278314: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278318:
    // 0x278318: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27831c:
    // 0x27831c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278320:
    // 0x278320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x278320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_278324:
    // 0x278324: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278328:
    // 0x278328: 0xc041b20  jal         func_106C80
label_27832c:
    if (ctx->pc == 0x27832Cu) {
        ctx->pc = 0x27832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278328u;
        // 0x27832c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278330u;
        goto label_278330;
    }
    ctx->pc = 0x278328u;
    SET_GPR_U32(ctx, 31, 0x278330u);
    ctx->pc = 0x27832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278328u;
    // 0x27832c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x278328u, 0x278330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278330u;
label_278330:
    // 0x278330: 0xc05d484  jal         func_175210
label_278334:
    if (ctx->pc == 0x278334u) {
        ctx->pc = 0x278334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278330u;
        // 0x278334: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278338u;
        goto label_278338;
    }
    ctx->pc = 0x278330u;
    SET_GPR_U32(ctx, 31, 0x278338u);
    ctx->pc = 0x278334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278330u;
    // 0x278334: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x278330u, 0x278338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278338u;
label_278338:
    // 0x278338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27833c:
    // 0x27833c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x27833cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_278340:
    // 0x278340: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x278340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_278344:
    // 0x278344: 0xa0f809  jalr        $a1
label_278348:
    if (ctx->pc == 0x278348u) {
        ctx->pc = 0x278348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278344u;
        // 0x278348: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27834Cu;
        goto label_27834c;
    }
    ctx->pc = 0x278344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x27834Cu);
        ctx->pc = 0x278348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278344u;
        // 0x278348: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278344u, 0x27834Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27834Cu;
label_27834c:
    // 0x27834c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278350:
    // 0x278350: 0xc087016  jal         func_21C058
label_278354:
    if (ctx->pc == 0x278354u) {
        ctx->pc = 0x278354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278350u;
        // 0x278354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278358u;
        goto label_278358;
    }
    ctx->pc = 0x278350u;
    SET_GPR_U32(ctx, 31, 0x278358u);
    ctx->pc = 0x278354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278350u;
    // 0x278354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x278350u, 0x278358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278358u;
label_278358:
    // 0x278358: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x278358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27835c:
    // 0x27835c: 0xc05d53a  jal         func_1754E8
label_278360:
    if (ctx->pc == 0x278360u) {
        ctx->pc = 0x278360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27835Cu;
        // 0x278360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278364u;
        goto label_278364;
    }
    ctx->pc = 0x27835Cu;
    SET_GPR_U32(ctx, 31, 0x278364u);
    ctx->pc = 0x278360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27835Cu;
    // 0x278360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x27835Cu, 0x278364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278364u;
label_278364:
    // 0x278364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278368:
    // 0x278368: 0xc05d4f6  jal         func_1753D8
label_27836c:
    if (ctx->pc == 0x27836Cu) {
        ctx->pc = 0x27836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278368u;
        // 0x27836c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278370u;
        goto label_278370;
    }
    ctx->pc = 0x278368u;
    SET_GPR_U32(ctx, 31, 0x278370u);
    ctx->pc = 0x27836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278368u;
    // 0x27836c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x278368u, 0x278370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278370u;
label_278370:
    // 0x278370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278374:
    // 0x278374: 0xc089990  jal         func_226640
label_278378:
    if (ctx->pc == 0x278378u) {
        ctx->pc = 0x278378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278374u;
        // 0x278378: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27837Cu;
        goto label_27837c;
    }
    ctx->pc = 0x278374u;
    SET_GPR_U32(ctx, 31, 0x27837Cu);
    ctx->pc = 0x278378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278374u;
    // 0x278378: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x278374u, 0x27837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27837Cu;
label_27837c:
    // 0x27837c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_278380:
    // 0x278380: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x278380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_278384:
    // 0x278384: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x278384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_278388:
    // 0x278388: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x278388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27838c:
    // 0x27838c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27838cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278390:
    // 0x278390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278394:
    // 0x278394: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x278394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278398:
    // 0x278398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27839c:
    // 0x27839c: 0x3e00008  jr          $ra
label_2783a0:
    if (ctx->pc == 0x2783A0u) {
        ctx->pc = 0x2783A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27839Cu;
        // 0x2783a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783A4u;
        goto label_2783a4;
    }
    ctx->pc = 0x27839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2783A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27839Cu;
        // 0x2783a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2783A4u;
label_2783a4:
    // 0x2783a4: 0x0  nop
    ctx->pc = 0x2783a4u;
    // NOP
    ctx->pc = 0x2783a8u;
}
