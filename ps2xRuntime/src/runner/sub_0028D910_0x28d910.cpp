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

// Function: sub_0028D910
// Address: 0x28d910 - 0x28d960
void sub_0028D910_0x28d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D910_0x28d910");
#endif

    switch (ctx->pc) {
        case 0x28d930u: goto label_28d930;
        case 0x28d938u: goto label_28d938;
        default: break;
    }

    ctx->pc = 0x28d910u;

    // 0x28d910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28d914: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28d918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d920: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d924: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D924u;
    {
        const bool branch_taken_0x28d924 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D924u;
        // 0x28d928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d924) {
            ctx->pc = 0x28D948u;
            goto label_28d948;
        }
    }
    ctx->pc = 0x28D92Cu;
    // 0x28d92c: 0x0  nop
    ctx->pc = 0x28d92cu;
    // NOP
label_28d930:
    // 0x28d930: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x28D930u;
    SET_GPR_U32(ctx, 31, 0x28D938u);
    ctx->pc = 0x28D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D930u;
    // 0x28d934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28D930u, 0x28D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D938u;
label_28d938:
    // 0x28d938: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28d938u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d93c: 0x0  nop
    ctx->pc = 0x28d93cu;
    // NOP
    // 0x28d940: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D940u;
    {
        const bool branch_taken_0x28d940 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D940u;
        // 0x28d944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d940) {
            ctx->pc = 0x28D930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d930;
        }
    }
    ctx->pc = 0x28D948u;
label_28d948:
    // 0x28d948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d94c: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x28d94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d954: 0x3e00008  jr          $ra
    ctx->pc = 0x28D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D954u;
        // 0x28d958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D95Cu;
    // 0x28d95c: 0x0  nop
    ctx->pc = 0x28d95cu;
    // NOP
    ctx->pc = 0x28d960u;
}
