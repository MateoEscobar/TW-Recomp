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

// Function: sub_00367810
// Address: 0x367810 - 0x367a20
void sub_00367810_0x367810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367810_0x367810");
#endif

    switch (ctx->pc) {
        case 0x367854u: goto label_367854;
        case 0x36785cu: goto label_36785c;
        case 0x367870u: goto label_367870;
        case 0x367878u: goto label_367878;
        case 0x36788cu: goto label_36788c;
        case 0x3678a0u: goto label_3678a0;
        case 0x3678b4u: goto label_3678b4;
        case 0x3678c8u: goto label_3678c8;
        case 0x3678d0u: goto label_3678d0;
        case 0x3678e0u: goto label_3678e0;
        case 0x3678f8u: goto label_3678f8;
        case 0x367900u: goto label_367900;
        case 0x367918u: goto label_367918;
        case 0x367930u: goto label_367930;
        case 0x367938u: goto label_367938;
        case 0x36796cu: goto label_36796c;
        case 0x367978u: goto label_367978;
        case 0x367980u: goto label_367980;
        case 0x367990u: goto label_367990;
        case 0x3679a4u: goto label_3679a4;
        case 0x3679b8u: goto label_3679b8;
        case 0x3679c8u: goto label_3679c8;
        case 0x3679dcu: goto label_3679dc;
        default: break;
    }

    ctx->pc = 0x367810u;

    // 0x367810: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x367810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x367814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367818: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x367818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x36781c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x36781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x367820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x367824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367828: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x367828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x36782c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x36782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x367830: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x367830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x367834: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x367834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x367838: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x367838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x36783c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x36783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x367840: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x367840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x367844: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x367844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x367848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x367848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36784c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36784Cu;
    SET_GPR_U32(ctx, 31, 0x367854u);
    ctx->pc = 0x367850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36784Cu;
    // 0x367850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36784Cu, 0x367854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367854u;
label_367854:
    // 0x367854: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367854u;
    SET_GPR_U32(ctx, 31, 0x36785Cu);
    ctx->pc = 0x367858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367854u;
    // 0x367858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367854u, 0x36785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36785Cu;
label_36785c:
    // 0x36785c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36785cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367860: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367868: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367868u;
    SET_GPR_U32(ctx, 31, 0x367870u);
    ctx->pc = 0x36786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367868u;
    // 0x36786c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367868u, 0x367870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367870u;
label_367870:
    // 0x367870: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367870u;
    SET_GPR_U32(ctx, 31, 0x367878u);
    ctx->pc = 0x367874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367870u;
    // 0x367874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367870u, 0x367878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367878u;
label_367878:
    // 0x367878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36787c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367884: 0xc102488  jal         func_409220
    ctx->pc = 0x367884u;
    SET_GPR_U32(ctx, 31, 0x36788Cu);
    ctx->pc = 0x367888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367884u;
    // 0x367888: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367884u, 0x36788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36788Cu;
label_36788c:
    // 0x36788c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367890: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x367890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367898: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367898u;
    SET_GPR_U32(ctx, 31, 0x3678A0u);
    ctx->pc = 0x36789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367898u;
    // 0x36789c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367898u, 0x3678A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678A0u;
label_3678a0:
    // 0x3678a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3678a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3678a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3678a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3678a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3678ac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3678ACu;
    SET_GPR_U32(ctx, 31, 0x3678B4u);
    ctx->pc = 0x3678B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678ACu;
    // 0x3678b0: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3678ACu, 0x3678B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678B4u;
label_3678b4:
    // 0x3678b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3678b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3678b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3678bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3678c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3678C0u;
    SET_GPR_U32(ctx, 31, 0x3678C8u);
    ctx->pc = 0x3678C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678C0u;
    // 0x3678c4: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3678C0u, 0x3678C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678C8u;
label_3678c8:
    // 0x3678c8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3678C8u;
    SET_GPR_U32(ctx, 31, 0x3678D0u);
    ctx->pc = 0x3678CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678C8u;
    // 0x3678cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3678C8u, 0x3678D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678D0u;
label_3678d0:
    // 0x3678d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3678d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3678d4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3678d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3678d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3678d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678dc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3678dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3678e0:
    // 0x3678e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3678e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3678e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3678e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3678e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3678ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3678ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3678f0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3678F0u;
    SET_GPR_U32(ctx, 31, 0x3678F8u);
    ctx->pc = 0x3678F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678F0u;
    // 0x3678f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3678F0u, 0x3678F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678F8u;
