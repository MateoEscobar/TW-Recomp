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

// Function: sub_003D7568
// Address: 0x3d7568 - 0x3d7678
void sub_003D7568_0x3d7568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7568_0x3d7568");
#endif

    switch (ctx->pc) {
        case 0x3d7568u: goto label_3d7568;
        case 0x3d756cu: goto label_3d756c;
        case 0x3d7570u: goto label_3d7570;
        case 0x3d7574u: goto label_3d7574;
        case 0x3d7578u: goto label_3d7578;
        case 0x3d757cu: goto label_3d757c;
        case 0x3d7580u: goto label_3d7580;
        case 0x3d7584u: goto label_3d7584;
        case 0x3d7588u: goto label_3d7588;
        case 0x3d758cu: goto label_3d758c;
        case 0x3d7590u: goto label_3d7590;
        case 0x3d7594u: goto label_3d7594;
        case 0x3d7598u: goto label_3d7598;
        case 0x3d759cu: goto label_3d759c;
        case 0x3d75a0u: goto label_3d75a0;
        case 0x3d75a4u: goto label_3d75a4;
        case 0x3d75a8u: goto label_3d75a8;
        case 0x3d75acu: goto label_3d75ac;
        case 0x3d75b0u: goto label_3d75b0;
        case 0x3d75b4u: goto label_3d75b4;
        case 0x3d75b8u: goto label_3d75b8;
        case 0x3d75bcu: goto label_3d75bc;
        case 0x3d75c0u: goto label_3d75c0;
        case 0x3d75c4u: goto label_3d75c4;
        case 0x3d75c8u: goto label_3d75c8;
        case 0x3d75ccu: goto label_3d75cc;
        case 0x3d75d0u: goto label_3d75d0;
        case 0x3d75d4u: goto label_3d75d4;
        case 0x3d75d8u: goto label_3d75d8;
        case 0x3d75dcu: goto label_3d75dc;
        case 0x3d75e0u: goto label_3d75e0;
        case 0x3d75e4u: goto label_3d75e4;
        case 0x3d75e8u: goto label_3d75e8;
        case 0x3d75ecu: goto label_3d75ec;
        case 0x3d75f0u: goto label_3d75f0;
        case 0x3d75f4u: goto label_3d75f4;
        case 0x3d75f8u: goto label_3d75f8;
        case 0x3d75fcu: goto label_3d75fc;
        case 0x3d7600u: goto label_3d7600;
        case 0x3d7604u: goto label_3d7604;
        case 0x3d7608u: goto label_3d7608;
        case 0x3d760cu: goto label_3d760c;
        case 0x3d7610u: goto label_3d7610;
        case 0x3d7614u: goto label_3d7614;
        case 0x3d7618u: goto label_3d7618;
        case 0x3d761cu: goto label_3d761c;
        case 0x3d7620u: goto label_3d7620;
        case 0x3d7624u: goto label_3d7624;
        case 0x3d7628u: goto label_3d7628;
        case 0x3d762cu: goto label_3d762c;
        case 0x3d7630u: goto label_3d7630;
        case 0x3d7634u: goto label_3d7634;
        case 0x3d7638u: goto label_3d7638;
        case 0x3d763cu: goto label_3d763c;
        case 0x3d7640u: goto label_3d7640;
        case 0x3d7644u: goto label_3d7644;
        case 0x3d7648u: goto label_3d7648;
        case 0x3d764cu: goto label_3d764c;
        case 0x3d7650u: goto label_3d7650;
        case 0x3d7654u: goto label_3d7654;
        case 0x3d7658u: goto label_3d7658;
        case 0x3d765cu: goto label_3d765c;
        case 0x3d7660u: goto label_3d7660;
        case 0x3d7664u: goto label_3d7664;
        case 0x3d7668u: goto label_3d7668;
        case 0x3d766cu: goto label_3d766c;
        case 0x3d7670u: goto label_3d7670;
        case 0x3d7674u: goto label_3d7674;
        default: break;
    }

    ctx->pc = 0x3d7568u;

