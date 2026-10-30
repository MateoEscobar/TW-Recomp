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

// Function: sub_001F9228
// Address: 0x1f9228 - 0x1f93a0
void sub_001F9228_0x1f9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9228_0x1f9228");
#endif

    switch (ctx->pc) {
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f9390u: goto label_1f9390;
        case 0x1f9394u: goto label_1f9394;
        case 0x1f9398u: goto label_1f9398;
        case 0x1f939cu: goto label_1f939c;
        default: break;
    }

    ctx->pc = 0x1f9228u;

label_1f9228:
    // 0x1f9228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f922c:
    // 0x1f922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9230:
    // 0x1f9230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f9230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f9234:
    // 0x1f9234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9238:
    // 0x1f9238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f923c:
    // 0x1f923c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9240:
    // 0x1f9240: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f9240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f9244:
    // 0x1f9244: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f9248:
    // 0x1f9248: 0x40f809  jalr        $v0
label_1f924c:
    if (ctx->pc == 0x1F924Cu) {
        ctx->pc = 0x1F924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9248u;
        // 0x1f924c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9250u;
        goto label_1f9250;
    }
    ctx->pc = 0x1F9248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9250u);
        ctx->pc = 0x1F924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9248u;
        // 0x1f924c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9248u, 0x1F9250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9250u;
label_1f9250:
    // 0x1f9250: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1f9254:
    if (ctx->pc == 0x1F9254u) {
        ctx->pc = 0x1F9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9250u;
        // 0x1f9254: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9258u;
        goto label_1f9258;
    }
    ctx->pc = 0x1F9250u;
    {
        const bool branch_taken_0x1f9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9250u;
        // 0x1f9254: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9250) {
            ctx->pc = 0x1F938Cu;
            goto label_1f938c;
        }
    }
    ctx->pc = 0x1F9258u;
label_1f9258:
    // 0x1f9258: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f925c:
    // 0x1f925c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f925cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f9260:
    // 0x1f9260: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f9264:
    // 0x1f9264: 0x40f809  jalr        $v0
label_1f9268:
    if (ctx->pc == 0x1F9268u) {
        ctx->pc = 0x1F9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9264u;
        // 0x1f9268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F926Cu;
        goto label_1f926c;
    }
    ctx->pc = 0x1F9264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F926Cu);
        ctx->pc = 0x1F9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9264u;
        // 0x1f9268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9264u, 0x1F926Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F926Cu;
label_1f926c:
    // 0x1f926c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1f9270:
    if (ctx->pc == 0x1F9270u) {
        ctx->pc = 0x1F9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F926Cu;
        // 0x1f9270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9274u;
        goto label_1f9274;
    }
    ctx->pc = 0x1F926Cu;
    {
        const bool branch_taken_0x1f926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F926Cu;
        // 0x1f9270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f926c) {
            ctx->pc = 0x1F938Cu;
            goto label_1f938c;
        }
    }
    ctx->pc = 0x1F9274u;
label_1f9274:
    // 0x1f9274: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f9274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f9278:
    // 0x1f9278: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f927c:
    // 0x1f927c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f927cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f9280:
    // 0x1f9280: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f9284:
    // 0x1f9284: 0x60f809  jalr        $v1
label_1f9288:
    if (ctx->pc == 0x1F9288u) {
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F928Cu;
        goto label_1f928c;
    }
    ctx->pc = 0x1F9284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F928Cu);
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9284u, 0x1F928Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F928Cu;
label_1f928c:
    // 0x1f928c: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1f9290:
    // 0x1f9290: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9294:
    // 0x1f9294: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f9298:
    // 0x1f9298: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f9298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f929c:
    // 0x1f929c: 0x60f809  jalr        $v1
label_1f92a0:
    if (ctx->pc == 0x1F92A0u) {
        ctx->pc = 0x1F92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F929Cu;
        // 0x1f92a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92A4u;
        goto label_1f92a4;
    }
    ctx->pc = 0x1F929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F92A4u);
        ctx->pc = 0x1F92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F929Cu;
        // 0x1f92a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F929Cu, 0x1F92A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F92A4u;
label_1f92a4:
    // 0x1f92a4: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f92a8:
    // 0x1f92a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f92ac:
    // 0x1f92ac: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f92b0:
    // 0x1f92b0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f92b4:
    // 0x1f92b4: 0x60f809  jalr        $v1
label_1f92b8:
    if (ctx->pc == 0x1F92B8u) {
        ctx->pc = 0x1F92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B4u;
        // 0x1f92b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92BCu;
        goto label_1f92bc;
    }
    ctx->pc = 0x1F92B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F92BCu);
        ctx->pc = 0x1F92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B4u;
        // 0x1f92b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92B4u, 0x1F92BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F92BCu;
label_1f92bc:
    // 0x1f92bc: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f92c0:
    // 0x1f92c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f92c4:
    // 0x1f92c4: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1f92c8:
    // 0x1f92c8: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1f92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1f92cc:
    // 0x1f92cc: 0x40f809  jalr        $v0
label_1f92d0:
    if (ctx->pc == 0x1F92D0u) {
        ctx->pc = 0x1F92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92CCu;
        // 0x1f92d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92D4u;
        goto label_1f92d4;
    }
    ctx->pc = 0x1F92CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F92D4u);
        ctx->pc = 0x1F92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92CCu;
        // 0x1f92d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92CCu, 0x1F92D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F92D4u;
