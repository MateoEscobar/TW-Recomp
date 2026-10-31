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

// Function: sub_004367E0
// Address: 0x4367e0 - 0x437828
void sub_004367E0_0x4367e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004367E0_0x4367e0");
#endif

    switch (ctx->pc) {
        case 0x43681cu: goto label_43681c;
        case 0x436838u: goto label_436838;
        case 0x436840u: goto label_436840;
        case 0x436860u: goto label_436860;
        case 0x4368b0u: goto label_4368b0;
        case 0x4368d8u: goto label_4368d8;
        case 0x436914u: goto label_436914;
        case 0x43695cu: goto label_43695c;
        case 0x436960u: goto label_436960;
        case 0x436964u: goto label_436964;
        case 0x436a20u: goto label_436a20;
        case 0x436a68u: goto label_436a68;
        case 0x436b78u: goto label_436b78;
        case 0x436b8cu: goto label_436b8c;
        case 0x436b9cu: goto label_436b9c;
        case 0x436ba8u: goto label_436ba8;
        case 0x436bc8u: goto label_436bc8;
        case 0x436bd8u: goto label_436bd8;
        case 0x436be4u: goto label_436be4;
        case 0x436c30u: goto label_436c30;
        case 0x436c48u: goto label_436c48;
        case 0x436d60u: goto label_436d60;
        case 0x436d84u: goto label_436d84;
        case 0x436ea8u: goto label_436ea8;
        case 0x436ef8u: goto label_436ef8;
        case 0x436f00u: goto label_436f00;
        case 0x436f1cu: goto label_436f1c;
        case 0x436f50u: goto label_436f50;
        case 0x436f94u: goto label_436f94;
        case 0x436fc8u: goto label_436fc8;
        case 0x437070u: goto label_437070;
        case 0x4370d8u: goto label_4370d8;
        case 0x437114u: goto label_437114;
        case 0x437150u: goto label_437150;
        case 0x437178u: goto label_437178;
        case 0x4371b4u: goto label_4371b4;
        case 0x437228u: goto label_437228;
        case 0x43729cu: goto label_43729c;
        case 0x4372dcu: goto label_4372dc;
        case 0x437310u: goto label_437310;
        case 0x437378u: goto label_437378;
        case 0x4373acu: goto label_4373ac;
        case 0x4373e8u: goto label_4373e8;
        case 0x437410u: goto label_437410;
        case 0x43744cu: goto label_43744c;
        case 0x437470u: goto label_437470;
        case 0x4374d8u: goto label_4374d8;
        case 0x43750cu: goto label_43750c;
        case 0x437548u: goto label_437548;
        case 0x437570u: goto label_437570;
        case 0x4375acu: goto label_4375ac;
        case 0x4375d4u: goto label_4375d4;
        case 0x437600u: goto label_437600;
        case 0x437640u: goto label_437640;
        case 0x437670u: goto label_437670;
        case 0x4376d8u: goto label_4376d8;
        case 0x43770cu: goto label_43770c;
        case 0x437748u: goto label_437748;
        case 0x437770u: goto label_437770;
        case 0x4377acu: goto label_4377ac;
        case 0x4377f0u: goto label_4377f0;
        default: break;
    }

    ctx->pc = 0x4367e0u;

    // 0x4367e0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x4367e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x4367e4: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x4367e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x4367e8: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x4367e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x4367ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4367ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4367f0: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x4367f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x4367f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4367f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4367f8: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x4367f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x4367fc: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x4367fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x436800: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x436800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x436804: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x436804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x436808: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x436808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x43680c: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x43680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x436810: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x436810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x436814: 0xc10e6aa  jal         func_439AA8
    ctx->pc = 0x436814u;
    SET_GPR_U32(ctx, 31, 0x43681Cu);
    ctx->pc = 0x436818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436814u;
    // 0x436818: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439AA8u, 0x436814u, 0x43681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43681Cu;
label_43681c:
    // 0x43681c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x43681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x436820: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x436820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x436824: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x436824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x436828: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x436828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x43682c: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x43682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x436830: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x436830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x436834: 0x0  nop
    ctx->pc = 0x436834u;
    // NOP
label_436838:
    // 0x436838: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x436838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43683c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x43683cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_436840:
    // 0x436840: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x436840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x436844: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x436844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x436848: 0x8ca469ec  lw          $a0, 0x69EC($a1)
    ctx->pc = 0x436848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x43684c: 0x8cc771e8  lw          $a3, 0x71E8($a2)
    ctx->pc = 0x43684cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5171E8u));
    // 0x436850: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x436850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x436854: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x436854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436858: 0xc10cefe  jal         func_433BF8
    ctx->pc = 0x436858u;
    SET_GPR_U32(ctx, 31, 0x436860u);
    ctx->pc = 0x43685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436858u;
    // 0x43685c: 0x8fa801ac  lw          $t0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BF8u, 0x436858u, 0x436860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436860u;
label_436860:
    // 0x436860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436864: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436864u;
    {
        const bool branch_taken_0x436864 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x436868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436864u;
        // 0x436868: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436864) {
            ctx->pc = 0x436878u;
            goto label_436878;
        }
    }
    ctx->pc = 0x43686Cu;
    // 0x43686c: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x43686Cu;
    {
        const bool branch_taken_0x43686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x436870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43686Cu;
        // 0x436870: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43686c) {
            ctx->pc = 0x436840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436840;
        }
    }
    ctx->pc = 0x436874u;
    // 0x436874: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x436874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_436878:
    // 0x436878: 0x3d49023  subu        $s2, $fp, $s4
    ctx->pc = 0x436878u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x43687c: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x43687Cu;
    {
        const bool branch_taken_0x43687c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x43687c) {
            ctx->pc = 0x436920u;
            goto label_436920;
        }
    }
    ctx->pc = 0x436884u;
    // 0x436884: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x436884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x436888: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x436888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x43688c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x43688Cu;
    {
        const bool branch_taken_0x43688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43688c) {
            ctx->pc = 0x436890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43688Cu;
            // 0x436890: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4368F0u;
            goto label_4368f0;
        }
    }
    ctx->pc = 0x436894u;
    // 0x436894: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x436894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x436898: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x436898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x43689c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43689Cu;
    {
        const bool branch_taken_0x43689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4368A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43689Cu;
        // 0x4368a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43689c) {
            ctx->pc = 0x4368CCu;
            goto label_4368cc;
        }
    }
    ctx->pc = 0x4368A4u;
    // 0x4368a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4368a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4368a8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4368A8u;
    SET_GPR_U32(ctx, 31, 0x4368B0u);
    ctx->pc = 0x4368ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4368A8u;
    // 0x4368ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4368A8u, 0x4368B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4368B0u;
label_4368b0:
    // 0x4368b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4368b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4368b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4368b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4368b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4368b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4368bc: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4368bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4368c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4368c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4368c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4368C4u;
    {
        const bool branch_taken_0x4368c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4368C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4368C4u;
        // 0x4368c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4368c4) {
            ctx->pc = 0x436914u;
            goto label_436914;
        }
    }
    ctx->pc = 0x4368CCu;
label_4368cc:
    // 0x4368cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4368ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4368d0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4368D0u;
    SET_GPR_U32(ctx, 31, 0x4368D8u);
    ctx->pc = 0x4368D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4368D0u;
    // 0x4368d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4368D0u, 0x4368D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4368D8u;
label_4368d8:
    // 0x4368d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4368d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4368dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4368dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4368e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4368e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4368e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4368e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4368e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4368E8u;
    {
        const bool branch_taken_0x4368e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4368E8u;
        // 0x4368ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4368e8) {
            ctx->pc = 0x436914u;
            goto label_436914;
        }
    }
    ctx->pc = 0x4368F0u;
label_4368f0:
    // 0x4368f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4368F0u;
    {
        const bool branch_taken_0x4368f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4368f0) {
            ctx->pc = 0x4368F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4368F0u;
            // 0x4368f4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436904u;
            goto label_436904;
        }
    }
    ctx->pc = 0x4368F8u;
    // 0x4368f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4368f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4368fc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x4368fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x436900: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x436900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_436904:
    // 0x436904: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x436904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x436908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43690c: 0xc10d982  jal         func_436608
    ctx->pc = 0x43690Cu;
    SET_GPR_U32(ctx, 31, 0x436914u);
    ctx->pc = 0x436910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43690Cu;
    // 0x436910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x43690Cu, 0x436914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436914u;
label_436914:
    // 0x436914: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x436914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x436918: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x436918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x43691c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x43691cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_436920:
    // 0x436920: 0x5a0003ab  blezl       $s0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x436920u;
    {
        const bool branch_taken_0x436920 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x436920) {
            ctx->pc = 0x436924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436920u;
            // 0x436924: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4377D0u;
            goto label_4377d0;
        }
    }
    ctx->pc = 0x436928u;
    // 0x436928: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x436928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43692c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43692Cu;
    {
        const bool branch_taken_0x43692c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x43692c) {
            ctx->pc = 0x436930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43692Cu;
            // 0x436930: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436948u;
            goto label_436948;
        }
    }
    ctx->pc = 0x436934u;
    // 0x436934: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x436934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x436938: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x436938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x43693c: 0x144003ad  bnez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x43693Cu;
    {
        const bool branch_taken_0x43693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43693Cu;
        // 0x436940: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43693c) {
            ctx->pc = 0x4377F4u;
            goto label_4377f4;
        }
    }
    ctx->pc = 0x436944u;
    // 0x436944: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x436944u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_436948:
    // 0x436948: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x436948u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x43694c: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x43694cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x436950: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x436950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436954: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x436954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x436958: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x436958u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43695c:
    // 0x43695c: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x43695cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_436960:
    // 0x436960: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x436960u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_436964:
    // 0x436964: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x436964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x436968: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x436968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x43696c: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x43696Cu;
    {
        const bool branch_taken_0x43696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43696Cu;
        // 0x436970: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43696c) {
            ctx->pc = 0x436FE0u;
            goto label_436fe0;
        }
    }
    ctx->pc = 0x436974u;
    // 0x436974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x436974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x436978: 0x2442cd30  addiu       $v0, $v0, -0x32D0
    ctx->pc = 0x436978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954288));
    // 0x43697c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x436980: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x436980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x436984: 0x800008  jr          $a0
    ctx->pc = 0x436984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43698Cu: goto label_43698c;
            case 0x4369A4u: goto label_4369a4;
            case 0x4369ACu: goto label_4369ac;
            case 0x4369B4u: goto label_4369b4;
            case 0x4369CCu: goto label_4369cc;
            case 0x4369D4u: goto label_4369d4;
            case 0x4369E0u: goto label_4369e0;
            case 0x436A54u: goto label_436a54;
            case 0x436A5Cu: goto label_436a5c;
            case 0x436A90u: goto label_436a90;
            case 0x436A98u: goto label_436a98;
            case 0x436AA0u: goto label_436aa0;
            case 0x436AB4u: goto label_436ab4;
            case 0x436ABCu: goto label_436abc;
            case 0x436AE8u: goto label_436ae8;
            case 0x436AECu: goto label_436aec;
            case 0x436B3Cu: goto label_436b3c;
            case 0x436C68u: goto label_436c68;
            case 0x436CD0u: goto label_436cd0;
            case 0x436CD4u: goto label_436cd4;
            case 0x436D14u: goto label_436d14;
            case 0x436D38u: goto label_436d38;
            case 0x436D9Cu: goto label_436d9c;
            case 0x436DA0u: goto label_436da0;
            case 0x436DE0u: goto label_436de0;
            case 0x436DECu: goto label_436dec;
            case 0x436FE0u: goto label_436fe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436984u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43698Cu;
