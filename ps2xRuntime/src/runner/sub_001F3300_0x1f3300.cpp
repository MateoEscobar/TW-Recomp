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

// Function: sub_001F3300
// Address: 0x1f3300 - 0x1f33b8
void sub_001F3300_0x1f3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3300_0x1f3300");
#endif

    switch (ctx->pc) {
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3304u: goto label_1f3304;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f330cu: goto label_1f330c;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3314u: goto label_1f3314;
        case 0x1f3318u: goto label_1f3318;
        case 0x1f331cu: goto label_1f331c;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3324u: goto label_1f3324;
        case 0x1f3328u: goto label_1f3328;
        case 0x1f332cu: goto label_1f332c;
        case 0x1f3330u: goto label_1f3330;
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3338u: goto label_1f3338;
        case 0x1f333cu: goto label_1f333c;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f334cu: goto label_1f334c;
        case 0x1f3350u: goto label_1f3350;
        case 0x1f3354u: goto label_1f3354;
        case 0x1f3358u: goto label_1f3358;
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3364u: goto label_1f3364;
        case 0x1f3368u: goto label_1f3368;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3370u: goto label_1f3370;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f3378u: goto label_1f3378;
        case 0x1f337cu: goto label_1f337c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3384u: goto label_1f3384;
        case 0x1f3388u: goto label_1f3388;
        case 0x1f338cu: goto label_1f338c;
        case 0x1f3390u: goto label_1f3390;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f3398u: goto label_1f3398;
        case 0x1f339cu: goto label_1f339c;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a4u: goto label_1f33a4;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33acu: goto label_1f33ac;
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        default: break;
    }

    ctx->pc = 0x1f3300u;

label_1f3300:
    // 0x1f3300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3304:
    // 0x1f3304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f3308:
    // 0x1f3308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f330c:
    // 0x1f330c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f330cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3310:
    // 0x1f3310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3314:
    // 0x1f3314: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f3314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f3318:
    // 0x1f3318: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f3318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f331c:
    // 0x1f331c: 0x40f809  jalr        $v0
label_1f3320:
    if (ctx->pc == 0x1F3320u) {
        ctx->pc = 0x1F3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F331Cu;
        // 0x1f3320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3324u;
        goto label_1f3324;
    }
    ctx->pc = 0x1F331Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3324u);
        ctx->pc = 0x1F3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F331Cu;
        // 0x1f3320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F331Cu, 0x1F3324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3324u;
label_1f3324:
    // 0x1f3324: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1f3328:
    if (ctx->pc == 0x1F3328u) {
        ctx->pc = 0x1F3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3324u;
        // 0x1f3328: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F332Cu;
        goto label_1f332c;
    }
    ctx->pc = 0x1F3324u;
    {
        const bool branch_taken_0x1f3324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3324) {
            ctx->pc = 0x1F3328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3324u;
            // 0x1f3328: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F33ACu;
            goto label_1f33ac;
        }
    }
    ctx->pc = 0x1F332Cu;
label_1f332c:
    // 0x1f332c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3330:
    // 0x1f3330: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f3330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f3334:
    // 0x1f3334: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f3338:
    // 0x1f3338: 0x40f809  jalr        $v0
label_1f333c:
    if (ctx->pc == 0x1F333Cu) {
        ctx->pc = 0x1F333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3338u;
        // 0x1f333c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3340u;
        goto label_1f3340;
    }
    ctx->pc = 0x1F3338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3340u);
        ctx->pc = 0x1F333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3338u;
        // 0x1f333c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3338u, 0x1F3340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3340u;
label_1f3340:
    // 0x1f3340: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1f3344:
    if (ctx->pc == 0x1F3344u) {
        ctx->pc = 0x1F3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3340u;
        // 0x1f3344: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3348u;
        goto label_1f3348;
    }
    ctx->pc = 0x1F3340u;
    {
        const bool branch_taken_0x1f3340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3340) {
            ctx->pc = 0x1F3344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3340u;
            // 0x1f3344: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F33ACu;
            goto label_1f33ac;
        }
    }
    ctx->pc = 0x1F3348u;
label_1f3348:
    // 0x1f3348: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1f3348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f334c:
    // 0x1f334c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3350:
    // 0x1f3350: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f3350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f3354:
    // 0x1f3354: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f3354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f3358:
    // 0x1f3358: 0x60f809  jalr        $v1
label_1f335c:
    if (ctx->pc == 0x1F335Cu) {
        ctx->pc = 0x1F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3358u;
        // 0x1f335c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3360u;
        goto label_1f3360;
    }
    ctx->pc = 0x1F3358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3360u);
        ctx->pc = 0x1F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3358u;
        // 0x1f335c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3358u, 0x1F3360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3360u;
label_1f3360:
    // 0x1f3360: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f3364:
    // 0x1f3364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3368:
    // 0x1f3368: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f336c:
    // 0x1f336c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f3370:
    // 0x1f3370: 0x60f809  jalr        $v1
label_1f3374:
    if (ctx->pc == 0x1F3374u) {
        ctx->pc = 0x1F3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3370u;
        // 0x1f3374: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3378u;
        goto label_1f3378;
    }
    ctx->pc = 0x1F3370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3378u);
        ctx->pc = 0x1F3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3370u;
        // 0x1f3374: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3370u, 0x1F3378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3378u;
label_1f3378:
    // 0x1f3378: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f3378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f337c:
    // 0x1f337c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3380:
    // 0x1f3380: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f3384:
    // 0x1f3384: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f3388:
    // 0x1f3388: 0x60f809  jalr        $v1
label_1f338c:
    if (ctx->pc == 0x1F338Cu) {
        ctx->pc = 0x1F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3388u;
        // 0x1f338c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3390u;
        goto label_1f3390;
    }
    ctx->pc = 0x1F3388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3390u);
        ctx->pc = 0x1F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3388u;
        // 0x1f338c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3388u, 0x1F3390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3390u;
label_1f3390:
    // 0x1f3390: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1f3390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f3394:
    // 0x1f3394: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3398:
    // 0x1f3398: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f3398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f339c:
    // 0x1f339c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f33a0:
    // 0x1f33a0: 0x60f809  jalr        $v1
label_1f33a4:
    if (ctx->pc == 0x1F33A4u) {
        ctx->pc = 0x1F33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A0u;
        // 0x1f33a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33A8u;
        goto label_1f33a8;
    }
    ctx->pc = 0x1F33A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F33A8u);
        ctx->pc = 0x1F33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A0u;
        // 0x1f33a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F33A0u, 0x1F33A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F33A8u;
label_1f33a8:
    // 0x1f33a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f33a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f33ac:
    // 0x1f33ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f33acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f33b0:
    // 0x1f33b0: 0x3e00008  jr          $ra
label_1f33b4:
    if (ctx->pc == 0x1F33B4u) {
        ctx->pc = 0x1F33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33B0u;
        // 0x1f33b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33B8u;
        goto label_fallthrough_0x1f33b0;
    }
    ctx->pc = 0x1F33B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33B0u;
        // 0x1f33b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F33B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f33b0:
    ctx->pc = 0x1F33B8u;
}
