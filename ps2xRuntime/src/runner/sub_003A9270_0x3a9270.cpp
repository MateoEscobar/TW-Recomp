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

// Function: sub_003A9270
// Address: 0x3a9270 - 0x3a9410
void sub_003A9270_0x3a9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9270_0x3a9270");
#endif

    switch (ctx->pc) {
        case 0x3a9270u: goto label_3a9270;
        case 0x3a9274u: goto label_3a9274;
        case 0x3a9278u: goto label_3a9278;
        case 0x3a927cu: goto label_3a927c;
        case 0x3a9280u: goto label_3a9280;
        case 0x3a9284u: goto label_3a9284;
        case 0x3a9288u: goto label_3a9288;
        case 0x3a928cu: goto label_3a928c;
        case 0x3a9290u: goto label_3a9290;
        case 0x3a9294u: goto label_3a9294;
        case 0x3a9298u: goto label_3a9298;
        case 0x3a929cu: goto label_3a929c;
        case 0x3a92a0u: goto label_3a92a0;
        case 0x3a92a4u: goto label_3a92a4;
        case 0x3a92a8u: goto label_3a92a8;
        case 0x3a92acu: goto label_3a92ac;
        case 0x3a92b0u: goto label_3a92b0;
        case 0x3a92b4u: goto label_3a92b4;
        case 0x3a92b8u: goto label_3a92b8;
        case 0x3a92bcu: goto label_3a92bc;
        case 0x3a92c0u: goto label_3a92c0;
        case 0x3a92c4u: goto label_3a92c4;
        case 0x3a92c8u: goto label_3a92c8;
        case 0x3a92ccu: goto label_3a92cc;
        case 0x3a92d0u: goto label_3a92d0;
        case 0x3a92d4u: goto label_3a92d4;
        case 0x3a92d8u: goto label_3a92d8;
        case 0x3a92dcu: goto label_3a92dc;
        case 0x3a92e0u: goto label_3a92e0;
        case 0x3a92e4u: goto label_3a92e4;
        case 0x3a92e8u: goto label_3a92e8;
        case 0x3a92ecu: goto label_3a92ec;
        case 0x3a92f0u: goto label_3a92f0;
        case 0x3a92f4u: goto label_3a92f4;
        case 0x3a92f8u: goto label_3a92f8;
        case 0x3a92fcu: goto label_3a92fc;
        case 0x3a9300u: goto label_3a9300;
        case 0x3a9304u: goto label_3a9304;
        case 0x3a9308u: goto label_3a9308;
        case 0x3a930cu: goto label_3a930c;
        case 0x3a9310u: goto label_3a9310;
        case 0x3a9314u: goto label_3a9314;
        case 0x3a9318u: goto label_3a9318;
        case 0x3a931cu: goto label_3a931c;
        case 0x3a9320u: goto label_3a9320;
        case 0x3a9324u: goto label_3a9324;
        case 0x3a9328u: goto label_3a9328;
        case 0x3a932cu: goto label_3a932c;
        case 0x3a9330u: goto label_3a9330;
        case 0x3a9334u: goto label_3a9334;
        case 0x3a9338u: goto label_3a9338;
        case 0x3a933cu: goto label_3a933c;
        case 0x3a9340u: goto label_3a9340;
        case 0x3a9344u: goto label_3a9344;
        case 0x3a9348u: goto label_3a9348;
        case 0x3a934cu: goto label_3a934c;
        case 0x3a9350u: goto label_3a9350;
        case 0x3a9354u: goto label_3a9354;
        case 0x3a9358u: goto label_3a9358;
        case 0x3a935cu: goto label_3a935c;
        case 0x3a9360u: goto label_3a9360;
        case 0x3a9364u: goto label_3a9364;
        case 0x3a9368u: goto label_3a9368;
        case 0x3a936cu: goto label_3a936c;
        case 0x3a9370u: goto label_3a9370;
        case 0x3a9374u: goto label_3a9374;
        case 0x3a9378u: goto label_3a9378;
        case 0x3a937cu: goto label_3a937c;
        case 0x3a9380u: goto label_3a9380;
        case 0x3a9384u: goto label_3a9384;
        case 0x3a9388u: goto label_3a9388;
        case 0x3a938cu: goto label_3a938c;
        case 0x3a9390u: goto label_3a9390;
        case 0x3a9394u: goto label_3a9394;
        case 0x3a9398u: goto label_3a9398;
        case 0x3a939cu: goto label_3a939c;
        case 0x3a93a0u: goto label_3a93a0;
        case 0x3a93a4u: goto label_3a93a4;
        case 0x3a93a8u: goto label_3a93a8;
        case 0x3a93acu: goto label_3a93ac;
        case 0x3a93b0u: goto label_3a93b0;
        case 0x3a93b4u: goto label_3a93b4;
        case 0x3a93b8u: goto label_3a93b8;
        case 0x3a93bcu: goto label_3a93bc;
        case 0x3a93c0u: goto label_3a93c0;
        case 0x3a93c4u: goto label_3a93c4;
        case 0x3a93c8u: goto label_3a93c8;
        case 0x3a93ccu: goto label_3a93cc;
        case 0x3a93d0u: goto label_3a93d0;
        case 0x3a93d4u: goto label_3a93d4;
        case 0x3a93d8u: goto label_3a93d8;
        case 0x3a93dcu: goto label_3a93dc;
        case 0x3a93e0u: goto label_3a93e0;
        case 0x3a93e4u: goto label_3a93e4;
        case 0x3a93e8u: goto label_3a93e8;
        case 0x3a93ecu: goto label_3a93ec;
        case 0x3a93f0u: goto label_3a93f0;
        case 0x3a93f4u: goto label_3a93f4;
        case 0x3a93f8u: goto label_3a93f8;
        case 0x3a93fcu: goto label_3a93fc;
        case 0x3a9400u: goto label_3a9400;
        case 0x3a9404u: goto label_3a9404;
        case 0x3a9408u: goto label_3a9408;
        case 0x3a940cu: goto label_3a940c;
        default: break;
    }

    ctx->pc = 0x3a9270u;

