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

// Function: sub_004B0848
// Address: 0x4b0848 - 0x4b0888
void sub_004B0848_0x4b0848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0848_0x4b0848");
#endif

    switch (ctx->pc) {
        case 0x4b0874u: goto label_4b0874;
        default: break;
    }

    ctx->pc = 0x4b0848u;

    // 0x4b0848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b084c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b084cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b0850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0854: 0x8c6271e0  lw          $v0, 0x71E0($v1)
    ctx->pc = 0x4b0854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5971E0u));
    // 0x4b0858: 0x247071e0  addiu       $s0, $v1, 0x71E0
    ctx->pc = 0x4b0858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29152));
    // 0x4b085c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B085Cu;
    {
        const bool branch_taken_0x4b085c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B085Cu;
        // 0x4b0860: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b085c) {
            ctx->pc = 0x4B0874u;
            goto label_4b0874;
        }
    }
    ctx->pc = 0x4B0864u;
    // 0x4b0864: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b0864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b0868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b086c: 0xc10bc00  jal         func_42F000
    ctx->pc = 0x4B086Cu;
    SET_GPR_U32(ctx, 31, 0x4B0874u);
    ctx->pc = 0x4B0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B086Cu;
    // 0x4b0870: 0x24a506b0  addiu       $a1, $a1, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F000u, 0x4B086Cu, 0x4B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0874u;
label_4b0874:
    // 0x4b0874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0880: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0880u;
        // 0x4b0884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0888u;
}
