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

// Function: sub_004AE8B8
// Address: 0x4ae8b8 - 0x4ae8d8
void sub_004AE8B8_0x4ae8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE8B8_0x4ae8b8");
#endif

    switch (ctx->pc) {
        case 0x4ae8ccu: goto label_4ae8cc;
        default: break;
    }

    ctx->pc = 0x4ae8b8u;

    // 0x4ae8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae8bc: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4ae8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4ae8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae8c4: 0xc12bbee  jal         func_4AEFB8
    ctx->pc = 0x4AE8C4u;
    SET_GPR_U32(ctx, 31, 0x4AE8CCu);
    ctx->pc = 0x4AE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE8C4u;
    // 0x4ae8c8: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEFB8u, 0x4AE8C4u, 0x4AE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE8CCu;
label_4ae8cc:
    // 0x4ae8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE8D0u;
        // 0x4ae8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE8D8u;
}
