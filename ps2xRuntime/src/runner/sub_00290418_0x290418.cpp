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

// Function: sub_00290418
// Address: 0x290418 - 0x2904a0
void sub_00290418_0x290418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290418_0x290418");
#endif

    switch (ctx->pc) {
        case 0x290440u: goto label_290440;
        case 0x29045cu: goto label_29045c;
        case 0x290474u: goto label_290474;
        default: break;
    }

    ctx->pc = 0x290418u;

    // 0x290418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29041c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x29041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x290420: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x290420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x290424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29042c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x290430: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x290430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x290434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290438: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290438u;
    SET_GPR_U32(ctx, 31, 0x290440u);
    ctx->pc = 0x29043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290438u;
    // 0x29043c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290438u, 0x290440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290440u;
label_290440:
    // 0x290440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x290440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290448: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290448u;
    {
        const bool branch_taken_0x290448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x290448) {
            ctx->pc = 0x29044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290448u;
            // 0x29044c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290480u;
            goto label_290480;
        }
    }
    ctx->pc = 0x290450u;
    // 0x290450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290454: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290454u;
    SET_GPR_U32(ctx, 31, 0x29045Cu);
    ctx->pc = 0x290458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290454u;
    // 0x290458: 0x24050081  addiu       $a1, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290454u, 0x29045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29045Cu;
label_29045c:
    // 0x29045c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290460: 0x56320007  bnel        $s1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x290460) {
            ctx->pc = 0x290464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290460u;
            // 0x290464: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290480u;
            goto label_290480;
        }
    }
    ctx->pc = 0x290468u;
    // 0x290468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29046c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29046Cu;
    SET_GPR_U32(ctx, 31, 0x290474u);
    ctx->pc = 0x290470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29046Cu;
    // 0x290470: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29046Cu, 0x290474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290474u;
label_290474:
    // 0x290474: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290474u;
    {
        const bool branch_taken_0x290474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x290478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290474u;
        // 0x290478: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290474) {
            ctx->pc = 0x290484u;
            goto label_290484;
        }
    }
    ctx->pc = 0x29047Cu;
    // 0x29047c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29047cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290480:
    // 0x290480: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x290480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290484:
    // 0x290484: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x290484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290488: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x290488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29048c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29048cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290490: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x290490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290498: 0x3e00008  jr          $ra
    ctx->pc = 0x290498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290498u;
        // 0x29049c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2904A0u;
}
