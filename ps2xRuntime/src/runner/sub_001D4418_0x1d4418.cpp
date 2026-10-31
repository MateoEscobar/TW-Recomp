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

// Function: sub_001D4418
// Address: 0x1d4418 - 0x1d44b8
void sub_001D4418_0x1d4418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4418_0x1d4418");
#endif

    switch (ctx->pc) {
        case 0x1d4418u: goto label_1d4418;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4420u: goto label_1d4420;
        case 0x1d4424u: goto label_1d4424;
        case 0x1d4428u: goto label_1d4428;
        case 0x1d442cu: goto label_1d442c;
        case 0x1d4430u: goto label_1d4430;
        case 0x1d4434u: goto label_1d4434;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d443cu: goto label_1d443c;
        case 0x1d4440u: goto label_1d4440;
        case 0x1d4444u: goto label_1d4444;
        case 0x1d4448u: goto label_1d4448;
        case 0x1d444cu: goto label_1d444c;
        case 0x1d4450u: goto label_1d4450;
        case 0x1d4454u: goto label_1d4454;
        case 0x1d4458u: goto label_1d4458;
        case 0x1d445cu: goto label_1d445c;
        case 0x1d4460u: goto label_1d4460;
        case 0x1d4464u: goto label_1d4464;
        case 0x1d4468u: goto label_1d4468;
        case 0x1d446cu: goto label_1d446c;
        case 0x1d4470u: goto label_1d4470;
        case 0x1d4474u: goto label_1d4474;
        case 0x1d4478u: goto label_1d4478;
        case 0x1d447cu: goto label_1d447c;
        case 0x1d4480u: goto label_1d4480;
        case 0x1d4484u: goto label_1d4484;
        case 0x1d4488u: goto label_1d4488;
        case 0x1d448cu: goto label_1d448c;
        case 0x1d4490u: goto label_1d4490;
        case 0x1d4494u: goto label_1d4494;
        case 0x1d4498u: goto label_1d4498;
        case 0x1d449cu: goto label_1d449c;
        case 0x1d44a0u: goto label_1d44a0;
        case 0x1d44a4u: goto label_1d44a4;
        case 0x1d44a8u: goto label_1d44a8;
        case 0x1d44acu: goto label_1d44ac;
        case 0x1d44b0u: goto label_1d44b0;
        case 0x1d44b4u: goto label_1d44b4;
        default: break;
    }

    ctx->pc = 0x1d4418u;

label_1d4418:
    // 0x1d4418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d441c:
    // 0x1d441c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d4420:
    // 0x1d4420: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d4420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d4424:
    // 0x1d4424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4428:
    // 0x1d4428: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d4428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d442c:
    // 0x1d442c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4430:
    // 0x1d4430: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d4430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d4434:
    // 0x1d4434: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1d4438:
    if (ctx->pc == 0x1D4438u) {
        ctx->pc = 0x1D4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4434u;
        // 0x1d4438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D443Cu;
        goto label_1d443c;
    }
    ctx->pc = 0x1D4434u;
    {
        const bool branch_taken_0x1d4434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4434u;
        // 0x1d4438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4434) {
            ctx->pc = 0x1D449Cu;
            goto label_1d449c;
        }
    }
    ctx->pc = 0x1D443Cu;
label_1d443c:
    // 0x1d443c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4440:
    // 0x1d4440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d4444:
    if (ctx->pc == 0x1D4444u) {
        ctx->pc = 0x1D4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4440u;
        // 0x1d4444: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4448u;
        goto label_1d4448;
    }
    ctx->pc = 0x1D4440u;
    {
        const bool branch_taken_0x1d4440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4440u;
        // 0x1d4444: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4440) {
            ctx->pc = 0x1D4450u;
            goto label_1d4450;
        }
    }
    ctx->pc = 0x1D4448u;
label_1d4448:
    // 0x1d4448: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d444c:
    if (ctx->pc == 0x1D444Cu) {
        ctx->pc = 0x1D444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4448u;
        // 0x1d444c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4450u;
        goto label_1d4450;
    }
    ctx->pc = 0x1D4448u;
    {
        const bool branch_taken_0x1d4448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4448u;
        // 0x1d444c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4448) {
            ctx->pc = 0x1D449Cu;
            goto label_1d449c;
        }
    }
    ctx->pc = 0x1D4450u;
label_1d4450:
    // 0x1d4450: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d4454:
    // 0x1d4454: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d4458:
    // 0x1d4458: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
label_1d445c:
    if (ctx->pc == 0x1D445Cu) {
        ctx->pc = 0x1D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4458u;
        // 0x1d445c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4460u;
        goto label_1d4460;
    }
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4458u;
        // 0x1d445c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D4490u;
            goto label_1d4490;
        }
    }
    ctx->pc = 0x1D4460u;
label_1d4460:
    // 0x1d4460: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4464:
    // 0x1d4464: 0x0  nop
    ctx->pc = 0x1d4464u;
    // NOP
label_1d4468:
    // 0x1d4468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d446c:
    // 0x1d446c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d446cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d4470:
    // 0x1d4470: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d4474:
    // 0x1d4474: 0x40f809  jalr        $v0
label_1d4478:
    if (ctx->pc == 0x1D4478u) {
        ctx->pc = 0x1D4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4474u;
        // 0x1d4478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D447Cu;
        goto label_1d447c;
    }
    ctx->pc = 0x1D4474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D447Cu);
        ctx->pc = 0x1D4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4474u;
        // 0x1d4478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4474u, 0x1D447Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D447Cu;
label_1d447c:
    // 0x1d447c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_1d4480:
    if (ctx->pc == 0x1D4480u) {
        ctx->pc = 0x1D4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D447Cu;
        // 0x1d4480: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4484u;
        goto label_1d4484;
    }
    ctx->pc = 0x1D447Cu;
    {
        const bool branch_taken_0x1d447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D447Cu;
        // 0x1d4480: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d447c) {
            ctx->pc = 0x1D4448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4448;
        }
    }
    ctx->pc = 0x1D4484u;
label_1d4484:
    // 0x1d4484: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d4488:
    // 0x1d4488: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
label_1d448c:
    if (ctx->pc == 0x1D448Cu) {
        ctx->pc = 0x1D448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4488u;
        // 0x1d448c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4490u;
        goto label_1d4490;
    }
    ctx->pc = 0x1D4488u;
    {
        const bool branch_taken_0x1d4488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4488) {
            ctx->pc = 0x1D448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4488u;
            // 0x1d448c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D4490u;
label_1d4490:
    // 0x1d4490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4494:
    // 0x1d4494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4498:
    // 0x1d4498: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1d4498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1d449c:
    // 0x1d449c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d449cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d44a0:
    // 0x1d44a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d44a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d44a4:
    // 0x1d44a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d44a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d44a8:
    // 0x1d44a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d44a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d44ac:
    // 0x1d44ac: 0x3e00008  jr          $ra
label_1d44b0:
    if (ctx->pc == 0x1D44B0u) {
        ctx->pc = 0x1D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44ACu;
        // 0x1d44b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44B4u;
        goto label_1d44b4;
    }
    ctx->pc = 0x1D44ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44ACu;
        // 0x1d44b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D44ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D44B4u;
label_1d44b4:
    // 0x1d44b4: 0x0  nop
    ctx->pc = 0x1d44b4u;
    // NOP
    ctx->pc = 0x1d44b8u;
}