label_43698c:
    // 0x43698c: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x43698cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x436990: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x436990u;
    {
        const bool branch_taken_0x436990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436990) {
            ctx->pc = 0x436994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436990u;
            // 0x436994: 0x83d60000  lb          $s6, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436960;
        }
    }
    ctx->pc = 0x436998u;
    // 0x436998: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x436998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43699c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x43699Cu;
    {
        const bool branch_taken_0x43699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43699Cu;
        // 0x4369a0: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43699c) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369A4u;
label_4369a4:
    // 0x4369a4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x4369A4u;
    {
        const bool branch_taken_0x4369a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4369A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369A4u;
        // 0x4369a8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369a4) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369ACu;
label_4369ac:
    // 0x4369ac: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x4369ACu;
    {
        const bool branch_taken_0x4369ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4369B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369ACu;
        // 0x4369b0: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369ac) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369B4u;
label_4369b4:
    // 0x4369b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x4369b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4369b8: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x4369b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x4369bc: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4369BCu;
    {
        const bool branch_taken_0x4369bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4369C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369BCu;
        // 0x4369c0: 0xafa30194  sw          $v1, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369bc) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369C4u;
    // 0x4369c4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4369c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4369c8: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x4369c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_4369cc:
    // 0x4369cc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x4369CCu;
    {
        const bool branch_taken_0x4369cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4369D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369CCu;
        // 0x4369d0: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369cc) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369D4u;
label_4369d4:
    // 0x4369d4: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4369d8: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x4369D8u;
    {
        const bool branch_taken_0x4369d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4369DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369D8u;
        // 0x4369dc: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369d8) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x4369E0u;
label_4369e0:
    // 0x4369e0: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x4369e0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4369e4: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x4369e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4369e8: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4369E8u;
    {
        const bool branch_taken_0x4369e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x4369ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4369E8u;
        // 0x4369ec: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4369e8) {
            ctx->pc = 0x436A0Cu;
            goto label_436a0c;
        }
    }
    ctx->pc = 0x4369F0u;
    // 0x4369f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x4369f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4369f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4369f8: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x4369f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x4369fc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x4369fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x436a00: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x436a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x436a04: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x436A04u;
    {
        const bool branch_taken_0x436a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A04u;
        // 0x436a08: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a04) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436A0Cu;
label_436a0c:
    // 0x436a0c: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x436a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x436a10: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x436a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x436a14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x436A14u;
    {
        const bool branch_taken_0x436a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A14u;
        // 0x436a18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a14) {
            ctx->pc = 0x436A40u;
            goto label_436a40;
        }
    }
    ctx->pc = 0x436A1Cu;
    // 0x436a1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x436a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_436a20:
    // 0x436a20: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x436a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x436a24: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x436a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x436a28: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x436a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x436a2c: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x436a2cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436a30: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x436a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x436a34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x436a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x436a38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x436A38u;
    {
        const bool branch_taken_0x436a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A38u;
        // 0x436a3c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a38) {
            ctx->pc = 0x436A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436a20;
        }
    }
    ctx->pc = 0x436A40u;
label_436a40:
    // 0x436a40: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x436a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x436a44: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x436a44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x436a48: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x436a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x436a4c: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x436A4Cu;
    {
        const bool branch_taken_0x436a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A4Cu;
        // 0x436a50: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a4c) {
            ctx->pc = 0x436964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436964;
        }
    }
    ctx->pc = 0x436A54u;
label_436a54:
    // 0x436a54: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x436A54u;
    {
        const bool branch_taken_0x436a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A54u;
        // 0x436a58: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a54) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436A5Cu;
label_436a5c:
    // 0x436a5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x436a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436a60: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x436a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x436a64: 0x0  nop
    ctx->pc = 0x436a64u;
    // NOP
label_436a68:
    // 0x436a68: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x436a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x436a6c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x436a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x436a70: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x436a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x436a74: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x436a74u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436a78: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x436a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x436a7c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x436a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x436a80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x436A80u;
    {
        const bool branch_taken_0x436a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A80u;
        // 0x436a84: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a80) {
            ctx->pc = 0x436A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436a68;
        }
    }
    ctx->pc = 0x436A88u;
    // 0x436a88: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x436A88u;
    {
        const bool branch_taken_0x436a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A88u;
        // 0x436a8c: 0xafb00194  sw          $s0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a88) {
            ctx->pc = 0x436964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436964;
        }
    }
    ctx->pc = 0x436A90u;
label_436a90:
    // 0x436a90: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x436A90u;
    {
        const bool branch_taken_0x436a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A90u;
        // 0x436a94: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a90) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436A98u;
label_436a98:
    // 0x436a98: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x436A98u;
    {
        const bool branch_taken_0x436a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436A98u;
        // 0x436a9c: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436a98) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436AA0u;
label_436aa0:
    // 0x436aa0: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x436aa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436aa4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x436aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x436aa8: 0x5462ffac  bnel        $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x436AA8u;
    {
        const bool branch_taken_0x436aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x436aa8) {
            ctx->pc = 0x436AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436AA8u;
            // 0x436aac: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436AB0u;
    // 0x436ab0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x436ab0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_436ab4:
    // 0x436ab4: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x436AB4u;
    {
        const bool branch_taken_0x436ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436AB4u;
        // 0x436ab8: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ab4) {
            ctx->pc = 0x43695Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43695c;
        }
    }
    ctx->pc = 0x436ABCu;
label_436abc:
    // 0x436abc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x436ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x436ac4: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x436ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436ac8: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x436ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436acc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x436accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x436ad0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x436ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x436ad4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436ad4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436ad8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x436ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x436adc: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x436adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x436ae0: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x436AE0u;
    {
        const bool branch_taken_0x436ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436AE0u;
        // 0x436ae4: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ae0) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436AE8u;
label_436ae8:
    // 0x436ae8: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x436ae8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_436aec:
    // 0x436aec: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x436aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x436af0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x436AF0u;
    {
        const bool branch_taken_0x436af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436af0) {
            ctx->pc = 0x436AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436AF0u;
            // 0x436af4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436B08u;
            goto label_436b08;
        }
    }
    ctx->pc = 0x436AF8u;
    // 0x436af8: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x436af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x436afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436AFCu;
    {
        const bool branch_taken_0x436afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436AFCu;
        // 0x436b00: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436afc) {
            ctx->pc = 0x436B10u;
            goto label_436b10;
        }
    }
    ctx->pc = 0x436B04u;
    // 0x436b04: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436b04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_436b08:
    // 0x436b08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x436B08u;
    {
        const bool branch_taken_0x436b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B08u;
        // 0x436b0c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b08) {
            ctx->pc = 0x436B24u;
            goto label_436b24;
        }
    }
    ctx->pc = 0x436B10u;
label_436b10:
    // 0x436b10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x436B10u;
    {
        const bool branch_taken_0x436b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B10u;
        // 0x436b14: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b10) {
            ctx->pc = 0x436B20u;
            goto label_436b20;
        }
    }
    ctx->pc = 0x436B18u;
    // 0x436b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436B18u;
    {
        const bool branch_taken_0x436b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B18u;
        // 0x436b1c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b18) {
            ctx->pc = 0x436B24u;
            goto label_436b24;
        }
    }
    ctx->pc = 0x436B20u;
label_436b20:
    // 0x436b20: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x436b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_436b24:
    // 0x436b24: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x436B24u;
    {
        const bool branch_taken_0x436b24 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x436B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B24u;
        // 0x436b28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b24) {
            ctx->pc = 0x436E48u;
            goto label_436e48;
        }
    }
    ctx->pc = 0x436B2Cu;
    // 0x436b2c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x436b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x436b30: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x436b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x436b34: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x436B34u;
    {
        const bool branch_taken_0x436b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B34u;
        // 0x436b38: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b34) {
            ctx->pc = 0x436E48u;
            goto label_436e48;
        }
    }
    ctx->pc = 0x436B3Cu;
label_436b3c:
    // 0x436b3c: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x436b3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x436b40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x436b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x436b44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436b48: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x436b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x436b4c: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x436b4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436b50: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x436b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x436b54: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436B54u;
    {
        const bool branch_taken_0x436b54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x436B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B54u;
        // 0x436b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b54) {
            ctx->pc = 0x436B68u;
            goto label_436b68;
        }
    }
    ctx->pc = 0x436B5Cu;
    // 0x436b5c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x436b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x436b60: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x436B60u;
    {
        const bool branch_taken_0x436b60 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x436B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B60u;
        // 0x436b64: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b60) {
            ctx->pc = 0x436C0Cu;
            goto label_436c0c;
        }
    }
    ctx->pc = 0x436B68u;
label_436b68:
    // 0x436b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x436b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x436b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436b70: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436B70u;
    SET_GPR_U32(ctx, 31, 0x436B78u);
    ctx->pc = 0x436B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436B70u;
    // 0x436b74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436B70u, 0x436B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436B78u;
label_436b78:
    // 0x436b78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x436B78u;
    {
        const bool branch_taken_0x436b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B78u;
        // 0x436b7c: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b78) {
            ctx->pc = 0x436BB0u;
            goto label_436bb0;
        }
    }
    ctx->pc = 0x436B80u;
    // 0x436b80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x436b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436b84: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436B84u;
    SET_GPR_U32(ctx, 31, 0x436B8Cu);
    ctx->pc = 0x436B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436B84u;
    // 0x436b88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436B84u, 0x436B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436B8Cu;