label_3d7568:
    // 0x3d7568: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3d7568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3d756c:
    // 0x3d756c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3d756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3d7570:
    // 0x3d7570: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3d7570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3d7574:
    // 0x3d7574: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3d7574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3d7578:
    // 0x3d7578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d757c:
    // 0x3d757c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d7580:
    // 0x3d7580: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7584:
    // 0x3d7584: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7588:
    // 0x3d7588: 0x40f809  jalr        $v0
label_3d758c:
    if (ctx->pc == 0x3D758Cu) {
        ctx->pc = 0x3D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7588u;
        // 0x3d758c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7590u;
        goto label_3d7590;
    }
    ctx->pc = 0x3D7588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7590u);
        ctx->pc = 0x3D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7588u;
        // 0x3d758c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7588u, 0x3D7590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7590u;
label_3d7590:
    // 0x3d7590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7594:
    // 0x3d7594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d7598:
    // 0x3d7598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d759c:
    // 0x3d759c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d75a0:
    // 0x3d75a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d75a4:
    // 0x3d75a4: 0x0  nop
    ctx->pc = 0x3d75a4u;
    // NOP
label_3d75a8:
    // 0x3d75a8: 0x0  nop
    ctx->pc = 0x3d75a8u;
    // NOP
label_3d75ac:
    // 0x3d75ac: 0x0  nop
    ctx->pc = 0x3d75acu;
    // NOP
label_3d75b0:
    // 0x3d75b0: 0x0  nop
    ctx->pc = 0x3d75b0u;
    // NOP
label_3d75b4:
    // 0x3d75b4: 0x0  nop
    ctx->pc = 0x3d75b4u;
    // NOP
label_3d75b8:
    // 0x3d75b8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d75bc:
    if (ctx->pc == 0x3D75BCu) {
        ctx->pc = 0x3D75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75B8u;
        // 0x3d75bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D75C0u;
        goto label_3d75c0;
    }
    ctx->pc = 0x3D75B8u;
    {
        const bool branch_taken_0x3d75b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75B8u;
        // 0x3d75bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75b8) {
            ctx->pc = 0x3D75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d75a8;
        }
    }
    ctx->pc = 0x3D75C0u;
label_3d75c0:
    // 0x3d75c0: 0xc138ddc  jal         func_4E3770
label_3d75c4:
    if (ctx->pc == 0x3D75C4u) {
        ctx->pc = 0x3D75C8u;
        goto label_3d75c8;
    }
    ctx->pc = 0x3D75C0u;
    SET_GPR_U32(ctx, 31, 0x3D75C8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D75C0u, 0x3D75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D75C8u;
label_3d75c8:
    // 0x3d75c8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d75cc:
    // 0x3d75cc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d75d0:
    // 0x3d75d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d75d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d75d4:
    // 0x3d75d4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_3d75d8:
    if (ctx->pc == 0x3D75D8u) {
        ctx->pc = 0x3D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75D4u;
        // 0x3d75d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D75DCu;
        goto label_3d75dc;
    }
    ctx->pc = 0x3D75D4u;
    {
        const bool branch_taken_0x3d75d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75D4u;
        // 0x3d75d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75d4) {
            ctx->pc = 0x3D7664u;
            goto label_3d7664;
        }
    }
    ctx->pc = 0x3D75DCu;
label_3d75dc:
    // 0x3d75dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d75e0:
    // 0x3d75e0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3d75e4:
    if (ctx->pc == 0x3D75E4u) {
        ctx->pc = 0x3D75E8u;
        goto label_3d75e8;
    }
    ctx->pc = 0x3D75E0u;
    {
        const bool branch_taken_0x3d75e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d75e0) {
            ctx->pc = 0x3D7604u;
            goto label_3d7604;
        }
    }
    ctx->pc = 0x3D75E8u;
label_3d75e8:
    // 0x3d75e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d75ec:
    // 0x3d75ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3d75ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d75f0:
    // 0x3d75f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3d75f4:
    if (ctx->pc == 0x3D75F4u) {
        ctx->pc = 0x3D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75F0u;
        // 0x3d75f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D75F8u;
        goto label_3d75f8;
    }
    ctx->pc = 0x3D75F0u;
    {
        const bool branch_taken_0x3d75f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75F0u;
        // 0x3d75f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75f0) {
            ctx->pc = 0x3D7638u;
            goto label_3d7638;
        }
    }
    ctx->pc = 0x3D75F8u;
