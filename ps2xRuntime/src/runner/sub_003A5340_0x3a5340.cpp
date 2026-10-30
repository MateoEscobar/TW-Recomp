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

// Function: sub_003A5340
// Address: 0x3a5340 - 0x3a53b8
void sub_003A5340_0x3a5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5340_0x3a5340");
#endif

    switch (ctx->pc) {
        case 0x3a5340u: goto label_3a5340;
        case 0x3a5344u: goto label_3a5344;
        case 0x3a5348u: goto label_3a5348;
        case 0x3a534cu: goto label_3a534c;
        case 0x3a5350u: goto label_3a5350;
        case 0x3a5354u: goto label_3a5354;
        case 0x3a5358u: goto label_3a5358;
        case 0x3a535cu: goto label_3a535c;
        case 0x3a5360u: goto label_3a5360;
        case 0x3a5364u: goto label_3a5364;
        case 0x3a5368u: goto label_3a5368;
        case 0x3a536cu: goto label_3a536c;
        case 0x3a5370u: goto label_3a5370;
        case 0x3a5374u: goto label_3a5374;
        case 0x3a5378u: goto label_3a5378;
        case 0x3a537cu: goto label_3a537c;
        case 0x3a5380u: goto label_3a5380;
        case 0x3a5384u: goto label_3a5384;
        case 0x3a5388u: goto label_3a5388;
        case 0x3a538cu: goto label_3a538c;
        case 0x3a5390u: goto label_3a5390;
        case 0x3a5394u: goto label_3a5394;
        case 0x3a5398u: goto label_3a5398;
        case 0x3a539cu: goto label_3a539c;
        case 0x3a53a0u: goto label_3a53a0;
        case 0x3a53a4u: goto label_3a53a4;
        case 0x3a53a8u: goto label_3a53a8;
        case 0x3a53acu: goto label_3a53ac;
        case 0x3a53b0u: goto label_3a53b0;
        case 0x3a53b4u: goto label_3a53b4;
        default: break;
    }

    ctx->pc = 0x3a5340u;

label_3a5340:
    // 0x3a5340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a5344:
    // 0x3a5344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a5348:
    // 0x3a5348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a534c:
    // 0x3a534c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a534cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5350:
    // 0x3a5350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a5354:
    // 0x3a5354: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a5354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a5358:
    // 0x3a5358: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a535c:
    // 0x3a535c: 0x40f809  jalr        $v0
label_3a5360:
    if (ctx->pc == 0x3A5360u) {
        ctx->pc = 0x3A5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A535Cu;
        // 0x3a5360: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5364u;
        goto label_3a5364;
    }
    ctx->pc = 0x3A535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5364u);
        ctx->pc = 0x3A5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A535Cu;
        // 0x3a5360: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A535Cu, 0x3A5364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5364u;
label_3a5364:
    // 0x3a5364: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a5364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3a5368:
    // 0x3a5368: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a536c:
    if (ctx->pc == 0x3A536Cu) {
        ctx->pc = 0x3A536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5368u;
        // 0x3a536c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5370u;
        goto label_3a5370;
    }
    ctx->pc = 0x3A5368u;
    {
        const bool branch_taken_0x3a5368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5368) {
            ctx->pc = 0x3A536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5368u;
            // 0x3a536c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5380u;
            goto label_3a5380;
        }
    }
    ctx->pc = 0x3A5370u;
label_3a5370:
    // 0x3a5370: 0xc0e3bb0  jal         func_38EEC0
label_3a5374:
    if (ctx->pc == 0x3A5374u) {
        ctx->pc = 0x3A5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5370u;
        // 0x3a5374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5378u;
        goto label_3a5378;
    }
    ctx->pc = 0x3A5370u;
    SET_GPR_U32(ctx, 31, 0x3A5378u);
    ctx->pc = 0x3A5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5370u;
    // 0x3a5374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EEC0u, 0x3A5370u, 0x3A5378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5378u;
label_3a5378:
    // 0x3a5378: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a537c:
    if (ctx->pc == 0x3A537Cu) {
        ctx->pc = 0x3A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5378u;
        // 0x3a537c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5380u;
        goto label_3a5380;
    }
    ctx->pc = 0x3A5378u;
    {
        const bool branch_taken_0x3a5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5378u;
        // 0x3a537c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5378) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A5380u;
label_3a5380:
    // 0x3a5380: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a5380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a5384:
    // 0x3a5384: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a5388:
    // 0x3a5388: 0x40f809  jalr        $v0
label_3a538c:
    if (ctx->pc == 0x3A538Cu) {
        ctx->pc = 0x3A538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5388u;
        // 0x3a538c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5390u;
        goto label_3a5390;
    }
    ctx->pc = 0x3A5388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5390u);
        ctx->pc = 0x3A538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5388u;
        // 0x3a538c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5388u, 0x3A5390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5390u;
label_3a5390:
    // 0x3a5390: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3a5394:
    // 0x3a5394: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a5398:
    if (ctx->pc == 0x3A5398u) {
        ctx->pc = 0x3A5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5394u;
        // 0x3a5398: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A539Cu;
        goto label_3a539c;
    }
    ctx->pc = 0x3A5394u;
    {
        const bool branch_taken_0x3a5394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5394) {
            ctx->pc = 0x3A5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5394u;
            // 0x3a5398: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A539Cu;
label_3a539c:
    // 0x3a539c: 0xc0e4936  jal         func_3924D8
label_3a53a0:
    if (ctx->pc == 0x3A53A0u) {
        ctx->pc = 0x3A53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A539Cu;
        // 0x3a53a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A53A4u;
        goto label_3a53a4;
    }
    ctx->pc = 0x3A539Cu;
    SET_GPR_U32(ctx, 31, 0x3A53A4u);
    ctx->pc = 0x3A53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A539Cu;
    // 0x3a53a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x3A539Cu, 0x3A53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A53A4u;
label_3a53a4:
    // 0x3a53a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a53a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a53a8:
    // 0x3a53a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a53a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a53ac:
    // 0x3a53ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a53acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a53b0:
    // 0x3a53b0: 0x3e00008  jr          $ra
label_3a53b4:
    if (ctx->pc == 0x3A53B4u) {
        ctx->pc = 0x3A53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53B0u;
        // 0x3a53b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A53B8u;
        goto label_fallthrough_0x3a53b0;
    }
    ctx->pc = 0x3A53B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53B0u;
        // 0x3a53b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A53B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a53b0:
    ctx->pc = 0x3A53B8u;
}