label_436b8c:
    // 0x436b8c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436B8Cu;
    {
        const bool branch_taken_0x436b8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x436B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436B8Cu;
        // 0x436b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b8c) {
            ctx->pc = 0x436BA0u;
            goto label_436ba0;
        }
    }
    ctx->pc = 0x436B94u;
    // 0x436b94: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x436B94u;
    SET_GPR_U32(ctx, 31, 0x436B9Cu);
    ctx->pc = 0x436B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436B94u;
    // 0x436b98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x436B94u, 0x436B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436B9Cu;
label_436b9c:
    // 0x436b9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436ba0:
    // 0x436ba0: 0xc10e9ce  jal         func_43A738
    ctx->pc = 0x436BA0u;
    SET_GPR_U32(ctx, 31, 0x436BA8u);
    ctx->pc = 0x436BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436BA0u;
    // 0x436ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A738u, 0x436BA0u, 0x436BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436BA8u;
label_436ba8:
    // 0x436ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x436BA8u;
    {
        const bool branch_taken_0x436ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436BA8u;
        // 0x436bac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ba8) {
            ctx->pc = 0x436BB8u;
            goto label_436bb8;
        }
    }
    ctx->pc = 0x436BB0u;
label_436bb0:
    // 0x436bb0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x436bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x436bb4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x436bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_436bb8:
    // 0x436bb8: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x436bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x436bbc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x436bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x436bc0: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436BC0u;
    SET_GPR_U32(ctx, 31, 0x436BC8u);
    ctx->pc = 0x436BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436BC0u;
    // 0x436bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436BC0u, 0x436BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436BC8u;
label_436bc8:
    // 0x436bc8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x436BC8u;
    {
        const bool branch_taken_0x436bc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x436BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436BC8u;
        // 0x436bcc: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436bc8) {
            ctx->pc = 0x436BECu;
            goto label_436bec;
        }
    }
    ctx->pc = 0x436BD0u;
    // 0x436bd0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x436BD0u;
    SET_GPR_U32(ctx, 31, 0x436BD8u);
    ctx->pc = 0x436BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436BD0u;
    // 0x436bd4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x436BD0u, 0x436BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436BD8u;
label_436bd8:
    // 0x436bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436bdc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x436BDCu;
    SET_GPR_U32(ctx, 31, 0x436BE4u);
    ctx->pc = 0x436BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436BDCu;
    // 0x436be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x436BDCu, 0x436BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436BE4u;
label_436be4:
    // 0x436be4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x436BE4u;
    {
        const bool branch_taken_0x436be4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x436BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436BE4u;
        // 0x436be8: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436be4) {
            ctx->pc = 0x436C00u;
            goto label_436c00;
        }
    }
    ctx->pc = 0x436BECu;
label_436bec:
    // 0x436bec: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x436becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x436bf0: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x436bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x436bf4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x436bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436BF8u;
    {
        const bool branch_taken_0x436bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436BF8u;
        // 0x436bfc: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436bf8) {
            ctx->pc = 0x436C04u;
            goto label_436c04;
        }
    }
    ctx->pc = 0x436C00u;
label_436c00:
    // 0x436c00: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x436c00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_436c04:
    // 0x436c04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x436c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x436c08: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x436c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_436c0c:
    // 0x436c0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x436C0Cu;
    {
        const bool branch_taken_0x436c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C0Cu;
        // 0x436c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c0c) {
            ctx->pc = 0x436C1Cu;
            goto label_436c1c;
        }
    }
    ctx->pc = 0x436C14u;
    // 0x436c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x436c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c18: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x436c18u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_436c1c:
    // 0x436c1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x436c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x436c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x436c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c28: 0xc10d81e  jal         func_436078
    ctx->pc = 0x436C28u;
    SET_GPR_U32(ctx, 31, 0x436C30u);
    ctx->pc = 0x436C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436C28u;
    // 0x436c2c: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436078u, 0x436C28u, 0x436C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436C30u;
label_436c30:
    // 0x436c30: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436c30u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436c34: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x436c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436c38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x436c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c3c: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x436c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x436c40: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x436C40u;
    SET_GPR_U32(ctx, 31, 0x436C48u);
    ctx->pc = 0x436C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436C40u;
    // 0x436c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x436C40u, 0x436C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436C48u;
label_436c48:
    // 0x436c48: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x436c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x436c4c: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x436C4Cu;
    {
        const bool branch_taken_0x436c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C4Cu;
        // 0x436c50: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c4c) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436C54u;
    // 0x436c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x436c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436c58: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x436c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x436c5c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x436c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x436c60: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x436C60u;
    {
        const bool branch_taken_0x436c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C60u;
        // 0x436c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c60) {
            ctx->pc = 0x436FC0u;
            goto label_436fc0;
        }
    }
    ctx->pc = 0x436C68u;
label_436c68:
    // 0x436c68: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x436c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x436c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436C6Cu;
    {
        const bool branch_taken_0x436c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C6Cu;
        // 0x436c70: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c6c) {
            ctx->pc = 0x436C84u;
            goto label_436c84;
        }
    }
    ctx->pc = 0x436C74u;
    // 0x436c74: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436c78: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x436c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436c7c: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x436C7Cu;
    {
        const bool branch_taken_0x436c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C7Cu;
        // 0x436c80: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c7c) {
            ctx->pc = 0x436838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436838;
        }
    }
    ctx->pc = 0x436C84u;
label_436c84:
    // 0x436c84: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x436c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x436c88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436C88u;
    {
        const bool branch_taken_0x436c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C88u;
        // 0x436c8c: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c88) {
            ctx->pc = 0x436CA0u;
            goto label_436ca0;
        }
    }
    ctx->pc = 0x436C90u;
    // 0x436c90: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436c94: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x436c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436c98: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x436C98u;
    {
        const bool branch_taken_0x436c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436C98u;
        // 0x436c9c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c98) {
            ctx->pc = 0x436838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436838;
        }
    }
    ctx->pc = 0x436CA0u;
label_436ca0:
    // 0x436ca0: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x436ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x436ca4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436CA4u;
    {
        const bool branch_taken_0x436ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CA4u;
        // 0x436ca8: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ca4) {
            ctx->pc = 0x436CBCu;
            goto label_436cbc;
        }
    }
    ctx->pc = 0x436CACu;
    // 0x436cac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436cb0: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x436cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436cb4: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x436CB4u;
    {
        const bool branch_taken_0x436cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CB4u;
        // 0x436cb8: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436cb4) {
            ctx->pc = 0x436838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436838;
        }
    }
    ctx->pc = 0x436CBCu;
label_436cbc:
    // 0x436cbc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436cc0: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x436cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x436cc4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x436cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436cc8: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x436CC8u;
    {
        const bool branch_taken_0x436cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CC8u;
        // 0x436ccc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436cc8) {
            ctx->pc = 0x436838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436838;
        }
    }
    ctx->pc = 0x436CD0u;
label_436cd0:
    // 0x436cd0: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x436cd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_436cd4:
    // 0x436cd4: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x436cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x436cd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x436CD8u;
    {
        const bool branch_taken_0x436cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436cd8) {
            ctx->pc = 0x436CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436CD8u;
            // 0x436cdc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436CF0u;
            goto label_436cf0;
        }
    }
    ctx->pc = 0x436CE0u;
    // 0x436ce0: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x436ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x436ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436CE4u;
    {
        const bool branch_taken_0x436ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CE4u;
        // 0x436ce8: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ce4) {
            ctx->pc = 0x436CF8u;
            goto label_436cf8;
        }
    }
    ctx->pc = 0x436CECu;
    // 0x436cec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_436cf0:
    // 0x436cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x436CF0u;
    {
        const bool branch_taken_0x436cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CF0u;
        // 0x436cf4: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436cf0) {
            ctx->pc = 0x436D0Cu;
            goto label_436d0c;
        }
    }
    ctx->pc = 0x436CF8u;
label_436cf8:
    // 0x436cf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x436CF8u;
    {
        const bool branch_taken_0x436cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436CF8u;
        // 0x436cfc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436cf8) {
            ctx->pc = 0x436D08u;
            goto label_436d08;
        }
    }
    ctx->pc = 0x436D00u;
    // 0x436d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436D00u;
    {
        const bool branch_taken_0x436d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D00u;
        // 0x436d04: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d00) {
            ctx->pc = 0x436D0Cu;
            goto label_436d0c;
        }
    }
    ctx->pc = 0x436D08u;
label_436d08:
    // 0x436d08: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x436d08u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_436d0c:
    // 0x436d0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x436D0Cu;
    {
        const bool branch_taken_0x436d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D0Cu;
        // 0x436d10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d0c) {
            ctx->pc = 0x436E44u;
            goto label_436e44;
        }
    }
    ctx->pc = 0x436D14u;
label_436d14:
    // 0x436d14: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x436d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x436d18: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436d1c: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x436d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x436d20: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x436d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x436d24: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x436d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x436d28: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x436d28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x436d2c: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x436d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x436d30: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x436D30u;
    {
        const bool branch_taken_0x436d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D30u;
        // 0x436d34: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d30) {
            ctx->pc = 0x436E44u;
            goto label_436e44;
        }
    }
    ctx->pc = 0x436D38u;
label_436d38:
    // 0x436d38: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x436d3c: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x436d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x436d40: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x436D40u;
    {
        const bool branch_taken_0x436d40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x436D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D40u;
        // 0x436d44: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d40) {
            ctx->pc = 0x436D4Cu;
            goto label_436d4c;
        }
    }
    ctx->pc = 0x436D48u;
    // 0x436d48: 0x2454cce8  addiu       $s4, $v0, -0x3318
    ctx->pc = 0x436d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954216));
label_436d4c:
    // 0x436d4c: 0x6e0000b  bltz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x436D4Cu;
    {
        const bool branch_taken_0x436d4c = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x436D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D4Cu;
        // 0x436d50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d4c) {
            ctx->pc = 0x436D7Cu;
            goto label_436d7c;
        }
    }
    ctx->pc = 0x436D54u;
    // 0x436d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x436d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436d58: 0xc10c130  jal         func_4304C0
    ctx->pc = 0x436D58u;
    SET_GPR_U32(ctx, 31, 0x436D60u);
    ctx->pc = 0x436D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436D58u;
    // 0x436d5c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4304C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4304C0u, 0x436D58u, 0x436D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436D60u;
