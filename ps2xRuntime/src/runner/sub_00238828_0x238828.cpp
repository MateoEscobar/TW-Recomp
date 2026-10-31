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

// Function: sub_00238828
// Address: 0x238828 - 0x238948
void sub_00238828_0x238828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238828_0x238828");
#endif

    switch (ctx->pc) {
        case 0x238858u: goto label_238858;
        case 0x238860u: goto label_238860;
        case 0x238874u: goto label_238874;
        case 0x23887cu: goto label_23887c;
        case 0x2388a8u: goto label_2388a8;
        case 0x2388d0u: goto label_2388d0;
        case 0x2388e8u: goto label_2388e8;
        case 0x2388f8u: goto label_2388f8;
        case 0x238904u: goto label_238904;
        case 0x238910u: goto label_238910;
        case 0x23891cu: goto label_23891c;
        case 0x238928u: goto label_238928;
        default: break;
    }

    ctx->pc = 0x238828u;

    // 0x238828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23882c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x238830: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x238830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x238834: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x238834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238838: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23883c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23883cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x238840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x238844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238848: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x238848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x23884c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238850: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238850u;
    SET_GPR_U32(ctx, 31, 0x238858u);
    ctx->pc = 0x238854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238850u;
    // 0x238854: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238850u, 0x238858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238858u;
label_238858:
    // 0x238858: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238858u;
    SET_GPR_U32(ctx, 31, 0x238860u);
    ctx->pc = 0x23885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238858u;
    // 0x23885c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238858u, 0x238860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238860u;
label_238860:
    // 0x238860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238864: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x238864u;
    {
        const bool branch_taken_0x238864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238864u;
        // 0x238868: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238864) {
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x23886Cu;
    // 0x23886c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23886Cu;
    SET_GPR_U32(ctx, 31, 0x238874u);
    ctx->pc = 0x238870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23886Cu;
    // 0x238870: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23886Cu, 0x238874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238874u;
label_238874:
    // 0x238874: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238874u;
    SET_GPR_U32(ctx, 31, 0x23887Cu);
    ctx->pc = 0x238878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238874u;
    // 0x238878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238874u, 0x23887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23887Cu;
label_23887c:
    // 0x23887c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238880: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x238880u;
    {
        const bool branch_taken_0x238880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238880) {
            ctx->pc = 0x238884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238880u;
            // 0x238884: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x238888u;
    // 0x238888: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x238888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x23888c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x23888Cu;
    {
        const bool branch_taken_0x23888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23888c) {
            ctx->pc = 0x238890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23888Cu;
            // 0x238890: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x238894u;
    // 0x238894: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x238894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x238898: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x238898u;
    {
        const bool branch_taken_0x238898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238898) {
            ctx->pc = 0x23889Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238898u;
            // 0x23889c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x2388A0u;
    // 0x2388a0: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2388A0u;
    SET_GPR_U32(ctx, 31, 0x2388A8u);
    ctx->pc = 0x2388A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A0u;
    // 0x2388a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2388A0u, 0x2388A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388A8u;
label_2388a8:
    // 0x2388a8: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2388A8u;
    {
        const bool branch_taken_0x2388a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2388a8) {
            ctx->pc = 0x2388ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2388A8u;
            // 0x2388ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x2388B0u;
    // 0x2388b0: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2388b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2388b4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2388B4u;
    {
        const bool branch_taken_0x2388b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388b4) {
            ctx->pc = 0x2388B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2388B4u;
            // 0x2388b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x2388BCu;
    // 0x2388bc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2388c0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2388C0u;
    {
        const bool branch_taken_0x2388c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388c0) {
            ctx->pc = 0x2388C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2388C0u;
            // 0x2388c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x2388C8u;
    // 0x2388c8: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2388C8u;
    SET_GPR_U32(ctx, 31, 0x2388D0u);
    ctx->pc = 0x2388CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388C8u;
    // 0x2388cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2388C8u, 0x2388D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388D0u;
label_2388d0:
    // 0x2388d0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2388D0u;
    {
        const bool branch_taken_0x2388d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2388d0) {
            ctx->pc = 0x2388D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2388D0u;
            // 0x2388d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x2388D8u;
    // 0x2388d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2388d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2388dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388e0: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2388E0u;
    SET_GPR_U32(ctx, 31, 0x2388E8u);
    ctx->pc = 0x2388E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388E0u;
    // 0x2388e4: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2388E0u, 0x2388E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388E8u;
label_2388e8:
    // 0x2388e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2388e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2388ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f0: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2388F0u;
    SET_GPR_U32(ctx, 31, 0x2388F8u);
    ctx->pc = 0x2388F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388F0u;
    // 0x2388f4: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2388F0u, 0x2388F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388F8u;
label_2388f8:
    // 0x2388f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2388f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388fc: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x2388FCu;
    SET_GPR_U32(ctx, 31, 0x238904u);
    ctx->pc = 0x238900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388FCu;
    // 0x238900: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2388FCu, 0x238904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238904u;
label_238904:
    // 0x238904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238908: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x238908u;
    SET_GPR_U32(ctx, 31, 0x238910u);
    ctx->pc = 0x23890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238908u;
    // 0x23890c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238908u, 0x238910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238910u;
label_238910:
    // 0x238910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238914: 0xc089a44  jal         func_226910
    ctx->pc = 0x238914u;
    SET_GPR_U32(ctx, 31, 0x23891Cu);
    ctx->pc = 0x238918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238914u;
    // 0x238918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x238914u, 0x23891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23891Cu;
label_23891c:
    // 0x23891c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238920: 0xc089a44  jal         func_226910
    ctx->pc = 0x238920u;
    SET_GPR_U32(ctx, 31, 0x238928u);
    ctx->pc = 0x238924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238920u;
    // 0x238924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x238920u, 0x238928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238928u;
label_238928:
    // 0x238928: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x238928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23892c:
    // 0x23892c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x23892cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238930: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x238930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238934: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x238934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23893c: 0x3e00008  jr          $ra
    ctx->pc = 0x23893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23893Cu;
        // 0x238940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23893Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238944u;
    // 0x238944: 0x0  nop
    ctx->pc = 0x238944u;
    // NOP
    ctx->pc = 0x238948u;
}
