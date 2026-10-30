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

// Function: sub_0015DB68
// Address: 0x15db68 - 0x15db98
void sub_0015DB68_0x15db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DB68_0x15db68");
#endif

    switch (ctx->pc) {
        case 0x15db8cu: goto label_15db8c;
        default: break;
    }

    ctx->pc = 0x15db68u;

    // 0x15db68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15db6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15db70: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DB70u;
    {
        const bool branch_taken_0x15db70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB70u;
        // 0x15db74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db70) {
            ctx->pc = 0x15DB8Cu;
            goto label_15db8c;
        }
    }
    ctx->pc = 0x15DB78u;
    // 0x15db78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15DB78u;
    {
        const bool branch_taken_0x15db78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB78u;
        // 0x15db7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db78) {
            ctx->pc = 0x15DB90u;
            goto label_15db90;
        }
    }
    ctx->pc = 0x15DB80u;
    // 0x15db80: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15db84: 0xc05753e  jal         func_15D4F8
    ctx->pc = 0x15DB84u;
    SET_GPR_U32(ctx, 31, 0x15DB8Cu);
    ctx->pc = 0x15DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB84u;
    // 0x15db88: 0x24845e30  addiu       $a0, $a0, 0x5E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D4F8u, 0x15DB84u, 0x15DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15db8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15db90:
    // 0x15db90: 0x3e00008  jr          $ra
    ctx->pc = 0x15DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB90u;
        // 0x15db94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DB98u;
}
