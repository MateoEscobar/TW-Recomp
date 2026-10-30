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

// Function: sub_004AE918
// Address: 0x4ae918 - 0x4ae938
void sub_004AE918_0x4ae918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE918_0x4ae918");
#endif

    switch (ctx->pc) {
        case 0x4ae92cu: goto label_4ae92c;
        default: break;
    }

    ctx->pc = 0x4ae918u;

    // 0x4ae918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae91c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4ae91cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4ae920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae924: 0xc12bbee  jal         func_4AEFB8
    ctx->pc = 0x4AE924u;
    SET_GPR_U32(ctx, 31, 0x4AE92Cu);
    ctx->pc = 0x4AE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE924u;
    // 0x4ae928: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEFB8u, 0x4AE924u, 0x4AE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE92Cu;
label_4ae92c:
    // 0x4ae92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae930: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE930u;
        // 0x4ae934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE938u;
}
