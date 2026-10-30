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

// Function: sub_001C8DC8
// Address: 0x1c8dc8 - 0x1c8e08
void sub_001C8DC8_0x1c8dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8DC8_0x1c8dc8");
#endif

    switch (ctx->pc) {
        case 0x1c8ddcu: goto label_1c8ddc;
        default: break;
    }

    ctx->pc = 0x1c8dc8u;

    // 0x1c8dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8dd4: 0xc06ec78  jal         func_1BB1E0
    ctx->pc = 0x1C8DD4u;
    SET_GPR_U32(ctx, 31, 0x1C8DDCu);
    ctx->pc = 0x1C8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DD4u;
    // 0x1c8dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1E0u, 0x1C8DD4u, 0x1C8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DDCu;
label_1c8ddc:
    // 0x1c8ddc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c8de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8de4: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x1c8de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dec: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1c8df0: 0xae050558  sw          $a1, 0x558($s0)
    ctx->pc = 0x1c8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 5));
    // 0x1c8df4: 0xae04054c  sw          $a0, 0x54C($s0)
    ctx->pc = 0x1c8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 4));
    // 0x1c8df8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1c8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1c8dfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E00u;
        // 0x1c8e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E08u;
}
