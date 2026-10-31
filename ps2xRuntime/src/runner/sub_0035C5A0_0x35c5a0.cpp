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

// Function: sub_0035C5A0
// Address: 0x35c5a0 - 0x35c770
void sub_0035C5A0_0x35c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C5A0_0x35c5a0");
#endif

    switch (ctx->pc) {
        case 0x35c5d0u: goto label_35c5d0;
        case 0x35c5e8u: goto label_35c5e8;
        case 0x35c600u: goto label_35c600;
        case 0x35c608u: goto label_35c608;
        case 0x35c620u: goto label_35c620;
        case 0x35c638u: goto label_35c638;
        case 0x35c640u: goto label_35c640;
        case 0x35c658u: goto label_35c658;
        case 0x35c670u: goto label_35c670;
        case 0x35c678u: goto label_35c678;
        case 0x35c69cu: goto label_35c69c;
        case 0x35c6a8u: goto label_35c6a8;
        case 0x35c6b8u: goto label_35c6b8;
        case 0x35c6ccu: goto label_35c6cc;
        case 0x35c6e0u: goto label_35c6e0;
        case 0x35c6f0u: goto label_35c6f0;
        case 0x35c704u: goto label_35c704;
        case 0x35c718u: goto label_35c718;
        case 0x35c728u: goto label_35c728;
        case 0x35c73cu: goto label_35c73c;
        default: break;
    }

    ctx->pc = 0x35c5a0u;

    // 0x35c5a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35c5a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c5a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x35c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x35c5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5b0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x35c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x35c5b4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x35c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x35c5b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x35c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x35c5bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x35c5c0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x35c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x35c5c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35c5c8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35C5C8u;
    SET_GPR_U32(ctx, 31, 0x35C5D0u);
    ctx->pc = 0x35C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5C8u;
    // 0x35c5cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35C5C8u, 0x35C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C5D0u;
label_35c5d0:
    // 0x35c5d0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x35c5d0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35c5d4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x35c5d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c5d8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x35c5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35c5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5e0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35c5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5e4: 0x0  nop
    ctx->pc = 0x35c5e4u;
    // NOP
label_35c5e8:
    // 0x35c5e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c5f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35C5F8u;
    SET_GPR_U32(ctx, 31, 0x35C600u);
    ctx->pc = 0x35C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5F8u;
    // 0x35c5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35C5F8u, 0x35C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C600u;
label_35c600:
    // 0x35c600: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C600u;
    SET_GPR_U32(ctx, 31, 0x35C608u);
    ctx->pc = 0x35C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C600u;
    // 0x35c604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C600u, 0x35C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C608u;
label_35c608:
    // 0x35c608: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35c608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35c60c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c610: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C610u;
    {
        const bool branch_taken_0x35c610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C610u;
        // 0x35c614: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c610) {
            ctx->pc = 0x35C5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c5e8;
        }
    }
    ctx->pc = 0x35C618u;
    // 0x35c618: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c61c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x35c61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35c620:
    // 0x35c620: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c630: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35C630u;
    SET_GPR_U32(ctx, 31, 0x35C638u);
    ctx->pc = 0x35C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C630u;
    // 0x35c634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35C630u, 0x35C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C638u;
label_35c638:
    // 0x35c638: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C638u;
    SET_GPR_U32(ctx, 31, 0x35C640u);
    ctx->pc = 0x35C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C638u;
    // 0x35c63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C638u, 0x35C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C640u;
label_35c640:
    // 0x35c640: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35c640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35c644: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c648: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C648u;
    {
        const bool branch_taken_0x35c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C648u;
        // 0x35c64c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c648) {
            ctx->pc = 0x35C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c620;
        }
    }
    ctx->pc = 0x35C650u;
    // 0x35c650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c654: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x35c654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35c658:
    // 0x35c658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c660: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c664: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c668: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35C668u;
    SET_GPR_U32(ctx, 31, 0x35C670u);
    ctx->pc = 0x35C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C668u;
    // 0x35c66c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35C668u, 0x35C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C670u;
