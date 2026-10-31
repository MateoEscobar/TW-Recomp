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

// Function: sub_001C1AE0
// Address: 0x1c1ae0 - 0x1c1b10
void sub_001C1AE0_0x1c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1AE0_0x1c1ae0");
#endif

    switch (ctx->pc) {
        case 0x1c1afcu: goto label_1c1afc;
        default: break;
    }

    ctx->pc = 0x1c1ae0u;

    // 0x1c1ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1ae8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c1aec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1AECu;
    {
        const bool branch_taken_0x1c1aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AECu;
        // 0x1c1af0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1aec) {
            ctx->pc = 0x1C1B00u;
            goto label_1c1b00;
        }
    }
    ctx->pc = 0x1C1AF4u;
    // 0x1c1af4: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1C1AF4u;
    SET_GPR_U32(ctx, 31, 0x1C1AFCu);
    ctx->pc = 0x1C1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AF4u;
    // 0x1c1af8: 0x8c8500bc  lw          $a1, 0xBC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1C1AF4u, 0x1C1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c1afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c1b00:
    // 0x1c1b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1b04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c1b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B08u;
        // 0x1c1b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1B10u;
}
