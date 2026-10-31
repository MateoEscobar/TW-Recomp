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

// Function: sub_00317350
// Address: 0x317350 - 0x3173ec
void sub_00317350_0x317350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317350_0x317350");
#endif

    switch (ctx->pc) {
        case 0x317350u: goto label_317350;
        case 0x317354u: goto label_317354;
        case 0x317358u: goto label_317358;
        case 0x31735cu: goto label_31735c;
        case 0x317360u: goto label_317360;
        case 0x317364u: goto label_317364;
        case 0x317368u: goto label_317368;
        case 0x31736cu: goto label_31736c;
        case 0x317370u: goto label_317370;
        case 0x317374u: goto label_317374;
        case 0x317378u: goto label_317378;
        case 0x31737cu: goto label_31737c;
        case 0x317380u: goto label_317380;
        case 0x317384u: goto label_317384;
        case 0x317388u: goto label_317388;
        case 0x31738cu: goto label_31738c;
        case 0x317390u: goto label_317390;
        case 0x317394u: goto label_317394;
        case 0x317398u: goto label_317398;
        case 0x31739cu: goto label_31739c;
        case 0x3173a0u: goto label_3173a0;
        case 0x3173a4u: goto label_3173a4;
        case 0x3173a8u: goto label_3173a8;
        case 0x3173acu: goto label_3173ac;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173b4u: goto label_3173b4;
        case 0x3173b8u: goto label_3173b8;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173c0u: goto label_3173c0;
        case 0x3173c4u: goto label_3173c4;
        case 0x3173c8u: goto label_3173c8;
        case 0x3173ccu: goto label_3173cc;
        case 0x3173d0u: goto label_3173d0;
        case 0x3173d4u: goto label_3173d4;
        case 0x3173d8u: goto label_3173d8;
        case 0x3173dcu: goto label_3173dc;
        case 0x3173e0u: goto label_3173e0;
        case 0x3173e4u: goto label_3173e4;
        case 0x3173e8u: goto label_3173e8;
        default: break;
    }

    ctx->pc = 0x317350u;

label_317350:
    // 0x317350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x317350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_317354:
    // 0x317354: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x317354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_317358:
    // 0x317358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31735c:
    // 0x31735c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31735cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317360:
    // 0x317360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_317364:
    // 0x317364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x317364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_317368:
    // 0x317368: 0xc08a61a  jal         func_229868
label_31736c:
    if (ctx->pc == 0x31736Cu) {
        ctx->pc = 0x31736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317368u;
        // 0x31736c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317370u;
        goto label_317370;
    }
    ctx->pc = 0x317368u;
    SET_GPR_U32(ctx, 31, 0x317370u);
    ctx->pc = 0x31736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317368u;
    // 0x31736c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x317368u, 0x317370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317370u;
label_317370:
    // 0x317370: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_317374:
    if (ctx->pc == 0x317374u) {
        ctx->pc = 0x317374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317370u;
        // 0x317374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317378u;
        goto label_317378;
    }
    ctx->pc = 0x317370u;
    {
        const bool branch_taken_0x317370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317370u;
        // 0x317374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317370) {
            ctx->pc = 0x3173F8u;
            return;
        }
    }
    ctx->pc = 0x317378u;
label_317378:
    // 0x317378: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x317378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31737c:
    // 0x31737c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x31737cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_317380:
    // 0x317380: 0x2cc30016  sltiu       $v1, $a2, 0x16
    ctx->pc = 0x317380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_317384:
    // 0x317384: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_317388:
    if (ctx->pc == 0x317388u) {
        ctx->pc = 0x317388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317384u;
        // 0x317388: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31738Cu;
        goto label_31738c;
    }
    ctx->pc = 0x317384u;
    {
        const bool branch_taken_0x317384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317384u;
        // 0x317388: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317384) {
            ctx->pc = 0x3173F4u;
            return;
        }
    }
    ctx->pc = 0x31738Cu;
