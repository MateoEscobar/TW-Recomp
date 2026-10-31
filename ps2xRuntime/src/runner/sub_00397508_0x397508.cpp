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

// Function: sub_00397508
// Address: 0x397508 - 0x397598
void sub_00397508_0x397508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397508_0x397508");
#endif

    switch (ctx->pc) {
        case 0x397508u: goto label_397508;
        case 0x39750cu: goto label_39750c;
        case 0x397510u: goto label_397510;
        case 0x397514u: goto label_397514;
        case 0x397518u: goto label_397518;
        case 0x39751cu: goto label_39751c;
        case 0x397520u: goto label_397520;
        case 0x397524u: goto label_397524;
        case 0x397528u: goto label_397528;
        case 0x39752cu: goto label_39752c;
        case 0x397530u: goto label_397530;
        case 0x397534u: goto label_397534;
        case 0x397538u: goto label_397538;
        case 0x39753cu: goto label_39753c;
        case 0x397540u: goto label_397540;
        case 0x397544u: goto label_397544;
        case 0x397548u: goto label_397548;
        case 0x39754cu: goto label_39754c;
        case 0x397550u: goto label_397550;
        case 0x397554u: goto label_397554;
        case 0x397558u: goto label_397558;
        case 0x39755cu: goto label_39755c;
        case 0x397560u: goto label_397560;
        case 0x397564u: goto label_397564;
        case 0x397568u: goto label_397568;
        case 0x39756cu: goto label_39756c;
        case 0x397570u: goto label_397570;
        case 0x397574u: goto label_397574;
        case 0x397578u: goto label_397578;
        case 0x39757cu: goto label_39757c;
        case 0x397580u: goto label_397580;
        case 0x397584u: goto label_397584;
        case 0x397588u: goto label_397588;
        case 0x39758cu: goto label_39758c;
        case 0x397590u: goto label_397590;
        case 0x397594u: goto label_397594;
        default: break;
    }

    ctx->pc = 0x397508u;

label_397508:
    // 0x397508: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x397508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_39750c:
    // 0x39750c: 0xafa40410  sw          $a0, 0x410($sp)
    ctx->pc = 0x39750cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 4));
label_397510:
    // 0x397510: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x397510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_397514:
    // 0x397514: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x397514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_397518:
    // 0x397518: 0xc0e4060  jal         func_390180
label_39751c:
    if (ctx->pc == 0x39751Cu) {
        ctx->pc = 0x39751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397518u;
        // 0x39751c: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397520u;
        goto label_397520;
    }
    ctx->pc = 0x397518u;
    SET_GPR_U32(ctx, 31, 0x397520u);
    ctx->pc = 0x39751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397518u;
    // 0x39751c: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397518u, 0x397520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397520u;
label_397520:
    // 0x397520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x397520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397524:
    // 0x397524: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_397528:
    if (ctx->pc == 0x397528u) {
        ctx->pc = 0x397528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397524u;
        // 0x397528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39752Cu;
        goto label_39752c;
    }
    ctx->pc = 0x397524u;
    {
        const bool branch_taken_0x397524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x397528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397524u;
        // 0x397528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397524) {
            ctx->pc = 0x397584u;
            goto label_397584;
        }
    }
    ctx->pc = 0x39752Cu;
label_39752c:
    // 0x39752c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x39752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_397530:
    // 0x397530: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x397530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_397534:
    // 0x397534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x397534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_397538:
    // 0x397538: 0x0  nop
    ctx->pc = 0x397538u;
    // NOP
label_39753c:
    // 0x39753c: 0x0  nop
    ctx->pc = 0x39753cu;
    // NOP
label_397540:
    // 0x397540: 0x0  nop
    ctx->pc = 0x397540u;
    // NOP
label_397544:
    // 0x397544: 0x0  nop
    ctx->pc = 0x397544u;
    // NOP
label_397548:
    // 0x397548: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_39754c:
    if (ctx->pc == 0x39754Cu) {
        ctx->pc = 0x39754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397548u;
        // 0x39754c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397550u;
        goto label_397550;
    }
    ctx->pc = 0x397548u;
    {
        const bool branch_taken_0x397548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x397548) {
            ctx->pc = 0x39754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397548u;
            // 0x39754c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397538;
        }
    }
    ctx->pc = 0x397550u;
label_397550:
    // 0x397550: 0xc138ddc  jal         func_4E3770
label_397554:
    if (ctx->pc == 0x397554u) {
        ctx->pc = 0x397558u;
        goto label_397558;
    }
    ctx->pc = 0x397550u;
    SET_GPR_U32(ctx, 31, 0x397558u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x397550u, 0x397558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397558u;
label_397558:
    // 0x397558: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39755c:
    // 0x39755c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x39755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_397560:
    // 0x397560: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x397560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_397564:
    // 0x397564: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x397564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_397568:
    // 0x397568: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x397568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_39756c:
    // 0x39756c: 0x60f809  jalr        $v1
label_397570:
    if (ctx->pc == 0x397570u) {
        ctx->pc = 0x397570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39756Cu;
        // 0x397570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397574u;
        goto label_397574;
    }
    ctx->pc = 0x39756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397574u);
        ctx->pc = 0x397570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39756Cu;
        // 0x397570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39756Cu, 0x397574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397574u;
label_397574:
    // 0x397574: 0xc0ea146  jal         func_3A8518
label_397578:
    if (ctx->pc == 0x397578u) {
        ctx->pc = 0x397578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397574u;
        // 0x397578: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39757Cu;
        goto label_39757c;
    }
    ctx->pc = 0x397574u;
    SET_GPR_U32(ctx, 31, 0x39757Cu);
    ctx->pc = 0x397578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397574u;
    // 0x397578: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x397574u, 0x39757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39757Cu;
label_39757c:
    // 0x39757c: 0x10000002  b           . + 4 + (0x2 << 2)
label_397580:
    if (ctx->pc == 0x397580u) {
        ctx->pc = 0x397580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39757Cu;
        // 0x397580: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x397584u;
        goto label_397584;
    }
    ctx->pc = 0x39757Cu;
    {
        const bool branch_taken_0x39757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39757Cu;
        // 0x397580: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39757c) {
            ctx->pc = 0x397588u;
            goto label_397588;
        }
    }
    ctx->pc = 0x397584u;
label_397584:
    // 0x397584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x397584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397588:
    // 0x397588: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x397588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_39758c:
    // 0x39758c: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x39758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_397590:
    // 0x397590: 0x3e00008  jr          $ra
label_397594:
    if (ctx->pc == 0x397594u) {
        ctx->pc = 0x397594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397590u;
        // 0x397594: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397598u;
        goto label_fallthrough_0x397590;
    }
    ctx->pc = 0x397590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397590u;
        // 0x397594: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x397590:
    ctx->pc = 0x397598u;
}
