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

// Function: sub_002074F8
// Address: 0x2074f8 - 0x207600
void sub_002074F8_0x2074f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074F8_0x2074f8");
#endif

    switch (ctx->pc) {
        case 0x2074f8u: goto label_2074f8;
        case 0x2074fcu: goto label_2074fc;
        case 0x207500u: goto label_207500;
        case 0x207504u: goto label_207504;
        case 0x207508u: goto label_207508;
        case 0x20750cu: goto label_20750c;
        case 0x207510u: goto label_207510;
        case 0x207514u: goto label_207514;
        case 0x207518u: goto label_207518;
        case 0x20751cu: goto label_20751c;
        case 0x207520u: goto label_207520;
        case 0x207524u: goto label_207524;
        case 0x207528u: goto label_207528;
        case 0x20752cu: goto label_20752c;
        case 0x207530u: goto label_207530;
        case 0x207534u: goto label_207534;
        case 0x207538u: goto label_207538;
        case 0x20753cu: goto label_20753c;
        case 0x207540u: goto label_207540;
        case 0x207544u: goto label_207544;
        case 0x207548u: goto label_207548;
        case 0x20754cu: goto label_20754c;
        case 0x207550u: goto label_207550;
        case 0x207554u: goto label_207554;
        case 0x207558u: goto label_207558;
        case 0x20755cu: goto label_20755c;
        case 0x207560u: goto label_207560;
        case 0x207564u: goto label_207564;
        case 0x207568u: goto label_207568;
        case 0x20756cu: goto label_20756c;
        case 0x207570u: goto label_207570;
        case 0x207574u: goto label_207574;
        case 0x207578u: goto label_207578;
        case 0x20757cu: goto label_20757c;
        case 0x207580u: goto label_207580;
        case 0x207584u: goto label_207584;
        case 0x207588u: goto label_207588;
        case 0x20758cu: goto label_20758c;
        case 0x207590u: goto label_207590;
        case 0x207594u: goto label_207594;
        case 0x207598u: goto label_207598;
        case 0x20759cu: goto label_20759c;
        case 0x2075a0u: goto label_2075a0;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075a8u: goto label_2075a8;
        case 0x2075acu: goto label_2075ac;
        case 0x2075b0u: goto label_2075b0;
        case 0x2075b4u: goto label_2075b4;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075bcu: goto label_2075bc;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075c4u: goto label_2075c4;
        case 0x2075c8u: goto label_2075c8;
        case 0x2075ccu: goto label_2075cc;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075d8u: goto label_2075d8;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075e0u: goto label_2075e0;
        case 0x2075e4u: goto label_2075e4;
        case 0x2075e8u: goto label_2075e8;
        case 0x2075ecu: goto label_2075ec;
        case 0x2075f0u: goto label_2075f0;
        case 0x2075f4u: goto label_2075f4;
        case 0x2075f8u: goto label_2075f8;
        case 0x2075fcu: goto label_2075fc;
        default: break;
    }

    ctx->pc = 0x2074f8u;

label_2074f8:
    // 0x2074f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2074fc:
    // 0x2074fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_207500:
    // 0x207500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207504:
    // 0x207504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207508:
    // 0x207508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20750c:
    // 0x20750c: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_207510:
    // 0x207510: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x207510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207514:
    // 0x207514: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x207514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207518:
    // 0x207518: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x207518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20751c:
    // 0x20751c: 0x0  nop
    ctx->pc = 0x20751cu;
    // NOP
label_207520:
    // 0x207520: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_207524:
    if (ctx->pc == 0x207524u) {
        ctx->pc = 0x207524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207520u;
        // 0x207524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207528u;
        goto label_207528;
    }
    ctx->pc = 0x207520u;
    {
        const bool branch_taken_0x207520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207520u;
        // 0x207524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207520) {
            ctx->pc = 0x2075ECu;
            goto label_2075ec;
        }
    }
    ctx->pc = 0x207528u;
label_207528:
    // 0x207528: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x207528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20752c:
    // 0x20752c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_207530:
    if (ctx->pc == 0x207530u) {
        ctx->pc = 0x207530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20752Cu;
        // 0x207530: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207534u;
        goto label_207534;
    }
    ctx->pc = 0x20752Cu;
    {
        const bool branch_taken_0x20752c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x207530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20752Cu;
        // 0x207530: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20752c) {
            ctx->pc = 0x207550u;
            goto label_207550;
        }
    }
    ctx->pc = 0x207534u;
label_207534:
    // 0x207534: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_207538:
    // 0x207538: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20753c:
    // 0x20753c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_207540:
    // 0x207540: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x207540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_207544:
    // 0x207544: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x207544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_207548:
    // 0x207548: 0x10000025  b           . + 4 + (0x25 << 2)
label_20754c:
    if (ctx->pc == 0x20754Cu) {
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207550u;
        goto label_207550;
    }
    ctx->pc = 0x207548u;
    {
        const bool branch_taken_0x207548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207548) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x207550u;
label_207550:
    // 0x207550: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
