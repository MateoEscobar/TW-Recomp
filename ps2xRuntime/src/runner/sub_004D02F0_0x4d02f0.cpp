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

// Function: sub_004D02F0
// Address: 0x4d02f0 - 0x4d0468
void sub_004D02F0_0x4d02f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D02F0_0x4d02f0");
#endif

    switch (ctx->pc) {
        case 0x4d0324u: goto label_4d0324;
        case 0x4d03d4u: goto label_4d03d4;
        case 0x4d0414u: goto label_4d0414;
        case 0x4d0424u: goto label_4d0424;
        case 0x4d0434u: goto label_4d0434;
        default: break;
    }

    ctx->pc = 0x4d02f0u;

    // 0x4d02f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d02f4: 0x2406017c  addiu       $a2, $zero, 0x17C
    ctx->pc = 0x4d02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x4d02f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d02fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d02fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d0300: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d0300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0304: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d0304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0308: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d0308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d030c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4d030cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d0314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d0318: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d031c: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4D031Cu;
    SET_GPR_U32(ctx, 31, 0x4D0324u);
    ctx->pc = 0x4D0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D031Cu;
    // 0x4d0320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4D031Cu, 0x4D0324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0324u;
label_4d0324:
    // 0x4d0324: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4d0324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d0328: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x4d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x4d032c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x4d032cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x4d0330: 0x3c0a004d  lui         $t2, 0x4D
    ctx->pc = 0x4d0330u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)77 << 16));
    // 0x4d0334: 0x3c0b004d  lui         $t3, 0x4D
    ctx->pc = 0x4d0334u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)77 << 16));
    // 0x4d0338: 0x3c0c004d  lui         $t4, 0x4D
    ctx->pc = 0x4d0338u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)77 << 16));
    // 0x4d033c: 0x3c0d004d  lui         $t5, 0x4D
    ctx->pc = 0x4d033cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)77 << 16));
    // 0x4d0340: 0x3c0e004d  lui         $t6, 0x4D
    ctx->pc = 0x4d0340u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)77 << 16));
    // 0x4d0344: 0x3c0f004d  lui         $t7, 0x4D
    ctx->pc = 0x4d0344u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)77 << 16));
    // 0x4d0348: 0x24420468  addiu       $v0, $v0, 0x468
    ctx->pc = 0x4d0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
    // 0x4d034c: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x4d034cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4d0350: 0x24630470  addiu       $v1, $v1, 0x470
    ctx->pc = 0x4d0350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1136));
    // 0x4d0354: 0x254a0478  addiu       $t2, $t2, 0x478
    ctx->pc = 0x4d0354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1144));
    // 0x4d0358: 0x256b0480  addiu       $t3, $t3, 0x480
    ctx->pc = 0x4d0358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1152));
    // 0x4d035c: 0x258c04b8  addiu       $t4, $t4, 0x4B8
    ctx->pc = 0x4d035cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1208));
    // 0x4d0360: 0x25ad0508  addiu       $t5, $t5, 0x508
    ctx->pc = 0x4d0360u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1288));
    // 0x4d0364: 0x25ce04f8  addiu       $t6, $t6, 0x4F8
    ctx->pc = 0x4d0364u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1272));
    // 0x4d0368: 0x25ef0518  addiu       $t7, $t7, 0x518
    ctx->pc = 0x4d0368u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1304));
    // 0x4d036c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4d036cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d0370: 0xae870074  sw          $a3, 0x74($s4)
    ctx->pc = 0x4d0370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 7));
    // 0x4d0374: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x4d0374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    // 0x4d0378: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d0378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d037c: 0xae920070  sw          $s2, 0x70($s4)
    ctx->pc = 0x4d037cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 18));
    // 0x4d0380: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4d0380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0384: 0xae930078  sw          $s3, 0x78($s4)
    ctx->pc = 0x4d0384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 19));
    // 0x4d0388: 0x2684008c  addiu       $a0, $s4, 0x8C
    ctx->pc = 0x4d0388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
    // 0x4d038c: 0xae800088  sw          $zero, 0x88($s4)
    ctx->pc = 0x4d038cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 0));
    // 0x4d0390: 0x3405bb80  ori         $a1, $zero, 0xBB80
    ctx->pc = 0x4d0390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x4d0394: 0xae800068  sw          $zero, 0x68($s4)
    ctx->pc = 0x4d0394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
    // 0x4d0398: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4d0398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d039c: 0xae910080  sw          $s1, 0x80($s4)
    ctx->pc = 0x4d039cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 17));
    // 0x4d03a0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x4d03a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d03a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4d03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4d03a8: 0xae91007c  sw          $s1, 0x7C($s4)
    ctx->pc = 0x4d03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 17));
    // 0x4d03ac: 0xae900064  sw          $s0, 0x64($s4)
    ctx->pc = 0x4d03acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 16));
    // 0x4d03b0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x4d03b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x4d03b4: 0xae8a0008  sw          $t2, 0x8($s4)
    ctx->pc = 0x4d03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 10));
    // 0x4d03b8: 0xae8b000c  sw          $t3, 0xC($s4)
    ctx->pc = 0x4d03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 11));
    // 0x4d03bc: 0xae8c0010  sw          $t4, 0x10($s4)
    ctx->pc = 0x4d03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 12));
    // 0x4d03c0: 0xae8d0014  sw          $t5, 0x14($s4)
    ctx->pc = 0x4d03c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 13));
    // 0x4d03c4: 0xae8e0018  sw          $t6, 0x18($s4)
    ctx->pc = 0x4d03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 14));
    // 0x4d03c8: 0xae8f001c  sw          $t7, 0x1C($s4)
    ctx->pc = 0x4d03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 15));
    // 0x4d03cc: 0xc1361ac  jal         func_4D86B0
    ctx->pc = 0x4D03CCu;
    SET_GPR_U32(ctx, 31, 0x4D03D4u);
    ctx->pc = 0x4D03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D03CCu;
    // 0x4d03d0: 0xae900060  sw          $s0, 0x60($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D86B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D86B0u, 0x4D03CCu, 0x4D03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D03D4u;
