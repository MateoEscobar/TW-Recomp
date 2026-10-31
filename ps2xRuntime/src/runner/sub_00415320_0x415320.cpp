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

// Function: sub_00415320
// Address: 0x415320 - 0x415378
void sub_00415320_0x415320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415320_0x415320");
#endif

    switch (ctx->pc) {
        case 0x415320u: goto label_415320;
        case 0x415324u: goto label_415324;
        case 0x415328u: goto label_415328;
        case 0x41532cu: goto label_41532c;
        case 0x415330u: goto label_415330;
        case 0x415334u: goto label_415334;
        case 0x415338u: goto label_415338;
        case 0x41533cu: goto label_41533c;
        case 0x415340u: goto label_415340;
        case 0x415344u: goto label_415344;
        case 0x415348u: goto label_415348;
        case 0x41534cu: goto label_41534c;
        case 0x415350u: goto label_415350;
        case 0x415354u: goto label_415354;
        case 0x415358u: goto label_415358;
        case 0x41535cu: goto label_41535c;
        case 0x415360u: goto label_415360;
        case 0x415364u: goto label_415364;
        case 0x415368u: goto label_415368;
        case 0x41536cu: goto label_41536c;
        case 0x415370u: goto label_415370;
        case 0x415374u: goto label_415374;
        default: break;
    }

    ctx->pc = 0x415320u;

label_415320:
    // 0x415320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415324:
    // 0x415324: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_415328:
    // 0x415328: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_41532c:
    if (ctx->pc == 0x41532Cu) {
        ctx->pc = 0x41532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415328u;
        // 0x41532c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415330u;
        goto label_415330;
    }
    ctx->pc = 0x415328u;
    {
        const bool branch_taken_0x415328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415328u;
        // 0x41532c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415328) {
            ctx->pc = 0x415364u;
            goto label_415364;
        }
    }
    ctx->pc = 0x415330u;
label_415330:
    // 0x415330: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x415330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_415334:
    // 0x415334: 0x24900070  addiu       $s0, $a0, 0x70
    ctx->pc = 0x415334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_415338:
    // 0x415338: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x415338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41533c:
    // 0x41533c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415340:
    // 0x415340: 0x40f809  jalr        $v0
label_415344:
    if (ctx->pc == 0x415344u) {
        ctx->pc = 0x415344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415340u;
        // 0x415344: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415348u;
        goto label_415348;
    }
    ctx->pc = 0x415340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415348u);
        ctx->pc = 0x415344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415340u;
        // 0x415344: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415340u, 0x415348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415348u;
label_415348:
    // 0x415348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x415348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41534c:
    // 0x41534c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415350:
    // 0x415350: 0xc13d726  jal         func_4F5C98
label_415354:
    if (ctx->pc == 0x415354u) {
        ctx->pc = 0x415354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415350u;
        // 0x415354: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415358u;
        goto label_415358;
    }
    ctx->pc = 0x415350u;
    SET_GPR_U32(ctx, 31, 0x415358u);
    ctx->pc = 0x415354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415350u;
    // 0x415354: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C98u, 0x415350u, 0x415358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415358u;
label_415358:
    // 0x415358: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x415358u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_41535c:
    // 0x41535c: 0x10000002  b           . + 4 + (0x2 << 2)
label_415360:
    if (ctx->pc == 0x415360u) {
        ctx->pc = 0x415360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41535Cu;
        // 0x415360: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415364u;
        goto label_415364;
    }
    ctx->pc = 0x41535Cu;
    {
        const bool branch_taken_0x41535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41535Cu;
        // 0x415360: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41535c) {
            ctx->pc = 0x415368u;
            goto label_415368;
        }
    }
    ctx->pc = 0x415364u;
label_415364:
    // 0x415364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415368:
    // 0x415368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41536c:
    // 0x41536c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415370:
    // 0x415370: 0x3e00008  jr          $ra
label_415374:
    if (ctx->pc == 0x415374u) {
        ctx->pc = 0x415374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415370u;
        // 0x415374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415378u;
        goto label_fallthrough_0x415370;
    }
    ctx->pc = 0x415370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415370u;
        // 0x415374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x415370:
    ctx->pc = 0x415378u;
}