label_3678f8:
    // 0x3678f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3678F8u;
    SET_GPR_U32(ctx, 31, 0x367900u);
    ctx->pc = 0x3678FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3678F8u;
    // 0x3678fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3678F8u, 0x367900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367900u;
label_367900:
    // 0x367900: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x367900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x367904: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x367904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x367908: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367908u;
    {
        const bool branch_taken_0x367908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367908u;
        // 0x36790c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367908) {
            ctx->pc = 0x3678E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3678e0;
        }
    }
    ctx->pc = 0x367910u;
    // 0x367910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367914: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x367914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_367918:
    // 0x367918: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36791c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367920: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x367920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367924: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367928: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x367928u;
    SET_GPR_U32(ctx, 31, 0x367930u);
    ctx->pc = 0x36792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367928u;
    // 0x36792c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x367928u, 0x367930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367930u;
label_367930:
    // 0x367930: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367930u;
    SET_GPR_U32(ctx, 31, 0x367938u);
    ctx->pc = 0x367934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367930u;
    // 0x367934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367930u, 0x367938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367938u;
label_367938:
    // 0x367938: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x367938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36793c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36793cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x367940: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367940u;
    {
        const bool branch_taken_0x367940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367940u;
        // 0x367944: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367940) {
            ctx->pc = 0x367918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367918;
        }
    }
    ctx->pc = 0x367948u;
    // 0x367948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x367948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36794c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367950: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x367950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367954: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x367954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367958: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x367958u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36795c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x36795cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x367960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x367964: 0xc0d4f8e  jal         func_353E38
    ctx->pc = 0x367964u;
    SET_GPR_U32(ctx, 31, 0x36796Cu);
    ctx->pc = 0x367968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367964u;
    // 0x367968: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353E38u, 0x367964u, 0x36796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36796Cu;
label_36796c:
    // 0x36796c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367970: 0xc102562  jal         func_409588
    ctx->pc = 0x367970u;
    SET_GPR_U32(ctx, 31, 0x367978u);
    ctx->pc = 0x367974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367970u;
    // 0x367974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x367970u, 0x367978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367978u;
label_367978:
    // 0x367978: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36797c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36797cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_367980:
    // 0x367980: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x367980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x367984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x367988: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x367988u;
    SET_GPR_U32(ctx, 31, 0x367990u);
    ctx->pc = 0x36798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367988u;
    // 0x36798c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x367988u, 0x367990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367990u;
label_367990:
    // 0x367990: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x367990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36799c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36799Cu;
    SET_GPR_U32(ctx, 31, 0x3679A4u);
    ctx->pc = 0x3679A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36799Cu;
    // 0x3679a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36799Cu, 0x3679A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679A4u;
label_3679a4:
    // 0x3679a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3679a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3679a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3679A8u;
    {
        const bool branch_taken_0x3679a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3679ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679A8u;
        // 0x3679ac: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679a8) {
            ctx->pc = 0x367980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367980;
        }
    }
    ctx->pc = 0x3679B0u;
    // 0x3679b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3679b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3679b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3679b8:
    // 0x3679b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3679b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3679bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3679bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3679c0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3679C0u;
    SET_GPR_U32(ctx, 31, 0x3679C8u);
    ctx->pc = 0x3679C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3679C0u;
    // 0x3679c4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3679C0u, 0x3679C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679C8u;
label_3679c8:
    // 0x3679c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3679c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3679ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3679d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3679d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3679d4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3679D4u;
    SET_GPR_U32(ctx, 31, 0x3679DCu);
    ctx->pc = 0x3679D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3679D4u;
    // 0x3679d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3679D4u, 0x3679DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679DCu;
label_3679dc:
    // 0x3679dc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3679dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3679e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3679E0u;
    {
        const bool branch_taken_0x3679e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679E0u;
        // 0x3679e4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679e0) {
            ctx->pc = 0x3679B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3679b8;
        }
    }
    ctx->pc = 0x3679E8u;
    // 0x3679e8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3679e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3679ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3679ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3679f0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3679f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3679f4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3679f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3679f8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3679f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3679fc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3679fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367a00: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x367a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367a04: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x367a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367a08: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x367a08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367a0c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x367a0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x367a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367a14: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x367a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367a18: 0x3e00008  jr          $ra
    ctx->pc = 0x367A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A18u;
        // 0x367a1c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367A20u;
}
