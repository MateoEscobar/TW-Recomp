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

// Function: sub_004CC738
// Address: 0x4cc738 - 0x4cc898
void sub_004CC738_0x4cc738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC738_0x4cc738");
#endif

    switch (ctx->pc) {
        case 0x4cc780u: goto label_4cc780;
        case 0x4cc7a4u: goto label_4cc7a4;
        case 0x4cc7c8u: goto label_4cc7c8;
        case 0x4cc7d4u: goto label_4cc7d4;
        case 0x4cc800u: goto label_4cc800;
        case 0x4cc80cu: goto label_4cc80c;
        case 0x4cc830u: goto label_4cc830;
        case 0x4cc838u: goto label_4cc838;
        case 0x4cc844u: goto label_4cc844;
        case 0x4cc85cu: goto label_4cc85c;
        default: break;
    }

    ctx->pc = 0x4cc738u;

    // 0x4cc738: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cc738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4cc73c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cc73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cc740: 0x8c623960  lw          $v0, 0x3960($v1)
    ctx->pc = 0x4cc740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x533960u));
    // 0x4cc744: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4cc744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4cc748: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4cc748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4cc74c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4cc74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4cc750: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4cc750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4cc754: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4CC754u;
    {
        const bool branch_taken_0x4cc754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC754u;
        // 0x4cc758: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc754) {
            ctx->pc = 0x4CC874u;
            goto label_4cc874;
        }
    }
    ctx->pc = 0x4CC75Cu;
    // 0x4cc75c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4cc760: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4CC760u;
    {
        const bool branch_taken_0x4cc760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC760u;
        // 0x4cc764: 0xac623960  sw          $v0, 0x3960($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc760) {
            ctx->pc = 0x4CC874u;
            goto label_4cc874;
        }
    }
    ctx->pc = 0x4CC768u;
    // 0x4cc768: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc76c: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4cc76cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
    // 0x4cc770: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cc770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7146ACu));
    // 0x4cc774: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CC774u;
    {
        const bool branch_taken_0x4cc774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC774u;
        // 0x4cc778: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc774) {
            ctx->pc = 0x4CC79Cu;
            goto label_4cc79c;
        }
    }
    ctx->pc = 0x4CC77Cu;
    // 0x4cc77c: 0x0  nop
    ctx->pc = 0x4cc77cu;
    // NOP
label_4cc780:
    // 0x4cc780: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
    // 0x4cc784: 0x0  nop
    ctx->pc = 0x4cc784u;
    // NOP
    // 0x4cc788: 0x0  nop
    ctx->pc = 0x4cc788u;
    // NOP
    // 0x4cc78c: 0x0  nop
    ctx->pc = 0x4cc78cu;
    // NOP
    // 0x4cc790: 0x0  nop
    ctx->pc = 0x4cc790u;
    // NOP
    // 0x4cc794: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC794u;
    {
        const bool branch_taken_0x4cc794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc794) {
            ctx->pc = 0x4CC780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc780;
        }
    }
    ctx->pc = 0x4CC79Cu;
label_4cc79c:
    // 0x4cc79c: 0xc133226  jal         func_4CC898
    ctx->pc = 0x4CC79Cu;
    SET_GPR_U32(ctx, 31, 0x4CC7A4u);
    ctx->pc = 0x4CC898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC898u, 0x4CC79Cu, 0x4CC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC7A4u;
label_4cc7a4:
    // 0x4cc7a4: 0x26444748  addiu       $a0, $s2, 0x4748
    ctx->pc = 0x4cc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18248));
    // 0x4cc7a8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc7ac: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4cc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4cc7b0: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x4cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
    // 0x4cc7b4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4CC7B4u;
    {
        const bool branch_taken_0x4cc7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC7B4u;
        // 0x4cc7b8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc7b4) {
            ctx->pc = 0x4CC7E8u;
            goto label_4cc7e8;
        }
    }
    ctx->pc = 0x4CC7BCu;
    // 0x4cc7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cc7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc7c0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x4cc7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc7c4: 0x0  nop
    ctx->pc = 0x4cc7c4u;
    // NOP
label_4cc7c8:
    // 0x4cc7c8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4cc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4cc7cc: 0xc1333d6  jal         func_4CCF58
    ctx->pc = 0x4CC7CCu;
    SET_GPR_U32(ctx, 31, 0x4CC7D4u);
    ctx->pc = 0x4CCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCF58u, 0x4CC7CCu, 0x4CC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC7D4u;
