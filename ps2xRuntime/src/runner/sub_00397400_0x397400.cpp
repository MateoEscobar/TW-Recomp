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

// Function: sub_00397400
// Address: 0x397400 - 0x397478
void sub_00397400_0x397400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397400_0x397400");
#endif

    switch (ctx->pc) {
        case 0x397400u: goto label_397400;
        case 0x397404u: goto label_397404;
        case 0x397408u: goto label_397408;
        case 0x39740cu: goto label_39740c;
        case 0x397410u: goto label_397410;
        case 0x397414u: goto label_397414;
        case 0x397418u: goto label_397418;
        case 0x39741cu: goto label_39741c;
        case 0x397420u: goto label_397420;
        case 0x397424u: goto label_397424;
        case 0x397428u: goto label_397428;
        case 0x39742cu: goto label_39742c;
        case 0x397430u: goto label_397430;
        case 0x397434u: goto label_397434;
        case 0x397438u: goto label_397438;
        case 0x39743cu: goto label_39743c;
        case 0x397440u: goto label_397440;
        case 0x397444u: goto label_397444;
        case 0x397448u: goto label_397448;
        case 0x39744cu: goto label_39744c;
        case 0x397450u: goto label_397450;
        case 0x397454u: goto label_397454;
        case 0x397458u: goto label_397458;
        case 0x39745cu: goto label_39745c;
        case 0x397460u: goto label_397460;
        case 0x397464u: goto label_397464;
        case 0x397468u: goto label_397468;
        case 0x39746cu: goto label_39746c;
        case 0x397470u: goto label_397470;
        case 0x397474u: goto label_397474;
        default: break;
    }

    ctx->pc = 0x397400u;

label_397400:
    // 0x397400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_397404:
    // 0x397404: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x397404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_397408:
    // 0x397408: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39740c:
    // 0x39740c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_397410:
    // 0x397410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_397414:
    // 0x397414: 0xc0e4060  jal         func_390180
label_397418:
    if (ctx->pc == 0x397418u) {
        ctx->pc = 0x397418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397414u;
        // 0x397418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39741Cu;
        goto label_39741c;
    }
    ctx->pc = 0x397414u;
    SET_GPR_U32(ctx, 31, 0x39741Cu);
    ctx->pc = 0x397418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397414u;
    // 0x397418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397414u, 0x39741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39741Cu;
label_39741c:
    // 0x39741c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39741cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397420:
    // 0x397420: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_397424:
    if (ctx->pc == 0x397424u) {
        ctx->pc = 0x397424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397420u;
        // 0x397424: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397428u;
        goto label_397428;
    }
    ctx->pc = 0x397420u;
    {
        const bool branch_taken_0x397420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x397424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397420u;
        // 0x397424: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397420) {
            ctx->pc = 0x397448u;
            goto label_397448;
        }
    }
    ctx->pc = 0x397428u;
label_397428:
    // 0x397428: 0xc0e8b48  jal         func_3A2D20
label_39742c:
    if (ctx->pc == 0x39742Cu) {
        ctx->pc = 0x39742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397428u;
        // 0x39742c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397430u;
        goto label_397430;
    }
    ctx->pc = 0x397428u;
    SET_GPR_U32(ctx, 31, 0x397430u);
    ctx->pc = 0x39742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397428u;
    // 0x39742c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x397428u, 0x397430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397430u;
label_397430:
    // 0x397430: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_397434:
    // 0x397434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x397434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397438:
    // 0x397438: 0xc0e8b80  jal         func_3A2E00
label_39743c:
    if (ctx->pc == 0x39743Cu) {
        ctx->pc = 0x39743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397438u;
        // 0x39743c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397440u;
        goto label_397440;
    }
    ctx->pc = 0x397438u;
    SET_GPR_U32(ctx, 31, 0x397440u);
    ctx->pc = 0x39743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397438u;
    // 0x39743c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x397438u, 0x397440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397440u;
label_397440:
    // 0x397440: 0xc0e8b50  jal         func_3A2D40
label_397444:
    if (ctx->pc == 0x397444u) {
        ctx->pc = 0x397444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397440u;
        // 0x397444: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397448u;
        goto label_397448;
    }
    ctx->pc = 0x397440u;
    SET_GPR_U32(ctx, 31, 0x397448u);
    ctx->pc = 0x397444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397440u;
    // 0x397444: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x397440u, 0x397448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397448u;
label_397448:
    // 0x397448: 0xc0e9430  jal         func_3A50C0
label_39744c:
    if (ctx->pc == 0x39744Cu) {
        ctx->pc = 0x397450u;
        goto label_397450;
    }
    ctx->pc = 0x397448u;
    SET_GPR_U32(ctx, 31, 0x397450u);
    ctx->pc = 0x3A50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50C0u, 0x397448u, 0x397450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397450u;
label_397450:
    // 0x397450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397454:
    // 0x397454: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x397454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_397458:
    // 0x397458: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x397458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39745c:
    // 0x39745c: 0xa0f809  jalr        $a1
label_397460:
    if (ctx->pc == 0x397460u) {
        ctx->pc = 0x397460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39745Cu;
        // 0x397460: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397464u;
        goto label_397464;
    }
    ctx->pc = 0x39745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x397464u);
        ctx->pc = 0x397460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39745Cu;
        // 0x397460: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39745Cu, 0x397464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397464u;
label_397464:
    // 0x397464: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x397464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397468:
    // 0x397468: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39746c:
    // 0x39746c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_397470:
    // 0x397470: 0x3e00008  jr          $ra
label_397474:
    if (ctx->pc == 0x397474u) {
        ctx->pc = 0x397474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397470u;
        // 0x397474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397478u;
        goto label_fallthrough_0x397470;
    }
    ctx->pc = 0x397470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397470u;
        // 0x397474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x397470:
    ctx->pc = 0x397478u;
}