label_436d60:
    // 0x436d60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436D60u;
    {
        const bool branch_taken_0x436d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D60u;
        // 0x436d64: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d60) {
            ctx->pc = 0x436D74u;
            goto label_436d74;
        }
    }
    ctx->pc = 0x436D68u;
    // 0x436d68: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x436d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x436d6c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x436D6Cu;
    {
        const bool branch_taken_0x436d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D6Cu;
        // 0x436d70: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d6c) {
            ctx->pc = 0x436D88u;
            goto label_436d88;
        }
    }
    ctx->pc = 0x436D74u;
label_436d74:
    // 0x436d74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x436D74u;
    {
        const bool branch_taken_0x436d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D74u;
        // 0x436d78: 0xafb7018c  sw          $s7, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d74) {
            ctx->pc = 0x436D88u;
            goto label_436d88;
        }
    }
    ctx->pc = 0x436D7Cu;
label_436d7c:
    // 0x436d7c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x436D7Cu;
    SET_GPR_U32(ctx, 31, 0x436D84u);
    ctx->pc = 0x436D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436D7Cu;
    // 0x436d80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x436D7Cu, 0x436D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436D84u;
label_436d84:
    // 0x436d84: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x436d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_436d88:
    // 0x436d88: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x436d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436d8c: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x436d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x436d90: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436d90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436d94: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x436D94u;
    {
        const bool branch_taken_0x436d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436D94u;
        // 0x436d98: 0xafa601b0  sw          $a2, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436d94) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436D9Cu;
label_436d9c:
    // 0x436d9c: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x436d9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_436da0:
    // 0x436da0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x436da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x436da4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x436DA4u;
    {
        const bool branch_taken_0x436da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436da4) {
            ctx->pc = 0x436DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436DA4u;
            // 0x436da8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436DBCu;
            goto label_436dbc;
        }
    }
    ctx->pc = 0x436DACu;
    // 0x436dac: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x436dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x436db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436DB0u;
    {
        const bool branch_taken_0x436db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DB0u;
        // 0x436db4: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436db0) {
            ctx->pc = 0x436DC4u;
            goto label_436dc4;
        }
    }
    ctx->pc = 0x436DB8u;
    // 0x436db8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_436dbc:
    // 0x436dbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x436DBCu;
    {
        const bool branch_taken_0x436dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DBCu;
        // 0x436dc0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436dbc) {
            ctx->pc = 0x436DD8u;
            goto label_436dd8;
        }
    }
    ctx->pc = 0x436DC4u;
label_436dc4:
    // 0x436dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x436DC4u;
    {
        const bool branch_taken_0x436dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DC4u;
        // 0x436dc8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436dc4) {
            ctx->pc = 0x436DD4u;
            goto label_436dd4;
        }
    }
    ctx->pc = 0x436DCCu;
    // 0x436dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436DCCu;
    {
        const bool branch_taken_0x436dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DCCu;
        // 0x436dd0: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436dcc) {
            ctx->pc = 0x436DD8u;
            goto label_436dd8;
        }
    }
    ctx->pc = 0x436DD4u;
label_436dd4:
    // 0x436dd4: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x436dd4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_436dd8:
    // 0x436dd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x436DD8u;
    {
        const bool branch_taken_0x436dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DD8u;
        // 0x436ddc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436dd8) {
            ctx->pc = 0x436E44u;
            goto label_436e44;
        }
    }
    ctx->pc = 0x436DE0u;
label_436de0:
    // 0x436de0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x436de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x436de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x436DE4u;
    {
        const bool branch_taken_0x436de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436DE4u;
        // 0x436de8: 0x2442ccf0  addiu       $v0, $v0, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436de4) {
            ctx->pc = 0x436DF4u;
            goto label_436df4;
        }
    }
    ctx->pc = 0x436DECu;
label_436dec:
    // 0x436dec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x436decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x436df0: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x436df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
label_436df4:
    // 0x436df4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x436df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x436df8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x436df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x436dfc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x436DFCu;
    {
        const bool branch_taken_0x436dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436dfc) {
            ctx->pc = 0x436E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436DFCu;
            // 0x436e00: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436E14u;
            goto label_436e14;
        }
    }
    ctx->pc = 0x436E04u;
    // 0x436e04: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x436e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x436e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x436E08u;
    {
        const bool branch_taken_0x436e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E08u;
        // 0x436e0c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e08) {
            ctx->pc = 0x436E1Cu;
            goto label_436e1c;
        }
    }
    ctx->pc = 0x436E10u;
    // 0x436e10: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x436e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_436e14:
    // 0x436e14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x436E14u;
    {
        const bool branch_taken_0x436e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E14u;
        // 0x436e18: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e14) {
            ctx->pc = 0x436E30u;
            goto label_436e30;
        }
    }
    ctx->pc = 0x436E1Cu;
label_436e1c:
    // 0x436e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x436E1Cu;
    {
        const bool branch_taken_0x436e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E1Cu;
        // 0x436e20: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e1c) {
            ctx->pc = 0x436E2Cu;
            goto label_436e2c;
        }
    }
    ctx->pc = 0x436E24u;
    // 0x436e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x436E24u;
    {
        const bool branch_taken_0x436e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E24u;
        // 0x436e28: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e24) {
            ctx->pc = 0x436E30u;
            goto label_436e30;
        }
    }
    ctx->pc = 0x436E2Cu;
label_436e2c:
    // 0x436e2c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x436e2cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_436e30:
    // 0x436e30: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x436e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x436e34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x436E34u;
    {
        const bool branch_taken_0x436e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E34u;
        // 0x436e38: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e34) {
            ctx->pc = 0x436E44u;
            goto label_436e44;
        }
    }
    ctx->pc = 0x436E3Cu;
    // 0x436e3c: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x436e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x436e40: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x436e40u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_436e44:
    // 0x436e44: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x436e44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_436e48:
    // 0x436e48: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x436E48u;
    {
        const bool branch_taken_0x436e48 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x436E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E48u;
        // 0x436e4c: 0xafb70198  sw          $s7, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e48) {
            ctx->pc = 0x436E58u;
            goto label_436e58;
        }
    }
    ctx->pc = 0x436E50u;
    // 0x436e50: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x436e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x436e54: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x436e54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_436e58:
    // 0x436e58: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x436E58u;
    {
        const bool branch_taken_0x436e58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x436E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E58u;
        // 0x436e5c: 0x27b4016c  addiu       $s4, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e58) {
            ctx->pc = 0x436E74u;
            goto label_436e74;
        }
    }
    ctx->pc = 0x436E60u;
    // 0x436e60: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x436e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436e64: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x436e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x436e68: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436e68u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436e6c: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x436E6Cu;
    {
        const bool branch_taken_0x436e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E6Cu;
        // 0x436e70: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e6c) {
            ctx->pc = 0x436F9Cu;
            goto label_436f9c;
        }
    }
    ctx->pc = 0x436E74u;
label_436e74:
    // 0x436e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x436e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x436e78: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x436E78u;
    {
        const bool branch_taken_0x436e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x436E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E78u;
        // 0x436e7c: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e78) {
            ctx->pc = 0x436EE0u;
            goto label_436ee0;
        }
    }
    ctx->pc = 0x436E80u;
    // 0x436e80: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x436E80u;
    {
        const bool branch_taken_0x436e80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E80u;
        // 0x436e84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e80) {
            ctx->pc = 0x436E98u;
            goto label_436e98;
        }
    }
    ctx->pc = 0x436E88u;
    // 0x436e88: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x436E88u;
    {
        const bool branch_taken_0x436e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x436E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E88u;
        // 0x436e8c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e88) {
            ctx->pc = 0x436F40u;
            goto label_436f40;
        }
    }
    ctx->pc = 0x436E90u;
    // 0x436e90: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x436E90u;
    {
        const bool branch_taken_0x436e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436E90u;
        // 0x436e94: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436e90) {
            ctx->pc = 0x436F80u;
            goto label_436f80;
        }
    }
    ctx->pc = 0x436E98u;
label_436e98:
    // 0x436e98: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x436e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436e9c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x436e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x436ea0: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x436ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x436ea4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436ea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
label_436ea8:
    // 0x436ea8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x436ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x436eac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x436eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436eb0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x436eb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x436eb4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x436eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x436eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x436eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x436ebc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x436EBCu;
    {
        const bool branch_taken_0x436ebc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x436EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436EBCu;
        // 0x436ec0: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ebc) {
            ctx->pc = 0x436EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436ea8;
        }
    }
    ctx->pc = 0x436EC4u;
    // 0x436ec4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x436EC4u;
    {
        const bool branch_taken_0x436ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436EC4u;
        // 0x436ec8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ec4) {
            ctx->pc = 0x436F9Cu;
            goto label_436f9c;
        }
    }
    ctx->pc = 0x436ECCu;
    // 0x436ecc: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x436ECCu;
    {
        const bool branch_taken_0x436ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x436ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436ECCu;
        // 0x436ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ecc) {
            ctx->pc = 0x436FA0u;
            goto label_436fa0;
        }
    }
    ctx->pc = 0x436ED4u;
    // 0x436ed4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x436ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436ed8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x436ED8u;
    {
        const bool branch_taken_0x436ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436ED8u;
        // 0x436edc: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ed8) {
            ctx->pc = 0x436FA0u;
            goto label_436fa0;
        }
    }
    ctx->pc = 0x436EE0u;
label_436ee0:
    // 0x436ee0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x436ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x436ee4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436ee4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436ee8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x436EE8u;
    {
        const bool branch_taken_0x436ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436EE8u;
        // 0x436eec: 0xafa501b0  sw          $a1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ee8) {
            ctx->pc = 0x436F2Cu;
            goto label_436f2c;
        }
    }
    ctx->pc = 0x436EF0u;
    // 0x436ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436ef4: 0x0  nop
    ctx->pc = 0x436ef4u;
    // NOP
label_436ef8:
    // 0x436ef8: 0xc10f1c0  jal         func_43C700
    ctx->pc = 0x436EF8u;
    SET_GPR_U32(ctx, 31, 0x436F00u);
    ctx->pc = 0x436EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436EF8u;
    // 0x436efc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x436EF8u, 0x436F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436F00u;
label_436f00:
    // 0x436f00: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x436f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436f04: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x436f04u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x436f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436f0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x436f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x436f10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x436f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x436f14: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x436F14u;
    SET_GPR_U32(ctx, 31, 0x436F1Cu);
    ctx->pc = 0x436F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436F14u;
    // 0x436f18: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x436F14u, 0x436F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436F1Cu;
