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

// Function: sub_001E5438
// Address: 0x1e5438 - 0x1e5478
void sub_001E5438_0x1e5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5438_0x1e5438");
#endif

    switch (ctx->pc) {
        case 0x1e545cu: goto label_1e545c;
        case 0x1e5468u: goto label_1e5468;
        default: break;
    }

    ctx->pc = 0x1e5438u;

    // 0x1e5438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e543c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e5440: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5440u;
    {
        const bool branch_taken_0x1e5440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5440u;
        // 0x1e5444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5440) {
            ctx->pc = 0x1E5468u;
            goto label_1e5468;
        }
    }
    ctx->pc = 0x1E5448u;
    // 0x1e5448: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5448u;
    {
        const bool branch_taken_0x1e5448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5448u;
        // 0x1e544c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5448) {
            ctx->pc = 0x1E546Cu;
            goto label_1e546c;
        }
    }
    ctx->pc = 0x1E5450u;
    // 0x1e5450: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1e5450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1e5454: 0xc078fe6  jal         func_1E3F98
    ctx->pc = 0x1E5454u;
    SET_GPR_U32(ctx, 31, 0x1E545Cu);
    ctx->pc = 0x1E5458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5454u;
    // 0x1e5458: 0x24845e80  addiu       $a0, $a0, 0x5E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3F98u, 0x1E5454u, 0x1E545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E545Cu;
label_1e545c:
    // 0x1e545c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1e545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1e5460: 0xc078daa  jal         func_1E36A8
    ctx->pc = 0x1E5460u;
    SET_GPR_U32(ctx, 31, 0x1E5468u);
    ctx->pc = 0x1E5464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5460u;
    // 0x1e5464: 0x24847be0  addiu       $a0, $a0, 0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E36A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E36A8u, 0x1E5460u, 0x1E5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5468u;
label_1e5468:
    // 0x1e5468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e546c:
    // 0x1e546c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E546Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E546Cu;
        // 0x1e5470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E546Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5474u;
    // 0x1e5474: 0x0  nop
    ctx->pc = 0x1e5474u;
    // NOP
    ctx->pc = 0x1e5478u;
}
