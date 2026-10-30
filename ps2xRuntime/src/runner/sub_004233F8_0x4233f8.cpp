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

// Function: sub_004233F8
// Address: 0x4233f8 - 0x4235a8
void sub_004233F8_0x4233f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004233F8_0x4233f8");
#endif

    switch (ctx->pc) {
        case 0x4233f8u: goto label_4233f8;
        case 0x4233fcu: goto label_4233fc;
        case 0x423400u: goto label_423400;
        case 0x423404u: goto label_423404;
        case 0x423408u: goto label_423408;
        case 0x42340cu: goto label_42340c;
        case 0x423410u: goto label_423410;
        case 0x423414u: goto label_423414;
        case 0x423418u: goto label_423418;
        case 0x42341cu: goto label_42341c;
        case 0x423420u: goto label_423420;
        case 0x423424u: goto label_423424;
        case 0x423428u: goto label_423428;
        case 0x42342cu: goto label_42342c;
        case 0x423430u: goto label_423430;
        case 0x423434u: goto label_423434;
        case 0x423438u: goto label_423438;
        case 0x42343cu: goto label_42343c;
        case 0x423440u: goto label_423440;
        case 0x423444u: goto label_423444;
        case 0x423448u: goto label_423448;
        case 0x42344cu: goto label_42344c;
        case 0x423450u: goto label_423450;
        case 0x423454u: goto label_423454;
        case 0x423458u: goto label_423458;
        case 0x42345cu: goto label_42345c;
        case 0x423460u: goto label_423460;
        case 0x423464u: goto label_423464;
        case 0x423468u: goto label_423468;
        case 0x42346cu: goto label_42346c;
        case 0x423470u: goto label_423470;
        case 0x423474u: goto label_423474;
        case 0x423478u: goto label_423478;
        case 0x42347cu: goto label_42347c;
        case 0x423480u: goto label_423480;
        case 0x423484u: goto label_423484;
        case 0x423488u: goto label_423488;
        case 0x42348cu: goto label_42348c;
        case 0x423490u: goto label_423490;
        case 0x423494u: goto label_423494;
        case 0x423498u: goto label_423498;
        case 0x42349cu: goto label_42349c;
        case 0x4234a0u: goto label_4234a0;
        case 0x4234a4u: goto label_4234a4;
        case 0x4234a8u: goto label_4234a8;
        case 0x4234acu: goto label_4234ac;
        case 0x4234b0u: goto label_4234b0;
        case 0x4234b4u: goto label_4234b4;
        case 0x4234b8u: goto label_4234b8;
        case 0x4234bcu: goto label_4234bc;
        case 0x4234c0u: goto label_4234c0;
        case 0x4234c4u: goto label_4234c4;
        case 0x4234c8u: goto label_4234c8;
        case 0x4234ccu: goto label_4234cc;
        case 0x4234d0u: goto label_4234d0;
        case 0x4234d4u: goto label_4234d4;
        case 0x4234d8u: goto label_4234d8;
        case 0x4234dcu: goto label_4234dc;
        case 0x4234e0u: goto label_4234e0;
        case 0x4234e4u: goto label_4234e4;
        case 0x4234e8u: goto label_4234e8;
        case 0x4234ecu: goto label_4234ec;
        case 0x4234f0u: goto label_4234f0;
        case 0x4234f4u: goto label_4234f4;
        case 0x4234f8u: goto label_4234f8;
        case 0x4234fcu: goto label_4234fc;
        case 0x423500u: goto label_423500;
        case 0x423504u: goto label_423504;
        case 0x423508u: goto label_423508;
        case 0x42350cu: goto label_42350c;
        case 0x423510u: goto label_423510;
        case 0x423514u: goto label_423514;
        case 0x423518u: goto label_423518;
        case 0x42351cu: goto label_42351c;
        case 0x423520u: goto label_423520;
        case 0x423524u: goto label_423524;
        case 0x423528u: goto label_423528;
        case 0x42352cu: goto label_42352c;
        case 0x423530u: goto label_423530;
        case 0x423534u: goto label_423534;
        case 0x423538u: goto label_423538;
        case 0x42353cu: goto label_42353c;
        case 0x423540u: goto label_423540;
        case 0x423544u: goto label_423544;
        case 0x423548u: goto label_423548;
        case 0x42354cu: goto label_42354c;
        case 0x423550u: goto label_423550;
        case 0x423554u: goto label_423554;
        case 0x423558u: goto label_423558;
        case 0x42355cu: goto label_42355c;
        case 0x423560u: goto label_423560;
        case 0x423564u: goto label_423564;
        case 0x423568u: goto label_423568;
        case 0x42356cu: goto label_42356c;
        case 0x423570u: goto label_423570;
        case 0x423574u: goto label_423574;
        case 0x423578u: goto label_423578;
        case 0x42357cu: goto label_42357c;
        case 0x423580u: goto label_423580;
        case 0x423584u: goto label_423584;
        case 0x423588u: goto label_423588;
        case 0x42358cu: goto label_42358c;
        case 0x423590u: goto label_423590;
        case 0x423594u: goto label_423594;
        case 0x423598u: goto label_423598;
        case 0x42359cu: goto label_42359c;
        case 0x4235a0u: goto label_4235a0;
        case 0x4235a4u: goto label_4235a4;
        default: break;
    }

    ctx->pc = 0x4233f8u;