label_3d75f8:
    // 0x3d75f8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3d75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3d75fc:
    // 0x3d75fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d7600:
    if (ctx->pc == 0x3D7600u) {
        ctx->pc = 0x3D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75FCu;
        // 0x3d7600: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7604u;
        goto label_3d7604;
    }
    ctx->pc = 0x3D75FCu;
    {
        const bool branch_taken_0x3d75fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75FCu;
        // 0x3d7600: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75fc) {
            ctx->pc = 0x3D762Cu;
            goto label_3d762c;
        }
    }
    ctx->pc = 0x3D7604u;
label_3d7604:
    // 0x3d7604: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_3d7608:
    if (ctx->pc == 0x3D7608u) {
        ctx->pc = 0x3D7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7604u;
        // 0x3d7608: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D760Cu;
        goto label_3d760c;
    }
    ctx->pc = 0x3D7604u;
    {
        const bool branch_taken_0x3d7604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d7604) {
            ctx->pc = 0x3D7608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7604u;
            // 0x3d7608: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7654u;
            goto label_3d7654;
        }
    }
    ctx->pc = 0x3D760Cu;
label_3d760c:
    // 0x3d760c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7610:
    // 0x3d7610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7614:
    // 0x3d7614: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3d7618:
    if (ctx->pc == 0x3D7618u) {
        ctx->pc = 0x3D761Cu;
        goto label_3d761c;
    }
    ctx->pc = 0x3D7614u;
    {
        const bool branch_taken_0x3d7614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7614) {
            ctx->pc = 0x3D7624u;
            goto label_3d7624;
        }
    }
    ctx->pc = 0x3D761Cu;
label_3d761c:
    // 0x3d761c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3d7620:
    if (ctx->pc == 0x3D7620u) {
        ctx->pc = 0x3D7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D761Cu;
        // 0x3d7620: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7624u;
        goto label_3d7624;
    }
    ctx->pc = 0x3D761Cu;
    {
        const bool branch_taken_0x3d761c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d761c) {
            ctx->pc = 0x3D7620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D761Cu;
            // 0x3d7620: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7634u;
            goto label_3d7634;
        }
    }
    ctx->pc = 0x3D7624u;
label_3d7624:
    // 0x3d7624: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d7624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d7628:
    // 0x3d7628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d762c:
    // 0x3d762c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3d762cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3d7630:
    // 0x3d7630: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7634:
    // 0x3d7634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d7634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d7638:
    // 0x3d7638: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3d7638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3d763c:
    // 0x3d763c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d7640:
    // 0x3d7640: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3d7640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3d7644:
    // 0x3d7644: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d7644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d7648:
    // 0x3d7648: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d7648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d764c:
    // 0x3d764c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d764cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d7650:
    // 0x3d7650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7654:
    // 0x3d7654: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d7658:
    // 0x3d7658: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3d765c:
    if (ctx->pc == 0x3D765Cu) {
        ctx->pc = 0x3D765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7658u;
        // 0x3d765c: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7660u;
        goto label_3d7660;
    }
    ctx->pc = 0x3D7658u;
    {
        const bool branch_taken_0x3d7658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7658) {
            ctx->pc = 0x3D765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7658u;
            // 0x3d765c: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7660u;
            goto label_3d7660;
        }
    }
    ctx->pc = 0x3D7660u;
label_3d7660:
    // 0x3d7660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7664:
    // 0x3d7664: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3d7664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d7668:
    // 0x3d7668: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3d7668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d766c:
    // 0x3d766c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3d766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d7670:
    // 0x3d7670: 0x3e00008  jr          $ra
label_3d7674:
    if (ctx->pc == 0x3D7674u) {
        ctx->pc = 0x3D7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7670u;
        // 0x3d7674: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7678u;
        goto label_fallthrough_0x3d7670;
    }
    ctx->pc = 0x3D7670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7670u;
        // 0x3d7674: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7670:
    ctx->pc = 0x3D7678u;
}
