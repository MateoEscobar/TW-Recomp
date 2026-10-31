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

// Function: sub_0029C310
// Address: 0x29c310 - 0x29c3a0
void sub_0029C310_0x29c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C310_0x29c310");
#endif

    switch (ctx->pc) {
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c320u: goto label_29c320;
        case 0x29c324u: goto label_29c324;
        case 0x29c328u: goto label_29c328;
        case 0x29c32cu: goto label_29c32c;
        case 0x29c330u: goto label_29c330;
        case 0x29c334u: goto label_29c334;
        case 0x29c338u: goto label_29c338;
        case 0x29c33cu: goto label_29c33c;
        case 0x29c340u: goto label_29c340;
        case 0x29c344u: goto label_29c344;
        case 0x29c348u: goto label_29c348;
        case 0x29c34cu: goto label_29c34c;
        case 0x29c350u: goto label_29c350;
        case 0x29c354u: goto label_29c354;
        case 0x29c358u: goto label_29c358;
        case 0x29c35cu: goto label_29c35c;
        case 0x29c360u: goto label_29c360;
        case 0x29c364u: goto label_29c364;
        case 0x29c368u: goto label_29c368;
        case 0x29c36cu: goto label_29c36c;
        case 0x29c370u: goto label_29c370;
        case 0x29c374u: goto label_29c374;
        case 0x29c378u: goto label_29c378;
        case 0x29c37cu: goto label_29c37c;
        case 0x29c380u: goto label_29c380;
        case 0x29c384u: goto label_29c384;
        case 0x29c388u: goto label_29c388;
        case 0x29c38cu: goto label_29c38c;
        case 0x29c390u: goto label_29c390;
        case 0x29c394u: goto label_29c394;
        case 0x29c398u: goto label_29c398;
        case 0x29c39cu: goto label_29c39c;
        default: break;
    }

    ctx->pc = 0x29c310u;

label_29c310:
    // 0x29c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c314:
    // 0x29c314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c318:
    // 0x29c318: 0xc087502  jal         func_21D408
label_29c31c:
    if (ctx->pc == 0x29C31Cu) {
        ctx->pc = 0x29C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C318u;
        // 0x29c31c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C320u;
        goto label_29c320;
    }
    ctx->pc = 0x29C318u;
    SET_GPR_U32(ctx, 31, 0x29C320u);
    ctx->pc = 0x29C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C318u;
    // 0x29c31c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C318u, 0x29C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C320u;
label_29c320:
    // 0x29c320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29c320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c324:
    // 0x29c324: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_29c328:
    // 0x29c328: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c32c:
    // 0x29c32c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_29c330:
    if (ctx->pc == 0x29C330u) {
        ctx->pc = 0x29C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C32Cu;
        // 0x29c330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C334u;
        goto label_29c334;
    }
    ctx->pc = 0x29C32Cu;
    {
        const bool branch_taken_0x29c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C32Cu;
        // 0x29c330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c32c) {
            ctx->pc = 0x29C394u;
            goto label_29c394;
        }
    }
    ctx->pc = 0x29C334u;
label_29c334:
    // 0x29c334: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29c334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_29c338:
    // 0x29c338: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_29c33c:
    if (ctx->pc == 0x29C33Cu) {
        ctx->pc = 0x29C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C338u;
        // 0x29c33c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C340u;
        goto label_29c340;
    }
    ctx->pc = 0x29C338u;
    {
        const bool branch_taken_0x29c338 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C338u;
        // 0x29c33c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c338) {
            ctx->pc = 0x29C34Cu;
            goto label_29c34c;
        }
    }
    ctx->pc = 0x29C340u;
label_29c340:
    // 0x29c340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29c344:
    // 0x29c344: 0x10000002  b           . + 4 + (0x2 << 2)
label_29c348:
    if (ctx->pc == 0x29C348u) {
        ctx->pc = 0x29C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C344u;
        // 0x29c348: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C34Cu;
        goto label_29c34c;
    }
    ctx->pc = 0x29C344u;
    {
        const bool branch_taken_0x29c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C344u;
        // 0x29c348: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c344) {
            ctx->pc = 0x29C350u;
            goto label_29c350;
        }
    }
    ctx->pc = 0x29C34Cu;
label_29c34c:
    // 0x29c34c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c350:
    // 0x29c350: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_29c354:
    if (ctx->pc == 0x29C354u) {
        ctx->pc = 0x29C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C350u;
        // 0x29c354: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C358u;
        goto label_29c358;
    }
    ctx->pc = 0x29C350u;
    {
        const bool branch_taken_0x29c350 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c350) {
            ctx->pc = 0x29C354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C350u;
            // 0x29c354: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C360u;
            goto label_29c360;
        }
    }
    ctx->pc = 0x29C358u;
label_29c358:
    // 0x29c358: 0x1000000e  b           . + 4 + (0xE << 2)
label_29c35c:
    if (ctx->pc == 0x29C35Cu) {
        ctx->pc = 0x29C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C358u;
        // 0x29c35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C360u;
        goto label_29c360;
    }
    ctx->pc = 0x29C358u;
    {
        const bool branch_taken_0x29c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C358u;
        // 0x29c35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c358) {
            ctx->pc = 0x29C394u;
            goto label_29c394;
        }
    }
    ctx->pc = 0x29C360u;
label_29c360:
    // 0x29c360: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29c360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29c364:
    // 0x29c364: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29c368:
    // 0x29c368: 0x40f809  jalr        $v0
label_29c36c:
    if (ctx->pc == 0x29C36Cu) {
        ctx->pc = 0x29C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C368u;
        // 0x29c36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C370u;
        goto label_29c370;
    }
    ctx->pc = 0x29C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C370u);
        ctx->pc = 0x29C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C368u;
        // 0x29c36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C368u, 0x29C370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C370u;
label_29c370:
    // 0x29c370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29c370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c374:
    // 0x29c374: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x29c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_29c378:
    // 0x29c378: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_29c37c:
    if (ctx->pc == 0x29C37Cu) {
        ctx->pc = 0x29C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C378u;
        // 0x29c37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C380u;
        goto label_29c380;
    }
    ctx->pc = 0x29C378u;
    {
        const bool branch_taken_0x29c378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C378u;
        // 0x29c37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c378) {
            ctx->pc = 0x29C38Cu;
            goto label_29c38c;
        }
    }
    ctx->pc = 0x29C380u;
label_29c380:
    // 0x29c380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c384:
    // 0x29c384: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_29c388:
    if (ctx->pc == 0x29C388u) {
        ctx->pc = 0x29C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C384u;
        // 0x29c388: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C38Cu;
        goto label_29c38c;
    }
    ctx->pc = 0x29C384u;
    {
        const bool branch_taken_0x29c384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C384u;
        // 0x29c388: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c384) {
            ctx->pc = 0x29C394u;
            goto label_29c394;
        }
    }
    ctx->pc = 0x29C38Cu;
label_29c38c:
    // 0x29c38c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c390:
    // 0x29c390: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29c390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c394:
    // 0x29c394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c398:
    // 0x29c398: 0x3e00008  jr          $ra
label_29c39c:
    if (ctx->pc == 0x29C39Cu) {
        ctx->pc = 0x29C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C398u;
        // 0x29c39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C3A0u;
        goto label_fallthrough_0x29c398;
    }
    ctx->pc = 0x29C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C398u;
        // 0x29c39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c398:
    ctx->pc = 0x29C3A0u;
}
