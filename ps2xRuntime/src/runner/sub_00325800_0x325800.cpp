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

// Function: sub_00325800
// Address: 0x325800 - 0x3259c0
void sub_00325800_0x325800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325800_0x325800");
#endif

    switch (ctx->pc) {
        case 0x32583cu: goto label_32583c;
        case 0x325850u: goto label_325850;
        case 0x32585cu: goto label_32585c;
        case 0x32586cu: goto label_32586c;
        case 0x325888u: goto label_325888;
        case 0x325890u: goto label_325890;
        case 0x3258a0u: goto label_3258a0;
        case 0x3258acu: goto label_3258ac;
        case 0x3258b4u: goto label_3258b4;
        case 0x3258c4u: goto label_3258c4;
        case 0x3258d8u: goto label_3258d8;
        case 0x3258e8u: goto label_3258e8;
        case 0x3258f8u: goto label_3258f8;
        case 0x325914u: goto label_325914;
        case 0x325928u: goto label_325928;
        case 0x325938u: goto label_325938;
        case 0x325948u: goto label_325948;
        case 0x325958u: goto label_325958;
        case 0x325968u: goto label_325968;
        case 0x325978u: goto label_325978;
        case 0x32598cu: goto label_32598c;
        case 0x325994u: goto label_325994;
        default: break;
    }

    ctx->pc = 0x325800u;

    // 0x325800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x325800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x325804: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x325804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x325808: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x325808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32580c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32580cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x325810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325814: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x325814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x325818: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x325818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32581c: 0x24c64a90  addiu       $a2, $a2, 0x4A90
    ctx->pc = 0x32581cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19088));
    // 0x325820: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x325820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x325824: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x325824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x325828: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x325828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32582c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x325830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325834: 0xc0c91b0  jal         func_3246C0
    ctx->pc = 0x325834u;
    SET_GPR_U32(ctx, 31, 0x32583Cu);
    ctx->pc = 0x325838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325834u;
    // 0x325838: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246C0u, 0x325834u, 0x32583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32583Cu;
label_32583c:
    // 0x32583c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32583cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325840: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x325840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325848: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325848u;
    SET_GPR_U32(ctx, 31, 0x325850u);
    ctx->pc = 0x32584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325848u;
    // 0x32584c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325848u, 0x325850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325850u;
label_325850:
    // 0x325850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325854: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x325854u;
    SET_GPR_U32(ctx, 31, 0x32585Cu);
    ctx->pc = 0x325858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325854u;
    // 0x325858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x325854u, 0x32585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32585Cu;
label_32585c:
    // 0x32585c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32585cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325864: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x325864u;
    SET_GPR_U32(ctx, 31, 0x32586Cu);
    ctx->pc = 0x325868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325864u;
    // 0x325868: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x325864u, 0x32586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32586Cu;
label_32586c:
    // 0x32586c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x325870: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x325870u;
    {
        const bool branch_taken_0x325870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x325874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325870u;
        // 0x325874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325870) {
            ctx->pc = 0x3258ACu;
            goto label_3258ac;
        }
    }
    ctx->pc = 0x325878u;
    // 0x325878: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x325878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x32587c: 0x26104a98  addiu       $s0, $s0, 0x4A98
    ctx->pc = 0x32587cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19096));
    // 0x325880: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x325880u;
    SET_GPR_U32(ctx, 31, 0x325888u);
    ctx->pc = 0x325884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325880u;
    // 0x325884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x325880u, 0x325888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325888u;
label_325888:
    // 0x325888: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x325888u;
    SET_GPR_U32(ctx, 31, 0x325890u);
    ctx->pc = 0x32588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325888u;
    // 0x32588c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x325888u, 0x325890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325890u;
label_325890:
    // 0x325890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325894: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x325894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325898: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325898u;
    SET_GPR_U32(ctx, 31, 0x3258A0u);
    ctx->pc = 0x32589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325898u;
    // 0x32589c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325898u, 0x3258A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258A0u;
label_3258a0:
    // 0x3258a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3258a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258a4: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x3258A4u;
    SET_GPR_U32(ctx, 31, 0x3258ACu);
    ctx->pc = 0x3258A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258A4u;
    // 0x3258a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x3258A4u, 0x3258ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258ACu;
label_3258ac:
    // 0x3258ac: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x3258ACu;
    SET_GPR_U32(ctx, 31, 0x3258B4u);
    ctx->pc = 0x3258B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258ACu;
    // 0x3258b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x3258ACu, 0x3258B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258B4u;
label_3258b4:
    // 0x3258b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3258b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3258b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258bc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3258BCu;
    SET_GPR_U32(ctx, 31, 0x3258C4u);
    ctx->pc = 0x3258C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258BCu;
    // 0x3258c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3258BCu, 0x3258C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258C4u;
label_3258c4:
    // 0x3258c4: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3258c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3258c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3258c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258cc: 0x24c64aa8  addiu       $a2, $a2, 0x4AA8
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19112));
    // 0x3258d0: 0xc0c9154  jal         func_324550
    ctx->pc = 0x3258D0u;
    SET_GPR_U32(ctx, 31, 0x3258D8u);
    ctx->pc = 0x3258D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258D0u;
    // 0x3258d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324550u, 0x3258D0u, 0x3258D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258D8u;