label_436f1c:
    // 0x436f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436f20: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x436f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x436f24: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x436F24u;
    {
        const bool branch_taken_0x436f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436F24u;
        // 0x436f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436f24) {
            ctx->pc = 0x436EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436ef8;
        }
    }
    ctx->pc = 0x436F2Cu;
label_436f2c:
    // 0x436f2c: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x436f2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x436f30: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x436f30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436f34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x436f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x436f38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x436F38u;
    {
        const bool branch_taken_0x436f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436F38u;
        // 0x436f3c: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436f38) {
            ctx->pc = 0x436F9Cu;
            goto label_436f9c;
        }
    }
    ctx->pc = 0x436F40u;
label_436f40:
    // 0x436f40: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x436f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436f44: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436f44u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436f48: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x436f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
    // 0x436f4c: 0x0  nop
    ctx->pc = 0x436f4cu;
    // NOP
label_436f50:
    // 0x436f50: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x436f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x436f54: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x436f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x436f58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x436f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x436f5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x436f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x436f60: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x436f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x436f64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x436f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x436f68: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x436f68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x436f6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x436f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x436f70: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x436F70u;
    {
        const bool branch_taken_0x436f70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x436F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436F70u;
        // 0x436f74: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436f70) {
            ctx->pc = 0x436F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436f50;
        }
    }
    ctx->pc = 0x436F78u;
    // 0x436f78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x436F78u;
    {
        const bool branch_taken_0x436f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436F78u;
        // 0x436f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436f78) {
            ctx->pc = 0x436FA0u;
            goto label_436fa0;
        }
    }
    ctx->pc = 0x436F80u;
label_436f80:
    // 0x436f80: 0x2454cd08  addiu       $s4, $v0, -0x32F8
    ctx->pc = 0x436f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954248));
    // 0x436f84: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x436f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x436f88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x436f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436f8c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x436F8Cu;
    SET_GPR_U32(ctx, 31, 0x436F94u);
    ctx->pc = 0x436F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436F8Cu;
    // 0x436f90: 0x32b70084  andi        $s7, $s5, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x436F8Cu, 0x436F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436F94u;
label_436f94:
    // 0x436f94: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x436F94u;
    {
        const bool branch_taken_0x436f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436F94u;
        // 0x436f98: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436f94) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436F9Cu;
label_436f9c:
    // 0x436f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x436f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436fa0:
    // 0x436fa0: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x436FA0u;
    {
        const bool branch_taken_0x436fa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x436FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436FA0u;
        // 0x436fa4: 0x3b41023  subu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436fa0) {
            ctx->pc = 0x436FD4u;
            goto label_436fd4;
        }
    }
    ctx->pc = 0x436FA8u;
    // 0x436fa8: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x436fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x436fac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x436FACu;
    {
        const bool branch_taken_0x436fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436FACu;
        // 0x436fb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436fac) {
            ctx->pc = 0x436FD0u;
            goto label_436fd0;
        }
    }
    ctx->pc = 0x436FB4u;
    // 0x436fb4: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x436fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x436fb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x436fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x436fbc: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x436fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_436fc0:
    // 0x436fc0: 0xc10de0a  jal         func_437828
    ctx->pc = 0x436FC0u;
    SET_GPR_U32(ctx, 31, 0x436FC8u);
    ctx->pc = 0x437828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x437828u, 0x436FC0u, 0x436FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436FC8u;
label_436fc8:
    // 0x436fc8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x436FC8u;
    {
        const bool branch_taken_0x436fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436FC8u;
        // 0x436fcc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436fc8) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436FD0u;
label_436fd0:
    // 0x436fd0: 0x3b41023  subu        $v0, $sp, $s4
    ctx->pc = 0x436fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_436fd4:
    // 0x436fd4: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x436fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x436fd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x436FD8u;
    {
        const bool branch_taken_0x436fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436FD8u;
        // 0x436fdc: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436fd8) {
            ctx->pc = 0x437004u;
            goto label_437004;
        }
    }
    ctx->pc = 0x436FE0u;
label_436fe0:
    // 0x436fe0: 0x12c001fa  beqz        $s6, . + 4 + (0x1FA << 2)
    ctx->pc = 0x436FE0u;
    {
        const bool branch_taken_0x436fe0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x436FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436FE0u;
        // 0x436fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436fe0) {
            ctx->pc = 0x4377CCu;
            goto label_4377cc;
        }
    }
    ctx->pc = 0x436FE8u;
    // 0x436fe8: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x436fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x436fec: 0xa3b60010  sb          $s6, 0x10($sp)
    ctx->pc = 0x436fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 22));
    // 0x436ff0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x436ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x436ff4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x436ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x436ff8: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x436ff8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x436ffc: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x436ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x437000: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x437000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_437004:
    // 0x437004: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x437004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x437008: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x437008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x43700c: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x43700cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x437010: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x437010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x437014: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x437014u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x437018: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x437018u;
    {
        const bool branch_taken_0x437018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437018u;
        // 0x43701c: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437018) {
            ctx->pc = 0x43702Cu;
            goto label_43702c;
        }
    }
    ctx->pc = 0x437020u;
    // 0x437020: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x437020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x437024: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x437024u;
    {
        const bool branch_taken_0x437024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437024u;
        // 0x437028: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437024) {
            ctx->pc = 0x43703Cu;
            goto label_43703c;
        }
    }
    ctx->pc = 0x43702Cu;
label_43702c:
    // 0x43702c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x43702cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x437030: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x437030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x437034: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x437034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x437038: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x437038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
label_43703c:
    // 0x43703c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x43703cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x437040: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x437040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x437044: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x437044u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x437048: 0x16e0005a  bnez        $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x437048u;
    {
        const bool branch_taken_0x437048 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x43704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437048u;
        // 0x43704c: 0xafa601a4  sw          $a2, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437048) {
            ctx->pc = 0x4371B4u;
            goto label_4371b4;
        }
    }
    ctx->pc = 0x437050u;
    // 0x437050: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x437050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x437054: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x437054u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x437058: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x437058u;
    {
        const bool branch_taken_0x437058 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x43705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437058u;
        // 0x43705c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437058) {
            ctx->pc = 0x4371B4u;
            goto label_4371b4;
        }
    }
    ctx->pc = 0x437060u;
    // 0x437060: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x437060u;
    {
        const bool branch_taken_0x437060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437060u;
        // 0x437064: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437060) {
            ctx->pc = 0x437124u;
            goto label_437124;
        }
    }
    ctx->pc = 0x437068u;
    // 0x437068: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43706c: 0x0  nop
    ctx->pc = 0x43706cu;
    // NOP
label_437070:
    // 0x437070: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437074: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x437074u;
    {
        const bool branch_taken_0x437074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437074) {
            ctx->pc = 0x437078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437074u;
            // 0x437078: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4370F0u;
            goto label_4370f0;
        }
    }
    ctx->pc = 0x43707Cu;
    // 0x43707c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43707cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437080: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x437080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437084: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x437084u;
    {
        const bool branch_taken_0x437084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437084) {
            ctx->pc = 0x437088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437084u;
            // 0x437088: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4370D0u;
            goto label_4370d0;
        }
    }
    ctx->pc = 0x43708Cu;
    // 0x43708c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437090: 0x2643ccb0  addiu       $v1, $s2, -0x3350
    ctx->pc = 0x437090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x437094: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x437094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x437098: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x437098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x43709c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x43709cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4370a0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4370a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4370a4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x4370a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4370a8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x4370a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4370ac: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x4370acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4370b0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x4370b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4370b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4370b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4370b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4370b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4370bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4370bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4370c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4370c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4370c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4370c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4370c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4370C8u;
    {
        const bool branch_taken_0x4370c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4370C8u;
        // 0x4370cc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4370c8) {
            ctx->pc = 0x437114u;
            goto label_437114;
        }
    }
    ctx->pc = 0x4370D0u;
label_4370d0:
    // 0x4370d0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4370D0u;
    SET_GPR_U32(ctx, 31, 0x4370D8u);
    ctx->pc = 0x4370D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4370D0u;
    // 0x4370d4: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4370D0u, 0x4370D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4370D8u;
label_4370d8:
    // 0x4370d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4370d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4370dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4370e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4370e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4370e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4370e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4370E8u;
    {
        const bool branch_taken_0x4370e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4370ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4370E8u;
        // 0x4370ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4370e8) {
            ctx->pc = 0x437114u;
            goto label_437114;
        }
    }
    ctx->pc = 0x4370F0u;
label_4370f0:
    // 0x4370f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4370F0u;
    {
        const bool branch_taken_0x4370f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4370f0) {
            ctx->pc = 0x4370F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4370F0u;
            // 0x4370f4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437104u;
            goto label_437104;
        }
    }
    ctx->pc = 0x4370F8u;
    // 0x4370f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4370f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4370fc: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x4370fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x437100: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_437104:
    // 0x437104: 0x2645ccb0  addiu       $a1, $s2, -0x3350
    ctx->pc = 0x437104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x437108: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x437108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43710c: 0xc10d982  jal         func_436608
    ctx->pc = 0x43710Cu;
    SET_GPR_U32(ctx, 31, 0x437114u);
    ctx->pc = 0x437110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43710Cu;
    // 0x437110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x43710Cu, 0x437114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437114u;
label_437114:
    // 0x437114: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x437114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x437118: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x437118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x43711c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x43711Cu;
    {
        const bool branch_taken_0x43711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43711c) {
            ctx->pc = 0x437120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43711Cu;
            // 0x437120: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437070;
        }
    }
    ctx->pc = 0x437124u;
label_437124:
    // 0x437124: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437128: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x43712c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x43712Cu;
    {
        const bool branch_taken_0x43712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43712c) {
            ctx->pc = 0x437130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43712Cu;
            // 0x437130: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437190u;
            goto label_437190;
        }
    }
    ctx->pc = 0x437134u;
    // 0x437134: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x437134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437138: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x437138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x43713c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43713Cu;
    {
        const bool branch_taken_0x43713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43713Cu;
        // 0x437140: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43713c) {
            ctx->pc = 0x43716Cu;
            goto label_43716c;
        }
    }
    ctx->pc = 0x437144u;
    // 0x437144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437148: 0xc10c190  jal         func_430640
    ctx->pc = 0x437148u;
    SET_GPR_U32(ctx, 31, 0x437150u);
    ctx->pc = 0x43714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437148u;
    // 0x43714c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437148u, 0x437150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437150u;
label_437150:
    // 0x437150: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437154: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437158: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x437158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x43715c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x43715cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x437160: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x437164: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x437164u;
    {
        const bool branch_taken_0x437164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437164u;
        // 0x437168: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437164) {
            ctx->pc = 0x4371B4u;
            goto label_4371b4;
        }
    }
    ctx->pc = 0x43716Cu;