label_35c670:
    // 0x35c670: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35C670u;
    SET_GPR_U32(ctx, 31, 0x35C678u);
    ctx->pc = 0x35C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C670u;
    // 0x35c674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35C670u, 0x35C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C678u;
label_35c678:
    // 0x35c678: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35c678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35c67c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c680: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C680u;
    {
        const bool branch_taken_0x35c680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C680u;
        // 0x35c684: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c680) {
            ctx->pc = 0x35C658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c658;
        }
    }
    ctx->pc = 0x35C688u;
    // 0x35c688: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x35c688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c68c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35c68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c690: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c694: 0xc08d14c  jal         func_234530
    ctx->pc = 0x35C694u;
    SET_GPR_U32(ctx, 31, 0x35C69Cu);
    ctx->pc = 0x35C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C694u;
    // 0x35c698: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234530u, 0x35C694u, 0x35C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C69Cu;
label_35c69c:
    // 0x35c69c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35c6a4: 0x0  nop
    ctx->pc = 0x35c6a4u;
    // NOP
label_35c6a8:
    // 0x35c6a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x35c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x35c6ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c6b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35C6B0u;
    SET_GPR_U32(ctx, 31, 0x35C6B8u);
    ctx->pc = 0x35C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6B0u;
    // 0x35c6b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35C6B0u, 0x35C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6B8u;
label_35c6b8:
    // 0x35c6b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35c6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c6c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35C6C4u;
    SET_GPR_U32(ctx, 31, 0x35C6CCu);
    ctx->pc = 0x35C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6C4u;
    // 0x35c6c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35C6C4u, 0x35C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6CCu;
label_35c6cc:
    // 0x35c6cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c6d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C6D0u;
    {
        const bool branch_taken_0x35c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6D0u;
        // 0x35c6d4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6d0) {
            ctx->pc = 0x35C6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c6a8;
        }
    }
    ctx->pc = 0x35C6D8u;
    // 0x35c6d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35c6e0:
    // 0x35c6e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x35c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35c6e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c6e8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35C6E8u;
    SET_GPR_U32(ctx, 31, 0x35C6F0u);
    ctx->pc = 0x35C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6E8u;
    // 0x35c6ec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35C6E8u, 0x35C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6F0u;
label_35c6f0:
    // 0x35c6f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35c6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c6fc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35C6FCu;
    SET_GPR_U32(ctx, 31, 0x35C704u);
    ctx->pc = 0x35C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6FCu;
    // 0x35c700: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35C6FCu, 0x35C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C704u;
label_35c704:
    // 0x35c704: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c708: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C708u;
    {
        const bool branch_taken_0x35c708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C708u;
        // 0x35c70c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c708) {
            ctx->pc = 0x35C6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c6e0;
        }
    }
    ctx->pc = 0x35C710u;
    // 0x35c710: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c714: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35c714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35c718:
    // 0x35c718: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x35c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35c71c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c720: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35C720u;
    SET_GPR_U32(ctx, 31, 0x35C728u);
    ctx->pc = 0x35C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C720u;
    // 0x35c724: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35C720u, 0x35C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C728u;
label_35c728:
    // 0x35c728: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35c728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c72c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c730: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c734: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35C734u;
    SET_GPR_U32(ctx, 31, 0x35C73Cu);
    ctx->pc = 0x35C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C734u;
    // 0x35c738: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35C734u, 0x35C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C73Cu;
label_35c73c:
    // 0x35c73c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35c73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35c740: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35C740u;
    {
        const bool branch_taken_0x35c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C740u;
        // 0x35c744: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c740) {
            ctx->pc = 0x35C718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c718;
        }
    }
    ctx->pc = 0x35C748u;
    // 0x35c748: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x35c748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35c74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c750: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x35c750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35c754: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x35c754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35c758: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x35c758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35c75c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35c75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c760: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x35c760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c768: 0x3e00008  jr          $ra
    ctx->pc = 0x35C768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C768u;
        // 0x35c76c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C770u;
}