label_1f92d4:
    // 0x1f92d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f92d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f92d8:
    // 0x1f92d8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1f92dc:
    if (ctx->pc == 0x1F92DCu) {
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92E0u;
        goto label_1f92e0;
    }
    ctx->pc = 0x1F92D8u;
    {
        const bool branch_taken_0x1f92d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d8) {
            ctx->pc = 0x1F938Cu;
            goto label_1f938c;
        }
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f92e4:
    // 0x1f92e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f92e8:
    // 0x1f92e8: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x1f92e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_1f92ec:
    // 0x1f92ec: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1f92f0:
    // 0x1f92f0: 0x40f809  jalr        $v0
label_1f92f4:
    if (ctx->pc == 0x1F92F4u) {
        ctx->pc = 0x1F92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F0u;
        // 0x1f92f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92F8u;
        goto label_1f92f8;
    }
    ctx->pc = 0x1F92F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F92F8u);
        ctx->pc = 0x1F92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F0u;
        // 0x1f92f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92F0u, 0x1F92F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F92F8u;
label_1f92f8:
    // 0x1f92f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f92fc:
    if (ctx->pc == 0x1F92FCu) {
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9300u;
        goto label_1f9300;
    }
    ctx->pc = 0x1F92F8u;
    {
        const bool branch_taken_0x1f92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f92f8) {
            ctx->pc = 0x1F92FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F92F8u;
            // 0x1f92fc: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F931Cu;
            goto label_1f931c;
        }
    }
    ctx->pc = 0x1F9300u;
label_1f9300:
    // 0x1f9300: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f9304:
    // 0x1f9304: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9308:
    // 0x1f9308: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f930c:
    // 0x1f930c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f9310:
    // 0x1f9310: 0x60f809  jalr        $v1
label_1f9314:
    if (ctx->pc == 0x1F9314u) {
        ctx->pc = 0x1F9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9310u;
        // 0x1f9314: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9318u;
        goto label_1f9318;
    }
    ctx->pc = 0x1F9310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9318u);
        ctx->pc = 0x1F9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9310u;
        // 0x1f9314: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9310u, 0x1F9318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9318u;
label_1f9318:
    // 0x1f9318: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f9318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f931c:
    // 0x1f931c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9320:
    // 0x1f9320: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_1f9324:
    // 0x1f9324: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1f9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1f9328:
    // 0x1f9328: 0x40f809  jalr        $v0
label_1f932c:
    if (ctx->pc == 0x1F932Cu) {
        ctx->pc = 0x1F932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9328u;
        // 0x1f932c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9330u;
        goto label_1f9330;
    }
    ctx->pc = 0x1F9328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9330u);
        ctx->pc = 0x1F932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9328u;
        // 0x1f932c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9328u, 0x1F9330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9330u;
label_1f9330:
    // 0x1f9330: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f9330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f9334:
    // 0x1f9334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9338:
    // 0x1f9338: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f933c:
    // 0x1f933c: 0x84640148  lh          $a0, 0x148($v1)
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
label_1f9340:
    // 0x1f9340: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x1f9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_1f9344:
    // 0x1f9344: 0x40f809  jalr        $v0
label_1f9348:
    if (ctx->pc == 0x1F9348u) {
        ctx->pc = 0x1F9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9344u;
        // 0x1f9348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F934Cu;
        goto label_1f934c;
    }
    ctx->pc = 0x1F9344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F934Cu);
        ctx->pc = 0x1F9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9344u;
        // 0x1f9348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9344u, 0x1F934Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F934Cu;
label_1f934c:
    // 0x1f934c: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1f934cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f9350:
    // 0x1f9350: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f9350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f9354:
    // 0x1f9354: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f9354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9358:
    // 0x1f9358: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1f9358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1f935c:
    // 0x1f935c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1f935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1f9360:
    // 0x1f9360: 0x40f809  jalr        $v0
label_1f9364:
    if (ctx->pc == 0x1F9364u) {
        ctx->pc = 0x1F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9360u;
        // 0x1f9364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9368u;
        goto label_1f9368;
    }
    ctx->pc = 0x1F9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9368u);
        ctx->pc = 0x1F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9360u;
        // 0x1f9364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9360u, 0x1F9368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9368u;
label_1f9368:
    // 0x1f9368: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1f936c:
    if (ctx->pc == 0x1F936Cu) {
        ctx->pc = 0x1F936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9368u;
        // 0x1f936c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9370u;
        goto label_1f9370;
    }
    ctx->pc = 0x1F9368u;
    {
        const bool branch_taken_0x1f9368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9368u;
        // 0x1f936c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9368) {
            ctx->pc = 0x1F938Cu;
            goto label_1f938c;
        }
    }
    ctx->pc = 0x1F9370u;
label_1f9370:
    // 0x1f9370: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1f9370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f9374:
    // 0x1f9374: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9378:
    // 0x1f9378: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f937c:
    // 0x1f937c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f9380:
    // 0x1f9380: 0x60f809  jalr        $v1
label_1f9384:
    if (ctx->pc == 0x1F9384u) {
        ctx->pc = 0x1F9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9380u;
        // 0x1f9384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9388u;
        goto label_1f9388;
    }
    ctx->pc = 0x1F9380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9388u);
        ctx->pc = 0x1F9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9380u;
        // 0x1f9384: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9380u, 0x1F9388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9388u;
label_1f9388:
    // 0x1f9388: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f9388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f938c:
    // 0x1f938c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9390:
    // 0x1f9390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9394:
    // 0x1f9394: 0x3e00008  jr          $ra
label_1f9398:
    if (ctx->pc == 0x1F9398u) {
        ctx->pc = 0x1F9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9394u;
        // 0x1f9398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F939Cu;
        goto label_1f939c;
    }
    ctx->pc = 0x1F9394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9394u;
        // 0x1f9398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F939Cu;
label_1f939c:
    // 0x1f939c: 0x0  nop
    ctx->pc = 0x1f939cu;
    // NOP
    ctx->pc = 0x1f93a0u;
}
