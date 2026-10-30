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

// Function: sub_00484538
// Address: 0x484538 - 0x484590
void sub_00484538_0x484538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484538_0x484538");
#endif

    switch (ctx->pc) {
        case 0x484568u: goto label_484568;
        case 0x484570u: goto label_484570;
        default: break;
    }

    ctx->pc = 0x484538u;

label_484538:
    // 0x484538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x484538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48453c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x484540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x484544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48454c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48454cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484550: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x484550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x484554: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x484554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x484558: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x484558u;
    {
        const bool branch_taken_0x484558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x484558) {
            ctx->pc = 0x48455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484558u;
            // 0x48455c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484580u;
            goto label_484580;
        }
    }
    ctx->pc = 0x484560u;
    // 0x484560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484564: 0x0  nop
    ctx->pc = 0x484564u;
    // NOP
label_484568:
    // 0x484568: 0xc12114e  jal         func_484538
    ctx->pc = 0x484568u;
    SET_GPR_U32(ctx, 31, 0x484570u);
    ctx->pc = 0x48456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484568u;
    // 0x48456c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    goto label_484538;
    ctx->pc = 0x484570u;
label_484570:
    // 0x484570: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x484570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x484574: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x484574u;
    {
        const bool branch_taken_0x484574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x484578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484574u;
        // 0x484578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484574) {
            ctx->pc = 0x484568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484568;
        }
    }
    ctx->pc = 0x48457Cu;
    // 0x48457c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48457cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484580:
    // 0x484580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484588: 0x3e00008  jr          $ra
    ctx->pc = 0x484588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484588u;
        // 0x48458c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484590u;
}