label_3a9270:
    // 0x3a9270: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3a9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3a9274:
    // 0x3a9274: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3a9274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3a9278:
    // 0x3a9278: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3a9278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3a927c:
    // 0x3a927c: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3a927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3a9280:
    // 0x3a9280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a9280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9284:
    // 0x3a9284: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3a9284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3a9288:
    // 0x3a9288: 0xffbf08b0  sd          $ra, 0x8B0($sp)
    ctx->pc = 0x3a9288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2224), GPR_U64(ctx, 31));
label_3a928c:
    // 0x3a928c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a9290:
    // 0x3a9290: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9294:
    // 0x3a9294: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9298:
    // 0x3a9298: 0x40f809  jalr        $v0
label_3a929c:
    if (ctx->pc == 0x3A929Cu) {
        ctx->pc = 0x3A929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9298u;
        // 0x3a929c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92A0u;
        goto label_3a92a0;
    }
    ctx->pc = 0x3A9298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A92A0u);
        ctx->pc = 0x3A929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9298u;
        // 0x3a929c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9298u, 0x3A92A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A92A0u;
label_3a92a0:
    // 0x3a92a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a92a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a92a4:
    // 0x3a92a4: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3a92a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3a92a8:
    // 0x3a92a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a92ac:
    // 0x3a92ac: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a92acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3a92b0:
    // 0x3a92b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a92b4:
    // 0x3a92b4: 0x0  nop
    ctx->pc = 0x3a92b4u;
    // NOP
label_3a92b8:
    // 0x3a92b8: 0x0  nop
    ctx->pc = 0x3a92b8u;
    // NOP
label_3a92bc:
    // 0x3a92bc: 0x0  nop
    ctx->pc = 0x3a92bcu;
    // NOP
label_3a92c0:
    // 0x3a92c0: 0x0  nop
    ctx->pc = 0x3a92c0u;
    // NOP
