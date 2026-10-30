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

// Function: sub_00158258
// Address: 0x158258 - 0x158288
void sub_00158258_0x158258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158258_0x158258");
#endif

    switch (ctx->pc) {
        case 0x15827cu: goto label_15827c;
        default: break;
    }

    ctx->pc = 0x158258u;

    // 0x158258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15825c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158260: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158260u;
    {
        const bool branch_taken_0x158260 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x158264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158260u;
        // 0x158264: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158260) {
            ctx->pc = 0x15827Cu;
            goto label_15827c;
        }
    }
    ctx->pc = 0x158268u;
    // 0x158268: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158268u;
    {
        const bool branch_taken_0x158268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158268u;
        // 0x15826c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158268) {
            ctx->pc = 0x158280u;
            goto label_158280;
        }
    }
    ctx->pc = 0x158270u;
    // 0x158270: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x158274: 0xc055f92  jal         func_157E48
    ctx->pc = 0x158274u;
    SET_GPR_U32(ctx, 31, 0x15827Cu);
    ctx->pc = 0x158278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158274u;
    // 0x158278: 0x24845670  addiu       $a0, $a0, 0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E48u, 0x158274u, 0x15827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15827Cu;
label_15827c:
    // 0x15827c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158280:
    // 0x158280: 0x3e00008  jr          $ra
    ctx->pc = 0x158280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158280u;
        // 0x158284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158288u;
}
