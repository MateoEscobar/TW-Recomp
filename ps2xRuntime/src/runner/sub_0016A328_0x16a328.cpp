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

// Function: sub_0016A328
// Address: 0x16a328 - 0x16a3a8
void sub_0016A328_0x16a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A328_0x16a328");
#endif

    switch (ctx->pc) {
        case 0x16a328u: goto label_16a328;
        case 0x16a32cu: goto label_16a32c;
        case 0x16a330u: goto label_16a330;
        case 0x16a334u: goto label_16a334;
        case 0x16a338u: goto label_16a338;
        case 0x16a33cu: goto label_16a33c;
        case 0x16a340u: goto label_16a340;
        case 0x16a344u: goto label_16a344;
        case 0x16a348u: goto label_16a348;
        case 0x16a34cu: goto label_16a34c;
        case 0x16a350u: goto label_16a350;
        case 0x16a354u: goto label_16a354;
        case 0x16a358u: goto label_16a358;
        case 0x16a35cu: goto label_16a35c;
        case 0x16a360u: goto label_16a360;
        case 0x16a364u: goto label_16a364;
        case 0x16a368u: goto label_16a368;
        case 0x16a36cu: goto label_16a36c;
        case 0x16a370u: goto label_16a370;
        case 0x16a374u: goto label_16a374;
        case 0x16a378u: goto label_16a378;
        case 0x16a37cu: goto label_16a37c;
        case 0x16a380u: goto label_16a380;
        case 0x16a384u: goto label_16a384;
        case 0x16a388u: goto label_16a388;
        case 0x16a38cu: goto label_16a38c;
        case 0x16a390u: goto label_16a390;
        case 0x16a394u: goto label_16a394;
        case 0x16a398u: goto label_16a398;
        case 0x16a39cu: goto label_16a39c;
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3a4u: goto label_16a3a4;
        default: break;
    }

    ctx->pc = 0x16a328u;

label_16a328:
    // 0x16a328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a32c:
    // 0x16a32c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16a330:
    // 0x16a330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16a334:
    // 0x16a334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a338:
    // 0x16a338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16a33c:
    // 0x16a33c: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x16a33cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
label_16a340:
    // 0x16a340: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_16a344:
    if (ctx->pc == 0x16A344u) {
        ctx->pc = 0x16A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A340u;
        // 0x16a344: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A348u;
        goto label_16a348;
    }
    ctx->pc = 0x16A340u;
    {
        const bool branch_taken_0x16a340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A340u;
        // 0x16a344: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a340) {
            ctx->pc = 0x16A390u;
            goto label_16a390;
        }
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0xc0e40aa  jal         func_3902A8
label_16a34c:
    if (ctx->pc == 0x16A34Cu) {
        ctx->pc = 0x16A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A348u;
        // 0x16a34c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A350u;
        goto label_16a350;
    }
    ctx->pc = 0x16A348u;
    SET_GPR_U32(ctx, 31, 0x16A350u);
    ctx->pc = 0x16A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A348u;
    // 0x16a34c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x16A348u, 0x16A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A350u;
label_16a350:
    // 0x16a350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16a354:
    // 0x16a354: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x16a354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_16a358:
    // 0x16a358: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x16a358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_16a35c:
    // 0x16a35c: 0xa0f809  jalr        $a1
label_16a360:
    if (ctx->pc == 0x16A360u) {
        ctx->pc = 0x16A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A35Cu;
        // 0x16a360: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A364u;
        goto label_16a364;
    }
    ctx->pc = 0x16A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16A364u);
        ctx->pc = 0x16A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A35Cu;
        // 0x16a360: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A35Cu, 0x16A364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A364u;
label_16a364:
    // 0x16a364: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16a364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a368:
    // 0x16a368: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_16a36c:
    if (ctx->pc == 0x16A36Cu) {
        ctx->pc = 0x16A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A368u;
        // 0x16a36c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A370u;
        goto label_16a370;
    }
    ctx->pc = 0x16A368u;
    {
        const bool branch_taken_0x16a368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16a368) {
            ctx->pc = 0x16A36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A368u;
            // 0x16a36c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A394u;
            goto label_16a394;
        }
    }
    ctx->pc = 0x16A370u;
label_16a370:
    // 0x16a370: 0xc05b0e2  jal         func_16C388
label_16a374:
    if (ctx->pc == 0x16A374u) {
        ctx->pc = 0x16A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A370u;
        // 0x16a374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A378u;
        goto label_16a378;
    }
    ctx->pc = 0x16A370u;
    SET_GPR_U32(ctx, 31, 0x16A378u);
    ctx->pc = 0x16A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A370u;
    // 0x16a374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A370u, 0x16A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A378u;
label_16a378:
    // 0x16a378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a37c:
    // 0x16a37c: 0xc0e40aa  jal         func_3902A8
label_16a380:
    if (ctx->pc == 0x16A380u) {
        ctx->pc = 0x16A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A37Cu;
        // 0x16a380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A384u;
        goto label_16a384;
    }
    ctx->pc = 0x16A37Cu;
    SET_GPR_U32(ctx, 31, 0x16A384u);
    ctx->pc = 0x16A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A37Cu;
    // 0x16a380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x16A37Cu, 0x16A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A384u;
label_16a384:
    // 0x16a384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a388:
    // 0x16a388: 0xc059488  jal         func_165220
label_16a38c:
    if (ctx->pc == 0x16A38Cu) {
        ctx->pc = 0x16A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A388u;
        // 0x16a38c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A390u;
        goto label_16a390;
    }
    ctx->pc = 0x16A388u;
    SET_GPR_U32(ctx, 31, 0x16A390u);
    ctx->pc = 0x16A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A388u;
    // 0x16a38c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165220u, 0x16A388u, 0x16A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A390u;
label_16a390:
    // 0x16a390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a394:
    // 0x16a394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a398:
    // 0x16a398: 0x3e00008  jr          $ra
label_16a39c:
    if (ctx->pc == 0x16A39Cu) {
        ctx->pc = 0x16A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A398u;
        // 0x16a39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A3A0u;
        goto label_16a3a0;
    }
    ctx->pc = 0x16A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A398u;
        // 0x16a39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3A0u;
label_16a3a0:
    // 0x16a3a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16a3a4:
    // 0x16a3a4: 0x0  nop
    ctx->pc = 0x16a3a4u;
    // NOP
    ctx->pc = 0x16a3a8u;
}