label_207554:
    if (ctx->pc == 0x207554u) {
        ctx->pc = 0x207554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207550u;
        // 0x207554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207558u;
        goto label_207558;
    }
    ctx->pc = 0x207550u;
    {
        const bool branch_taken_0x207550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x207554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207550u;
        // 0x207554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207550) {
            ctx->pc = 0x2075ECu;
            goto label_2075ec;
        }
    }
    ctx->pc = 0x207558u;
label_207558:
    // 0x207558: 0xc0750fa  jal         func_1D43E8
label_20755c:
    if (ctx->pc == 0x20755Cu) {
        ctx->pc = 0x20755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207558u;
        // 0x20755c: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207560u;
        goto label_207560;
    }
    ctx->pc = 0x207558u;
    SET_GPR_U32(ctx, 31, 0x207560u);
    ctx->pc = 0x20755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207558u;
    // 0x20755c: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x207558u, 0x207560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207560u;
label_207560:
    // 0x207560: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207564:
    // 0x207564: 0xc0750fc  jal         func_1D43F0
label_207568:
    if (ctx->pc == 0x207568u) {
        ctx->pc = 0x207568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207564u;
        // 0x207568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20756Cu;
        goto label_20756c;
    }
    ctx->pc = 0x207564u;
    SET_GPR_U32(ctx, 31, 0x20756Cu);
    ctx->pc = 0x207568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207564u;
    // 0x207568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x207564u, 0x20756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20756Cu;
label_20756c:
    // 0x20756c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_207570:
    if (ctx->pc == 0x207570u) {
        ctx->pc = 0x207570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20756Cu;
        // 0x207570: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207574u;
        goto label_207574;
    }
    ctx->pc = 0x20756Cu;
    {
        const bool branch_taken_0x20756c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20756c) {
            ctx->pc = 0x207570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20756Cu;
            // 0x207570: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x207574u;
label_207574:
    // 0x207574: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_207578:
    // 0x207578: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20757c:
    // 0x20757c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x20757cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_207580:
    // 0x207580: 0x24a58b00  addiu       $a1, $a1, -0x7500
    ctx->pc = 0x207580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937344));
label_207584:
    // 0x207584: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_207588:
    // 0x207588: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20758c:
    // 0x20758c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_207590:
    // 0x207590: 0x40f809  jalr        $v0
label_207594:
    if (ctx->pc == 0x207594u) {
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207590u;
        // 0x207594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207598u;
        goto label_207598;
    }
    ctx->pc = 0x207590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207598u);
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207590u;
        // 0x207594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207590u, 0x207598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207598u;
label_207598:
    // 0x207598: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20759c:
    // 0x20759c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2075a0:
    // 0x2075a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2075a4:
    // 0x2075a4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2075a8:
    // 0x2075a8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2075ac:
    // 0x2075ac: 0x60f809  jalr        $v1
label_2075b0:
    if (ctx->pc == 0x2075B0u) {
        ctx->pc = 0x2075B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075ACu;
        // 0x2075b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075B4u;
        goto label_2075b4;
    }
    ctx->pc = 0x2075ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2075B4u);
        ctx->pc = 0x2075B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075ACu;
        // 0x2075b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2075ACu, 0x2075B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2075B4u;
label_2075b4:
    // 0x2075b4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2075b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2075b8:
    // 0x2075b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2075bc:
    // 0x2075bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2075c0:
    // 0x2075c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2075c4:
    // 0x2075c4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2075c8:
    // 0x2075c8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2075cc:
    // 0x2075cc: 0x60f809  jalr        $v1
label_2075d0:
    if (ctx->pc == 0x2075D0u) {
        ctx->pc = 0x2075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075CCu;
        // 0x2075d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075D4u;
        goto label_2075d4;
    }
    ctx->pc = 0x2075CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2075D4u);
        ctx->pc = 0x2075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075CCu;
        // 0x2075d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2075CCu, 0x2075D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2075D4u;
label_2075d4:
    // 0x2075d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2075d8:
    // 0x2075d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2075dc:
    // 0x2075dc: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2075dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2075e0:
    // 0x2075e0: 0xc043f0c  jal         func_10FC30
label_2075e4:
    if (ctx->pc == 0x2075E4u) {
        ctx->pc = 0x2075E8u;
        goto label_2075e8;
    }
    ctx->pc = 0x2075E0u;
    SET_GPR_U32(ctx, 31, 0x2075E8u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2075E0u, 0x2075E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075E8u;
label_2075e8:
    // 0x2075e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2075ec:
    // 0x2075ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2075ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2075f0:
    // 0x2075f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2075f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2075f4:
    // 0x2075f4: 0x3e00008  jr          $ra
label_2075f8:
    if (ctx->pc == 0x2075F8u) {
        ctx->pc = 0x2075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075F4u;
        // 0x2075f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2075FCu;
        goto label_2075fc;
    }
    ctx->pc = 0x2075F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075F4u;
        // 0x2075f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2075F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2075FCu;
label_2075fc:
    // 0x2075fc: 0x0  nop
    ctx->pc = 0x2075fcu;
    // NOP
    ctx->pc = 0x207600u;
}
