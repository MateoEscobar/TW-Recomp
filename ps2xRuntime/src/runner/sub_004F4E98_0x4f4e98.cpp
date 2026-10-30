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

// Function: sub_004F4E98
// Address: 0x4f4e98 - 0x4f4ed8
void sub_004F4E98_0x4f4e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4E98_0x4f4e98");
#endif

    switch (ctx->pc) {
        case 0x4f4ea8u: goto label_4f4ea8;
        default: break;
    }

    ctx->pc = 0x4f4e98u;

    // 0x4f4e98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4f4e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4e9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f4e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4ea0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4F4EA0u;
    {
        const bool branch_taken_0x4f4ea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4EA0u;
        // 0x4f4ea4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4ea0) {
            ctx->pc = 0x4F4ECCu;
            goto label_4f4ecc;
        }
    }
    ctx->pc = 0x4F4EA8u;
label_4f4ea8:
    // 0x4f4ea8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4f4ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4eac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4f4eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4eb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f4eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f4eb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f4eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4f4eb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4f4ebc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f4ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f4ec0: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x4f4ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f4ec4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F4EC4u;
    {
        const bool branch_taken_0x4f4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4EC4u;
        // 0x4f4ec8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4ec4) {
            ctx->pc = 0x4F4EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f4ea8;
        }
    }
    ctx->pc = 0x4F4ECCu;
label_4f4ecc:
    // 0x4f4ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4ECCu;
        // 0x4f4ed0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4ED4u;
    // 0x4f4ed4: 0x0  nop
    ctx->pc = 0x4f4ed4u;
    // NOP
    ctx->pc = 0x4f4ed8u;
}