label_4cc7d4:
    // 0x4cc7d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4cc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4cc7d8: 0x0  nop
    ctx->pc = 0x4cc7d8u;
    // NOP
    // 0x4cc7dc: 0x1471fffa  bne         $v1, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC7DCu;
    {
        const bool branch_taken_0x4cc7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x4CC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC7DCu;
        // 0x4cc7e0: 0x26444748  addiu       $a0, $s2, 0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc7dc) {
            ctx->pc = 0x4CC7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc7c8;
        }
    }
    ctx->pc = 0x4CC7E4u;
    // 0x4cc7e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc7e8:
    // 0x4cc7e8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x4cc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x4cc7ec: 0x244247a8  addiu       $v0, $v0, 0x47A8
    ctx->pc = 0x4cc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18344));
    // 0x4cc7f0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4CC7F0u;
    {
        const bool branch_taken_0x4cc7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC7F0u;
        // 0x4cc7f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc7f0) {
            ctx->pc = 0x4CC81Cu;
            goto label_4cc81c;
        }
    }
    ctx->pc = 0x4CC7F8u;
    // 0x4cc7f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cc7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc7fc: 0x0  nop
    ctx->pc = 0x4cc7fcu;
    // NOP
label_4cc800:
    // 0x4cc800: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4cc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4cc804: 0xc1333d6  jal         func_4CCF58
    ctx->pc = 0x4CC804u;
    SET_GPR_U32(ctx, 31, 0x4CC80Cu);
    ctx->pc = 0x4CCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCF58u, 0x4CC804u, 0x4CC80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC80Cu;
label_4cc80c:
    // 0x4cc80c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x4cc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4cc810: 0x0  nop
    ctx->pc = 0x4cc810u;
    // NOP
    // 0x4cc814: 0x1471fffa  bne         $v1, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC814u;
    {
        const bool branch_taken_0x4cc814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x4cc814) {
            ctx->pc = 0x4CC800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc800;
        }
    }
    ctx->pc = 0x4CC81Cu;
label_4cc81c:
    // 0x4cc81c: 0x8e644690  lw          $a0, 0x4690($s3)
    ctx->pc = 0x4cc81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18064)));
    // 0x4cc820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cc820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cc824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc828: 0xc110ab6  jal         func_442AD8
    ctx->pc = 0x4CC828u;
    SET_GPR_U32(ctx, 31, 0x4CC830u);
    ctx->pc = 0x4CC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC828u;
    // 0x4cc82c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442AD8u, 0x4CC828u, 0x4CC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC830u;
label_4cc830:
    // 0x4cc830: 0xc110b38  jal         func_442CE0
    ctx->pc = 0x4CC830u;
    SET_GPR_U32(ctx, 31, 0x4CC838u);
    ctx->pc = 0x4CC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC830u;
    // 0x4cc834: 0x8e644690  lw          $a0, 0x4690($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442CE0u, 0x4CC830u, 0x4CC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC838u;
label_4cc838:
    // 0x4cc838: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc83c: 0xc10ff44  jal         func_43FD10
    ctx->pc = 0x4CC83Cu;
    SET_GPR_U32(ctx, 31, 0x4CC844u);
    ctx->pc = 0x4CC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC83Cu;
    // 0x4cc840: 0x8c6446a0  lw          $a0, 0x46A0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FD10u, 0x4CC83Cu, 0x4CC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC844u;
label_4cc844:
    // 0x4cc844: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc848: 0x8c444808  lw          $a0, 0x4808($v0)
    ctx->pc = 0x4cc848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x714808u));
    // 0x4cc84c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4CC84Cu;
    {
        const bool branch_taken_0x4cc84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc84c) {
            ctx->pc = 0x4CC850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC84Cu;
            // 0x4cc850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC878u;
            goto label_4cc878;
        }
    }
    ctx->pc = 0x4CC854u;
    // 0x4cc854: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4CC854u;
    SET_GPR_U32(ctx, 31, 0x4CC85Cu);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4CC854u, 0x4CC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC85Cu;
label_4cc85c:
    // 0x4cc85c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cc860: 0x244339c0  addiu       $v1, $v0, 0x39C0
    ctx->pc = 0x4cc860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
    // 0x4cc864: 0xac4039c0  sw          $zero, 0x39C0($v0)
    ctx->pc = 0x4cc864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5339C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5339C0u, _value); } while (0);
    // 0x4cc868: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4cc868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5339C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5339C4u, _value); } while (0);
    // 0x4cc86c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4CC86Cu;
    {
        const bool branch_taken_0x4cc86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC86Cu;
        // 0x4cc870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc86c) {
            ctx->pc = 0x4CC878u;
            goto label_4cc878;
        }
    }
    ctx->pc = 0x4CC874u;
label_4cc874:
    // 0x4cc874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cc874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc878:
    // 0x4cc878: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4cc878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc87c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4cc87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cc880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4cc880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cc884: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4cc884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cc888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cc888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cc88c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CC88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC88Cu;
        // 0x4cc890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CC894u;
    // 0x4cc894: 0x0  nop
    ctx->pc = 0x4cc894u;
    // NOP
    ctx->pc = 0x4cc898u;
}
