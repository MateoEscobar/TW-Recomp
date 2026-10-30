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

// Function: sub_0014C8B8
// Address: 0x14c8b8 - 0x14c8f8
void sub_0014C8B8_0x14c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C8B8_0x14c8b8");
#endif

    switch (ctx->pc) {
        case 0x14c8e8u: goto label_14c8e8;
        default: break;
    }

    ctx->pc = 0x14c8b8u;

    // 0x14c8b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c8c0: 0x2482fffb  addiu       $v0, $a0, -0x5
    ctx->pc = 0x14c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x14c8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c8c8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x14c8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x14c8cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C8CCu;
    {
        const bool branch_taken_0x14c8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8CCu;
        // 0x14c8d0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8cc) {
            ctx->pc = 0x14C8E8u;
            goto label_14c8e8;
        }
    }
    ctx->pc = 0x14C8D4u;
    // 0x14c8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8d8: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C8D8u;
    {
        const bool branch_taken_0x14c8d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8D8u;
        // 0x14c8dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8d8) {
            ctx->pc = 0x14C8ECu;
            goto label_14c8ec;
        }
    }
    ctx->pc = 0x14C8E0u;
    // 0x14c8e0: 0xc054664  jal         func_151990
    ctx->pc = 0x14C8E0u;
    SET_GPR_U32(ctx, 31, 0x14C8E8u);
    ctx->pc = 0x14C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8E0u;
    // 0x14c8e4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151990u, 0x14C8E0u, 0x14C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8E8u;
label_14c8e8:
    // 0x14c8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c8ec:
    // 0x14c8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8ECu;
        // 0x14c8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C8F4u;
    // 0x14c8f4: 0x0  nop
    ctx->pc = 0x14c8f4u;
    // NOP
    ctx->pc = 0x14c8f8u;
}
