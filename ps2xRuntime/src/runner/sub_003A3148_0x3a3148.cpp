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

// Function: sub_003A3148
// Address: 0x3a3148 - 0x3a31a8
void sub_003A3148_0x3a3148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3148_0x3a3148");
#endif

    switch (ctx->pc) {
        case 0x3a3188u: goto label_3a3188;
        case 0x3a3198u: goto label_3a3198;
        default: break;
    }

    ctx->pc = 0x3a3148u;

    // 0x3a3148: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3a3148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3a314c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a314cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3150: 0x8c435348  lw          $v1, 0x5348($v0)
    ctx->pc = 0x3a3150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5348u));
    // 0x3a3154: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A3154u;
    {
        const bool branch_taken_0x3a3154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3154u;
        // 0x3a3158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3154) {
            ctx->pc = 0x3A3198u;
            goto label_3a3198;
        }
    }
    ctx->pc = 0x3A315Cu;
    // 0x3a315c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3160: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3160u;
    {
        const bool branch_taken_0x3a3160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3160u;
        // 0x3a3164: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3160) {
            ctx->pc = 0x3A3180u;
            goto label_3a3180;
        }
    }
    ctx->pc = 0x3A3168u;
    // 0x3a3168: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3168u;
    {
        const bool branch_taken_0x3a3168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3168u;
        // 0x3a316c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3168) {
            ctx->pc = 0x3A319Cu;
            goto label_3a319c;
        }
    }
    ctx->pc = 0x3A3170u;
    // 0x3a3170: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3170u;
    {
        const bool branch_taken_0x3a3170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3170) {
            ctx->pc = 0x3A3190u;
            goto label_3a3190;
        }
    }
    ctx->pc = 0x3A3178u;
    // 0x3a3178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3178u;
    {
        const bool branch_taken_0x3a3178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3178) {
            ctx->pc = 0x3A319Cu;
            goto label_3a319c;
        }
    }
    ctx->pc = 0x3A3180u;
label_3a3180:
    // 0x3a3180: 0xc0e8c00  jal         func_3A3000
    ctx->pc = 0x3A3180u;
    SET_GPR_U32(ctx, 31, 0x3A3188u);
    ctx->pc = 0x3A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3000u, 0x3A3180u, 0x3A3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3188u;
label_3a3188:
    // 0x3a3188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3188u;
    {
        const bool branch_taken_0x3a3188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3188u;
        // 0x3a318c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3188) {
            ctx->pc = 0x3A319Cu;
            goto label_3a319c;
        }
    }
    ctx->pc = 0x3A3190u;
label_3a3190:
    // 0x3a3190: 0xc0e8ba8  jal         func_3A2EA0
    ctx->pc = 0x3A3190u;
    SET_GPR_U32(ctx, 31, 0x3A3198u);
    ctx->pc = 0x3A2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2EA0u, 0x3A3190u, 0x3A3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3198u;
label_3a3198:
    // 0x3a3198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a319c:
    // 0x3a319c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A319Cu;
        // 0x3a31a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A31A4u;
    // 0x3a31a4: 0x0  nop
    ctx->pc = 0x3a31a4u;
    // NOP
    ctx->pc = 0x3a31a8u;
}