label_3a92c4:
    // 0x3a92c4: 0x0  nop
    ctx->pc = 0x3a92c4u;
    // NOP
label_3a92c8:
    // 0x3a92c8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3a92cc:
    if (ctx->pc == 0x3A92CCu) {
        ctx->pc = 0x3A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92C8u;
        // 0x3a92cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92D0u;
        goto label_3a92d0;
    }
    ctx->pc = 0x3A92C8u;
    {
        const bool branch_taken_0x3a92c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92C8u;
        // 0x3a92cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92c8) {
            ctx->pc = 0x3A92B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a92b8;
        }
    }
    ctx->pc = 0x3A92D0u;
label_3a92d0:
    // 0x3a92d0: 0xc138ddc  jal         func_4E3770
label_3a92d4:
    if (ctx->pc == 0x3A92D4u) {
        ctx->pc = 0x3A92D8u;
        goto label_3a92d8;
    }
    ctx->pc = 0x3A92D0u;
    SET_GPR_U32(ctx, 31, 0x3A92D8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3A92D0u, 0x3A92D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92D8u;
label_3a92d8:
    // 0x3a92d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a92dc:
    // 0x3a92dc: 0xc0e90ca  jal         func_3A4328
label_3a92e0:
    if (ctx->pc == 0x3A92E0u) {
        ctx->pc = 0x3A92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92DCu;
        // 0x3a92e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92E4u;
        goto label_3a92e4;
    }
    ctx->pc = 0x3A92DCu;
    SET_GPR_U32(ctx, 31, 0x3A92E4u);
    ctx->pc = 0x3A92E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92DCu;
    // 0x3a92e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A92DCu, 0x3A92E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92E4u;
label_3a92e4:
    // 0x3a92e4: 0xc0e8f9e  jal         func_3A3E78
label_3a92e8:
    if (ctx->pc == 0x3A92E8u) {
        ctx->pc = 0x3A92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92E4u;
        // 0x3a92e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92ECu;
        goto label_3a92ec;
    }
    ctx->pc = 0x3A92E4u;
    SET_GPR_U32(ctx, 31, 0x3A92ECu);
    ctx->pc = 0x3A92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92E4u;
    // 0x3a92e8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E78u, 0x3A92E4u, 0x3A92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92ECu;
label_3a92ec:
    // 0x3a92ec: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_3a92f0:
    if (ctx->pc == 0x3A92F0u) {
        ctx->pc = 0x3A92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92ECu;
        // 0x3a92f0: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92F4u;
        goto label_3a92f4;
    }
    ctx->pc = 0x3A92ECu;
    {
        const bool branch_taken_0x3a92ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a92ec) {
            ctx->pc = 0x3A92F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A92ECu;
            // 0x3a92f0: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A93F4u;
            goto label_3a93f4;
        }
    }
    ctx->pc = 0x3A92F4u;
label_3a92f4:
    // 0x3a92f4: 0xc0e9694  jal         func_3A5A50
label_3a92f8:
    if (ctx->pc == 0x3A92F8u) {
        ctx->pc = 0x3A92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92F4u;
        // 0x3a92f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92FCu;
        goto label_3a92fc;
    }
    ctx->pc = 0x3A92F4u;
    SET_GPR_U32(ctx, 31, 0x3A92FCu);
    ctx->pc = 0x3A92F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92F4u;
    // 0x3a92f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A92F4u, 0x3A92FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92FCu;
label_3a92fc:
    // 0x3a92fc: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_3a9300:
    if (ctx->pc == 0x3A9300u) {
        ctx->pc = 0x3A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92FCu;
        // 0x3a9300: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9304u;
        goto label_3a9304;
    }
    ctx->pc = 0x3A92FCu;
    {
        const bool branch_taken_0x3a92fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a92fc) {
            ctx->pc = 0x3A9300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A92FCu;
            // 0x3a9300: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A93F4u;
            goto label_3a93f4;
        }
    }
    ctx->pc = 0x3A9304u;