label_31738c:
    // 0x31738c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31738cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_317390:
    // 0x317390: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x317390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_317394:
    // 0x317394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x317394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317398:
    // 0x317398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x317398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31739c:
    // 0x31739c: 0x800008  jr          $a0
label_3173a0:
    if (ctx->pc == 0x3173A0u) {
        ctx->pc = 0x3173A4u;
        goto label_3173a4;
    }
    ctx->pc = 0x31739Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3173A4u: goto label_3173a4;
            case 0x3173B0u: goto label_3173b0;
            case 0x3173BCu: goto label_3173bc;
            case 0x3173DCu: goto label_3173dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31739Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3173A4u;
label_3173a4:
    // 0x3173a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3173a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3173a8:
    // 0x3173a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3173ac:
    if (ctx->pc == 0x3173ACu) {
        ctx->pc = 0x3173ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173A8u;
        // 0x3173ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173B0u;
        goto label_3173b0;
    }
    ctx->pc = 0x3173A8u;
    {
        const bool branch_taken_0x3173a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173A8u;
        // 0x3173ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173a8) {
            ctx->pc = 0x3173C4u;
            goto label_3173c4;
        }
    }
    ctx->pc = 0x3173B0u;
label_3173b0:
    // 0x3173b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3173b4:
    // 0x3173b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3173b8:
    if (ctx->pc == 0x3173B8u) {
        ctx->pc = 0x3173B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173B4u;
        // 0x3173b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173BCu;
        goto label_3173bc;
    }
    ctx->pc = 0x3173B4u;
    {
        const bool branch_taken_0x3173b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173B4u;
        // 0x3173b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173b4) {
            ctx->pc = 0x3173C4u;
            goto label_3173c4;
        }
    }
    ctx->pc = 0x3173BCu;
label_3173bc:
    // 0x3173bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3173bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3173c0:
    // 0x3173c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3173c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3173c4:
    // 0x3173c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3173c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3173c8:
    // 0x3173c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3173c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3173cc:
    // 0x3173cc: 0x60f809  jalr        $v1
label_3173d0:
    if (ctx->pc == 0x3173D0u) {
        ctx->pc = 0x3173D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173CCu;
        // 0x3173d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173D4u;
        goto label_3173d4;
    }
    ctx->pc = 0x3173CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3173D4u);
        ctx->pc = 0x3173D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173CCu;
        // 0x3173d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3173CCu, 0x3173D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3173D4u;
label_3173d4:
    // 0x3173d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3173d8:
    if (ctx->pc == 0x3173D8u) {
        ctx->pc = 0x3173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173D4u;
        // 0x3173d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173DCu;
        goto label_3173dc;
    }
    ctx->pc = 0x3173D4u;
    {
        const bool branch_taken_0x3173d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173D4u;
        // 0x3173d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173d4) {
            ctx->pc = 0x3173F8u;
            return;
        }
    }
    ctx->pc = 0x3173DCu;
label_3173dc:
    // 0x3173dc: 0xc0c5c42  jal         func_317108
label_3173e0:
    if (ctx->pc == 0x3173E0u) {
        ctx->pc = 0x3173E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173DCu;
        // 0x3173e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173E4u;
        goto label_3173e4;
    }
    ctx->pc = 0x3173DCu;
    SET_GPR_U32(ctx, 31, 0x3173E4u);
    ctx->pc = 0x3173E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3173DCu;
    // 0x3173e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317108u, 0x3173DCu, 0x3173E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3173E4u;
label_3173e4:
    // 0x3173e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3173e8:
    if (ctx->pc == 0x3173E8u) {
        ctx->pc = 0x3173E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173E4u;
        // 0x3173e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173ECu;
        goto label_fallthrough_0x3173e4;
    }
    ctx->pc = 0x3173E4u;
    {
        const bool branch_taken_0x3173e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173E4u;
        // 0x3173e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173e4) {
            ctx->pc = 0x3173F8u;
            return;
        }
    }
label_fallthrough_0x3173e4:
    ctx->pc = 0x3173ECu;
}
