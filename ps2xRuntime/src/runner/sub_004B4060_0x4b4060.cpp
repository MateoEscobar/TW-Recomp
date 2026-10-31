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

// Function: sub_004B4060
// Address: 0x4b4060 - 0x4b4098
void sub_004B4060_0x4b4060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4060_0x4b4060");
#endif

    switch (ctx->pc) {
        case 0x4b4078u: goto label_4b4078;
        default: break;
    }

    ctx->pc = 0x4b4060u;

    // 0x4b4060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b4064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b4068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b4068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b406c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b4070: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B4070u;
    SET_GPR_U32(ctx, 31, 0x4B4078u);
    ctx->pc = 0x4B4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4070u;
    // 0x4b4074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B4070u, 0x4B4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4078u;
label_4b4078:
    // 0x4b4078: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b4078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b407c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4080: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x4b4080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x4b4084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b4084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b4088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b408c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x4b408cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x4b4090: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4090u;
        // 0x4b4094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4098u;
}