label_3a9304:
    // 0x3a9304: 0xc0e8630  jal         func_3A18C0
label_3a9308:
    if (ctx->pc == 0x3A9308u) {
        ctx->pc = 0x3A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9304u;
        // 0x3a9308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A930Cu;
        goto label_3a930c;
    }
    ctx->pc = 0x3A9304u;
    SET_GPR_U32(ctx, 31, 0x3A930Cu);
    ctx->pc = 0x3A9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9304u;
    // 0x3a9308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A9304u, 0x3A930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A930Cu;
label_3a930c:
    // 0x3a930c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_3a9310:
    if (ctx->pc == 0x3A9310u) {
        ctx->pc = 0x3A9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A930Cu;
        // 0x3a9310: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9314u;
        goto label_3a9314;
    }
    ctx->pc = 0x3A930Cu;
    {
        const bool branch_taken_0x3a930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a930c) {
            ctx->pc = 0x3A9310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A930Cu;
            // 0x3a9310: 0x7bb008f0  lq          $s0, 0x8F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A93F4u;
            goto label_3a93f4;
        }
    }
    ctx->pc = 0x3A9314u;
label_3a9314:
    // 0x3a9314: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3a9314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3a9318:
    // 0x3a9318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a931c:
    // 0x3a931c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3a931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3a9320:
    // 0x3a9320: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9324:
    // 0x3a9324: 0xc0e9f56  jal         func_3A7D58
label_3a9328:
    if (ctx->pc == 0x3A9328u) {
        ctx->pc = 0x3A9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9324u;
        // 0x3a9328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A932Cu;
        goto label_3a932c;
    }
    ctx->pc = 0x3A9324u;
    SET_GPR_U32(ctx, 31, 0x3A932Cu);
    ctx->pc = 0x3A9328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9324u;
    // 0x3a9328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3A9324u, 0x3A932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A932Cu;
label_3a932c:
    // 0x3a932c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_3a9330:
    if (ctx->pc == 0x3A9330u) {
        ctx->pc = 0x3A9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A932Cu;
        // 0x3a9330: 0x27b30430  addiu       $s3, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9334u;
        goto label_3a9334;
    }
    ctx->pc = 0x3A932Cu;
    {
        const bool branch_taken_0x3a932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A932Cu;
        // 0x3a9330: 0x27b30430  addiu       $s3, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a932c) {
            ctx->pc = 0x3A93F0u;
            goto label_3a93f0;
        }
    }
    ctx->pc = 0x3A9334u;
label_3a9334:
    // 0x3a9334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9338:
    // 0x3a9338: 0xc0e911e  jal         func_3A4478
label_3a933c:
    if (ctx->pc == 0x3A933Cu) {
        ctx->pc = 0x3A933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9338u;
        // 0x3a933c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9340u;
        goto label_3a9340;
    }
    ctx->pc = 0x3A9338u;
    SET_GPR_U32(ctx, 31, 0x3A9340u);
    ctx->pc = 0x3A933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9338u;
    // 0x3a933c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3A9338u, 0x3A9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9340u;
label_3a9340:
    // 0x3a9340: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a9340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3a9344:
    // 0x3a9344: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3a9344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3a9348:
    // 0x3a9348: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3a934c:
    // 0x3a934c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3a934cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a9350:
    // 0x3a9350: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3a9350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3a9354:
    // 0x3a9354: 0x7fa40440  sq          $a0, 0x440($sp)
    ctx->pc = 0x3a9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 4));