label_43716c:
    // 0x43716c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437170: 0xc10c190  jal         func_430640
    ctx->pc = 0x437170u;
    SET_GPR_U32(ctx, 31, 0x437178u);
    ctx->pc = 0x437174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437170u;
    // 0x437174: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437170u, 0x437178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437178u;
label_437178:
    // 0x437178: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43717c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437180: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x437184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x437184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437188: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x437188u;
    {
        const bool branch_taken_0x437188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437188u;
        // 0x43718c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437188) {
            ctx->pc = 0x4371B4u;
            goto label_4371b4;
        }
    }
    ctx->pc = 0x437190u;
label_437190:
    // 0x437190: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437190u;
    {
        const bool branch_taken_0x437190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437190) {
            ctx->pc = 0x437194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437190u;
            // 0x437194: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4371A4u;
            goto label_4371a4;
        }
    }
    ctx->pc = 0x437198u;
    // 0x437198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43719c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x43719cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4371a0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4371a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4371a4:
    // 0x4371a4: 0x2645ccb0  addiu       $a1, $s2, -0x3350
    ctx->pc = 0x4371a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x4371a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4371a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4371ac: 0xc10d982  jal         func_436608
    ctx->pc = 0x4371ACu;
    SET_GPR_U32(ctx, 31, 0x4371B4u);
    ctx->pc = 0x4371B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4371ACu;
    // 0x4371b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4371ACu, 0x4371B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4371B4u;
label_4371b4:
    // 0x4371b4: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x4371b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4371b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4371B8u;
    {
        const bool branch_taken_0x4371b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4371BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4371B8u;
        // 0x4371bc: 0x93a30180  lbu         $v1, 0x180($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4371b8) {
            ctx->pc = 0x437230u;
            goto label_437230;
        }
    }
    ctx->pc = 0x4371C0u;
    // 0x4371c0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4371c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4371c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4371c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4371c8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4371C8u;
    {
        const bool branch_taken_0x4371c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4371c8) {
            ctx->pc = 0x4371CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4371C8u;
            // 0x4371cc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437204u;
            goto label_437204;
        }
    }
    ctx->pc = 0x4371D0u;
    // 0x4371d0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4371d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4371d4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x4371d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4371d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4371D8u;
    {
        const bool branch_taken_0x4371d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4371d8) {
            ctx->pc = 0x4371DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4371D8u;
            // 0x4371dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4371FCu;
            goto label_4371fc;
        }
    }
    ctx->pc = 0x4371E0u;
    // 0x4371e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4371e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4371e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4371e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4371e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4371e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4371ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4371ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4371f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4371f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4371f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4371F4u;
    {
        const bool branch_taken_0x4371f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4371F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4371F4u;
        // 0x4371f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4371f4) {
            ctx->pc = 0x437284u;
            goto label_437284;
        }
    }
    ctx->pc = 0x4371FCu;
label_4371fc:
    // 0x4371fc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4371FCu;
    {
        const bool branch_taken_0x4371fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4371FCu;
        // 0x437200: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4371fc) {
            ctx->pc = 0x437294u;
            goto label_437294;
        }
    }
    ctx->pc = 0x437204u;
label_437204:
    // 0x437204: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437204u;
    {
        const bool branch_taken_0x437204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437204) {
            ctx->pc = 0x437208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437204u;
            // 0x437208: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437218u;
            goto label_437218;
        }
    }
    ctx->pc = 0x43720Cu;
    // 0x43720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437210: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437210u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x437214: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_437218:
    // 0x437218: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x437218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x43721c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437220: 0xc10d982  jal         func_436608
    ctx->pc = 0x437220u;
    SET_GPR_U32(ctx, 31, 0x437228u);
    ctx->pc = 0x437224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437220u;
    // 0x437224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x437220u, 0x437228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437228u;
label_437228:
    // 0x437228: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x437228u;
    {
        const bool branch_taken_0x437228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437228u;
        // 0x43722c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437228) {
            ctx->pc = 0x4372E0u;
            goto label_4372e0;
        }
    }
    ctx->pc = 0x437230u;
label_437230:
    // 0x437230: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x437230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x437234: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x437234u;
    {
        const bool branch_taken_0x437234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437234u;
        // 0x437238: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437234) {
            ctx->pc = 0x4372DCu;
            goto label_4372dc;
        }
    }
    ctx->pc = 0x43723Cu;
    // 0x43723c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x43723cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437240: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x437240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x437244: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x437244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x437248: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x437248u;
    {
        const bool branch_taken_0x437248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437248u;
        // 0x43724c: 0xa3b60171  sb          $s6, 0x171($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 369), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437248) {
            ctx->pc = 0x4372B4u;
            goto label_4372b4;
        }
    }
    ctx->pc = 0x437250u;
    // 0x437250: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x437250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437254: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x437254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x437258: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x437258u;
    {
        const bool branch_taken_0x437258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437258) {
            ctx->pc = 0x43725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437258u;
            // 0x43725c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437290u;
            goto label_437290;
        }
    }
    ctx->pc = 0x437260u;
    // 0x437260: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x437260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437264: 0x83a50170  lb          $a1, 0x170($sp)
    ctx->pc = 0x437264u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x437268: 0x83a60171  lb          $a2, 0x171($sp)
    ctx->pc = 0x437268u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 369)));
    // 0x43726c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x43726cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x437270: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x437270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x437274: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437278: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43727c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x43727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x437280: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x437280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_437284:
    // 0x437284: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x437288: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x437288u;
    {
        const bool branch_taken_0x437288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437288u;
        // 0x43728c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437288) {
            ctx->pc = 0x4372DCu;
            goto label_4372dc;
        }
    }
    ctx->pc = 0x437290u;
label_437290:
    // 0x437290: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x437290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_437294:
    // 0x437294: 0xc10c190  jal         func_430640
    ctx->pc = 0x437294u;
    SET_GPR_U32(ctx, 31, 0x43729Cu);
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437294u, 0x43729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43729Cu;
label_43729c:
    // 0x43729c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x43729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4372a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4372a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4372a4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4372a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4372a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4372a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4372ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4372ACu;
    {
        const bool branch_taken_0x4372ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4372B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4372ACu;
        // 0x4372b0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4372ac) {
            ctx->pc = 0x4372DCu;
            goto label_4372dc;
        }
    }
    ctx->pc = 0x4372B4u;
label_4372b4:
    // 0x4372b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4372b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4372b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4372B8u;
    {
        const bool branch_taken_0x4372b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4372b8) {
            ctx->pc = 0x4372BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4372B8u;
            // 0x4372bc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4372CCu;
            goto label_4372cc;
        }
    }
    ctx->pc = 0x4372C0u;
    // 0x4372c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4372c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4372c4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x4372c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4372c8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4372c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4372cc:
    // 0x4372cc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x4372ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x4372d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4372d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4372d4: 0xc10d982  jal         func_436608
    ctx->pc = 0x4372D4u;
    SET_GPR_U32(ctx, 31, 0x4372DCu);
    ctx->pc = 0x4372D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4372D4u;
    // 0x4372d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4372D4u, 0x4372DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4372DCu;
label_4372dc:
    // 0x4372dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4372dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4372e0:
    // 0x4372e0: 0x16e2005b  bne         $s7, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x4372E0u;
    {
        const bool branch_taken_0x4372e0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x4372E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4372E0u;
        // 0x4372e4: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4372e0) {
            ctx->pc = 0x437450u;
            goto label_437450;
        }
    }
    ctx->pc = 0x4372E8u;
    // 0x4372e8: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x4372e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x4372ec: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x4372ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4372f0: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x4372f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4372f4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4372F4u;
    {
        const bool branch_taken_0x4372f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4372F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4372F4u;
        // 0x4372f8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4372f4) {
            ctx->pc = 0x43744Cu;
            goto label_43744c;
        }
    }
    ctx->pc = 0x4372FCu;
    // 0x4372fc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4372FCu;
    {
        const bool branch_taken_0x4372fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4372FCu;
        // 0x437300: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4372fc) {
            ctx->pc = 0x4373BCu;
            goto label_4373bc;
        }
    }
    ctx->pc = 0x437304u;
    // 0x437304: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x437304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437308: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43730c: 0x0  nop
    ctx->pc = 0x43730cu;
    // NOP
label_437310:
    // 0x437310: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437314: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x437314u;
    {
        const bool branch_taken_0x437314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437314) {
            ctx->pc = 0x437318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437314u;
            // 0x437318: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437390u;
            goto label_437390;
        }
    }
    ctx->pc = 0x43731Cu;
    // 0x43731c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43731cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437320: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x437320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437324: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x437324u;
    {
        const bool branch_taken_0x437324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437324) {
            ctx->pc = 0x437328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437324u;
            // 0x437328: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437370u;
            goto label_437370;
        }
    }
    ctx->pc = 0x43732Cu;
    // 0x43732c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437330: 0x2646ccc0  addiu       $a2, $s2, -0x3340
    ctx->pc = 0x437330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x437334: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x437334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x437338: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x437338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x43733c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x43733cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x437340: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x437340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x437344: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x437344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x437348: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x437348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43734c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x43734cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x437350: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x437350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x437354: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437358: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43735c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x437360: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x437360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x437364: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x437368: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x437368u;
    {
        const bool branch_taken_0x437368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437368u;
        // 0x43736c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437368) {
            ctx->pc = 0x4373ACu;
            goto label_4373ac;
        }
    }
    ctx->pc = 0x437370u;
label_437370:
    // 0x437370: 0xc10c190  jal         func_430640
    ctx->pc = 0x437370u;
    SET_GPR_U32(ctx, 31, 0x437378u);
    ctx->pc = 0x437374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437370u;
    // 0x437374: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437370u, 0x437378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437378u;
label_437378:
    // 0x437378: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43737c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437380: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x437384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x437384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x437388u;
    {
        const bool branch_taken_0x437388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437388u;
        // 0x43738c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437388) {
            ctx->pc = 0x4373ACu;
            goto label_4373ac;
        }
    }
    ctx->pc = 0x437390u;
label_437390:
    // 0x437390: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x437390u;
    {
        const bool branch_taken_0x437390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437390) {
            ctx->pc = 0x437394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437390u;
            // 0x437394: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437398u;
            goto label_437398;
        }
    }
    ctx->pc = 0x437398u;
