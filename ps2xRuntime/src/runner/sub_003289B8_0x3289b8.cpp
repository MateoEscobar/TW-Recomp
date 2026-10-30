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

// Function: sub_003289B8
// Address: 0x3289b8 - 0x3289f8
void sub_003289B8_0x3289b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003289B8_0x3289b8");
#endif

    switch (ctx->pc) {
        case 0x3289e8u: goto label_3289e8;
        default: break;
    }

    ctx->pc = 0x3289b8u;

    // 0x3289b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3289b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3289bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3289bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3289c0: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x3289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x3289c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3289C4u;
    {
        const bool branch_taken_0x3289c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289C4u;
        // 0x3289c8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289c4) {
            ctx->pc = 0x3289E8u;
            goto label_3289e8;
        }
    }
    ctx->pc = 0x3289CCu;
    // 0x3289cc: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x3289ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x3289d0: 0x24425380  addiu       $v0, $v0, 0x5380
    ctx->pc = 0x3289d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
    // 0x3289d4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3289d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3289d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3289d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3289dc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3289dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3289e0: 0xc0ca24e  jal         func_328938
    ctx->pc = 0x3289E0u;
    SET_GPR_U32(ctx, 31, 0x3289E8u);
    ctx->pc = 0x3289E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289E0u;
    // 0x3289e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328938u, 0x3289E0u, 0x3289E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289E8u;
label_3289e8:
    // 0x3289e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3289e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3289ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3289ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3289F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289ECu;
        // 0x3289f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3289ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3289F4u;
    // 0x3289f4: 0x0  nop
    ctx->pc = 0x3289f4u;
    // NOP
    ctx->pc = 0x3289f8u;
}
