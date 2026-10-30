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

// Function: sub_004BF400
// Address: 0x4bf400 - 0x4bf498
void sub_004BF400_0x4bf400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF400_0x4bf400");
#endif

    switch (ctx->pc) {
        case 0x4bf400u: goto label_4bf400;
        case 0x4bf404u: goto label_4bf404;
        case 0x4bf408u: goto label_4bf408;
        case 0x4bf40cu: goto label_4bf40c;
        case 0x4bf410u: goto label_4bf410;
        case 0x4bf414u: goto label_4bf414;
        case 0x4bf418u: goto label_4bf418;
        case 0x4bf41cu: goto label_4bf41c;
        case 0x4bf420u: goto label_4bf420;
        case 0x4bf424u: goto label_4bf424;
        case 0x4bf428u: goto label_4bf428;
        case 0x4bf42cu: goto label_4bf42c;
        case 0x4bf430u: goto label_4bf430;
        case 0x4bf434u: goto label_4bf434;
        case 0x4bf438u: goto label_4bf438;
        case 0x4bf43cu: goto label_4bf43c;
        case 0x4bf440u: goto label_4bf440;
        case 0x4bf444u: goto label_4bf444;
        case 0x4bf448u: goto label_4bf448;
        case 0x4bf44cu: goto label_4bf44c;
        case 0x4bf450u: goto label_4bf450;
        case 0x4bf454u: goto label_4bf454;
        case 0x4bf458u: goto label_4bf458;
        case 0x4bf45cu: goto label_4bf45c;
        case 0x4bf460u: goto label_4bf460;
        case 0x4bf464u: goto label_4bf464;
        case 0x4bf468u: goto label_4bf468;
        case 0x4bf46cu: goto label_4bf46c;
        case 0x4bf470u: goto label_4bf470;
        case 0x4bf474u: goto label_4bf474;
        case 0x4bf478u: goto label_4bf478;
        case 0x4bf47cu: goto label_4bf47c;
        case 0x4bf480u: goto label_4bf480;
        case 0x4bf484u: goto label_4bf484;
        case 0x4bf488u: goto label_4bf488;
        case 0x4bf48cu: goto label_4bf48c;
        case 0x4bf490u: goto label_4bf490;
        case 0x4bf494u: goto label_4bf494;
        default: break;
    }

    ctx->pc = 0x4bf400u;

label_4bf400:
    // 0x4bf400: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4bf404:
    // 0x4bf404: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf408:
    // 0x4bf408: 0x8c4341f8  lw          $v1, 0x41F8($v0)
    ctx->pc = 0x4bf408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16888)));
label_4bf40c:
    // 0x4bf40c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4bf410:
    // 0x4bf410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf414:
    // 0x4bf414: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x4bf414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4bf418:
    // 0x4bf418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf41c:
    // 0x4bf41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf420:
    // 0x4bf420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bf420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf424:
    // 0x4bf424: 0xc11ef80  jal         func_47BE00
label_4bf428:
    if (ctx->pc == 0x4BF428u) {
        ctx->pc = 0x4BF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF424u;
        // 0x4bf428: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF42Cu;
        goto label_4bf42c;
    }
    ctx->pc = 0x4BF424u;
    SET_GPR_U32(ctx, 31, 0x4BF42Cu);
    ctx->pc = 0x4BF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF424u;
    // 0x4bf428: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4BF424u, 0x4BF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF42Cu;
label_4bf42c:
    // 0x4bf42c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf430:
    // 0x4bf430: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x4bf430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4bf434:
    // 0x4bf434: 0xc11ef80  jal         func_47BE00
label_4bf438:
    if (ctx->pc == 0x4BF438u) {
        ctx->pc = 0x4BF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF434u;
        // 0x4bf438: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF43Cu;
        goto label_4bf43c;
    }
    ctx->pc = 0x4BF434u;
    SET_GPR_U32(ctx, 31, 0x4BF43Cu);
    ctx->pc = 0x4BF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF434u;
    // 0x4bf438: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4BF434u, 0x4BF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF43Cu;
label_4bf43c:
    // 0x4bf43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf440:
    // 0x4bf440: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x4bf440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4bf444:
    // 0x4bf444: 0xc11ef80  jal         func_47BE00
label_4bf448:
    if (ctx->pc == 0x4BF448u) {
        ctx->pc = 0x4BF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF444u;
        // 0x4bf448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF44Cu;
        goto label_4bf44c;
    }
    ctx->pc = 0x4BF444u;
    SET_GPR_U32(ctx, 31, 0x4BF44Cu);
    ctx->pc = 0x4BF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF444u;
    // 0x4bf448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4BF444u, 0x4BF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF44Cu;
label_4bf44c:
    // 0x4bf44c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4bf44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4bf450:
    // 0x4bf450: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_4bf454:
    if (ctx->pc == 0x4BF454u) {
        ctx->pc = 0x4BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF450u;
        // 0x4bf454: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF458u;
        goto label_4bf458;
    }
    ctx->pc = 0x4BF450u;
    {
        const bool branch_taken_0x4bf450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF450u;
        // 0x4bf454: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf450) {
            ctx->pc = 0x4BF480u;
            goto label_4bf480;
        }
    }
    ctx->pc = 0x4BF458u;
label_4bf458:
    // 0x4bf458: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4bf458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4bf45c:
    // 0x4bf45c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4bf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4bf460:
    // 0x4bf460: 0x40f809  jalr        $v0
label_4bf464:
    if (ctx->pc == 0x4BF464u) {
        ctx->pc = 0x4BF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF460u;
        // 0x4bf464: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF468u;
        goto label_4bf468;
    }
    ctx->pc = 0x4BF460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF468u);
        ctx->pc = 0x4BF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF460u;
        // 0x4bf464: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF460u, 0x4BF468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF468u;
label_4bf468:
    // 0x4bf468: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x4bf468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4bf46c:
    // 0x4bf46c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_4bf470:
    if (ctx->pc == 0x4BF470u) {
        ctx->pc = 0x4BF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF46Cu;
        // 0x4bf470: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF474u;
        goto label_4bf474;
    }
    ctx->pc = 0x4BF46Cu;
    {
        const bool branch_taken_0x4bf46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF46Cu;
        // 0x4bf470: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf46c) {
            ctx->pc = 0x4BF480u;
            goto label_4bf480;
        }
    }
    ctx->pc = 0x4BF474u;
label_4bf474:
    // 0x4bf474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bf474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bf478:
    // 0x4bf478: 0xc11fb56  jal         func_47ED58
label_4bf47c:
    if (ctx->pc == 0x4BF47Cu) {
        ctx->pc = 0x4BF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF478u;
        // 0x4bf47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF480u;
        goto label_4bf480;
    }
    ctx->pc = 0x4BF478u;
    SET_GPR_U32(ctx, 31, 0x4BF480u);
    ctx->pc = 0x4BF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF478u;
    // 0x4bf47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4BF478u, 0x4BF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF480u;
label_4bf480:
    // 0x4bf480: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf484:
    // 0x4bf484: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf488:
    // 0x4bf488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf48c:
    // 0x4bf48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf490:
    // 0x4bf490: 0x3e00008  jr          $ra
label_4bf494:
    if (ctx->pc == 0x4BF494u) {
        ctx->pc = 0x4BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF490u;
        // 0x4bf494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF498u;
        goto label_fallthrough_0x4bf490;
    }
    ctx->pc = 0x4BF490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF490u;
        // 0x4bf494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4bf490:
    ctx->pc = 0x4BF498u;
}