label_437398:
    // 0x437398: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x43739c: 0x2645ccc0  addiu       $a1, $s2, -0x3340
    ctx->pc = 0x43739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x4373a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4373a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4373a4: 0xc10d982  jal         func_436608
    ctx->pc = 0x4373A4u;
    SET_GPR_U32(ctx, 31, 0x4373ACu);
    ctx->pc = 0x4373A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4373A4u;
    // 0x4373a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4373A4u, 0x4373ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4373ACu;
label_4373ac:
    // 0x4373ac: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4373acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4373b0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x4373b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4373b4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4373B4u;
    {
        const bool branch_taken_0x4373b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4373b4) {
            ctx->pc = 0x4373B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4373B4u;
            // 0x4373b8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437310;
        }
    }
    ctx->pc = 0x4373BCu;
label_4373bc:
    // 0x4373bc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4373bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4373c0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4373c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4373c4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4373C4u;
    {
        const bool branch_taken_0x4373c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4373c4) {
            ctx->pc = 0x4373C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4373C4u;
            // 0x4373c8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437428u;
            goto label_437428;
        }
    }
    ctx->pc = 0x4373CCu;
    // 0x4373cc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4373ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4373d0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x4373d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4373d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4373D4u;
    {
        const bool branch_taken_0x4373d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4373D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4373D4u;
        // 0x4373d8: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4373d4) {
            ctx->pc = 0x437404u;
            goto label_437404;
        }
    }
    ctx->pc = 0x4373DCu;
    // 0x4373dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4373dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4373e0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4373E0u;
    SET_GPR_U32(ctx, 31, 0x4373E8u);
    ctx->pc = 0x4373E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4373E0u;
    // 0x4373e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4373E0u, 0x4373E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4373E8u;
label_4373e8:
    // 0x4373e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4373e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4373ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4373ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4373f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4373f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4373f4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4373f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4373f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4373f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4373fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4373FCu;
    {
        const bool branch_taken_0x4373fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4373FCu;
        // 0x437400: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4373fc) {
            ctx->pc = 0x43744Cu;
            goto label_43744c;
        }
    }
    ctx->pc = 0x437404u;
label_437404:
    // 0x437404: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437408: 0xc10c190  jal         func_430640
    ctx->pc = 0x437408u;
    SET_GPR_U32(ctx, 31, 0x437410u);
    ctx->pc = 0x43740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437408u;
    // 0x43740c: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437408u, 0x437410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437410u;
label_437410:
    // 0x437410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437414: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437418: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43741c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x437420u;
    {
        const bool branch_taken_0x437420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437420u;
        // 0x437424: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437420) {
            ctx->pc = 0x43744Cu;
            goto label_43744c;
        }
    }
    ctx->pc = 0x437428u;
label_437428:
    // 0x437428: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437428u;
    {
        const bool branch_taken_0x437428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437428) {
            ctx->pc = 0x43742Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437428u;
            // 0x43742c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43743Cu;
            goto label_43743c;
        }
    }
    ctx->pc = 0x437430u;
    // 0x437430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437434: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x437438: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43743c:
    // 0x43743c: 0x2645ccc0  addiu       $a1, $s2, -0x3340
    ctx->pc = 0x43743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x437440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x437440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437444: 0xc10d982  jal         func_436608
    ctx->pc = 0x437444u;
    SET_GPR_U32(ctx, 31, 0x43744Cu);
    ctx->pc = 0x437448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437444u;
    // 0x437448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x437444u, 0x43744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43744Cu;
label_43744c:
    // 0x43744c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x43744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_437450:
    // 0x437450: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x437450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x437454: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x437454u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437458: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x437458u;
    {
        const bool branch_taken_0x437458 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x43745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437458u;
        // 0x43745c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437458) {
            ctx->pc = 0x4375ACu;
            goto label_4375ac;
        }
    }
    ctx->pc = 0x437460u;
    // 0x437460: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x437460u;
    {
        const bool branch_taken_0x437460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437460u;
        // 0x437464: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437460) {
            ctx->pc = 0x43751Cu;
            goto label_43751c;
        }
    }
    ctx->pc = 0x437468u;
    // 0x437468: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x437468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43746c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43746cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_437470:
    // 0x437470: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437474: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x437474u;
    {
        const bool branch_taken_0x437474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437474) {
            ctx->pc = 0x437478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437474u;
            // 0x437478: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4374F0u;
            goto label_4374f0;
        }
    }
    ctx->pc = 0x43747Cu;
    // 0x43747c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43747cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437480: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x437480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437484: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x437484u;
    {
        const bool branch_taken_0x437484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437484) {
            ctx->pc = 0x437488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437484u;
            // 0x437488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4374D0u;
            goto label_4374d0;
        }
    }
    ctx->pc = 0x43748Cu;
    // 0x43748c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437490: 0x2643ccc0  addiu       $v1, $s2, -0x3340
    ctx->pc = 0x437490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x437494: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x437494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x437498: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x437498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x43749c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x43749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4374a0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4374a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4374a4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x4374a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4374a8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x4374a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4374ac: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x4374acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4374b0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x4374b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4374b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4374b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4374b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4374b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4374bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4374bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4374c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4374c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4374c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4374c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4374c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4374C8u;
    {
        const bool branch_taken_0x4374c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4374CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4374C8u;
        // 0x4374cc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4374c8) {
            ctx->pc = 0x43750Cu;
            goto label_43750c;
        }
    }
    ctx->pc = 0x4374D0u;
label_4374d0:
    // 0x4374d0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4374D0u;
    SET_GPR_U32(ctx, 31, 0x4374D8u);
    ctx->pc = 0x4374D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4374D0u;
    // 0x4374d4: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4374D0u, 0x4374D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4374D8u;
label_4374d8:
    // 0x4374d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4374d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4374dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4374dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4374e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4374e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4374e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4374e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4374e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4374E8u;
    {
        const bool branch_taken_0x4374e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4374ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4374E8u;
        // 0x4374ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4374e8) {
            ctx->pc = 0x43750Cu;
            goto label_43750c;
        }
    }
    ctx->pc = 0x4374F0u;
label_4374f0:
    // 0x4374f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4374F0u;
    {
        const bool branch_taken_0x4374f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4374f0) {
            ctx->pc = 0x4374F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4374F0u;
            // 0x4374f4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4374F8u;
            goto label_4374f8;
        }
    }
    ctx->pc = 0x4374F8u;
label_4374f8:
    // 0x4374f8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4374f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4374fc: 0x2645ccc0  addiu       $a1, $s2, -0x3340
    ctx->pc = 0x4374fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x437500: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x437500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x437504: 0xc10d982  jal         func_436608
    ctx->pc = 0x437504u;
    SET_GPR_U32(ctx, 31, 0x43750Cu);
    ctx->pc = 0x437508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437504u;
    // 0x437508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x437504u, 0x43750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43750Cu;
label_43750c:
    // 0x43750c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x43750cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x437510: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x437510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437514: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x437514u;
    {
        const bool branch_taken_0x437514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437514) {
            ctx->pc = 0x437518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437514u;
            // 0x437518: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437470;
        }
    }
    ctx->pc = 0x43751Cu;
label_43751c:
    // 0x43751c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43751cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437520: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437524: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x437524u;
    {
        const bool branch_taken_0x437524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437524) {
            ctx->pc = 0x437528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437524u;
            // 0x437528: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437588u;
            goto label_437588;
        }
    }
    ctx->pc = 0x43752Cu;
    // 0x43752c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437530: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x437530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x437534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x437534u;
    {
        const bool branch_taken_0x437534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437534u;
        // 0x437538: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437534) {
            ctx->pc = 0x437564u;
            goto label_437564;
        }
    }
    ctx->pc = 0x43753Cu;
    // 0x43753c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437540: 0xc10c190  jal         func_430640
    ctx->pc = 0x437540u;
    SET_GPR_U32(ctx, 31, 0x437548u);
    ctx->pc = 0x437544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437540u;
    // 0x437544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437540u, 0x437548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437548u;
label_437548:
    // 0x437548: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43754c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437550: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x437550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x437554: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x437554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x437558: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x43755c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43755Cu;
    {
        const bool branch_taken_0x43755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43755Cu;
        // 0x437560: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43755c) {
            ctx->pc = 0x4375ACu;
            goto label_4375ac;
        }
    }
    ctx->pc = 0x437564u;
label_437564:
    // 0x437564: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437568: 0xc10c190  jal         func_430640
    ctx->pc = 0x437568u;
    SET_GPR_U32(ctx, 31, 0x437570u);
    ctx->pc = 0x43756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437568u;
    // 0x43756c: 0x2645ccc0  addiu       $a1, $s2, -0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437568u, 0x437570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437570u;
label_437570:
    // 0x437570: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437574: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437578: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43757c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437580: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x437580u;
    {
        const bool branch_taken_0x437580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437580u;
        // 0x437584: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437580) {
            ctx->pc = 0x4375ACu;
            goto label_4375ac;
        }
    }
    ctx->pc = 0x437588u;
label_437588:
    // 0x437588: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437588u;
    {
        const bool branch_taken_0x437588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437588) {
            ctx->pc = 0x43758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437588u;
            // 0x43758c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43759Cu;
            goto label_43759c;
        }
    }
    ctx->pc = 0x437590u;
    // 0x437590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437594: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437594u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x437598: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43759c:
    // 0x43759c: 0x2645ccc0  addiu       $a1, $s2, -0x3340
    ctx->pc = 0x43759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954176));
    // 0x4375a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4375a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4375a4: 0xc10d982  jal         func_436608
    ctx->pc = 0x4375A4u;
    SET_GPR_U32(ctx, 31, 0x4375ACu);
    ctx->pc = 0x4375A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4375A4u;
    // 0x4375a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4375A4u, 0x4375ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4375ACu;
label_4375ac:
    // 0x4375ac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4375acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4375b0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4375b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4375b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4375B4u;
    {
        const bool branch_taken_0x4375b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4375B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4375B4u;
        // 0x4375b8: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4375b4) {
            ctx->pc = 0x437618u;
            goto label_437618;
        }
    }
    ctx->pc = 0x4375BCu;
    // 0x4375bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4375bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4375c0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x4375c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4375c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4375C4u;
    {
        const bool branch_taken_0x4375c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4375C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4375C4u;
        // 0x4375c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4375c4) {
            ctx->pc = 0x4375F4u;
            goto label_4375f4;
        }
    }
    ctx->pc = 0x4375CCu;
    // 0x4375cc: 0xc10c190  jal         func_430640
    ctx->pc = 0x4375CCu;
    SET_GPR_U32(ctx, 31, 0x4375D4u);
    ctx->pc = 0x4375D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4375CCu;
    // 0x4375d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4375CCu, 0x4375D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4375D4u;