label_3258d8:
    // 0x3258d8: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3258D8u;
    {
        const bool branch_taken_0x3258d8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258D8u;
        // 0x3258dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258d8) {
            ctx->pc = 0x325904u;
            goto label_325904;
        }
    }
    ctx->pc = 0x3258E0u;
    // 0x3258e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3258e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3258e4: 0x0  nop
    ctx->pc = 0x3258e4u;
    // NOP
label_3258e8:
    // 0x3258e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3258e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3258f0: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x3258F0u;
    SET_GPR_U32(ctx, 31, 0x3258F8u);
    ctx->pc = 0x3258F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258F0u;
    // 0x3258f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x3258F0u, 0x3258F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258F8u;
label_3258f8:
    // 0x3258f8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x3258f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3258fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3258FCu;
    {
        const bool branch_taken_0x3258fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258FCu;
        // 0x325900: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258fc) {
            ctx->pc = 0x3258E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3258e8;
        }
    }
    ctx->pc = 0x325904u;
label_325904:
    // 0x325904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x325904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32590c: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x32590Cu;
    SET_GPR_U32(ctx, 31, 0x325914u);
    ctx->pc = 0x325910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32590Cu;
    // 0x325910: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x32590Cu, 0x325914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325914u;
label_325914:
    // 0x325914: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x325914u;
    {
        const bool branch_taken_0x325914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x325918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325914u;
        // 0x325918: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325914) {
            ctx->pc = 0x325938u;
            goto label_325938;
        }
    }
    ctx->pc = 0x32591Cu;
    // 0x32591c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325920: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325920u;
    SET_GPR_U32(ctx, 31, 0x325928u);
    ctx->pc = 0x325924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325920u;
    // 0x325924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325920u, 0x325928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325928u;
label_325928:
    // 0x325928: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32592c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325930: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x325930u;
    SET_GPR_U32(ctx, 31, 0x325938u);
    ctx->pc = 0x325934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325930u;
    // 0x325934: 0x24a54a98  addiu       $a1, $a1, 0x4A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x325930u, 0x325938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325938u;
label_325938:
    // 0x325938: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x325938u;
    {
        const bool branch_taken_0x325938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325938u;
        // 0x32593c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325938) {
            ctx->pc = 0x325970u;
            goto label_325970;
        }
    }
    ctx->pc = 0x325940u;
    // 0x325940: 0xc10c2ab  jal         func_430AAC
    ctx->pc = 0x325940u;
    SET_GPR_U32(ctx, 31, 0x325948u);
    ctx->pc = 0x325944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325940u;
    // 0x325944: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430AACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430AACu, 0x325940u, 0x325948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325948u;
label_325948:
    // 0x325948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325948u;
    {
        const bool branch_taken_0x325948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325948u;
        // 0x32594c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325948) {
            ctx->pc = 0x325960u;
            goto label_325960;
        }
    }
    ctx->pc = 0x325950u;
    // 0x325950: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x325950u;
    SET_GPR_U32(ctx, 31, 0x325958u);
    ctx->pc = 0x325954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325950u;
    // 0x325954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x325950u, 0x325958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325958u;
label_325958:
    // 0x325958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x325958u;
    {
        const bool branch_taken_0x325958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325958u;
        // 0x32595c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325958) {
            ctx->pc = 0x325998u;
            goto label_325998;
        }
    }
    ctx->pc = 0x325960u;
label_325960:
    // 0x325960: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x325960u;
    SET_GPR_U32(ctx, 31, 0x325968u);
    ctx->pc = 0x325964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325960u;
    // 0x325964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x325960u, 0x325968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325968u;
label_325968:
    // 0x325968: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x325968u;
    {
        const bool branch_taken_0x325968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325968u;
        // 0x32596c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325968) {
            ctx->pc = 0x325998u;
            goto label_325998;
        }
    }
    ctx->pc = 0x325970u;
label_325970:
    // 0x325970: 0xc10c2ab  jal         func_430AAC
    ctx->pc = 0x325970u;
    SET_GPR_U32(ctx, 31, 0x325978u);
    ctx->pc = 0x325974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325970u;
    // 0x325974: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430AACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430AACu, 0x325970u, 0x325978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325978u;
label_325978:
    // 0x325978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325978u;
    {
        const bool branch_taken_0x325978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325978u;
        // 0x32597c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325978) {
            ctx->pc = 0x32598Cu;
            goto label_32598c;
        }
    }
    ctx->pc = 0x325980u;
    // 0x325980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325984: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x325984u;
    SET_GPR_U32(ctx, 31, 0x32598Cu);
    ctx->pc = 0x325988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325984u;
    // 0x325988: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x325984u, 0x32598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32598Cu;
label_32598c:
    // 0x32598c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x32598Cu;
    SET_GPR_U32(ctx, 31, 0x325994u);
    ctx->pc = 0x325990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32598Cu;
    // 0x325990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x32598Cu, 0x325994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325994u;
label_325994:
    // 0x325994: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x325994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_325998:
    // 0x325998: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x325998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32599c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32599cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3259a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3259a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3259a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3259a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3259a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3259a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3259ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3259acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3259b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3259b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3259b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3259B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3259B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259B4u;
        // 0x3259b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3259B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3259BCu;
    // 0x3259bc: 0x0  nop
    ctx->pc = 0x3259bcu;
    // NOP
    ctx->pc = 0x3259c0u;
}