label_4233f8:
    // 0x4233f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4233f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4233fc:
    // 0x4233fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4233fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_423400:
    // 0x423400: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x423400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_423404:
    // 0x423404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x423404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423408:
    // 0x423408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x423408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42340c:
    // 0x42340c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x42340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_423410:
    // 0x423410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_423414:
    // 0x423414: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x423414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_423418:
    // 0x423418: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_42341c:
    if (ctx->pc == 0x42341Cu) {
        ctx->pc = 0x42341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423418u;
        // 0x42341c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423420u;
        goto label_423420;
    }
    ctx->pc = 0x423418u;
    {
        const bool branch_taken_0x423418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423418u;
        // 0x42341c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423418) {
            ctx->pc = 0x423588u;
            goto label_423588;
        }
    }
    ctx->pc = 0x423420u;
label_423420:
    // 0x423420: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x423420u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_423424:
    // 0x423424: 0x8e46b734  lw          $a2, -0x48CC($s2)
    ctx->pc = 0x423424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_423428:
    // 0x423428: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x423428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42342c:
    // 0x42342c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x42342cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_423430:
    // 0x423430: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x423430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_423434:
    // 0x423434: 0x40f809  jalr        $v0
label_423438:
    if (ctx->pc == 0x423438u) {
        ctx->pc = 0x423438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423434u;
        // 0x423438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42343Cu;
        goto label_42343c;
    }
    ctx->pc = 0x423434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42343Cu);
        ctx->pc = 0x423438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423434u;
        // 0x423438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423434u, 0x42343Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42343Cu;
label_42343c:
    // 0x42343c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42343cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_423440:
    // 0x423440: 0x1a000051  blez        $s0, . + 4 + (0x51 << 2)
label_423444:
    if (ctx->pc == 0x423444u) {
        ctx->pc = 0x423444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423440u;
        // 0x423444: 0x8e45b734  lw          $a1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423448u;
        goto label_423448;
    }
    ctx->pc = 0x423440u;
    {
        const bool branch_taken_0x423440 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x423444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423440u;
        // 0x423444: 0x8e45b734  lw          $a1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423440) {
            ctx->pc = 0x423588u;
            goto label_423588;
        }
    }
    ctx->pc = 0x423448u;
label_423448:
    // 0x423448: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x423448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42344c:
    // 0x42344c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x42344cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_423450:
    // 0x423450: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x423450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_423454:
    // 0x423454: 0x40f809  jalr        $v0
label_423458:
    if (ctx->pc == 0x423458u) {
        ctx->pc = 0x423458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423454u;
        // 0x423458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42345Cu;
        goto label_42345c;
    }
    ctx->pc = 0x423454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42345Cu);
        ctx->pc = 0x423458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423454u;
        // 0x423458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423454u, 0x42345Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42345Cu;
label_42345c:
    // 0x42345c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x42345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_423460:
    // 0x423460: 0x102023  negu        $a0, $s0
    ctx->pc = 0x423460u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_423464:
    // 0x423464: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x423464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_423468:
    // 0x423468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x423468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42346c:
    // 0x42346c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x42346cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_423470:
    // 0x423470: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x423470u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_423474:
    // 0x423474: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x423474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423478:
    // 0x423478: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x423478u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
label_42347c:
    // 0x42347c: 0x297c2  srl         $s2, $v0, 31
    ctx->pc = 0x42347cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_423480:
    // 0x423480: 0x92800a  movz        $s0, $a0, $s2
    ctx->pc = 0x423480u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_423484:
    // 0x423484: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x423484u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423488:
    // 0x423488: 0x0  nop
    ctx->pc = 0x423488u;
    // NOP
