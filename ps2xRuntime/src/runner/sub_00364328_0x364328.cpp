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

// Function: sub_00364328
// Address: 0x364328 - 0x3644a0
void sub_00364328_0x364328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364328_0x364328");
#endif

    switch (ctx->pc) {
        case 0x364364u: goto label_364364;
        case 0x36436cu: goto label_36436c;
        case 0x364380u: goto label_364380;
        case 0x364388u: goto label_364388;
        case 0x36439cu: goto label_36439c;
        case 0x3643a4u: goto label_3643a4;
        case 0x3643b8u: goto label_3643b8;
        case 0x3643c0u: goto label_3643c0;
        case 0x3643d4u: goto label_3643d4;
        case 0x3643dcu: goto label_3643dc;
        case 0x3643e8u: goto label_3643e8;
        case 0x364400u: goto label_364400;
        case 0x364408u: goto label_364408;
        case 0x364434u: goto label_364434;
        case 0x364440u: goto label_364440;
        case 0x364450u: goto label_364450;
        case 0x364464u: goto label_364464;
        default: break;
    }

    ctx->pc = 0x364328u;

    // 0x364328: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x364328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36432c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36432cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364330: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x364330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x364334: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x364334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x364338: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36433c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36433cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364340: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x364340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x364344: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x364344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x364348: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x364348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36434c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x36434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x364350: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x364350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x364354: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x364354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x364358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36435c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36435Cu;
    SET_GPR_U32(ctx, 31, 0x364364u);
    ctx->pc = 0x364360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36435Cu;
    // 0x364360: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36435Cu, 0x364364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364364u;
label_364364:
    // 0x364364: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364364u;
    SET_GPR_U32(ctx, 31, 0x36436Cu);
    ctx->pc = 0x364368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364364u;
    // 0x364368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364364u, 0x36436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36436Cu;
label_36436c:
    // 0x36436c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364378: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364378u;
    SET_GPR_U32(ctx, 31, 0x364380u);
    ctx->pc = 0x36437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364378u;
    // 0x36437c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364378u, 0x364380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364380u;
label_364380:
    // 0x364380: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364380u;
    SET_GPR_U32(ctx, 31, 0x364388u);
    ctx->pc = 0x364384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364380u;
    // 0x364384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364380u, 0x364388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364388u;
label_364388:
    // 0x364388: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36438c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364394: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364394u;
    SET_GPR_U32(ctx, 31, 0x36439Cu);
    ctx->pc = 0x364398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364394u;
    // 0x364398: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364394u, 0x36439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36439Cu;
label_36439c:
    // 0x36439c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36439Cu;
    SET_GPR_U32(ctx, 31, 0x3643A4u);
    ctx->pc = 0x3643A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36439Cu;
    // 0x3643a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36439Cu, 0x3643A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643A4u;
label_3643a4:
    // 0x3643a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3643a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3643a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3643ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3643acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3643B0u;
    SET_GPR_U32(ctx, 31, 0x3643B8u);
    ctx->pc = 0x3643B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643B0u;
    // 0x3643b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3643B0u, 0x3643B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643B8u;
label_3643b8:
    // 0x3643b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3643B8u;
    SET_GPR_U32(ctx, 31, 0x3643C0u);
    ctx->pc = 0x3643BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643B8u;
    // 0x3643bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3643B8u, 0x3643C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643C0u;
label_3643c0:
    // 0x3643c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3643c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3643c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3643c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3643cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3643CCu;
    SET_GPR_U32(ctx, 31, 0x3643D4u);
    ctx->pc = 0x3643D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643CCu;
    // 0x3643d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3643CCu, 0x3643D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643D4u;
label_3643d4:
    // 0x3643d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3643D4u;
    SET_GPR_U32(ctx, 31, 0x3643DCu);
    ctx->pc = 0x3643D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643D4u;
    // 0x3643d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3643D4u, 0x3643DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643DCu;
label_3643dc:
    // 0x3643dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3643dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3643e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3643e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3643e8:
    // 0x3643e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3643e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3643ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3643ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3643f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3643f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3643f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3643F8u;
    SET_GPR_U32(ctx, 31, 0x364400u);
    ctx->pc = 0x3643FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643F8u;
    // 0x3643fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3643F8u, 0x364400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364400u;
label_364400:
    // 0x364400: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364400u;
    SET_GPR_U32(ctx, 31, 0x364408u);
    ctx->pc = 0x364404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364400u;
    // 0x364404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364400u, 0x364408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364408u;
label_364408:
    // 0x364408: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x364408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x36440c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x36440cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x364410: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364410u;
    {
        const bool branch_taken_0x364410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364410u;
        // 0x364414: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364410) {
            ctx->pc = 0x3643E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3643e8;
        }
    }
    ctx->pc = 0x364418u;
    // 0x364418: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x364418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36441c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364420: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x364420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364424: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x364424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364428: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x364428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36442c: 0xc0bb3fa  jal         func_2ECFE8
    ctx->pc = 0x36442Cu;
    SET_GPR_U32(ctx, 31, 0x364434u);
    ctx->pc = 0x364430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36442Cu;
    // 0x364430: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFE8u, 0x36442Cu, 0x364434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364434u;
label_364434:
    // 0x364434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364438: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x364438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36443c: 0x0  nop
    ctx->pc = 0x36443cu;
    // NOP
label_364440:
    // 0x364440: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x364440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x364444: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x364448: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x364448u;
    SET_GPR_U32(ctx, 31, 0x364450u);
    ctx->pc = 0x36444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364448u;
    // 0x36444c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x364448u, 0x364450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364450u;
label_364450:
    // 0x364450: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x364450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364458: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x364458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36445c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36445Cu;
    SET_GPR_U32(ctx, 31, 0x364464u);
    ctx->pc = 0x364460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36445Cu;
    // 0x364460: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36445Cu, 0x364464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364464u;
label_364464:
    // 0x364464: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x364464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x364468: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364468u;
    {
        const bool branch_taken_0x364468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364468u;
        // 0x36446c: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364468) {
            ctx->pc = 0x364440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364440;
        }
    }
    ctx->pc = 0x364470u;
    // 0x364470: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x364470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x364474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364478: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x364478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36447c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36447cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x364480: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x364480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x364484: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x364484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x364488: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x364488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36448c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x36448cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364490: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x364490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364498: 0x3e00008  jr          $ra
    ctx->pc = 0x364498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364498u;
        // 0x36449c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3644A0u;
}