label_4d03d4:
    // 0x4d03d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4d03d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4d03d8: 0xae8000a8  sw          $zero, 0xA8($s4)
    ctx->pc = 0x4d03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 0));
    // 0x4d03dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d03dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d03e0: 0x8c4239d0  lw          $v0, 0x39D0($v0)
    ctx->pc = 0x4d03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5339D0u));
    // 0x4d03e4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4D03E4u;
    {
        const bool branch_taken_0x4d03e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D03E4u;
        // 0x4d03e8: 0xae8200ac  sw          $v0, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d03e4) {
            ctx->pc = 0x4D043Cu;
            goto label_4d043c;
        }
    }
    ctx->pc = 0x4D03ECu;
    // 0x4d03ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4d03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4d03f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4d03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4d03f4: 0x24504ac0  addiu       $s0, $v0, 0x4AC0
    ctx->pc = 0x4d03f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
    // 0x4d03f8: 0x8c654ae0  lw          $a1, 0x4AE0($v1)
    ctx->pc = 0x4d03f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x714AE0u));
    // 0x4d03fc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x4d03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x4d0400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d0400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0404: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x4d0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x4d0408: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x4d0408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x714AD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714AD0u, _value); } while (0);
    // 0x4d040c: 0xc133366  jal         func_4CCD98
    ctx->pc = 0x4D040Cu;
    SET_GPR_U32(ctx, 31, 0x4D0414u);
    ctx->pc = 0x4D0410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D040Cu;
    // 0x4d0410: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCD98u, 0x4D040Cu, 0x4D0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0414u;
label_4d0414:
    // 0x4d0414: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D0414u;
    {
        const bool branch_taken_0x4d0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0414u;
        // 0x4d0418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0414) {
            ctx->pc = 0x4D0448u;
            goto label_4d0448;
        }
    }
    ctx->pc = 0x4D041Cu;
    // 0x4d041c: 0xc13349c  jal         func_4CD270
    ctx->pc = 0x4D041Cu;
    SET_GPR_U32(ctx, 31, 0x4D0424u);
    ctx->pc = 0x4D0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D041Cu;
    // 0x4d0420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD270u, 0x4D041Cu, 0x4D0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0424u;
label_4d0424:
    // 0x4d0424: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D0424u;
    {
        const bool branch_taken_0x4d0424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0424) {
            ctx->pc = 0x4D0428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0424u;
            // 0x4d0428: 0xae3439d0  sw          $s4, 0x39D0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 14800), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0444u;
            goto label_4d0444;
        }
    }
    ctx->pc = 0x4D042Cu;
    // 0x4d042c: 0xc1333d6  jal         func_4CCF58
    ctx->pc = 0x4D042Cu;
    SET_GPR_U32(ctx, 31, 0x4D0434u);
    ctx->pc = 0x4D0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D042Cu;
    // 0x4d0430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCF58u, 0x4D042Cu, 0x4D0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0434u;
label_4d0434:
    // 0x4d0434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0434u;
    {
        const bool branch_taken_0x4d0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0434u;
        // 0x4d0438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0434) {
            ctx->pc = 0x4D0448u;
            goto label_4d0448;
        }
    }
    ctx->pc = 0x4D043Cu;
label_4d043c:
    // 0x4d043c: 0xac5400a8  sw          $s4, 0xA8($v0)
    ctx->pc = 0x4d043cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 20));
    // 0x4d0440: 0xae3439d0  sw          $s4, 0x39D0($s1)
    ctx->pc = 0x4d0440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14800), GPR_U32(ctx, 20));
label_4d0444:
    // 0x4d0444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0448:
    // 0x4d0448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d044c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d044cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0450: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0454: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d0454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0458: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d0458u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d045c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d0460: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0460u;
        // 0x4d0464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0468u;
}