label_42348c:
    // 0x42348c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42348cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_423490:
    // 0x423490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x423490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_423494:
    // 0x423494: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x423494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_423498:
    // 0x423498: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x423498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_42349c:
    // 0x42349c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4234a0:
    // 0x4234a0: 0x16450003  bne         $s2, $a1, . + 4 + (0x3 << 2)
label_4234a4:
    if (ctx->pc == 0x4234A4u) {
        ctx->pc = 0x4234A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234A0u;
        // 0x4234a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234A8u;
        goto label_4234a8;
    }
    ctx->pc = 0x4234A0u;
    {
        const bool branch_taken_0x4234a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x4234A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234A0u;
        // 0x4234a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4234a0) {
            ctx->pc = 0x4234B0u;
            goto label_4234b0;
        }
    }
    ctx->pc = 0x4234A8u;
label_4234a8:
    // 0x4234a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4234ac:
    if (ctx->pc == 0x4234ACu) {
        ctx->pc = 0x4234ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234A8u;
        // 0x4234ac: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234B0u;
        goto label_4234b0;
    }
    ctx->pc = 0x4234A8u;
    {
        const bool branch_taken_0x4234a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4234ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234A8u;
        // 0x4234ac: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4234a8) {
            ctx->pc = 0x4234B4u;
            goto label_4234b4;
        }
    }
    ctx->pc = 0x4234B0u;
label_4234b0:
    // 0x4234b0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x4234b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4234b4:
    // 0x4234b4: 0x38530001  xori        $s3, $v0, 0x1
    ctx->pc = 0x4234b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4234b8:
    // 0x4234b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4234b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4234bc:
    // 0x4234bc: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
label_4234c0:
    if (ctx->pc == 0x4234C0u) {
        ctx->pc = 0x4234C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234BCu;
        // 0x4234c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234C4u;
        goto label_4234c4;
    }
    ctx->pc = 0x4234BCu;
    {
        const bool branch_taken_0x4234bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4234C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234BCu;
        // 0x4234c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4234bc) {
            ctx->pc = 0x42351Cu;
            goto label_42351c;
        }
    }
    ctx->pc = 0x4234C4u;
label_4234c4:
    // 0x4234c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4234c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4234c8:
    // 0x4234c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4234c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4234cc:
    // 0x4234cc: 0xc108cea  jal         func_4233A8
label_4234d0:
    if (ctx->pc == 0x4234D0u) {
        ctx->pc = 0x4234D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234CCu;
        // 0x4234d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234D4u;
        goto label_4234d4;
    }
    ctx->pc = 0x4234CCu;
    SET_GPR_U32(ctx, 31, 0x4234D4u);
    ctx->pc = 0x4234D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4234CCu;
    // 0x4234d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4233A8u, 0x4234CCu, 0x4234D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4234D4u;
label_4234d4:
    // 0x4234d4: 0x82220020  lb          $v0, 0x20($s1)
    ctx->pc = 0x4234d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_4234d8:
    // 0x4234d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4234dc:
    if (ctx->pc == 0x4234DCu) {
        ctx->pc = 0x4234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234D8u;
        // 0x4234dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234E0u;
        goto label_4234e0;
    }
    ctx->pc = 0x4234D8u;
    {
        const bool branch_taken_0x4234d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234D8u;
        // 0x4234dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4234d8) {
            ctx->pc = 0x42351Cu;
            goto label_42351c;
        }
    }
    ctx->pc = 0x4234E0u;
label_4234e0:
    // 0x4234e0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4234e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4234e4:
    // 0x4234e4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x4234e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_4234e8:
    // 0x4234e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4234ec:
    // 0x4234ec: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x4234ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_4234f0:
    // 0x4234f0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x4234f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_4234f4:
    // 0x4234f4: 0x40f809  jalr        $v0
label_4234f8:
    if (ctx->pc == 0x4234F8u) {
        ctx->pc = 0x4234F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234F4u;
        // 0x4234f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234FCu;
        goto label_4234fc;
    }
    ctx->pc = 0x4234F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4234FCu);
        ctx->pc = 0x4234F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234F4u;
        // 0x4234f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4234F4u, 0x4234FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4234FCu;
label_4234fc:
    // 0x4234fc: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x4234fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_423500:
    // 0x423500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x423500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423504:
    // 0x423504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x423504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423508:
    // 0x423508: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x423508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_42350c:
    // 0x42350c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x42350cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_423510:
    // 0x423510: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x423510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_423514:
    // 0x423514: 0x60f809  jalr        $v1