label_4375d4:
    // 0x4375d4: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x4375d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4375d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4375d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4375dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4375dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4375e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4375e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4375e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4375e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4375e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4375ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4375ECu;
    {
        const bool branch_taken_0x4375ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4375F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4375ECu;
        // 0x4375f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4375ec) {
            ctx->pc = 0x437640u;
            goto label_437640;
        }
    }
    ctx->pc = 0x4375F4u;
label_4375f4:
    // 0x4375f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4375f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4375f8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4375F8u;
    SET_GPR_U32(ctx, 31, 0x437600u);
    ctx->pc = 0x4375FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4375F8u;
    // 0x4375fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4375F8u, 0x437600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437600u;
label_437600:
    // 0x437600: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437604: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437608: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43760c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437610: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x437610u;
    {
        const bool branch_taken_0x437610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437610u;
        // 0x437614: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437610) {
            ctx->pc = 0x437640u;
            goto label_437640;
        }
    }
    ctx->pc = 0x437618u;
label_437618:
    // 0x437618: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x437618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43761c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x43761Cu;
    {
        const bool branch_taken_0x43761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43761c) {
            ctx->pc = 0x437620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43761Cu;
            // 0x437620: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437630u;
            goto label_437630;
        }
    }
    ctx->pc = 0x437624u;
    // 0x437624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437628: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437628u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x43762c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x43762cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_437630:
    // 0x437630: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x437630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437634: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x437634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x437638: 0xc10d982  jal         func_436608
    ctx->pc = 0x437638u;
    SET_GPR_U32(ctx, 31, 0x437640u);
    ctx->pc = 0x43763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437638u;
    // 0x43763c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x437638u, 0x437640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437640u;
label_437640:
    // 0x437640: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x437640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x437644: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x437644u;
    {
        const bool branch_taken_0x437644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x437648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437644u;
        // 0x437648: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437644) {
            ctx->pc = 0x4377ACu;
            goto label_4377ac;
        }
    }
    ctx->pc = 0x43764Cu;
    // 0x43764c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x43764cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x437650: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x437650u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x437654: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x437654u;
    {
        const bool branch_taken_0x437654 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x437658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437654u;
        // 0x437658: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437654) {
            ctx->pc = 0x4377ACu;
            goto label_4377ac;
        }
    }
    ctx->pc = 0x43765Cu;
    // 0x43765c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x43765Cu;
    {
        const bool branch_taken_0x43765c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43765Cu;
        // 0x437660: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43765c) {
            ctx->pc = 0x43771Cu;
            goto label_43771c;
        }
    }
    ctx->pc = 0x437664u;
    // 0x437664: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x437664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437668: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43766c: 0x0  nop
    ctx->pc = 0x43766cu;
    // NOP
label_437670:
    // 0x437670: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437674: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x437674u;
    {
        const bool branch_taken_0x437674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437674) {
            ctx->pc = 0x437678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437674u;
            // 0x437678: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4376F0u;
            goto label_4376f0;
        }
    }
    ctx->pc = 0x43767Cu;
    // 0x43767c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43767cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437680: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x437680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437684: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x437684u;
    {
        const bool branch_taken_0x437684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437684) {
            ctx->pc = 0x437688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437684u;
            // 0x437688: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4376D0u;
            goto label_4376d0;
        }
    }
    ctx->pc = 0x43768Cu;
    // 0x43768c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437690: 0x2646ccb0  addiu       $a2, $s2, -0x3350
    ctx->pc = 0x437690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x437694: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x437694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x437698: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x437698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x43769c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x43769cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4376a0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x4376a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4376a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4376a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4376a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4376a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4376ac: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x4376acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4376b0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x4376b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4376b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4376b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4376bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4376bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4376c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4376c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4376c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4376c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4376c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4376C8u;
    {
        const bool branch_taken_0x4376c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4376CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4376C8u;
        // 0x4376cc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4376c8) {
            ctx->pc = 0x43770Cu;
            goto label_43770c;
        }
    }
    ctx->pc = 0x4376D0u;
label_4376d0:
    // 0x4376d0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4376D0u;
    SET_GPR_U32(ctx, 31, 0x4376D8u);
    ctx->pc = 0x4376D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4376D0u;
    // 0x4376d4: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4376D0u, 0x4376D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4376D8u;
label_4376d8:
    // 0x4376d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4376d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4376dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4376dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4376e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4376e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4376e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4376e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4376e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4376E8u;
    {
        const bool branch_taken_0x4376e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4376ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4376E8u;
        // 0x4376ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4376e8) {
            ctx->pc = 0x43770Cu;
            goto label_43770c;
        }
    }
    ctx->pc = 0x4376F0u;
label_4376f0:
    // 0x4376f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4376F0u;
    {
        const bool branch_taken_0x4376f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4376f0) {
            ctx->pc = 0x4376F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4376F0u;
            // 0x4376f4: 0xa634000e  sh          $s4, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4376F8u;
            goto label_4376f8;
        }
    }
    ctx->pc = 0x4376F8u;
label_4376f8:
    // 0x4376f8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4376f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4376fc: 0x2645ccb0  addiu       $a1, $s2, -0x3350
    ctx->pc = 0x4376fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x437700: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x437700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x437704: 0xc10d982  jal         func_436608
    ctx->pc = 0x437704u;
    SET_GPR_U32(ctx, 31, 0x43770Cu);
    ctx->pc = 0x437708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437704u;
    // 0x437708: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x437704u, 0x43770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43770Cu;
label_43770c:
    // 0x43770c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x43770cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x437710: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x437710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x437714: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x437714u;
    {
        const bool branch_taken_0x437714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437714) {
            ctx->pc = 0x437718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437714u;
            // 0x437718: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437670;
        }
    }
    ctx->pc = 0x43771Cu;
label_43771c:
    // 0x43771c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43771cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437720: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437724: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x437724u;
    {
        const bool branch_taken_0x437724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437724) {
            ctx->pc = 0x437728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437724u;
            // 0x437728: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437788u;
            goto label_437788;
        }
    }
    ctx->pc = 0x43772Cu;
    // 0x43772c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43772cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437730: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x437730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x437734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x437734u;
    {
        const bool branch_taken_0x437734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437734u;
        // 0x437738: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437734) {
            ctx->pc = 0x437764u;
            goto label_437764;
        }
    }
    ctx->pc = 0x43773Cu;
    // 0x43773c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437740: 0xc10c190  jal         func_430640
    ctx->pc = 0x437740u;
    SET_GPR_U32(ctx, 31, 0x437748u);
    ctx->pc = 0x437744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437740u;
    // 0x437744: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437740u, 0x437748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437748u;
label_437748:
    // 0x437748: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43774c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437750: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x437750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x437754: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x437754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x437758: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x43775c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43775Cu;
    {
        const bool branch_taken_0x43775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43775Cu;
        // 0x437760: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43775c) {
            ctx->pc = 0x4377ACu;
            goto label_4377ac;
        }
    }
    ctx->pc = 0x437764u;
label_437764:
    // 0x437764: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437768: 0xc10c190  jal         func_430640
    ctx->pc = 0x437768u;
    SET_GPR_U32(ctx, 31, 0x437770u);
    ctx->pc = 0x43776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437768u;
    // 0x43776c: 0x2645ccb0  addiu       $a1, $s2, -0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437768u, 0x437770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437770u;
label_437770:
    // 0x437770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437774: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437778: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43777c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x437780u;
    {
        const bool branch_taken_0x437780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437780u;
        // 0x437784: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437780) {
            ctx->pc = 0x4377ACu;
            goto label_4377ac;
        }
    }
    ctx->pc = 0x437788u;
label_437788:
    // 0x437788: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437788u;
    {
        const bool branch_taken_0x437788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437788) {
            ctx->pc = 0x43778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437788u;
            // 0x43778c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43779Cu;
            goto label_43779c;
        }
    }
    ctx->pc = 0x437790u;
    // 0x437790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437794: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x437798: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43779c:
    // 0x43779c: 0x2645ccb0  addiu       $a1, $s2, -0x3350
    ctx->pc = 0x43779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954160));
    // 0x4377a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4377a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4377a4: 0xc10d982  jal         func_436608
    ctx->pc = 0x4377A4u;
    SET_GPR_U32(ctx, 31, 0x4377ACu);
    ctx->pc = 0x4377A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4377A4u;
    // 0x4377a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4377A4u, 0x4377ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4377ACu;
label_4377ac:
    // 0x4377ac: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x4377acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x4377b0: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x4377b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x4377b4: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x4377b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4377b8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x4377b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4377bc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x4377bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4377c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4377c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4377c4: 0x1000fc1c  b           . + 4 + (-0x3E4 << 2)
    ctx->pc = 0x4377C4u;
    {
        const bool branch_taken_0x4377c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4377C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4377C4u;
        // 0x4377c8: 0xafa50190  sw          $a1, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4377c4) {
            ctx->pc = 0x436838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436838;
        }
    }
    ctx->pc = 0x4377CCu;
label_4377cc:
    // 0x4377cc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4377ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4377d0:
    // 0x4377d0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4377d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4377d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4377D4u;
    {
        const bool branch_taken_0x4377d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4377D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4377D4u;
        // 0x4377d8: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4377d4) {
            ctx->pc = 0x4377F4u;
            goto label_4377f4;
        }
    }
    ctx->pc = 0x4377DCu;
    // 0x4377dc: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4377dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4377e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4377e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4377e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4377e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4377e8: 0xc10d982  jal         func_436608
    ctx->pc = 0x4377E8u;
    SET_GPR_U32(ctx, 31, 0x4377F0u);
    ctx->pc = 0x4377ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4377E8u;
    // 0x4377ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436608u, 0x4377E8u, 0x4377F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4377F0u;
label_4377f0:
    // 0x4377f0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x4377f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_4377f4:
    // 0x4377f4: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x4377f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x4377f8: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x4377f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4377fc: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x4377fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x437800: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x437800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x437804: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x437804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x437808: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x437808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x43780c: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x43780cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x437810: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x437810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x437814: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x437814u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x437818: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x437818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x43781c: 0x3e00008  jr          $ra
    ctx->pc = 0x43781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43781Cu;
        // 0x437820: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x437824u;
    // 0x437824: 0x0  nop
    ctx->pc = 0x437824u;
    // NOP
    ctx->pc = 0x437828u;
}
