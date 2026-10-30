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

// Function: sub_00422930
// Address: 0x422930 - 0x422970
void sub_00422930_0x422930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422930_0x422930");
#endif

    switch (ctx->pc) {
        case 0x422948u: goto label_422948;
        case 0x422950u: goto label_422950;
        default: break;
    }

    ctx->pc = 0x422930u;

    // 0x422930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x422930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x422934: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x422934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x422938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x422938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422944: 0x26110180  addiu       $s1, $s0, 0x180
    ctx->pc = 0x422944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_422948:
    // 0x422948: 0xc10829c  jal         func_420A70
    ctx->pc = 0x422948u;
    SET_GPR_U32(ctx, 31, 0x422950u);
    ctx->pc = 0x42294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422948u;
    // 0x42294c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A70u, 0x422948u, 0x422950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422950u;
label_422950:
    // 0x422950: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x422950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x422954: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x422954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x422958: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x422958u;
    {
        const bool branch_taken_0x422958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422958u;
        // 0x42295c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422958) {
            ctx->pc = 0x422948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422948;
        }
    }
    ctx->pc = 0x422960u;
    // 0x422960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x422960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422968: 0x3e00008  jr          $ra
    ctx->pc = 0x422968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422968u;
        // 0x42296c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422970u;
}
