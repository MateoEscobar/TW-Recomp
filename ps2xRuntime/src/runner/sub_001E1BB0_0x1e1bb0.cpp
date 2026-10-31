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

// Function: sub_001E1BB0
// Address: 0x1e1bb0 - 0x1e1be0
void sub_001E1BB0_0x1e1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1BB0_0x1e1bb0");
#endif

    ctx->pc = 0x1e1bb0u;

    // 0x1e1bb0: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1e1bb4: 0x8c8600ac  lw          $a2, 0xAC($a0)
    ctx->pc = 0x1e1bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x1e1bb8: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x1e1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1e1bbc: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x1e1bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1bc0: 0x8c8700a4  lw          $a3, 0xA4($a0)
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1e1bc4: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1e1bc4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1e1bc8: 0x38a50003  xori        $a1, $a1, 0x3
    ctx->pc = 0x1e1bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x1e1bcc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e1bd0: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1e1bd0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e1bd4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1e1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1e1bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BD8u;
        // 0x1e1bdc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1BE0u;
}
