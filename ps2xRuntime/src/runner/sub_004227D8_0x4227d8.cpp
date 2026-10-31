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

// Function: sub_004227D8
// Address: 0x4227d8 - 0x4228a0
void sub_004227D8_0x4227d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004227D8_0x4227d8");
#endif

    switch (ctx->pc) {
        case 0x422808u: goto label_422808;
        case 0x422814u: goto label_422814;
        case 0x422830u: goto label_422830;
        case 0x42283cu: goto label_42283c;
        case 0x42285cu: goto label_42285c;
        case 0x42286cu: goto label_42286c;
        case 0x422874u: goto label_422874;
        case 0x42287cu: goto label_42287c;
        default: break;
    }

    ctx->pc = 0x4227d8u;

    // 0x4227d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4227d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4227dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4227dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4227e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4227e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4227e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4227e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4227e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4227e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4227ec: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4227ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4227f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4227f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4227f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4227f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4227f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4227f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4227fc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4227fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x422800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422804: 0x0  nop
    ctx->pc = 0x422804u;
    // NOP
label_422808:
    // 0x422808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42280c: 0xc108270  jal         func_4209C0
    ctx->pc = 0x42280Cu;
    SET_GPR_U32(ctx, 31, 0x422814u);
    ctx->pc = 0x422810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42280Cu;
    // 0x422810: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209C0u, 0x42280Cu, 0x422814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422814u;
label_422814:
    // 0x422814: 0x0  nop
    ctx->pc = 0x422814u;
    // NOP
    // 0x422818: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x422818u;
    {
        const bool branch_taken_0x422818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x42281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422818u;
        // 0x42281c: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422818) {
            ctx->pc = 0x422808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422808;
        }
    }
    ctx->pc = 0x422820u;
    // 0x422820: 0x26500180  addiu       $s0, $s2, 0x180
    ctx->pc = 0x422820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x422824: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x422824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x422828: 0x26540300  addiu       $s4, $s2, 0x300
    ctx->pc = 0x422828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x42282c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x42282cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_422830:
    // 0x422830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422834: 0xc108270  jal         func_4209C0
    ctx->pc = 0x422834u;
    SET_GPR_U32(ctx, 31, 0x42283Cu);
    ctx->pc = 0x422838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422834u;
    // 0x422838: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209C0u, 0x422834u, 0x42283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42283Cu;
label_42283c:
    // 0x42283c: 0x0  nop
    ctx->pc = 0x42283cu;
    // NOP
    // 0x422840: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x422840u;
    {
        const bool branch_taken_0x422840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x422844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422840u;
        // 0x422844: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422840) {
            ctx->pc = 0x422830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422830;
        }
    }
    ctx->pc = 0x422848u;
    // 0x422848: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x422848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x42284c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422850: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x422850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x422854: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x422854u;
    SET_GPR_U32(ctx, 31, 0x42285Cu);
    ctx->pc = 0x422858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422854u;
    // 0x422858: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x422854u, 0x42285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42285Cu;
label_42285c:
    // 0x42285c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42285cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422860: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x422860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x422864: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x422864u;
    SET_GPR_U32(ctx, 31, 0x42286Cu);
    ctx->pc = 0x422868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422864u;
    // 0x422868: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x422864u, 0x42286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42286Cu;
label_42286c:
    // 0x42286c: 0xc108a4c  jal         func_422930
    ctx->pc = 0x42286Cu;
    SET_GPR_U32(ctx, 31, 0x422874u);
    ctx->pc = 0x422870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42286Cu;
    // 0x422870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422930u, 0x42286Cu, 0x422874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422874u;
label_422874:
    // 0x422874: 0xc108b18  jal         func_422C60
    ctx->pc = 0x422874u;
    SET_GPR_U32(ctx, 31, 0x42287Cu);
    ctx->pc = 0x422878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422874u;
    // 0x422878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422C60u, 0x422874u, 0x42287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42287Cu;
label_42287c:
    // 0x42287c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x42287cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422880: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x422880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x422884: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x422884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x422888: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x422888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42288c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x42288cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422890: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x422890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422898: 0x3e00008  jr          $ra
    ctx->pc = 0x422898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422898u;
        // 0x42289c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4228A0u;
}
