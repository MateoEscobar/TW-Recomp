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

// Function: sub_0043B0A0
// Address: 0x43b0a0 - 0x43b0d8
void sub_0043B0A0_0x43b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B0A0_0x43b0a0");
#endif

    switch (ctx->pc) {
        case 0x43b0b8u: goto label_43b0b8;
        default: break;
    }

    ctx->pc = 0x43b0a0u;

    // 0x43b0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43b0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x43b0a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43b0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b0b0: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B0B0u;
    SET_GPR_U32(ctx, 31, 0x43B0B8u);
    ctx->pc = 0x43B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B0B0u;
    // 0x43b0b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B0B0u, 0x43B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B0B8u;
label_43b0b8:
    // 0x43b0b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43b0b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b0bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b0c0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x43b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x43b0c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43b0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b0cc: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x43b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x43b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x43B0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B0D0u;
        // 0x43b0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B0D8u;
}