label_3a9358:
    // 0x3a9358: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a9358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a935c:
    // 0x3a935c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a935cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3a9360:
    // 0x3a9360: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a9360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9364:
    // 0x3a9364: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a9364u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a9368:
    // 0x3a9368: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a9368u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a936c:
    // 0x3a936c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a936cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9370:
    // 0x3a9370: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3a9370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9374:
    // 0x3a9374: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3a9374u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a9378:
    // 0x3a9378: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a9378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a937c:
    // 0x3a937c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3a937cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a9380:
    // 0x3a9380: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3a9380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a9384:
    // 0x3a9384: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3a9384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9388:
    // 0x3a9388: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3a9388u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a938c:
    // 0x3a938c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3a938cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9390:
    // 0x3a9390: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3a9390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9394:
    // 0x3a9394: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3a9394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9398:
    // 0x3a9398: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a9398u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a939c:
    // 0x3a939c: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3a939cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3a93a0:
    // 0x3a93a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a93a4:
    // 0x3a93a4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a93a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a93a8:
    // 0x3a93a8: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3a93a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3a93ac:
    // 0x3a93ac: 0x27b10440  addiu       $s1, $sp, 0x440
    ctx->pc = 0x3a93acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3a93b0:
    // 0x3a93b0: 0x26101cb0  addiu       $s0, $s0, 0x1CB0
    ctx->pc = 0x3a93b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7344));
label_3a93b4:
    // 0x3a93b4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3a93b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3a93b8:
    // 0x3a93b8: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3a93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3a93bc:
    // 0x3a93bc: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3a93bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3a93c0:
    // 0x3a93c0: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3a93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3a93c4:
    // 0x3a93c4: 0xc0e8630  jal         func_3A18C0
label_3a93c8:
    if (ctx->pc == 0x3A93C8u) {
        ctx->pc = 0x3A93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93C4u;
        // 0x3a93c8: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93CCu;
        goto label_3a93cc;
    }
    ctx->pc = 0x3A93C4u;
    SET_GPR_U32(ctx, 31, 0x3A93CCu);
    ctx->pc = 0x3A93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A93C4u;
    // 0x3a93c8: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A93C4u, 0x3A93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A93CCu;
label_3a93cc:
    // 0x3a93cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a93ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a93d0:
    // 0x3a93d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a93d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a93d4:
    // 0x3a93d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a93d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a93d8:
    // 0x3a93d8: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3a93d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3a93dc:
    // 0x3a93dc: 0xc0e9fa6  jal         func_3A7E98
label_3a93e0:
    if (ctx->pc == 0x3A93E0u) {
        ctx->pc = 0x3A93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93DCu;
        // 0x3a93e0: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93E4u;
        goto label_3a93e4;
    }
    ctx->pc = 0x3A93DCu;
    SET_GPR_U32(ctx, 31, 0x3A93E4u);
    ctx->pc = 0x3A93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A93DCu;
    // 0x3a93e0: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3A93DCu, 0x3A93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A93E4u;
label_3a93e4:
    // 0x3a93e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a93e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a93e8:
    // 0x3a93e8: 0xc0f15bc  jal         func_3C56F0
label_3a93ec:
    if (ctx->pc == 0x3A93ECu) {
        ctx->pc = 0x3A93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93E8u;
        // 0x3a93ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93F0u;
        goto label_3a93f0;
    }
    ctx->pc = 0x3A93E8u;
    SET_GPR_U32(ctx, 31, 0x3A93F0u);
    ctx->pc = 0x3A93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A93E8u;
    // 0x3a93ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A93E8u, 0x3A93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A93F0u;
label_3a93f0:
    // 0x3a93f0: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3a93f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3a93f4:
    // 0x3a93f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a93f8:
    // 0x3a93f8: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3a93f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3a93fc:
    // 0x3a93fc: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3a93fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3a9400:
    // 0x3a9400: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3a9400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3a9404:
    // 0x3a9404: 0xdfbf08b0  ld          $ra, 0x8B0($sp)
    ctx->pc = 0x3a9404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2224)));
label_3a9408:
    // 0x3a9408: 0x3e00008  jr          $ra
label_3a940c:
    if (ctx->pc == 0x3A940Cu) {
        ctx->pc = 0x3A940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9408u;
        // 0x3a940c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9410u;
        goto label_fallthrough_0x3a9408;
    }
    ctx->pc = 0x3A9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9408u;
        // 0x3a940c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9408:
    ctx->pc = 0x3A9410u;
}