label_423518:
    if (ctx->pc == 0x423518u) {
        ctx->pc = 0x423518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423514u;
        // 0x423518: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42351Cu;
        goto label_42351c;
    }
    ctx->pc = 0x423514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42351Cu);
        ctx->pc = 0x423518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423514u;
        // 0x423518: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423514u, 0x42351Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42351Cu;
label_42351c:
    // 0x42351c: 0x1660001b  bnez        $s3, . + 4 + (0x1B << 2)
label_423520:
    if (ctx->pc == 0x423520u) {
        ctx->pc = 0x423520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42351Cu;
        // 0x423520: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423524u;
        goto label_423524;
    }
    ctx->pc = 0x42351Cu;
    {
        const bool branch_taken_0x42351c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x423520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42351Cu;
        // 0x423520: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42351c) {
            ctx->pc = 0x42358Cu;
            goto label_42358c;
        }
    }
    ctx->pc = 0x423524u;
label_423524:
    // 0x423524: 0x5640001a  bnel        $s2, $zero, . + 4 + (0x1A << 2)
label_423528:
    if (ctx->pc == 0x423528u) {
        ctx->pc = 0x423528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423524u;
        // 0x423528: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42352Cu;
        goto label_42352c;
    }
    ctx->pc = 0x423524u;
    {
        const bool branch_taken_0x423524 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x423524) {
            ctx->pc = 0x423528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423524u;
            // 0x423528: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x42352Cu;
label_42352c:
    // 0x42352c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x42352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_423530:
    // 0x423530: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x423530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_423534:
    // 0x423534: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x423534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_423538:
    // 0x423538: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x423538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_42353c:
    // 0x42353c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x42353cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_423540:
    // 0x423540: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_423544:
    if (ctx->pc == 0x423544u) {
        ctx->pc = 0x423544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423540u;
        // 0x423544: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423548u;
        goto label_423548;
    }
    ctx->pc = 0x423540u;
    {
        const bool branch_taken_0x423540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x423540) {
            ctx->pc = 0x423544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423540u;
            // 0x423544: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x423548u;
label_423548:
    // 0x423548: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x423548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_42354c:
    // 0x42354c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x42354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_423550:
    // 0x423550: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x423550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
label_423554:
    // 0x423554: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_423558:
    if (ctx->pc == 0x423558u) {
        ctx->pc = 0x423558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423554u;
        // 0x423558: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42355Cu;
        goto label_42355c;
    }
    ctx->pc = 0x423554u;
    {
        const bool branch_taken_0x423554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x423554) {
            ctx->pc = 0x423558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423554u;
            // 0x423558: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423590u;
            goto label_423590;
        }
    }
    ctx->pc = 0x42355Cu;
label_42355c:
    // 0x42355c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_423560:
    // 0x423560: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x423560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_423564:
    // 0x423564: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x423564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_423568:
    // 0x423568: 0x24a5b9f0  addiu       $a1, $a1, -0x4610
    ctx->pc = 0x423568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949360));
label_42356c:
    // 0x42356c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42356cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423570:
    // 0x423570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x423570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423574:
    // 0x423574: 0xc043f1c  jal         func_10FC70
label_423578:
    if (ctx->pc == 0x423578u) {
        ctx->pc = 0x423578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423574u;
        // 0x423578: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42357Cu;
        goto label_42357c;
    }
    ctx->pc = 0x423574u;
    SET_GPR_U32(ctx, 31, 0x42357Cu);
    ctx->pc = 0x423578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423574u;
    // 0x423578: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x423574u, 0x42357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42357Cu;
label_42357c:
    // 0x42357c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x42357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_423580:
    // 0x423580: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x423580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_423584:
    // 0x423584: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x423584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_423588:
    // 0x423588: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x423588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42358c:
    // 0x42358c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42358cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423590:
    // 0x423590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x423590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423594:
    // 0x423594: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x423594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423598:
    // 0x423598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42359c:
    // 0x42359c: 0x3e00008  jr          $ra
label_4235a0:
    if (ctx->pc == 0x4235A0u) {
        ctx->pc = 0x4235A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42359Cu;
        // 0x4235a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4235A4u;
        goto label_4235a4;
    }
    ctx->pc = 0x42359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4235A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42359Cu;
        // 0x4235a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42359Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4235A4u;
label_4235a4:
    // 0x4235a4: 0x0  nop
    ctx->pc = 0x4235a4u;
    // NOP
    ctx->pc = 0x4235a8u;
}
